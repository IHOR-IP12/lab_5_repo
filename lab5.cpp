#include#include <iostream>
// #include <string>

using namespace std;

class Fighter
{
public:
    string name;
    int health;
    int damagePerAttack;

    string getName()
    {
        return name;
    }
    int getHealth()
    {
        return health;
    }
    int getDamagePerAttack()
    {
        return damagePerAttack;
    }

    Fighter(string name, int health, int damagePerAttack)

    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }
};

class Fight
{
public:
    void declareWinner(Fighter fighter1, Fighter fighter2)
    {
        while (1)
        {
            fighter1.health -= fighter2.damagePerAttack;
            fighter2.health -= fighter1.damagePerAttack;
            if (fighter1.health <= 0)
            {
                cout << "Winner- " << fighter1.name << endl;
                break;
            }
            if (fighter2.health <= 0) //else does not match the given condition
            {
                cout << "Winner- " << fighter2.name << endl;
                break;
            }
        }
    }
};

int main()
{
    Fighter man("Slavko", 10, 2);
    //main is directly related to the class
    //and is executed thanks to it, if you change the name,
    //the code simply will not compile, be more careful when reading the code
    Fighter man2("Slavko2", 5, 4);
    //main is directly related to the class
    //and is executed thanks to it, if you change the name,
    //the code simply will not compile, be more careful when reading the code

    Fight fight;
    fight.declareWinner(man, man2);
    return 0;
}