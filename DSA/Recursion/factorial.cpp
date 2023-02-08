#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }

    int chotiProblem = factorial(n-1);
    int badiProblem = n * chotiProblem;

    return badiProblem;
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;
}