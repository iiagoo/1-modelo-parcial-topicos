#include "socios.h"

void trozado(char *linea, Socio *s)
{
    char *p = strchr(linea, '\n'); // busca el primer \n en la linea
    if (p) *p = '\0';            // lo reemplaza por \0 para cortar ahi

    char *token = strtok(linea, "|"); // parte la linea por "|" y devuelve el primer pedazo
    s->codigo = strtol(token, NULL, 10); // convierte ese pedazo a long (base 10)

    token = strtok(NULL, "|");  // NULL significa "seguí desde donde quedaste"
    strcpy(s->apynom, token);      // copia el token al campo nya

    token = strtok(NULL, "|");        // siguiente token
    s->antiguedad = atoi(token);
}
