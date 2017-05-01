*--
*-- ���ó���
*--
#Define CR			Chr(13)
#Define LF			Chr(10)
#Define CRLF		CR + LF
#Define TRUE		.T. 
#Define FALSE		.F. 
*--
*-- data types 
*--
#Define WORD_SIZE			2
#Define DWORD_SIZE			4

*--
*-- ���ýṹ�Ĵ�С
*--
#Define POINT_SIZE				DWORD_SIZE * 2
#Define RECT_SIZE				DWORD_SIZE * 4
#Define BITMAP_SIZE				DWORD_SIZE * 4 + WORD_SIZE * 2 + DWORD_SIZE
#Define DRAWITEMSTRUCT_SIZE		64
#Define MEASUREITEMSTRUCT_SIZE	DWORD_SIZE * 6
#Define ICONINFO_SIZE			DWORD_SIZE * 5

***
*** δ����
***
#Define BI_RGB 				0x00 
#Define DIB_RGB_COLORS 		0 

#Define TS_MIN  		0 
#Define TS_TRUE 		1 
#Define TS_DRAW 		2 


*--
*-- 	Window messages
*--
#Define WM_NULL					0x00		&& ??
#Define WM_CREATE        		0x01		&& ����һ������
#Define WM_DESTROY				0x02		&& ���ڱ�����
#Define WM_MOVE					0x03		&& �ƶ�����ʱ
#Define WM_SIZE					0x05		&& �ı�һ�����ڵĴ�С
#Define WM_ACTIVATE				0x06		&& ����һ������
#Define WM_SETFOCUS				0x07		&& ���ڵõ�����ʱ
#Define WM_KILLFOCUS			0x08		&& ʧȥ����ʱ
#Define WM_ENABLE				0x0A		&& �ı�enable״̬ 
#Define WM_SETREDRAW			0x0B		&& ���ô����Ƿ����ػ� 
#Define WM_SETTEXT				0x0C		&& Ӧ�ó����ʹ���Ϣ������һ�����ڵ��ı�
#Define WM_GETTEXT				0x0D
#Define WM_GETTEXTLENGTH 		0x0E
#Define WM_PAINT				0x0F		&& Ҫ���ػ��Լ�
#Define WM_CLOSE				0x10		&& ��һ�����ڻ�Ӧ�ó���Ҫ�ر�ʱ����һ���ź� 
#Define WM_QUERYENDSESSION		0x11
#Define WM_QUIT					0x12
#Define WM_QUERYOPEN			0x13
#Define WM_ERASEBKGND 			0x14
#Define WM_SYSCOLORCHANGE		0x15		&& ��ϵͳ��ɫ�ı�ʱ�����ʹ���Ϣ�����ж�������
#Define WM_ENDSESSION			0x16
#Define WM_SHOWWINDOW			0x18
#Define WM_WININICHANGE			0x1A		&& Win.ini �ļ����ı䣬ϵͳ�Թ㲥��ʽ֪ͨÿ������
#Define WM_DEVMODECHANGE		0x1B
#Define WM_ACTIVATEAPP			0x1C
#Define WM_FONTCHANGE			0x1D
#Define WM_TIMECHANGE			0x1E
#Define WM_CANCELMODE			0x1F
#Define WM_SETCURSOR			0x20		&& ������״�ı�ʱ
#Define WM_MOUSEACTIVATE		0x21
#Define WM_CHILDACTIVATE		0x22
#Define WM_QUEUESYNC			0x23
#Define WM_GETMINMAXINFO		0x24
#Define WM_PAINTICON 			0x26
#Define WM_ICONERASEBKGND		0x27
#Define WM_NEXTDLGCTL			0x28
#Define WM_SPOOLERSTATUS		0x2A
#Define WM_DRAWITEM				0x2B		&& ���Ʋ˵���
#Define WM_MEASUREITEM			0x2C 		&& �����˵��߶ȺͿ�� 
#Define WM_DELETEITEM			0x2D
#Define WM_VKEYTOITEM			0x2E
#Define WM_CHARTOITEM			0x2F
#Define WM_SETFONT				0x30
#Define WM_GETFONT				0x31
#Define WM_SETHOTKEY			0x32
#Define WM_GETHOTKEY			0x33
#Define WM_QUERYDRAGICON 		0x37
#Define WM_COMPAREITEM			0x39		&& ���ʹ���Ϣ���ж� combobox �� listbox �����ӵ�������λ��
#Define WM_GETOBJECT			0x3D
#Define WM_COMPACTING			0x41		&& ��ʾ�ڴ��Ѿ�������
#Define WM_OTHERWINDOWCREATED	0x42
#Define WM_OTHERWINDOWDESTROYED	0x43
#Define WM_COMMNOTIFY 			0x44
#Define WM_WINDOWPOSCHANGING	0x46		&& ���ڵĴ�С��λ�ý�Ҫ���ı�ʱ
#Define WM_WINDOWPOSCHANGED		0x47		&& ���ʹ���Ϣ���Ǹ����ڵĴ�С��λ���Ѿ����ı�
#Define WM_POWER				0x48		&& (������16λ��windows�� ��ϵͳ��Ҫ������ͣ״̬ʱ���ʹ���Ϣ 
#Define WM_HELP 				0x53
#Define WM_COPYDATA 			0x4A		&& ��һ��Ӧ�ó��򴫵����ݸ���һ��Ӧ�ó���ʱ���ʹ���Ϣ
#Define WM_CANCELJOURNAL 		0x4B		&& ��ĳ���û�ȡ��������־����״̬���ύ����Ϣ������ 
#Define WM_NOTIFY 				0x4E 		&& ��ĳ���ؼ���ĳ���¼��Ѿ�����������ؼ���Ҫ�õ�һЩ��Ϣʱ�����ʹ���Ϣ�����ĸ�����
#Define WM_CONTEXTMENU			0x7B		&& ���û�ĳ�������е����һ���Ҽ��ͷ��ʹ���Ϣ���������
#Define WM_STYLECHANGED			0x7D		&& ������SETWINDOWLONG����һ���������ڵķ����ʹ���Ϣ���Ǹ�����
#Define WM_SETICON 				0x80		&& Ӧ�ó����ʹ���Ϣ��һ���µĴ�ͼ���Сͼ���봰�ڹ���
#Define WM_NCCREATE				0x81
#Define WM_NCDESTROY			0x82
#Define WM_NCCALCSIZE			0x83
#Define WM_NCHITTEST			0x84		&& �������������ƶ����
#Define WM_NCPAINT				0x85		&& �����ڵĿ�ܱ��뱻����ʱ(��С�ı���߷��ı�?)
#Define WM_NCACTIVATE			0x86 		&& ���ڷǿͻ�����Ҫ���ı�����ʾ�Ǽ���ǷǼ���״̬
#Define WM_GETDLGCODE			0x87
#Define WM_SYNCPAINT 			0x88
#Define WM_NCMOUSEMOVE			0xA0		&& ����ڴ��ڷǿͻ������ƶ����ǿͻ���ָ:����ı����������ı߿���
#Define WM_NCLBUTTONDOWN		0xA1		&& ����ڴ��ڷǿͻ����ڰ���������ʱ
#Define WM_NCLBUTTONUP			0xA2		&& ����ڴ��ڷǿͻ�����̧��������ʱ
#Define WM_NCLBUTTONDBLCLK		0xA3		&& ����ڴ��ڷǿͻ�����˫��������ʱ
#Define WM_NCRBUTTONDOWN		0xA4		&& ����ڴ��ڷǿͻ����ڰ�������Ҽ�ʱ
#Define WM_NCRBUTTONUP			0xA5		&& ����ڴ��ڷǿͻ�����̧������Ҽ�ʱ
#Define WM_NCRBUTTONDBLCLK		0xA6		&& ����ڴ��ڷǿͻ�����˫������Ҽ�ʱ
#Define WM_NCMBUTTONDOWN		0xA7
#Define WM_NCMBUTTONUP 			0xA8
#Define WM_NCMBUTTONDBLCLK		0xA9
#Define WM_KEYFIRST 			0x0100
#Define WM_KEYDOWN				0x0100		&& ����һ����ʱ
#Define WM_KEYUP				0x0101		&& ̧��һ����
#Define WM_CHAR					0x0102		&& ������ĳ�������ѷ��� WM_KEYDOWN �� WM_KEYUP ��Ϣ
#Define WM_DEADCHAR				0x0103		&& ���� translatemessage �������� WM_KEYUP ��Ϣʱ���ʹ���Ϣ��ӵ�н���Ĵ���
#Define WM_SYSKEYDOWN			0x0104		&& ���û���ס ALT ��ͬʱ����������ʱ�ύ����Ϣ��ӵ�н���Ĵ���
#Define WM_SYSKEYUP				0x0105		&& ���û��ͷ�һ����ͬʱ ALT ��������ʱ�ύ����Ϣ��ӵ�н���Ĵ���
#Define WM_SYSCHAR				0x0106		&& �� WM_SYSKEYDOWN ��Ϣ�� TRANSLATEMESSAGE ����������ύ����Ϣ��ӵ�н���Ĵ���
#Define WM_SYSDEADCHAR			0x0107		&& �� WM_SYSKEYDOWN ��Ϣ�� TRANSLATEMESSAGE ����������ʹ���Ϣ��ӵ�н���Ĵ���
#Define WM_KEYLAST				0x0108
#Define WM_INITDIALOG			0x0110		&& ��һ���Ի��������ʾǰ���ʹ���Ϣ����,���ô���Ϣ��ʼ���ؼ���ִ����������
#Define WM_COMMAND				0x0111		&& ѡ��˵���
#Define WM_SYSCOMMAND			0x0112		&& ���ڲ˵���һ��������û�ѡ����󻯻���С��ʱ�Ǹ�����ʱ
#Define WM_TIMER				0x0113
#Define WM_INITMENU				0x0116		&& ��һ���˵���Ҫ������ʱ���ʹ���Ϣ�����������û��˵����е�ĳ�����ĳ���˵���
#Define WM_INITMENUPOPUP		0x0117		&& ��һ�������˵����Ӳ˵���Ҫ������ʱ���ʹ���Ϣ
#Define WM_MENUSELECT			0x011F		&& ѡ��˵���
#Define WM_MENUCHAR				0x0120		&& ���˵��ѱ������û�������ĳ��������ͬ�ڷ��ʼ��������ʹ���Ϣ���˵���������
#Define WM_ENTERIDLE			0x0121		&& ��һ��ģ̬�Ի����˵��������״̬ʱ���ʹ���Ϣ������������
#Define WM_MENURBUTTONUP		0x0122
#Define WM_MENUDRAG				0x0123
#Define WM_MENUGETOBJECT		0x0124
#Define WM_UNINITMENUPOPUP		0x0125
#Define WM_CTLCOLORMSGBOX		0x0132
#Define WM_CTLCOLOREDIT			0x0133
#Define WM_CTLCOLORLISTBOX		0x0134
#Define WM_CTLCOLORBTN 			0x0135
#Define WM_CTLCOLORDLG			0x0136
#Define WM_CTLCOLORSCROLLBAR	0x0137
#Define WM_CTLCOLORSTATIC		0x0138
#Define WM_MOUSEFIRST 			0x0200
#Define WM_MOUSEMOVE 			0x0200
#Define WM_LBUTTONDOWN			0x0201		&& �ڴ��ڿͻ����ڰ���������
#Define WM_LBUTTONUP			0x0202		&& �ڴ��ڿͻ�����̧��������
#Define WM_LBUTTONDBLCLK		0x0203		&& �ڴ��ڿͻ�����˫��������
#Define WM_RBUTTONDOWN			0x0204		&& �ڴ��ڿͻ����ڰ�������Ҽ�
#Define WM_RBUTTONUP			0x0205		&& �ڴ��ڿͻ�����̧������Ҽ�
#Define WM_RBUTTONDBLCLK		0x0206		&& �ڴ��ڿͻ�����˫������Ҽ�
#Define WM_MBUTTONDOWN			0x0204		&& �ڴ��ڿͻ����ڰ�������м�
#Define WM_MBUTTONUP			0x0205		&& �ڴ��ڿͻ�����̧������м�
#Define WM_MBUTTONDBLCLK		0x0206		&& �ڴ��ڿͻ�����˫������м�
#Define WM_MBUTTONDOWN			0x0207
#Define WM_MBUTTONUP			0x0208
#Define WM_MBUTTONDBLCLK		0x0209
#Define WM_MOUSELAST			0x0209
#Define WM_PARENTNOTIFY			0x0210
#Define WM_ENTERMENULOOP 		0x0211
#Define WM_EXITMENULOOP 		0x0212		&& �˳��˵���Ϣѭ��
#Define WM_NEXTMENU				0x0213
#Define WM_SIZING 				0x0214
#Define WM_CAPTURECHANGED		0x0215
#Define WM_MDICREATE			0x0220
#Define WM_MDIDESTROY			0x0221
#Define WM_MDIACTIVATE			0x0222
#Define WM_MDIRESTORE			0x0223
#Define WM_MDINEXT				0x0224
#Define WM_MDIMAXIMIZE			0x0225
#Define WM_MDITILE				0x0226
#Define WM_MDICASCADE			0x0227
#Define WM_MDIICONARRANGE		0x0228
#Define WM_MDIGETACTIVE			0x0229
#Define WM_MDISETMENU			0x0230
#Define WM_DROPFILES			0x0233
#Define WM_MDIREFRESHMENU 		0x0234
#Define WM_IME_SETCONTEXT 		0x0281
#Define WM_CUT 					0x0300
#Define WM_COPY					0x0301
#Define WM_PASTE				0x0302
#Define WM_CLEAR				0x0303
#Define WM_UNDO					0x0304
#Define WM_RENDERFORMAT			0x0305
#Define WM_RENDERALLFORMATS 	0x0306
#Define WM_DESTROYCLIPBOARD 	0x0307
#Define WM_DRAWCLIPBOARD		0x0308
#Define WM_PAINTCLIPBOARD		0x0309
#Define WM_VSCROLLCLIPBOARD		0x030A
#Define WM_SIZECLIPBOARD		0x030B
#Define WM_ASKCBFORMATNAME 		0x030C
#Define WM_CHANGECBCHAIN		0x030D
#Define WM_HSCROLLCLIPBOARD		0x030E
#Define WM_QUERYNEWPALETTE		0x030F
#Define WM_PALETTEISCHANGING	0x0310
#Define WM_PALETTECHANGED		0x0311
#Define WM_HOTKEY				0x0312
#Define WM_THEMECHANGED 		0x031A		&& ��ϵͳ����ı�ʱ(xp)
#Define WM_PENWINFIRST			0x0380
#Define WM_PENWINLAST			0x038F
#Define WM_USER					0x0400		&& ����û������Զ�����Ϣ
#Define WM_SETTINGCHANGE		WM_WININICHANGE
*--
*-- 	Message SYSCOMMAND by wPara
*--
#Define SC_SIZE							0xF000
#Define SC_MOVE							0xF010
#Define SC_MINIMIZE						0xF020
#Define SC_MAXIMIZE 					0xF030
#Define SC_NEXTWINDOW					0xF040
#Define SC_PREVWINDOW					0xF050
#Define SC_CLOSE						0xF060
#Define SC_VSCROLL						0xF070
#Define SC_HSCROLL						0xF080
#Define SC_MOUSEMENU					0xF090
#Define SC_KEYMENU						0xF100
#Define SC_ARRANGE						0xF110
#Define SC_RESTORE						0xF120
#Define SC_TASKLIST						0xF130
#Define SC_SCREENSAVE					0xF140
#Define SC_HOTKEY 						0xF150
#Define SC_ICON							SC_MINIMIZE
#Define SC_ZOOM							SC_MAXIMIZE
#Define SC_MANAGER_CONNECT  			0x01
#Define SC_MANAGER_CREATE_SERVICE 		0x02
#Define SC_MANAGER_ENUMERATE_SERVICE 	0x04
#Define SC_MANAGER_LOCK					0x08
#Define SC_MANAGER_QUERY_LOCK_STATUS  	0x10
#Define SC_MANAGER_MODIFY_BOOT_CONFIG  	0x20
#Define SC_MANAGER_ALL_ACCESS  			STANDARD_RIGHTS_REQUIRED ;
										+ SC_MANAGER_CONNECT ;
										+ SC_MANAGER_CREATE_SERVICE ;
										+ SC_MANAGER_ENUMERATE_SERVICE ;
										+ SC_MANAGER_LOCK ;
										+ SC_MANAGER_QUERY_LOCK_ST
#Define SC_FLAGS 						0x0400
#Define SC_FLAGS_STR 					"/sc"
#Define SC_GROUP_IDENTIFIER  			"+"
#Define SC_GROUP_IDENTIFIERA 			"+"
#Define SC_GROUP_IDENTIFIERW 			"+"
      
#Define MSGF_DIALOGBOX 		0
#Define MSGF_MESSAGEBOX 	1
#Define MSGF_MENU 			2
#Define MSGF_MOVE 			3
#Define MSGF_SIZE 			4
#Define MSGF_SCROLLBAR 		5
#Define MSGF_NEXTWINDOW 	6
#Define MSGF_MAINLOOP 		8
#Define MSGF_MAX 			8
#Define MSGF_USER 			0x1000
#Define MSGF_DDEMGR  		0x8001

*--
*--  ??? To WM_MENUCHAR
*--

#Define MNC_CLOSE		1
#Define MNC_EXECUTE		2
#Define MNC_IGNORE 		0
#Define MNC_SELECT		3

#Define MND_CONTINUE 	0
#Define MND_ENDMENU 	1
      
*--
*--  dwStyle To CreateWindow
*--
#Define WS_MAXIMIZEBOX 		0x010000 		&& ����󻯰�ť
#Define WS_MINIMIZEBOX 		0x020000		&& ����С����ť
#Define WS_THICKFRAME 		0x040000		&& �пɵ��߿�(�� WS_SIZEBOX ��ʽ��ͬ)
#Define WS_SYSMENU 			0x080000		&& ������ϴ��д��ڲ˵�(��ָ�� WS_CAPTION ��ʽ)
#Define WS_HSCROLL 			0x100000		&& ��ˮƽ������
#Define WS_VSCROLL 			0x200000		&& �д�ֱ������
#Define WS_DLGFRAME 		0x400000		&& ���Ի���߿���ʽ,���������
#Define WS_BORDER 			0x800000		&& �е��߿�
#Define WS_CAPTION 			0xC00000		&& �б����ͱ߿�(��WS_TILED��ʽ��ͬ)
#Define WS_MAXIMIZE 		0x01000000		&& ������󻯰�ť,��ָ��WS_SYSTEM��ʽ
#Define WS_CLIPCHILDREN 	0x02000000		&& ���ڸ������ڻ�ͼʱ,�ų��Ӵ�������
#Define WS_CLIPSIBLINGS 	0x04000000		&& ʹ�����ų��Ӵ���֮����������
#Define WS_DISABLED 		0x08000000		&& ������״̬
#Define WS_VISIBLE 			0x10000000		&& �ɼ�״̬
#Define WS_MINIMIZE 		0x20000000		&& ��С��״̬
#Define WS_CHILD 			0x40000000		&& 
#Define WS_POPUP 			0x80000000 		&& ����ʽ����(������WS_CHILDWINDOW��ʽͬʱʹ��)
#Define WS_SIZEBOX  		WS_THICKFRAME	&& �ɵ�����С�ı߿�
#Define WS_CHILDWINDOW 		WS_CHILD		&& �Ӵ���(������WS_POPUP����)
*
#Define WS_TABSTOP 			0x010000		&& �ɽ��� TAB ������
#Define WS_GROUP 			0x020000		&& ����ʽ,ÿ����ĵ�һ���ؼ����� WS_TABSTOP ��ʽ
#Define WS_OVERLAPPEDWINDOW (WS_OVERLAPPED + WS_CAPTION + WS_SYSMENU + WS_THICKFRAME + WS_MINIMIZEBOX + WS_MAXIMIZEBOX) 
											&& ���в��,�����,ϵͳ�˵�,�ɵ��߿�,ϵͳ��ť
#Define WS_POPUPWINDOW 		(WS_POPUP + WS_BORDER + WS_SYSMENU)
											&& ���е��߿�,����ʽ,ϵͳ�˵���ʽ
*--
*-- 	dwExStyle To CreateWindowEx
*--
#Define WS_EX_DLGMODALFRAME 	0x01		&& ��˫��߿�
#Define WS_EX_NOPARENTNOTIFY 	0x04		&& ����/����ʱ��֪ͨ������
#Define WS_EX_TOPMOST 			0x08		&& �����ö�(ͣ�������з���߲㴰�ڵ�����)
#Define WS_EX_ACCEPTFILES 		0x10		&& �ɽ����ļ��Ϸ�
#Define WS_EX_TRANSPARENT 		0x20		&& ͸����ʽ,��ͬ���������ػ�ʱ�ô��ڲſ��ػ�
#Define WS_EX_MDICHILD 			0x40		&& MDI�Ӵ�����ʽ
#Define WS_EX_TOOLWINDOW 		0x80		&& ������������ʽ
#Define WS_EX_WINDOWEDGE 		0x0100		&& ��͹���Ե�ı߿�
#Define WS_EX_CLIENTEDGE 		0x0200		&& ����Ӱ�ı�Ե
#Define WS_EX_CONTEXTHELP 		0x0400		&& �������İ�����ʽ,����������һ���ʺű�־
#Define WS_EX_RIGHT 			0x1000		&& �Ҷ���
#Define WS_EX_RTLREADING 		0x2000		&& �����ı����ҵ�����ʾ
#Define WS_EX_LEFTSCROLLBAR 	0x4000		&& ��ֱ�������ڴ�����߽�
#Define WS_EX_CONTROLPARENT 	0x010000	&& �����û�ʹ��TAB���ڴ��ڵ��Ӵ��ڼ�����
#Define WS_EX_STATICEDGE 		0x020000	&& ������Ϊ������״̬ʱ����һ����ά��Ե
#Define WS_EX_APPWINDOW 		0x040000	&& �����ڿɼ�ʱ��һ�����㴰�ڷ�������������
#Define WS_EX_OVERLAPPEDWINDOW 	(WS_EX_WINDOWEDGE + WS_EX_CLIENTEDGE)
											&& ��͹���Ե�ı߿�,��Ե����Ӱ
#Define WS_EX_PALETTEWINDOW 	(WS_EX_WINDOWEDGE + WS_EX_TOOLWINDOW + WS_EX_TOPMOST)
											&& ������߿�,�й�����������ʽ,�����ڶ���
#Define WS_EX_LAYERED 			0x080000	&& �ֲ��͸������,����ʽ��ʹ�û����Ч
#Define WS_EX_NOINHERITLAYOUT 	0x100000	&& �ӿؼ����̳д����ؼ��Ĳ���
#Define WS_EX_LAYOUTRTL 		0x400000	&& �����ؼ������д�������Ĳ���(����ᱻ����)
#Define WS_EX_NOACTIVATE 		0x08000000	&& ���ڶ��㵫������
* WS_EX_COMPOSITED 					&& ��˫������µ��ϻ��ƴ��ڵ���������(WinXP����)

*--
*--		 ??? to CreateWindowEx
*-- 
#Define CW_USEDEFAULT			0x80000000 

*--
*--		 TOOLINFO
*-- 
#Define TTS_ALWAYSTIP			0x01		&& ��ʹ����û�л�ý��㣬Ҳ��ʾ��ʾ
#Define TTS_NOPREFIX			0x02
#Define TTS_NOANIMATE			0x10
#Define TTS_NOFADE				0x20
#Define TTS_BALLOON				0x40		&& ������ʾ����֮����
#Define TTS_CLOSE				0x80
#Define TTS_USEVISUALSTYLE		0x0100		&& VISTA

#Define TTI_NONE 				0x00		&& ��ͼ��
#Define TTI_INFO				0x01		&& ��Ϣ
#Define TTI_WARNING				0x02		&& ����
#Define TTI_ERROR 				0x03		&& ����

#Define TTDT_AUTOMATIC 			0x00
#Define TTDT_RESHOW 			0x01
#Define TTDT_AUTOPOP 			0x02
#Define TTDT_INITIAL			0x03

#Define TTF_IDISHWND 			0x01
#Define TTF_CENTERTIP 			0x02		&& ������ʾ����ʾ�ڽ������ܵ����·�
#Define TTF_RTLREADING 			0x04		&& �ı��Դ��������˳����ʾ�����԰�������ϣ���������ϵͳ��Ч��
#Define TTF_SUBCLASS 			0x10		&& ������ʾ�ؼ������໯"����"���ڴ����Ա��ȡ���͸����ĵ������Ϣ
#Define TTF_TRACK				0x20
#Define TTF_ABSOLUTE			0x80		&& ����λ�ã�������Ļ�޷���ʾ��Ҳ����ı���ʾλ��
#Define TTF_TRANSPARENT			0x0100
#Define TTF_PARSELINKS			0x1000
#Define TTF_DI_SETITEM			0x8000
#Define TTF_BITMAP				0x10000		&& VISTA

#Define TTM_ACTIVATE			WM_USER + 01
#Define TTM_SETDELAYTIME 		WM_USER + 03	&& ���� Tooltip ʱ��
#Define TTM_ADDTOOL				WM_USER + 04	&& ��� Tooltip
#Define TTM_ADDTOOLA			WM_USER + 04	&& ��������� TTM_ADDTOOLA ��ʲô��ͬ��
#Define TTM_DELTOOLA 			WM_USER + 05
#Define TTM_NEWTOOLRECTA		WM_USER + 06
#Define TTM_RELAYEVENT			WM_USER + 07
#Define TTM_GETTOOLINFOA		WM_USER + 08
#Define TTM_SETTOOLINFOA		WM_USER + 09
#Define TTM_HITTESTA			WM_USER + 10
#Define TTM_GETTEXTA			WM_USER + 11
#Define TTM_UPDATETIPTEXTA		WM_USER + 12
#Define TTM_GETTOOLCOUNT		WM_USER + 13
#Define TTM_ENUMTOOLSA			WM_USER + 14
#Define TTM_GETCURRENTTOOLA		WM_USER + 15
#Define TTM_WINDOWFROMPOINT		WM_USER + 16
#Define TTM_TRACKACTIVATE		WM_USER + 17
#Define TTM_TRACKPOSITION		WM_USER + 18
#Define TTM_SETTIPBKCOLOR		WM_USER + 19	&& ���ñ�����ɫ
#Define TTM_SETTIPTEXTCOLOR		WM_USER + 20	&& �����ı���ɫ
#Define TTM_GETDELAYTIME		WM_USER + 21
#Define TTM_GETTIPBKCOLOR		WM_USER + 22
#Define TTM_GETTIPTEXTCOLOR		WM_USER + 23
#Define TTM_SETMAXTIPWIDTH		WM_USER + 24	&& ���������
#Define TTM_GETMAXTIPWIDTH		WM_USER + 25
#Define TTM_SETMARGIN			WM_USER + 26
#Define TTM_GETMARGIN			WM_USER + 27
#Define TTM_POP					WM_USER + 28
#Define TTM_UPDATE				WM_USER + 29
#Define TTM_GETBUBBLESIZE		WM_USER + 30
#Define TTM_ADJUSTRECT			WM_USER + 31
#Define TTM_SETTITLEA 			WM_USER + 32	&& ���ñ���
#Define TTM_SETTITLEW			WM_USER + 33
#Define TTM_POPUP				WM_USER + 34
#Define TTM_ADDTOOLW			WM_USER + 50
#Define TTM_DELTOOLW			WM_USER + 51
#Define TTM_NEWTOOLRECTW		WM_USER + 52
#Define TTM_GETTOOLINFOW		WM_USER + 53
#Define TTM_SETTOOLINFOW		WM_USER + 54
#Define TTM_HITTESTW			WM_USER + 55
#Define TTM_GETTEXTW			WM_USER + 56
#Define TTM_UPDATETIPTEXTW		WM_USER + 57
#Define TTM_ENUMTOOLSW			WM_USER + 58
#Define TTM_GETCURRENTTOOLW		WM_USER + 59
* #Define TTM_SETWINDOWTHEME = CCM_SETWINDOWTHEME

#Define LPSTR_TEXTCALLBACKA 	-1
#Define LPSTR_TEXTCALLBACKW 	-1

#Define TTN_FIRST 			-520
#Define TTN_LAST 			-549
#Define TTN_GETDISPINFOA	TTN_FIRST - 0
#Define TTN_GETDISPINFOW 	TTN_FIRST - 10
#Define TTN_LINKCLICK		TTN_FIRST - 3
* #Define TTN_NEEDTEXT 		TTN_GETDISPINFO
#Define TTN_NEEDTEXTA		TTN_GETDISPINFOA
#Define TTN_NEEDTEXTW		TTN_GETDISPINFOW
#Define TTN_POP				TTN_FIRST - 2
#Define TTN_SHOW 			TTN_FIRST - 1
*--
*-- �ؼ���ʽ�ο�
*--
#Define LVS_ICON 				0			&& ��ͼ��
#Define LVS_REPORT 				0x01		&& ��ϸ����
#Define LVS_SMALLICON 			0x02		&& Сͼ��
#Define LVS_LIST 				0x03		&& �б�
#Define LVS_SINGLESEL 			0x04		&& ֻ�ܵ�ѡ
#Define LVS_SHOWSELALWAYS 		0x08		&& ʼ����ʾ��ѡ����(����ʧȥ����ʱ)
#Define LVS_SORTASCENDING 		0x10		&& ����������
#Define LVS_SORTDESCENDING 		0x20		&& ����������
#Define LVS_SHAREIMAGELISTS 	0x40		&& ����ͼ���б�(���ؼ�����ʱͼ���б��Կ���)
#Define LVS_NOLABELWRAP 		0x80		&& ���ֲ�����
#Define LVS_AUTOARRANGE 		0x0100		&& �Զ�����
#Define LVS_EDITLABELS 			0x0200		&& ����༭��ǩ(������Դ���������ļ�����)
#Define LVS_OWNERDATA 			0x1000		&& ָ��һ�������ListView, ���û��Լ�����Item����
#Define LVS_NOSCROLL 			0x2000		&& ��ֹ������(��LVS_LIST��LVS_REPORT��ʽ������)
#Define LVS_ALIGNTOP 			0			&& ���˶���
#Define LVS_ALIGNLEFT 			0x0800		&& �����
#Define LVS_OWNERDRAWFIXED 		0x0400		&& �����Ի�(����ϸ����ģʽ)
#Define LVS_NOCOLUMNHEADER 		0x4000		&& ��ϸ����ģʽʱ����ʾ��ͷ
#Define LVS_NOSORTHEADER 		0x8000		&& ��ͷ��ʾΪƽ��,����Ӧ�����(��ϸ����ģʽ)
* 			��չ�ؼ���ʽ�ο��б�
#Define LVS_EX_GRIDLINES 		0x01		&& ��ʾ�����(����ϸ����ģʽ)
#Define LVS_EX_SUBITEMIMAGES 	0x02		&& ��������Ŀ��ʾͼ��(����ϸ����ģʽ)
#Define LVS_EX_CHECKBOXES 		0x04		&& �ڸ���Ŀǰ����ʾ��ѡ��
#Define LVS_EX_TRACKSELECT 		0x08		&& �����ȵ�ѡ��
#Define LVS_EX_HEADERDRAGDROP 	0x10		&& ����ͨ���Ϸ���ͷ�����°��Ÿ���(��ϸ����ģʽ)
#Define LVS_EX_FULLROWSELECT 	0x20		&& ����ѡ������(����ϸ����ģʽ)
#Define LVS_EX_ONECLICKACTIVATE 0x40		&& ������Ŀ����
#Define LVS_EX_TWOCLICKACTIVATE 0x80		&& ˫����Ŀ����
#Define LVS_EX_FLATSB 			0x0100		&& ƽ�������
#Define LVS_EX_REGIONAL	 		0x0200		&& ��Ŀ��Χֻ����ͼ�겻͸���������������(��ͼ��ģʽ)
#Define LVS_EX_INFOTIP 			0x0400		&& ����ʾ��Ϣ���ڵ���Ϣ֪ͨ������
#Define LVS_EX_UNDERLINEHOT 	0x0800		&& ���ȵ����Ŀ���ִ��»���
#Define LVS_EX_UNDERLINECOLD 	0x1000		&& ���ȵ����Ŀ���ִ��»���
#Define LVS_EX_MULTIWORKAREAS 	0x2000		&& ���������(����û�������Ŀǰ����)
#Define LVS_EX_LABELTIP 		0x4000		&& ���û����ʾ��Ϣ�ı���չ�����صı�ǩ
#Define LVS_EX_BORDERSELECT 	0x8000		&& ��ѡ��߿����ʽ�������
#Define LVS_EX_DOUBLEBUFFER 	0x010000 	&& ˫����(WinXP����)
#Define LVS_EX_HIDELABELS		0x020000 	&& ���ر�ǩ(WinXP����)
#Define LVS_EX_SINGLEROW 		0x040000 	&& ��ʾ����(WinXP����)
#Define LVS_EX_SNAPTOGRID 		0x080000	&& ͼ���Զ����뵽���(WinXP����)
* LVS_EX_SIMPLESELECT 	&& (WinXP����)


*--
*--		idTimer to SetTimer
*-- 
#Define IDT_TIMER		101


*--
*--		nIndex to SetWindowLong and GetWindowLong 
*-- 
#Define GWL_WNDPROC 	-4		&& ���ڹ���
#Define GWL_HINSTANCE 	-6
#Define GWL_HWNDPARENT 	-8
#Define GWL_ID 			-12
#Define GWL_STYLE 		-16		&& ���ڵ���ʽ
#Define GWL_EXSTYLE 	-20		&& ������չ��ʽ
#Define GWL_USERDATA 	-21
* The following values are also available when the hwnd parameter identifies a dialog box:
#Define DWL_MSGRESULT 	0
#Define DWL_DLGPROC 	4
#Define DWL_USER 		8


*--
*-- 	fuLoad to LoadImage
*--
#Define LR_DEFAULTCOLOR			0x00	&& �Գ��淽ʽ����ͼ��
#Define LR_MONOCHROME			0x01	&& ��ͼ��ת���ɵ�ɫ
#Define LR_COLOR				0x02
#Define LR_COPYRETURNORG 		0x04
#Define LR_COPYDELETEORG 		0x08
#Define LR_LOADFROMFILE			0x10	&& �����Ҫ���ⲿ�ļ��е���ͼ��
#Define LR_LOADTRANSPARENT		0x20	&& ��ͼ���е�һ������������������ض���ϵͳ�滻
#Define LR_DEFAULTSIZE			0x40	&& ��� n1 �� n2 Ϊ�㣬��ʹ����ϵͳ�����ͼ��Ĭ�ϴ�С
#Define LR_VGACOLOR 			0x80	&& ʹ�� VGA ���ɫ
#Define LR_LOADMAP3DCOLORS		0x1000	&& ��ͼ���е���ҡ��ҡ��Լ�ǳ�����ض��滻��COLOR_3DSHADOW,COLOR_3DFACE,COLOR_3DLIGHT�ĵ�ǰ����
#Define LR_CREATEDIBSECTION 	0x2000	&& ���uType��IMAGE_BITMAP����������һ������������ʾ�豸��λͼ
#Define LR_COPYFROMRESOURCE 	0x4000	
#Define LR_SHARED				0x8000	&& ��ͼ����Ϊһ��������Դ���롣��NT 4.0��װ�ع�����ԴʱҪ�õ��������
* LR_LOADREALSIZE 		&& ����ͼ��������Ŵ�������n1��n2������ 

*--
*-- 	uType to LoadImage
*--
#Define IMAGE_BITMAP	0
#Define IMAGE_ICON		1
#Define IMAGE_CURSOR	2

*--
*-- 	DwRop to BitBlt and StretchBlt
*--
#Define BLACKNESS		0x42
#Define DSTINVERT		0x550009	
#Define MERGECOPY		0xC000CA
#Define MERGEPAINT		0xBB0226		
#Define NOTSRCCOPY		0x330008
#Define NOTSRCERASE		0x1100A6
#Define PATCOPY			0xF00021
#Define PATINVERT		0x5A0049
#Define PATPAINT		0xFB0A09
#Define SRCAND			0x8800C6
#Define SRCCOPY			0xCC0020
#Define SRCERASE		0x440328
#Define SRCINVERT		0x660046
#Define SRCPAINT		0xEE0086
#Define WHITENESS		0xFF0062


*--
*-- 	CtlType to DRAWITEMSTRUCT
*-- 
#Define ODT_BUTTON		4
#Define ODT_COMBOBOX	3
#Define ODT_LISTBOX		2
#Define ODT_LISTVIEW	102
#Define ODT_MENU		1
#Define ODT_STATIC		5
#Define ODT_TAB			101

*--
*-- 	itemAction to DRAWITEMSTRUCT
*-- 
#Define ODA_DRAWENTIRE		1
#Define ODA_SELECT			2
#Define ODA_FOCUS			4

*--
*-- 	itemState to DRAWITEMSTRUCT
*-- 
#Define ODS_SELECTED		0x01	&& �˵�����ѡ��
#Define ODS_GRAYED			0x02	&& �˵��ǻ�ɫ��(ֻ���ڲ˵�)
#Define ODS_DISABLED		0x04	&& ����
#Define ODS_CHECKED			0x08	&& �˵�����ѡ��
#Define ODS_FOCUS			0x10	&& ��ʾ�ؼ���Ҫ���뽹��
#Define ODS_DEFAULT			0x20	&& ��ǰ�ؼ�����Ĭ��״̬
#Define ODS_HOTLIGHT		0x40	&& ��ʾ���ָ��λ�ڿؼ�֮��ʱ�ؼ�����ʾ������ɫ��֧��Windows 98/Me, Windows 2000/XP����
#Define ODS_INACTIVE		0x80		
#Define ODS_NOACCEL			0x100	
#Define ODS_NOFOCUSRECT		0x200	
#Define ODS_COMBOBOXEDIT	0x1000	&& ���Ի���Ͽ�ؼ���ֻ����ѡ������

*--
*-- 	iBkMode to SetBkMode
*--
#Define TRANSPARENT			1	&& ͸������, �������������
#Define OPAQUE				2	&& �õ�ǰ�ı���ɫ������߻��ʡ���Ӱˢ���Լ��ַ��Ŀ�϶
#Define NEWTRANSPARENT 		3	&& ������ɫ�Ĳ˵��ϻ�͸������

*--
*-- 	uFlags to LocalAlloc
*--
#Define LMEM_FIXED			0x00
#Define LMEM_MOVEABLE		0x02
#Define LMEM_NOCOMPACT		0x10
#Define LMEM_NODISCARD		0x20
#Define LMEM_ZEROINIT		0x40
#Define LMEM_MODIFY			0x80
#Define LMEM_DISCARDABLE	0x0F00
#Define LMEM_VALID_FLAGS	0x0F72
#Define LMEM_INVALID_HANDLE	0x8000
#Define NONZEROLHND			LMEM_MOVEABLE
#Define NONZEROLPTR			LMEM_FIXED
#Define LHND  				LMEM_MOVEABLE + LMEM_ZEROINIT
#Define LPTR				LMEM_FIXED + LMEM_ZEROINIT

*--
*-- 	diFlags to DrawIconEx
*--
#Define DI_MASK 		0x01	&& ��ͼʱʹ��ͼ���MASK���� (�絥��ʹ��, �ɻ��ͼ�����ģ)
#Define DI_IMAGE		0x02	&& ��ͼʱʹ��ͼ���XOR���� (��ͼ��û��͸������)
#Define DI_COMPAT		0x04	&& ϵͳ����ȱʡͼ��������û������ͼ�����ͼ��͹��
#Define DI_DEFAULTSIZE	0x08 	&& ���CXWidth��CyWidth��������Ϊ�㣬����ϵͳָ����ͼ��͹��ĵĹ��ƿ�Ⱥ͸� �Ȼ���ͼ��͹�ꣻ������δ��ָ����cxWidth��cyWith������Ϊ��꣬����ʹ����Դʵ�ʴ�С
#Define DI_NORMAL 		DI_MASK + DI_IMAGE       && �ó��淽ʽ��ͼ (�ϲ� DI_IMAGE �� DI_MASK)

*--
*--		uFlags to AppendMenu
*--
#Define MF_BITMAP			0x04		&& �˵���Ŀ��һ��λͼ. һ������˵�, ���λͼ�;��Բ���ɾ��
#Define MF_CHECKED			0x08		&& ���ָ���Ĳ˵���Ŀ
#Define MF_DISABLED			0x02		&& ��ָֹ���Ĳ˵���Ŀ
#Define MF_ENABLED			0x00		&& ����ָ���Ĳ˵���Ŀ
#Define MF_GRAYED			0x01		&& ��ָֹ���Ĳ˵���Ŀ, ����ǳ��ɫ������
#Define MF_MENUBARBREAK		0x20		&& �ڵ���ʽ�˵���, ��ָ������Ŀ������һ������, ����һ����ֱ�߷ָ���ͬ����
#Define MF_MENUBREAK		0x40		&& �ڵ���ʽ�˵���, ��ָ������Ŀ������һ������. �ڶ����˵���, ����Ŀ���õ�һ������
#Define MF_OWNERDRAW		0x0100		&& ����һ��������ͼ�˵�, �ɳ�������Ʋ˵�
#Define MF_POPUP			0x0010		&& ��һ������ʽ�˵�����ָ������Ŀ, �����ڴ����Ӳ˵�������ʽ�˵�
#Define MF_SEPARATOR		0x0800		&& ��ָ������Ŀ����ʾһ���ָ���
#Define MF_STRING			0x00		&& ��ָ������Ŀ������һ���ִ�
#Define MF_UNCHECKED		0x08		&& ���ָ������Ŀ

#Define MF_BYCOMMAND		0x0000		&& �ɲ˵�������IDָ��
#Define MF_BYPOSITION		0x0400		&& ����Ŀ�ڲ˵��е�λ�þ��� (�����˵��еĵ�һ����Ŀ)
#Define MF_DEFAULT 			0x1000
#Define MF_RIGHTJUSTIFY 	0x4000
#Define MF_HELP 			0x4000
#Define MF_HILITE 			0x80
#Define MF_UNHILITE			0x00
#Define MF_USECHECKBITMAPS	0x0200
*** ���б�ǲ���һ��ʹ��
*** MF_DISABLED, MF_ENABLED, and MF_GRAYED 
*** MF_BITMAP, MF_STRING, and MF_OWNERDRAW 
*** MF_MENUBARBREAK and MF_MENUBREAK 
*** MF_CHECKED and MF_UNCHECKED 

*--
*-- 	fMask To InsertMenuItem			MENUITEMINFO ����Щ��Ա��Ч
*--
#Define MIIM_STATE		0x01
#Define MIIM_ID			0x02
#Define MIIM_SUBMENU	0x04
#Define MIIM_CHECKMARKS	0x08
#Define MIIM_TYPE		0x10
#Define MIIM_DATA		0x20
#Define MIIM_STRING		0x40
#Define MIIM_BITMAP		0x80
#Define MIIM_FTYPE		0x0100

*--
*-- 	fType To InsertMenuItem 		MENUITEMINFO �в˵�������
*--
#Define MFT_STRING			0x00
#Define MFT_BITMAP			0x04
#Define MFT_MENUBARBREAK	0x20
#Define MFT_MENUBREAK		0x40
#Define MFT_OWNERDRAW		0x0100
#Define MFT_SEPARATOR		0x0800

*--
*-- 	fState to InsertMenuItem		MENUITEMINFO �в˵���״̬
*--
#Define MFS_ENABLED			0x00
#Define MFS_UNCHECKED		0x00
#Define MFS_UNHILITE		0x00
#Define MFS_GRAYED			0x01
#Define MFS_DISABLED		0x02
#Define MFS_CHECKED			0x08
#Define MFS_HILITE			0x80

*--
*-- 	nFormat to DrawText
*--
#Define DT_TOP 				0x00		&& ��ֱ������ (������ʱ��Ч)
#Define DT_LEFT				0x00		&& ˮƽ�����
#Define DT_CENTER			0x01		&& ˮƽ���ж���
#Define DT_RIGHT			0x02		&& ˮƽ�Ҷ���
#Define DT_VCENTER			0x04		&& ��ֱ���ж��� (������ʱ��Ч)
#Define DT_BOTTOM			0x08		&& ��ֱ�¶��� (������ʱ��Ч)
#Define DT_WORDBREAK		0x10		&& �����Զ�����. ����SetTextAlign����������TA_UPDATECP��־, �������������Ч.
#Define DT_SINGLELINE		0x20		&& ����
#Define DT_EXPANDTABS 		0x40		&& ������ֵ�ʱ��, ���Ʊ�վ������չ. Ĭ�ϵ��Ʊ�վ�����8���ַ�. ����, ����DT_TABSTOP��־�ı������趨.
#Define DT_TABSTOP			0x80		&& ָ���µ��Ʊ�վ���, ������������ĸ� 8 λ
#Define DT_NOCLIP			0x0100		&& �������ʱ�����е�ָ���ľ���
#Define DT_EXTERNALLEADING 	0x0200		&& �����ı��и߶ȵ�ʱ��, ʹ�õ�ǰ������ⲿ�������
#Define DT_CALCRECT			0x0400		&& ���л�ͼʱ���εĵױ߸�����Ҫ������չ, �Ա�������������; ���л�ͼʱ, ��չ���ε��Ҳ�, ���������, ��lpRect����ָ���ľ��λ�������������ֵ
#Define DT_NOPREFIX 		0x0800		&& ��ֹ & Ϊ���ʼ�
#Define DT_INTERNAL			0x1000		


*--
*--		uFlags to TrackPopupMenu and TrackPopupMenuEx
*--
#Define TPM_LEFTALIGN		0x00	
#Define TPM_CENTERALIGN		0x04	
#Define TPM_RIGHTALIGN		0x08	&& Positions the pop-up menu so that its right side is aligned with the coordinate specified by the x parameter
*		New flags for the "TrackPopupMenuEx" version
#Define TPM_TOPALIGN		0x00
#Define TPM_BOTTOMALIGN		0x20
#Define TPM_HORIZONTAL		0x00
#Define TPM_HORNEGANIMATION 0x0800
#Define TPM_HORPOSANIMATION 0x0400
#Define TPM_NOANIMATION 	0x4000
#Define TPM_NONOTIFY 		0x80
#Define TPM_RECURSE			0x01
#Define TPM_VCENTERALIGN 	0x10
#Define TPM_VERNEGANIMATION 0x2000
#Define TPM_VERPOSANIMATION 0x1000
#Define TPM_VERTICAL 		0x40

*		Value				Meaning
#Define TPM_LEFTBUTTON		0x00
#Define TPM_RIGHTBUTTON		0x02
#Define TPM_RETURNCMD		0x0100

*--
*--  	nIndex to GetSysColor
*--
#Define COLOR_SCROLLBAR 				0	&& ������
#Define COLOR_BACKGROUND 				1	&& Windows ����
#Define COLOR_ACTIVECAPTION 			2	&& ����ڵı���
#Define COLOR_INACTIVECAPTION 			3	&& ������ڵı���
#Define COLOR_MENU						4	&& �˵�
#Define COLOR_WINDOW					5	&& ���ڱ���
#Define COLOR_WINDOWFRAME  				6	&& ����
#Define COLOR_MENUTEXT					7	&& �˵�����
#Define COLOR_WINDOWTEXT 				8	&& ��������
#Define COLOR_CAPTIONTEXT 				9	&& ���ڱ����е�����
#Define COLOR_ACTIVEBORDER 				10	&& ����ڵı߿�
#Define COLOR_INACTIVEBORDER 			11	&& ������ڵı߿�
#Define COLOR_APPWORKSPACE 				12	&& MDI����ı���
#Define COLOR_HIGHLIGHT					13	&& ѡ�������
#Define COLOR_HIGHLIGHTTEXT				14	&& ѡ����������
#Define COLOR_BTNFACE 					15	&& ��ť
#Define COLOR_BTNSHADOW					16	&& ��ť��3D��Ӱ
#Define COLOR_GRAYTEXT 					17	&& ��ɫ����; ��ʹ���˶���������Ϊ��
#Define COLOR_BTNTEXT 					18	&& ��ť����
#Define COLOR_INACTIVECAPTIONTEXT 		19	&& ������ڵ�����
#Define COLOR_BTNHIGHLIGHT				20	&& ��ť��3D������
#Define COLOR_3DDKSHADOW				21
#Define COLOR_GRADIENTACTIVECAPTION		27
#Define COLOR_GRADIENTINACTIVECAPTION	28
#Define COLOR_MENUHILIGHT				29
#Define COLOR_MENUBAR					30

*--
*-- 	fuFlags to DrawState
*--
*		type 
#Define DST_COMPLEX		0x00	&& ��ͼ���� lpDrawStateProc ����ָ���Ļص������ڼ�ִ��, lParam �� wParam �ᴫ�ݸ��ص��¼�.
#Define DST_TEXT		0x01	&& lParam�������ֵĵ�ַ(��ʹ��һ���ִ�����), wParam �����ִ��ĳ���.
#Define DST_PREFIXTEXT	0x02	&& �� DST_TEXT ����, ֻ�� & �ַ�ָ��Ϊ�¸��ַ������»���
#Define DST_ICON		0x03	&& lParam ����ͼ��ľ��
#Define DST_BITMAP		0x04	&& lParam ����λͼ�ľ��
*		state
#Define DSS_NORMAL		0x00	&& ��ͨͼ��
#Define DSS_UNION		0x10	&& ͼ����ж�������
#Define DSS_DISABLED	0x20	&& ͼ����и���Ч��
#Define DSS_MONO		0x80	&& �� hBrush ���ͼ��
#Define DSS_RIGHT		0x8000	&& ���κ�����

*--
*-- 	edge to DrawEdge
*--
#Define BDR_RAISEDOUTER  	0x01	&& ���͹
#DEfine BDR_SUNKENOUTER  	0x02	&& ��㰼
#Define BDR_RAISEDINNER  	0x04	&& �ڲ�͹
#Define BDR_SUNKENINNER  	0x08	&& �ڲ㰼
#Define BDR_OUTER 			0x03
#Define BDR_RAISED			0x05
#Define BDR_SUNKEN 			0x0A
#Define BDR_INNER 			0x0C
#Define EDGE_BUMP  			BitOr(BDR_RAISEDOUTER, BDR_SUNKENINNER) 
#Define EDGE_ETCHED  		BitOr(BDR_SUNKENOUTER, BDR_RAISEDINNER)
#Define EDGE_RAISED  		BitOr(BDR_RAISEDOUTER, BDR_RAISEDINNER)
#Define EDGE_SUNKEN			BitOr(BDR_SUNKENOUTER, BDR_SUNKENINNER)

*--
*-- 	grfFlags to DrawEdge
*--
#Define BF_LEFT				0x01	&& ���Ե
#Define BF_TOP				0x02	&& �ϱ�Ե
#Define BF_RIGHT			0x04	&& �ұ�Ե
#Define BF_BOTTOM			0x08	&& �±�Ե
#Define BF_DIAGONAL 		0x10 	&& �Խ���
#Define BF_MIDDLE			0x800	&& �������ڲ�
#Define BF_SOFT				0x1000	&& MSDN: Soft buttons instead of tiles.
#Define BF_ADJUST			0x2000	&& ��������, Ԥ���ͻ���
#Define BF_FLAT				0x4000 	&& ƽ���Ե
#Define BF_MONO  			0x8000	&& һά��Ե
#Define BF_TOPLEFT 			BitOr(BF_TOP, BF_LEFT)
#Define BF_TOPRIGHT 		BitOr(BF_TOP, BF_RIGHT)
#Define BF_BOTTOMLEFT 		BitOr(BF_BOTTOM, BF_LEFT)
#Define BF_BOTTOMRIGHT		BitOr(BF_BOTTOM, BF_RIGHT)
#Define BF_RECT 			BitOr(BF_LEFT, BitOr(BF_TOP, BitOr(BF_RIGHT, BF_BOTTOM)))
#Define BF_DIAGONAL_ENDTOPRIGHT 	BitOr(BF_DIAGONAL, BitOr(BF_TOP, BF_RIGHT))
#Define BF_DIAGONAL_ENDTOPLEFT 		BitOr(BF_DIAGONAL, BitOr(BF_TOP, BF_LEFT))
#Define BF_DIAGONAL_ENDBOTTOMLEFT 	BitOr(BF_DIAGONAL, BitOr(BF_BOTTOM, BF_LEFT))
#Define BF_DIAGONAL_ENDBOTTOMRIGHT 	BitOr((BF_DIAGONAL, BitOr(BF_BOTTOM, BF_RIGHT))


*--
*-- 	fnPenStyle to CreatePen
*--
#Define PS_SOLID 		0	&& ʵ��                         _______
#Define PS_DASH 		1 	&& ���� (nWidth������1)         -------
#Define PS_DOT 			2 	&& ���� (nWidth������1)         .......
#Define PS_DASHDOT 		3 	&& �㻮�� (nWidth������1)       _._._._
#Define PS_DASHDOTDOT 	4	&& ��-��-���� (nWidth������1)   _.._.._
#Define PS_NULL			5	&& ����
#Define PS_INSIDEFRAME  6	&& ��Χ����(nWidth������1)


*--
*-- 	nIndex to GetSystemMetrics
*--
#Define SM_CXSCREEN 			0			&& ��Ļ���
#Define SM_CYSCREEN 			1			&& ��Ļ�߶�
#Define SM_CXVSCROLL 			2			&& ��ֱ�������еļ�ͷ��ť�Ĵ�С
#Define SM_CYHSCROLL 			3			&& ˮƽ�������ϵļ�ͷ��С
#Define SM_CYCAPTION 			4			&& ���ڱ���ĸ߶�
#Define SM_CXBORDER 			5			&& �ߴ粻�ɱ�߿�Ŀ��
#Define SM_CYBORDER 			6			&& �ߴ粻�ɱ�߿�ĸ߶�
#Define SM_CXDLGFRAME 			7			&& �Ի���߿�Ŀ��
#Define SM_CYDLGFRAME 			8			&& �Ի���߿�ĸ߶�
#Define SM_CYVTHUMB 			9			&& ��ֱ�������Ϲ�����ĸ߶�
#Define SM_CXHTHUMB 			10			&& ˮƽ�������Ϲ�����Ĵ�С
#Define SM_CXICON 				11			&& ��׼ͼ��Ŀ��
#Define SM_CYICON 				12			&& ��׼ͼ��ĸ߶�
#Define SM_CXCURSOR 			13			&& ��׼���ָ����
#Define SM_CYCURSOR 			14			&& ��׼���ָ��߶�
#Define SM_CYMENU 				15			&& �˵��߶�
#Define SM_CXFULLSCREEN 		16			&& ��󻯴��ڿͻ����Ŀ��
#Define SM_CYFULLSCREEN 		17			&& ��󻯴��ڿͻ����ĸ߶�
#Define SM_CYKANJIWINDOW 		18			&& Kanji���ڵĴ�С��Height Of Kanji window��
#Define SM_MOUSEPRESENT 		19			&& �Ƿ�װ�����
#Define SM_CYVSCROLL 			20			&& ��ֱ�������еļ�ͷ��ť�Ĵ�С
#Define SM_CXHSCROLL 			21			&& ˮƽ�������еļ�ͷ��ť�Ĵ�С
#Define SM_DEBUG 				22			&& �� windows �ĵ��԰��������У���Ϊ .T.
#Define SM_SWAPBUTTON 			23			&& �Ƿ񽻻���������Ҽ�
#Define SM_RESERVED1 			24
#Define SM_RESERVED2 			25
#Define SM_RESERVED3 			26
#Define SM_RESERVED4 			27
#Define SM_CXMIN 				28			&& ������С���
#Define SM_CYMIN 				29			&& ������С�߶�
#Define SM_CXSIZE 				30			&& ������λͼ�Ŀ��
#Define SM_CYSIZE 				31			&& ������λͼ�ĸ߶�
#Define SM_CXFRAME 				32			&& �ߴ�ɱ�߿�Ŀ��
#Define SM_CYFRAME 				33			&& �ߴ�ɱ�߿�ĸ߶�
#Define SM_CXMINTRACK 			34			&& ���ڵ���С�켣��� 
#Define SM_CYMINTRACK 			35			&& ���ڵ���С�켣�߶� 
#Define SM_CXDOUBLECLK 			36			&& ˫������� X λ��
#Define SM_CYDOUBLECLK 			37			&& ˫������� Y λ��
#Define SM_CXICONSPACING 		38			&& ����ͼ��֮��ļ�����
#Define SM_CYICONSPACING 		39			&& ����ͼ��֮��ļ���߶�
#Define SM_MENUDROPALIGNMENT 	40			&& �絯��ʽ�˵�����˵�����Ŀ����࣬��Ϊ 0
#Define SM_PENWINDOWS 			41			&& ��װ����֧�ֱʴ��ڵ�DLL�����ʾ�ʴ��ڵľ��
#Define SM_DBCSENABLED 			42			&& �Ƿ�֧��˫�ֽ�
#Define SM_CMOUSEBUTTONS 		43
#Define SM_CMETRICS 			44
#Define SM_CXEDGE  				45
#Define SM_CYEDGE  				46
#Define SM_CXMINSPACING  		47
#Define SM_CYMINSPACING  		48
#Define SM_CXSMICON  			49			&& Сͼ���ȣ�
#Define SM_CYSMICON  			50			&& Сͼ��߶ȣ�
#Define SM_CYSMCAPTION  		51
#Define SM_CXSMSIZE  			52			&& С���ⰴť�Ŀ��
#Define SM_CYSMSIZE  			53			&& С���ⰴť�ĸ߶�
#Define SM_CXMENUSIZE  			54
#Define SM_CYMENUSIZE  			55
#Define SM_ARRANGE  			56			&& windows ���������С�����ڵ�һ����־���ο�api32.txt�е� ARW ���� 
#Define SM_CXMINIMIZED  		57
#Define SM_CYMINIMIZED  		58
#Define SM_CXMAXTRACK  			59
#Define SM_CYMAXTRACK  			60
#Define SM_CXMAXIMIZED  		61
#Define SM_CYMAXIMIZED  		62
#Define SM_NETWORK  			63
* #Define  
* #Define  
* #Define  
#Define SM_CLEANBOOT  			67		&& ������ʽ: 0 �������� 1 ��ȫģʽ���� 2 ���簲ȫģʽ����
#Define SM_CXDRAG  				68		&& �϶�ʱ X ��ƫ��
#Define SM_CYDRAG  				69		&& �϶�ʱ Y ��ƫ��
#Define SM_SHOWSOUNDS  			70
#Define SM_CXMENUCHECK  		71		&& ������Ϊ��λ����Ĳ˵�ѡ�б��λͼ�� X �ߴ�
#Define SM_CYMENUCHECK  		72 		&& ������Ϊ��λ����Ĳ˵�ѡ�б��λͼ�� Y �ߴ�
#Define SM_SLOWMACHINE  		73
#Define SM_MIDEASTENABLED  		74
#Define SM_MOUSEWHEELPRESENT  	75
#Define SM_XVIRTUALSCREEN  		76
#Define SM_YVIRTUALSCREEN  		77
#Define SM_CXVIRTUALSCREEN  	78
#Define SM_CYVIRTUALSCREEN  	79
#Define SM_CMONITORS  			80
#Define SM_SAMEDISPLAYFORMAT  	81
#Define SM_IMMENABLED  			82
#Define SM_REMOTESESSION  		0x1000
#Define SM_CXSIZEFRAME 			SM_CXFRAME
#Define SM_CYSIZEFRAME 			SM_CYFRAME
#Define SM_CXFIXEDFRAME 		SM_CXDLGFRAME
#Define SM_CYFIXEDFRAME 		SM_CYDLGFRAME
#Define SM_GETCURFOCUSA  		WM_USER + 1003
#Define SM_GETCURFOCUSW  		WM_USER + 1004
#Define SM_GETOPTIONS  			WM_USER + 1005
#Define SM_GETSELCOUNT  		WM_USER + 1000
#Define SM_GETSERVERSELA  		WM_USER + 1001
#Define SM_GETSERVERSELW  		WM_USER + 1002
* SM_SECURE 		�Ƿ�װ�˰�ȫ�����ܣ�����
* SM_SHOWSOUNDS 	ǿ���Ӿ���ʾ��������
* SM_SLOWMACHINE 	ϵͳ�ٶ�̫����������������



*--
*-- 	uiAction to SystemParametersInfo
*--
#Define SPI_GETBEEP					1
#Define SPI_SETBEEP					2
#Define SPI_GETMOUSE				3
#Define SPI_SETMOUSE				4
#Define SPI_GETBORDER				5
#Define SPI_SETBORDER				6
#Define SPI_GETKEYBOARDSPEED		10
#Define SPI_SETKEYBOARDSPEED		11
#Define SPI_LANGDRIVER				12
#Define SPI_ICONHORIZONTALSPACING	13
#Define SPI_GETSCREENSAVETIMEOUT	14
#Define SPI_SETSCREENSAVETIMEOUT	15
#Define SPI_GETSCREENSAVEACTIVE		16
#Define SPI_SETSCREENSAVEACTIVE		17
#Define SPI_GETGRIDGRANULARITY		18
#Define SPI_SETGRIDGRANULARITY		19
#Define SPI_SETDESKWALLPAPER		20
#Define SPI_SETDESKPATTERN			21
#Define SPI_GETKEYBOARDDELAY		22
#Define SPI_SETKEYBOARDDELAY		23
#Define SPI_ICONVERTICALSPACING		24
#Define SPI_GETICONTITLEWRAP		25
#Define SPI_SETICONTITLEWRAP		26
#Define SPI_GETMENUDROPALIGNMENT	27
#Define SPI_SETMENUDROPALIGNMENT	28
#Define SPI_SETDOUBLECLKWIDTH		29
#Define SPI_SETDOUBLECLKHEIGHT		30
#Define SPI_GETICONTITLELOGFONT		31
#Define SPI_SETDOUBLECLICKTIME		32
#Define SPI_SETMOUSEBUTTONSWAP		33
#Define SPI_SETICONTITLELOGFONT		34
#Define SPI_GETFASTTASKSWITCH		5
#Define SPI_SETFASTTASKSWITCH		36
#Define SPI_SETDRAGFULLWINDOWS		37
#Define SPI_GETDRAGFULLWINDOWS		38
#Define SPI_GETNONCLIENTMETRICS		41
#Define SPI_SETNONCLIENTMETRICS		42
#Define SPI_GETMINIMIZEDMETRICS		43
#Define SPI_SETMINIMIZEDMETRICS		44
#Define SPI_GETICONMETRICS			45
#Define SPI_SETICONMETRICS			46
#Define SPI_SETWORKAREA				47
#Define SPI_GETWORKAREA				48
#Define SPI_SETPENWINDOWS			49
#Define SPI_GETFILTERKEYS			50
#Define SPI_SETFILTERKEYS			51
#Define SPI_GETTOGGLEKEYS			52
#Define SPI_SETTOGGLEKEYS			53
#Define SPI_GETMOUSEKEYS			54
#Define SPI_SETMOUSEKEYS			55
#Define SPI_GETSHOWSOUNDS			56
#Define SPI_SETSHOWSOUNDS			57
#Define SPI_GETSTICKYKEYS			58
#Define SPI_SETSTICKYKEYS			59
#Define SPI_GETACCESSTIMEOUT		60
#Define SPI_SETACCESSTIMEOUT		61
#Define SPI_GETSERIALKEYS			62
#Define SPI_SETSERIALKEYS			63
#Define SPI_GETSOUNDSENTRY			64
#Define SPI_SETSOUNDSENTRY			65
#Define SPI_GETHIGHCONTRAST			66
#Define SPI_SETHIGHCONTRAST			67
#Define SPI_GETKEYBOARDPREF			68
#Define SPI_SETKEYBOARDPREF			69
#Define SPI_GETSCREENREADER			70
#Define SPI_SETSCREENREADER			71
#Define SPI_GETANIMATION			72
#Define SPI_SETANIMATION			73
#Define SPI_GETFONTSMOOTHING		74
#Define SPI_SETFONTSMOOTHING		75
#Define SPI_SETDRAGWIDTH			76
#Define SPI_SETDRAGHEIGHT			77
#Define SPI_SETHANDHELD				78
#Define SPI_GETLOWPOWERTIMEOUT		79
#Define SPI_GETPOWEROFFTIMEOUT		80
#Define SPI_SETLOWPOWERTIMEOUT		81
#Define SPI_SETPOWEROFFTIMEOUT		82
#Define SPI_GETLOWPOWERACTIVE		83
#Define SPI_GETPOWEROFFACTIVE		84
#Define SPI_SETLOWPOWERACTIVE		85
#Define SPI_SETPOWEROFFACTIVE		86
#Define SPI_SETCURSORS				87
#Define SPI_SETICONS				88
#Define SPI_GETDEFAULTINPUTLANG		89
#Define SPI_SETDEFAULTINPUTLANG		90
#Define SPI_SETLANGTOGGLE			91
#Define SPI_GETWINDOWSEXTENSION		92
#Define SPI_SETMOUSETRAILS			93
#Define SPI_GETMOUSETRAILS			94
#Define SPI_SCREENSAVERRUNNING		97
#Define SPI_GETMENUSHOWDELAY		106
#Define SPI_GETMENUFADE				0x1012
#Define SPI_GETDROPSHADOW			0x1024

*--
*-- 	fMode to SetTextAlign 
*--
#Define TA_NOUPDATECP	0
#Define TA_UPDATECP		1
#Define TA_TOP			0			&& The reference point will be on the top edge of the bounding rectangle.
#Define TA_LEFT			0			&& The reference point will be on the left edge of the bounding rectangle.
#Define TA_RIGHT		2			&& The reference point will be on the right edge of the bounding rectangle.
#Define TA_CENTER		6			&& The reference point will be aligned horizontally with the center of the bounding rectangle.
#Define TA_BOTTOM		8			&& The reference point will be on the bottom edge of the bounding rectangle.
#Define TA_BASELINE		24			&& The reference point will be on the base line of the text.
#Define VTA_BASELINE	TA_BASELINE && The reference point will be on the base line of the text.
#Define VTA_RIGHT		TA_TOP
#Define VTA_LEFT 		TA_BOTTOM
#Define VTA_CENTER		TA_CENTER	&& The reference point will be aligned vertically with the center of the bounding rectangle.
#Define VTA_BOTTOM  	TA_RIGHT
#Define VTA_TOP 		TA_LEFT
*** The default values are TA_LEFT, TA_TOP, and TA_NOUPDATECP. 


*--
*--		nIndex to GetDeviceCaps
*--
#Define DRIVERVERSION 	0 	&& The device driver version.
#Define TECHNOLOGY 		2	&& Device technology. It can be any one of the
		#Define DT_PLOTTER		0 	&& Vector plotter
		#Define DT_RASDISPLAY	1	&& Raster display
		#Define DT_RASPRINTER	2	&& Raster printer
		#Define DT_RASCAMERA	3	&& Raster camera
		#Define DT_CHARSTREAM	4	&& Character stream
		#Define DT_METAFILE		5	&& Metafile
		#Define DT_DISPFILE		6	&& Display file
#Define HORZSIZE 		4	&& ������Ļ��ȣ����׵�λ
#Define VERTSIZE		6 	&& ������Ļ�߶ȣ����׵�λ
#Define HORZRES 		8	&& Width, in pixels, of the screen.
#Define VERTRES 		10	&& Height, in raster lines, of the screen.
#Define LOGPIXELSX		88	&& ÿ�߼�Ӣ���Ӧ��ˮƽ���ص���
#Define LOGPIXELSY		90 	&& ÿ�߼�Ӣ���Ӧ�Ĵ�ֱ���ص���
#Define BITSPIXEL 		12	&& Number of adjacent color bits for each pixel.
#Define PLANES 			14	&& Number of color planes.
#Define NUMBRUSHES 		16	&& Number of device-specific brushes
#Define NUMPENS 		18	&& Number of device-specific pens
#Define NUMFONTS 		22	&& Number of device-specific fonts.
#Define NUMCOLORS 		24	&& Number of entries in the device's color table.
#Define ASPECTX 		40	&& Relative width of a device pixel used for line drawing.
#Define ASPECTY 		42	&& Relative height of a device pixel used for line drawing.
#Define ASPECTXY 		44	&& Diagonal width of the device pixel used for line drawing.
#Define PDEVICESIZE		26 	&& Reserved
#Define CLIPCAPS 		36
#Define SIZEPALETTE 	104	
#Define NUMRESERVED 	106	
#Define COLORRES 		108	
#Define PHYSICALWIDTH 	110	&& For printing devices: the physical width, in device units.
#Define PHYSICALHEIGHT 	111	&& For printing devices: the physical height, in device units.
#Define PHYSICALOFFSETX 112	&& For printing devices: the physical printable area horizontal margin.
#Define PHYSICALOFFSETY 113	&& For printing devices: the physical printable area vertical margin. 
#Define SCALINGFACTORX 	114	&& For printing devices: the scaling factor along the horizontal axis.
#Define SCALINGFACTORY 	115	&& For printing devices: the scaling factor along the vertical axis.
* VREFRESH			Windows NT only
* DESKTOPHORZRES	Windows NT only
* DESKTOPVERTRES	Windows NT only
* BLTALIGNMENT		Windows NT only
#Define RASTERCAPS 		38	&& Value that indicates the raster capabilities of the device, as shown in the following table
		* 		Capability	Meaning
		#Define RC_BANDING		2 		&& Requires banding support.
		#Define RC_BITBLT		1		&& Capable of transferring bitmaps.
		#Define RC_BITMAP64		8		&& Capable of supporting bitmaps larger than 64K.
		#Define RC_DI_BITMAP	0x80	&& Capable of supporting the SetDIBits and GetDIBits functions.
		#Define RC_DIBTODEV		0x0200	&& Capable of supporting the SetDIBitsToDevice function.
		#Define RC_FLOODFILL	0x1000	&& Capable of performing flood fills.
		#Define RC_GDI20_OUTPUT	0x10	&& Capable of supporting features of Windows 2.0.
		#Define RC_PALETTE		0x0100	&& Specifies a palette-based device.
		#Define RC_SCALING		0x04	&& Capable of scaling.
		#Define RC_STRETCHBLT	0x0800	&& Capable of performing the StretchBlt function.
		#Define RC_STRETCHDIB	0x2000 	&& Capable of performing the StretchDIBits function.
#Define CURVECAPS 		28	&& Value that indicates the curve capabilities of the device, as shown in the following table:
		* 		Value		Meaning
		#Define CC_NONE			0	&& Device does not support curves.
		#Define CC_CIRCLES		1	&& Device can draw circles.
		#Define CC_PIE			2	&& Device can draw pie wedges.
		#Define CC_CHORD		4	&& Device can draw chord arcs.
		#Define CC_ELLIPSES		8	&& Device can draw ellipses.
		#Define CC_WIDE			16 	&& Device can draw wide borders.
		#Define CC_STYLED		32	&& Device can draw styled borders.
		#Define CC_WIDESTYLED 	64 	&& Device can draw borders that are wide and styled.
		#Define CC_INTERIORS 	128	&& Device can draw interiors.
		#Define CC_ROUNDRECT	256	&& Device can draw rounded rectangles.
#Define LINECAPS 		30	&& Value that indicates the line capabilities of the device, as shown in the following table:
		* 		Value		Meaning
		#Define LC_NONE			0	&& Device does not support lines.
		#Define LC_POLYLINE		2	&& Device can draw a polyline.
		#Define LC_MARKER		4	&& Device can draw a marker.
		#Define LC_POLYMARKER	8	&& Device can draw multiple markers.
		#Define LC_WIDE			16	&& Device can draw wide lines.
		#Define LC_STYLED		32	&& Device can draw styled lines.
		#Define LC_WIDESTYLED	64	&& Device can draw lines that are wide and styled.
		#Define LC_INTERIORS	128	&& Device can draw interiors.
#Define POLYGONALCAPS 	32	&& Value that indicates the polygon capabilities of the device, as shown in the following table:
		*		Value		Meaning
		#Define PC_NONE			0	&& Device does not support polygons.
		#Define PC_POLYGON		1	&& Device can draw alternate-fill polygons.
		#Define PC_RECTANGLE	2	&& Device can draw rectangles.
		#Define PC_WINDPOLYGON	4	&& Device can draw winding-fill polygons.
		#Define PC_SCANLINE		8	&& Device can draw a single scanline.
		#Define PC_WIDE			16	&& Device can draw wide borders.
		#Define PC_STYLED		32	&& Device can draw styled borders.
		#Define PC_WIDESTYLED	64	&& Device can draw borders that are wide and styled.
		#Define PC_INTERIORS	128	&& Device can draw interiors.
#Define TEXTCAPS 		34	&& Value that indicates the text capabilities of the device, as shown in the following table:
		* 		Bit					Meaning
		#Define TC_OP_CHARACTER		0x01 	&& Device is capable of character output precision.
		#Define TC_OP_STROKE		0x02 	&& Device is capable of stroke output precision.
		#Define TC_CP_STROKE		0x04 	&& Device is capable of stroke clip precision.
		#Define TC_CR_90			0x08 	&& Device is capable of 90-degree character rotation.
		#Define TC_CR_ANY			0x10 	&& Device is capable of any character rotation.
		#Define TC_SF_X_YINDEP		0x20	&& Device can scale independently in the x- and y-directions.
		#Define TC_SA_DOUBLE		0x40	&& Device is capable of doubled character for scaling.
		#Define TC_SA_INTEGER		0x80	&& Device uses integer multiples only for character scaling.
		#Define TC_SA_CONTIN		0x0100	&& Device uses any multiples for exact character scaling.
		#Define TC_EA_DOUBLE		0x0200	&& Device can draw double-weight characters.
		#Define TC_IA_ABLE			0x0400	&& Device can italicize.
		#Define TC_UA_ABLE			0x0800	&& Device can underline.
		#Define TC_SO_ABLE			0x1000	&& Device can draw strikeouts.
		#Define TC_RA_ABLE			0x2000	&& Device can draw raster fonts.
		#Define TC_VA_ABLE			0x4000	&& Device can draw vector fonts.
		#Define TC_RESERVED			0x8000	&& Reserved; must be zero.
		#Define TC_SCROLLBLT		0x010000


*--
*-- 	fnWeight to CreateFont 
*--
#Define FW_DONTCARE		0
#Define FW_THIN			100
#Define FW_EXTRALIGHT	200
#Define FW_LIGHT		300
#Define FW_NORMAL		400
#Define FW_MEDIUM		500
#Define FW_SEMIBOLD		600
#Define FW_BOLD			700
#Define FW_EXTRABOLD	800
#Define FW_HEAVY		900
*--
*-- 	fdwQuality to CreateFont 
*--
#Define DEFAULT_QUALITY		0
#Define DRAFT_QUALITY		1
#Define PROOF_QUALITY		2
*--
*-- 	fdwCharSet to CreateFont 
*--
#Define ANSI_CHARSET		0
#Define DEFAULT_CHARSET		1
#Define SYMBOL_CHARSET		2
#Define SHIFTJIS_CHARSET	128
#Define HANGEUL_CHARSET		129
#Define CHINESEBIG5_CHARSET 136
#Define OEM_CHARSET			255
#Define JOHAB_CHARSET		130
#Define HEBREW_CHARSET		177
#Define ARABIC_CHARSET		178
#Define GREEK_CHARSET		161
#Define TURKISH_CHARSET		162
#Define THAI_CHARSET		222
#Define EASTEUROPE_CHARSET	238
#Define RUSSIAN_CHARSET		204
#Define MAC_CHARSET			77
#Define BALTIC_CHARSET		186
*--
*-- 	fdwOutputPrecision to CreateFont 
*--
#Define OUT_DEFAULT_PRECIS 		0
#Define OUT_STRING_PRECIS 		1
#Define OUT_CHARACTER_PRECIS 	2
#Define OUT_STROKE_PRECIS 		3
#Define OUT_TT_PRECIS 			4
#Define OUT_DEVICE_PRECIS		5
#Define OUT_RASTER_PRECIS		6
#Define OUT_TT_ONLY_PRECIS		7
#Define OUT_OUTLINE_PRECIS		8
*--
*-- 	fdwClipPrecision to CreateFont 
*--
#Define CLIP_DEFAULT_PRECIS 	0
#Define CLIP_CHARACTER_PRECIS 	1
#Define CLIP_STROKE_PRECIS 	 	2
#Define CLIP_MASK  				15
#Define CLIP_LH_ANGLES			16
#Define CLIP_TT_ALWAYS			32
#Define CLIP_EMBEDDED			128
*--
*-- 	fdwPitchAndFamily to CreateFont 
*--
#Define DEFAULT_PITCH		0
#Define FIXED_PITCH			1
#Define VARIABLE_PITCH		2
