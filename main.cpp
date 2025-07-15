#include<iostream>
#include "Product.hpp"
#include "ProductService.hpp"
using namespace std;

void menu(){
    cout<<"1.     Add      "<<endl;
    cout<<"2.   Get all    " <<endl;
    cout<<"3.   Get By Id  "<<endl;
    cout<<"4.   deleteby id "<<endl;
    cout<<"5.   updateby id"<<endl;
    cout<<"0.     Exit     "<<endl; 
}

ProductService productService;

int main(){
    system("cls");

    // Product p1(101,"coca",1.5,100);
    // cout<<p1.getId()<<endl;
    // cout<<p1.getname()<<endl;
    // cout<<p1.getprice()<<endl;
    // cout<<p1.getqty()<<endl;

    // int id, qty;
    // string name;
    // float price;
    // cout<<"Enter product id:";cin>>id;
    // cout<<"Enter product name:";cin>>name;
    // cout<<"Enter product price:";cin>>price;
    // cout<<"Enter product qty:";cin>>qty;

    // Product p2(id,name,price,qty);
    // cout<<p2.getId()<<endl;
    // cout<<p2.getname()<<endl;
    // cout<<p2.getprice()<<endl;
    // cout<<p2.getqty()<<endl;

    int op;
    do{
        menu();
        cout<<"Enter an option";cin>>op;
        if(op ==0){
            cout<<"Exiting..."<<endl;
            return 0;
        }

        switch (op)
        {
        case 1:{
            int id;
            string name;
            double price;
            int qty;
            cout<<"Enter id:";cin>>id;
            cout<<"Enter name:";cin>>name;
            cout<<"Enter price:";cin>>price;
            cout<<"Enter qty:";cin>>qty;

            Product p(id,name,price,qty);
            productService.AddProduct(p);
            break;
        }
        case 2:{
            productService.getAllProduct();
            break;
        }
        case 3:{
            int id;
            cout<<"Enter id:";cin>>id;
            productService.getProductById(id);
            break;
        }
        case 4:{
            int id;
            cout<<"Enter id:";cin>>id;
            productService.DeleteProductById(id);
        }
        case 5:{
            int id;
            cout<<"Enter id to update:";cin>>id;
            if(!productService.existsById(id)){
                cout<<"Product with id:"<<id<<"does not exit"<<endl;
                break;
            }
            string name;
            float price;
            int qty;
            cout<<"Enter new name:";cin>>name;
            cout<<"Enter new price:";cin>>price;
            cout<<"Enter new qty:";cin>>qty;
            productService.UpdateProductById(id,name,price,qty);
            break;
        }
        default:
            cout<<"Invalid option"<<endl;
            break;
        }
    }while (op!=0);


    return 0;
}