# Film Production Scene Tracker
## Shared Interface Agreement

Course: CS212 - Data Structures
Project: 139 - Film Production Scene Tracker
Language: C++

## Shared Data Model
File: Source_Code/Scene.h

All modules must use the shared Scene structure.

Scene fields:
- id
- title
- location
- cast
- description
- duration
- status

## Module Responsibilities

### Youssef - Stack
Files: Stack.h, Stack.cpp
Class: RevisionStack

Operations:
- push
- pop
- peek
- isEmpty
- size
- removeById

Purpose:
Store previous scene versions for Undo operations.

### Basmala - Queue
Files: Queue.h, Queue.cpp
Class: FilmingQueue

Operations:
- enqueue
- dequeue
- front
- contains
- removeById
- isEmpty
- size

Purpose:
Manage scene IDs awaiting filming using FIFO.

### Alaa - Linked List
Files: LinkedList.h, LinkedList.cpp
Class: SceneList

Operations:
- insertScene
- deleteScene
- searchScene
- displayAllScenes
- size
- isEmpty

Purpose:
Own and manage all original Scene records.

### Malak - BST
Files: BST.h, BST.cpp
Class: SceneBST

Operations:
- insert
- search
- remove
- inorder
- preorder
- postorder

Purpose:
Index scenes by their unique IDs.

### Mostafa - Sorting & Statistics
Files:
- Sorting.h
- Sorting.cpp
- Statistics.h
- Statistics.cpp

Operations:
- bubbleSortByDuration
- displayStatistics

Purpose:
Sort scene records and report production progress.

### Omar - System Integration
Files:
- Scene.h
- FilmManager.h
- FilmManager.cpp
- main.cpp

Purpose:
Connect all modules, validate operations,
and keep the scene records consistent.

## Development Rules

1. Use C++.
2. Implement required Data Structures manually.
3. Do not use STL containers to replace them.
4. Keep the shared Scene structure unchanged.
5. Use the agreed class and function names.
6. Avoid duplicate scene IDs.
7. Handle empty structures and invalid input.
8. Test every operation.
9. Document Big-O complexity.
10. Submit changes through Pull Requests.

## Integration Ownership

Linked List owns original scene records.
BST indexes those records by ID.
Queue stores scheduled Scene IDs.
Stack stores revision snapshots.
FilmManager coordinates updates and deletion.
