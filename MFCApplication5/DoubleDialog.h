#pragma once


// DoubleDialog 대화 상자

class DoubleDialog : public CDialogEx
{
	DECLARE_DYNAMIC(DoubleDialog)

public:
	DoubleDialog(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~DoubleDialog();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedSolo();
	afx_msg void OnBnClickedSet();
	afx_msg void OnPaint();

	CButton m_Double_Buger;
	CButton m_Set;
	CButton m_Solo;
};
