// ShrimpDialog.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication5.h"
#include "ShrimpDialog.h"
#include "afxdialogex.h"


// ShrimpDialog 대화 상자

IMPLEMENT_DYNAMIC(ShrimpDialog, CDialogEx)

ShrimpDialog::ShrimpDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

ShrimpDialog::~ShrimpDialog()
{
}

void ShrimpDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_SET, m_Set);
	DDX_Control(pDX, IDC_SOLO, m_Solo);
	DDX_Control(pDX, IDC_SHIRIMP_BUGER, m_Shirmp_Buger);
}


BEGIN_MESSAGE_MAP(ShrimpDialog, CDialogEx)
	ON_BN_CLICKED(IDC_SOLO, &ShrimpDialog::OnBnClickedSolo)
	ON_BN_CLICKED(IDC_SET, &ShrimpDialog::OnBnClickedSet)
	
	ON_WM_PAINT()
END_MESSAGE_MAP()


// ShrimpDialog 메시지 처리기


void ShrimpDialog::OnBnClickedSolo()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void ShrimpDialog::OnBnClickedSet()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}




void ShrimpDialog::OnPaint()
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

	CBitmap shirmp_buger;
	shirmp_buger.LoadBitmapW(IDB_SHIRIMP_BUGER);
	m_Shirmp_Buger.SetBitmap(shirmp_buger);



}
