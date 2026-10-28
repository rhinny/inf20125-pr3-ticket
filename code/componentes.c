#include <stdio.h>

int main(void)
{
    int componentes_iniciales = 0;
    int componentes_recibidos = 0;
    int componentes_instalados = 0;
    int componentes_disponibles = 0;

    if (scanf("%d %d %d",
              &componentes_iniciales,
              &componentes_recibidos,
              &componentes_instalados) != 3)
    {
        return 1;
    }

    componentes_disponibles = componentes_iniciales + componentes_recibidos + componentes_instalados;

    printf("Componentes disponibles: %d\n", componentes_disponibles);
    return 0;
}
