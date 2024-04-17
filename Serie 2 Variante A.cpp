#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Empleado
{
	private:
		string nombre;
		string apellido;
		int edad;
		int salario;
	public:
		Empleado(string n, string a, int e, int s){
			nombre = n;
			apellido = a;
			edad = e;
			salario = s;			
		}
		void getnombre(string nombre){
			nombre;
		}
		void getapellido(string apellido){
			apellido;
		}
		void getedad(int edad){
			edad;
		}
		void getsalario(int salario){
			salario;
		}
};
int main(){
	string n;
	string a;
	int e;
	int s;
	
	cout<<"ingresar nombre;"<<endl;
	cin>>n;
	cout<<"ingresar apellido;"<<endl;
	cin>>a;
	cout<<"ingresar edad;"<<endl;
	cin>>e;
	cout<<"ingresar salario;"<<endl;
	cin>>s;
	
	Empleado Empleado1(n,a,e,s);
	Empleado1.getnombre(n);
	Empleado1.getapellido(a);
	Empleado1.getedad(e);
	Empleado1.getsalario(s);
	
	ofstream file("c:empleados.txt");

	if(!file.is_open()){
		cout<<"El archivo no existe o no se a podido abrir correctamente"<<endl; 
		return 1;
	}
	
	file<<n<<endl;
	file<<a<<endl;
	file<<e<<endl;
	file<<s<<endl;
	
	file.close();
	
	return 0;
}