
//Given three numbers A,B,C. Print these numbers in ascending order
//followed by a blank line and then the values in the sequence as they were read.
#include<iostream>
using namespace std;
int main() {
    long long  a,b,c;
    cin>>a>>b>>c;
    if (a>=-1e6 && b>=-1e6 && c>=-1e6 && a<=1e6 && b<=1e6 && c<=1e6) {
        if (a>=b && a>=c && b>=c) {
            cout <<c<<endl;
            cout<<b<<endl;
            cout<<a<<endl;
        }
        else if (a>=b && a>=c && c>=b) {
            cout <<b<<endl;
            cout<<c<<endl;
            cout<<a<<endl;
        }
        else if (c>=a && a>=b && c>=b) {
            cout<<b<<endl;
            cout<<a<<endl;
            cout<<c<<endl;
        }
        else if (c>=b && b>=a && c>=a) {
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
        }
        else if (b>=c && c>=a && b>=a) {
            cout<<a<<endl;
            cout<<c<<endl;
            cout<<b<<endl;
        }
        else {
            cout<<c<<endl;
            cout<<a<<endl;
            cout<<b<<endl;
        }
        cout<<""<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    else {
        cout<<"Numbers are not in range"<<endl;
        cout<<"Please enter the right numbers"<<endl;
    }
    return 0;
}