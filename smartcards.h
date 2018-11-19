#ifndef SMARTCARDS_H
#define SMARTCARDS_H

#include <QMainWindow>

namespace Ui {
class SmartCards;
}

class SmartCards : public QMainWindow
{
    Q_OBJECT

public:
    explicit SmartCards(QWidget *parent = nullptr);
    ~SmartCards();

private:
    Ui::SmartCards *ui;
};

#endif // SMARTCARDS_H
