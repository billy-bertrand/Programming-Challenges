#include <iostream>
#include <string>
#include "testcases.h"

int main (int argc, char *argv[]){
    //Getting User Input
    std::string userInput;
    std::cout << "Please enter a username: ";
    std::getline(std::cin, userInput);
    
    //Running tests
    bool len_test = lengthTest(userInput);
    bool noSpecialChars_test = noSpecialCharsTest(userInput);
    bool noSpaceChars_test = noSpaceTest(userInput);
    bool firstChar_test = firstCharTest(userInput);
    bool lastChar_test = lastCharTest(userInput);
    bool upperCase_test = upperCaseTest(userInput);
    bool lowerCase_test = lowerCaseTest(userInput);
    bool numeric_test = numericTest(userInput);
    

    //Does user input have the right length?
    if (len_test){
        std::cout << "Test 1 -> Success: Username is between 8 and 15 characters long" << std::endl;
    }else {
        std::cout << "Test 1 -> Failure: Username is NOT between 8 and 15 characters long" << std::endl;
    }

    //Is user input WITHOUT special chars?
    if(noSpecialChars_test){
        std::cout << "Test 2 -> Success: Username contains NO spacial character(s)" << std::endl;
    }else{
        std::cout << "Test 2 -> Failure: Username contains special character(s)" << std::endl;
    }
    
    //Is user input WITHOUT Space chars?
    if(noSpaceChars_test){
        std::cout << "Test 3 -> Success: Username contains NO space character(s)" << std::endl;
    }else{
        std::cout << "Test 3 -> Failure: Username contains space character(s)" << std::endl;
    }

    
    //Does user input start with letter?
    if(firstChar_test){
        std::cout << "Test 4 -> Success: Username starts with a letter" << std::endl;
    }else{
        std::cout << "Test 4 -> Failure: Username does NOT start with a letter" << std::endl;
    }

    //Does user input end with letter?
    if(lastChar_test){
        std::cout << "Test 5 -> Success: Username ends with a letter" << std::endl;
    }else{
        std::cout << "Test 5 -> Failure: Username does NOT end with a letter" << std::endl;
    }

    //Does user input contain one upper case letter?
    if(upperCase_test){
        std::cout << "Test 6 -> Success: Username contains at least one upper case letter" << std::endl;
    }else{
        std::cout << "Test 6 -> Failure: Username does not contain a upper case letter" << std::endl;   
    }

    //Does user input contain one lower case letter?
    if(lowerCase_test){
        std::cout << "Test 7 -> Success: Username contains at least one lower case letter" << std::endl;
    }else{
        std::cout << "Test 7 -> Failure: Username does not contain a lower case letter" << std::endl;
    }

    //Does user input contain one numeric character
    if(numeric_test){
        std::cout << "Test 8 -> Success: Username contains at least one numeric case letter" << std::endl;
    }else{
        std::cout << "Test 8 -> Failure: Username does not contain at least one numeric letter" << std::endl;
    }

    return 0;
}