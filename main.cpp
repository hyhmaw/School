/*Создайте базовый абстрактный класс Person с виртуальными методами getInfo() и getRole().
От него унаследуйте:
Student — с полями: группа, средний балл;
Teacher — с полями: кафедра, предмет;
Administrator — с полями: должность, отдел.
Каждый класс должен переопределять виртуальные методы.
Все поля закрыты. Геттеры и сеттеры реализуют валидацию (например, баллы — от 0 до 100).
Создайте шаблонный класс Registry<T>, который хранит список объектов одного типа (например, студентов или преподавателей).

Методы:
addPerson(),
removePerson(),
listPeople().
Класс University содержит объекты Registry<Student>, Registry<Teacher>, Registry<Administrator>
Создайте класс Course, который агрегирует студентов (shared_ptr<Student>) и преподавателя (shared_ptr<Teacher>), но не владеет ими напрямую.*/

#include <iostream>
using namespace std;

int main {
    setlocale(0, ".1251"); 
    shared_ptr<Student> s1 = make_shared<Student>("Ksenia", 18, "Kn-1.01", 85);
    shared_ptr<Student> s2 = make_shared<Student>("Nastya", 19, "Kn-1.02", 95);
    shared_ptr<Student> s3 = make_shared<Student>("Bob", 17, "Kn-1.01", 70);
    shared_ptr<Teacher> t1 = make_shared<Teacher>("Bykata", 60, "C++", "Programming");
    shared_ptr<Teacher> t2 = make_shared<Teacher>("Volkova", 45, "Math", "Higher math");
    shared_ptr<Administrator> a1 = make_shared<Administrator>("Kaptyr Vadim", 50, "Dean", "Education");

    University u;
    u.students.addPerson(s1);
    u.students.addPerson(s2);
    u.students.addPerson(s3);
    u.teachers.addPerson(t1);
    u.teachers.addPerson(t2);
    u.admins.addPerson(a1);

    cout << "   University Registry:   \n";
    u.students.listPeople();
    u.teachers.listPeople();
    u.admins.listPeople();

    Course c1("Higher math", t2);
    c1.addStudent(s1);
    c1.addStudent(s3);

    Course c2("Programming", t1);
    c2.addStudent(s2);

    cout << "\n  Math Course information:  \n";
    c1.showCourseInfo();

    cout << "\n  C++ Course information:  \n";
    c2.showCourseInfo();

    return 0;
}