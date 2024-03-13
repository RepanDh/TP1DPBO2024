#pragma once
#include <bits/stdc++.h>

using namespace std;

class Item
{
private:
    string namaItem;
    int quantity;



public:
    Item(){
    }


    Item(string namaItem, int quantity) {
        this->namaItem = namaItem;
        this->quantity = quantity;
    }

    string GetNamaItem()  {
        return namaItem;
    }

    void SetNamaItem(string namaItem) {
        this->namaItem = namaItem;
    }

    int GetQuantity()  {
        return quantity;
    }

    void SetQuantity(int quantity) {
        this->quantity = quantity;
    }

    ~Item(){
    }
};

