# Modern-C++
# Inheritance and Composition in C++

## 1. Inheritance

**Definition:** Inheritance is an OOP concept in which a derived class acquires accessible properties and behaviours from a base class.

### Example

- Dog IS-A Animal.
- Car IS-A Vehicle.
- Student IS-A Person.

### Syntax

```cpp
class Animal {
public:
    void eat() {
        cout << "Animal is eating\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking\n";
    }
};
```

### Key points
- Base class: the class being inherited from.
- Derived class: the class that inherits.
- Inheritance promotes code reuse.
- Public inheritance expresses an IS-A relationship.

## 2. Composition

**Definition:** Composition is an OOP relationship in which one class contains an object of another class as a component.

### Example

- Car HAS-AN Engine.
- Computer HAS-A Processor.
- House HAS Rooms.

### Syntax

```cpp
class Engine {
public:
    void start() {
        cout << "Engine started\n";
    }
};

class Car {
private:
    Engine engine;

public:
    void startCar() {
        engine.start();
    }
};
```

### Key points
- One class contains an object of another class.
- It helps build complex objects from smaller components.
- The contained object is a member of the containing class.

## 3. Difference Between Inheritance and Composition

| Inheritance | Composition |
|---|---|
| IS-A relationship | HAS-A relationship |
| Derived class inherits from a base class | One class contains another object |
| Example: Dog is an Animal | Example: Car has an Engine |

## 4. When to use each?

- Use inheritance when one class is genuinely a specialized type of another.
- Use composition when one object needs another object as a component.

## 5. Quick revision

**Inheritance:** A Dog IS an Animal.

**Composition:** A Car HAS an Engine.
