#pragma once
#include <bits/stdc++.h>
#include "Character.cpp"

using namespace std;

class Npc : public Character
{
private:
    bool isEnemy;
    std::vector<Item> shopItems;

public:
    Npc(){}

    Npc(string name, string gender, string weapon, string role, int HP, int ATK,int def,int speed,int luck, int level, int poinSkill, vector<Item> Items, bool isEnemy, vector<Item> shopItems) 
    : Character(name, gender, weapon, role, HP, ATK, def, speed, luck, level, poinSkill, Items) {
        this->isEnemy = isEnemy;
        this->shopItems = shopItems;
    }


    void giveInformation() {
        printf("Dibalik sebuah air terjun di daerah X terdapat sebuah harta karun\n");
    }

    void giveQuest(Character &character) {
        printf("NPC memberi anda sebuah quest, anda mendapatkan telah mendapatkan coins\n");
        // Membuat item Coin sebagai hadiah quest
        Item questReward("Coins", rand() % 5000);
        // Menambahkan Coin ke inventory karakter
        character.addItem(questReward);
    }

    void trade(Character &character, Item item, int price) {
        // Mengecek apakah karakter memiliki cukup Coin
        for (int i = 0; i < character.GetItems().size(); i++) {
            if (character.GetItems()[i].GetNamaItem() == "Coins" && character.GetItems()[i].GetQuantity() >= price) {
                // Mengurangi Coin dari karakter
                character.GetItems()[i].SetQuantity(character.GetItems()[i].GetQuantity() - price);
                // Menambahkan item ke inventory karakter
                character.addItem(item);
                printf("Anda telah membeli %s dengan harga %d Coins\n", item.GetNamaItem().c_str(), price);
                return;
            }
        }
        printf("Anda tidak memiliki cukup Coins untuk membeli %s\n", item.GetNamaItem().c_str());
    }

    Item defeated() {
        if (isEnemy && this->GetHP() <= 0) {
            // Jika NPC dikalahkan, hadiahnya bisa berupa barang atau poin skill
            int random = rand() % 2; // Menghasilkan angka acak 0 atau 1
            if (random == 0) {
                // Hadiah berupa barang
                Item reward("Iron Sword", 1);
                return reward;
            } else {
                // Hadiah berupa poin skill
                int poinSkill = rand() % 10; // Menghasilkan angka acak antara 0 dan 9
                this->SetPoinSkill(this->GetPoinSkill() + poinSkill);
            }
        }
        // Mengembalikan item kosong jika NPC tidak dikalahkan
        return Item("", 0);
    }


    void tryTalktoThor(Character &character) {
        if (this->GetName() == "Thor" && character.GetLuck() > 15) {
            printf("\n\nThor berbicara kepada karakter\n\n");
        }
        else if (this->GetName() == "Thor" && character.GetLuck() <= 15)
        {
            printf("\n\nanda diserang oleh Thor, HP anda berkurang\n\n");
            character.SetHP(character.GetHP() - this->GetATK());
        }
        
    }

    bool GetIsEnemy()  {
        return isEnemy;
    }

    void SetIsEnemy(bool isEnemy) {
        this->isEnemy = isEnemy;
    }

    std::vector<Item> GetShopItems()  {
        return shopItems;
    }

    void SetShopItems(std::vector<Item> shopItems) {
         this->shopItems = shopItems;
    }

    ~Npc(){}
};

