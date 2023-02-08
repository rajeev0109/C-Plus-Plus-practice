#include<iostream>
using namespace std;


int factorial(int x){

    int fact = 1;
    if(x==0){
        return 1;
    }
    for(int i = 1; i<=x; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int x, int y){

    int num, den;

    num = factorial(x);
    den = factorial(y)*factorial(x-y);

    return num/den;
}


int main(){

    int n, r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;

    return 0;
}