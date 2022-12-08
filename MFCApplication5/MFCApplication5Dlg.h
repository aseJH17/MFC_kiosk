
// MFCApplication5Dlg.h: 헤더 파일
//

#pragma once


// CMFCApplication5Dlg 대화 상자
class CMFCApplication5Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCApplication5Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION5_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//메인
	/*
	CButton m_Inshop;
	CButton m_Takeout;
	CButton m_Text;
	*/
	//메뉴
	CButton m_Buger;
	CButton m_Drink;
	CButton m_Side;
	CButton m_Dessert;
	//햄버거
	CButton m_Fork;
	CButton m_Shrimp;
	CButton m_Chicken;
	CButton m_Chesse;
	CButton m_Beaf;
	CButton m_Squid;
	//음료
	CButton m_Coke;
	CButton m_Cider;
	CButton m_Zerocoke;
	CButton m_Zerocider;
	CButton m_Milkshake;
	CButton m_Coffee;
	//사이드
	CButton m_French_fries;
	CButton m_Cheeseball;
	CButton m_Nugget;
	CButton m_Coleslaw;
	CButton m_Corn_salad;
	CButton m_Cheese_stick;
	//디저트
	/*
	CButton m_Softcon;
	CButton m_Chococon;
	CButton m_Waffle;
	CButton m_Churros;
	*/
	//결제화면
	/*
	CButton m_Card;
	CButton m_Cash;
	CButton m_Coupon;
	CButton m_No;
	CButton m_Point;
	CButton m_Text1;
	CButton m_Text2;
	*/

	//메인화면
	/*
	afx_msg void OnBnClickedTakeout();
	afx_msg void OnBnClickedInshop();
	*/
	//주문화면
	afx_msg void OnBnClickedBuger();
	afx_msg void OnBnClickedDrink();
	afx_msg void OnBnClickedSide();
	afx_msg void OnBnClickedDessert();
	
};
