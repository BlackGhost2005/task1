//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<random>
//using namespace std;
//
//
//
//class Car {
//
//public:
//
//	string _marka;
//	string _model;
//	int _price;
//	Car(string marka, string model, int price) {
//
//		this->_model = model;
//		this->_marka = marka;
//		this->_price = price;
//	}
//
//	void Show() {
//		cout << "Marka: " << this->_marka << endl;
//		cout << "Model: " << this->_model << endl;
//		cout << "Price: " << this->_price << endl;
//		cout << endl;
//	}
//
//};
//
//void show(Car* car)
//{
//	cout << "Marka: " << car->_marka << endl;
//	cout << "Model: " << car->_model << endl;
//	cout << "Price: " << car->_price << endl;
//	cout << endl;
//}
//
//int main() {
//
//	vector<Car*>cars;
//
//	cars.push_back(new Car("Kia", "Optima", 20000));
//	cars.push_back(new Car("Mersedes", "S-class", 60000));
//	cars.push_back(new Car("BMW", "X6", 56870));
//	cars.push_back(new Car("RR", "sport", 150000));
//	cars.push_back(new Car("Hundai", "Santafe", 30000));
//
//
//	//auto min = min_element(begin(cars), end(cars), [](Car* car1,Car* car2)->bool {return car1->_price < car2->_price; });
//	//cout << (*min)->_price << endl;
//
//	//auto max = max_element(begin(cars), end(cars), [](Car* car1, Car* car2)->bool {return car1->_price < car2->_price; });
//	//cout << (*max)->_price << endl;
//
//	//sort(begin(cars), end(cars), [](Car* car1, Car* car2)->bool {return car1->_marka < car2->_marka; });
//	//for_each(begin(cars), end(cars), show);
//
//	//sort(begin(cars), end(cars), [](Car* car1, Car* car2)->bool {return car1->_model < car2->_model; });
//	//for_each(begin(cars), end(cars), show);
//
//	//sort(begin(cars), end(cars), [](Car* car1, Car* car2)->bool {return car1->_price < car2->_price; });
//	//for_each(begin(cars), end(cars), show);
//
//	//auto a = find_if(cars.begin(), cars.end(), [](Car* car)->bool {return car->_marka == "Kia"; });
//	//(*a)->Show();
//}