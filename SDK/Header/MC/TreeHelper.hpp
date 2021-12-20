// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace TreeHelper {

#define AFTER_EXTRA
// Add Member There
struct TreeParams {
    TreeParams() = delete;
    TreeParams(TreeParams const&) = delete;
    TreeParams(TreeParams const&&) = delete;
};

#undef AFTER_EXTRA
    MCAPI bool isValidTreePosition(class IBlockWorldGenAPI const&, class BlockPos const&);
    MCAPI bool isValidTreePosition(class IBlockWorldGenAPI const&, class BlockPos const&, struct TreeHelper::TreeParams const&);
    MCAPI class std::optional<class BlockPos> placeBaseBlock(class IBlockWorldGenAPI&, class BlockPos const&, std::vector<class BlockDescriptor> const&);
    MCAPI class std::optional<class BlockPos> placeRadialBlockGroup(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class Block const&, int, int, bool, std::vector<class BlockDescriptor> const&);
    MCAPI bool prepareSpawn(class IBlockWorldGenAPI const&, class BlockPos const&, int, std::vector<class BlockDescriptor> const&, std::vector<class BlockDescriptor> const&);

};