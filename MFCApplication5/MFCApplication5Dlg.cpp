
// MFCApplication5Dlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication5.h"
#include "MFCApplication5Dlg.h"
#include "afxdialogex.h"
#include "NewDialog.h"
#include "ShrimpDialog.h"
#include "ChickenDialog.h"
#include "CheeseDialog.h"
#include "DoubleDialog.h"
#include "SquidDialog.h"

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
	//HOME
	GetDlgItem(IDC_FORK)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_SHRIMP)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_CHICKEN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_CHESSE)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BEAF)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_SQUID)->ShowWindow(SW_HIDE);

	GetDlgItem(IDC_COKE)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_CIDER)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_ZEROCOKE)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_ZEROCIDER)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_MILKSHAKE)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_COFFEE)->ShowWindow(SW_HIDE);

	GetDlgItem(IDC_FRENCH_FRIES)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_CHEESEBALL)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_NUGGET)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_COLESLAW)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_CORN_SALAD)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_CHEESE_STICK)->ShowWindow(SW_HIDE);

	GetDlgItem(IDC_SOFTCON)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_CHOCOCON)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_WAFFLE)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_CHURROS)->ShowWindow(SW_HIDE);

	GetDlgItem(IDC_NO)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_CASH)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_POINT)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_COUPON)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_CARD)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_TEXT1)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_TEXT2)->ShowWindow(SW_HIDE);

	DDX_Control(pDX, IDC_INSHOP, m_Inshop);
	DDX_Control(pDX, IDC_TAKEOUT, m_Takeout);
	/*
	DDX_Control(pDX, IDC_TEXT, m_Text);
	*/
	
	//BURGER
	DDX_Control(pDX, IDC_BUGER, m_Buger);
	DDX_Control(pDX, IDC_FORK, m_Fork);
	DDX_Control(pDX, IDC_SHRIMP, m_Shrimp);
	DDX_Control(pDX, IDC_CHICKEN, m_Chicken);
	DDX_Control(pDX, IDC_CHESSE, m_Chesse);
	DDX_Control(pDX, IDC_BEAF, m_Beaf);
	DDX_Control(pDX, IDC_SQUID, m_Squid);

	//DRINK
	DDX_Control(pDX, IDC_DRINK, m_Drink);
	DDX_Control(pDX, IDC_COKE, m_Coke);
	DDX_Control(pDX, IDC_CIDER, m_Cider);
	DDX_Control(pDX, IDC_ZEROCOKE, m_Zerocoke);
	DDX_Control(pDX, IDC_ZEROCIDER, m_Zerocider);
	DDX_Control(pDX, IDC_MILKSHAKE, m_Milkshake);
	DDX_Control(pDX, IDC_COFFEE, m_Coffee);

	//SIDE
	DDX_Control(pDX, IDC_SIDE, m_Side);
	DDX_Control(pDX, IDC_FRENCH_FRIES, m_French_fries);
	DDX_Control(pDX, IDC_CHEESEBALL, m_Cheeseball);
	DDX_Control(pDX, IDC_NUGGET, m_Nugget);
	DDX_Control(pDX, IDC_COLESLAW, m_Coleslaw);
	DDX_Control(pDX, IDC_CORN_SALAD, m_Corn_salad);
	DDX_Control(pDX, IDC_CHEESE_STICK, m_Cheese_stick);

	//DESSERT
	DDX_Control(pDX, IDC_DESSERT, m_Dessert);
	DDX_Control(pDX, IDC_SOFTCON, m_Softcon);
	DDX_Control(pDX, IDC_CHOCOCON, m_Chococon);
	DDX_Control(pDX, IDC_WAFFLE, m_Waffle);
	DDX_Control(pDX, IDC_CHURROS, m_Churros);

	//PAY
	DDX_Control(pDX, IDC_PAY, m_Pay);
	DDX_Control(pDX, IDC_BACK, m_Back);
	
	DDX_Control(pDX, IDC_POINT, m_Point);
	DDX_Control(pDX, IDC_NO, m_No);
	DDX_Control(pDX, IDC_CARD, m_Card);
	DDX_Control(pDX, IDC_COUPON, m_Coupon);
	DDX_Control(pDX, IDC_CASH, m_Cash);
	DDX_Control(pDX, IDC_TEXT1, m_Text1);
	DDX_Control(pDX, IDC_TEXT2, m_Text2);
	
	DDX_Control(pDX, IDC_LIST, m_listOrder);

}

BEGIN_MESSAGE_MAP(CMFCApplication5Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//메인화면
	
	ON_BN_CLICKED(IDC_TAKEOUT, &CMFCApplication5Dlg::OnBnClickedTakeout)
	ON_BN_CLICKED(IDC_INSHOP, &CMFCApplication5Dlg::OnBnClickedInshop)
	
	//주문화면
	ON_BN_CLICKED(IDC_BUGER, &CMFCApplication5Dlg::OnBnClickedBuger)
	ON_BN_CLICKED(IDC_DRINK, &CMFCApplication5Dlg::OnBnClickedDrink)
	ON_BN_CLICKED(IDC_SIDE, &CMFCApplication5Dlg::OnBnClickedSide)
	ON_BN_CLICKED(IDC_DESSERT, &CMFCApplication5Dlg::OnBnClickedDessert)
	ON_BN_CLICKED(IDC_PAY, &CMFCApplication5Dlg::OnBnClickedPay)
	ON_BN_CLICKED(IDC_BACK, &CMFCApplication5Dlg::OnBnClickedBack)

	ON_BN_CLICKED(IDC_FORK, &CMFCApplication5Dlg::OnBnClickedFork)
	ON_BN_CLICKED(IDC_SHRIMP, &CMFCApplication5Dlg::OnBnClickedShrimp)
	ON_BN_CLICKED(IDC_CHICKEN, &CMFCApplication5Dlg::OnBnClickedChicken)
	ON_BN_CLICKED(IDC_CHESSE, &CMFCApplication5Dlg::OnBnClickedChesse)
	ON_BN_CLICKED(IDC_BEAF, &CMFCApplication5Dlg::OnBnClickedBeaf)
	ON_BN_CLICKED(IDC_SQUID, &CMFCApplication5Dlg::OnBnClickedSquid)
	ON_BN_CLICKED(IDC_COKE, &CMFCApplication5Dlg::OnBnClickedCoke)
	ON_BN_CLICKED(IDC_CIDER, &CMFCApplication5Dlg::OnBnClickedCider)
	ON_BN_CLICKED(IDC_ZEROCOKE, &CMFCApplication5Dlg::OnBnClickedZerocoke)
	ON_BN_CLICKED(IDC_ZEROCIDER, &CMFCApplication5Dlg::OnBnClickedZerocider)
	ON_BN_CLICKED(IDC_MILKSHAKE, &CMFCApplication5Dlg::OnBnClickedMilkshake)
	ON_BN_CLICKED(IDC_COFFEE, &CMFCApplication5Dlg::OnBnClickedCoffee)
	ON_BN_CLICKED(IDC_FRENCH_FRIES, &CMFCApplication5Dlg::OnBnClickedFrenchFries)
	ON_BN_CLICKED(IDC_CHEESEBALL, &CMFCApplication5Dlg::OnBnClickedCheeseball)
	ON_BN_CLICKED(IDC_NUGGET, &CMFCApplication5Dlg::OnBnClickedNugget)
	ON_BN_CLICKED(IDC_COLESLAW, &CMFCApplication5Dlg::OnBnClickedColeslaw)
	ON_BN_CLICKED(IDC_CORN_SALAD, &CMFCApplication5Dlg::OnBnClickedCornSalad)
	ON_BN_CLICKED(IDC_CHEESE_STICK, &CMFCApplication5Dlg::OnBnClickedCheeseStick)
	ON_BN_CLICKED(IDC_SOFTCON, &CMFCApplication5Dlg::OnBnClickedSoftcon)
	ON_BN_CLICKED(IDC_WAFFLE, &CMFCApplication5Dlg::OnBnClickedWaffle)
	ON_BN_CLICKED(IDC_CHOCOCON, &CMFCApplication5Dlg::OnBnClickedChococon)
	ON_BN_CLICKED(IDC_CHURROS, &CMFCApplication5Dlg::OnBnClickedChurros)
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
	//MAIN
	
	CBitmap inshop;
	inshop.LoadBitmapW(IDB_INSHOP);
	m_Inshop.SetBitmap(inshop);

	CBitmap takeout;
	takeout.LoadBitmapW(IDB_TAKEOUT);
	m_Takeout.SetBitmap(takeout);
	/*
	CBitmap text;
	text.LoadBitmapW(IDB_BITMAP_TEXT);
	m_Text.SetBitmap(text);
	*/
	//BURGER
	CBitmap buger;
	buger.LoadBitmapW(IDB_BUGER);
	m_Buger.SetBitmap(buger);

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
	CBitmap drink;
	drink.LoadBitmapW(IDB_DRINK);
	m_Drink.SetBitmap(drink);

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
	CBitmap side;
	side.LoadBitmapW(IDB_SIDE);
	m_Side.SetBitmap(side);
	
	CBitmap french_fries;
	french_fries.LoadBitmapW(IDB_FRENCH_FRIES);
	m_French_fries.SetBitmap(french_fries);
	
	CBitmap cheeseball;
	cheeseball.LoadBitmapW(IDB_CHEESEBALL);
	m_Cheeseball.SetBitmap(cheeseball);
	
	CBitmap nugget;
	nugget.LoadBitmapW(IDB_NUGGET);
	m_Nugget.SetBitmap(nugget);

	CBitmap coleslaw;
	coleslaw.LoadBitmapW(IDB_COLESLAW);
	m_Coleslaw.SetBitmap(coleslaw);

	CBitmap corn_salad;
	corn_salad.LoadBitmapW(IDB_CORN_SALAD);
	m_Corn_salad.SetBitmap(corn_salad);

	CBitmap cheese_stick;
	cheese_stick.LoadBitmapW(IDB_CHEESE_STICK);
	m_Cheese_stick.SetBitmap(cheese_stick);
	

	//DESSERT
	CBitmap dessert;
	dessert.LoadBitmapW(IDB_DESSERT);
	m_Dessert.SetBitmap(dessert);
	
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
	churros.LoadBitmapW(IDB_CHURROS);
	m_Churros.SetBitmap(churros);
	

	//PAY
	CBitmap pay;
	pay.LoadBitmapW(IDB_PAY);
	m_Pay.SetBitmap(pay);

	CBitmap back;
	back.LoadBitmapW(IDB_BACK);
	m_Back.SetBitmap(back);
	
	CBitmap point;
	point.LoadBitmapW(IDB_POINT);
	m_Point.SetBitmap(point);

	CBitmap no;
	no.LoadBitmapW(IDB_NO);
	m_No.SetBitmap(no);

	CBitmap card;
	card.LoadBitmapW(IDB_CARD);
	m_Card.SetBitmap(card);

	CBitmap coupon;
	coupon.LoadBitmapW(IDB_COUPON);
	m_Coupon.SetBitmap(coupon);

	CBitmap cash;
	cash.LoadBitmapW(IDB_CASH);
	m_Cash.SetBitmap(cash);

	CBitmap text1;
	text1.LoadBitmapW(IDB_TEXT1);
	m_Text1.SetBitmap(text1);

	CBitmap text2;
	text2.LoadBitmapW(IDB_TEXT2);
	m_Text2.SetBitmap(text2);
	
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


//주문화면 코드
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

	
    m_French_fries.ShowWindow(SW_HIDE);
	m_Cheeseball.ShowWindow(SW_HIDE);
	m_Nugget.ShowWindow(SW_HIDE);
	m_Coleslaw.ShowWindow(SW_HIDE);
	m_Corn_salad.ShowWindow(SW_HIDE);
	m_Cheese_stick.ShowWindow(SW_HIDE);

	
	m_Softcon.ShowWindow(SW_HIDE);
	m_Chococon.ShowWindow(SW_HIDE);
	m_Waffle.ShowWindow(SW_HIDE);
	m_Churros.ShowWindow(SW_HIDE);
	
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
	
	
	m_French_fries.ShowWindow(SW_HIDE);
	m_Cheeseball.ShowWindow(SW_HIDE);
	m_Nugget.ShowWindow(SW_HIDE);
	m_Coleslaw.ShowWindow(SW_HIDE);
	m_Corn_salad.ShowWindow(SW_HIDE);
	m_Cheese_stick.ShowWindow(SW_HIDE);
	
	
	m_Softcon.ShowWindow(SW_HIDE);
	m_Chococon.ShowWindow(SW_HIDE);
	m_Waffle.ShowWindow(SW_HIDE);
	m_Churros.ShowWindow(SW_HIDE);
	
	
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

	
	m_French_fries.ShowWindow(SW_SHOW);
	m_Cheeseball.ShowWindow(SW_SHOW);
	m_Nugget.ShowWindow(SW_SHOW);
	m_Coleslaw.ShowWindow(SW_SHOW);
	m_Corn_salad.ShowWindow(SW_SHOW);
	m_Cheese_stick.ShowWindow(SW_SHOW);

	
	m_Softcon.ShowWindow(SW_HIDE);
	m_Chococon.ShowWindow(SW_HIDE);
	m_Waffle.ShowWindow(SW_HIDE);
	m_Churros.ShowWindow(SW_HIDE);	
	
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

	
	m_French_fries.ShowWindow(SW_HIDE);
	m_Cheeseball.ShowWindow(SW_HIDE);
	m_Nugget.ShowWindow(SW_HIDE);
	m_Coleslaw.ShowWindow(SW_HIDE);
	m_Corn_salad.ShowWindow(SW_HIDE);
	m_Cheese_stick.ShowWindow(SW_HIDE); 
	
	
	m_Softcon.ShowWindow(SW_SHOW);
	m_Chococon.ShowWindow(SW_SHOW);
	m_Waffle.ShowWindow(SW_SHOW);
	m_Churros.ShowWindow(SW_SHOW);
	
}

//결제화면코드

void CMFCApplication5Dlg::OnBnClickedPay()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	m_Pay.ShowWindow(SW_HIDE);

	m_Buger.ShowWindow(SW_HIDE);
	m_Drink.ShowWindow(SW_HIDE);
	m_Dessert.ShowWindow(SW_HIDE);
	m_Side.ShowWindow(SW_HIDE);

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


	m_French_fries.ShowWindow(SW_HIDE);
	m_Cheeseball.ShowWindow(SW_HIDE);
	m_Nugget.ShowWindow(SW_HIDE);
	m_Coleslaw.ShowWindow(SW_HIDE);
	m_Corn_salad.ShowWindow(SW_HIDE);
	m_Cheese_stick.ShowWindow(SW_HIDE);


	m_Softcon.ShowWindow(SW_HIDE);
	m_Chococon.ShowWindow(SW_HIDE);
	m_Waffle.ShowWindow(SW_HIDE);
	m_Churros.ShowWindow(SW_HIDE);

	m_Back.ShowWindow(SW_SHOW);

	m_Card.ShowWindow(SW_SHOW);
	m_Cash.ShowWindow(SW_SHOW);
	m_Coupon.ShowWindow(SW_SHOW);
	m_Point.ShowWindow(SW_SHOW);
	m_No.ShowWindow(SW_SHOW);
	m_Text1.ShowWindow(SW_SHOW);
	m_Text2.ShowWindow(SW_SHOW);

	m_listOrder.ShowWindow(SW_HIDE);
}


void CMFCApplication5Dlg::OnBnClickedTakeout()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_Inshop.ShowWindow(SW_HIDE);
	m_Takeout.ShowWindow(SW_HIDE);

	m_Pay.ShowWindow(SW_SHOW);

	m_Buger.ShowWindow(SW_SHOW);
	m_Drink.ShowWindow(SW_SHOW);
	m_Dessert.ShowWindow(SW_SHOW);
	m_Side.ShowWindow(SW_SHOW);

	m_Fork.ShowWindow(SW_SHOW);
	m_Shrimp.ShowWindow(SW_SHOW);
	m_Chicken.ShowWindow(SW_SHOW);
	m_Chesse.ShowWindow(SW_SHOW);
	m_Beaf.ShowWindow(SW_SHOW);
	m_Squid.ShowWindow(SW_SHOW);

	m_listOrder.ShowWindow(SW_SHOW);
}


void CMFCApplication5Dlg::OnBnClickedInshop()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_Inshop.ShowWindow(SW_HIDE);
	m_Takeout.ShowWindow(SW_HIDE);

	m_Pay.ShowWindow(SW_SHOW);

	m_Buger.ShowWindow(SW_SHOW);
	m_Drink.ShowWindow(SW_SHOW);
	m_Dessert.ShowWindow(SW_SHOW);
	m_Side.ShowWindow(SW_SHOW);

	m_Fork.ShowWindow(SW_SHOW);
	m_Shrimp.ShowWindow(SW_SHOW);
	m_Chicken.ShowWindow(SW_SHOW);
	m_Chesse.ShowWindow(SW_SHOW);
	m_Beaf.ShowWindow(SW_SHOW);
	m_Squid.ShowWindow(SW_SHOW);

	m_listOrder.ShowWindow(SW_SHOW);
}




void CMFCApplication5Dlg::OnBnClickedBack()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_Pay.ShowWindow(SW_SHOW);

	m_Buger.ShowWindow(SW_SHOW);
	m_Drink.ShowWindow(SW_SHOW);
	m_Dessert.ShowWindow(SW_SHOW);
	m_Side.ShowWindow(SW_SHOW);

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


	m_French_fries.ShowWindow(SW_HIDE);
	m_Cheeseball.ShowWindow(SW_HIDE);
	m_Nugget.ShowWindow(SW_HIDE);
	m_Coleslaw.ShowWindow(SW_HIDE);
	m_Corn_salad.ShowWindow(SW_HIDE);
	m_Cheese_stick.ShowWindow(SW_HIDE);


	m_Softcon.ShowWindow(SW_HIDE);
	m_Chococon.ShowWindow(SW_HIDE);
	m_Waffle.ShowWindow(SW_HIDE);
	m_Churros.ShowWindow(SW_HIDE);

	m_Back.ShowWindow(SW_HIDE);
	m_Card.ShowWindow(SW_HIDE);
	m_Cash.ShowWindow(SW_HIDE);
	m_Coupon.ShowWindow(SW_HIDE);
	m_No.ShowWindow(SW_HIDE);
	m_Text1.ShowWindow(SW_HIDE);
	m_Text2.ShowWindow(SW_HIDE);
	m_Point.ShowWindow(SW_HIDE);

	m_listOrder.ShowWindow(SW_SHOW);
}


void CMFCApplication5Dlg::OnBnClickedFork()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	NewDialog dlg;
	dlg.DoModal();

	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"불고기버거");
	m_listOrder.AddString(L"불고기버거");

}




void CMFCApplication5Dlg::OnBnClickedShrimp() //새우버거
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	ShrimpDialog dlg;
	dlg.DoModal();

	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"새우버거");
	m_listOrder.AddString(L"새우버거");
}


void CMFCApplication5Dlg::OnBnClickedChicken() //치킨버거
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	ChickenDialog dlg;
	dlg.DoModal();

	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"치킨버거 ");
	m_listOrder.AddString(L"치킨버거");
}


void CMFCApplication5Dlg::OnBnClickedChesse() //치즈 버거
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheeseDialog dlg;
	dlg.DoModal();

	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"치즈버거 ");
	m_listOrder.AddString(L"치즈버거");
}


void CMFCApplication5Dlg::OnBnClickedBeaf() //더블패티
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	DoubleDialog dlg;
	dlg.DoModal();

	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"더블패티 ");
	m_listOrder.AddString(L"더블패티");
}


void CMFCApplication5Dlg::OnBnClickedSquid() //오징어
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	SquidDialog dlg;
	dlg.DoModal();

	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"오징어");
	m_listOrder.AddString(L"오징어");
}


void CMFCApplication5Dlg::OnBnClickedCoke() //콜라
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"콜라     2000");
	m_listOrder.AddString(L"콜라     2000");
}


void CMFCApplication5Dlg::OnBnClickedCider() //사이다
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"사이다      2000");
	m_listOrder.AddString(L"사이다     2000");
}


void CMFCApplication5Dlg::OnBnClickedZerocoke() //제로콜라
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"제로 콜라     2000");
	m_listOrder.AddString(L"제로 콜라    2000");
}


void CMFCApplication5Dlg::OnBnClickedZerocider() //제로사이다
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"제로 사이다     2000");
	m_listOrder.AddString(L"제로 사이다    2000");
}


void CMFCApplication5Dlg::OnBnClickedMilkshake() //밀크쉐이크
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"밀크 쉐이크    3000");
	m_listOrder.AddString(L"밀크 쉐이크    3000");
}


void CMFCApplication5Dlg::OnBnClickedCoffee() //커피
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"커피    3500");
	m_listOrder.AddString(L"커피    3500");
}


void CMFCApplication5Dlg::OnBnClickedFrenchFries() //감자 튀김
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"감자 튀김    2000");
	m_listOrder.AddString(L"감자 튀김    2000");
}


void CMFCApplication5Dlg::OnBnClickedCheeseball() //치즈볼
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"치즈볼    2500");
	m_listOrder.AddString(L"치즈볼    2500");
}


void CMFCApplication5Dlg::OnBnClickedNugget() //치킨너겟
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"치킨 너겟    2000");
	m_listOrder.AddString(L"치킨 너겟    2000");
}


void CMFCApplication5Dlg::OnBnClickedColeslaw() //코울슬로
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"코울슬로    3500");
	m_listOrder.AddString(L"코울슬로    3500");
}


void CMFCApplication5Dlg::OnBnClickedCornSalad() //콘샐러드
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"콘샐러드    3500");
	m_listOrder.AddString(L"콘샐러드    3500");
}


void CMFCApplication5Dlg::OnBnClickedCheeseStick() //치즈스틱
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"치즈스틱    1500");
	m_listOrder.AddString(L"치즈스틱    1500");
}


void CMFCApplication5Dlg::OnBnClickedSoftcon() //소프트콘
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"소프트콘    1000");
	m_listOrder.AddString(L"소프트콘    1000");
}


void CMFCApplication5Dlg::OnBnClickedWaffle() //와플
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"와플    2500");
	m_listOrder.AddString(L"와플    2500");
}


void CMFCApplication5Dlg::OnBnClickedChococon() //초코콘
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"초코콘    1500");
	m_listOrder.AddString(L"초코콘    1500");
}


void CMFCApplication5Dlg::OnBnClickedChurros() //츄러스
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.ShowWindow(SW_SHOW);
	m_strOrder.Append(L"츄러스    2500");
	m_listOrder.AddString(L"츄러스    2500");
}
