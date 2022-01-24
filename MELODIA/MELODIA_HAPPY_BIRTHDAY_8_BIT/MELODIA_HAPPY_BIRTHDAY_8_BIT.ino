 pin de altavoz  int =  7 ;  // pin de zumbador
 longitud  int =  28 ;  // el numero de notas
char  notas []  =  "GGAGcB GGAGdc GGxecBA yyecdc" ;
 latidos int []  =  { 2 , 2 , 8 , 8 , 8 , 16 , 1 , 2 , 2 , 8 , 8 , 8 , 16 , 1 , 2 , 2 , 8 , 8 , 8 , 8 , 16 , 1 , 2 , 2 , 8 , 8 , 8 , 16};
 tiempo  int =  200 ; // retraso de tiempo entre notas

void  playTone ( tono int  , duración int ) {   
for  ( long  i  =  0 ;  i  <  duración  *  1000L ;  i  +=  tono  *  2 )  {
   escritura digital ( pin de altavoz ,  ALTO );
   retrasoMicrosegundos ( tono );
   escritura digital ( pin de altavoz ,  BAJO );
   retrasoMicrosegundos ( tono );
}
}

void  playNote ( nota char  , duración int ) {   
nombres de  caracteres []  =  { 'C' ,  'D' ,  'E' ,  'F' ,  'G' ,  'A' ,  'B' ,           

                 'c' ,  'd' ,  'e' ,  'f' ,  'g' ,  'a' ,  'b' ,

                 'x' ,  'y'  };

 tonos enteros []  =  {  1915 ,  1700 ,  1519 ,  1432 ,  1275 ,  1136 ,  1014 ,

                 956 ,   834 ,   765 ,   593 ,   468 ,   346 ,   224 ,

                 655  ,  715  };

int  VELOCIDAD  =  5 ;

// toca el tono correspondiente al nombre de la nota

para  ( int  yo  =  0 ;  yo  <  17 ;  yo ++ )  {

   if  ( nombres [ i ]  ==  nota )  {
    int  newduration  =  duración / SPEE ;
     playTone ( tonos [ i ],  nueva duracion );
   }
}
}

 configuración vacía ()  {
pinMode ( pin de altavoz ,  SALIDA );
}

 bucle vacío ()  {
para  ( int  i  =  0 ;  i  <  longitud ;  i ++ )  {
   if  ( notas [ i ]  ==  ' ' )  {
     retardo ( tiempos [ i ]  *  tempo );  // retraso entre notas
   }  más  {
     playNote ( notas [ i ],  tiempos [ i ]  *  tempo );
   }
   // retraso de tiempo entre notas
   retraso ( tempo );
}
}
