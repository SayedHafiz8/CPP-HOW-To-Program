#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;
int main()
{
    Invoice invoice{ "235", "new Item", 20, 10 };
    cout << "Code: " << invoice.getNumber() << endl;
    cout << "Discreption: " << invoice.getDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price: " << invoice.getPrice() << endl;
    cout << "VAT: " << invoice.getVAT() << endl;
    cout << "Discount: " << invoice.getDiscRate() << endl;
    cout << "Total Price: " << invoice.getInvoiceAmount() << endl;

    Invoice iphone{ "1235468", "15 pro max", 23, 2000 };

    cout << "\n\nCode: " << iphone.getNumber() << endl;
    cout << "Discreption: " << iphone.getDescription() << endl;
    cout << "Quantity: " << iphone.getQuantity() << endl;
    cout << "Price: " << iphone.getPrice() << endl;
    cout << "VAT: " << iphone.getVAT() << endl;
    cout << "Discount: " << iphone.getDiscRate() << endl;
    cout << "Total Price: " << iphone.getInvoiceAmount() << endl;

    iphone.setPrice(1800);
    cout << "\n\nEnter The discreption of your product" << endl;
    string discription;
    getline(cin, discription);
    iphone.setDescription(discription);
    double discount, VAT;
    cout << "Enter The discount" << endl;
    cin >> discount;
    iphone.setDiscRate(discount);
    cout << "Enter the VAT " << endl;
    cin >> VAT;
    iphone.setVAT(VAT);

    cout << "\n\nCode: " << iphone.getNumber() << endl;
    cout << "Discreption: " << iphone.getDescription() << endl;
    cout << "Quantity: " << iphone.getQuantity() << endl;
    cout << "Price: " << iphone.getPrice() << endl;
    cout << "VAT: " << iphone.getVAT() << endl;
    cout << "Discount: " << iphone.getDiscRate() << endl;
    cout << "Total Price: " << iphone.getInvoiceAmount() << endl;
}
