#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    int n = v.size();
    for(int i=0; i<n; i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    // cout<<"Element at index 1-->"<<v.at(1);

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    v.clear();
    cout<<v.size();



}