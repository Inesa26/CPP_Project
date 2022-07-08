    #include <iomanip>
    #include <iostream>   //  cout si cin 
    #include <cstdlib>  // <stdlib.h>   rand srand exit
    #include <cmath>  
	#include <ctime>    // <time.h>  time 
    #include <conio.h> 
    #include <cstring>  // string.h
    #include <windows.h>
    using namespace std;
     #include "afisare.cpp"
    #include "Structura.cpp"
    #include "Interfata.cpp"
    #include "autentificare.cpp"
    #include "source.cpp"
    #include "fisiere.cpp"
    

      int main() 
 {   
    
    
    srand(time(0));
    
  /*  FILE*fp;
    fp=fopen("conf.ini","r+");
    fprintf(fp, "%s", &FNS);
    fprintf(fp, "%s", &FNL);
    
    fclose(fp);*/
    int n=load();
    int m=load();
    
 while (1){
 	
 	 switch(menu0())
 	 
 {case 49: 
  if (login(&m))
 
{do{
  switch(menu())
 {case 49: insertS(&n);system("pause");break;
  case 50:   showS(&n);system("pause");break;
  case 51: searchS(&n);system("pause");break;
  case 52:   editS(&n);system("pause");break;
  case 53:   editM(&n);system("pause");break;
  case 54:   save(&n);system("pause");break;
  case 55:   n=load();system("pause");break;
   }
  
}while(_getch()!=27);}

else system("pause");break;


  
  case 50: createAcc(&m);system("pause");break;
  case 51: save(&m);system("pause");break;
  case 52: m=load();system("pause");break;
  case 27:    save(&m);exit(0);	
 	
 }

}


return 0;
}
   
   
 
