//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef TUPLE_HPP
#define TUPLE_HPP

#include <tuple>

/**
 * Wraps std::tuple with an alias.
 * @brief Allows storing multiple types into a single collection.
 * @details
 * Class template std::tuple is a fixed-size collection of heterogeneous
 * values. It is a generalization of std::pair.
 * @source
 * https://en.cppreference.com/w/cpp/utility/tuple
 */
template <class... Types> using Tuple = std::tuple<Types...>;

#endif //TUPLE_HPP
