#include <iostream>
#include <limits>
#include "FilmManager.h"

using namespace std;

int main() {
    FilmManager manager;
    int choice = -1;

    do {
        cout << "\n====================================\n";
        cout << "   FILM PRODUCTION SCENE TRACKER\n";
        cout << "====================================\n";
        cout << "1.  Add Scene\n";
        cout << "2.  Edit Scene\n";
        cout << "3.  Delete Scene\n";
        cout << "4.  Search Scene\n";
        cout << "5.  Display All Scenes\n";
        cout << "6.  Schedule Scene\n";
        cout << "7.  View Filming Queue\n";
        cout << "8.  Film Next Scene\n";
        cout << "9.  View Revision History\n";
        cout << "10. Undo Last Revision\n";
        cout << "11. Sort Scenes by Duration\n";
        cout << "12. Display Scenes by ID\n";
        cout << "13. Display BST Traversals\n";
        cout << "14. Display Statistics\n";
        cout << "0.  Exit\n";
        cout << "====================================\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "\nInvalid input. Enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
        case 1: manager.addScene(); break;
        case 2: manager.editScene(); break;
        case 3: manager.deleteScene(); break;
        case 4: manager.searchScene(); break;
        case 5: manager.displayAllScenes(); break;
        case 6: manager.scheduleScene(); break;
        case 7: manager.viewFilmingQueue(); break;
        case 8: manager.filmNextScene(); break;
        case 9: manager.viewRevisionHistory(); break;
        case 10: manager.undoLastRevision(); break;
        case 11: manager.sortScenesByDuration(); break;
        case 12: manager.displayScenesById(); break;
        case 13: manager.displayBSTTraversals(); break;
        case 14: manager.displayStatistics(); break;
        case 0: cout << "\nExiting application.\n"; break;
        default: cout << "\nInvalid menu choice.\n";
        }

    } while (choice != 0);

    return 0;
}
