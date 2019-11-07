#include <iostream>
#include <numeric>
#include <iterator>

namespace vectormath{
    template <class Iter, class T>
    T mean(Iter begin, Iter end, T init){
        T total = std::accumulate(begin, end, init);
        std::cout << "total = " << total << std::endl;
        return total / static_cast<T>(std::distance(begin, end));
    }

    /*
     * Instead of creating a sum() function, just used std::accumulate.
     * Does the same thing.
     *
     * template <class Iter, class T>
     * T sum(Iter begin, Iter end, T init);
     */
} // namespace vectormath

