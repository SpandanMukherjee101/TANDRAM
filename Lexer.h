#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <vector>

class Token {
public:
    enum class Type {
        Identifier, Number, String, LParen, RParen, LBracket, RBracket, 
        Plus, Minus, Multiply, Divide, Equal, If, While, For, Function, 
        Return, Class, EOFToken, Unknown
    };

    Type type;
    std::string value;
    
    Token(Type t, std::string v) : type(t), value(v) {}
};

class Lexer {
public:
    Lexer(const std::string& script);
    Token next_token();

private:
    std::string script;
    size_t current_pos = 0;
    char current_char() const;
    void advance();
    Token parse_number();
    Token parse_identifier();
};

#endif
