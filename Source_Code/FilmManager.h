#ifndef FILM_MANAGER_H
#define FILM_MANAGER_H

#include "Scene.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "BST.h"
#include "Sorting.h"
#include "Statistics.h"

class FilmManager {
private:
    SceneList scenes;
    SceneBST sceneIndex;
    FilmingQueue filmingQueue;
    RevisionStack revisionHistory;

public:
    FilmManager() = default;
    ~FilmManager() = default;

    // Scene management
    void addScene();
    void editScene();
    void deleteScene();
    void searchScene();
    void displayAllScenes();

    // Filming schedule
    void scheduleScene();
    void viewFilmingQueue();
    void filmNextScene();

    // Revision history
    void viewRevisionHistory();
    void undoLastRevision();

    // Sorting and searching
    void sortScenesByDuration();
    void displayScenesById();
    void displayBSTTraversals();

    // Production statistics
    void displayStatistics();
};

#endif
