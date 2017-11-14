#include "filereader.h"
//This is a comment
FileReader::FileReader(QString filename)
{
    m_listTuple = new QList<dataTuple>();

    QFile file(filename);
    if ( file.open(QFile::ReadOnly | QFile::Text) ) {

        QTextStream in(&file);
        dataTuple tuple;

        while (!in.atEnd())
        {
            QString line = in.readLine();
            QList<QString> stringList;
            if(!line.isEmpty())
            {
                for (QString item : line.split(",")) {
                    stringList.append(QString(item));
                }

                      double time= stringList[0].toDouble();
                      tuple.setTime(time);

                      QString state=stringList[1];
                      tuple.setState(state);

                      int count=stringList[2].toInt();
                      tuple.setCount(count);

                      float incidence= stringList[3].toFloat();
                      tuple.setIncidence(incidence);

                stringList.clear();
                tuple.toString();
                m_listTuple->append(tuple);// m_listTuple stores each item in StringList
            }
            }

    }

    file.close();
}

QList<dataTuple> *FileReader::getData()
{
    return m_listTuple;// getData is called by mainInterface
}




