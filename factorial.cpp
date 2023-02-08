#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n == 0){
        cout<<1;
    }
    else{
        int fact = 1;
        while( n >= 1){
            fact *= n;
            n--;
        }
        cout<<fact<<endl;
    }
    return 0;
}