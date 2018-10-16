#include <cassert>
#include "sum.cpp"

auto main() -> int {
    std::ifstream input("input.txt");
    std::ofstream output("output.txt");
    assert(input);
    assert(output);
    output << sum(input);
    input.close();
    output.close();
    return 0;
}