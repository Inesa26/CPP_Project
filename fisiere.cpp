   
 void save(int *n)
 {FILE *fp;
    if( (fp=fopen("stud.step","w+b"))==NULL){
   	cout<<"Error:: W+B"<<endl;
   	system("pause");
   	return;
   }
   fwrite(S, sizeof(student), *n, fp);
   fclose(fp);
 }
 
  int load()
 {FILE *fp;
    if( (fp=fopen("stud.step","r+b"))==NULL){
   	cout<<"Error:: R+B"<<endl;
   	system("pause");
   	return 0;
   }
  int n= fread(S, sizeof(student), 100, fp);
   fclose(fp);
   return n;
 }
