#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    string name;
    int  id;

public:
    Employee(string s, int i) : name(s), id(i) {}

    void DispalyEmployee() {
        cout << "Employee Name: " << name << "\n";
        cout << "Employee ID: " << id << "\n";
    }
};
class Manager : public Employee {
private:
    string department;
public:
    Manager(string s, int i, string d) : Employee(s, i), department(d) {}

    void DisplayMAnager() {
        DispalyEmployee();
        cout << "Department: " << department << "\n";
    }
};
int main() {
    Manager m("John Doe", 12345, "Sales");
    m.DisplayMAnager();

    Manager m2("Rahul Sharma", 67890, "Marketing");
    m2.DisplayMAnager();
    return 0;
}
