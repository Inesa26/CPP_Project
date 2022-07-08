void insertS(int *n){

   
   do
   
   {system ("cls");
    cout<<"Student ["<<(*n)+1<<"]"<<endl;
    cout<<"Enter student's name: ";
    cin>>S[*n].name;
    
    cout<<"Enter student's age: ";
    cin>>S[*n].age;
    
    cout<<"Enter student's group: ";
    cin>>S[*n].group;
    
    do{
    cout<<"Enter the mark nr["<<S[*n].NrNote+1<<"]: ";cin>>S[*n].N[S[*n].NrNote].Nota;	
    S[*n].media+=S[*n].N[S[*n].NrNote].Nota;
	
	S[*n].NrNote++;
    cout<<"***NOTE*** Esc -exit, any key to continue"<<endl;
	}while(_getch()!=27);
     S[*n].media= S[*n].media/S[*n].NrNote;
    
    (*n)++;
    cout<<"Esc -exit, any key to continue"<<endl;
   }while(_getch()!=27);
   }
   
   
   
   void show(int number, int v[]){
   	system ("cls");
  
   line1();
   
   cout<<(char)186<<setw(6)<<(char)186<<"Show Studets"<<setw(4)<<(char)186<<setw(11)<<(char)186<<setw(11)<<(char)186<<setw(11)<<(char)186<<endl;
   line2();
   cout<<(char)186<<setw(5)<<"ID"<<(char)186<<setw(15)<<"Name"<<(char)186<<setw(10)<<"Age"<<(char)186<<setw(10)<<"Group"<<(char)186<<setw(10)<<"Media"<<(char)186<<endl;
   line2();
 
   for(int i=0; i<number; i++){
   
   
   cout<<(char)186<<setw(5)<<v[i]+1
        <<(char)186<<setw(15)<<S[v[i]].name
        <<(char)186<<setw(10)<<S[v[i]].age
        <<(char)186<<setw(10)<<S[v[i]].group
        <<(char)186<<setw(10)<<S[v[i]].media
		<<(char)186<<endl;
   }
   line3();}
   
   
   void showS(int *n){
   
   int x=2;
   int in=0;
   int sf=x;
   bool EXIT=0;
   
   
   if (*n>0){
   while (1)
   { system ("cls");
  
   line1();
   
   cout<<(char)186<<setw(6)<<(char)186<<"Show Studets"<<setw(4)<<(char)186<<setw(11)<<(char)186<<setw(11)<<(char)186<<setw(11)<<(char)186<<endl;
   line2();
   cout<<(char)186<<setw(5)<<"ID"<<(char)186<<setw(15)<<"Name"<<(char)186<<setw(10)<<"Age"<<(char)186<<setw(10)<<"Group"<<(char)186<<setw(10)<<"Media"<<(char)186<<endl;
   line2();
 
   for(int i=in; i<sf; i++)
   
   {cout<<(char)186<<setw(5)<<i+1
        <<(char)186<<setw(15)<<S[i].name
        <<(char)186<<setw(10)<<S[i].age
        <<(char)186<<setw(10)<<S[i].group
        <<(char)186<<setw(10)<<S[i].media
		<<(char)186<<endl;
		if (i<sf-1) line2();
		
        
}line3();
 switch(_getch()){
 	case 43: in+=x; sf+=x;if (sf>*n){in=*n-2;sf=*n;} break;
 	case 45: in-=x; sf-=x;if (in<0){in=0;sf=x;}break;
 	case 27: EXIT=true;
 	
 	
 }if (EXIT)break;


    }
   }else {system ("cls");
   cout<<"There are no students for display"<<endl;
   }}
   
   
   void searchS( int *n)
   {
   do{
   	system ("cls");
   	
   	char name_st[256];
   	int v[100];
   	int m=0;
   	if(*n>0)
   	{cout<<"Enter student's name:";
   	 cin>>name_st;
   	
   	  for(int i=0; i<=*n; i++){
   	  	if(strcmp(S[i].name,name_st)==0){
   	  	v[m]=i;m++;}
		else continue;	
   	  	show (m,v);		
		 
}       if (m==0) {system ("cls");
	    cout<<"There is no student with that name"<<endl;}
		cout<<"Esc -exit, any key to search another student"<<endl; }
		else {system ("cls");
	    cout<<"There are no students for search"<<endl;break;}
		
}while(_getch()!=27);
	   }
   	
   
    void editS( int *n)
   {bool EXIT =0;

   	 if (*n>0){
   int ID_st;
  
   system ("cls");
  
   line1();
   
   cout<<(char)186<<setw(6)<<(char)186<<"Show Studets"<<setw(4)<<(char)186<<setw(11)<<(char)186<<setw(11)<<(char)186<<setw(11)<<(char)186<<endl;
   line2();
   cout<<(char)186<<setw(5)<<"ID"<<(char)186<<setw(15)<<"Name"<<(char)186<<setw(10)<<"Age"<<(char)186<<setw(10)<<"Group"<<(char)186<<setw(10)<<"Media"<<(char)186<<endl;
   line2();
 
   for(int i=0; i<*n; i++)
   
   {cout<<(char)186<<setw(5)<<i+1
        <<(char)186<<setw(15)<<S[i].name
        <<(char)186<<setw(10)<<S[i].age
        <<(char)186<<setw(10)<<S[i].group
        <<(char)186<<setw(10)<<S[i].media
		<<(char)186<<endl;
		if (i<*n-1) line2();
		
        
}line3();
   	cout<<"Choose from the list, ID  for the person whose data you want to change: "<<endl;
	cin>>ID_st;
	char name[256];
	int  age;
	char group[256];

 
while(1){


switch(menu1())
 {case 49:
  cout<<"Changing name from: "<<S[ID_st-1].name<<" to: ";
  cin>>name;
  strcpy(S[ID_st-1].name,name);
  cout<<"The changes were made successfully !!!"<<endl;
  system("pause");
 
  switch(menu2()){

  	case 49: continue;
  	case 50: editS(n);
    case 27: return;
	}
	
	case 50:
  cout<<"Changing Age from: "<<S[ID_st-1].age<<" to: ";
  cin>>age;
  S[ID_st-1].age=age;
  cout<<"The changes were made successfully !!!"<<endl;
  system("pause");
 
  switch(menu2()){

  	case 49: continue;
  	case 50: editS(n);
    case 27: return;
	}
	
	case 51:
  cout<<"Changing Group from: "<<S[ID_st-1].group<<" to: ";
  cin>>group;
  strcpy(S[ID_st-1].group,group);
  cout<<"The changes were made successfully !!!"<<endl;
  system("pause");
 
  switch(menu2()){

  	case 49: continue;
  	case 50: editS(n);
     case 27: return;
	}
	
	
  case 27: EXIT = true;
  
 	
 }if (EXIT)break;
 }}else {system ("cls");
	    cout<<"There is no data for editing"<<endl;}}
   
  
 void editM( int *n)
   {bool EXIT =0;

   	 if (*n>0){
   int ID_st;
   int ID_mark;
   int mark;
  
   system ("cls");
  
   line1();
   
   cout<<(char)186<<setw(6)<<(char)186<<"Show Studets"<<setw(4)<<(char)186<<setw(11)<<(char)186<<setw(11)<<(char)186<<setw(11)<<(char)186<<endl;
   line2();
   cout<<(char)186<<setw(5)<<"ID"<<(char)186<<setw(15)<<"Name"<<(char)186<<setw(10)<<"Age"<<(char)186<<setw(10)<<"Group"<<(char)186<<setw(10)<<"Media"<<(char)186<<endl;
   line2();
 
   for(int i=0; i<*n; i++)
   
   {cout<<(char)186<<setw(5)<<i+1
        <<(char)186<<setw(15)<<S[i].name
        <<(char)186<<setw(10)<<S[i].age
        <<(char)186<<setw(10)<<S[i].group
        <<(char)186<<setw(10)<<S[i].media
		<<(char)186<<endl;
		if (i<*n-1) line2();
		
        
}line3();
   	cout<<"Choose from the list, ID  for the person whose marks you want to edit: "<<endl;
	cin>>ID_st;

	
 cout<<"List of student marks for: "<<S[ID_st-1].name<<endl;	

 for(int i=0; i<S[ID_st-1].NrNote; i++){
 
 cout<<"Nota["<<i+1<<"]= "<<S[ID_st-1].N[i].Nota<<endl;
 
}cout<<"Enter the index of the mark you want to edit: "<<endl;
  cin>>ID_mark;
  cout<<"Changing mark from: "<<S[ID_st-1].N[ID_mark-1].Nota<<" to: ";
  cin>>mark;
  S[ID_st-1].N[ID_mark-1].Nota=mark;
  cout<<"The changes were made successfully !!!"<<endl;
}else {system ("cls");
	    cout<<"There are no marks for editing"<<endl;}}
  
