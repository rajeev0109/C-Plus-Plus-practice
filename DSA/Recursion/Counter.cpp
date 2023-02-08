#include<iostream>
using namespace std;

void count(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";// reverse counter if head relation
    count(n-1);
    cout<<n<<" ";// normal counter if tail relation
    
}

int main(){
    int n;
    cin>>n;

    count(n);
}