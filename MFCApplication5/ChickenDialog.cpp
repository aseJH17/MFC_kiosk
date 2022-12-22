// ChickenDialog.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication5.h"
#include "ChickenDialog.h"
#include "afxdialogex.h"


// ChickenDialog 대화 상자

IMPLEMENT_DYNAMIC(ChickenDialog, CDialogEx)

ChickenDialog::ChickenDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

ChickenDialog::~ChickenDialog()
{
}

void ChickenDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_SET, m_Set);
	DDX_Control(pDX, IDC_SOLO, m_Solo);
	DDX_Control(pDX, IDC_CHICKEN_BURGER, m_Chicken_Buger);
}


BEGIN_MESSAGE_MAP(ChickenDialog, CDialogEx)
	ON_BN_CLICKED(IDC_SOLO, &ChickenDialog::OnBnClickedSolo)
	ON_BN_CLICKED(IDC_SET, &ChickenDialog::OnBnClickedSet)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// ChickenDialog 메시지 처리기


void ChickenDialog::OnBnClickedSolo()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void ChickenDialog::OnBnClickedSet()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void ChickenDialog::OnPaint()
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

	CBitmap chicken_buger;
	chicken_buger.LoadBitmapW(IDB_CHICKEN_BURGER);
	m_Chicken_Buger.SetBitmap(chicken_buger);


}
