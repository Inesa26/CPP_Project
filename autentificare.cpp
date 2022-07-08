 
   int login(int *m){
 char email[250];
 char pass[250];
 int attempt =1;
   
   do
   
   {system ("cls");
    if(*m>0)
   
{while(1){
  int k=false;
  
  char c;
  int i = 0;
    cout<<"Enter email adress: ";
    cin>>email;
    
	cout<<"Enter password: ";
	
    char pass1[250];
    
   while ((c = _getch()) != '\r')
    {if( c == 8 ) 
 {
    if( i > 0 ){ cout<<"\b \b"; i--;    }    
 }
  else{
        pass1[i] = c;
        i++;
        cout<<"*";   
   }    
    }
   
	strcpy(pass,pass1);
    cout<< endl;
    
     for(int i=0; i<=*m; i++){
     	
    if(strcmp(U[i].email,email)==0){k=true;
   	  	if((strcmp(U[i].email,email)==0)&&(strcmp(U[i].password,pass)==0)){
   	  	cout<<"WELCOME!"<<endl;return 1;}
		else {
		
		 if (attempt<3){
      system ("cls");cout<<"The password is incorrect. Please retry.\n You have "<<3-attempt<<" more attempts! "<<endl;
      attempt++;}
      else exit(0);	 	
   	  	 
}

 }}
   if(k==false) {system ("cls");cout<<"There's no account associated with this email address. Please retry"<<endl;
}}
  }else cout<<"There is no account created!"<<endl;return 0;
  }while(_getch()!=27);
}
   
 
   
   
    void createAcc(int *m){
    char verif[250];
    char verifemail[250];
   bool k=false;
   bool j=false;
   do
   
   {system ("cls");
    
   
	while(1){
    cout<<"Enter email adress: ";
    cin>>verifemail;
    for(int i=0; i<=*m; i++){
    
	
    	
    if(strcmp(verifemail,U[i].email)==0){
	
	j=true;break;}
	else continue;
	
	}
    if (j==false) {strcpy(U[*m].email,verifemail);break;}
    else {cout<<"An account with this email already exists. Please enter another email address: "<<endl;j=false;}
}
    
    
    while(1){
    
	cout<<"Enter password: ";
	char pass[250];
    char c;
    int i = 0;
   while ((c = _getch()) != '\r')
    {if( c == 8 ) 
 {
    if( i > 0 ){ cout<<"\b \b"; i--;    }    
 }
  else{
        pass[i] = c;
        i++;
        cout<<"*";   
   }    
    }
   
   strcpy(U[*m].password,pass);
    cout<< endl;
    
    cout<<"Confirm password: ";
     i = 0;
   while ((c = _getch()) != '\r')
    {if( c == 8 ) 
 {
    if( i > 0 ){ cout<<"\b \b"; i--;    }    
 }
  else{
        pass[i] = c;
        i++;
        cout<<"*";  
   }    
    }
    
   strcpy(verif,pass);
    cout<< endl;
    
    if( strcmp(U[*m].password,verif) == 0 ){
    	(*m)++;
	cout<<"The account has been successfully created!"<<endl;k=true;return;}
    else cout<<"This password does not match that entered in the password field, please try again."<<endl;
	}
		
   }while(k!=true);
}
