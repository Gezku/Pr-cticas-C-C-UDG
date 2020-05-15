#include <stdio.h>
#include <string.h>


struct cd{
    char *albums[6];
    int numero_discos;
    int numero_canciones;
};

struct grupoMusical{
    char nombre[20];
    int edad;  
};

struct artista{
    struct grupoMusical grupoMusicalDetalles;
    struct cd cdDetalles;
};

int main() {
    struct artista grupoMusical;

    
    strcpy(grupoMusical.grupoMusicalDetalles.nombre, "The Mars Volta");
    grupoMusical.grupoMusicalDetalles.edad = 12;
    grupoMusical.cdDetalles.albums[0] = "De-Loused in the Comatorium (2003-2004)";
    grupoMusical.cdDetalles.albums[1] = "Frances the Mute (2005)";
    grupoMusical.cdDetalles.albums[2] = "Amputechture (2006-2007)";
    grupoMusical.cdDetalles.albums[3] = "The Bedlam in Goliath (2008-2009)";
    grupoMusical.cdDetalles.albums[4] = "Octahedron (2009-2011)";
    grupoMusical.cdDetalles.albums[5] = "Noctourniquet (2012-2013)";
    grupoMusical.cdDetalles.numero_canciones = 62;
    grupoMusical.cdDetalles.numero_discos = 6;
    
    printf("Nombre del grupo musical: %s \n", grupoMusical.grupoMusicalDetalles.nombre);
    printf("Años de actividad: %d \n", grupoMusical.grupoMusicalDetalles.edad);
    printf("Nombre de albums: %s, \n%s %s, %s,\n%s, %s \n", grupoMusical.cdDetalles.albums[0], 
    grupoMusical.cdDetalles.albums[1], grupoMusical.cdDetalles.albums[2], 
    grupoMusical.cdDetalles.albums[3], grupoMusical.cdDetalles.albums[4], 
    grupoMusical.cdDetalles.albums[5]
    );
    printf("Numero de canciones: %d \n", grupoMusical.cdDetalles.numero_canciones);
    printf("Numero de discos: %d \n", grupoMusical.cdDetalles.numero_discos);
    
   return 0;
}