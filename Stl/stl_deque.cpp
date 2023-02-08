#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(1);

    int size = d.size();

    cout<<size<<endl;


    for(int i=0; i<size; i++){
        cout<<d.at(i)<<" ";
    }
    cout<<endl;

    d.pop_back();

    int size1 = d.size();

    cout<<size1<<endl;
    for(int i=0; i<size1; i++){
        cout<<d.at(i)<<" ";
    }


}

