class Course {
private:
    string courseName;
    shared_ptr<Teacher> teacher;
    vector<shared_ptr<Student>> students;
public:
    Course(string name, shared_ptr<Teacher> t) {
        courseName = name;
        teacher = t;
    }

    void addStudent(shared_ptr<Student> s) {
        students.push_back(s);
    }

    void showCourseInfo() {
        cout << "Course: " << courseName << endl;
        cout << "Teacher: ";
        if (teacher) teacher->getInfo();

        cout << "Students:" << endl;
        for (int i = 0; i < students.size(); i++) {
            students[i]->getInfo();
        }
    }
};