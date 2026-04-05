//
// Created by Yosef Teitelbaum on 3/27/26.
//

#ifndef GUARD_NUZLOCKE_H
#define GUARD_NUZLOCKE_H

#include "global.h"

extern const u8 gText_NuzlockeCannotRevive[];

bool8 NuzlockeIsReviveItem(u16 itemId);
bool8 NuzlockeIsMonDead(struct Pokemon *mon);

#endif // GUARD_NUZLOCKE_H
