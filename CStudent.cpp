#include "CStudent.hpp"

using namespace std;

void Student::getInfo(){
 cout <<"Student name: "<< name <<"; Age: "<< age <<"; Group: "<< group <<"; avGrade: "<< avGrade << endl;
}
string Student::getRole(){
    return "Student";
}