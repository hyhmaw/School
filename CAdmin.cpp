#include "CAdmin.hpp"

using namespace std;

void Administrator ::getInfo(){
 cout <<"Administrator name: "<< name <<"; Age: "<< age <<"; Position: "<< p <<"; Department: "<< d << endl;
}
string Administrator::getRole(){
    return "Administrator";
}