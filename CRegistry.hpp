#include <vector>

template <typename T>
class Registry {
private:
    vector<shared_ptr<T>> humans;
public:
   void addPerson(shared_ptr<T> h);
   void removePerson (shared_ptr<T> h);
   void listPeople();
   vector<shared_ptr<T>> getAll();
};