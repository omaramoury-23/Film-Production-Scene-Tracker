
#ifndef BST_H
#define BST_H

#include "Scene.h"
#include <cstddef>

class SceneBST {
private:
    struct Node {
        int sceneId;
        Scene* scene;
        Node* left;
        Node* right;
    };

    Node* root;
    std::size_t count;

    // Recursive helper functions
    Node* insertNode(Node* node, Scene* scene, bool& inserted);
    Node* removeNode(Node* node, int sceneId, bool& removed);

    Scene* searchNode(Node* node, int sceneId) const;
    Node* findMin(Node* node) const;

    void inorderTraversal(Node* node) const;
    void preorderTraversal(Node* node) const;
    void postorderTraversal(Node* node) const;

    void clearTree(Node* node);

public:
    SceneBST();
    ~SceneBST();

    // Prevent accidental copying
    SceneBST(const SceneBST&) = delete;
    SceneBST& operator=(const SceneBST&) = delete;

    // Core BST operations
    bool insert(Scene* scene);
    bool remove(int sceneId);
    Scene* search(int sceneId) const;

    // Tree traversals
    void inorder() const;
    void preorder() const;
    void postorder() const;

    bool isEmpty() const;
    std::size_t size() const;
};

#endif
