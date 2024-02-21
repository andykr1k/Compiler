#include "Token.hpp"

class Tokenizer{
    public:
        string file_source;

        inline void Tokenize(){
            string buf;

            while (file_index < file_source.size()) {
               if (file_source[file_index] == ' ') {
                    tokens.push_back(createToken(buf));
                    buf = "";
                    consume();
               } else if ( file_source[file_index] == ';') {
                   tokens.push_back(createToken(buf));
                   buf = "";
                   buf.push_back(consume());
                   tokens.push_back(createToken(buf));
                   buf = "";
               } else {
                    buf.push_back(consume());
               }
             }
        }

        inline vector<Token> getTokens(){
            return tokens;
        }

    private:

        int file_index = 0;
        
        vector<Token> tokens;

        inline char peak( int offset = 1){
            if (file_index + offset <= file_source.size()) {
                return file_source[file_index + offset]; 
            }
        }

        inline char consume(){
            return file_source[file_index++];
        }

        inline Token createToken(const string& buf){
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

        inline bool is_digits(const string& str) {
            for (char ch : str) {
                int v = ch;
                if (!(ch >= 48 && ch <= 57)) {
                    return false;
                }
            }
            return true; 
        }
};
