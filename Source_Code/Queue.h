
#ifndef QUEUE_H
#define QUEUE_H

#include <cstddef>

class FilmingQueue {
private:
    struct Node {
        int sceneId;
        Node* next;
    };

    Node* frontNode;
    Node* rearNode;
    std::size_t count;

public:
    FilmingQueue();
    ~FilmingQueue();

    FilmingQueue(const FilmingQueue&) = delete;
    FilmingQueue& operator=(const FilmingQueue&) = delete;

    // Core Queue operations
    bool enqueue(int sceneId);
    bool dequeue(int& sceneId);
    bool front(int& sceneId) const;

    bool isEmpty() const;
    std::size_t size() const;

    // Project-specific operations
    bool contains(int sceneId) const;
    bool removeById(int sceneId);
    void displayQueue() const;
};

#endif
