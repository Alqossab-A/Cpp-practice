#include <iostream>
#include <iomanip>

using namespace std;

int calCost(int x, int y);
float calTax(int x, float y); 

int main() {
    const int small_room_price = 20;
    const int large_room_price = 35;
    const float tax = 1.06;
    const int estimate_expiry = 30;

    int number_of_small_rooms = 0;
    int number_of_large_rooms = 0;

    cout << "how many small rooms would you like?\n";
    cin >> number_of_small_rooms;

    cout << "how many large rooms would you like?\n";
    cin >> number_of_large_rooms;

    cout << "Estimation for carpet cleaning service: \n";

    cout << "Number of small rooms: " << number_of_small_rooms << '\n';
    cout << "Number of large rooms: " << number_of_large_rooms << '\n';
    cout << "Price per small room: $" << small_room_price << '\n';
    cout << "Price per large room: $" << large_room_price << '\n';

    int room_total = calCost(number_of_small_rooms, small_room_price) + calCost(number_of_large_rooms, large_room_price);
    cout << "Cost: $" << room_total << '\n';

    float tax_total = calTax(room_total, tax) - room_total;
    cout << fixed << setprecision(2);
    cout << "Tax: $" << tax_total << '\n';

    cout << "====================================\n";

    float total_cost = room_total + tax_total;
    cout << "Total estimate: $" << total_cost << '\n';

    cout << "This estimate is valid for " << estimate_expiry << "days \n";

    return 0;
}

int calCost(int x, int y) {
    return x * y;
};

float calTax(int x, float y) {
    return x * y;
};

