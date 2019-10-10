#include<iostream>
#include<string>
#include<cstdlib>
#include <ctime>
using namespace std;

bool isPunctuation(char c){
    if ((c==';')|(c=='.')|(c==',')|(c=='!')|(c=='?')|(c==':')|(c==' ')){
        return true;
    }
    else{
        return false;
    }
}

bool findSecondWord(std::string input_str, std::string &second){
    int i = 0;
    int a = 1;
    //input_str+='.';
    while (input_str[i]!=' '){
        i+=1;
    }
    a=0;
    while((!isPunctuation(input_str[i+1+a]))&(i+a+1<input_str.size())){
        a+=1;
    }
    string sec;
    int b;
    for (b=0;b<a;b++){
        sec+=input_str[i+b+1];
    }
    second=sec;
    if (a!=1){
        return true;
    }
    else{
        return false;
    }
}

char randLetter(){
    return ((rand() % (122 - 97)) + 97);
}

int hamming (string a, string b){
    int count = 0;
    int i;
    for (i=0;i<a.size();i++){
        if ((a[i]==b[i])&!(a[i]=' ')){
            count+=1;
        }
    }
    return count;
}

string obfuscate(string a){
    string out;
    int i;
    char q;
    for (i=0;i<a.size();i++){
        if (a[i]==' '){
            out+=' ';
        }
        else{
            out+=randLetter();
        }
    }
    return out;
}

int main(){
    srand(time(NULL));
    string a;
    std::getline(std::cin, a);
    string b = obfuscate(a);
    std::cout<<b;
    std::cout<<' ';
    std::cout<<hamming(a,b)<<std::endl;
}