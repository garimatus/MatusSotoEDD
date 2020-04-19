#ifndef RUT_H
#define RUT_H

class RUT{
    private:
        long int rut;
        char dv;
    public:
        RUT();
        void set_rut(long int);
        long int get_rut();
        char get_dv();
        ~RUT();
};

#endif // RUT_H
