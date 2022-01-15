//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef MAP_HPP
#define MAP_HPP

#include <map>
#include <utility>

/**
 * Wraps std::map with an alias.
 * @brief Collection of key-value pairs, sorted by keys; keys are unique.
 * @details
 * std::map is a sorted associative container that contains key-value pairs with
 * unique keys. Keys are sorted by using the comparison function Compare. Search,
 * removal, and insertion operations have logarithmic complexity. Maps are usually
 * implemented as red-black trees.
 * @source
 * https://en.cppreference.com/w/cpp/container/map
 */
template <
    class KeyType, class MappedType, class Compare = std::less<KeyType>, class Allocator
    = std::allocator<
        std::pair<const KeyType, MappedType>
    >
> using Map = std::map<KeyType, MappedType, Compare, Allocator>;

/**
 * Wraps std::multimap with an alias.
 * @brief Collection of key-value pairs, sorted by keys.
 * @details
 * Multimap is an associative container that contains a sorted list of key-value pairs,
 * while permitting multiple entries with the same key. Sorting is done according to
 * the comparison function Compare, applied to the keys. Search, insertion, and removal
 * operations have logarithmic complexity.
 * <p>
 * The order of the key-value pairs whose keys compare equivalent is the order of insertion
 * and does not change.
 * @source
 * https://en.cppreference.com/w/cpp/container/multimap
 */
template <
    class KeyType, class MappedType, class Compare = std::less<KeyType>, class Allocator
    = std::allocator<std::pair<const KeyType, MappedType>>
> using MultiMap = std::multimap<KeyType, MappedType, Compare, Allocator>;

#endif //MAP_HPP
