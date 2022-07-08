int menu0() 
 { 
     system("cls");
     
     cout<<"\n\n\t AUTHENTICATION " <<endl;
     cout<<"\t  1. Sign in " <<endl;
     cout<<"\t  2. Create account " <<endl;
     cout<<"\t  3. Save data " <<endl;
     cout<<"\t  4. Load data " <<endl;
     
     
     cout<<"\tESC. Exit"<<endl ;
     return _getch() ;
 }
 
 
    int menu() 
 { 
     system("cls");
     
     cout<<"\n\n\t MENU STUDENT " <<endl;
     cout<<"\t  1. Enter Student " <<endl;
     cout<<"\t  2. Show Student " <<endl;
     cout<<"\t  3. Search Student " <<endl;
     cout<<"\t  4. Editing personal data " <<endl;
     cout<<"\t  5. Editing marks " <<endl;
     cout<<"\t  6. Save data " <<endl;
     cout<<"\t  7. Load data " <<endl;
     
	 cout<<"\tESC. Exit"<<endl ;
     
     return _getch() ;
 }
 
  int menu1() 
 { 
     system("cls");
     
     cout<<"\n\n\t MENU PERSONAL DATA EDITING " <<endl;
     cout<<"\t  1. Edit Student's Name " <<endl;
     cout<<"\t  2. Edit Student's Age  " <<endl;
     cout<<"\t  3. Edit Student's Group  " <<endl;
     cout<<"\tESC. Exit"<<endl ;
     return _getch() ;
 }
 
 int menu2() 
 { 
    system ("cls");
     cout<<"\t  1. to modify the data of the present student " <<endl;
     cout<<"\t  2. to modify another student's data  " <<endl;
     cout<<"\tESC. Exit"<<endl ;
     return _getch() ;
 }
