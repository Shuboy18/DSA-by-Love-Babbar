#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    //Using for loop

    for (int i = 2; i <= n; i+=2) //Here I initialized the i with 2 because the even number starts from 2 and I incremented the i with 2 to always jump on even numbers only.
    {
        cout<<i<<endl;
    }
    
    //Using while loop
    int i = 2;

    while (i<=n)
    {
        cout<<i<<endl;
        i+=2;
    }

    return 0;
}