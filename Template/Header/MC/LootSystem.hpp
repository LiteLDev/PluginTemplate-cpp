// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LootSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTSYSTEM
public:
    class LootSystem& operator=(class LootSystem const&) = delete;
    LootSystem(class LootSystem const&) = delete;
    LootSystem() = delete;
#endif

public:
    /*0*/ virtual ~LootSystem();
    /*1*/ virtual void registerEvents(class entt::dispatcher&);
    /*2*/ virtual void tick(class EntityRegistry&);

protected:

private:

};