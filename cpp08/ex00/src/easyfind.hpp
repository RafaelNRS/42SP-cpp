#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <stdexcept>

class NotFoundException : public std::exception {
public:
    virtual const char *what() const throw() {
        return ("Element not found!");
    }
};

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw NotFoundException();
    return (it);
}

#endif