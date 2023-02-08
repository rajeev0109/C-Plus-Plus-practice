#include<iostream>
using namespace std;

void saydigit(int n){
    string arr[10] = {"zero", "one" ,"two" ,"three" ,"four" ,"five" ,"six" ,"seven" ,"eight" ,"nine"};
    if (n==0) return;

    int digit = n%10;
    n /= 10;

    saydigit(n);
    cout<<arr[digit]<<" ";
}

int main(){
    int n;
    cin>>n;

    saydigit(n);

    return 0;
}