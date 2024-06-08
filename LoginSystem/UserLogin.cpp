#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class User {
public:
    string username;
    string password;

    User(string uname, string pwd) : username(uname), password(pwd) {}
};

void saveUser(const User& user) {
    ofstream file("users.txt", ios::app);
    if (file.is_open()) {
        file << user.username << " " << user.password << endl;
        file.close();
    } else {
        cout << "Unable to open file" << endl;
    }
}

bool checkUser(const string& username, const string& password) {
    ifstream file("users.txt");
    string uname, pwd;
    if (file.is_open()) {
        while (file >> uname >> pwd) {
            if (uname == username && pwd == password) {
                return true;
            }
        }
        file.close();
    }
    return false;
}

void registerUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    User newUser(username, password);
    saveUser(newUser);
    cout << "Registration successful!" << endl;
}

void loginUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (checkUser(username, password)) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password." << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
