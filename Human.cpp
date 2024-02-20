#include "Human.h"
#include <iostream>

Human::Human(int h, int d, int s) : health(h), damage(d), atackSpeed(s) {}

void Human::attack(Human& enemy) {
    int damageDealt = rand() % damage + 1;
    enemy.health -= damageDealt;
}

bool Human::isAlive() const {
    return health > 0;
}

int Human::getHealth() const {
    return health;
}