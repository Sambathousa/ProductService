#include"Product.hpp"

Product::Product(){}

Product::Product(int id,const std::string name,float price,int qty)
        :id(id),name(name),price(price),qty(qty){}
int Product::getId()const{
    return id;
}
std::string Product::getname()const{
    return name;
}
float Product::getprice()const{
    return price;
}
int Product::getqty()const{
    return qty;
}
void Product::setName(const std::string name){
    this->name=name;
}
void Product::setPrice(const float price){
    this->price=price;
}
void Product::setQty(const int qty){
    this->qty=qty;
}

