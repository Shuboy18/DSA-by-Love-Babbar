#include<iostream>
#include<math.h>

using namespace std;

int main() {
    
    long long int n;
    unsigned long long int i=0, ans=0;
    
    cout<<"Enter Negative Number : ";
    cin>>n;
    
    if (n<0) {
        n = pow(2, 16) + n; //If user inputs positive number then this will be executed
    }
    
    while (n!=0) {
        int bit = n&1;
        
        ans = bit * pow(10, i) + ans;
        
        n = n>>1;
        i++;
    }
    
    cout<<"Binary Number : "<<ans<<endl;

    return 0;

    /*
    
    OUTPUT:

    N = -4
    Binary Number : 1111111111111095
    
    */
}