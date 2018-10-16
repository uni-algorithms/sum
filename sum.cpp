#ifndef SUM_CPP
#define SUM_CPP

#include <fstream>
#include <iterator>
#include <numeric>
#include <vector>

template<typename T>
auto parseStream(std::istream &stream) -> std::vector<T> {
    std::vector<T> v;
    std::istream_iterator<T> input(stream);
    std::copy(input, std::istream_iterator<T>(), std::back_inserter(v));
    return v;
}

auto sum(std::istream &input) -> int {
    std::vector<int> v = parseStream<int>(input);
    return std::accumulate(v.rbegin(), v.rend(), 0);
}

#endif //SUM_CPP
