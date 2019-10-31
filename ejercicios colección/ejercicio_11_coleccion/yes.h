#ifndef YES_H
#define YES_H

#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class yesData;

class yes
{
public:
    yes();
    yes(const yes &);
    yes &operator=(const yes &);
    ~yes();

private:
    QSharedDataPointer<yesData> data;
};

#endif // YES_H
