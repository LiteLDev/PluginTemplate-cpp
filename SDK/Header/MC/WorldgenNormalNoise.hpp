// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldgenNormalNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENNORMALNOISE
public:
    class WorldgenNormalNoise& operator=(class WorldgenNormalNoise const&) = delete;
    WorldgenNormalNoise(class WorldgenNormalNoise const&) = delete;
    WorldgenNormalNoise() = delete;
#endif

public:
    /*0*/ virtual ~WorldgenNormalNoise();
    /*1*/ virtual float getValue(float, float, float) const;
    MCAPI WorldgenNormalNoise(class IRandom&, int, std::vector<float> const&);

protected:

private:

};