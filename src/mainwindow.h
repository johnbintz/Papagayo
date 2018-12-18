#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "lipsyncdoc.h"

class QListWidgetItem;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

public:
	void OpenFile(QString filePath);
	bool IsOKToCloseDocument();
	void RestoreSettings();
	void SaveSettings();

protected:
	void closeEvent(QCloseEvent *event);
	void dragEnterEvent(QDragEnterEvent *event);
	void dropEvent(QDropEvent *event);
    void keyPressEvent(QKeyEvent *event);

public slots:
	void updateActions();

private slots:
	void onHelpAboutPapagayo();
    void onFileExit();
	void onFileOpen();
	void onFileSave();
	void onFileSaveAs();
	void onPlay();
	void onStop();
    void onVolumeChange(int value);
    void onRepeat();
	void onFpsChange(QString text);
	void onNewVoice();
	void onDeleteVoice();
	void onVoiceSelected(QListWidgetItem *item);
	void onVoiceItemChanged(QListWidgetItem *item);
	void onVoiceNameChanged();
	void onVoiceTextChanged();
	void onBreakdown();
	void onExport();

    void onNone();
    void onPng();
    void onGif();

private:
	void RebuildVoiceList();

	LipsyncDoc			*fDoc;
	bool				fEnableAutoBreakdown;
	bool				fRebuildingList;
	int					fDefaultFps;

	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
