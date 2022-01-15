//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef UNORDEREDSET_HPP
#define UNORDEREDSET_HPP

#include <unordered_set>

/**
 * Wraps std::unordered_set with an alias.
 * @brief Collection of unique keys, hashed by keys.
 * @details
 * Unordered set is an associative container that contains a set of unique objects
 * of type Key. Search, insertion, and removal have average constant-time complexity.
 * <p>
 * Internally, the elements are not sorted in any particular order, but organized into
 * buckets. Which bucket an element is placed into depends entirely on the hash of its
 * value. This allows fast access to individual elements, since once a hash is computed,
 * it refers to the exact bucket the element is placed into.
 * <p>
 * Container elements may not be modified (even by non const iterators) since modification
 * could change an element's hash and corrupt the container.
 * @source
 * https://en.cppreference.com/w/cpp/container/unordered_set
 */
template <
    class KeyType, class Hash = std::hash<KeyType>, class KeyEqual = std::equal_to<KeyType>, class Allocator
    = std::allocator<KeyType>
> using UnorderedSet = std::unordered_set<KeyType, Hash, KeyEqual, Allocator>;

/**
 * Wraps std::unordered_multiset with an alias.
 * @brief Collection of keys, hashed by keys.
 * @details
 * Unordered multiset is an associative container that contains set of possibly non-unique
 * objects of type Key. Search, insertion, and removal have average constant-time complexity.
 * <p>
 * Internally, the elements are not sorted in any particular order, but organized into buckets.
 * Which bucket an element is placed into depends entirely on the hash of its value. This allows
 * fast access to individual elements, since once hash is computed, it refers to the exact bucket
 * the element is placed into.
 * <p>
 * The iteration order of this container is not required to be stable, except that every group of
 * elements whose keys compare equivalent forms a contiguous sub-range in the iteration order,
 * also accessible with equal_range().
 * @source
 * https://en.cppreference.com/w/cpp/container/unordered_multiset
 */
template <
    class KeyType, class Hash = std::hash<KeyType>, class KeyEqual = std::equal_to<KeyType>, class Allocator
    = std::allocator<KeyType>
> using UnorderedMultiSet = std::unordered_multiset<KeyType, Hash, KeyEqual, Allocator>;

#endif //UNORDEREDSET_HPP
