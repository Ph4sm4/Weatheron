#include "buttonhoverwatcher.h"

ButtonHoverWatcher::ButtonHoverWatcher(QObject * parent) :
    QObject(parent)
{}

bool ButtonHoverWatcher::eventFilter(QObject * watched, QEvent * event)
{
    QPushButton * button = qobject_cast<QPushButton*>(watched);
    if (!button) {
        return false;
    }

    if (event->type() == QEvent::Enter) {
        // The push button is hovered by mouse
        button->setIcon(QIcon(QCoreApplication::applicationDirPath() + "/weather-animations/x_grayicon.jpg"));
        button->setStyleSheet("background-color: white; border: none;");
        return true;
    }

    if (event->type() == QEvent::Leave){
        // The push button is not hovered by mouse
        button->setIcon(QIcon(QCoreApplication::applicationDirPath() + "/weather-animations/x_icon.jpg"));
        return true;
    }

    return false;
}
