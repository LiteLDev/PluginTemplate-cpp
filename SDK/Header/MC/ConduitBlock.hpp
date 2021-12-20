// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ConduitBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDUITBLOCK
public:
    class ConduitBlock& operator=(class ConduitBlock const&) = delete;
    ConduitBlock(class ConduitBlock const&) = delete;
    ConduitBlock() = delete;
#endif

public:
    /*0*/ virtual ~ConduitBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*5*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*6*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*7*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const& )> const&, class BlockPos const&) const;
    /*8*/ virtual void __unk_vfn_0();
    /*9*/ virtual bool isStrippable(class Block const&) const;
    /*10*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*11*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*12*/ virtual void __unk_vfn_1();
    /*13*/ virtual void __unk_vfn_2();
    /*14*/ virtual void __unk_vfn_3();
    /*15*/ virtual void __unk_vfn_4();
    /*16*/ virtual void __unk_vfn_5();
    /*17*/ virtual void __unk_vfn_6();
    /*18*/ virtual void __unk_vfn_7();
    /*19*/ virtual void __unk_vfn_8();
    /*20*/ virtual void __unk_vfn_9();
    /*21*/ virtual void __unk_vfn_10();
    /*22*/ virtual bool isDoubleSlabBlock() const;
    /*23*/ virtual void __unk_vfn_11();
    /*24*/ virtual void __unk_vfn_12();
    /*25*/ virtual void __unk_vfn_13();
    /*26*/ virtual void __unk_vfn_14();
    /*27*/ virtual void __unk_vfn_15();
    /*28*/ virtual void __unk_vfn_16();
    /*29*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*30*/ virtual bool isValidAuxValue(int) const;
    /*31*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*32*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*33*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*34*/ virtual void __unk_vfn_17();
    /*35*/ virtual void __unk_vfn_18();
    /*36*/ virtual bool canContainLiquid() const;
    /*37*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*38*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*39*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*40*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*41*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*42*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*43*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*44*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*45*/ virtual void __unk_vfn_19();
    /*46*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual enum BlockProperty getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void __unk_vfn_20();
    /*52*/ virtual bool isFilteredOut(enum BlockRenderLayer) const;
    /*53*/ virtual void __unk_vfn_21();
    /*54*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*55*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum FertilizerType) const;
    /*56*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*57*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*58*/ virtual bool mayPick() const;
    /*59*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*60*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*61*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*62*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*63*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*64*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*65*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*66*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*67*/ virtual void __unk_vfn_22();
    /*68*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*69*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*70*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*71*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*72*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*73*/ virtual int getExperienceDrop(class Random&) const;
    /*74*/ virtual void __unk_vfn_23();
    /*75*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*76*/ virtual void __unk_vfn_24();
    /*77*/ virtual void __unk_vfn_25();
    /*78*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*79*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*80*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*81*/ virtual void __unk_vfn_26();
    /*82*/ virtual int getIconYOffset() const;
    /*83*/ virtual bool isAuxValueRelevantForPicking() const;
    /*84*/ virtual int getColor(class Block const&) const;
    /*85*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*86*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*87*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*88*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*89*/ virtual void __unk_vfn_27();
    /*90*/ virtual class Block const& getRenderBlock() const;
    /*91*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*92*/ virtual enum Flip getFaceFlip(unsigned char, class Block const&) const;
    /*93*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*94*/ virtual void __unk_vfn_28();
    /*95*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*96*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*97*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*98*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*99*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*100*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*101*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*102*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*103*/ virtual void __unk_vfn_29();
    /*104*/ virtual void __unk_vfn_30();
    /*105*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*106*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*107*/ virtual void __unk_vfn_31();
    /*108*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*109*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*110*/ virtual int getExtraRenderLayers() const;
    /*111*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*112*/ virtual void __unk_vfn_32();
    /*113*/ virtual void __unk_vfn_33();
    MCAPI ConduitBlock(std::string const&, int);

protected:

private:

};