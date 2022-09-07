#include "Asiento.hpp"
#include "Lista.hpp"
#include "Productos.hpp"
class Pedido
{
    Lista<Producto*> productos;
    float Total;
    public:
    Pedido()
    {
        Total = 0;
        productos = Lista<Producto*>();
    }
    void nuevoProducto(Producto* producto)
    {
        productos.push_back(producto);
        Total += producto->getPrecio();
    }
    void eliminarProducto(int posicion)
    {
        productos.pop_back();
        Total -= producto->getPrecio();
    }
    float getTotal()
    {
        return Total;
    }
};