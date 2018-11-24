#include "rock.h"

namespace rock {
    std::string lastVarName;

    Var& operator>(Vars& lhs, const std::string& rhs) {
        lastVarName = rhs;
        return lhs[rhs];
    }

    void say(Var var) {
        std::visit([](auto v) {std::cout << v.toString().val << std::endl;}, var);
    }

    void listen(Var& var) {
        std::string line;
        std::getline(std::cin, line);
        var = rock::String(line);
    }
}