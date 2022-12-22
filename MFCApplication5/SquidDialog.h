#pragma once


// SquidDialog 대화 상자

class SquidDialog : public CDialogEx
{
	DECLARE_DYNAMIC(SquidDialog)

public:
	SquidDialog(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~SquidDialog();

	// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedSolo();
	afx_msg void OnBnClickedSet();
	afx_msg void OnPaint();

	CButton m_Squid_Buger;
	CButton m_Set;
	CButton m_Solo;

};
