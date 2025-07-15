#include"ProductService.hpp"
#include<iomanip>
#include<iostream>
void ProductService::AddProduct(const Product& product){
    products.push_back(product);
}
void ProductService::getAllProduct()const{
    std::cout<<std::left
             <<std::setw(6)<<"id"
             <<std::setw(25)<<"name"
             <<std::setw(10)<<"price"
             <<std::setw(10)<<"qty"<<std::endl;
    for (const auto&p : products){
        std::cout<<std::left
                <<std::setw(6)<<p.getId()
                <<std::setw(25)<<p.getname()
                <<std::setw(10)<<p.getprice()
                <<std::setw(10)<<p.getqty()<<std::endl;
    }
    
}
void ProductService::getProductById(int id)const{
    for(auto it=products.begin();it!=products.end();it++ ){
        if(it->getId()==id){
            std::cout<<"Product id"<<it->getId()<<std::endl;
            std::cout<<"Product name:"<<it->getname()<<std::endl;
            std::cout<<"Product price:"<<it->getprice()<<std::endl;
            std::cout<<"Product qty:"<<it->getqty()<<std::endl;  
        }
    }
}
void ProductService::DeleteProductById(int id){
    
    std::cout<<"Enter id you want to delete:";std::cin>>id;
    for(auto it=products.begin();it!=products.end();it++){
        if(it->getId()==id){
            products.erase(it);
            std::cout<<"Delete is done:"<<std::endl;
        }
    }
}
void ProductService::UpdateProductById(int id,const std::string&name,float price,int qty){
    for(auto it=products.begin();it!=products.end();it++){
        if(it->getId()==id){
            it->setName(name);
            it->setPrice(price);
            it->setQty(qty);
        }
    }       
}
bool ProductService::existsById(int id){
    for(auto it=products.begin();it!=products.end();it++){
        if(it->getId()==id){
            return true;
            break;
        }
    }
    return false;
}
