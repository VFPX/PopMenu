*	typedef struct tagPAINTSTRUCT { // ps  
*    HDC  hdc;
*    BOOL fErase;
*    RECT rcPaint;
*    BOOL fRestore;
*    BOOL fIncUpdate;
*    BYTE rgbReserved[32];
*} PAINTSTRUCT;

*	typedef struct _TRIVERTEX {
*	  LONG        x;
*	  Long        y;
*	  COLOR16     Red;
*	  COLOR16     Green;
*	  COLOR16     Blue;
*	  COLOR16     Alpha;
*	}TRIVERTEX, *PTRIVERTEX


*	typedef struct tagNONCLIENTMETRICS { 
*	  UINT    cbSize; 
*	  int     iBorderWidth; 
*	  int     iScrollWidth; 
*	  int     iScrollHeight; 
*	  int     iCaptionWidth; 
*	  int     iCaptionHeight; 
*	  LOGFONT lfCaptionFont; 
*	  int     iSmCaptionWidth; 
*	  int     iSmCaptionHeight; 
*	  LOGFONT lfSmCaptionFont; 
*	  int     iMenuWidth; 
*	  int     iMenuHeight; 
*	  LOGFONT lfMenuFont; 
*	  LOGFONT lfStatusFont; 
*	  LOGFONT lfMessageFont; 
*	} NONCLIENTMETRICS, *LPNONCLIENTMETRICS


*	typedef struct tagLOGFONT { 
*	  LONG lfHeight; 
*	  LONG lfWidth; 
*	  LONG lfEscapement; 
*	  LONG lfOrientation; 
*	  LONG lfWeight; 
*	  BYTE lfItalic; 
*	  BYTE lfUnderline; 
*	  BYTE lfStrikeOut; 
*	  BYTE lfCharSet; 
*	  BYTE lfOutPrecision; 
*	  BYTE lfClipPrecision; 
*	  BYTE lfQuality; 
*	  BYTE lfPitchAndFamily; 
*	  TCHAR lfFaceName[LF_FACESIZE]; 
*	} LOGFONT, *PLOGFONT


*	typedef struct MEASUREITEMSTRUCT {
*	    UINT CtlType;
*	    UINT CtlID;
*	    UINT itemID;
*	    UINT itemWidth;
*	    UINT itemHeight;
*	    ULONG_PTR itemData;
*	} MEASUREITEMSTRUCT


*	typedef struct tagDRAWITEMSTRUCT {
*��		UINT CtlType; 		// �ؼ����ͣ�
*��		UINT CtlID; 		// ��Ͽ��б��ȿؼ���ID��ʶ�ţ�
*��		UINT itemID; 		// �˵����ID��ʶ�Ż��б����Ͽ���ĳһ�������ֵ��
*��		UINT itemAction; 	// �ؼ���Ϊ��
*��		UINT itemState; 	// �ؼ�״̬��
*��		HWND hwndItem; 		// �����ھ����˵����
*��		HDC hDC; 			// �ؼ���Ӧ�Ļ�ͼ�豸���
*��		RECT rcItem; 		// �ؼ���ռ�ݵľ�������
*��		DWORD itemData; 	// �б�����Ͽ���ĳһ���ֵ
*	} DRAWITEMSTRUCT


*	typedef struct _RECT { 
*	  LONG left; 
*	  LONG top; 
*	  LONG right; 
*	  LONG bottom; 
*	} RECT, *PRECT


*	typedef struct tagMYPOPITEM
*	{
*		char		szItemText[64];
*		UINT		nLen;
*		HBITMAP	hBitmap;
*	} MYPOPITEM


*	typedef struct tagMENUBARINFO {
*	  DWORD cbSize;
*	  RECT  rcBar;
*	  HMENU hMenu;
*	  HWND  hwndMenu;
*	  BOOL  fBarFocused:1;
*	  BOOL  fFocused:1;
*	} MENUBARINFO, *PMENUBARINFO


*	typedef struct tagMENUITEMINFO {
*	  UINT    cbSize; 
*	  UINT    fMask; 
*	  UINT    fType; 
*	  UINT    fState; 
*	  UINT    wID; 
*	  HMENU   hSubMenu; 
*	  HBITMAP hbmpChecked; 
*	  HBITMAP hbmpUnchecked; 
*	  ULONG_PTR dwItemData; 
*	  LPTSTR  dwTypeData; 
*	  UINT    cch; 
*	  HBITMAP hbmpItem;
*	} MENUITEMINFO, *LPMENUITEMINFO


*	typedef struct tagBITMAP {
*	  LONG   bmType; 
*	  LONG   bmWidth; 
*	  LONG   bmHeight; 
*	  LONG   bmWidthBytes; 
*	  WORD   bmPlanes; 
*	  WORD   bmBitsPixel; 
*	  LPVOID bmBits; 
*	} BITMAP, *PBITMAP

*!*	typedef struct tagBITMAPINFOHEADER{ // bmih  
*!*	   DWORD  biSize;
*!*	   LONG   biWidth;
*!*	   LONG   biHeight;
*!*	   WORD   biPlanes;
*!*	   WORD   biBitCount
*!*	   DWORD  biCompression;
*!*	   DWORD  biSizeImage;
*!*	   LONG   biXPelsPerMeter;
*!*	   LONG   biYPelsPerMeter;
*!*	   DWORD  biClrUsed;
*!*	   DWORD  biClrImportant;
*!*	} BITMAPINFOHEADER;

*!*	typedef struct tagBITMAPFILEHEADER { // bmfh  
*!*	        WORD    bfType;
*!*	        DWORD   bfSize;
*!*	        WORD    bfReserved1;
*!*	        WORD    bfReserved2;
*!*	        DWORD   bfOffBits;
*!*	} BITMAPFILEHEADER;