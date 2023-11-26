#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    for(int i = 0; i <= n; i++){
        cout<<"Hello";
    }

    return 0;
}

//In for loop the very first thing is initialization means the counting will start from zero(int i = 0);
//Then after it comes condition it means the loop will keep on going until the above condition is fullfilled
//like if the n is supposed to be 5 then the loop starts from 0 and it will stop if the i become greater than 5 i.e 6
//i.e the condition was(i <= n);
//After that it comes increment operator to increase the value of i we use(i++)

// OUTPUT
//It will print Hello 6 times