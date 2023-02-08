#include<iostream>
using namespace std;

int power(int a, int b){
    int res = 1;
    while(b>0){
        if(b&1){
            res = 1LL * res * a;
        }
        a = 1LL * a * a;
        b = b>>1;
    }
    return res;
}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<"a^b = "<<power(a,b)<<endl;






    return 0;
}