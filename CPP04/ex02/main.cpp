#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    const int arraySize = 4;
    AAnimal *animals[arraySize];
    for (int i = 0; i < arraySize/2; i++) {
        animals[i] = new Dog();
    }
    for (int i = arraySize/2; i < arraySize; i++) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < arraySize; i++) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < arraySize; i++) {
        delete(animals[i]);
    }

    return (0);
}