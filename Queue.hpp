//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <queue>

#include "Deque.hpp"
#include "Vector.hpp"

/**
 * Wraps std::queue with an alias.
 * @brief Adapts a container to provide a FIFO data structure.
 * @details
 * The std::queue class is a container adaptor that gives the programmer the functionality
 * of a queue - specifically, a FIFO (first-in, first-out) data structure.
 * <p>
 * The class template acts as a wrapper to the underlying container - only a specific set
 * of functions is provided. The queue pushes the elements on the back of the underlying
 * container and pops them from the front.
 * @source
 * https://en.cppreference.com/w/cpp/container/queue
 */
template <
    class Type, class Container = Deque<Type>
> using Queue = std::queue<Type, Container>;

/**
 * Wraps std::queue with an alias.
 * @brief Adapts a container to provide a priority queue.
 * @details
 * A priority queue is a container adaptor that provides constant time lookup of the largest
 * (by default) element, at the expense of logarithmic insertion and extraction.
 * <p>
 * A user-provided Compare can be supplied to change the ordering, e.g. using std::greater<T>
 * would cause the smallest element to appear as the top().
 * <p>
 * Working with a priority_queue is similar to managing a heap in some random access container,
 * with the benefit of not being able to accidentally invalidate the heap.
 * @source
 * https://en.cppreference.com/w/cpp/container/priority_queue
 */
template <
    class Type, class Container = Vector<Type>, class Compare
    = std::less<typename Container::value_type>
> using PriorityQueue = std::priority_queue<Type, Container, Compare>;

#endif //QUEUE_HPP
