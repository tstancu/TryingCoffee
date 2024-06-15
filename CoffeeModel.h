#ifndef COFFEEMODEL_H
#define COFFEEMODEL_H

#include <QAbstractListModel>

struct Coffee {
    QString name;
    int milk;
    float coffeeAmount;
    QString imageSource;
};

class CoffeeModel : public QAbstractListModel
{
    Q_OBJECT

public:
    enum CoffeeRoles {
        NameRole = Qt::UserRole + 1,
        MilkRole,
        CoffeeAmountRole,
        ImageSourceRole
    };

    CoffeeModel(QObject *parent = nullptr);

    void addCoffee(const Coffee &coffee);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QHash<int, QByteArray> roleNames() const override;

private:
    QList<Coffee> m_coffees;
};

#endif // COFFEEMODEL_H


