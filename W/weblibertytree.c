void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    char[16] cVar8;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    char[16] cVar30;
    unknown uVar34;

    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U857._fU324 = 0;
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    StrCopy( ref cVar8, "LIBTR", 16 );
    ConcatString(ref cVar8, g_U1451, 16);
    LOAD_ADDITIONAL_TEXT( ref cVar8, 1 );
    sub_89( ref uVar12, "webLCTNews", g_U1451 / 5, -1, -1 );
    uVar6 = LOAD_TXD( ref uVar12 );
    sub_89( ref uVar16, "homePhoto", g_U1451, -1, -1 );
    uVar7 = GET_TEXTURE( uVar6, ref uVar16 );
    uVar2 = CREATE_HTML_SCRIPT_OBJECT( "home_news_photo" );
    sub_274( ref uVar2, ref uVar12, ref uVar16, 176, 176, g_U1451 );
    uVar3 = CREATE_HTML_SCRIPT_OBJECT( "home_news_info" );
    if ((sub_577( g_U1451 )) < 2)
    {
        sub_644( ref uVar3, "titexclusive.jpg", -1, 128, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( uVar3, "<br/><br/>" );
    }
    sub_89( ref cVar8, "LCT_HEAD", g_U1451, -1, -1 );
    sub_934( ref uVar3, ref cVar8, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar3, "<br/><br/>" );
    sub_89( ref cVar8, "LCT_SUM", g_U1451, -1, -1 );
    sub_934( ref uVar3, ref cVar8, -1 );
    sub_1169( ref uVar4, "advert_medium_0", 3, 0 );
    if (NOT (sub_1941( 0, ref uVar5, g_U1451, 3, 1 )))
    {
        sub_1169( ref uVar5, "quick_link_Table", 3, 1 );
    }
    uVar20 = CREATE_HTML_SCRIPT_OBJECT( "LCPD_blotter" );
    uVar21 = LOAD_TXD( "webLCPDblotter" );
    sub_89( ref uVar22, "policemap", GET_CURRENT_DAY_OF_WEEK(), -1, -1 );
    uVar26 = GET_TEXTURE( uVar21, ref uVar22 );
    sub_3879( ref uVar20, "webLCPDblotter", ref uVar22, 176, 146, "www.libertycitypolice.com" );
    uVar28 = CREATE_HTML_SCRIPT_OBJECT( "TV_tonight" );
    uVar29 = LOAD_TXD( "webTVadverts" );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref uVar27 );
    StrCopy( ref cVar30, "tvadvert_", 16 );
    ConcatString(ref cVar30, uVar27, 16);
    uVar34 = GET_TEXTURE( uVar29, ref cVar30 );
    sub_274( ref uVar28, "webTVadverts", ref cVar30, 176, 146, -1 );
    sub_4263( ref l_U0._fU0, 1, 0 );
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        if (g_U851._fU12 != -1)
        {
            sub_4649( ref g_U831, "www.libertytreeonline.com/news.html", g_U851._fU12, -1, -1 );
            g_U830 = 1;
        }
    }
    RELEASE_TEXTURE( uVar7 );
    REMOVE_TXD( uVar6 );
    RELEASE_TEXTURE( uVar26 );
    REMOVE_TXD( uVar21 );
    RELEASE_TEXTURE( uVar34 );
    REMOVE_TXD( uVar29 );
    g_U857._fU16 = 0;
    return;
}

void sub_89(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_274(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_577(unknown uParam0)
{
    return GET_BITS_IN_RANGE( g_U1452[uParam0], 0, 8 );
}

void sub_644(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    char[16] cVar7;

    string(ref cVar7, iParam2, 16);
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="imgs/" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="" );
    string(ref cVar7, iParam3, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" height="" );
    string(ref cVar7, iParam4, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_934(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1169(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[16] cVar6;

    (uParam0^) = CREATE_HTML_SCRIPT_OBJECT( uParam1 );
    StrCopy( ref cVar6, "WEBADDRESS_", 16 );
    ConcatString(ref cVar6, g_U947[uParam3], 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
    ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    string(ref cVar6, g_U947[uParam3], 16);
    switch (uParam2)
    {
        case 0:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="banner" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="512" height="80" border="0"/></a>" );
        break;
        case 1:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="extraLarge" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="404" height="204" border="0"/></a>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="large" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="176" height="352" border="0"/></a>" );
        break;
        case 3:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="medium" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="176" height="176" border="0"/></a>" );
        break;
        case 4:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="small" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="128" height="204" border="0"/></a>" );
        break;
    }
    return;
}

int sub_1941(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4)
{
    int I;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown[49] uVar11;

    iVar8 = 0;
    iVar9 = iParam2 mod 100;
    (uParam1^) = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    sub_2021( "\n newsStoryBeingRead is ", iParam2 );
    switch (uParam0)
    {
        case 0:
        sub_644( uParam1, "titAlso.jpg", -1, 88, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "LATEST NEWS <br/><br/>" );
        break;
    }
    bVar10 = false;
    array(ref uVar11, 49);
    sub_2172( uParam0, ref uVar11 );
    for ( I = 48; I >= 1; I += -1 )
    {
        if (uVar11[I] != -1)
        {
            if ((bVar10) || (uVar11[I] == iVar9))
            {
                if (bVar10)
                {
                    sub_2940( uParam0, uParam1, uVar11[I], -1, ref iVar8, uParam4, iParam3 );
                    sub_3554( "\n adding other stories" );
                }
                else
                {
                    sub_2940( uParam0, uParam1, uVar11[I], iParam2 / 100, ref iVar8, uParam4, iParam3 );
                    sub_3554( "\n just found the story" );
                    bVar10 = true;
                }
                if (iVar8 >= iParam3)
                {
                    I = 0;
                }
            }
        }
    }
    if (iVar8 == 0)
    {
        DELETE_HTML_SCRIPT_OBJECT( (uParam1^) );
        return 0;
    }
    return 1;
}

void sub_2021(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_2172(unknown uParam0, unknown uParam1)
{
    int I;
    int J;

    (uParam1^)[0] = 0;
    for ( I = 1; I <= ((uParam1^) - 1); I++ )
    {
        (uParam1^)[I] = -1;
    }
    for ( I = 1; I <= (g_U1452 - 1); I++ )
    {
        if (IS_BIT_SET( g_U1452[I], 21 ))
        {
            (uParam1^)[GET_BITS_IN_RANGE( g_U1452[I], 22, 31 )] = I;
            (uParam1^)[0]++;
        }
    }
    sub_2317( uParam0, uParam1 );
    for ( I = 1; I <= (g_U1452 - 2); I++ )
    {
        if ((uParam1^)[I] == -1)
        {
            for ( J = I + 1; J <= (g_U1452 - 1); J++ )
            {
                if ((uParam1^)[J] != -1)
                {
                    (uParam1^)[I] = (uParam1^)[J];
                    (uParam1^)[I] = -1;
                    (uParam1^)[0]--;
                    J = g_U1452;
                }
            }
        }
    }
    for ( I = (uParam1^) - 1; I >= 1; I += -1 )
    {
        if ((uParam1^)[I] != -1)
        {
            return (uParam1^)[I];
        }
    }
    return 1;
}

int sub_2317(int iParam0, unknown uParam1)
{
    int I;

    if (iParam0 == 0)
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam1^) - 1); I++ )
    {
        switch (iParam0)
        {
            case 1:
            switch ((uParam1^)[I])
            {
                case 3:
                case 24:
                case 30:
                case 34:
                case 36:
                case 43:
                case 44:
                case 48:
                (uParam1^)[I] = -1;
                break;
            }
            break;
            case 2:
            switch ((uParam1^)[I])
            {
                case 8:
                case 10:
                case 12:
                case 13:
                case 14:
                case 17:
                case 18:
                case 20:
                case 22:
                case 24:
                case 25:
                case 26:
                case 29:
                case 30:
                case 31:
                case 39:
                case 43:
                case 44:
                (uParam1^)[I] = -1;
                break;
            }
            break;
        }
    }
    return 1;
}

void sub_2940(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4, unknown uParam5, int iParam6)
{
    char[16] cVar9;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar9, "LCT_", 16 );
        break;
        case 1:
        StrCopy( ref cVar9, "WZL_", 16 );
        break;
        case 2:
        StrCopy( ref cVar9, "PBL_", 16 );
        break;
    }
    if ((iParam3 != 0) AND ((uParam4^) < iParam6))
    {
        sub_3060( ref uVar13, ref cVar9, "LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_3155( uParam0, uParam1, uParam5 );
            sub_934( uParam1, ref uVar13, iParam2 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    if ((iParam3 != 1) AND ((uParam4^) < iParam6))
    {
        sub_3060( ref uVar13, ref cVar9, "S1LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_3155( uParam0, uParam1, uParam5 );
            sub_934( uParam1, ref uVar13, iParam2 + 100 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    if ((iParam3 != 2) AND ((uParam4^) < iParam6))
    {
        sub_3060( ref uVar13, ref cVar9, "S2LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_3155( uParam0, uParam1, uParam5 );
            sub_934( uParam1, ref uVar13, iParam2 + 200 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    return;
}

void sub_3060(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    ConcatString((uParam0^), uParam2, 16);
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
    return;
}

void sub_3155(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        switch (uParam0)
        {
            case 0:
            sub_644( uParam1, "arrowBlack.jpg", -1, 16, 16 );
            break;
            case 2:
            sub_644( uParam1, "arrow.jpg", -1, 16, 16 );
            break;
        }
    }
    return;
}

void sub_3554(unknown uParam0)
{
    return;
}

void sub_3879(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5)
{
    char[16] cVar8;

    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam5 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
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
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    return;
}

void sub_4263(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_4274( uParam1 );
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
    sub_4412();
    return;
}

void sub_4274(boolean bParam0)
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

void sub_4412()
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

void sub_4649(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
