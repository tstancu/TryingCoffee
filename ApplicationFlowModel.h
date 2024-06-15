#ifndef APPLICATIONFLOWMODEL_H
#define APPLICATIONFLOWMODEL_H

#include <QObject>
#include <QStateMachine>
#include <QState>
#include <QFinalState>
#include <QPropertyAnimation>

class ApplicationFlowModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString state READ state WRITE setState NOTIFY stateChanged)
    Q_PROPERTY(int animationDuration READ animationDuration WRITE setAnimationDuration NOTIFY animationDurationChanged)
    Q_PROPERTY(int milkAmount READ milkAmount WRITE setMilkAmount NOTIFY milkAmountChanged)
    Q_PROPERTY(int sugarAmount READ sugarAmount WRITE setSugarAmount NOTIFY sugarAmountChanged)

public:
    explicit ApplicationFlowModel(QObject *parent = nullptr);

    QString state() const;
    void setState(const QString &state);

    int animationDuration() const;
    void setAnimationDuration(int duration);

    int milkAmount() const;
    void setMilkAmount(int amount);

    int sugarAmount() const;
    void setSugarAmount(int amount);

signals:
    void stateChanged();
    void animationDurationChanged();
    void milkAmountChanged();
    void sugarAmountChanged();
    void coffeeSelected();
    void brewStarted();

public slots:
    void startBrew();

private:
    QString m_state;
    int m_animationDuration;
    int m_milkAmount;
    int m_sugarAmount;
    QStateMachine m_machine;
    QState *m_initialState;
    QState *m_selectionState;
    QState *m_settingsState;
    QState *m_emptyCupState;
    QState *m_brewingState;
    QFinalState *m_finalState;
};

#endif // APPLICATIONFLOWMODEL_H// APPLICATIONFLOWMODEL_H
