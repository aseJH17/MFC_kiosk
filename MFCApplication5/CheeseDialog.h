#pragma once


// CheeseDialog 대화 상자

class CheeseDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CheeseDialog)

public:
	CheeseDialog(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CheeseDialog();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedSolo();
	afx_msg void OnBnClickedSet();

	CButton m_Cheese_Buger;
	CButton m_Set;
	CButton m_Solo;
	afx_msg void OnPaint();
};
