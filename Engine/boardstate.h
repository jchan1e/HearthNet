#ifndef BOARDSTATE_H
#define BOARDSTATE_H

#include "card.h"
#include "minion.h"
#include "weapon.h"
#include "hero.h"

class Player {
  Hero hero;
  int hp;
  int armor;
  int mana;
  int max_mana;
  bool coin;
  bool hero_power;
  minion board[7];
  vector<minion> graveyard;
  vector<card> deck;
  int fatigue;
}
struct BoardState {
  Player player1;
  Player player2;
  int turn;
};

#endif
