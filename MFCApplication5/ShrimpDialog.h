#pragma once


// ShrimpDialog 대화 상자

class ShrimpDialog : public CDialogEx
{
	DECLARE_DYNAMIC(ShrimpDialog)

public:
	ShrimpDialog(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~ShrimpDialog();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedSolo();
	afx_msg void OnBnClickedSet();
	CButton m_Shirmp_Buger;
	CButton m_Set;
	CButton m_Solo;
	afx_msg void OnPaint();
};
