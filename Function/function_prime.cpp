#include<iostream>
using namespace std;


bool isPrime(int x){
    for(int i = 2; i <= x/2; i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is Prime";
    }
    else{
        cout<<n<<" is not Prime";
    }

    return 0;
}