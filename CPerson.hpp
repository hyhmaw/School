#include <string>

class Person {
protected:
    string name;
    int age;
public: 
    virtual void getInfo() = 0;
    virtual string getRole() = 0;
    virtual ~Person();
};