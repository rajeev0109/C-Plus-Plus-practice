#include<iostream>
using namespace std;

void reverse(string& str, int i){

    cout<<"function is calling for "<<str<<" "<< i<<" "<<str.length()-i-1<<endl;
    // Base case
    if(i>str.length()-i-1){
        return ;
    }
    swap(str[i], str[str.length()-i-1]);
    // i++;
    // j--;

    reverse(str, ++i);

}


int main(){
    string name = "Rajeev";

    reverse(name, 0);

    cout<<name<<endl;

    return 0;
}