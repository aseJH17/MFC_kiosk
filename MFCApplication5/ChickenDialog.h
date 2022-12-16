#pragma once


// ChickenDialog 대화 상자

class ChickenDialog : public CDialogEx
{
	DECLARE_DYNAMIC(ChickenDialog)

public:
	ChickenDialog(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~ChickenDialog();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedSolo();
	afx_msg void OnBnClickedSet();
	afx_msg void OnPaint();

	CButton m_Chicken_Buger;
	CButton m_Set;
	CButton m_Solo;
};
