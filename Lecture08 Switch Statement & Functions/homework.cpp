#include <iostream>
using namespace std;

int main(){

    int amount;
    int noteOf100 = 0, noteOf50 = 0, noteOf20 = 0, noteOf1 = 0;

    cout << "Enter the Amount!" << endl;
    cin >> amount;

    switch (amount >= 100)
    {
    case 1:
        noteOf100 = amount / 100;  // We will get the number of notes
        amount %= 100;             // For remaining amount
        break;
    }

    switch (amount >= 50)
    {
    case 1:
        noteOf50 = amount / 50;
        amount %= 50;
        break;
    }
    switch (amount >= 20)
    {
    case 1:
        noteOf20 = amount / 20;
        amount %= 20;
        break;
    }
    noteOf1 = amount;

    cout << "100 Rupees note = " <<noteOf100 << endl; 
    cout << "50 Rupees note = " <<noteOf50 << endl; 
    cout << "20 Rupees note = " <<noteOf20 << endl; 
    cout << "1 Rupees note = " <<noteOf1 << endl; 

    return 0;
}

/*

    OUTPUT: 

    if n = 1330

    100 Rupees note = 13
    50 Rupees note = 0
    20 Rupees note = 1
    1 Rupees note = 10

*/