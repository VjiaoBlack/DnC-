#include <string>

using namespace std;

class PC {
    // everything public
    // cuz i dont want to deal with getters/setters
    public:
        int type, hp, level, xp;
        string name, surname, title;
        int stats[5];
        PC(int,string, string);
};
