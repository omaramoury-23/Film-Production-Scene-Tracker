
#include <iostream>
#include <limits>
#include "FilmManager.h"

using namespace std;

void displayMenu() {
    cout << "\n====================================\n";
    cout << "  FILM PRODUCTION SCENE TRACKER\n";
    cout << "====================================\n";

    cout << "1. Add New Scene\n";
    cout << "2. Edit Scene\n";
    cout << "3. Delete Scene\n";
    cout << "4. Search Scene by ID\n";
    cout << "5. Display All Scenes\n";
    cout << "6. Schedule Scene\n";
    cout << "7. View Filming Queue\n";
    cout << "8. Film Next Scene\n";
    cout << "9. View Revision History\n";
    cout << "10. Undo Last Revision\n";
    cout << "11. Sort Scenes by Duration\n";
    cout << "12. Display Scenes by ID\n";
    cout << "13. Display BST Traversals\n";
    cout << "14. Production Statistics\n";
    cout << "0. Exit\n";

    cout << "====================================\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    do {
        displayMenu();

        if (!(cin >> choice)) {
            cout << "Invalid input. Enter a number.\n";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 0:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Feature not implemented yet.\n";
                break;
        }

    } while (choice != 0);

    return 0;
}
