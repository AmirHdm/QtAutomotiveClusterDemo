#include "QtAutomotiveClusterDemo.h"

QtAutomotiveClusterDemo::QtAutomotiveClusterDemo(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
}

void QtAutomotiveClusterDemo::buttonSlot(int signal)
{
    if(signal == 0)
    {
        qDebug() << "Called the C++ slot with" << signal;
    }
    else
    {
        qDebug() << "Called the C++ slot with" << signal;
    }
}

QtAutomotiveClusterDemo::~QtAutomotiveClusterDemo()
{

}
