void main()
{
    l_U0 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U860._fU324 = 0;
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    LOAD_ADDITIONAL_TEXT( "VIPRING", 1 );
    l_U6 = l_U8._fU64[0];
    l_U7 = l_U8._fU64[1];
    sub_82();
    sub_270();
    sub_1458( ref l_U8._fU0, 1, 0 );
    while (NOT g_U860._fU16)
    {
        WAIT( 0 );
    }
    sub_1784();
    g_U860._fU16 = 0;
    return;
}

void sub_82()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT l_U0)
    {
        if (l_U6 == 2)
        {
            l_U1 = LOAD_TXD( "webThemesVIP" );
            sub_152( ref uVar2, "webTheme", l_U7, -1, -1 );
            l_U2 = GET_TEXTURE( l_U1, ref uVar2 );
            l_U0 = 1;
        }
    }
    return;
}

void sub_152(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_270()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    boolean bVar7;
    boolean bVar8;

    bVar7 = false;
    bVar8 = false;
    l_U3[0] = CREATE_HTML_SCRIPT_OBJECT( "purchase_icon" );
    l_U3[1] = CREATE_HTML_SCRIPT_OBJECT( "purchase_text" );
    switch (l_U6)
    {
        case 0:
        iVar6 = 100;
        if (g_U94._fU40 == 2)
        {
            bVar7 = true;
        }
        if (IS_BIT_SET( g_U94._fU412, l_U7 - 11 ))
        {
            bVar8 = true;
        }
        break;
        case 1:
        iVar6 = 100;
        if (g_U94._fU40 == 2)
        {
            bVar7 = true;
        }
        if (IS_BIT_SET( g_U94._fU412, l_U7 - 11 ))
        {
            bVar8 = true;
        }
        break;
        case 2:
        sub_152( ref uVar2, "webTheme", l_U7, -1, -1 );
        sub_546( ref l_U3[0], "webThemesVIP", ref uVar2, 120, 120, -1 );
        iVar6 = 100;
        if (g_U94._fU40 == 2)
        {
            bVar7 = true;
        }
        if (IS_BIT_SET( g_U94._fU416, l_U7 ))
        {
            bVar8 = true;
        }
        break;
    }
    if (bVar7)
    {
        if (bVar8)
        {
            switch (l_U6)
            {
                case 2:
                sub_930( ref l_U3[1], "VLR_GOT_THEME", -1 );
                break;
                default:
                sub_930( ref l_U3[1], "VLR_GOT_TONE", -1 );
                break;
            }
        }
        else if (IS_SCORE_GREATER( sub_1130(), iVar6 ))
        {
            ADD_SCORE( sub_1130(), iVar6 * -1 );
            switch (l_U6)
            {
                case 0:
                sub_930( ref l_U3[1], "VLR_SENT_TONE", -1 );
                SET_BIT( ref g_U94._fU412, l_U7 - 11 );
                break;
                case 1:
                sub_930( ref l_U3[1], "VLR_SENT_TONE", -1 );
                SET_BIT( ref g_U94._fU412, l_U7 - 11 );
                break;
                case 2:
                sub_930( ref l_U3[1], "VLR_SENT_THEME", -1 );
                SET_BIT( ref g_U94._fU416, l_U7 );
                break;
            }
        }
        else
        {
            sub_930( ref l_U3[1], "VLR_NO_MONEY", -1 );
        }
    }
    else
    {
        sub_930( ref l_U3[1], "VLR_CRAP_PHONE", -1 );
    }
    return;
}

void sub_546(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
{
    char[16] cVar8;

    string(ref cVar8, iParam5, 16);
    if (iParam5 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img txd="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" src="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam2 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="" );
    string(ref cVar8, iParam3, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" height="" );
    string(ref cVar8, iParam4, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam5 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_930(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1130()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1458(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_1469( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U860._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U860._fU4, uParam0 );
        StrCopy( ref g_U860._fU168, uParam0, 64 );
        g_U860._fU164 = 1;
    }
    sub_1607();
    return;
}

void sub_1469(boolean bParam0)
{
    if (bParam0)
    {
        g_U860._fU20 = g_U945;
    }
    else
    {
        g_U860._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U860._fU4, g_U860._fU20 );
    return;
}

void sub_1607()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U860._fU4 );
    if (fVar2 > (g_U944 - (g_U942 * g_U944)))
    {
        g_U860._fU28 = 1;
        g_U860._fU32 = (1.00000000 - g_U942) / fVar2;
        g_U860._fU36 = (1.00000000 - g_U942) * ((g_U944 - (g_U942 * g_U944)) / fVar2);
    }
    else
    {
        g_U860._fU28 = 0;
    }
    return;
}

void sub_1784()
{
    if (l_U0)
    {
        RELEASE_TEXTURE( l_U2 );
        REMOVE_TXD( l_U1 );
        l_U0 = 0;
    }
    return;
}
