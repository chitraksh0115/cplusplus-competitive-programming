//Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
#include<iostream>
using namespace std;
int main() {
    int a,b; cin>>a>>b;
    if (a>=1 && b>=1 && a<=1e6 && b<=1e6) {
        if ( a%b== 0) {
            cout<<"Multiples"<<endl;
        }
        else if (b%a==0) {
            cout<<"Multiples"<<endl;
        }
        else {
            cout<<"No Multiples"<<endl;
        }
    }
    else {
        cout<<"Numbers are not in range"<<endl;
    }
    return 0 ;
}
