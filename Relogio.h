#ifndef RELOGIO_H_
#define RELOGIO_H_

class Relogio{
    private:
        int hora;
        int minuto;
        int segundo;
    public:
        void setHorario (int x, int y, int z);
        int getHora ();
        int getMinuto ();
        int getSegundo ();
        void avancarHorario ();
};
#endif // RELOGIO_H_
