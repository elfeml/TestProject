#include "datatuple.h"
#include "datatuple.h"


dataTuple::dataTuple()
{

}

double dataTuple::time() const
{
    return m_time;
}

void dataTuple::setTime(double time)
{
    m_time = time;
}

QString dataTuple::state() const
{
    return m_state;
}

void dataTuple::setState(const QString &state)
{
    m_state = state;
}

int dataTuple::count() const
{
    return m_count;
}

void dataTuple::setCount(int count)
{
    m_count = count;
}

float dataTuple::incidence() const
{
    return m_incidence;
}

void dataTuple::setIncidence(float incidence)
{
    m_incidence = incidence;
}

void dataTuple::toString()
{
    qDebug() <<  m_time << m_state << m_count << m_incidence;

}


