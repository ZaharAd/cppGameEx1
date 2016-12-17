//
// Created by zahar on 09/12/16.
//

#ifndef CPPEX1_CROSSBOW_H
#define CPPEX1_CROSSBOW_H


#include "ArcherWeapon.h"
class Hero;

class CrossBow : public ArcherWeapon {
private:
    const double extra = 1.2;
    const string type = "OneHandedWeapon";
public:
    CrossBow();

    CrossBow(Point2d &location, double weaponPower);

    virtual ~CrossBow();

    const string &getType() const;

    virtual string toString();
};


#endif //CPPEX1_CROSSBOW_H
