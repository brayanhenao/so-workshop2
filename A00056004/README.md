# so-workshop2 Llamadas al sistema
**Nombre:** Brayan Andrés Henao **Código:** A00056004
# Descripción

**Llamadas al sistema:** 

**chmod()** 
Esta llamada al sistema se encarga de modificar los permisos de un archivo. Los 3 permisos básicos que tiene un archivo son: 
r - lectura
w - escritura
x - ejecución 
La función es chmod(const char *pathname, mode_t mode) en el cual el primer argumento indica la ruta del archivo a cambiar los permisos, y el segundo indica los permisos que se le van a conceder. En el ejemplo usé S_IRWXU en el cual le doy los 3 permisos al archivo. 
La documentación de esta llamada al sistema se encuentra en: http://man7.org/linux/man-pages/man2/chmod.2.html 

**reboot()**
Esta llamada al sistema se encarga de reinicia el sistema. 
La función es reboot(int cmd) en el cual el argumento es opcional, el cual define el tipo de reinicio (puede llegar a ser un apagado completo o hibernar). 
Es muy sencilla, usé los parámetros LINUX_REBOOT_CMD_RESTART el cual imprime en pantalla "Restarting system." y luego ejecuta un reinicio normal. 
La documentación de esta llamada al sistema se encuentra en: http://man7.org/linux/man-pages/man2/reboot.2.html 

**rename()**
Esta llamada al sistema se encarga de renombrar un archivo o directorio. 
La función es rename(const char *oldpath, const char *newpath) en el cual el primer argumento es el nombre del directorio o archivo inicial, el segundo es el nuevo nombre que se le quiere dar. 
La documentación de esta llamada al sistema se encuentra en: http://man7.org/linux/man-pages/man2/rename.2.html 
 

