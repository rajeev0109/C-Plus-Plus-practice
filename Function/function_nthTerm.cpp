#include<iostream>
using namespace std;


int nthTerm(int x){
    return 3*x + 7;
}

int main(){
    int n;
    cin>>n;
    cout<<nthTerm(n)<<endl;
    return 0;
}