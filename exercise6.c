#include <stdio.h>

struct human
{
    char name[20];
    int weight;
    float alcoholLevel;
};

struct alcohol
{
    float percentage;
    char brand[20];
};

void alcoRound(struct alcohol *alcohol, struct human *human1, struct human *human2, struct human *human3, int howMuch)
{
    float rawAlcohol = alcohol->percentage*howMuch/100;
    human1->alcoholLevel = rawAlcohol*100/(human1->weight*75 + rawAlcohol);
    human2->alcoholLevel = rawAlcohol*100/(human2->weight*75 + rawAlcohol);
    human3->alcoholLevel = rawAlcohol*100/(human3->weight*65 + rawAlcohol);

    printf("%s's alcohol level is %f promiles\n", human1->name, human1->alcoholLevel);
    printf("%s's alcohol lever is %f promiles\n", human2->name, human2->alcoholLevel);
    printf("%s's alcohol lever is %f promiles\n\n", human3->name, human3->alcoholLevel);
}

int printUnconscious(struct human *human1, struct human *human2, struct human *human3)
{
    int unconsc=0;
    if (human1->alcoholLevel >= 2)
    unconsc+=1;
    if (human2->alcoholLevel >=2)
    unconsc+=1;
    if (human3->alcoholLevel >=2)
    unconsc+=1;

    return unconsc;
}
int main()
{
    struct human human1 = {"John", 85, 0.0}; 
    struct human human2 = {"Kevin", 50, 0.0};
    struct human human3 = {"Karen", 65, 0.0};

    struct alcohol no1 = {7.5, "first"};
    struct alcohol no2 = {40, "second"};
    struct alcohol no3 = {3.5, "third"};

    alcoRound(&no1, &human1, &human2, &human3, 500);
    alcoRound(&no2, &human1, &human2, &human3, 4*75);

    printf("number of unconscious people is %d\n", printUnconscious(&human1, &human2, &human3));
}
