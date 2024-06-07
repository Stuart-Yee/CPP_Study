#include <iostream>
#include <string>

using namespace std;

class User {
    protected:
        string username;
        string password;
        long int userId;

        long int genUserId() {
            //Don't overthink it for now
            return 123456;
        }



    public:
        User() {}
        User (string inputUsername, string inputPassword)
            : username(inputUsername), password(inputPassword) {
                userId = genUserId();
            }

        string getUsername() {
            return username;
        }

        int long getUserId() {
            return userId;
        }

        bool checkPassword(string enteredPassword) {
            return enteredPassword == password ? true : false;
        }

        bool resetPassword(string enteredPassword, string newPassword) {
            if (checkPassword(enteredPassword)) {
                password = newPassword;
                cout << "Password successfully reset" << endl;
                return true;
            } else {
                cout << "Incorrect password, could not reset password" << endl;
                return false;
            }
        }

        // Password reset when User forgets password
        void resetPassword(string newPassword) {
            cout << "Force reset of password" << endl;
            password = newPassword;
        }
};

class Superuser:public User {

    private:
        User * loggedInAs;

    public:
        Superuser(string inputUsername, string inputPassword) {
            username = inputUsername;
            password = inputPassword;
        }

        void forceResetPassword(User &user, string newPassword) {
            user.resetPassword(newPassword);
        }

        void loginAs(User &user) {
            loggedInAs = &user;
        }

        void stopLoginAs() {
            delete loggedInAs;
        }
};

int main(int argc, char* argv[]){

    User bobby = User("bobby123", "123456");
    cout << "Created user " << bobby.getUsername() << endl;

    string adminName;
    string adminPassword;
    cout << "\nCongrats, you're the admin!\nPlease enter a username:" << endl;
    cin >> adminName;
    cout << "Now come up with a secure password:" << endl;
    cin >> adminPassword;
    Superuser admin = Superuser(adminName, adminPassword);
    cout << "Nice job, " << admin.getUsername() << "! You are now the admin." <<endl;
    cout << "\nUnfortunately " << bobby.getUsername() << " is an idiot. They forgot their password" << endl;

    bool loggedIn = false;

    for (int i = 0; i < 3; i++) {
        cout << "Enter your password to continue:" << endl;
        string passwordEntry;
        cin >> passwordEntry;
        if (admin.checkPassword(passwordEntry)) {
            loggedIn = true;
            break;
        }
        cout << "Whoops! That wasn't it." << endl;
    }

    if (loggedIn) {
        string passwordEntry;
        cout << "Come up with a new password for " << bobby.getUsername() << endl;
        cin >> passwordEntry;
        admin.forceResetPassword(bobby, passwordEntry);
        cout << "Great job, you've successfully reset " << bobby.getUsername() << "'s password." << endl;
     } else {
        cout << "Apparently you're an idiot too. You had one job..." << endl;
     }



    return 0;

}