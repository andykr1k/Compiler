#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "Token.hpp"
#include "Tokenizer.hpp"
#include "Parser.hpp"

int main() {
   
    string file_path = "./inputs/input.txt";

    string file_contents;

    {
        stringstream file_contents_stream;
        fstream input(file_path, ios::in);
        file_contents_stream << input.rdbuf();
        file_contents = file_contents_stream.str();
    }
    
    Tokenizer t;
    
    t.file_source = file_contents;

    t.Tokenize();
    
    vector<Token> tokens = t.getTokens();

    for ( int i = 0; i < tokens.size(); i++){
        cout << tokens[i]._value << endl;
    }

    return EXIT_SUCCESS;
}
