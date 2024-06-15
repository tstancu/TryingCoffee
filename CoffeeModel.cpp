#include "CoffeeModel.h"

CoffeeModel::CoffeeModel(QObject *parent)
    : QAbstractListModel(parent)
{
    // Add some initial data
    addCoffee({"Cappuccino", 7, 3.5, "qrc:/images/icons/coffees/cappucino.png"});
    addCoffee({"Espresso", 0, 4, "qrc:/images/icons/coffees/Espresso.png"});
    addCoffee({"Latte", 10, 3, "qrc:/images/icons/coffees/Latte.png"});
    addCoffee({"Macchiato", 1, 4, "qrc:/images/icons/coffees/Macchiato.png"});

    // Print paths for debugging
    for (const Coffee &coffee : std::as_const(m_coffees)) {
        qDebug() << "Coffee:" << coffee.name << "Image Path:" << coffee.imageSource;
    }
}

void CoffeeModel::addCoffee(const Coffee &coffee)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_coffees << coffee;
    endInsertRows();
}

int CoffeeModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_coffees.count();
}

QVariant CoffeeModel::data(const QModelIndex &index, int role) const
{
    if (index.row() < 0 || index.row() >= m_coffees.count())
        return QVariant();

    const Coffee &coffee = m_coffees[index.row()];
    if (role == NameRole)
        return coffee.name;
    else if (role == MilkRole)
        return coffee.milk;
    else if (role == CoffeeAmountRole)
        return coffee.coffeeAmount;
    else if (role == ImageSourceRole)
        return coffee.imageSource;

    return QVariant();
}

QHash<int, QByteArray> CoffeeModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[NameRole] = "name";
    roles[MilkRole] = "milk";
    roles[CoffeeAmountRole] = "coffeeAmount";
    roles[ImageSourceRole] = "imageSource";
    return roles;
}
