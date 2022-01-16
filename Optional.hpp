//
// Created by Leonardo Villalobos on 1/15/22.
//

#ifndef OPTIONAL_HPP
#define OPTIONAL_HPP

#include <optional>

/**
 * Wraps std::optional with an alias.
 * @brief Manages a value that may or may not be present.
 * @details
 * A common use case for optional is the return value of a function that may fail.
 * As opposed to other approaches, such as std::pair<T,bool>, optional handles
 * expensive-to-construct objects well and is more readable, as the intent is expressed
 * explicitly.
 * <p>
 * Any instance of optional<T> at any given point in time either contains a value or does
 * not contain a value.
 * @source
 * https://en.cppreference.com/w/cpp/utility/optional
 */
template <class Type> using Optional = std::optional<Type>;

/// A constant representing an empty std::optional type.
constexpr std::nullopt_t EmptyOption = std::nullopt;

#endif //OPTIONAL_HPP
