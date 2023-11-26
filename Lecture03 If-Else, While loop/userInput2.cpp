#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    n = cin.get();
    cout<<"The value of n is: "<<n<<endl;

    return 0;
}

// Here using cin.get(); function we can able to read Space, Tab, etc,
// It basically reads the input and treat as characters and return the value based on ASCII table