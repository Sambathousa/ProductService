// #ifndif PRODUCT_HPP
// #define PRODUCT_HPP

// #endif
#pragma once
#include<string>

class Product{
private:
    int id;
    std::string name;
    float price;
    int qty;
public:
    Product();
    Product(int id,std::string name,float price,int qty);

    //getter
    int getId() const;
    std::string getname() const;
    float getprice() const;
    int getqty() const;

    //setter
    void setName(const std::string name);
    void setPrice(const float price);
    void setQty(const int qty);
};