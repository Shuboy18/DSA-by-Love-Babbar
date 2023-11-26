#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    //Using for loop
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;              // sum = sum + i;
    }

    cout<<"Sum of the total number is: "<<sum<<endl;

    //Using while loop

        int i = 1;
        while (i <= n)
        {
            sum += i;
            i++;
        }

        cout<<"Sum of the total number is: "<<sum<<endl;
        
    return 0;
}