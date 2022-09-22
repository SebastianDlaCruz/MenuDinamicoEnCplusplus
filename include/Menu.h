#ifndef MENU_H
#define MENU_H
class Menu
{
    private:
        string _nombreDelItem;
        int _cantidad;
        Items *_item;
        public:
        Menu();
        void CargarItem(string);
        void MostrarItem();

        int getCantidad(){return _cantidad;}
        string getNombreDelItem(){return _nombreDelItem;}
};

#endif // MENU_H
