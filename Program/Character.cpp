#pragma once    
#include <bits/stdc++.h>
#include "Item.cpp"
using namespace std;

class Character
{
private:
    string name;
    string gender;
    string weapon;
    string role;
    int HP;
    int ATK;
    int def;
    int speed;
    int luck;
    int level;
    int poinSkill;  
    std::vector<Item> Items;
    
public:
    Character(){

    }

    Character(string name, string gender, string weapon, string role, int HP, int ATK, int def, int speed, int luck, int level, int poinSkill,std::vector<Item> Items) {
        this->name = name;
        this->gender = gender;
        this->weapon = weapon;
        this->role = role;
        this->HP = HP;
        this->ATK = ATK;
        this->def = def;
        this->speed = speed;
        this->luck = luck;
        this->level = level;
        this->poinSkill = poinSkill;
        Items = Items;
    }

    string GetName() {
        return name;
    }

    void SetName(string name) {
        this->name = name;
    }

    string GetGender() {
        return gender;
    }

    void SetGender(string gender) {
        this->gender = gender;
    }

    string GetWeapon() {
        return weapon;
    }

    void SetWeapon(string weapon) {
        this->weapon = weapon;
    }

    string GetRole() {
        return role;
    }

    void SetRole(string role) {
        this->role = role;
    }

    int GetHP() {
        return HP;
    }

    void SetHP(int HP) {
        this->HP = HP;
    }

    int GetATK() {
        return ATK;
    }

    void SetATK(int ATK) {
        this->ATK = ATK;
    }

    int GetDef() {
        return def;
    }

    void SetDef(int def) {
        def = def;
    }

    int GetSpeed() {
        return speed;
    }

    void SetSpeed(int speed) {
        this->speed = speed;
    }

    int GetLuck() {
        return luck;
    }

    void SetLuck(int luck) {
        luck = luck;
    }

    int GetLevel() {
        return level;
    }

    void SetLevel(int level) {
        this->level = level;
    }

    int GetPoinSkill()  {
        return poinSkill;
    }

    void SetPoinSkill(int poinSkill) {
        this->poinSkill = poinSkill;
    }

    std::vector<Item> GetItems()  {
        return Items;
    }

    void SetItems(std::vector<Item> Items) {
        this->Items = Items;
    }

    void addItem(Item item) {
        Items.push_back(item);
    }

    void removeItem(string name) {
        int i = 0;
        bool found = false;
        while (i < Items.size() && !found) {
            if (Items[i].GetNamaItem() == name) {
                Items.erase(Items.begin() + i);
                found = true;
            }
            else {
                i++;
            }
        }
    }




    void attack(Character &target) {
        target.HP -= this->ATK;
    }
    
    void increaseHP() {
        if (poinSkill > 0) {
            HP++;
            poinSkill--;
        }
        else
        {
            printf("\n\nPoin skill tidak cukup\n\n");
        }
        
    }

    void increaseATK() {
        if (poinSkill > 0) {
            ATK++;
            poinSkill--;
        }
                else
        {
            printf("\n\nPoin skill tidak cukup\n\n");
        }
    }

    void increaseDef() {
        if (poinSkill > 0) {
            def++;
            poinSkill--;
        }
                else
        {
            printf("\n\nPoin skill tidak cukup\n\n");
        }
    }

    void increaseSpeed() {
        if (poinSkill > 0) {
            speed++;
            poinSkill--;
        }
                else
        {
            printf("\n\nPoin skill tidak cukup\n\n");
        }
    }

    void increaseLuck() {
        if (poinSkill > 0) {
            luck++;
            poinSkill--;
        }
                else
        {
            printf("\n\nPoin skill tidak cukup\n\n");
        }
    }

    void useSkill() {
        printf("Karakter menggunakan skill-nya");
    }


    ~Character(){

    }
};

