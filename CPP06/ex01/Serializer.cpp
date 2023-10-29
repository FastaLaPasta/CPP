#include "Serializer.hpp"

uintptr_t   Serializer::serialize(Data* ptr) {
    uintptr_t newType;
    newType = reinterpret_cast<uintptr_t>(ptr);
    return (newType);
}

Data*   Serializer::deserialize(uintptr_t raw) {
    Data    *oldType;
    oldType = reinterpret_cast<Data*>(raw);
    return (oldType);
}