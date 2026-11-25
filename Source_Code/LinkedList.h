#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Scene.h"
#include <cstddef>

class SceneList {
private:
    struct Node {
        Scene data;
        Node* next;
    };

    Node* head;
    std::size_t count;

public:
    SceneList();
    ~SceneList();

    // Prevent copying linked nodes
    SceneList(const SceneList&) = delete;
    SceneList& operator=(const SceneList&) = delete;

    // Core Linked List operations
    bool insertScene(const Scene& scene);
    bool deleteScene(int sceneId);

    Scene* searchScene(int sceneId);
    const Scene* searchScene(int sceneId) const;

    void displayAllScenes() const;

    bool isEmpty() const;
    std::size_t size() const;
};

#endif
