#include <iostream>
using namespace std;

int arr[20];
int n;


void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan  Elemen Array" << endl;
	cout << "======================" << endl;
	
	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void BubbleSortArray() {
	int pass = 1;

	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		pass = pass + 1;

		cout << "\nPass" << pass - 2 << ": ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}
		cout << endl;

	} while (pass <= n + 1);
}

void display() {
	cout << endl;
	cout << "====================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "====================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {
	input();
	BubbleSortArray();
	display();
	system("pause");

	return 0;
}