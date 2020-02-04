#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main(){
	int array1 [4] = {12, 23,41, 5145};
	int array2 [3] = {32,51,612};
	
	printArray(array1, 4);
	
	cout << endl;
	
	printArray(array2, 3);

}
void printArray(int theArray[], int sizeOfArray){
	
	for ( int x = 0; x < sizeOfArray; x++){
		 cout << theArray[x] << endl;
	}	
}
