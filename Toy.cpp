#include "Toy.h"

products::fun::Toy::Toy()
{
	material = "undefine";

}

products::fun::Toy::Toy(std::string name, float price, std::string manufacture, int age, std::string material)
	:Product(name, price, manufacture, age)
{
	this->material = material;
}

void products::fun::Toy::setMaterial(std::string material)
{
	this->material = material;
}

std::string products::fun::Toy::getMaterial() const
{
	return material;
}

void products::fun::Toy::show() const
{
	cout << "\tToy" << endl;
	cout << "Name: " << name << "\nPrice" << price << "\nManufacture: " << manufacture << "\nAge: " << age
		<< "\nMaterial: " << material<<endl<<endl;
}

float products::fun::Toy::calcPrice() const
{
	float total = price;
	if (material.find("natural") != -1) {
		total *= 1.3;

	}
	if (age <= 3) {
		total *= 1.1;
	}
	return total;
}
