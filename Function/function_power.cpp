#include<iostream>
using namespace std;


int pow(){
    int a, b, ans = 1;
    cin>>a>>b;

    for(int i = 1; i<=b; i++){
        ans *= a;
    }
    return ans;
}

int main(){

    cout<<pow();
    
    return 0;
}