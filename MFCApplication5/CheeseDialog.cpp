// CheeseDialog.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication5.h"
#include "CheeseDialog.h"
#include "afxdialogex.h"


// CheeseDialog 대화 상자

IMPLEMENT_DYNAMIC(CheeseDialog, CDialogEx)

CheeseDialog::CheeseDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

CheeseDialog::~CheeseDialog()
{
}

void CheeseDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_SET, m_Set);
	DDX_Control(pDX, IDC_SOLO, m_Solo);
	DDX_Control(pDX, IDC_CHEESE_BURGER, m_Cheese_Buger);
}


BEGIN_MESSAGE_MAP(CheeseDialog, CDialogEx)
	ON_BN_CLICKED(IDC_SOLO, &CheeseDialog::OnBnClickedSolo)
	ON_BN_CLICKED(IDC_SET, &CheeseDialog::OnBnClickedSet)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// CheeseDialog 메시지 처리기


void CheeseDialog::OnBnClickedSolo()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void CheeseDialog::OnBnClickedSet()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void CheeseDialog::OnPaint()
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

	CBitmap cheese_buger;
	cheese_buger.LoadBitmapW(IDB_CHEESE_BURGER);
	m_Cheese_Buger.SetBitmap(cheese_buger);



}
