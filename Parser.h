#ifndef PARSER_H
#define PARSER_H

#include <memory>
#include <string>
#include <vector>
#include "Lexer.h"
#include "Scope.h"

class Parser {
public:
    Parser(Lexer& lexer, Scope& scope);
    void parse();
private:
    Lexer& lexer;
    Scope& scope;
    Token current_token;
    void parse_statement();
    void parse_function_definition();
    void parse_class_definition();
    void parse_if_statement();
    void parse_while_statement();
    void parse_for_statement();
    void parse_expression();
    void expect_token(Token::Type type);
};

#endif
