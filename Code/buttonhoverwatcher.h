#ifndef BUTTONHOVERWATCHER_H
#define BUTTONHOVERWATCHER_H

#include <QObject>
#include <QPushButton>
#include <QEvent>
#include <QCoreApplication>

class ButtonHoverWatcher : public QObject
{
    Q_OBJECT
public:
    explicit ButtonHoverWatcher(QObject * parent = Q_NULLPTR);
    virtual bool eventFilter(QObject * watched, QEvent * event) Q_DECL_OVERRIDE;
};

#endif // BUTTONHOVERWATCHER_H
