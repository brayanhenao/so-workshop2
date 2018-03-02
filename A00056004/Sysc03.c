#include <stdio.h>

int main () {
   int ret;
   char oldname[] = "Prueba.txt";
   char newname[] = "Renombrado.txt";
   
   ret = rename(oldname, newname);
	
   if(ret == 0) {
      printf("Se cambió el nombre del archivo");
   } else {
      printf("Error: No se pudo cambiar el nombre");
   }
   
   return(0);
}
