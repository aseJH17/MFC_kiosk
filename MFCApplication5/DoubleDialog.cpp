// DoubleDialog.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication5.h"
#include "DoubleDialog.h"
#include "afxdialogex.h"


// DoubleDialog 대화 상자

IMPLEMENT_DYNAMIC(DoubleDialog, CDialogEx)

DoubleDialog::DoubleDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG5, pParent)
{

}

DoubleDialog::~DoubleDialog()
{
}

void DoubleDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_SET, m_Set);
	DDX_Control(pDX, IDC_SOLO, m_Solo);
	DDX_Control(pDX, IDC_DOUBLE_BUGER, m_Double_Buger);

}


BEGIN_MESSAGE_MAP(DoubleDialog, CDialogEx)
	ON_BN_CLICKED(IDC_SOLO, &DoubleDialog::OnBnClickedSolo)
	ON_BN_CLICKED(IDC_SET, &DoubleDialog::OnBnClickedSet)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// DoubleDialog 메시지 처리기


void DoubleDialog::OnBnClickedSolo()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void DoubleDialog::OnBnClickedSet()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void DoubleDialog::OnPaint()
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

	CBitmap double_buger;
	double_buger.LoadBitmapW(IDB_DOUBLE_BUGER);
	m_Double_Buger.SetBitmap(double_buger);


}
