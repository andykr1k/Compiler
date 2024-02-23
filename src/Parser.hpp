class Parser{
    public:
        vector<Token> tokens;
        
        inline void createASMFile(){
            ofstream ASMFile("outputs/out.asm");
            
            ASMFile << ".global _start\n";
            ASMFile << "_start: ";
            
            for (int i = 0; i < parsed_asm_contents.size(); i++) {
               file << parsed_asm_contents[i]; 
            }
            
            ASMFile.close();
        }

    private:
        inline void parseTokens(){
            for (int i = 0; i < tokens.size(); i++) {
                switch(tokens[i]._type){
                    case _return:
                        parsed_asm_contents.push_back();

                    case _int:
                        parsed_asm_contents.push_back();

                    case _semi:
                        parsed_asm_contents.push_back();
                }
            }   
        }

        vector<String> parsed_asm_contents;
};
