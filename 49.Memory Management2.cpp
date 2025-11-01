

#include <iostream>
using namespace std;

int main()
{
	int arraySize = 0;

	cout << "What is the size of array? ";
	cin >> arraySize;

	//we are using heap so that we can decide size
	//after we start the progmra otherwise we cant
	int* array = new int[arraySize];

	for (int i = 0; i < arraySize; i++) {
		cout << "Please type the " << i+1 << ". elements of array ";
		cin >> array[i];
	}
	
	cout << "Elements of your array "<<endl;

	for(int i = 0;i < arraySize;i++){
		cout << array[i];
	}

}

