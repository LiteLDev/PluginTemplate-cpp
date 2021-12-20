// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AttackDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKDEFINITION
public:
    class AttackDefinition& operator=(class AttackDefinition const&) = delete;
    AttackDefinition(class AttackDefinition const&) = delete;
    AttackDefinition() = delete;
#endif

public:
    /*0*/ virtual ~AttackDefinition();
    /*1*/ virtual void load(class Json::Value, class BehaviorFactory const&);

protected:

private:

};