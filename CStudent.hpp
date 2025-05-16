#include "Person.hpp"

class Student : public Person{
private:
    string group;
    double avGrade;
public:
    Student(string name, int age, string group_, double avGrade_) : Peron(name, age),group (group_),avGrade (avGrade_) {};
    void getInfo() override;
    string getRole() override;
};