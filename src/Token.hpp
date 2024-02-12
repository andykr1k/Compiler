using namespace std;

enum class TokenType {
    _return,
    _int,
    _semi
};

struct Token {
    TokenType _type;
    string _value;
};
