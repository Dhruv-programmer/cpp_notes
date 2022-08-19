#include <iostream>
using namespace std;
class store
{
    int product_id[100];
    int price[100];
    int temp;

public:
    void set_temp();  // sets temp to zero
    void set_price(); // registers products along with their prices
    void show_data(); // shows Id and price of all the products in a store.
};
void store::set_temp()
{
    temp = 0;
}
void store ::set_price()
{
    cout << "Enter product id of product " << temp + 1 << ": ";
    cin >> product_id[temp];
    cout << "Enter price of product " << temp + 1 << ": ";
    cin >> price[temp];
    temp++;
}
void store ::show_data()
{
    for (int i = 0; i < temp; i++)
    {
        cout << "Product Id: " << product_id[i] << " Price: " << price[i] << endl;
    }
}
int main()
{
    int a;
    store amazona;
    amazona.set_temp();
    cout << "How many products do you want to register: ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        amazona.set_price();
    }
    amazona.show_data();
    return 0;
}