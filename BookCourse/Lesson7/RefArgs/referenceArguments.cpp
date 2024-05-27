#include <iostream>
#include <string>
using namespace std;

void changeMyName(string& name, string newName) {
    name = newName;
}

void dontChangeName(string name, string newName) {
    name = newName;
    cout << "In the function body, my name is " << name << endl;
}

// name is a reference as noted by the & after "string"

int main() {

    string name = "Stuart";
    string newName = "Spider-Man";

    cout << "My name is " << name << endl;
    cout << "My new name will be " << newName << endl;

    changeMyName(name, newName);

    cout << "My name is now " << name << endl;

    name = "Peter Parker";
    cout << "Changed my name back to " << name << endl;

    dontChangeName(name, newName);

    cout << "Outside the function, may name is still " << name << endl;

}

