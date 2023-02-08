#include<iostream>
using namespace std;

void counting(int x){
    for(int i = 1; i <= x; i++){
        cout<<i<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    counting(n);
    return 0;
}