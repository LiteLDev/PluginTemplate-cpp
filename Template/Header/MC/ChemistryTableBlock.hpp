// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChemistryTableBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYTABLEBLOCK
public:
    class ChemistryTableBlock& operator=(class ChemistryTableBlock const&) = delete;
    ChemistryTableBlock(class ChemistryTableBlock const&) = delete;
    ChemistryTableBlock() = delete;
#endif

public:
    /*0*/ virtual ~ChemistryTableBlock();
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
    /*15*/ virtual bool isWaterBlocking() const;
    /*16*/ virtual void __unk_vfn_4();
    /*17*/ virtual void __unk_vfn_5();
    /*18*/ virtual void __unk_vfn_6();
    /*19*/ virtual void __unk_vfn_7();
    /*20*/ virtual void __unk_vfn_8();
    /*21*/ virtual void __unk_vfn_9();
    /*22*/ virtual void __unk_vfn_10();
    /*23*/ virtual bool isDoubleSlabBlock() const;
    /*24*/ virtual void __unk_vfn_11();
    /*25*/ virtual void __unk_vfn_12();
    /*26*/ virtual void __unk_vfn_13();
    /*27*/ virtual void __unk_vfn_14();
    /*28*/ virtual void __unk_vfn_15();
    /*29*/ virtual void __unk_vfn_16();
    /*30*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*31*/ virtual bool isValidAuxValue(int) const;
    /*32*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*33*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*34*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*35*/ virtual void __unk_vfn_17();
    /*36*/ virtual void __unk_vfn_18();
    /*37*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*38*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*39*/ virtual bool canBeUsedInCommands(class BaseGameVersion const&) const;
    /*40*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*41*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*42*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*43*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*44*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*45*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*46*/ virtual void __unk_vfn_19();
    /*47*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void __unk_vfn_20();
    /*53*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*54*/ virtual void __unk_vfn_21();
    /*55*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*56*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*57*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*58*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*59*/ virtual bool mayPick() const;
    /*60*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*61*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*62*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*63*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*64*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*65*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*66*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*67*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*68*/ virtual void __unk_vfn_22();
    /*69*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*70*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*71*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*72*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*73*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*74*/ virtual int getExperienceDrop(class Random&) const;
    /*75*/ virtual void __unk_vfn_23();
    /*76*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*77*/ virtual void __unk_vfn_24();
    /*78*/ virtual void __unk_vfn_25();
    /*79*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*80*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*81*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*82*/ virtual void __unk_vfn_26();
    /*83*/ virtual int getIconYOffset() const;
    /*84*/ virtual std::string buildDescriptionId(class Block const&) const;
    /*85*/ virtual bool isAuxValueRelevantForPicking() const;
    /*86*/ virtual int getColor(class Block const&) const;
    /*87*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*88*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*89*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*90*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*91*/ virtual int getVariant(class Block const&) const;
    /*92*/ virtual void __unk_vfn_27();
    /*93*/ virtual class Block const& getRenderBlock() const;
    /*94*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*95*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*96*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*97*/ virtual void __unk_vfn_28();
    /*98*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*99*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*100*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*101*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*102*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*103*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*104*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*105*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*106*/ virtual void __unk_vfn_29();
    /*107*/ virtual void __unk_vfn_30();
    /*108*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*109*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*110*/ virtual void __unk_vfn_31();
    /*111*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*112*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*113*/ virtual int getExtraRenderLayers() const;
    /*114*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*115*/ virtual void __unk_vfn_32();
    /*116*/ virtual void __unk_vfn_33();
    /*117*/ virtual class ItemInstance getEntityResourceItem(class Randomize&, class BlockActor const&, int) const;
    /*
    inline bool canBeSilkTouched() const{
        bool (ChemistryTableBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@ChemistryTableBlock@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isCraftingBlock() const{
        bool (ChemistryTableBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isCraftingBlock@ChemistryTableBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInteractiveBlock() const{
        bool (ChemistryTableBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isInteractiveBlock@ChemistryTableBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI ChemistryTableBlock(std::string const&, int);
    MCAPI static class ItemInstance getItemForType(enum ChemistryTableType, int);
    MCAPI static bool isUIValidForPlayer(class BlockPos const&, class Player&, float, enum ChemistryTableType);

protected:

private:

};