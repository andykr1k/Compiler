#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Tokenizer.hpp"

int main() {
   
    fstream inputFile;
    
    string file_path = "./inputs/input.txt";

    inputFile.open(file_path, ios::in);

    string file_contents;

    {
        if (inputFile.is_open()) {
            while (getlineminputFile, file_contents)) {
                file_contents << inputFile;
            }
        } else {
            cout << "Error: Could Not Open File!" << endl;
            return EXIT_FAILURE;
        } 
    }

    vector<Token> tokens = Tokenize(file_contents);
    
    return EXIT_SUCCESS;
}
