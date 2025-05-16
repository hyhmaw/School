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
    return 0;
}