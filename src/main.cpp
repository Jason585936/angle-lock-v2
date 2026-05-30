#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(AngleLockPlayer, PlayerObject) {
    void update(float dt) {
        PlayerObject::update(dt);

        this->setRotation(45.0f);
    }
};
