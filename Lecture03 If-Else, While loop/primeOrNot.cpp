#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;


    //While Loop

    int i = 2;

    while (i < n)
    {
        if (n%2 == 0)
        {
            cout<<"Not Prime "<<endl;
        }else{
            cout<<"Prime"<<endl;
        }
        i++;
    }

    //For loop
    for (int i = 2; i < n; i++)
    {
        if (n%2 == 0)
        {
            cout<<"Not Prime "<<endl;
        }else{
            cout<<"Prime "<<endl;
        }   
    }
    

    return 0;
}