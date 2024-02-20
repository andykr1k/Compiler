class Parser{
    public:
        vector<Token> tokens;
        
        inline void createASMFile(){
            file << "   global _start"
            for (int i = 0; i < parsed_asm_contents.size(); i++) {
                
            }
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
