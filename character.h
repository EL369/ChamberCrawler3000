#ifndef _CHARACTER_H_
#define _CHARACTER_H_
#include <memory>
class Gold;

class Character{
protected:
    int health;
    int attack;
    int defense;
    int row;
    int col;
    std::shared_ptr<Gold> gold;

public:
    Character(int, int, int, int, int);
    virtual ~Character();
    int getHP();
    int getAtk();
    int getDF();
    int getGold();
    int getRow();
    int getCol();
    void changeRow(int);
    void changeCol(int);
    void addHP(int);
    void addAttack(int);
    void addDefense(int);
    int setRow(int);
    int setCol(int);

};
#endif
