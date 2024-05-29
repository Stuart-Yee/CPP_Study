#include <iostream>
#include <string>
using namespace std;

class User {

    private:
        string name;
        string password;
        string email;

    public:
        User() {
            name = "John Doe";
        }

        User(string newName, string newEmail) {
            name = newName;
            email = newEmail;
        }

        void setPassword(string newPassword) {
            password = newPassword;
        }

        void setName(string newName) {
            name = newName;
        }

        string getName() {
            return name;
        }

        void setEmail(string newEmail) {
            email = newEmail;
        }

        string getEmail() {
            return email;
        }
};

int main () {

    User user;
    cout << user.getName() << endl;

    string newName, email;
    cout << "Enter your name:" << endl;
    cin >> newName;
    cout << "Enter your email:" << endl;
    cin >> email;

    User newUser(newName, email);
    string passwordEntry = "1";
    string passwordConfirm = "2";

    while (passwordEntry != passwordConfirm) {
        cout << "Enter password" << endl;
        cin >> passwordEntry;
        cout << "Confirm password" << endl;
        cin >> passwordConfirm;
        if (passwordEntry != passwordConfirm) {
            cout << "Your passwords must match, try again." << endl;
        }
    }

    newUser.setPassword(passwordEntry);

    cout << "New user: " << newUser.getName() << " created with email: " << newUser.getEmail() << endl;

    return 0;
}
