#include "Person.hpp"

class Administrator : public Person{
private:
    string position;
    string department;
public:
    Administrator(string name, int age, string p, string d) : Peron(name, age),position (p),department (d) {};
    void getInfo() override;
    string getRole() override;
};