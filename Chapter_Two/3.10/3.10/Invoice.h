#pragma once
#include <iostream>
#include <string>

class Invoice {
public:
	Invoice(std::string invoiceNumber, std::string invoiceDesciption, int invoiceQuantity, int invoicePrice) 
		: part_number{ invoiceNumber }, part_description{ invoiceDesciption }, quantity{ invoiceQuantity }, price{invoicePrice} {
		VAT = 0.20;
		discountRate = 0;
	}

	int getInvoiceAmount() {
		int x, discountCost;
		x = quantity * price;
		discountCost = x - (x * discountRate);
		return discountCost + (discountCost * VAT);
	}

	void setNumber(std::string invoiceNumber) {
		part_number = invoiceNumber;
	}

	std::string getNumber() {
		return part_number;
	}

	void setDescription(std::string invoiceDescription) {
		part_description = invoiceDescription;
	}
	
	std::string getDescription() {
		return part_description;
	}

	void setQuantity(int invoiceQuantity) {
		if (invoiceQuantity > 0) {
			quantity = invoiceQuantity;
		}
	}

	int getQuantity() {
		return quantity;
	}

	void setPrice(int invoicePrice) {
		if (invoicePrice > 0) {
			price = invoicePrice;
		}
	}

	int getPrice() {
		return price;
	}

	void setVAT(double invoiceVat) {
		if (invoiceVat > 0) {
			VAT = invoiceVat;
		}
	}

	double getVAT() {
		return VAT;
	}

	void setDiscRate(double invoiceDiscRate) {
		if (invoiceDiscRate > 0) {
			discountRate = invoiceDiscRate;
		}
	}

	double getDiscRate() {
		return discountRate;
	}
private:
	std::string part_number;
	std::string part_description;
	int quantity{ 0 };
	int price{ 0 };
	double VAT{ 0 };
	double discountRate{ 0 };
};