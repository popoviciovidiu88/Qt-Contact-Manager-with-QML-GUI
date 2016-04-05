#include "Person.h"

Person::Person(QObject *parent) : QObject(parent)
{
}
Person::Person(const QString &name,const QString &number,const QString &email): m_name(name), m_number(number), m_email(email)
{
}

QString Person::getName() const
{
    return m_name;
}

void Person::setName(const QString &name)
{
    if(m_name!=name)
    {
        m_name=name;
        emit nameChanged();
    }
}

QString Person::getNumber()const
{
    return m_number;
}

void Person::setNumber(const QString &number)
{
    if(m_number!=number)
    {
        m_number=number;
        emit numberChanged();
    }
}

QString Person::getEmail()const
{
    return m_email;
}

void Person::setEmail(const QString &email)
{
    if(m_email!=email)
    {
        m_email=email;
        emit emailChanged();
    }
}
