#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
    Zombie *horde = new Zombie[N]; // Crée un tableau dynamique de N objets Zombie

    for (int i = 0; i < N; i++) {
        horde[i].set_name(name);  // Utilisez une fonction set_name pour initialiser le nom de chaque zombie
    }
    return (horde);
}