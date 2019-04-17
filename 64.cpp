//-----CPF VÁLIDO OU NÃO------//
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long cpf, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, res10, res11;

	cout << "Informe os 11 digitos do CPF: "; cin >> cpf;
	
	num1 = cpf / 10000000000;
	num2 = (cpf / 1000000000) % 10;
	num3 = (cpf / 100000000) % 10;
	num4 = (cpf / 10000000) % 10;
	num5 = (cpf / 1000000) % 10;
	num6 = (cpf / 100000) % 10;
	num7 = (cpf / 10000) % 10;
	num8 = (cpf / 1000) % 10;
	num9 = (cpf / 100) % 10;
	num10 = (cpf / 10) % 10;
	num11 = cpf % 10;
	
	//CALCULO PARA ENCONTAR O 10° DÍGITO//
	res10 = ((num1 * 1)+(num2* 2)+(num3 * 3)+(num4* 4)+(num5 * 5)+(num6* 6)+(num7 * 7)+(num8* 8)+(num9 * 9)) % 11;
	if (res10 == 10){
		res10 = 0;
	}
	
	//CALCULO PARA ENCONTAR O 11° DÍGITO//
	res11 = ((num1 * 0)+(num2* 1)+(num3 * 2)+(num4* 3)+(num5 * 4)+(num6* 5)+(num7 * 6)+(num8* 7)+(num9 * 8)+(num10 * 9)) % 11;
	if (res11 == 10){
		res11 = 0;
	}
	
	if (cpf > 99999999999){
	cout << "\nERRO! Mais de 11 digitos.\n";
	}else{
		if (res10 == num10 and res11 == num11 and num9 == 1){
		cout <<"\nCPF VALIDO.\nEstados: Distrito Federal, Goias, Mato Grossode Sul, Tocantins.\n";
		}else{
			if (res10 == num10 and res11 == num11 and num9 == 2){
			cout <<"\nCPF VALIDO.\nEstados: Para, Amazonas, Acre, Amapa, Rondonia, Roraima.\n";
			}else{
				if (res10 == num10 and res11 == num11 and num9 == 3){
				cout <<"\nCPF VALIDO.\nEstados: Ceara, Maranhao, Piaui.\n";
				}else{
					if (res10 == num10 and res11 == num11 and num9 == 4){
					cout <<"\nCPF VALIDO.\nEstados: Pernambuco, Rio Grande do Norte, Paraiba, Alagoas.\n";
					}else{
						if (res10 == num10 and res11 == num11 and num9 == 5){
						cout <<"\nCPF VALIDO.\nEstados: Bahia, Sergipe.\n";
						}else{
							if (res10 == num10 and res11 == num11 and num9 == 6){
							cout <<"\nCPF VALIDO.\nEstado de Minas Gerais.\n";
							}else{
								if (res10 == num10 and res11 == num11 and num9 == 7){
								cout <<"\nCPF VALIDO.\nEstados: Rio de Janeiro, Espirito Santo.\n";
								}else{
									if (res10 == num10 and res11 == num11 and num9 == 8){
									cout <<"\nCPF VALIDO.\nEstado de Sao Paulo.\n";
									}else{
										if (res10 == num10 and res11 == num11 and num9 == 9){
										cout <<"\nCPF VALIDO.\nEstados: Parana, Santa Catarina.\n";
										}else{
											if (res10 == num10 and res11 == num11 and num9 == 0){
											cout <<"\nCPF VALIDO.\nEstado do Rio Grande do Sul.\n";
											}else{
												if ( res10 != num10 or res11 != num11){
												cout << "\nCPF INVALIDO.\n";
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
