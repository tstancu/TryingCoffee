#include "ApplicationFlowModel.h"

ApplicationFlowModel::ApplicationFlowModel(QObject *parent)
    : QObject(parent),
    m_animationDuration(400),
    m_milkAmount(6),
    m_sugarAmount(0),
    m_state("initial")
{
    // Initialize the state machine and states
    m_initialState = new QState();
    m_selectionState = new QState();
    m_settingsState = new QState();
    m_emptyCupState = new QState();
    m_brewingState = new QState();
    m_finalState = new QFinalState();

    m_machine.addState(m_initialState);
    m_machine.addState(m_selectionState);
    m_machine.addState(m_settingsState);
    m_machine.addState(m_emptyCupState);
    m_machine.addState(m_brewingState);
    m_machine.addState(m_finalState);
    m_machine.setInitialState(m_initialState);

    // Define state transitions
    connect(m_initialState, &QState::entered, this, [this]() { setState("initial state"); });
    connect(m_selectionState, &QState::entered, this, [this]() { setState("selected state"); });
    connect(m_settingsState, &QState::entered, this, [this]() { setState("settings"); });
    connect(m_emptyCupState, &QState::entered, this, [this]() { setState("empty cup"); });
    connect(m_brewingState, &QState::entered, this, [this]() { setState("brewing"); });
    connect(m_finalState, &QFinalState::entered, this, [this]() { setState("finished"); });

    m_initialState->addTransition(this, &ApplicationFlowModel::coffeeSelected, m_selectionState);
    m_selectionState->addTransition(this, &ApplicationFlowModel::brewStarted, m_brewingState);

    m_machine.start();
}

QString ApplicationFlowModel::state() const
{
    return m_state;
}

void ApplicationFlowModel::setState(const QString &state)
{
    if (m_state != state) {
        m_state = state;
        emit stateChanged();
    }
}

int ApplicationFlowModel::animationDuration() const
{
    return m_animationDuration;
}

void ApplicationFlowModel::setAnimationDuration(int duration)
{
    if (m_animationDuration != duration) {
        m_animationDuration = duration;
        emit animationDurationChanged();
    }
}

int ApplicationFlowModel::milkAmount() const
{
    return m_milkAmount;
}

void ApplicationFlowModel::setMilkAmount(int amount)
{
    if (m_milkAmount != amount) {
        m_milkAmount = amount;
        emit milkAmountChanged();
    }
}

int ApplicationFlowModel::sugarAmount() const
{
    return m_sugarAmount;
}

void ApplicationFlowModel::setSugarAmount(int amount)
{
    if (m_sugarAmount != amount) {
        m_sugarAmount = amount;
        emit sugarAmountChanged();
    }
}

void ApplicationFlowModel::startBrew()
{
    emit brewStarted();
}
