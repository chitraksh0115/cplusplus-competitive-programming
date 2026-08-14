//Given two person names.
//Each person has {"the first name" + "the second name"}
//Determine whether they are brothers or not.
//Note: The two persons are brothers if they share the same second name.
#include<iostream>
using namespace std;
int main(){
    string F_1 , S_1; cin>> F_1>>S_1;
    string F_2 ,S_2;cin>>F_2>>S_2;
    if (S_1==S_2) {
        cout<<"ARE Brothers"<<endl;
    }
    else {
        cout<<"NOT"<<endl;
    }
    return 0;
}

