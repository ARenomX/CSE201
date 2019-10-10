#include<iostream>
#include<string>
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

int main(){
    string a;
    string second;
    std::getline(std::cin, a);
    findSecondWord(a,second);
    std::cout<<second;
    std::cout<<" (";
    std::cout<<second.size();
    std::cout<<')'<<std::endl;
}