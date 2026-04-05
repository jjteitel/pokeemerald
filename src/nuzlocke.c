//
// Created by Yosef Teitelbaum on 3/27/26.
//

#include "global.h"
#include "nuzlocke.h"
#include "constants/items.h"

const u8 gText_NuzlockeCannotRevive[] = _("{STR_VAR_1} can't be used during Nuzlocke.{PAUSE_UNTIL_PRESS}");
const u8 gText_NuzlockeCannotReviveDeadMon[] = _();

bool8 NuzlockeIsReviveItem(u16 itemId)
{
    return itemId == ITEM_REVIVE
        || itemId == ITEM_MAX_REVIVE
        || itemId == ITEM_REVIVAL_HERB
        || itemId == ITEM_SACRED_ASH;
}

bool8 NuzlockeIsMonDead(struct Pokemon *mon)
{
    return mon->hp == 0;
}