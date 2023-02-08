#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){

    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkPalindrome(str, ++i, --j);
    }

}

int main(){

    string name = "Rajeev";

    if(checkPalindrome(name, 0, name.length()-1)){
        cout<<"Its a Palindrome.";

    }
    else{
        cout<<"Its not a Palindrome.";
    }




    return 0;
}