//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef LIST_HPP
#define LIST_HPP

#include <list>

/**
 * Wraps std::list with an alias.
 * @brief Doubly-linked list.
 * @details
 * std::list is a container that supports constant time insertion and removal of elements
 * from anywhere in the container. Fast random access is not supported. It is usually
 * implemented as a doubly-linked list. Compared to std::forward_list this container
 * provides bidirectional iteration capability while being less space efficient.
 * <p>
 * Adding, removing and moving the elements within the list or across several lists does
 * not invalidate the iterators or references. An iterator is invalidated only when the
 * corresponding element is deleted.
 * @source
 * https://en.cppreference.com/w/cpp/container/list
 */
template <
    class Type, class Allocator = std::allocator<Type>
> using List = std::list<Type, Allocator>;

#endif //LIST_HPP
