// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BasicSaver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASICSAVER
public:
    BasicSaver(class BasicSaver const&) = delete;
    BasicSaver() = delete;
#endif

public:
    /*
    inline  ~BasicSaver(){
         (BasicSaver::*rv)();
        *((void**)&rv) = dlsym("??1BasicSaver@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI bool beginArray(unsigned __int64);
    MCAPI bool endArray();
    MCAPI void error(std::string const&);
    MCAPI class BasicSaver& operator=(class BasicSaver const&);
    MCAPI bool serializeFloat(float);
    MCAPI bool serializeS32(int);
    MCAPI bool serializeString(std::string const&);

protected:

private:
    MCAPI bool serialize(class entt::meta_any);
    MCAPI bool serialize(class entt::meta_any, struct SerializerTraits const&);
    MCAPI bool serializeAssociativeContainer(class entt::meta_associative_container, struct SerializerTraits const&);
    MCAPI bool serializeBasicType(class entt::meta_any const&);
    MCAPI bool serializeClass(class entt::meta_any const&, struct SerializerTraits const&);
    MCAPI bool serializeEnum(class entt::meta_any const&, struct SerializerTraits const&);
    MCAPI bool serializeObject(class entt::meta_any);

};