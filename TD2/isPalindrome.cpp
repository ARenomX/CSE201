#include<iostream>
#include<string>
using namespace std;

// is the entire string str a palindrome?
bool isPalindrome(std::string str){
    if(str.size()<=1){
        return true;
    }
    else{
        if (str[0]==str[str.size()-1]){
            return isPalindrome(str.substr(1,str.size()-2));
        }
        else{
            return false;
        }
    }
}

// is the substring of str between [start, end] a palindrome?
bool isPalindromeAux(std::string &str, int start, int end){
    return isPalindrome(str.substr(start,end));
}

int main(){
    std::string a;
    std::cin>>a;
    std::cout<<isPalindrome(a)<<std::endl;
    return 0;
}