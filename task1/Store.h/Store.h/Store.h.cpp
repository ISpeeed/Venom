#ifndef ALL_CLASSES_H
#define ALL_CLASSES_H

#include <string>
#include <vector>

// Класс Product (Товар)
class Product {
private:
    std::string name;
    double price;
    int quantity;

public:
    Product(std::string name, double price, int quantity);

    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;

    void setPrice(double price);
    void setQuantity(int quantity);
};

// Класс Store (Магазин)
class Store {
private:
    std::string name;
    std::vector<Product> products;

public:
    Store(std::string name);

    std::string getName() const;
    void addProduct(std::string productName, double price, int quantity);
    double getPrice(std::string productName) const;
    bool purchaseProduct(std::string productName, int quantity);
};

// Класс Customer (Покупатель)
class Customer {
private:
    std::string name;
    double balance;

public:
    Customer(std::string name, double balance);

    std::string getName() const;
    double getBalance() const;

    void addFunds(double amount);
    void buyProduct(Store& store, std::string productName, int quantity);
};

// Класс StoreManager (Управление магазинами)
class StoreManager {
private:
    std::vector<Store> stores;

public:
    void addStore(Store store);
    Store* findCheapestStore(std::string productName);
};

#endif // ALL_CLASSES_H