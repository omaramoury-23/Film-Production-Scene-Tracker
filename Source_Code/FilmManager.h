
#ifndef FILM_MANAGER_H
#define FILM_MANAGER_H

#include "Scene.h"

class FilmManager {
public:
    void addScene();
    void editScene();
    void deleteScene();

    void searchScene();
    void displayAllScenes();

    void scheduleScene();
    void viewFilmingQueue();
    void filmNextScene();

    void viewRevisionHistory();
    void undoLastRevision();

    void sortScenesByDuration();
    void displayScenesById();
    void displayBSTTraversals();

    void displayStatistics();
};

#endif
