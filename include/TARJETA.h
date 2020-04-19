#ifndef TARJETA_H
#define TARJETA_H

class TARJETA{
    private:
        int amarillas;
        int rojas;
    public:
        TARJETA();
        void set_tarjetas(int,int);
        int get_rojas();
        int get_amarillas();
        ~TARJETA();
};

#endif // TARJETA_H
