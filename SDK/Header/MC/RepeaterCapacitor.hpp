// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RepeaterCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATERCAPACITOR
public:
    class RepeaterCapacitor& operator=(class RepeaterCapacitor const&) = delete;
    RepeaterCapacitor(class RepeaterCapacitor const&) = delete;
#endif

public:
    /*0*/ virtual ~RepeaterCapacitor();
    /*1*/ virtual int getStrength() const;
    /*2*/ virtual int getDirection() const;
    /*3*/ virtual void setStrength(int);
    /*4*/ virtual void setDirection(unsigned char);
    /*5*/ virtual bool canConsumePowerAnyDirection() const;
    /*6*/ virtual void __unk_vfn_0();
    /*7*/ virtual bool removeSource(class BlockPos const&, class BaseCircuitComponent const*);
    /*8*/ virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /*9*/ virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /*10*/ virtual void checkLock(class CircuitSystem&, class BlockPos const&);
    /*11*/ virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /*12*/ virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    /*13*/ virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    /*14*/ virtual void __unk_vfn_1();
    /*15*/ virtual bool isHalfPulse() const;
    /*16*/ virtual void __unk_vfn_2();
    /*17*/ virtual bool isSecondaryPowered() const;
    /*18*/ virtual enum CircuitComponentType getCircuitComponentType() const;
    /*19*/ virtual unsigned char getPoweroutDirection() const;
    /*
    inline bool canConsumerPower() const{
        bool (RepeaterCapacitor::*rv)() const;
        *((void**)&rv) = dlsym("?canConsumerPower@RepeaterCapacitor@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI RepeaterCapacitor();
    MCAPI void setDelay(int);

protected:

private:

};