 pword[i]='\0';
 //char code=pword;
 i=0;
 //scanf("%s",&pword);
   if(strcmp(uname,"username")==0 && strdmp(pword,"password")==0)
   {
       printf("\n\t\t\t\t\t\t\t*********** LOGIN IS SUCCESSFUL******");
       printf("\n\t\t\t\t\t\t\t*********** WELCOME TO OUR BOOKING SYSTEM");
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\Press any key to continue ....");
       getch();//Holds the screen
       break;
   }
   else
   {
     printf("\n          LOGIN IS  UNSUCCESSFUL \n Try again !!!\n");
     a++;
     getch();//holds the screen
   }
}
   while(a<=2);
   if(a>2)
   {
     printf("\n Sorry you have entered the wrong username and password for three times !!!");
     getch();
     exit(0);
   }
   system("cls");
}
