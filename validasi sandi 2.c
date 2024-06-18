#include<stdio.h>
#include<stdlib.h>

int main(){
   char username[5]= "deruu", pass[12]= "11111";
   char usr[5], pas[12];
   int status = 0, salah = 0;

   while(status < 3){
      printf("Masukkan Username : ");
      gets(usr);
      printf("Masukkan Password : ");
      gets(pas);

      if(strcmp(username, pass)==0 && strcmp (pass, pass)== 0){
         printf("Akses diterima. Selamat Datang\n");
         break;
      }else{
         printf("Username dan Password tidak sesuai\n");
         salah++;
         if(salah == 3){
            printf("Akses ditolak\n");
         }
      }
      status++;
   }

   system("pause");
   return 0;
}
