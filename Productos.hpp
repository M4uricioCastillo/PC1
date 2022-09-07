class Producto
{
    float Precio;
    int Cantidad;
    public:
    Producto()
    {
        Precio = 0;
        Cantidad = 0;
    }
    Producto(float precio, int cantidad)
    {
        this->Precio = precio;
        this->Cantidad = cantidad;
    }
    float getPrecio()
    {
        return Precio;
    }
};