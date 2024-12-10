#include <Geode/Geode.hpp>

#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(PlayerObject) {
  void playerDestroyed(bool p0) {
    log::info("Death");
    PlayerObject::playerDestroyed(p0);
  }
};
