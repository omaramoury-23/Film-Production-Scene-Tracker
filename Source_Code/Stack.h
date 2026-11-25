#ifndef STACK_H
#define STACK_H

#include "Scene.h"
#include <cstddef>

class RevisionStack {
private:
    struct Node {
        Scene previousScene;
        Node* next;
    };

    Node* topNode;
    std::size_t count;

public:
    RevisionStack();
    ~RevisionStack();

    // Prevent accidental copying of linked nodes
    RevisionStack(const RevisionStack&) = delete;
    RevisionStack& operator=(const RevisionStack&) = delete;

    // Stack operations
    void push(const Scene& previousScene);
    bool pop(Scene& previousScene);
    bool peek(Scene& previousScene) const;

    bool isEmpty() const;
    std::size_t size() const;

    void displayHistory() const;
    void removeById(int sceneId);
};

#endif
