/*write a program to enter the code and price of items. the user must feed the quantity in which he wants a product. the program must calculate and display the final bill.*/
#include <iostream>
using namespace std;
class items
{
private:
    int item[4];
    float price[4];

public:
    static int i;
    void product()
    {
          for(int j=1;j<=4;j++){
        float rate;
        cout<<"enter the price of "<<i<<" product = ";
        cin>>rate;
        item[i] =j;
        price[i] =rate;
        i++;
    
    }
        
    }
    void display()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << " price of " << i << " product =" << price[i] << endl;
        }
    }
    void price_item()
    {

        float total = 0;
        for (int i = 0; i <= 3; i++)
        {
            total = total + price[i];
        }
        cout << "total price of product= " << total;
    }
};

int main()
{
    items A;
    A.product();
  
}
