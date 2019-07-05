#ifndef "ENGINE_H"
#define "ENGINE_H"

#include "sequence.h"
#include "phase.h"
#include "card.h"
#include "minion.h"
#include "weapon.h"
#include "hero.h"
#include "boardstate.h"
#include "action.h"


class Engine {
  private:

    BoardState state;

  public:
    Engine(char* deck1_name, char* deck2_name) {
      // instantiate
    }
    BoardState getBoardState() {
      return board;
    }

    int getLegalMoves(action* a_list) {
      return 0;
    }
}

#endif
