//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <array>
#include <ostream>

using SizeType = std::size_t;

/**
 * Wraps std::array with an alias.
 * @brief Static contiguous array.
 * @details
 * std::array is a container that encapsulates fixed size arrays.
 * This container is an aggregate type with the same semantics as a struct holding
 * a C-style array as its only non-static data member. Unlike a C-style array, it
 * doesn't decay to T* automatically. As an aggregate type, it can be initialized
 * with aggregate-initialization given at most N initializers that are convertible to T:
 * @code
 * std::array<int, 3> a = {1, 2, 3};
 * @endcode
 * @source
 * https://en.cppreference.com/w/cpp/container/array
 */
template <
    class Type, SizeType capacity
> using Array = std::array<Type, capacity>;

#endif //ARRAY_HPP
