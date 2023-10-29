#include "Serializer.hpp"

int main(void) {
    Data* structure = new Data;
    structure->number = 42;
    structure->other = "JEAN MICHEL CRAPAUD";

    std::cout << "structure number = " << structure->number << " structure other = " << structure->other << std::endl;
    uintptr_t tmp = Serializer::serialize(structure);
    std::cout << tmp << std::endl;
    Data*   newStructure = Serializer::deserialize(tmp);
    std::cout << "new structure number = " << newStructure->number << " new structure other = " << newStructure->other << std::endl;
    newStructure->number = 56;
    //std::cout << newStructure->number << " " << structure->number << std::endl;
    delete structure;
    return (0);
}