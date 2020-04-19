#ifndef FECHA_H
#define FECHA_H


class FECHA{
    private:
        int dd;
        int mm;
        int aa;
    public:
        FECHA();
        void set_fecha(int,int,int);
        int get_dia();
        int get_mes();
        int get_ano();
        FECHA get_fecha();
        ~FECHA();
};

#endif // FECHA_H
