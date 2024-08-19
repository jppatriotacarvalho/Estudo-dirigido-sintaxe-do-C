#include <stdio.h>

int def1() {
    int i;

    for(i = 1; i <= 100; i++) {
        printf("%d,", i);
    }
    
    printf("\n");
    return 0; 
}

int def2(){
    int w;
    int soma = 0;

    for(w = 10;w <= 1000; w++){
        if(w % 2 != 0){
            soma = soma + w;
            
        }

    }

    printf("%d ",soma);
    printf("\n");

}

int def3() {
    int z;

    for(z = 1; z <= 200; z++) {
        if(z % 3 == 0 && z % 10 != 3) {
            printf("%d, ", z);
        }
        
    }
    printf("\n");
    return 0; 
}

int main() {
    def1();
    def2();
    def3();

    return 0; 
}