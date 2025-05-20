#include "Person.hpp"
#include "CStudent.hpp"
#include "CTeacher.hpp"
#include "CAdmin.hpp"

class University {
public:
    Registry<Student> students;
    Registry<Teacher> teachers;
    Registry<Administrator> admins;
};