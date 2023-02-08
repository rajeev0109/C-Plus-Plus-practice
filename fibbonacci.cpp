#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    int a = 0, b = 1;
    // int term;
    cout<<a<< " " << b<<" ";
    for(int i = 1; i <= n; i ++){
        int nextFib = a + b;
        cout<<nextFib<< " ";

        a = b;
        b = nextFib;
        // term = nextFib;
    }
    
    // cout<<endl<<term;

    return 0;
}