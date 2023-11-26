#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the value of character: "<<endl;
    cin>>ch;
    int ascii = ch;
    
    if(ascii >= 48 && ascii <= 57){
        cout<<"Entered value is Numeric!"<<endl;
    }
    else if(ascii >= 65 && ascii <= 90){
        cout<<"Entered value is UpperCase!"<<endl;
    }
    else if(ascii >= 97 && ascii <=122){
        cout<<"Entered value is LowerCase!"<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }

    return 0;
}