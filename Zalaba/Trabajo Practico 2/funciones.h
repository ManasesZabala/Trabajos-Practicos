struct Persona
{
    int dni;
    int edad;
    int estado;
    char nombre[50];
};
typedef struct Persona E_Persona;

/* 1 */int Menu();
/*2*/ char VolverMenu();
/* 3 */int AgregarPersona(E_Persona Persona[],int posicion);
/* 4 */int BorrarPersona(E_Persona Persona[],int posicion,int estado);
/* 5 */void OrdenarListado(E_Persona Persona[],int largo);
