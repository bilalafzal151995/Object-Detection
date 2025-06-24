#include <iostream>
using namespace std;

class Shape {
public:
virtual void getProperties() = 0;
virtual void displayProperties() = 0;

};

class Circle : public Shape {
protected:
    float radius;

public:
    void getProperties() override {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void displayProperties() override {
        cout << "Radius: " << radius << endl;
        cout << "radius is "<<radius << endl;
    }
};


class Square : public Shape {
protected:
    int side;

public:
    void getProperties() override {
        cout << "Enter sides: ";
        cin >> side;
    }

    void displayProperties() override {
        cout << "side: " << radius << endl;
        cout << "side is "<<radius << endl;
    }
};






class Rectangle : public Shape {
protected:
    float width;
    float height;

public:
    void getProperties() override {
        cout << "Enter widths: "<<endl;
        cin >> width;
        cout<<"enter height"<<endl;
        cin>>height;

    }

    void displayProperties() override {
        cout << "width: " << width << endl;
        cout << "height is "<<height << endl;
    }
};




int main() {
    Shape* shape = nullptr;

    int choice;
    cout<<"choose a shape"<<endl;
    cout<<"1 .cirlce"<<endl;
    cout<<"2 .rectangle"<<endl;
    cout<<"3. squrare"<<endl;

    cin>>choice;
    switch (choice) {
        case 1:
            shape = new Circle();
            break;
        case 2:
            shape = new Rectangle();  
            break;
        case 3:
            shape = new  Square();
            break;   
        default:
            std::cout<<"not match";
            return 1;    

    }
              
    shape->getProperties();      
    shape->displayProperties();    
    
    return 0;
}
