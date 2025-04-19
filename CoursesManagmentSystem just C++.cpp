#include <iostream>
#include <string>

using namespace std;

class Course {
public:
    int course_id;
    string course_name;

    void setCourse(int id, const string& name) {
        course_id = id;
        // this->course_id = id;
        this->course_name = name;
    }

    string getInfo() const {
        return "Course ID: " + to_string(course_id) + ", Course Name: " + course_name;
    }
};

void inputCourses(Course* courses, int numCourses) {
    for (int i = 0; i < numCourses; ++i) {
        int courseId;
        string courseName;

        cout << "Enter course ID for course " <<  ": ";
        cin >> courseId;
        cout << "Enter course name for course " << ": ";
        cin >>courseName; 
        cin.ignore();

        courses[i].setCourse(courseId, courseName);
    }
}

void searchCourseById(Course* courses, int numCourses, int id) {
    for (int i = 0; i < numCourses; ++i) {
        if (courses[i].course_id == id) {
            cout << "Course found: " << courses[i].getInfo() << endl;
            return;
        }
    }
    cout << "Course with ID " << id << " not found." << endl;
}

void searchCourseByName(Course* courses, int numCourses, const string& name) {
    for (int i = 0; i < numCourses; ++i) {
        if (courses[i].course_name == name) {
            cout << "Course found: " << courses[i].getInfo() << endl;
            return;
        }
    }
    cout << "Course with name " << name << " not found." << endl;
}

int main() {
    int numCourses;

    cout << "Enter the number of courses: ";
    cin >> numCourses;
     cin.ignore();  

    Course* courses = new Course[numCourses];
    inputCourses(courses, numCourses);


    cout <<"\t\t***Here the section of searching of courses***" <<endl;
    int searchId;
    cout << "Enter course ID to search: ";
    cin >> searchId;
    searchCourseById(courses, numCourses, searchId);

     cin.ignore(); 
    string searchName;
    cout << "Enter course name to search: ";
    getline(cin, searchName);
    searchCourseByName(courses, numCourses, searchName);

   
    return 0;
}