#include <iostream>

class Fruit {
public:
    int numFruits;

    Fruit() : numFruits(0) {}

    void addFruit(int num) {
        numFruits += num;
    }
};

class Apples : public Fruit {
public:
    int numApples;

    Apples() : numApples(0) {}

    void addApples(int num) {
        numApples += num;
        addFruit(num);
    }
};

class Mangoes : public Fruit {
public:
    int numMangoes;

    Mangoes() : numMangoes(0) {}

    void addMangoes(int num) {
        numMangoes += num;
        addFruit(num);
    }
};

int main() {
    Fruit basket;
    Apples apples;
    Mangoes mangoes;

    apples.addApples(10);
    mangoes.addMangoes(5);

    std::cout << "Number of apples: " << apples.numApples << std::endl;
    std::cout << "Number of mangoes: " << mangoes.numMangoes << std::endl;
    std::cout << "Total number of fruits in the basket: " << basket.numFruits << std::endl;

    return 0;
}
