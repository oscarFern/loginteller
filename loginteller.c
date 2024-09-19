 loginteller.c
  Based on monousuar.c at httpwww.binefa.netgnugccprocessosInformacio_d_usuari.html
  www.binefa.cat
  20120507

#include stdio.h
#include unistd.h     getlogin()
#include stdlib.h     exit()

int main(){
    char szLogin;
   
    if((szLogin = getlogin())==NULL){
        perror(getlogin);
        exit(EXIT_FAILURE);
    }  
    printf(Your login name at the system is  %sn,szLogin);

    return (0);
}