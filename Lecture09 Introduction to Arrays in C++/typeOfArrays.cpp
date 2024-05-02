#include <iostream>
using namespace std;

void printArray(char arr[], int size){

    cout << "Printing the Array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl << "Printing Done!" << endl;
    
};

int main(void){

    char ch[6] = {'S', 'H', 'U', 'B', 'O', 'Y'};

    printArray(ch, 6);

}


//Similarly we can create arrays with different data types like of bool, double. float, etc;

/*

    OUTPUT: 

    Printing the Array: 
    S H U B O Y 
    Printing Done!

*/