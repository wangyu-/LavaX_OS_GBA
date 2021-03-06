enum { CONCHAR=1,CONINT,CONLONG,VCHAR,VINT,VLONG,GCHAR,GINT,GLONG,
		ACHAR,AINT,ALONG,CONSTRING,LVCHAR,LVINT,LVLONG,
		LGCHAR,LGINT,LGLONG,LACHAR,LAINT,LALONG,
		OFFSET,LOFFSET,LLONG,TK_TEXT,TK_GRAPH,
		TK_sub,TK_inc,TK_dec,TK_INC,TK_DEC,TK_ADD,TK_SUB,
		TK_and,TK_or,TK_not,TK_xor,TK_AND,TK_OR,TK_NOT,
		TK_MUL,TK_DIV,TK_MOD,TK_LSHIFT,TK_RSHIFT,
		TK_EQL,TK_NEQ,TK_LEQ,TK_GEQ,TK_GT,TK_LS,
		TK_LET,TK_PTR,TK_CPTR,TK_pop,TK_JMPE,TK_JMPN,TK_JMP,
		TK_SETSP,TK_CALL,TK_ADDBP,TK_SUBBP,TK_EXIT,TK_PRESET,
		TK_GBUF,TK_SECRET,TK_LOADALL,TK_QADD,TK_QSUB,TK_QMUL,TK_QDIV,
		TK_QMOD,TK_QLSHIFT,TK_QRSHIFT,TK_QEQU,TK_QNEQ,TK_QGREAT,
		TK_QLESS,TK_QGE,TK_QLE,TK_IPTR,TK_LPTR,
		TK_IcF,TK_FcI,TK_ADDff,TK_ADDf,TK_ADD0f,TK_SUBff,TK_SUBf,TK_SUB0f,
		TK_MULff,TK_MULf,TK_MUL0f,TK_DIVff,TK_DIVf,TK_DIV0f,TK_subf,
		TK_LSf,TK_GTf,TK_EQLf,TK_NEQf,TK_LEQf,TK_GEQf,TK_f0,
		TK_CIPTR,TK_CLPTR,TK_LcC,TK_LcI,TK_LETX,TK_AX,TK_IDX,
		TK_PASS,TK_VOID,
		TK_DEBUG,TK_FUNCID,
		VFLOAT=TK_GRAPH,LVFLOAT=TK_GBUF,
		/*VFLOAT,LVFLOAT只是编译中的临时符号，不会出现在目标文件
		但要保证唯一，而且在0-255，否则会被认为是其他类型
		所以使用了两个被废弃的字节码TK_GRAPH，TK_GBUF*/
		CONFLOAT=384,GFLOAT,LGFLOAT,
		T_FLOAT,T_LONG,T_CHAR,T_INT,TK_FPTR,
		/*上面8个符号只是编译中的临时符号，不会出现在目标文件
		但要保证唯一，范围可以任意，最好避开字节码空间(0-255)*/
		TK_PUTCHAR=128,TK_GETCHAR,TK_PRINTF,TK_STRCPY,TK_STRLEN,
		TK_SETSCREEN,TK_UPDATELCD,TK_DELAY,TK_WRITEBLOCK,
		TK_REFRESH,TK_TEXTOUT,TK_BLOCK,TK_RECTANGLE,TK_EXIT0,
		TK_CLEARSCREEN,TK_ABS,TK_RAND,TK_SRAND,TK_LOCATE,TK_INKEY,
		TK_POINT,TK_GETPOINT,TK_LINE,TK_BOX,TK_CIRCLE,TK_ELLIPSE,
		TK_BEEP,TK_ISALNUM,TK_ISALPHA,TK_ISCNTRL,TK_ISDIGIT,
		TK_ISGRAPH,TK_ISLOWER,TK_ISPRINT,TK_ISPUNCT,TK_ISSPACE,TK_ISUPPER,
		TK_ISXDIGIT,TK_STRCAT,TK_STRCHR,TK_STRCMP,TK_STRSTR,
		TK_TOLOWER,TK_TOUPPER,TK_MEMSET,TK_MEMCPY,TK_FOPEN,TK_FCLOSE,
		TK_FREAD,TK_FWRITE,TK_FSEEK,TK_FTELL,TK_FEOF,TK_REWIND,
		TK_GETC,TK_PUTC,TK_SPRINTF,TK_MAKEDIR,TK_DELETEFILE,TK_GETMS,
		TK_CHECKKEY,TK_MEMMOVE,TK_CRC16,TK_JIAMI,TK_CHDIR,TK_FILELIST,
		TK_GETTIME,TK_SETTIME,TK_GETWORD,TK_XDRAW,TK_RELEASEKEY,
		TK_GETBLOCK,TK_SIN,TK_COS,TK_FILL,TK_SETGRAPH,TK_SETBG,
		TK_SETFG,TK_SETLIST,TK_FADE,TK_EXEC,TK_FINDFILE,TK_GETFILENUM,
		TK_SYSTEM,TK_MATH,TK_SETPALETTE,TK_OEM
};

typedef unsigned char byte;
typedef unsigned short word;
typedef unsigned long a32;

#define MASK_24BITS		0xffffff

extern void youhua_main(char *InName,char *OutName);

