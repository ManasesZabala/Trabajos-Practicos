struct Usuario
{
    char nombre[50];
    char nick[50];
    char contrasena[50];
    char mail[50];
    int idComentario[400];
    int estado;
    int contComentario;
};

typedef struct Usuario E_Usuario;
//---------------------------------------------------------------------------//
struct Comentario
{
    int id;
    int megusta;
    char texto[150];
};

typedef struct Comentario E_Comentario;

//---------------------------------------------------------------------------//
/* 1 */int Menu();
/* 2 */void PonerEstadoEnLibre(E_Usuario lista[],int largo);
/* 3 */char VolverAlMenu();
/* 4 */int AltaUsuario(E_Usuario lista[],int largo,int posicion);
/* 5 */void ModificarUsuario(E_Usuario lista[],char comparacion[],int largo,int validacion);
/* 6 */void BajaUsuario(E_Usuario lista[],char comparacion[],int largo,int validacion);
/* 7 */void NuevoComentario(E_Comentario coment[],int largo,int validacion,int Id,int cont);
/* 8 */void PonerComentariosEnCero(E_Usuario lista[],E_Comentario Coment[],int largo);
/* 9 */void NuevoMeGusta(E_Comentario Coment[],int idDeComentario,int largo,int validacion);
