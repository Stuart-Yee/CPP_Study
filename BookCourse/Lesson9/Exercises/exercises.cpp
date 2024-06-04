#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    int age;
    string name;
public:
    Human(int newAge, string newName);
    ~Human();
    int getAge() {
        return age;
    }
    string getName() {
        return name;
    }
};

Human::Human(int newAge, string newName)
    :name(newName), age(newAge)
{}

Human::~Human()
{
    cout << name << " isn't really gone if we remember them." << endl;
}

class Circle {
    private:
        float radius;
        float diameter;
        const float PI = 3.1415926535;
        float area;
        float circumference;

    public:
        Circle(float inputRadius) {
            radius = inputRadius;
            diameter = 2 *inputRadius;
            area = PI * inputRadius * inputRadius;
            circumference = 2 * PI * inputRadius;
        }
        float getRadius() {
            return radius;
        }
        float getDiameter() {
            return diameter;
        }
        float getArea() {
            return area;
        }
        float getCircumference() {
            return circumference;
        }
};

int main() {

    Human *mePointer = new Human(43, "Stuart");
    Human me = *mePointer;
    cout << me.getName() << endl;
    cout << mePointer->getAge() << endl;

    string nameEntry;
    int ageEntry;

    cout << "\nWhat's your name?" << endl;
    cin >> nameEntry;
    cout << "What's your age?" << endl;
    cin >> ageEntry;

    Human *aPerson = new Human(ageEntry, nameEntry);

    delete aPerson; 

    cout << "\nEnter a number" << endl;
    float entry;
    cin >> entry;

    Circle myCircle = Circle(entry);

    cout << "A circle with a radius of " << myCircle.getRadius() << ":" << endl;
    cout << "Diameter: " << myCircle.getDiameter() << endl;
    cout << "Area: " << myCircle.getArea() << endl;
    cout << "Circumference: " << myCircle.getCircumference() << endl;


    return 0;
}


