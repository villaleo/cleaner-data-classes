//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef SET_HPP
#define SET_HPP

#include <set>

/**
 * Wraps std::set with an alias.
 * @brief Collection of unique keys, sorted by keys.
 * @details
 * std::set is an associative container that contains a sorted set of unique objects
 * of type Key. Sorting is done using the key comparison function Compare. Search,
 * removal, and insertion operations have logarithmic complexity. Sets are usually
 * implemented as red-black trees.
 * @source
 * https://en.cppreference.com/w/cpp/container/set
 */
template <
    class KeyType, class Compare = std::less<KeyType>, class Allocator = std::allocator<KeyType>
> using Set = std::set<KeyType, Compare, Allocator>;

/**
 * Wraps std::multiset with an alias.
 * @brief Collection of keys, sorted by keys.
 * @details
 * std::multiset is an associative container that contains a sorted set of objects
 * of type Key. Unlike set, multiple keys with equivalent values are allowed.
 * Sorting is done using the key comparison function Compare. Search, insertion,
 * and removal operations have logarithmic complexity.
 * @source
 * https://en.cppreference.com/w/cpp/container/multiset
 */
template <
    class KeyType, class Compare = std::less<KeyType>, class Allocator = std::allocator<KeyType>
> using MultiSet = std::multiset<KeyType, Compare, Allocator>;

#endif //SET_HPP
