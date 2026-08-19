// "How OOP helps in saving space" :  https://share.google/aimode/mpi9fSeBfjcNBF2RK
// Constructor OVERLOADING
// Method overloading and overriding
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

class AriOps{
public:
    float a;
    float b;

    AriOps(float x, float y): a(x),b(y) {}
    // inline function
    inline float multiply (){
        return a*b;
    }

    // default argument
    double sum(int c = 0){
        return a+b+c;
    }

    // function overloading
    int divide(int c){
        if (b != 0) {
            return a/b;
        }
        return a/c;
    }
    float divide(float c){
        if (b != 0) {
            return a/b;
        }
        return a/c;
    }

};
int main(){
    float x, y;
    cout << "Enter the two operands: \n";
    cin >> x >> y;
    AriOps A(x, y);
    cout << A.divide(23) << endl;
    cout << A.multiply() << endl;
    cout << A.sum(24) << endl;
}

class Modify{
public:
    void fun1(int x){
        x += 10;
        cout<< "Modified value by 'Call by Value': " << x << endl;
    }
    void fun2 (int y){
        y += 15;
        cout<< "Modified value by 'Call by Reference': " << y << endl;
    }
};
// int main(){
//     Modify f;
//     int a = 49;
//     f.fun1(a);
//     cout<< "after call by value: " << a << endl;
//     f.fun2(a);
//     cout << "after call by reference: "<< a <<endl;
//     return 0; 
// }
// Represents an individual student entity (Encapsulation)
class Student {
private:
    int id;
    std::string name;
    std::vector<double> marks;

public:
    Student(int studentId, const std::string& studentName, const std::vector<double>& studentMarks)
        : id(studentId), name(studentName), marks(studentMarks) {}

    // Getters and Setters
    int getId() const { return id; }
    std::string getName() const { return name; }
    
    void setName(const std::string& newName) {
        if (!newName.empty()) {
            name = newName;
        }
    }

    void setMarks(const std::vector<double>& newMarks) {
        marks = newMarks;
    }

    // Business Logic Methods
    double calculateAverage() const {
        if (marks.empty()) return 0.0;
        double sum = 0.0;
        for (double mark : marks) {
            sum += mark;
        }
        return sum / marks.size();
    }

    char calculateGrade() const {
        double avg = calculateAverage();
        if (avg >= 90.0) return 'A';
        if (avg >= 80.0) return 'B';
        if (avg >= 70.0) return 'C';
        if (avg >= 60.0) return 'D';
        return 'F';
    }

    void display() const {
        std::cout << std::left << std::setw(8) << id
                  << std::setw(20) << name
                  << std::setw(12) << std::fixed << std::setprecision(2) << calculateAverage()
                  << std::setw(6) << calculateGrade() << "\n";
                }
};

// Manages the collection of records (Separation of Concerns)
class StudentManager {
private:
    std::vector<Student> records;

    // Helper to find index by ID
    auto findStudentIterator(int id) {
        return std::find_if(records.begin(), records.end(), 
            [id](const Student& s) { return s.getId() == id; });
    }

public:
    bool addStudent(const Student& student) {
        if (findStudentIterator(student.getId()) != records.end()) {
            std::cout << "Error: Student with ID " << student.getId() << " already exists.\n";
            return false;
        }
        records.push_back(student);
        return true;
    }

    bool removeStudent(int id) {
        auto it = findStudentIterator(id);
        if (it != records.end()) {
            records.erase(it);
            std::cout << "Student ID " << id << " removed successfully.\n";
            return true;
        }
        std::cout << "Student ID " << id << " not found.\n";
        return false;
    }

    void displayAll() const {
        if (records.empty()) {
            std::cout << "No student records available.\n";
            return;
        }

        std::cout << "\n" << std::string(46, '-') << "\n";
        std::cout << std::left << std::setw(8) << "ID"
                  << std::setw(20) << "Name"
                  << std::setw(12) << "Average"
                  << std::setw(6) << "Grade" << "\n";
        std::cout << std::string(46, '-') << "\n";

        for (const auto& student : records) {
            student.display();
        }
        std::cout << std::string(46, '-') << "\n";
    }

    void searchStudent(int id) const {
        auto it = std::find_if(records.begin(), records.end(), 
            [id](const Student& s) { return s.getId() == id; });

        if (it != records.end()) {
            std::cout << "\nRecord Found:\n";
            it->display();
        } else {
            std::cout << "Student ID " << id << " not found.\n";
        }
    }
};

// int main() {  
//     StudentManager sms;

//     // Adding initial student objects
//     sms.addStudent(Student(101, "Aman Shukla", {91.5, 92.0, 98.5}));
//     sms.addStudent(Student(102, "Anuj Kumar", {90.5, 85.5, 89.0}));
//     sms.addStudent(Student(103, "Akshit Satti", {92.5, 93.0, 95.5}));

//     sms.displayAll();

//     std::cout << "\nSearching for ID 102:";
//     sms.searchStudent(102);

//     std::cout << "\nRemoving ID 103:\n";
//     sms.removeStudent(103);

//     sms.displayAll();

//     return 0;
// }
// 