#ifndef "CARD_H"
#define "CARD_H"

#include "hero.h"
#include "minion.h"
#include "weapon.h"
#include "action.h"

#include "boardstate.h"

enum card_type {
  spell,
  minion,
  hero,
  weapon
}

class card {
  public:
    int mana_cost;
    card_type type;
    bool targets;

    void resolve(boardstate* board);
}

#endif
