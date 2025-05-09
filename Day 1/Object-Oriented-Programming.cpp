# OBJECT ORIENTED PROGRAMMING

## What is Object-Oriented Programming (OOP's) in Simple Words?

Imagine you are building a real-world system in code. Think about how things work in daily life—cars, mobile phones, and even people. Everything around us is an object with certain features (data) and actions (behavior).
For example:

1. A Car has features like color, brand, speed and actions like drive, brake, honk.  
2. A Mobile Phone has features like model, storage, battery life and actions like call, text, browse.
   
Object-Oriented Programming (OOP) is a way of writing programs by creating objects that interact with each other. Instead of writing everything as separate functions (like in C), OOP lets us bundle related data and 
functions together into classes and objects.

### Think of OOP as Playing with Toy Cars 🚗

Imagine you are playing with a toy car set. You have different types of cars like BMW, Audi, and Toyota.

1. **Blueprint (Class)**: Think of a blueprint of a car. It tells you what the car should have (wheels, doors, engine, color, etc.), but it is not a real car itself.  
2. **Actual Cars (Objects)**: When you build a real car from the blueprint, it becomes an object. A red Toyota is one object, and a blue BMW is another object.  
3. **Features (Data/Attributes)**: Each car has different color, speed, model, and brand.  
4. **Actions (Methods/Functions)**: Each car can start, stop, accelerate, and honk.

In programming,

- A **Class** is like the blueprint of a car.  
- An **Object** is a real car built from that blueprint.  
- **Data (Attributes)** are things like color, speed, and model.  
- **Actions (Methods)** are things like starting the car, stopping, or honking.

### Why Use OOP? 🤔

1. **Organized Code**: Just like a car factory produces different cars from a blueprint, we can create multiple objects from a class without rewriting code.  
2. **Reusability**: You don’t need to rewrite code for every new car; just create a new object with different properties.  
3. **Easy to Modify**: If you want to change how all cars work (e.g., add a turbo feature), you only need to change the blueprint (class), not every single car.

---

## Example Code in C++

```cpp
#include <iostream>
using namespace std;

// Blueprint (Class)
class Car {
public:
    string brand;
    int speed;

    void drive() {
        cout << brand << " is driving at " << speed << " km/h." << endl;
    }
};

// Creating objects from the class
int main() {
    Car car1, car2;
    car1.brand = "Toyota";
    car1.speed = 100;

    car2.brand = "BMW";
    car2.speed = 150;

    car1.drive();
    car2.drive();
    
    return 0;
}
## Output
```cpp
Toyota is driving at 100 km/h.  
BMW is driving at 150 km/h.
