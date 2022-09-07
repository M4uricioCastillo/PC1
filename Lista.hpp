template <class T>
class Nodo
{
    Nodo<T> *siguiente;
    T dato;

public:
    Nodo(T dato)
    {
        this->dato = dato;
        siguiente = nullptr;
    }
    ~Nodo()
    {
        delete siguiente;
    }
};

template <class T>
class Lista
{
    int longitud;
    Nodo<T> *inicio;

public:
    Lista<T>()
    {
        longitud = 0;
        inicio = nullptr;
    }
    ~Lista<T>()
    {
        delete inicio;
    }
    void push_back(T dato)
    {
        Nodo<T> *nuevo = new Nodo<T>(dato);
        if (inicio == nullptr)
        {
            inicio = nuevo;
        }
        else
        {
            Nodo<T> *aux = inicio;
            while (aux->siguiente != nullptr)
            {
                aux = aux->siguiente;
            }
            aux->siguiente = nuevo;
        }
        longitud++;
    }
    void pop_back()
    {
        if (inicio != nullptr)
        {
            Nodo<T> *aux = inicio;
            Nodo<T> *aux2 = nullptr;
            while (aux->siguiente != nullptr)
            {
                aux2 = aux;
                aux = aux->siguiente;
            }
            if (aux2 != nullptr)
            {
                aux2->siguiente = nullptr;
            }
            else
            {
                inicio = nullptr;
            }
            delete aux;
            longitud--;
        }
    }
    void pop_at(int i)
    {
        if (inicio != nullptr)
        {
            Nodo<T> *aux = inicio;
            Nodo<T> *aux2 = nullptr;
            int j = 0;
            while (aux->siguiente != nullptr && j < i)
            {
                aux2 = aux;
                aux = aux->siguiente;
                j++;
            }
            if (aux2 != nullptr)
            {
                aux2->siguiente = aux->siguiente;
            }
            else
            {
                inicio = aux->siguiente;
            }
            delete aux;
            longitud--;
        }
    }
};
