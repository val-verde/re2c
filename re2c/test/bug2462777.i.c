re2c: warning: empty rule at line 2 [-Wempty-rule]
/* Generated by re2c */

{
	YYCTYPE yych;
	goto yy0;
yy1:
	++YYCURSOR;
yy0:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy1;
	default:	goto yy3;
	}
yy3:
	{x;}
}

