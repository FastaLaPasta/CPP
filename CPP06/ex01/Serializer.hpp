#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
typedef unsigned long uintptr_t;

struct Data {
    int         number;
    std::string other;
};

class Serializer {
    public:
        static uintptr_t    serialize(Data* ptr);
        static Data*        deserialize(uintptr_t raw);

    private:
        Serializer();
};

#endif