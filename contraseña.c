#include <stdio.h>

int main(){
	
	float contraseña;
	printf("Ingrese la contraseña: ");
	scanf("%f", &contraseña);

	if (contraseña == 123){
		printf("Su contraseña es correcta\n ");
	}
	else {
		printf("Su contraseña es incorrecta\n ");
	
	}

return 0;

}
