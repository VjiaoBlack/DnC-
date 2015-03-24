#include "main.hpp"

using namespace std;

int main() {
    string name, surname;
    cout << "Create a new character!\n";
    cout << "Enter first name: ";
    cin >> name;
    cout << "Enter surname: ";
    cin >> surname;

    PC* player = new PC (0, name, surname);

    cout << "\n Player data: \n";
    cout << "name: " << player->name << "\n";
    cout << "surname: " << player->surname << "\n";
}
