/*
 * gfdgd xi、为什么您不喜欢熊出没和阿布呢
 * 依照 GPLV3 开源
 */
#include "command.h"
#include <QProcess>
Command::Command()
{

}

QString Command::GetCommand(QString command){
    QProcess process;
    process.start(command);
    process.waitForStarted();
    process.waitForFinished();
    return QString::fromLocal8Bit(process.readAllStandardOutput());
}
