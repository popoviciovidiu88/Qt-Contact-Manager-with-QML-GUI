#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString number READ getNumber WRITE setNumber NOTIFY numberChanged)
    Q_PROPERTY(QString email READ getEmail WRITE setEmail NOTIFY emailChanged)

public:
    explicit Person(QObject *parent = 0);

    Person(const QString &name,const QString &number,const QString &email);

    QString getName() const;
    void setName(const QString &name);

    QString getNumber() const;
    void setNumber(const QString &number);

    QString getEmail() const;
    void setEmail(const QString &email);

public slots:

signals:
void nameChanged();
void numberChanged();
void emailChanged();

private:

QString m_name,m_number,m_email;

};

#endif // PERSON_H
