#include <bits/stdc++.h>
#include "Character.cpp"
#include "Npc.cpp"
#include "Item.cpp"

using namespace std;

int main() {
    // Membuat beberapa item
    // Membuat item untuk Nova
    Item novaPotion("Potion", 10);
    Item novaSword("Sword", 1);
    Item novaKey("House Key", 2);
    Item novaCoins("Coins", 1000000);
    vector<Item> novaItems;
    novaItems.push_back(novaPotion);
    novaItems.push_back(novaSword);
    novaItems.push_back(novaKey);
    novaItems.push_back(novaCoins);


    // Membuat item untuk Jane
    Item janePotion("Potion", 8);
    Item janeWand("Wand", 1);
    Item janeCoins("Coins", 200);
    vector<Item> janeItems;
    janeItems.push_back(janePotion);
    janeItems.push_back(janeWand);
    janeItems.push_back(janeCoins);

    // Membuat item untuk Sora
    Item soraPotion("Potion", 12);
    Item soraSword("Sword", 1);
    Item soraKey("Dungeon Key", 1);
    Item soraCoins("Coins", 200000);
    vector<Item> soraItems;
    soraItems.push_back(soraPotion);
    soraItems.push_back(soraSword);
    soraItems.push_back(soraKey);
    soraItems.push_back(soraCoins);

    // Membuat item untuk Aloy
    Item aloyPotion("Potion", 9);
    Item aloyBow("Bow", 1);
    Item aloyCoins("Coins", 10);
    vector<Item> aloyItems;
    aloyItems.push_back(aloyPotion);
    aloyItems.push_back(aloyBow);
    aloyItems.push_back(aloyCoins);

    // Membuat karakter dengan item mereka masing-masing
    Character nova("Nova", "M", "Bow", "DPS", 100, 50, 20, 30, 15, 1, 1, novaItems);
    Character jane("Jane", "F", "Magic Wand", "Healer", 80, 30, 25, 20, 10, 1, 0, janeItems);
    Character sora("Sora", "M", "Sword", "Tank", 120, 40, 30, 25, 12, 1, 0, soraItems);
    Character aloy("Aloy", "F", "Bow", "DPS", 90, 55, 20, 30, 15, 1, 2, aloyItems);

    // Membuat item untuk NPC
    Item thorHammer("Hammer", 1);
    Item thorCoins("Coins", 100);


    Item adrianSpear("Spear", 1);
    Item adrianSword("Excalibur", 1);
    Item adrianCoins("Coins", 10000);

    Item lyraBook("Skill Book", 3);
    Item lyraCoins("Coins", 10000);

    vector<Item> thorItems;
    vector<Item> adrianItems;
    vector<Item> lyraItems;

    thorItems.push_back(thorHammer);
    thorItems.push_back(thorCoins);

    adrianItems.push_back(adrianSpear);
    adrianItems.push_back(adrianSword);
    adrianItems.push_back(adrianCoins);
    
    lyraItems.push_back(lyraBook);
    lyraItems.push_back(lyraCoins);

    vector<Item> thorshopItems;
    thorshopItems.push_back(thorHammer);

    vector<Item> adrianshopItems;
    adrianshopItems.push_back(adrianSword);

    vector<Item> lyrashopItems;
    lyrashopItems.push_back(lyraBook);

    // Membuat NPC dengan item mereka masing-masing
    Npc thor("Thor", "M", "Hammer", "Tank", 200, 70, 30, 25, 10, 5, 0, thorItems, true, thorshopItems);
    Npc adrian("Adrian", "M", "Spear", "Merchant", 100, 0, 20, 15, 10, 1, 0, adrianItems, false, adrianshopItems);
    Npc lyra("Lyra", "F", "Book", "Librarian", 80, 0, 25, 20, 12, 1, 0, lyraItems, false, lyrashopItems);

    // Menyimpan karakter dalam vector
    vector<Character> characters;
    characters.push_back(nova);
    characters.push_back(jane);
    characters.push_back(sora);
    characters.push_back(aloy);

    // Meminta pengguna untuk memilih karakter
    cout << "Pilih karakter:\n";
    for (int i = 0; i < characters.size(); i++) {
        cout << i + 1 << ". " << characters[i].GetName() << "\n";
    }
    int characterChoice;
    cin >> characterChoice;
    Character &chosenCharacter = characters[characterChoice - 1];

    int n = 0;
    while (n != 8) {
        cout << "Pilih menu:\n";
        cout << "1. Upgrade stat\n";
        cout << "2. Ambil quest dari NPC\n";
        cout << "3. Trade dengan NPC\n";
        cout << "4. Lawan NPC jahat\n";
        cout << "5. Coba bicara dengan Thor\n";
        cout << "6. Stat Saat ini\n";
        cout << "7. Daftar Items\n";
        cout << "8. Keluar\n";

        int menu;
        cin >> menu;

        if (menu == 1) {
            // Upgrade stat
            cout << "Stat saat ini:\n";
            cout << "HP: " << chosenCharacter.GetHP() << "\n";
            cout << "ATK: " << chosenCharacter.GetATK() << "\n";
            cout << "DEF: " << chosenCharacter.GetDef() << "\n";
            cout << "Speed: " << chosenCharacter.GetSpeed() << "\n";
            cout << "Luck: " << chosenCharacter.GetLuck() << "\n";
            cout << "Level: " << chosenCharacter.GetLevel() << "\n";
            cout << "Poin Skill: " << chosenCharacter.GetPoinSkill() << "\n";
            
            cout << "Pilih stat untuk ditingkatkan:\n";
            cout << "1. HP\n";
            cout << "2. ATK\n";
            cout << "3. DEF\n";
            cout << "4. Speed\n";
            cout << "5. Luck\n";
            cout << "6. Keluar\n";
            
            int stat;
            cin >> stat;
            if (stat == 1) {
                chosenCharacter.increaseHP();
            } 
            else if (stat == 2) {
                chosenCharacter.increaseATK();
            }
            else if (stat == 3)
            {
                chosenCharacter.increaseDef();
            }
            else if (stat == 4)
            {
                chosenCharacter.increaseSpeed();
            }
            else if (stat == 5)
            {
                chosenCharacter.increaseLuck();
            }
            else if (stat == 5)
            {
                n = 6;
            }

            
          
        } else if (menu == 2) {
            // Ambil quest dari NPC
            cout << "Pilih NPC:\n";
            cout << "1. Adrian\n";
            cout << "2. Lyra\n";
            int npc;
            cin >> npc;
            if (npc == 1) {
                adrian.giveQuest(chosenCharacter);
            } 
            else if (npc == 2) {
                lyra.giveQuest(chosenCharacter);
            }
        } else if (menu == 3) {
            // Trade dengan NPC
            cout << "Pilih NPC:\n";
            cout << "1. Thor\n";
            cout << "2. Adrian\n";
            cout << "3. Lyra\n";
            int npc;
            cin >> npc;
            if (npc == 1) {
                thor.trade(chosenCharacter, thorHammer, 5000);
            } 
            else if (npc == 2) {
                adrian.trade(chosenCharacter, adrianSword, 10000);
            } 
            else if (npc == 3) {
                lyra.trade(chosenCharacter, lyraBook, 2000);
            }
        } 
        else if (menu == 4) {
            // Lawan NPC jahat
            cout << "Pilih NPC:\n";
            cout << "1. Thor\n";
            int npc;
            cin >> npc;
            if (npc == 1) {
                chosenCharacter.attack(thor);
                if (thor.GetHP() <= 0) {
                    chosenCharacter.addItem(thor.defeated());
                }
            }
            cout << "Anda telah menyerang Thor, HP Thor tersisa " << thor.GetHP() << "\n";
            
        } 
        else if (menu == 5) {
            // Coba bicara dengan Thor
            thor.tryTalktoThor(chosenCharacter);
        } 
        
        else if (menu == 6) {
            cout << "Stat saat ini:\n";
            cout << "HP: " << chosenCharacter.GetHP() << "\n";
            cout << "ATK: " << chosenCharacter.GetATK() << "\n";
            cout << "DEF: " << chosenCharacter.GetDef() << "\n";
            cout << "Speed: " << chosenCharacter.GetSpeed() << "\n";
            cout << "Luck: " << chosenCharacter.GetLuck() << "\n";
            cout << "Level: " << chosenCharacter.GetLevel() << "\n";
            cout << "Poin Skill: " << chosenCharacter.GetPoinSkill() << "\n";
        } 
        else if (menu == 7) {
            std::vector<Item> items = chosenCharacter.GetItems();
            cout << "Daftar item milik " << chosenCharacter.GetName() << ":\n";
            for (int i = 0; i < items.size(); i++) {
                cout << i + 1 << ". " << items[i].GetNamaItem() << " (Jumlah: " << items[i].GetQuantity() << ")\n";
            }
        } 
        else if (menu == 8) {
            n = 8;
        } 
        else {
            cout << "Terimakasih telah bermain\n";
        }
    }


    return 0;
}
