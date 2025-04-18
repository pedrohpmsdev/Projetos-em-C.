 #include <stdio.h>
  int main (){
  	char str[15];
  	
  	printf ("UTILIZANDO SCANF SIMPLES\n");
  	printf ("=-=-=-=-=-=-=-=-=-=-=-=-=\n");

  	printf ("Digite uma string: ");
  	scanf ("%s", str);
  	fflush (stdin);
  	printf ("%s foi a string digitada.\n\n", str);
  	
    printf ("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf ("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf ("=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
  
  	printf ("UTILIZANDO SCANF AVANCADO\n");
  	printf ("=-=-=-=-=-=-=-=-=-=-=-=-=\n");

  	printf ("Digite uma string: ");
  	scanf ("%14[^\n]s", str);
  	fflush (stdin);
  	printf ("%s foi a string digitada.", str);
  	return 0;
  	
  }
