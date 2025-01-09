#ifndef CLIMA_H
#define CLIMA_H

#include <QString>

class Clima
{
public:
    Clima(double temperatura, double sensTermica, double tempMin, double tempMax,
          double umidade, double velVento, double dirVento, const QString &cidade);

    float getTemperatura() const;
    void setTemperatura(float newTemperatura);
    float getSensTermica() const;
    void setSensTermica(float newSensTermica);
    float getTempMin() const;
    void setTempMin(float newTemperaturaMin);
    float getTempMax() const;
    void setTempMax(float newTempMax);
    int getUmidade() const;
    void setUmidade(int newUmidade);
    float getVelVento() const;
    void setVelVento(float newVelVento);
    int getDirVento() const;
    void setDirVento(int newDirVento);
    QString getCidade() const;
    void setCidade(const QString &newCidade);

private:
    float temperatura;
    float sensTermica;
    float tempMin;
    float tempMax;
    int umidade;
    float velVento;
    int dirVento;
    QString cidade;
};

#endif // CLIMA_H
