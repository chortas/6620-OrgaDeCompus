#ifndef BASE64_H
#define BASE64_H

int encode(int infd, int outfd);
int decode(int infd, int outfd);

char* errmsg[3] = {
	"Todo OK",
	"La lectura del archivo no fue exitosa",
    "La escritura del archivo no fue exitosa"
};


extern char B64[64];

char* errmsg[5] = {
	"Todo OK",
	"La lectura del archivo no fue exitosa",
    "La escritura del archivo no fue exitosa",
    "Cantidad de bytes inconsistente en el archivo a decodificar",
    "Contenido inconsistente en el archivo a decodificar"
};

#endif
