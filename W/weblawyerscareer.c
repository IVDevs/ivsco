void main()
{
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    LOAD_ADDITIONAL_TEXT( "GLANDS", 1 );
    g_U857._fU324 = 0;
    sub_44();
    sub_645( ref l_U1._fU0, 1, 0 );
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        switch (g_U851._fU12)
        {
            case 1:
            sub_1042( ref g_U831, "www.goldberglignerandshyster.com/resume.html", -1, -1, -1 );
            g_U830 = 1;
            break;
            default:
        }
    }
    g_U857._fU16 = 0;
    return;
}

void sub_44()
{
    l_U0 = CREATE_HTML_SCRIPT_OBJECT( "glandScriptObject" );
    if (g_U965 != 1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0, "<th>" );
        sub_128( ref l_U0, "GL_NO_JOBS", -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0, "</th>" );
    }
    else
    {
        switch (g_U966)
        {
            case 2:
            ADD_TO_HTML_SCRIPT_OBJECT( l_U0, "<th>" );
            sub_128( ref l_U0, "GL_THANK_PHONE", -1 );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U0, "</th>" );
            break;
            default:
            ADD_TO_HTML_SCRIPT_OBJECT( l_U0, "<th align="center" valign="middle" background="imgs/butBkgd1.jpg" scope="col">" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U0, "<span class="style1">" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U0, "<a href="1" color="#FFFFFF">" );
            sub_128( ref l_U0, "GL_SUBMIT_CV", -1 );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U0, "</a>" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U0, "</span></th>" );
            break;
        }
    }
    return;
}

void sub_128(unknown uParam0, unknown uParam1, int iParam2)
{
    char[16] cVar5;

    string(ref cVar5, iParam2, 16);
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar5 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<text name="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_645(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_656( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U857._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U857._fU4, uParam0 );
        StrCopy( ref g_U857._fU168, uParam0, 64 );
        g_U857._fU164 = 1;
    }
    sub_794();
    return;
}

void sub_656(boolean bParam0)
{
    if (bParam0)
    {
        g_U857._fU20 = g_U942;
    }
    else
    {
        g_U857._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U857._fU4, g_U857._fU20 );
    return;
}

void sub_794()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U857._fU4 );
    if (fVar2 > (g_U941 - (g_U939 * g_U941)))
    {
        g_U857._fU28 = 1;
        g_U857._fU32 = (1.00000000 - g_U939) / fVar2;
        g_U857._fU36 = (1.00000000 - g_U939) * ((g_U941 - (g_U939 * g_U941)) / fVar2);
    }
    else
    {
        g_U857._fU28 = 0;
    }
    return;
}

void sub_1042(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
