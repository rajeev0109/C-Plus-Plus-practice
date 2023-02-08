#include<iostream>
using namespace std;

string removePart(string str, string part){
    while(str.length()!=0 && str.find(part)<str.length()){
        str.erase(str.find(part), part.length());
    }
    return str;
}

int main(){
    string s, part;
    cout<<"Enter the full string: ";
    cin>>s;
    cout<<"Enter the part to be removed: ";
    cin>>part;
    cout<<removePart(s, part);



    return 0;

}