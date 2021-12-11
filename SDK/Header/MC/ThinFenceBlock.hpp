// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ThinFenceBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THINFENCEBLOCK
public:
    class ThinFenceBlock& operator=(class ThinFenceBlock const&) = delete;
    ThinFenceBlock(class ThinFenceBlock const&) = delete;
    ThinFenceBlock() = delete;
#endif

public:
    /*0*/ virtual ~ThinFenceBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual void addAABBs(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&) const;
    /*5*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*6*/ virtual bool addCollisionShapes(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
    /*7*/ virtual bool getLiquidClipVolume(class BlockSource&, class BlockPos const&, class AABB&) const;
    /*8*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*9*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*10*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const& )> const&, class BlockPos const&) const;
    /*11*/ virtual void __unk_vfn_0();
    /*12*/ virtual bool isStrippable(class Block const&) const;
    /*13*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*14*/ virtual bool canConnect(class Block const&, unsigned char, class Block const&) const;
    /*15*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*16*/ virtual void __unk_vfn_1();
    /*17*/ virtual void __unk_vfn_2();
    /*18*/ virtual void __unk_vfn_3();
    /*19*/ virtual void __unk_vfn_4();
    /*20*/ virtual void __unk_vfn_5();
    /*21*/ virtual void __unk_vfn_6();
    /*22*/ virtual void __unk_vfn_7();
    /*23*/ virtual void __unk_vfn_8();
    /*24*/ virtual void __unk_vfn_9();
    /*25*/ virtual void __unk_vfn_10();
    /*26*/ virtual bool isDoubleSlabBlock() const;
    /*27*/ virtual void __unk_vfn_11();
    /*28*/ virtual void __unk_vfn_12();
    /*29*/ virtual void __unk_vfn_13();
    /*30*/ virtual void __unk_vfn_14();
    /*31*/ virtual void __unk_vfn_15();
    /*32*/ virtual void __unk_vfn_16();
    /*33*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*34*/ virtual bool isValidAuxValue(int) const;
    /*35*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*36*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*37*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*38*/ virtual void __unk_vfn_17();
    /*39*/ virtual void __unk_vfn_18();
    /*40*/ virtual bool canContainLiquid() const;
    /*41*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*42*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*43*/ virtual bool canBeUsedInCommands(class BaseGameVersion const&) const;
    /*44*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*45*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*46*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*47*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*48*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*49*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_19();
    /*51*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*53*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*54*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*55*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*56*/ virtual void __unk_vfn_20();
    /*57*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*58*/ virtual void __unk_vfn_21();
    /*59*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*60*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*61*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*62*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*63*/ virtual bool mayPick() const;
    /*64*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*65*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*66*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*67*/ virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;
    /*68*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*69*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*70*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*71*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*72*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*73*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*74*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*75*/ virtual void __unk_vfn_22();
    /*76*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*77*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*78*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*79*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*80*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*81*/ virtual int getExperienceDrop(class Random&) const;
    /*82*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*83*/ virtual void __unk_vfn_23();
    /*84*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*85*/ virtual void __unk_vfn_24();
    /*86*/ virtual void __unk_vfn_25();
    /*87*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*88*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*89*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*90*/ virtual void __unk_vfn_26();
    /*91*/ virtual int getIconYOffset() const;
    /*92*/ virtual bool isAuxValueRelevantForPicking() const;
    /*93*/ virtual int getColor(class Block const&) const;
    /*94*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*95*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*96*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*97*/ virtual class AABB const& getVisualShapeInWorld(class Block const&, class BlockSource const&, class BlockPos const&, class AABB&, bool) const;
    /*98*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*99*/ virtual void __unk_vfn_27();
    /*100*/ virtual class Block const& getRenderBlock() const;
    /*101*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*102*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*103*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*104*/ virtual void __unk_vfn_28();
    /*105*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*106*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*107*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*108*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*109*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*110*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*111*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*112*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*113*/ virtual void __unk_vfn_29();
    /*114*/ virtual void __unk_vfn_30();
    /*115*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*116*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*117*/ virtual void __unk_vfn_31();
    /*118*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*119*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*120*/ virtual int getExtraRenderLayers() const;
    /*121*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*122*/ virtual void __unk_vfn_32();
    /*123*/ virtual void __unk_vfn_33();
    /*
    inline bool isThinFenceBlock() const{
        bool (ThinFenceBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isThinFenceBlock@ThinFenceBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI ThinFenceBlock(std::string const&, int, class Material const&, bool, bool, bool);

protected:

private:
    MCAPI static class BaseGameVersion const THIN_FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION;

};