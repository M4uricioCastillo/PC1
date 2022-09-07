#include "Pedido.hpp"

class Asiento : public Pedido
{
    Pedido* pedido;
    bool ocupado;
    public:
    Asiento() : Pedido()
    {
        pedido = nullptr;
        ocupado = false;
    }
    Asiento(Pedido* pedido) : Pedido(15.0d,1)
    {
        this->pedido = pedido;
        ocupado = true;
    }
};