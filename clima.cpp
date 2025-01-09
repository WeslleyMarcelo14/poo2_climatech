#include "clima.h"
#include "climadao.h"
#include <QString>

Clima::Clima(double temperatura, double sensTermica, double tempMin, double tempMax,
             double umidade, double velVento, double dirVento, const QString &cidade)
    : temperatura(temperatura), sensTermica(sensTermica), tempMin(tempMin), tempMax(tempMax),
    umidade(umidade), velVento(velVento), dirVento(dirVento), cidade(cidade)
{
}

float Clima::getTemperatura() const
{
    return temperatura;
}

void Clima::setTemperatura(float newTemperatura)
{
    temperatura = newTemperatura;
}

float Clima::getSensTermica() const
{
    return sensTermica;
}

void Clima::setSensTermica(float newSensTermica)
{
    sensTermica = newSensTermica;
}

float Clima::getTempMin() const
{
    return tempMin;
}

void Clima::setTempMin(float newTempMin)
{
    tempMin = newTempMin;
}

float Clima::getTempMax() const
{
    return tempMax;
}

void Clima::setTempMax(float newTempMax)
{
    tempMax = newTempMax;
}

int Clima::getUmidade() const
{
    return umidade;
}

void Clima::setUmidade(int newUmidade)
{
    umidade = newUmidade;
}

float Clima::getVelVento() const
{
    return velVento;
}

void Clima::setVelVento(float newVelVento)
{
    velVento = newVelVento;
}

int Clima::getDirVento() const
{
    return dirVento;
}

void Clima::setDirVento(int newDirVento)
{
    dirVento = newDirVento;
}

QString Clima::getCidade() const
{
    return cidade;
}

void Clima::setCidade(const QString &newCidade)
{
    cidade = newCidade;
}
