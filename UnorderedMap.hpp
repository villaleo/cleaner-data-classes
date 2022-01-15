//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef UNORDEREDMAP_HPP
#define UNORDEREDMAP_HPP

#include <unordered_map>

/**
 * Wraps std::unordered_map with an alias.
 * @brief Collection of key-value pairs, hashed by keys; keys are unique.
 * @details
 * Unordered map is an associative container that contains key-value pairs with unique keys.
 * Search, insertion, and removal of elements have average constant-time complexity.
 * <p>
 * Internally, the elements are not sorted in any particular order, but organized into buckets.
 * Which bucket an element is placed into depends entirely on the hash of its key. Keys with the
 * same hash code appear in the same bucket. This allows fast access to individual elements, since
 * once the hash is computed, it refers to the exact bucket the element is placed into.
 * @source
 * https://en.cppreference.com/w/cpp/container/unordered_map
 */
template <
    class KeyType, class MappedType, class Hash = std::hash<KeyType>, class KeyEqual = std::equal_to<KeyType>, class Allocator
    = std::allocator<std::pair<const KeyType, MappedType>>
> using UnorderedMap = std::unordered_map<KeyType, MappedType, Hash, KeyEqual, Allocator>;

/**
 * Wraps std::unordered_multimap with an alias.
 * @brief Collection of key-value pairs, hashed by keys.
 * @details
 * Unordered multimap is an unordered associative container that supports equivalent keys
 * (an unordered_multimap may contain multiple copies of each key value) and that associates
 * values of another type with the keys. The unordered_multimap class supports forward iterators.
 * Search, insertion, and removal have average constant-time complexity.
 * <p>
 * Internally, the elements are not sorted in any particular order, but organized into buckets.
 * Which bucket an element is placed into depends entirely on the hash of its key. This allows fast
 * access to individual elements, since once the hash is computed, it refers to the exact bucket the
 * element is placed into.
 * <p>
 * he iteration order of this container is not required to be stable, except that every group of elements
 * whose keys compare equivalent forms a contiguous sub-range in the iteration order, also accessible
 * with equal_range().
 * @source
 * https://en.cppreference.com/w/cpp/container/unordered_multimap
 */
template <
    class KeyType, class MappedType, class Hash = std::hash<KeyType>, class KeyEqual = std::equal_to<KeyType>, class Allocator
    = std::allocator<std::pair<const KeyType, MappedType>>
> using UnorderedMultiMap = std::unordered_multimap<KeyType, MappedType, Hash, KeyEqual, Allocator>;

#endif //UNORDEREDMAP_HPP
