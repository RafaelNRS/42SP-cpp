#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

struct Data;

class Serializer {
    private:
        Serializer(void);
        ~Serializer(void);
        Serializer(Serializer const &source);
        Serializer &operator=(Serializer const &source);
    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif