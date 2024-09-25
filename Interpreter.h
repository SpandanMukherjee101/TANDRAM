#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <memory>
#include <string>
#include <map>
#include <vector>
#include <functional>
#include "Lexer.h"
#include "Parser.h"
#include "Scope.h"
#include "BuiltInFunctions.h"

// Function class to represent user-defined functions
class Function {
public:
    virtual double invoke(const std::vector<double>& args) = 0;
};

// Interpreter class to execute scripts
class Interpreter {
public:
    void execute_script(const std::string& script);
private:
    Lexer lexer;
    Scope scope;
    Parser parser;
};

#endif
