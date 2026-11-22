#include <iostream>
using namespace std;
int main() {
    int a,b,x;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"a : ";
    cout<<a<<"\n";
    cout<<"b : ";
    cout<<b<<endl;
    cout<<"Swapping numbers"<<endl;
    swap(a,b);
    cout<<"a: "<<a<<"\n";
    cout<<"b: "<<b<<"\n";
    return 0;
}
