#include <OOP.h>
#include <iostream>
#include "food.h"
#include "fruit.h"
#include "sandwich.h"
using namespace std;

int main(int argc, char *argv[]) {
    // Food food(25);
    // food.BeConsumed();
    // cout << "Calories: " << food.GetCalories() << endl;
    // food.SetCalories(100);
    // cout << "Calories: " << food.GetCalories() << endl;

    // Food *pFood = &food;
    // pFood->BeConsumed();

    Fruit fruit(50, 3);
    cout << "Fruit Calories: " << fruit.GetCalories() << endl;
    fruit.BeConsumed();
    
    Sandwich sandwich;
    sandwich.SetCalories(500);
    cout << "Sandwich Calories: " << sandwich.GetCalories() << endl;
    sandwich.BeConsumed();
    
    return 0;
}
