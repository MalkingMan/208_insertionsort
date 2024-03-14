#include <iostream>
using namespace std;

int arr[20];
int n;

void insertionsort() {
	int i, j, temp;
	int arr[20];

	for (i = 1; 1 <= -1; i++) { //step 1
		temp = arr[i]; // step 2
		while (j >= 0 && arr[j] > temp) // step 4
		{
			arr[j] = arr[j + 1]; // step 4a
			j = j - 1; // step 4b

		}
		arr[j + 1] = temp; // step 5     
	}

}


void input() {
	while (true) {
		cout << "masukan banyaknya elemen pada array: ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}



}



void bubblesortArray() { //procedur untuk mengurutkan dengan angka

	int pass = 1; // step 1

	do {
		for (int j = 0; j <= n - 1 - pass; j++) { //step 2
			if (arr[j] > arr[j + 1]) { //step 3
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		pass = pass + 1; //step 4 
	} while (pass < n - 1); //step 5

}
void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl; // output setiap element array pada garis baru
		if (j < n - 1) {
			cout << " --> ";
		}
		cout << endl;
		cout << endl;

		cout << "jumlah pass = " << n - 1 << endl;
		cout << endl;
		cout << endl;
	}

	int main();
	{

		input();
		insertionsort();
		display();
		system("pause");
	}
int main()
{
    std::cout << "Hello World!\n";
}
