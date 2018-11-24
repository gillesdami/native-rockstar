#pragma once

#include <string>
#include <iostream>
#include <functional>
#include <map>
#include "types/Var.h"

namespace rock {
    using Vars = std::map<std::string, Var>;

    std::string extern lastVarName;
    Var& operator>(Vars& lhs, const std::string& rhs);

    void listen(Var& var);
    void say(Var var);
}