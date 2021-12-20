// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CraftHandlerGrindstone : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERGRINDSTONE
public:
    class CraftHandlerGrindstone& operator=(class CraftHandlerGrindstone const&) = delete;
    CraftHandlerGrindstone(class CraftHandlerGrindstone const&) = delete;
    CraftHandlerGrindstone() = delete;
#endif

public:
    /*0*/ virtual ~CraftHandlerGrindstone();
    /*1*/ virtual enum ItemStackNetResult preHandleAction(enum ItemStackRequestActionType);
    /*2*/ virtual void endRequestBatch();
    /*3*/ virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*4*/ virtual void _postCraftRequest(bool);
    /*5*/ virtual class Recipes const* _getLevelRecipes() const;
    MCAPI CraftHandlerGrindstone(class Player&, class ItemStackRequestActionCraftHandler&);

protected:

private:
    MCAPI class ItemStack _createResultItem(class ItemStack const&, class ItemStack const&);
    MCAPI int _getExperienceFromItem(class ItemStack const&) const;
    MCAPI class ItemStack _getResultItemWithNoEnchants(std::vector<class ItemStack> const&, bool&);
    MCAPI bool _resolveNetIdAndValidate(enum ContainerEnumName, unsigned char, struct ItemStackNetIdVariant const&);

};