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

class Superuser:public User {};

int main(int argc, char argv[]){



}