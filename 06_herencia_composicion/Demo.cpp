#pragma once
#include <iostream>

using namespace std;

class Demo {
    private:
        int id;
    
    public:
        Demo() {
            id = 1;
        }

        Demo(int _id) {
            id = _id;
        }

        int getId() {
            return id;
        }

        void setId(int _id) {
            id = _id;
        }

        void mostrar() {
            cout << id << endl;
        }

};