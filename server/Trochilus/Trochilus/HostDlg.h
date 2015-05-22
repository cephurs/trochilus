#pragma once

#include "ReportCtrl.h"
#include "mfcresize/Resizer.h"
// CHostDlg �Ի���

class CHostDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CHostDlg)

public:
	CHostDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CHostDlg();

// �Ի�������
	enum { IDD = IDD_DIALOG_HOST };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	static void CALLBACK ClientInfoNotify(UINT nMsg, LPVOID lpContext, LPVOID lpParameter);
	void CALLBACK ClientInfoNotifyProc(UINT nMsg,CLIENT_INFO* pInfo);

	void InitView();
	void InitResize();
	static void StartPanel(CLIENT_INFO& info,LPVOID lpParameter);

	CImageList m_Imagelist;
	CReportCtrl m_ClientList;
	CResizer m_resizer;
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
};