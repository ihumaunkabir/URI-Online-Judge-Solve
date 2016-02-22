#include <stdio.h>
 
int main() {
 
    int tc,i;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&i);
        if(i!=2002){
            printf("Senha Invalidan\n");
        }
        else{printf("Acesso Permitido\n");
		break;}
    }
 
    return 0; //not acccepted 
}
