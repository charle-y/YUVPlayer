
// YUVPlayerDlg.h : ͷ�ļ�
//

#pragma once

#include "SettingDlg.h"

// CYUVPlayerDlg �Ի���
class CYUVPlayerDlg : public CDialogEx
{
// ����
public:
	CYUVPlayerDlg(CWnd* pParent = NULL);	// ��׼���캯��
    ~CYUVPlayerDlg();
// �Ի�������
	enum { IDD = IDD_YUVPLAYER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

private:
    CSettingDlg* m_pSettingDlg;
    int m_nWidth;
    int m_nHeight;
    int m_nFps;
    int m_nYuvFormat;
    BOOL m_fLoop;

public:
    void GetParameters(int width, int height, int fps, int fmt, BOOL loop)
    {
        m_nWidth = width;
        m_nHeight = height;
        m_nFps = fps;
        m_nYuvFormat = fmt;
        m_fLoop = loop;
    }

    void ShowSettingWindow();

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnHelpAbout();
    afx_msg void OnBnClickedButtonSet();
    afx_msg void OnBnClickedButtonOpen();
    afx_msg void OnBnClickedButtonSave();
    afx_msg void OnBnClickedButtonPlay();
};