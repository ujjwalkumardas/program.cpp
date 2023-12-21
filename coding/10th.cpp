/*write a program to calculate  the bill amount for an item given its quantity sold,value ,discount and tax*/
#include<iostream>
using namespace std;
int main(){
    int quantity,price,discount,tax;
    
    cout<<"enter the quantity of item = ";
    cin>>quantity;
      cout<<"enter the price of item = ";
      cin>>price;
      cout<<"enter the discount of item = ";
      cin>>discount;
      cout<<"enter the tax of item = ";
      cin>>tax;
      cout<<"******************BILL************************\n";
      cout<<"\nquantity of solid = "<<quantity;
      cout<<"\nprice per items = "<<price;
      cout<<"\n**-------------------------------------------**";
      float amount ,dis,total_discount,sub_tax,total_tax;
      amount=(quantity*price);
      dis=(amount*discount)/100;
      total_discount=amount-dis;
      sub_tax=(total_discount*tax)/100;
      total_tax=total_discount+sub_tax;
      cout<<"\nAmount =    "<<amount;
      cout<<"\ndiscount =    "<<dis;
      cout<<"\n total discounted =    "<<total_discount;
      cout<<"\ntax =    "<<sub_tax;
      cout<<"\n--------------------------";
      cout <<"\ntotal amount to be paid = "<<total_tax;

      
}