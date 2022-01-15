//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef FORWARDLIST_HPP
#define FORWARDLIST_HPP

#include <forward_list>

/**
 * Wraps std::forward_list with an alias.
 * @brief Singly-linked list.
 * @details
 * std::forward_list is a container that supports fast insertion and removal of elements
 * from anywhere in the container. Fast random access is not supported. It is implemented
 * as a singly-linked list. Compared to std::list this container provides more space
 * efficient storage when bidirectional iteration is not needed.
 * <p>
 * Adding, removing and moving the elements within the list, or across several lists, does
 * not invalidate the iterators currently referring to other elements in the list. However,
 * an iterator or reference referring to an element is invalidated when the corresponding
 * element is removed (via erase_after) from the list.
 * @source
 * https://en.cppreference.com/w/cpp/container/forward_list
 */
template <
    class Type, class Allocator = std::allocator<Type>
> using ForwardList = std::forward_list<Type, Allocator>;

#endif //FORWARDLIST_HPP
