#include "CTeacher.hpp"

using namespace std;

void Teacher::getInfo(){
 cout <<"Teacher name: "<< name <<"; Age: "<< age <<"; Cabinet: "<< c <<"; Subject: "<< s << endl;
}
string Teacher::getRole(){
    return "Teacher";
}