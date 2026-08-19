#include <bits/stdc++.h>
using namespace std;

class Employee {
public:
    string id;
    string name;
    vector<double> monthlySalaries;

    Employee(string EmpId, string EmpName, vector<double> monthwiseSalary){
        id = EmpId;
        name = EmpName;
        monthlySalaries = monthwiseSalary;
    }

    double totalSalary(){
        double sum = 0;
        for (double salary : monthlySalaries){
            sum += salary;
        }
        return sum;
    }
};
class EmpRecords {
public :
    vector<Employee> records;
    
    int findEmpIterator(string id){
        return find_if(records.begin(), records.end(), [id](const Student s){ return s.id == id; });
    }
    
    void displayAll(){
        for 
    }
}