#ifndef DATATUPLE_H
#define DATATUPLE_H

#include <QWidget>
#include <QDebug>

class dataTuple
{
public:
    dataTuple();
    static const int columnCount = 4;

    double time() const;
    void setTime(double time);

    QString state() const;
    void setState(const QString &state);

    int count() const;
    void setCount(int count);

    float incidence() const;
    void setIncidence(float incidence);

    void toString();

private:
    double m_time;
    QString m_state;
    int m_count;
    float m_incidence;


};

#endif // DATATUPLE_H
