#include "dominios.hpp"

// Definição de constantes
#define Zero 0
#define Div 10
const static float DiariaPrecoMin = 1.00;
const static float DiariaPrecoMax = 10000.00;

// Definições dos métodos

void Agencia::validar(int AgenciaNum) throw (invalid_argument) {
	int countNum = AgenciaNum, checkNum = Zero;

	while (countNum >= Zero) {
		countNum /= Div;
		checkNum++;
	}

	if (checkNum != Lim)
		throw invalid_argument("Agencia invalida.");
}

void Agencia::setAgencia(int AngenciaNum) throw(invalid_argument) {
	validar(AgenciaNum);
	this->AgenciaNum = AgenciaNum;
}

void Banco::validar(int BancoNum) throw (invalid_argument) {
	int countNum = BancoNum, checkNum = Zero;

	while (countNum >= Zero)
	{
		countNum /= Div;
		checkNum++;
	}

	if (checkNum != Lim)
		throw invalid_argument("Banco invalido.");
}

void Banco::setBanco(int BancoNum) throw(invalid_argument) {
	validar(BancoNum);
	this->BancoNum = BancoNum;
}

void CapacidadeDeAcomodacao::validar(int CapacidadeDeAcomodacaoNum) {
	if (CapacidadeDeAcomodacaoNum < LimMin || CapacidadeDeAcomodacaoNum > LimMax)
		throw invalid_argument("Capacidade invalida.");
}

void CapacidadeDeAcomodacao::setCapacidadeDeAcomadacao(int CapacidadeDeAcomodacaoNum) {
	validar(CapacidadeDeAcomodacaoNum);
	this->CapacidadeDeAcomodacaoNum = CapacidadeDeAcomodacaoNum;
}

void Diaria::validar(float ValorDiaria) {
	if (ValorDiaria < DiariaPrecoMin || ValorDiaria > DiariaPrecoMax)
		throw invalid_argument("Valor da diaria invalido.");
}

void Diaria::setDiaria(float ValorDiaria) {
	validar(ValorDiaria);
	this->ValorDiaria = ValorDiaria;
}

void Data::validar(int Dia, char* Mes, int Ano) {
	if (Dia < DiaMin || Dia > DiaMax)
		throw invalid_argument("Dia invalido.");
	switch (*Mes)
	{
	default:
		break;
	}
}

void DataDeValidade::validar(int month, int year) {
	if (month < MONTH_MIN || month > MONTH_MAX)
		throw invalid_argument("Mês invalido.");

	if (year < YEAR_MIN || year > YEAR_MAX)
		throw invalid_argument("Ano invalido.");
}

void DataDeValidade::setDataDeValidade(int month, int year) {
	validar(month, year);
	this->month = month;
	this->year = year;
}