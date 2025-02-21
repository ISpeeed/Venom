#ifndef ALL_CLASSES_H
#define ALL_CLASSES_H //Защищают от повторного включения заголовочного файла

#include <string>
#include <vector>

// Класс Product (Товар)
class Product {
private:
    std::string name;
    double price;
    int quantity;

public:
    Product(std::string name, double price, int quantity);//Конструктор для инициализации товара

    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;//Геттеры для получения значений атрибутов

    void setPrice(double price);
    void setQuantity(int quantity);//Методы для изменения цены и количества
};

// Класс Store (Магазин)
class Store {
private:
    std::string name;
    std::vector<Product> products;

public:
    Store(std::string name);//Конструктор для создания магазина

    std::string getName() const;//Геттер для имени магазина
    void addProduct(std::string productName, double price, int quantity);//Метод для добавления товаров
    double getPrice(std::string productName) const;//Метод для получения цены товара по имени
    bool purchaseProduct(std::string productName, int quantity);//Метод для покупки товара
};

// Класс Customer (Покупатель)
class Customer {
private:
    std::string name;
    double balance;

public:
    Customer(std::string name, double balance);//Конструктор для инициализации покупателя

    std::string getName() const;
    double getBalance() const;//Геттеры для полученя имени и баланса

    void addFunds(double amount);//Метод для пополнения баланса
    void buyProduct(Store& store, std::string productName, int quantity);//Метод для покупки товара в магазине
};

// Класс StoreManager (Управление магазинами)
class StoreManager {
private:
    std::vector<Store> stores;

public:
    void addStore(Store store);//Метод для добавления магазина в список
    Store* findCheapestStore(std::string productName);//Метод для поиска магазина с самой низкой ценой на товар
};

#endif // Завершает ifndef предотвращая дублирование кода