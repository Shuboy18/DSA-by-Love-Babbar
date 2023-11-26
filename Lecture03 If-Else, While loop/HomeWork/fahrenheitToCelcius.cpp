#include<iostream>
using namespace std;

int main(){
    int fahrenheit;
    cout<<"Enter the value of n: "<<endl;
    cin>>fahrenheit;
    int toCelcius = (fahrenheit - 32) * 5/9;

    cout<<toCelcius<<endl;

    return 0;
}