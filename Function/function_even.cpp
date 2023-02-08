#include<iostream>
using namespace std;


bool isEven(int x){
    if(x&1){
        return 0;
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isEven(n)){
        cout<<n<<" is even."<<endl;
    }
    else{
        cout<<n<<" is odd."<<endl;
    }
}