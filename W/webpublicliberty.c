void main()
{
    l_U74 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U75 = GET_CURRENT_LANGUAGE();
    l_U0 = l_U76._fU64[0];
    if ((l_U0 == 0) || (l_U0 == -1))
    {
        l_U0 = sub_69( 2, ref l_U2 );
    }
    l_U1 = l_U0 mod 100;
    StrCopy( ref l_U66, "PUBLB", 16 );
    ConcatString(ref l_U66, l_U1, 16);
    LOAD_ADDITIONAL_TEXT( ref l_U66, 1 );
    sub_811( 1 );
    sub_3906( ref l_U76._fU0, 1, 0 );
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        if (sub_4231( ref l_U75 ))
        {
            sub_811( 0 );
            sub_3906( ref l_U76._fU0, 1, 1 );
        }
        if (g_U851._fU12 != -1)
        {
            sub_4360( ref g_U831, "www.publiclibertyonline.com", g_U851._fU12, -1, -1 );
            g_U830 = 1;
        }
    }
    g_U857._fU16 = 0;
    return;
}

int sub_69(unknown uParam0, unknown uParam1)
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
    sub_214( uParam0, uParam1 );
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

int sub_214(int iParam0, unknown uParam1)
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

void sub_811(unknown uParam0)
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    l_U52 = 1;
    l_U63 = 0;
    l_U53 = CREATE_HTML_SCRIPT_OBJECT( "headline" );
    l_U54 = CREATE_HTML_SCRIPT_OBJECT( "sec_headline" );
    l_U55 = CREATE_HTML_SCRIPT_OBJECT( "reporter" );
    l_U56[0] = CREATE_HTML_SCRIPT_OBJECT( "news_story" );
    l_U56[1] = CREATE_HTML_SCRIPT_OBJECT( "newsStory1" );
    l_U56[2] = CREATE_HTML_SCRIPT_OBJECT( "newsStory2" );
    l_U56[3] = CREATE_HTML_SCRIPT_OBJECT( "newsStory3" );
    l_U56[4] = CREATE_HTML_SCRIPT_OBJECT( "newsStory4" );
    l_U56[5] = CREATE_HTML_SCRIPT_OBJECT( "newsStory5" );
    switch (l_U0 / 100)
    {
        case 0:
        StrCopy( ref l_U70, "PBL_", 16 );
        break;
        case 1:
        StrCopy( ref l_U70, "PBL_S1", 16 );
        break;
        case 2:
        StrCopy( ref l_U70, "PBL_S2", 16 );
        break;
    }
    sub_1195( ref l_U66, ref l_U70, "HEAD", l_U1, -1 );
    sub_1279( ref l_U53, ref l_U66, -1 );
    sub_1195( ref l_U66, ref l_U70, "SECH", l_U1, -1 );
    sub_1279( ref l_U54, ref l_U66, -1 );
    sub_1195( ref l_U66, ref l_U70, "REP", l_U1, -1 );
    sub_1279( ref l_U55, ref l_U66, -1 );
    ConcatString(ref l_U70, "PAR_", 16);
    ConcatString(ref l_U70, l_U1, 16);
    ConcatString(ref l_U70, "_", 16);
    l_U66 = {l_U70};
    ConcatString(ref l_U66, l_U52, 16);
    l_U74 = 0;
    if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U66 )))
    {
        ConcatString(ref l_U66, "L", 16);
        l_U74 = 1;
    }
    while (DOES_TEXT_LABEL_EXIST( ref l_U66 ))
    {
        if (l_U74)
        {
            sub_1648( ref l_U56[l_U63], ref l_U66 );
        }
        else
        {
            sub_1279( ref l_U56[l_U63], ref l_U66, -1 );
        }
        ADD_TO_HTML_SCRIPT_OBJECT( l_U56[l_U63], "<br/><br/>" );
        l_U63++;
        l_U52++;
        l_U66 = {l_U70};
        ConcatString(ref l_U66, l_U52, 16);
        l_U74 = 0;
        if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U66 )))
        {
            ConcatString(ref l_U66, "L", 16);
            l_U74 = 1;
        }
    }
    sub_1850( ref l_U65, "advert_medium_0", 3, 0 );
    if (NOT (sub_2623( 2, ref l_U64, l_U0, 6, 1 )))
    {
        sub_1850( ref l_U64, "quick_link_table", 3, 1 );
    }
    return;
}

void sub_1195(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
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

void sub_1279(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1648(unknown uParam0, unknown uParam1)
{
    ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    return;
}

void sub_1850(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_2623(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4)
{
    int I;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown[49] uVar11;

    iVar8 = 0;
    iVar9 = iParam2 mod 100;
    (uParam1^) = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    sub_2703( "\n newsStoryBeingRead is ", iParam2 );
    switch (uParam0)
    {
        case 0:
        sub_2766( uParam1, "titAlso.jpg", -1, 88, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "LATEST NEWS <br/><br/>" );
        break;
    }
    bVar10 = false;
    array(ref uVar11, 49);
    sub_69( uParam0, ref uVar11 );
    for ( I = 48; I >= 1; I += -1 )
    {
        if (uVar11[I] != -1)
        {
            if ((bVar10) || (uVar11[I] == iVar9))
            {
                if (bVar10)
                {
                    sub_3168( uParam0, uParam1, uVar11[I], -1, ref iVar8, uParam4, iParam3 );
                    sub_3712( "\n adding other stories" );
                }
                else
                {
                    sub_3168( uParam0, uParam1, uVar11[I], iParam2 / 100, ref iVar8, uParam4, iParam3 );
                    sub_3712( "\n just found the story" );
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

void sub_2703(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2766(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_3168(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4, unknown uParam5, int iParam6)
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
        sub_1195( ref uVar13, ref cVar9, "LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_3313( uParam0, uParam1, uParam5 );
            sub_1279( uParam1, ref uVar13, iParam2 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    if ((iParam3 != 1) AND ((uParam4^) < iParam6))
    {
        sub_1195( ref uVar13, ref cVar9, "S1LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_3313( uParam0, uParam1, uParam5 );
            sub_1279( uParam1, ref uVar13, iParam2 + 100 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    if ((iParam3 != 2) AND ((uParam4^) < iParam6))
    {
        sub_1195( ref uVar13, ref cVar9, "S2LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_3313( uParam0, uParam1, uParam5 );
            sub_1279( uParam1, ref uVar13, iParam2 + 200 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    return;
}

void sub_3313(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        switch (uParam0)
        {
            case 0:
            sub_2766( uParam1, "arrowBlack.jpg", -1, 16, 16 );
            break;
            case 2:
            sub_2766( uParam1, "arrow.jpg", -1, 16, 16 );
            break;
        }
    }
    return;
}

void sub_3712(unknown uParam0)
{
    return;
}

void sub_3906(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_3917( uParam1 );
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
    sub_4055();
    return;
}

void sub_3917(boolean bParam0)
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

void sub_4055()
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

int sub_4231(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_4360(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
