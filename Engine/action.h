#ifndef ACTION_H
#define ACTION_H

#include "card.h"
#include "character.h"

enum action_type {
  play_spell,
  play_minion,
  attack,
  hero_power,
  end_turn,
}

struct Action {
  action_type type;
  card* Card;
  character* attacker;
  character* target;
  int slot;
}

#endif
