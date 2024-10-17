    /*Product* findProduct(const string& productName) {
            for (auto& product : products) {
                if (product.getName() == productName) {
                    return &product;
                }
            }
            return nullptr;
        }

    Product* findByCountry(const string& countryName) {
        for (auto& product : products) {
            if (product.getOrigin() == countryName) {
                return &product;
            }
        }
        return nullptr;
    }

    void findByPriceRange(double upperprice, double lowerprice) {
        for (auto& product : products) {
            if ((product.getPrice() >= lowerprice) && (product.getPrice() <= upperprice)) {
                product.display();
                cout << "---------------------" << endl;
            }
        }
    }

    void sortByPriceHtoL() {
        vector<Product> templist = products;
        sort(templist.begin(), templist.end(), [](Product a, Product b)
            {
                return a.getPrice() > b.getPrice();
            });
        cout << "Catalogue sorted by price high to low:" << endl;
        for (auto& product : templist) {
            product.display();
            cout << "---------------------" << endl;
        }
    }

    void sortByPriceLtoH() {
        vector<Product> templist = products;
        sort(templist.begin(), templist.end(), [](Product a, Product b)
            {
                return a.getPrice() < b.getPrice();
            });
        cout << "Catalogue sorted by price low to high:" << endl;
        for (auto& product : templist) {
            product.display();
            cout << "---------------------" << endl;
        }
    }


cout << "Order history:" << endl;
                for (const auto& order : store.getOrderHistory()) {
                    time_t orderDate = order.getOrderDate();
                    tm timeinfo;
                    char buffer[26];
                    localtime_s(&timeinfo, &orderDate);
                    asctime_s(buffer, sizeof(buffer), &timeinfo);

                    cout << "Order Date: " << buffer
                        << "Customer Info: " << order.getCustomerInfo() << endl
                        << "Ordered products:" << endl;
                    for (const auto& orderedProduct : order.getProducts()) {
                        cout << "- " << orderedProduct.getName() << " - $" << orderedProduct.getPrice()
                            << " - " << orderedProduct.getDescription() << endl;
                    }
                    cout << endl;

//alternative original order history function made by GPT4
std::cout << "Order Date: " << std::asctime(std::localtime(&order.getOrderDate()))
                        << "Customer Info: " << order.getCustomerInfo() << std::endl
                        << "Ordered products:" << std::endl;

//main function block from my OEL which prints a rudimentary search and sort menu that we can modify further
case 4: {
                cout << endl;
                cout << "Choose which method you want the list to be filtered by: " << endl;
                cout << "1. Default\n2. Price high to low\n3. Price low to high\n4. Search by range" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch (choice) {
                case 1: {
                    store.displayCatalogue();
                    break;
                }
                case 2: {
                    store.sortByPriceHtoL();
                    break;
                }
                case 3: {
                    store.sortByPriceLtoH();
                    break;
                }
                case 4: {
                    double upperprice, lowerprice;
                    cout << "Enter the upper price limit: "; cin >> upperprice;
                    cout << "Enter the lower price limit: "; cin >> lowerprice;
                    store.findByPriceRange(upperprice, lowerprice);
                }
                default: {
                    cout << "Invalid input! Try again";
                }
                }

/*int n = 0;
char Pointer[3] = { '>', ' ', ' ' };

void MenuPrint() {
    printf("Please select the game you want to play (Press enter to select): \n");
    printf("%c Snake Game\n", Pointer[0]);
    printf("%c Tic Tac Toe\n", Pointer[1]);
    printf("%c Wordle\n", Pointer[2]);
}

void GameSelect() {
    if (n % 3 == 0) {
        SnakeGame();
    }
    else if (n % 3 == 1) {
        SnakeGame();
    }
    else if (n % 3 == 2) {
        Wordle();
    }
}

int main() {
    while (1) {
        MenuPrint();
        int InputKey = _getch();

        if (InputKey == 13) {
            system("cls");
            GameSelect();
        }

        else if (InputKey == 80) {
            n++;
        }
        else if (InputKey == 72) {
            n--;
        }

        for (int i = 0; i < 3; i++) {
            Pointer[i] = ' ';
        }

        Pointer[n % 3] = '>';

        system("cls");
    }
    return 0;
}*/