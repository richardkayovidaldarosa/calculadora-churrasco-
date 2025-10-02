

int main(){
    char nome[50]; // arrar de caracteres para armazenar nome 
    int idade;     // variável para idade 

    //entradas:
    printf("Digite seu nome: ");
    scanf("&s", nome);

    printf("Digite sua idade: ");
    scanf("&d",&idade);

    printf("Olá %s, você tem %d anos!\n", nome,idade);

    if(idade <=15){
        printf("Ainda está novo.");
    }
    else{
    printf("Bora trabalhar né.\n");
    }
    
    return 0;
    }


