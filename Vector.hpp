//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <vector>

/**
 * Wraps std::vector with an alias.
 * @brief Dynamic contiguous array.
 * @details
 * The elements are stored contiguously, which means that elements can be accessed
 * not only through iterators, but also using offsets to regular pointers to elements.
 * This means that a pointer to an element of a vector may be passed to any function
 * that expects a pointer to an element of an array.
 * <p>
 * The storage of the vector is handled automatically, being expanded and contracted
 * as needed. Vectors usually occupy more space than static arrays, because more memory
 * is allocated to handle future growth. This way a vector does not need to reallocate
 * each time an element is inserted, but only when the additional memory is exhausted.
 * @source
 * https://en.cppreference.com/w/cpp/container/vector
 */
template <
    class Type, class Allocator = std::allocator<Type>
> using Vector = std::vector<Type, Allocator>;

#endif //VECTOR_HPP
