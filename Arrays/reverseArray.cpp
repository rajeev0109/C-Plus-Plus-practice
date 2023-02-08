#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> reverseArr(vector<int> arr, int n){

    int s=0, e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;

}
void printArray(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);

    printArray(arr, 4);
    vector<int> ans = reverseArr(arr, 4);
    printArray(ans, 4);
    return 0;
}