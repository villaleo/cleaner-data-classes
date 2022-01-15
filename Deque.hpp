//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef DEQUE_HPP
#define DEQUE_HPP

#include <deque>

/**
 * Wraps std::deque with an alias.
 * @brief Double-ended queue.
 * @details
 * std::deque (double-ended queue) is an indexed sequence container that allows fast
 * insertion and deletion at both its beginning and its end. In addition, insertion
 * and deletion at either end of a deque never invalidates pointers or references
 * to the rest of the elements.
 * @source
 * https://en.cppreference.com/w/cpp/container/deque
 */
template <
    class Type, class Allocator = std::allocator<Type>
> using Deque = std::deque<Type, Allocator>;

#endif //DEQUE_HPP
