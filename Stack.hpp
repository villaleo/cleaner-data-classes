//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef STACK_HPP
#define STACK_HPP

#include <stack>

#include "Deque.hpp"

/**
 * Wraps std::stack with an alias.
 * @brief Adapts a container to provide a LIFO data structure.
 * @details
 * The std::stack class is a container adaptor that gives the programmer the functionality
 * of a stack - specifically, a LIFO (last-in, first-out) data structure.
 * <p>
 * The class template acts as a wrapper to the underlying container - only a specific set
 * of functions is provided. The stack pushes and pops the element from the back of the
 * underlying container, known as the top of the stack.
 * @source
 * https://en.cppreference.com/w/cpp/container/stack
 */
template <
    class Type, class Container = Deque<Type>
> using Stack = std::stack<Type, Container>;

#endif //STACK_HPP
