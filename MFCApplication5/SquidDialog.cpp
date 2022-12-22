// SquidDialog.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication5.h"
#include "SquidDialog.h"
#include "afxdialogex.h"


// SquidDialog 대화 상자

IMPLEMENT_DYNAMIC(SquidDialog, CDialogEx)

SquidDialog::SquidDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG6, pParent)
{

}

SquidDialog::~SquidDialog()
{
}

void SquidDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_SET, m_Set);
	DDX_Control(pDX, IDC_SOLO, m_Solo);
	DDX_Control(pDX, IDC_SQUID_BURGER, m_Squid_Buger);

}


BEGIN_MESSAGE_MAP(SquidDialog, CDialogEx)
	ON_BN_CLICKED(IDC_SOLO, &SquidDialog::OnBnClickedSolo)
	ON_BN_CLICKED(IDC_SET, &SquidDialog::OnBnClickedSet)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// SquidDialog 메시지 처리기


void SquidDialog::OnBnClickedSolo()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void SquidDialog::OnBnClickedSet()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void SquidDialog::OnPaint()
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

	CBitmap squid_buger;
	squid_buger.LoadBitmapW(IDB_SQUID_BURGER);
	m_Squid_Buger.SetBitmap(squid_buger);


}
