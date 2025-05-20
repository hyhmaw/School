#include <vector>
#include "Person.hpp"
#include "CStudent.hpp"
#include "CTeacher.hpp"
#include "CAdmin.hpp"

class LabCorpus {
protected:
vector<shared_ptr<Student>> student;
vector<shared_ptr<Teacher>> teacher;
shared_ptr<Admin> admin;
public:

void addStudent(vector<shared_ptr<Student>> s){
    student.push_back(s);
}

void addTeacher(vector<shared_ptr<<Teacher>> t){
    teacher.push_back(t);
}

void addAdmin(shared_ptr<Admin> a){
    admin = a;
}

}