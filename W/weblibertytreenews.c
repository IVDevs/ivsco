void main()
{
    l_U34 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U36 = GET_CURRENT_LANGUAGE();
    l_U1 = l_U37._fU64[0];
    if ((l_U1 == 0) || (l_U1 == -1))
    {
        l_U1 = g_U1451;
    }
    l_U2 = l_U1 mod 100;
    StrCopy( ref l_U22, "LIBTR", 16 );
    ConcatString(ref l_U22, l_U2, 16);
    LOAD_ADDITIONAL_TEXT( ref l_U22, 1 );
    sub_114( 1 );
    sub_4463( ref l_U37._fU0, 1, 0 );
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        if (sub_4788( ref l_U36 ))
        {
            sub_114( 0 );
            sub_4463( ref l_U37._fU0, 1, 1 );
        }
        if (g_U851._fU12 != -1)
        {
            sub_4925( ref g_U831, "www.libertytreeonline.com/news.html", g_U851._fU12, -1, -1 );
            g_U830 = 1;
        }
    }
    if (l_U34)
    {
        RELEASE_TEXTURE( l_U4 );
        REMOVE_TXD( l_U3 );
    }
    g_U857._fU16 = 0;
    return;
}

void sub_114(boolean bParam0)
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    l_U10 = 0;
    switch (l_U1 / 100)
    {
        case 0:
        StrCopy( ref l_U18, "LCT_", 16 );
        l_U34 = 1;
        break;
        case 1:
        StrCopy( ref l_U18, "LCT_S1", 16 );
        break;
        case 2:
        StrCopy( ref l_U18, "LCT_S2", 16 );
        break;
    }
    sub_252( ref l_U5, "advert_medium_0", 3, 0 );
    if (NOT (sub_1023( 0, ref l_U6, l_U1, 5, 1 )))
    {
        sub_252( ref l_U6, "quick_link_table", 3, 1 );
    }
    l_U7 = CREATE_HTML_SCRIPT_OBJECT( "top_info" );
    if ((sub_3224( l_U2 )) < 2)
    {
        sub_1166( ref l_U7, "titexclusive.jpg", -1, 128, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U7, "<br/><br/>" );
    }
    l_U22 = {l_U18};
    ConcatString(ref l_U22, "HEAD_", 16);
    ConcatString(ref l_U22, l_U2, 16);
    sub_2585( ref l_U7, ref l_U22, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U7, "<br/>" );
    l_U8 = CREATE_HTML_SCRIPT_OBJECT( "photo" );
    l_U22 = {l_U18};
    ConcatString(ref l_U22, "SECH_", 16);
    ConcatString(ref l_U22, l_U2, 16);
    sub_2585( ref l_U8, ref l_U22, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U8, "<br/><br/>" );
    if (l_U34)
    {
        if (bParam0)
        {
            sub_3492( ref l_U26, "webLCTNews", l_U1 / 5, -1, -1 );
            l_U3 = LOAD_TXD( ref l_U26 );
            sub_3492( ref l_U30, "storyPhoto", l_U1, -1, -1 );
            l_U4 = GET_TEXTURE( l_U3, ref l_U30 );
        }
        sub_3649( ref l_U8, ref l_U26, ref l_U30, 340, 176, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U8, "<br/><br/>" );
    }
    l_U9 = CREATE_HTML_SCRIPT_OBJECT( "reporter" );
    l_U22 = {l_U18};
    ConcatString(ref l_U22, "REP_", 16);
    ConcatString(ref l_U22, l_U2, 16);
    sub_2585( ref l_U9, ref l_U22, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U9, "<br/><br/>" );
    l_U11[0] = CREATE_HTML_SCRIPT_OBJECT( "newsStory" );
    l_U11[1] = CREATE_HTML_SCRIPT_OBJECT( "newsStory1" );
    l_U11[2] = CREATE_HTML_SCRIPT_OBJECT( "newsStory2" );
    l_U11[3] = CREATE_HTML_SCRIPT_OBJECT( "newsStory3" );
    l_U11[4] = CREATE_HTML_SCRIPT_OBJECT( "newsStory4" );
    l_U11[5] = CREATE_HTML_SCRIPT_OBJECT( "newsStory5" );
    l_U0 = 1;
    ConcatString(ref l_U18, "PAR_", 16);
    ConcatString(ref l_U18, l_U2, 16);
    ConcatString(ref l_U18, "_", 16);
    l_U22 = {l_U18};
    ConcatString(ref l_U22, l_U0, 16);
    sub_3024( ref l_U22 );
    l_U35 = 0;
    if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U22 )))
    {
        ConcatString(ref l_U22, "L", 16);
        l_U35 = 1;
    }
    while (DOES_TEXT_LABEL_EXIST( ref l_U22 ))
    {
        if (l_U35)
        {
            sub_4299( ref l_U11[l_U10], ref l_U22 );
        }
        else
        {
            sub_2585( ref l_U11[l_U10], ref l_U22, -1 );
        }
        ADD_TO_HTML_SCRIPT_OBJECT( l_U11[l_U10], "<br/><br/>" );
        l_U0++;
        l_U10++;
        l_U22 = {l_U18};
        ConcatString(ref l_U22, l_U0, 16);
        l_U35 = 0;
        if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U22 )))
        {
            ConcatString(ref l_U22, "L", 16);
            l_U35 = 1;
        }
    }
    return;
}

void sub_252(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_1023(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4)
{
    int I;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown[49] uVar11;

    iVar8 = 0;
    iVar9 = iParam2 mod 100;
    (uParam1^) = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    sub_1103( "\n newsStoryBeingRead is ", iParam2 );
    switch (uParam0)
    {
        case 0:
        sub_1166( uParam1, "titAlso.jpg", -1, 88, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "LATEST NEWS <br/><br/>" );
        break;
    }
    bVar10 = false;
    array(ref uVar11, 49);
    sub_1488( uParam0, ref uVar11 );
    for ( I = 48; I >= 1; I += -1 )
    {
        if (uVar11[I] != -1)
        {
            if ((bVar10) || (uVar11[I] == iVar9))
            {
                if (bVar10)
                {
                    sub_2256( uParam0, uParam1, uVar11[I], -1, ref iVar8, uParam4, iParam3 );
                    sub_3024( "\n adding other stories" );
                }
                else
                {
                    sub_2256( uParam0, uParam1, uVar11[I], iParam2 / 100, ref iVar8, uParam4, iParam3 );
                    sub_3024( "\n just found the story" );
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

void sub_1103(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1166(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

int sub_1488(unknown uParam0, unknown uParam1)
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
    sub_1633( uParam0, uParam1 );
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

int sub_1633(int iParam0, unknown uParam1)
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

void sub_2256(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4, unknown uParam5, int iParam6)
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
        sub_2376( ref uVar13, ref cVar9, "LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_2471( uParam0, uParam1, uParam5 );
            sub_2585( uParam1, ref uVar13, iParam2 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    if ((iParam3 != 1) AND ((uParam4^) < iParam6))
    {
        sub_2376( ref uVar13, ref cVar9, "S1LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_2471( uParam0, uParam1, uParam5 );
            sub_2585( uParam1, ref uVar13, iParam2 + 100 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    if ((iParam3 != 2) AND ((uParam4^) < iParam6))
    {
        sub_2376( ref uVar13, ref cVar9, "S2LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_2471( uParam0, uParam1, uParam5 );
            sub_2585( uParam1, ref uVar13, iParam2 + 200 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    return;
}

void sub_2376(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
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

void sub_2471(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        switch (uParam0)
        {
            case 0:
            sub_1166( uParam1, "arrowBlack.jpg", -1, 16, 16 );
            break;
            case 2:
            sub_1166( uParam1, "arrow.jpg", -1, 16, 16 );
            break;
        }
    }
    return;
}

void sub_2585(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_3024(unknown uParam0)
{
    return;
}

void sub_3224(unknown uParam0)
{
    return GET_BITS_IN_RANGE( g_U1452[uParam0], 0, 8 );
}

void sub_3492(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_3649(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_4299(unknown uParam0, unknown uParam1)
{
    ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    return;
}

void sub_4463(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_4474( uParam1 );
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
    sub_4612();
    return;
}

void sub_4474(boolean bParam0)
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

void sub_4612()
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

int sub_4788(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_4925(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
