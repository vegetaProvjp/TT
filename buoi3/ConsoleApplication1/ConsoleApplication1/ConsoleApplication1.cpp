#include <iostream>
#include <string>
using namespace std;

struct coor {
    int x;
    int y;
};

class Car {

private:
    int id;
    string name;
    coor ofCar;
public:

    void setID(int id) {
        this->id = id;
    }
    int getID() {
        return id;
    }
    string getName() {
        return name;
    }
    void setName(string name) {
        this->name = name;
    }
    void move() {
        coor a;
        cout << "Nhap x cho xe o to: ";
        cin >> a.x;
        ofCar.x = a.x;
        cout << "Nhap y cho xe o to: ";
        cin >> a.y;
        ofCar.y = a.y;
    }
    void position() {
        move();
        cout << "Xe o vi tri: x =  " << ofCar.x << " y = " << ofCar.y << endl;;
    }
};

class Motorbike {
private:
    int id;
    string name;
    coor ofMotor;
public:

    void setID(int id) {
        this->id = id;
    }
    int getID() {
        return id;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void move() {
        coor a;
        cout << "Nhap x cho xe may: ";
        cin >> a.x;
        ofMotor.x = a.x;
        cout << "Nhap y cho xe may: ";
        cin >> a.y;
        ofMotor.y = a.y;
    }
    void position() {
        move();
        cout << "Xe o vi tri: x =  " << ofMotor.x << " y = " << ofMotor.y << endl;
    }
    
};
class Tree {
private:
    int id;
    string name;
    coor ofTree;
public:
    void setID(int id) {
        this->id = id;
    }
    int getID() {
        return id;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void move() {
        coor a;
        cout << "Nhap x cho cay: ";
        cin >> a.x;
        ofTree.x = a.x;
        cout << "Nhap y cho cay: ";
        cin >> a.y;
        ofTree.y = a.y;
    }
    void position() {
        move();
        cout << "Cay o vi tri: x =  " << ofTree.x << " y = " << ofTree.y << endl;
    }
};
class Home {
private:
    int id;
    string name;
    coor ofHome;
public:
    void setID(int id) {
        this->id = id;
    }
    int getID() {
        return id;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void move() {
        coor a;
        cout << "Nhap x cho nha: ";
        cin >> a.x;
        ofHome.x = a.x;
        cout << "Nhap y cho nha: ";
        cin >> a.y;
        ofHome.y = a.y;
    }
    void position() {
        move();
        cout << "Nha o vi tri: x =  " << ofHome.x << " y = " << ofHome.y << endl;
    }
};

int main() {
    Motorbike mtk;
    mtk.setID(123);
    cout << "ID xe may: " << mtk.getID() << endl;
    mtk.setName("Wave");
    cout << "Ten xe may: " << mtk.getName() << endl;
    mtk.position();
    Car car;
    car.setID(456);
    cout << "ID o to: " << car.getID() << endl;
    car.setName("BWM");
    cout << "Ten o to: " << car.getName() << endl;
    car.position();
    Home home;

    home.setID(321);
    cout << "ID nha: " << home.getID() << endl;
    home.setName("HOME");
    cout << "Ten nha: " << home.getName() << endl;
    home.position();

    Tree tree;
    tree.setID(456);
    cout << "ID cay: " << tree.getID() << endl;
    tree.setName("TREE");
    cout << "Ten cay: " << tree.getName() << endl;
    tree.position();
}
