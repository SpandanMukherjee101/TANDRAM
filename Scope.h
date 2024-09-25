#ifndef SCOPE_H
#define SCOPE_H

#include <string>
#include <map>
#include <memory>
#include <functional>
#include <vector>
#include "Function.h"

class Scope {
public:
    void define_variable(const std::string& name, double value);
    double get_variable(const std::string& name);
    void define_function(const std::string& name, std::shared_ptr<Function> function);
    std::shared_ptr<Function> get_function(const std::string& name);

private:
    std::map<std::string, double> variables;
    std::map<std::string, std::shared_ptr<Function>> functions;
};

#endif
