﻿
// MFCApplication5Dlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication5.h"
#include "MFCApplication5Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication5Dlg 대화 상자



CMFCApplication5Dlg::CMFCApplication5Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION5_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication5Dlg::DoDataExchange(CDataExchange* pDX)
{
	
	CDialogEx::DoDataExchange(pDX);
	
	DDX_Control(pDX, IDC_FORK, m_Fork);
	DDX_Control(pDX, IDC_SHRIMP, m_Shrimp);
	DDX_Control(pDX, IDC_CHICKEN, m_Chicken);
	DDX_Control(pDX, IDC_CHESSE, m_Chesse);
	DDX_Control(pDX, IDC_BEAF, m_Beaf);
	DDX_Control(pDX, IDC_SQUID, m_Squid);

	//DRINK
	DDX_Control(pDX, IDC_COKE, m_Coke);
	DDX_Control(pDX, IDC_CIDER, m_Cider);
	DDX_Control(pDX, IDC_ZEROCOKE, m_Zerocoke);
	DDX_Control(pDX, IDC_ZEROCIDER, m_Zerocider);
	DDX_Control(pDX, IDC_MILKSHAKE, m_Milkshake);
	DDX_Control(pDX, IDC_COFFEE, m_Coffee);

	//SIDE
	/*
	DDX_Control(pDX, IDC_FRENCH_FRIES, m_french_fries);
	DDX_Control(pDX, IDC_CHEESEBALL, m_cheeseball);
	DDX_Control(pDX, IDC_NUGGET, m_nugget);
	DDX_Control(pDX, IDC_COLESLAW, m_coleslaw);
	DDX_Control(pDX, IDC_CORN_SALAD, m_corn_salad);
	DDX_Control(pDX, IDC_CHEESE_STICK, m_cheese_stick);
	*/

	//DESSERT
	/*
	DDX_Control(pDX, IDC_SOFTCON, m_Softcon);
	DDX_Control(pDX, IDC_CHOCOCON, m_Chococon);
	DDX_Control(pDX, IDC_WAFFLE, m_Waffle);
	DDX_Control(pDX, IDC_CHURROS, m_churros);
	*/
}

BEGIN_MESSAGE_MAP(CMFCApplication5Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	
	ON_BN_CLICKED(IDC_BUGER, &CMFCApplication5Dlg::OnBnClickedBuger)
	ON_BN_CLICKED(IDC_DRINK, &CMFCApplication5Dlg::OnBnClickedDrink)
	ON_BN_CLICKED(IDC_SIDE, &CMFCApplication5Dlg::OnBnClickedSide)
	ON_BN_CLICKED(IDC_DESSERT, &CMFCApplication5Dlg::OnBnClickedDessert)
END_MESSAGE_MAP()


// CMFCApplication5Dlg 메시지 처리기

BOOL CMFCApplication5Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CMFCApplication5Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CMFCApplication5Dlg::OnPaint()
{
	CBitmap fork;
	fork.LoadBitmapW(IDB_FORK);
	m_Fork.SetBitmap(fork);

	CBitmap shrimp;
	shrimp.LoadBitmapW(IDB_SHRIMP);
	m_Shrimp.SetBitmap(shrimp);

	CBitmap chicken;
	chicken.LoadBitmapW(IDB_CHICKEN);
	m_Chicken.SetBitmap(chicken);

	CBitmap chesse;
	chesse.LoadBitmapW(IDB_CHESSE);
	m_Chesse.SetBitmap(chesse);

	CBitmap beaf;
	beaf.LoadBitmapW(IDB_BEAF);
	m_Beaf.SetBitmap(beaf);

	CBitmap squid;
	squid.LoadBitmapW(IDB_SQUID);
	m_Squid.SetBitmap(squid);

	//DRINK
	CBitmap coke;
	coke.LoadBitmapW(IDB_COKE);
	m_Coke.SetBitmap(coke);

	CBitmap cider;
	cider.LoadBitmapW(IDB_CIDER);
	m_Cider.SetBitmap(cider);

	CBitmap zerocoke;
	zerocoke.LoadBitmapW(IDB_ZEROCOKE);
	m_Zerocoke.SetBitmap(zerocoke);

	CBitmap zerocider;
	zerocider.LoadBitmapW(IDB_ZEROCIDER);
	m_Zerocider.SetBitmap(zerocider);

	CBitmap milkshake;
	milkshake.LoadBitmapW(IDB_MILKSHAKE);
	m_Milkshake.SetBitmap(milkshake);

	CBitmap coffee;
	coffee.LoadBitmapW(IDB_COFFEE);
	m_Coffee.SetBitmap(coffee);

	//SIDE
	/*
	CBitmap french_fries;
	softcon.LoadBitmapW(IDB_FRENCH_FRIES);
	m_Softcon.SetBitmap(french_fries);

	CBitmap cheeseball;
	chococon.LoadBitmapW(IDB_CHEESEBALL);
	m_Chococon.SetBitmap(cheeseball);

	CBitmap nugget;
	waffle.LoadBitmapW(IDB_NUGGET);
	m_Waffle.SetBitmap(nugget);

	CBitmap coleslaw;
	choo.LoadBitmapW(IDB_COLESLAW);
	m_churros.SetBitmap(coleslaw);

	CBitmap corn_salad;
	waffle.LoadBitmapW(IDB_CORN_SALAD);
	m_Waffle.SetBitmap(corn_salad);

	CBitmap cheese_stick;
	choo.LoadBitmapW(IDB_CHEESE_STICK);
	m_churros.SetBitmap(cheese_stick);
	*/

	//DESSERT
	/*
	CBitmap softcon;
	softcon.LoadBitmapW(IDB_SOFTCON);
	m_Softcon.SetBitmap(softcon);

	CBitmap chococon;
	chococon.LoadBitmapW(IDB_CHOCOCON);
	m_Chococon.SetBitmap(chococon);

	CBitmap waffle;
	waffle.LoadBitmapW(IDB_WAFFLE);
	m_Waffle.SetBitmap(waffle);

	CBitmap churros;
	choo.LoadBitmapW(IDB_CHURROS);
	m_churros.SetBitmap(churros);
	*/

	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CMFCApplication5Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




void CMFCApplication5Dlg::OnBnClickedBuger()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_Fork.ShowWindow(SW_SHOW);
	m_Shrimp.ShowWindow(SW_SHOW);
	m_Chicken.ShowWindow(SW_SHOW);
	m_Chesse.ShowWindow(SW_SHOW);
	m_Beaf.ShowWindow(SW_SHOW);
	m_Squid.ShowWindow(SW_SHOW);

	m_Coke.ShowWindow(SW_HIDE);
	m_Cider.ShowWindow(SW_HIDE);
	m_Zerocoke.ShowWindow(SW_HIDE);
	m_Zerocider.ShowWindow(SW_HIDE);
	m_Milkshake.ShowWindow(SW_HIDE);
	m_Coffee.ShowWindow(SW_HIDE);

	/*
    m_French_fries.ShowWindow(SW_HIDE);
	m_Cheeseball.ShowWindow(SW_HIDE);
	m_Nugget.ShowWindow(SW_HIDE);
	m_Coleslaw.ShowWindow(SW_HIDE);
	m_Corn_salad.ShowWindow(SW_HIDE);
	m_Chees_stick.ShowWindow(SW_HIDE);

	m_Softcon.ShowWindow(SW_HIDE);
	m_Chococon.ShowWindow(SW_HIDE);
	m_Waffle.ShowWindow(SW_HIDE);
	m_Churros.ShowWindow(SW_HIDE);
	*/
}


void CMFCApplication5Dlg::OnBnClickedDrink()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_Fork.ShowWindow(SW_HIDE);
	m_Shrimp.ShowWindow(SW_HIDE);
	m_Chicken.ShowWindow(SW_HIDE);
	m_Chesse.ShowWindow(SW_HIDE);
	m_Beaf.ShowWindow(SW_HIDE);
	m_Squid.ShowWindow(SW_HIDE);

	m_Coke.ShowWindow(SW_SHOW);
	m_Cider.ShowWindow(SW_SHOW);
	m_Zerocoke.ShowWindow(SW_SHOW);
	m_Zerocider.ShowWindow(SW_SHOW);
	m_Milkshake.ShowWindow(SW_SHOW);
	m_Coffee.ShowWindow(SW_SHOW);
	
	/*
	m_French_fries.ShowWindow(SW_HIDE);
	m_Cheeseball.ShowWindow(SW_HIDE);
	m_Nugget.ShowWindow(SW_HIDE);
	m_Coleslaw.ShowWindow(SW_HIDE);
	m_Corn_salad.ShowWindow(SW_HIDE);
	m_Chees_stick.ShowWindow(SW_HIDE);
	
	m_Softcon.ShowWindow(SW_HIDE);
	m_Chococon.ShowWindow(SW_HIDE);
	m_Waffle.ShowWindow(SW_HIDE);
	m_Churros.ShowWindow(SW_HIDE);
	*/
	
}


void CMFCApplication5Dlg::OnBnClickedSide()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_Fork.ShowWindow(SW_HIDE);
	m_Shrimp.ShowWindow(SW_HIDE);
	m_Chicken.ShowWindow(SW_HIDE);
	m_Chesse.ShowWindow(SW_HIDE);
	m_Beaf.ShowWindow(SW_HIDE);
	m_Squid.ShowWindow(SW_HIDE);

	m_Coke.ShowWindow(SW_HIDE);
	m_Cider.ShowWindow(SW_HIDE);
	m_Zerocoke.ShowWindow(SW_HIDE);
	m_Zerocider.ShowWindow(SW_HIDE);
	m_Milkshake.ShowWindow(SW_HIDE);
	m_Coffee.ShowWindow(SW_HIDE);

	/*
	m_French_fries.ShowWindow(SW_SHOW);
	m_Cheeseball.ShowWindow(SW_SHOW);
	m_Nugget.ShowWindow(SW_SHOW);
	m_Coleslaw.ShowWindow(SW_SHOW);
	m_Corn_salad.ShowWindow(SW_SHOW);
	m_Chees_stick.ShowWindow(SW_SHOW);

	m_Softcon.ShowWindow(SW_HIDE);
	m_Chococon.ShowWindow(SW_HIDE);
	m_Waffle.ShowWindow(SW_HIDE);
	m_Churros.ShowWindow(SW_HIDE);	
	*/
}


void CMFCApplication5Dlg::OnBnClickedDessert()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_Fork.ShowWindow(SW_HIDE);
	m_Shrimp.ShowWindow(SW_HIDE);
	m_Chicken.ShowWindow(SW_HIDE);
	m_Chesse.ShowWindow(SW_HIDE);
	m_Beaf.ShowWindow(SW_HIDE);
	m_Squid.ShowWindow(SW_HIDE);

	m_Coke.ShowWindow(SW_HIDE);
	m_Cider.ShowWindow(SW_HIDE);
	m_Zerocoke.ShowWindow(SW_HIDE);
	m_Zerocider.ShowWindow(SW_HIDE);
	m_Milkshake.ShowWindow(SW_HIDE);
	m_Coffee.ShowWindow(SW_HIDE);

	/*
	m_French_fries.ShowWindow(SW_HIDE);
	m_Cheeseball.ShowWindow(SW_HIDE);
	m_Nugget.ShowWindow(SW_HIDE);
	m_Coleslaw.ShowWindow(SW_HIDE);
	m_Corn_salad.ShowWindow(SW_HIDE);
	m_Chees_stick.ShowWindow(SW_HIDE); 
	
	m_Softcon.ShowWindow(SW_SHOW);
	m_Chococon.ShowWindow(SW_SHOW);
	m_Waffle.ShowWindow(SW_SHOW);
	m_Churros.ShowWindow(SW_SHOW);
	*/
}
