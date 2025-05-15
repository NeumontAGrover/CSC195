#include <Containers.h>
#include <iostream>
#include <array>
#include <list>
#include <map>
using namespace std;

void Arrays(void) {
    // Specify the size of the array and insert all of the necessary values
    // such as the days of the week
    array<string, 7> weekDays = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    // Print each item in the array as it appears in the order above
    for (string day : weekDays)
        cout << day << " ";
    cout << endl;
}

void Vectors(void) {
    // Create a dynamically sized array by first supplying
    vector<int> integers = { 10, 9, 8, 7, 6 };
    // Push 5 and 4 into back of the array
    integers.push_back(5);
    integers.push_back(4);
    // Take out the element at the back of the array, in this case, 4.
    integers.pop_back();
    // Loop through each number in the vector
    for (int num : integers)
        cout << num << " ";
    cout << endl;
}

void Lists(void) {
    // Insert three fruits into the fruit list
    list<string> fruits = { "Kiwi", "Blackberry", "Mango" };
    // Push two more fruits into the array by using push_front and push_back
    fruits.push_front("Pineapple");
    fruits.push_back("Mandarin");
    // Remove the value Blackberry from the original list
    fruits.remove("Blackberry");
    // Iterate through all of the remaining fruits using the for loop
    for (string fruit : fruits)
        cout << fruit << " ";
    cout << endl;
}

void Maps(void) {
    // Insert each fruit and price into a the map
    map<string, int> fruitPrices = {
        { "Kiwi", 4 },
        { "Mango", 9 },
        { "Pineapple", 6 }
    };
    // Change the price of the kiwi by accessing it with the square brackets
    fruitPrices["Kiwi"] = 5;
    // Loop over each of the elements using the pair of the fruit price and
    // access both the fruit and price by using "first" and "second" respectively
    for (pair<string, int> fruitPrice : fruitPrices) {
        cout << fruitPrice.first;
        cout << " $" << fruitPrice.second << endl;
    }
}

int main(int argc, char *argv[]) {
    Arrays();
    Vectors();
    Lists();
    Maps();

    return 0;
}
