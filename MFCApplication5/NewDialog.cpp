// NewDialog.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication5.h"
#include "NewDialog.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// NewDialog 대화 상자

IMPLEMENT_DYNAMIC(NewDialog, CDialogEx)

NewDialog::NewDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

NewDialog::~NewDialog()
{
}

void NewDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_SET, m_Set);
	DDX_Control(pDX, IDC_SOLO, m_Solo);
	DDX_Control(pDX, IDC_BUL_BURGER, m_Bul_burger);
}

BEGIN_MESSAGE_MAP(NewDialog, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()

	ON_BN_CLICKED(IDC_SET, &NewDialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_SOLO, &NewDialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// NewDialog 메시지 처리기

/*
void NewDialog::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void NewDialog::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	CDialogEx::OnOK();
}
*/

void NewDialog::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.

	CBitmap set;
	set.LoadBitmapW(IDB_SET);
	m_Set.SetBitmap(set);

	CBitmap solo;
	solo.LoadBitmapW(IDB_SOLO);
	m_Solo.SetBitmap(solo);

	CBitmap bul_burger;
	bul_burger.LoadBitmapW(IDB_BUL_BURGER);
	m_Bul_burger.SetBitmap(bul_burger);
}
