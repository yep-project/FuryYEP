#ifndef CRYPTSY_H
#define CRYPTSY_H

#include <QWidget>

namespace Ui {
	class Cryptsy;
}
class WalletModel;

class Cryptsy : public QWidget
{
    Q_OBJECT

public:
    explicit Cryptsy(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Cryptsy();    


private:
	Ui::Cryptsy *ui;
    WalletModel *model;
};

#endif // CRYPTSY_H
