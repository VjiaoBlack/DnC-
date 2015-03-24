#include "character.hpp"

using namespace std;

#define STR 0
#define CON 1
#define DEX 2
#define INT 3
#define CHA 4
#define WIS 5

PC::PC (int t, string n, string s) {
    type = t;
    hp = 4;
    level = 1;
    xp = 0;
    name = n;
    surname = s;
    title = "";
    int i;
    for (i = 0; i < 6; i++) {
        stats[i] = 0;
    }
}
