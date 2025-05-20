#include "CRegistry.hpp"

using namespace std;

void Registry::addPerson(shared_ptr<T> h) {
        humans.push_back(h);
    }

void Registry::removePerson (shared_ptr<T> h) {
        for (int i = 0; i < humans.size(); i++) {
            if (humans[i] == h) {
                humans.erase(humans.begin() + i); //удалене указателя из вектора
                break;
            }
        }
    }

void Registry::listPeople() {
        for (int i = 0; i < humans.size(); i++) {
            humans[i]->getInfo();
        }
    }

vector<shared_ptr<T>> Registry::getAll(){
        return humans;
    }