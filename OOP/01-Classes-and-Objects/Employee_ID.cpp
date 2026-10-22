#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    string name;
    int id;
public:
    Employee(string n, int i) : name(n), id(i) {}

    void display()const {
        cout << "Employee Name: " << name  << "\n" << "ID: " << id << "\n";
    }
};
int main() {
    Employee emp1("John Doe", 101);
    Employee emp2("Jane Smith", 102);

    emp1.display();
    emp2.display();

    return 0;
}
