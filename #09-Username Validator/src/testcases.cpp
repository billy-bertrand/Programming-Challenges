#include "testcases.h"

/**
 * @brief tells whether "parameter" length >=8 AND <=15
 * 
 * @param username 
 * @return boolean 
 */
bool lengthTest (std::string username){
    return (username.length() >= 8 && username.length() <= 15 );
}

/**
 * @brief tells whether "parameter" contains special characters.
 * Meaning it contains any character, but alpha-numeric characters.
 * 
 * @param username 
 * @return boolean
 */
bool noSpecialCharsTest (std::string username){
    std::regex rgx ("[^a-zA-Z0-9]");
    return !(std::regex_search(username, rgx));
}

/**
 * @brief tells whether "parameter" contains
 * no "space" character.
 * 
 * @param username 
 * @return boolean
 */
bool noSpaceTest (std::string username){
    std::regex rgx ("\\s");
    return !(std::regex_search(username, rgx));
}

/**
 * @brief tells whether "parameter" starts with
 * one alpha character (lowercase & uppercase)
 * 
 * @param username 
 * @return boolean
 */
bool firstCharTest (std::string username){
    std::regex rgx ("^[a-zA-Z]");
    return std::regex_search(username, rgx);
}

/**
 * @brief tells whether "parameter" ends with
 * one alpha character (lowercase & uppercase)
 * 
 * @param username 
 * @return boolean
 */
bool lastCharTest (std::string username){
    std::regex rgx ("[a-zA-Z]$");
    return std::regex_search(username, rgx);
}

/**
 * @brief tells whether "parameter" contains at least
 * ONE upper case letter.
 * 
 * @param username 
 * @return boolean 
 */
bool upperCaseTest (std::string username){
    std::regex rgx ("[A-Z]");
    return std::regex_search(username, rgx);
}

/**
 * @brief tells whether "parameter" contains at
 * least ONE lower case letter.
 * 
 * @param username 
 * @return boolean 
 */
bool lowerCaseTest (std::string username){
    std::regex rgx ("[a-z]");
    return std::regex_search(username, rgx);
}

/**
 * @brief tells whether "parameter" contains at
 * least ONE numeric character.
 * 
 * @param username 
 * @return boolean
 */
bool numericTest(std::string username){
    std::regex rgx ("[0-9]");
    return std::regex_search(username, rgx);
}