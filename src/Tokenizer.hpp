#include "Token.hpp"

bool is_digits(const string& str) {
    for (char ch : str) {
        int v = ch;
        if (!(ch >= 48 && ch <= 57)) {
            return false;
        }
    }
    return true; 
}

Token createToken(const string& buf){
    Token token;
    if (!is_digits(buf)) {
        if ( buf == "return" ) {
            token._type = TokenType::_return;
        } else if ( buf == ";" ) {
            token._type = TokenType::_semi;
        }
    } else {
        token._type = TokenType::_int;
    }
    token._value = buf;

    return token;
}

vector<Token> Tokenize(const string& str){
    
    vector<Token> tokens;
    string buf;

    for (int i = 0; i < str.length(); i++) {        
        if (str[i] != ' '){
            buf.push_back(str[i]);
        } else {
            tokens.push_back(createToken(buf));
            buf = "";
        }
    }
    
    return tokens;
}
