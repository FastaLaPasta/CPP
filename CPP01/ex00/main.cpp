#include "Zombie.hpp"

int main(){
    Zombie  *start_ptr = newZombie("Start");
    Zombie  *mid_ptr = newZombie("Mid");
    Zombie  *end_ptr = newZombie("End");

    start_ptr->announce();
    randomChump("1");
    randomChump("2");
    mid_ptr->announce();
    randomChump("3");
    mid_ptr->announce();
    randomChump("4");
    randomChump("5");
    end_ptr->announce();
    delete(start_ptr);
    delete(mid_ptr);
    delete(end_ptr);
    return (0);
}