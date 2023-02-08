#include<iostream>
using namespace std;

int main(){

    string s;
    cin>>s;

    int count1 = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            cout<<s[i];
            count1++;
        }
    }
    cout<<endl<<count1;


    return 0;
}