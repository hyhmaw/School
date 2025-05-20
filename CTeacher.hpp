#include "Person.hpp"

class Teacher : public Person{
private:
    string cabinet;
    string subject;
public:
    Student(string name, int age, string c, string s) : Peron(name, age),cabinet (c),subject (s) {};
    void getInfo() override;
    string getRole() override;
};