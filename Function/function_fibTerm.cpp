#include<iostream>
using namespace std;

int fibTerm(int x){

    int a = 0, b = 1, c;
    for(int i = 1; i <= x-2; i++){
        c = a + b;

        a = b;
        b = c;
    }
    return c;

}

int main(){
    int n;
    cin>>n;
    cout<<fibTerm(n);
}