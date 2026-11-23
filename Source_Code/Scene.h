
#ifndef SCENE_H
#define SCENE_H

#include <string>

enum class SceneStatus {
    Pending,
    Scheduled,
    Filmed
};

struct Scene {
    int id;
    std::string title;
    std::string location;
    std::string cast;
    std::string description;
    int duration;

    SceneStatus status = SceneStatus::Pending;
};

#endif
