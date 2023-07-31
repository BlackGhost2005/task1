//#include <iostream>
//#include <cassert>
//using namespace std;
//
//class Airplane
//{
//    int _id;
//    char* _model;
//    char* _color;
//    double _engine;
//    int _capacity;
//
//public:
//
//    static int _static_id;
//    static int MAXCOUNT;
//
//
//
//    Airplane() : _id(_static_id++), _model(nullptr), _color(nullptr), _engine(0.0), _capacity(0) {
//
//    }
//
//    Airplane(const char* model, int capacity) : Airplane() {
//        setModel(model);
//        setCapacity(capacity);
//
//    }
//
//    Airplane(const char* model, int capacity, int engine) : Airplane(model, capacity) {
//        setEngine(engine);
//
//    }
//
//    Airplane(const char* model, const char* color, int capacity, int engine) : Airplane(model, capacity, engine) {
//        setColor(color);
//
//    }
//
//
//
//    int getId() const {
//        return this->_id;
//    
//    }
//
//    char* getModel() const {
//        return this->_model;
//    
//    }
//
//    char* getColor() const {
//        return this->_color;
//
//    }
//
//    double getEngine() const {
//        return this->_engine;
//    
//    }
//
//    int getCapacity() const {
//        return this->_capacity;
//    
//    }
//
//
    //void setModel(const char* model)
    //{
    //    int len = strlen(model);
    //    if (len >= 1)
    //    {
    //        if (this->_model != NULL)
    //            delete[] this->_model;

    //        this->_model = new char[len + 1];
    //        strcpy_s(this->_model, len + 1, model);
    //    }
    //    else assert(!"Model boshdur !");
    //}
//
//    void setColor(const char* color)
//    {
//        int len = strlen(color);
//        if (len >= 1)
//        {
//            if (_color != NULL)
//                delete[] _color;
//
//            _color = new char[len + 1];
//            strcpy_s(_color, len + 1, color);
//        }
//        else assert(!"Reng boshdur !");
//    }
//
//    void setEngine(double engine)
//    {
//        if (engine >= 0) _engine = engine;
//        else assert(!"Muherrik menfi ola bilmez !");
//    }
//
//    void setCapacity(int capacity) {
//        if (capacity >= 1)
//            _capacity = capacity;
//        else assert(!"Tutum 1-den kicik ola bilmez!");
//    
//    }
//
//
//    void print()
//    {
//        cout << "ID: " << getId() << endl;
//        cout << "Model: " << getModel() << endl;
//        cout << "Color: " << getColor() << endl;
//        cout << "Engine: " << getEngine() << endl;
//        cout << "Capacity: " << getCapacity() << endl;
//        cout << endl;
//    }
//
//    ~Airplane()
//    {
//        delete[] _model;
//        delete[] _color;
//    }
//
//
//};
//
//int Airplane::_static_id = 0;
//
//class Garage
//{
//private:
//    Airplane** _airplanes = nullptr;
//    size_t _count = 0;
//    char* _name;
//    char* _address;
//public:
//
//    Garage() : _airplanes(nullptr), _count(0), _name(nullptr), _address(nullptr) {}
//    Garage(const char* name, const char* address, Airplane** airplanes, size_t count) 
//    { 
//        setName(name);
//        setAddress(address);
//        _airplanes = airplanes;
//        _count = count;
//    }
//
//    Airplane** getAirplanes() { return _airplanes; }
//    size_t getCount() { return _count; }
//    char* getName() { return _name; }
//    char* getAdress() { return _address; }
//
//    void setArirplanes(Airplane** airplanes) { _airplanes = airplanes; }
//    void setCount(int count) { _count = count; }
//    void setName(const char* name)
//    {
//        int len = strlen(name);
//        if (len > 1)
//        {
//            if (name != nullptr) delete[] _name;
//            _name = new char[++len];
//            strcpy_s(_name, len, name);
//        }
//        else assert(!"Ad minimum 1 simvol olmalidir !");
//    }
//
//    void setAddress(const char* address)
//    {
//        int len = strlen(address);
//        if (len > 1)
//        {
//            if (_address != nullptr)
//                delete[] _address;
//
//            _address = new char[++len];
//            strcpy_s(_address, len, address);
//        }
//        else assert(!"Address minimum 1 simvol olmalidir !");
//    }
//
//    Airplane* getAirplaneById(int id)
//    {
//        if (id < 0) 
//            assert(!"ID menfi ola bilmez !");
//
//        for (int i = 0; i < _count; i++)
//        {
//            if (_airplanes[i]->getId() == id) {
//
//                _airplanes[i]->print();
//                return _airplanes[i];
//            }
//        }
//        assert(!"Bele ID yoxdur !");
//    }
//
//    Airplane** getAirplanesCapacityGreaterThan(int capacity)
//    {
//        int len = 0; 
//        int a = 0;
//
//        for (int i = 0; i < _count; i++)
//        {
//            if (_airplanes[i]->getCapacity() >= capacity)
//                len++;
//        }
//        Airplane** arr = new Airplane * [len];
//        for (int i = 0; i < _count; i++)
//        {
//            if (_airplanes[i]->getCapacity() >= capacity)
//            {
//                _airplanes[i]->print();
//                arr[a] = _airplanes[i];
//                a++;
//            }
//        }
//   
//        return arr;
//    }
//
//    Airplane** getAirplanesByColor(const char* color)
//    {
//        int len = 0;
//        int a = 0;
//
//        for (int i = 0; i < _count; i++)
//        {
//            if (!strcmp(color, _airplanes[i]->getColor()))
//                len++;
//        }
//        Airplane** arr = new Airplane * [len];
//
//        for (int i = 0; i < _count; i++)
//        {
//            if (!strcmp(color, _airplanes[i]->getColor()))
//            {
//                _airplanes[i]->print();
//                arr[a] = _airplanes[i];
//                a++;
//            }
//        }
//        return arr;
//    }
//
//    void print()
//    {
//        cout << "Name: " << _name << endl;
//        cout << "Address: " << _address << endl;
//        cout << endl;
//        for (int i = 0; i < _count; i++)
//        {
//            _airplanes[i]->print();
//            cout << endl;
//        }
//    }
//
//    ~Garage()
//    {
//        delete[] _name;
//        delete[] _address;
//        for (int i = 0; i < _count; i++)
//        {
//            delete[] _airplanes[i];
//        }
//        delete[] _airplanes;
//    }
//};
//
//
//
//int main()
//{
//   int size = 2;
//    Airplane** airplanes = new Airplane * [size];
//    airplanes[0] = new Airplane("Huseyn", "Blue", 50, 5);
//    airplanes[1] = new Airplane("Cavid", "Black", 400, 20);
//
//    Garage* garage = new Garage("Turkish Airlines", "Yasamal", airplanes, size);
//    garage->getAirplanesByColor("Blue");
//
//    garage->print();
//
//}