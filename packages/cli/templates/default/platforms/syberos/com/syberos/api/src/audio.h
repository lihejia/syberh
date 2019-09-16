#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QAudioRecorder>
#include <QMediaContent>

#include "framework/nativesdkhandlerbase.h"
class Audio : public NativeSdkHandlerBase
{
    Q_OBJECT
public:
    Q_INVOKABLE Audio();
    ~Audio();

    void request(QString callBackID,QString actionName,QVariantMap params);
    void submit(QString typeID,QString callBackID,QString actionName,QVariant dataRowList, QVariant attachementes);

    /**
     * @brief listRecorder 录音列表
     * @param params 参数
     * @return 成功则返回录音文件列表
     *         失败则返回错误码
     */
    void listRecorder(long callBackID, QVariantMap params);
    /**
     * @brief startRecorder 开始录音
     * @param params 参数
     * @return 成功则返回录音文件路径
     *         失败则返回错误码
     */
    void startRecorder(long callBackID, QVariantMap params);

    /**
     * @brief stopRecorder 结束录音
     * @param params 参数
     * @return 成功则无返回
     *         失败则返回错误码
     */
    void stopRecorder(QVariantMap params);

    /**
     * @brief startPlay 播放录音
     * @param params 参数
     * @return 成功则无返回
     *         失败则返回错误码
     */
    void startPlay(QVariantMap params);

    /**
     * @brief stopPlay 结束播放录音
     * @param params 参数
     * @return 成功则无返回
     *         失败则返回错误码
     */
    void stopPlay(QVariantMap params);

private :
    QMediaPlayer *player;
    QAudioRecorder *recoder;
    QMediaPlaylist *playlist;
    QMediaContent *mediaContent;

    static int typeId;
};

#endif // SYSTEMINFO_H