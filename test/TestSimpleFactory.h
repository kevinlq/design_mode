#ifndef TESTSIMPLEFACTORY_H
#define TESTSIMPLEFACTORY_H

#include <QObject>

class OperatorBase;

class TestSimpleFactory : public QObject
{
    Q_OBJECT
public:
    explicit TestSimpleFactory(QObject *parent = nullptr);

signals:

private Q_SLOTS:

    void cleanup();     //每一个测试函数执行后调用的方法

    void testAddOperator();
    void testSubOperator();
    void testMulOperator();
    void testDivOperator();

private:
    OperatorBase *m_pOperate;
};

#endif // TESTSIMPLEFACTORY_H
