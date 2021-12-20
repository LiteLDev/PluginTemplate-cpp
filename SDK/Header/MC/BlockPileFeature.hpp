// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockPileFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPILEFEATURE
public:
    class BlockPileFeature& operator=(class BlockPileFeature const&) = delete;
    BlockPileFeature(class BlockPileFeature const&) = delete;
    BlockPileFeature() = delete;
#endif

public:
    /*0*/ virtual ~BlockPileFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /*3*/ virtual class Block const& getBlockToPlace(class Random&) const;
    MCAPI BlockPileFeature(class Block const&);

protected:

private:

};