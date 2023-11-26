#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    int i = 1;

    while ( i <= n )
    {
        cout<<i<<" "<<endl;
        i++;
    }

    return 0;
}

//Unlike for loop in while loop we just have to mention the condition only
//The loop continues to iterate as long as the condition remains true, and it terminates when the condition becomes false.
//Suppose if n is 5, then 

//OUTPUT
// 1
// 2
// 3
// 4
// 5