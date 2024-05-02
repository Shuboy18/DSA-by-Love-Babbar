#include <iostream>
using namespace std;

// Taking Input 

int takingInput(int number[], int size){

    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }

    return 0;
}

// Linear Search

bool linearSearch(int number[], int size, int key){

    for (int i = 0; i < size; i++)
    {
       if(number[i] == key){
        
        return 1;
       } 
    }

    return 0;
    
}

int main(void){

    int size;

    cout << "Enter the Size of the Array: " << endl;
    cin >> size;

    int key;

    int number[100];

    takingInput(number, size);

    cout << "Enter the KEY Element: " << endl;
    cin >> key;

    bool found = linearSearch(number, size, key);

    if(found){
        cout << "Key is Present!" << endl;
    }else{
        cout << "Key is Absent!" << endl;
    }

}

/*

    OUTPUT:

    Enter the Size of the Array: 
    5
    Enter the elements of the array: 
    5 7 -2 10 0
    Enter the KEY Element: 
    -2
    Key is Present!

*/