#pragma once
#include"Product.hpp"
#include<vector>
class ProductService{
private:
    std::vector<Product>products;
public:
    void AddProduct(const Product& products);
    void getAllProduct()const;
    void getProductById(int id)const;
    void DeleteProductById(int id);
    void UpdateProductById(int id,const std::string& name,float price,int qty);
    bool existsById(int id);
    
};
