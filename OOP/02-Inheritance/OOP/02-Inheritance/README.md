# Inheritance in C++

## Program: Employee and Manager

**File:** `employee_manager_inheritance.cpp`

### Concepts Practiced
- Classes and objects
- Private data members
- Parameterized constructors
- Member initializer lists
- Public inheritance
- Base class and derived class
- Reusing base-class member functions

### Class Structure

- **Employee (Base Class):** Stores the employee's name and ID and displays the employee details.
- **Manager (Derived Class):** Inherits from Employee and adds a department.

### Key Concepts Learned

**1. Inheritance**

Inheritance allows a derived class to acquire accessible members and functionality from a base class.

Example: A Manager IS AN Employee.

**2. Public Inheritance**

The Manager class publicly inherits from Employee.

```cpp
class Manager : public Employee
```

**3. Base Class Constructor**

The derived class constructor initializes the base class through its member initializer list.

```cpp
Manager(string s, int i, string d)
    : Employee(s, i), department(d) {}
```

**4. Code Reusability**

The manager display function calls the employee display function instead of duplicating the code for the employee's name and ID.

### Sample Output

```text
Employee Name: John Doe
Employee ID: 12345
Department: Sales
Employee Name: Rahul Sharma
Employee ID: 67890
Department: Marketing
```

### What I Learned
- A derived class can reuse functionality from a base class.
- Private data members of the base class cannot be accessed directly by the derived class.
- A derived class can call accessible public member functions inherited from its base class.
- The base class is initialized before the derived class's own members.

### Future Improvements
- Correct function naming and capitalization.
- Use const member functions for display-only operations.
- Explore public, private, and protected access modifiers.
