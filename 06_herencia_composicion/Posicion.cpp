#pragma once

class Posicion {
    private:
        float x;
        float y;
    public:
        Posicion(){
            x = 1;
            y = 1;
        }

        Posicion(float _x, float _y){
            x = _x;
            y = _y;
        }

        float getX(){
            return x;
        }

        float getY(){
            return y;
        }

        void setX(float _x){
            x = _x;
        }

        void setY(float _y){
            y = _y;
        }
};