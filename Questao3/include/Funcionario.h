#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario{

	protected:

		std::string matricula;
		std::string nome;
		double salario;

	public:

		Funcionario();
		Funcionario(std::string m, std::string n, double s);

		std::string getMatricula();
		std::string getNome();
		double getSalario();
		void setMatricula(std::string m);
		void setNome(std::string n);
		void setSalario(double s);
};

#endif
