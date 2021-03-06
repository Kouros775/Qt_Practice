#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>
#include <QQmlProperty>


class message : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString author READ author WRITE setAuthor NOTIFY authorChanged)

public:
    void setAuthor(const QString& a);
    QString author() const;

signals:
    void authorChanged();

private:
    QString m_author;
};

#endif // MESSAGE_H
