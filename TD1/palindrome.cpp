//palindrome//

#include <iostream>
#include <string>


int main(){
    std::cout<< "please enter the length of your word: ";
    int length;
    std::cin >> length;
    std::cout<< "Please enter your word: ";
    std::string user;
    std::cin >> user;
    std::string check = "Is a Palindrome";
    for (int i=0;i<length;i++){
        if (user[i]!=user[length-1-i]){
            check = "Is not a Palindrome";
        }
    }
    std::cout<< check << std::endl;
    return 0;
}