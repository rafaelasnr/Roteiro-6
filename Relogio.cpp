#include "Relogio.h"

        void Relogio::setHorario (int x, int y, int z){
            hora = x;
            minuto = y;
            segundo = z;
        }
        int Relogio::getHora (){
            return hora;
        }
        int Relogio::getMinuto (){
            return minuto;
        }
        int Relogio::getSegundo (){
            return segundo;
        }

        void Relogio::avancarHorario (){
            int x, y, z;

            if (x == 23 && y == 59 && z == 59){
                    x = 0; y = 0; z = 0;
            }
            else if {y == 59 && z == 59}{
                x++; y = 0; z = 0;
                }
           else if (z == 59){
                y++; z = 0;
           }

           else if (z != 59){
            z++;
           }
        }
