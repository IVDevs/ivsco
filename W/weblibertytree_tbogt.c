void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    char[16] cVar8;
    char[16] cVar12;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    char[64] cVar20;
    char[16] cVar36;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    char[16] cVar50;
    unknown uVar54;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U864._fU324 = 0;
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    switch (GET_CURRENT_EPISODE())
    {
        default:
        StrCopy( ref cVar8, "LCT", 16 );
        ConcatString(ref cVar8, GET_CURRENT_EPISODE(), 16);
        cVar12 = {cVar8};
        ConcatString(ref cVar8, "_LINK_", 16);
        ConcatString(ref cVar8, g_U1458, 16);
        if (DOES_TEXT_LABEL_EXIST( ref cVar8 ))
        {
            StrCopy( ref cVar8, "LBTR", 16 );
            ConcatString(ref cVar8, GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar8, g_U1458, 16);
            l_U2 = 1;
            break;
        }
        case 0:
        StrCopy( ref cVar8, "LIBTR", 16 );
        ConcatString(ref cVar8, g_U1458, 16);
        StrCopy( ref cVar12, "LCT", 16 );
        l_U2 = 0;
        break;
    }
    LOAD_ADDITIONAL_TEXT( ref cVar8, 1 );
    if (l_U2)
    {
        switch (g_U1458)
        {
            case 7:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_789" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_789" );
            }
            StrCopy( ref cVar20, "webNews_789", 64 );
            break;
            case 10:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_282930" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_282930" );
            }
            StrCopy( ref cVar20, "webNews_282930", 64 );
            break;
            case 15:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_789" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_789" );
            }
            StrCopy( ref cVar20, "webNews_789", 64 );
            break;
            case 16:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_2021" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_2021" );
            }
            StrCopy( ref cVar20, "webNews_2021", 64 );
            break;
            case 24:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_222324" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_222324" );
            }
            StrCopy( ref cVar20, "webNews_222324", 64 );
            break;
            case 27:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_252627" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_252627" );
            }
            StrCopy( ref cVar20, "webNews_252627", 64 );
            break;
            case 30:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_2930" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_2930" );
            }
            StrCopy( ref cVar20, "webNews_2930", 64 );
            break;
            case 31:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_3132" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_3132" );
            }
            StrCopy( ref cVar20, "webNews_3132", 64 );
            break;
            case 33:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_3334" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_3334" );
            }
            StrCopy( ref cVar20, "webNews_3334", 64 );
            break;
            case 39:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_383940" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_383940" );
            }
            StrCopy( ref cVar20, "webNews_383940", 64 );
            break;
            case 42:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_4142" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_4142" );
            }
            StrCopy( ref cVar20, "webNews_4142", 64 );
            break;
            case 47:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_4647" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_4647" );
            }
            StrCopy( ref cVar20, "webNews_4647", 64 );
            break;
            case 48:
            if (# -NULL-0xc27c84())
            {
                uVar6 = LOAD_TXD( "e2:/xbox360/textures/webNews_4849" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar6 = LOAD_TXD( "e2:/pc/textures/webNews_4849" );
            }
            StrCopy( ref cVar20, "webNews_4849", 64 );
            break;
        }
        StrCopy( ref cVar36, "lth", 16 );
    }
    else
    {
        StrCopy( ref cVar20, "webLCTNews_", 64 );
        ConcatString(ref cVar20, g_U1458 / 5, 64);
        sub_2236( ref cVar36, "homePhoto", g_U1458, -1, -1 );
        uVar6 = LOAD_TXD( ref cVar20 );
    }
    uVar7 = GET_TEXTURE( uVar6, ref cVar36 );
    uVar2 = CREATE_HTML_SCRIPT_OBJECT( "home_news_photo" );
    sub_2399( ref uVar2, ref cVar20, ref cVar36, 176, 176, g_U1458 );
    uVar3 = CREATE_HTML_SCRIPT_OBJECT( "home_news_info" );
    if ((sub_2702( g_U1458 )) < 2)
    {
        sub_2769( ref uVar3, "titexclusive.jpg", -1, 128, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( uVar3, "<br/><br/>" );
    }
    uVar16 = {cVar12};
    ConcatString(ref uVar16, "_HEAD", 16);
    sub_2236( ref cVar8, ref uVar16, g_U1458, -1, -1 );
    sub_3070( ref uVar3, ref cVar8, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar3, "<br/><br/>" );
    uVar16 = {cVar12};
    ConcatString(ref uVar16, "_SUM", 16);
    sub_2236( ref cVar8, ref uVar16, g_U1458, -1, -1 );
    sub_3070( ref uVar3, ref cVar8, -1 );
    sub_3316( ref uVar4, "advert_medium_0", 3, 0 );
    if (NOT (sub_4138( 0, ref uVar5, g_U1458, 3, 1 )))
    {
        sub_3316( ref uVar5, "quick_link_Table", 3, 1 );
    }
    uVar40 = CREATE_HTML_SCRIPT_OBJECT( "LCPD_blotter" );
    uVar41 = LOAD_TXD( "webLCPDblotter" );
    sub_2236( ref uVar42, "policemap", GET_CURRENT_DAY_OF_WEEK(), -1, -1 );
    uVar46 = GET_TEXTURE( uVar41, ref uVar42 );
    sub_6416( ref uVar40, "webLCPDblotter", ref uVar42, 176, 146, "www.libertycitypolice.com" );
    uVar48 = CREATE_HTML_SCRIPT_OBJECT( "TV_tonight" );
    uVar49 = LOAD_TXD( "webTVadverts" );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref uVar47 );
    StrCopy( ref cVar50, "tvadvert_", 16 );
    ConcatString(ref cVar50, uVar47, 16);
    uVar54 = GET_TEXTURE( uVar49, ref cVar50 );
    sub_2399( ref uVar48, "webTVadverts", ref cVar50, 176, 146, -1 );
    sub_6820( ref l_U3._fU0, 1, 0 );
    while (NOT g_U864._fU16)
    {
        WAIT( 0 );
        if (g_U858._fU12 != -1)
        {
            sub_7206( ref g_U838, "www.libertytreeonline.com/news.html", g_U858._fU12, -1, -1 );
            g_U837 = 1;
        }
    }
    RELEASE_TEXTURE( uVar7 );
    REMOVE_TXD( uVar6 );
    RELEASE_TEXTURE( uVar46 );
    REMOVE_TXD( uVar41 );
    RELEASE_TEXTURE( uVar54 );
    REMOVE_TXD( uVar49 );
    g_U864._fU16 = 0;
    return;
}

void sub_2236(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_2399(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_2702(unknown uParam0)
{
    return GET_BITS_IN_RANGE( g_U1459[uParam0], 0, 8 );
}

void sub_2769(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_3070(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_3316(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[16] cVar6;
    unknown uVar10;

    (uParam0^) = CREATE_HTML_SCRIPT_OBJECT( uParam1 );
    StrCopy( ref cVar6, "WEBADDRESS_", 16 );
    ConcatString(ref cVar6, g_U954[uParam3], 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
    if (NOT IS_JAPANESE_VERSION())
    {
        uVar10 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), GET_FIRST_N_CHARACTERS_OF_STRING( ref cVar6, uVar10 ) );
    }
    else
    {
        ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    string(ref cVar6, g_U954[uParam3], 16);
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

int sub_4138(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4)
{
    int I;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown[49] uVar11;

    iVar8 = 0;
    iVar9 = iParam2 mod 100;
    (uParam1^) = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    sub_4218( "\n newsStoryBeingRead is ", iParam2 );
    switch (uParam0)
    {
        case 0:
        sub_2769( uParam1, "titAlso.jpg", -1, 88, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "LATEST NEWS <br/><br/>" );
        break;
    }
    bVar10 = false;
    array(ref uVar11, 49);
    sub_4369( uParam0, ref uVar11 );
    for ( I = 48; I >= 1; I += -1 )
    {
        if (uVar11[I] != -1)
        {
            if ((bVar10) || (uVar11[I] == iVar9))
            {
                if (bVar10)
                {
                    sub_5113( uParam0, uParam1, uVar11[I], -1, ref iVar8, uParam4, iParam3 );
                    sub_6075( "\n adding other stories" );
                }
                else
                {
                    sub_5113( uParam0, uParam1, uVar11[I], iParam2 / 100, ref iVar8, uParam4, iParam3 );
                    sub_6075( "\n just found the story" );
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

void sub_4218(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_4369(unknown uParam0, unknown uParam1)
{
    int I;
    int J;

    (uParam1^)[0] = 0;
    for ( I = 1; I <= ((uParam1^) - 1); I++ )
    {
        (uParam1^)[I] = -1;
    }
    for ( I = 1; I <= (g_U1459 - 1); I++ )
    {
        if (IS_BIT_SET( g_U1459[I], 21 ))
        {
            (uParam1^)[GET_BITS_IN_RANGE( g_U1459[I], 22, 31 )] = I;
            (uParam1^)[0]++;
        }
    }
    sub_4514( uParam0, uParam1 );
    for ( I = 1; I <= (g_U1459 - 2); I++ )
    {
        if ((uParam1^)[I] == -1)
        {
            for ( J = I + 1; J <= (g_U1459 - 1); J++ )
            {
                if ((uParam1^)[J] != -1)
                {
                    (uParam1^)[I] = (uParam1^)[J];
                    (uParam1^)[I] = -1;
                    (uParam1^)[0]--;
                    J = g_U1459;
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

int sub_4514(int iParam0, unknown uParam1)
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
                case 31:
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

void sub_5113(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4, unknown uParam5, int iParam6)
{
    int I;
    int iVar10;
    char[12] cVar11;
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

    array(ref cVar11, 2);
    iVar10 = 0;
    switch (uParam0)
    {
        case 0:
        if (GET_CURRENT_EPISODE() != 0)
        {
            StrCopy( ref cVar11[iVar10], "LCT", 16 );
            ConcatString(ref cVar11[iVar10], GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar11[iVar10], "_", 16);
            iVar10++;
        }
        StrCopy( ref cVar11[iVar10], "LCT_", 16 );
        break;
        case 1:
        if (GET_CURRENT_EPISODE() != 0)
        {
            StrCopy( ref cVar11[iVar10], "WZL", 16 );
            ConcatString(ref cVar11[iVar10], GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar11[iVar10], "_", 16);
            iVar10++;
        }
        StrCopy( ref cVar11[iVar10], "WZL_", 16 );
        break;
        case 2:
        if (GET_CURRENT_EPISODE() != 0)
        {
            StrCopy( ref cVar11[iVar10], "PBL", 16 );
            ConcatString(ref cVar11[iVar10], GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar11[iVar10], "_", 16);
            iVar10++;
        }
        StrCopy( ref cVar11[iVar10], "PBL_", 16 );
        break;
    }
    if ((iParam3 != 0) AND ((uParam4^) < iParam6))
    {
        for ( I = 0; I <= iVar10; I++ )
        {
            sub_5476( ref uVar20, ref cVar11[I], "LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_5571( uParam0, uParam1, uParam5 );
                sub_3070( uParam1, ref uVar20, iParam2 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    if ((iParam3 != 1) AND ((uParam4^) < iParam6))
    {
        for ( I = 0; I <= iVar10; I++ )
        {
            sub_5476( ref uVar20, ref cVar11[I], "S1LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_5571( uParam0, uParam1, uParam5 );
                sub_3070( uParam1, ref uVar20, iParam2 + 100 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    if ((iParam3 != 2) AND ((uParam4^) < iParam6))
    {
        for ( I = 0; I <= iVar10; I++ )
        {
            sub_5476( ref uVar20, ref cVar11[I], "S2LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_5571( uParam0, uParam1, uParam5 );
                sub_3070( uParam1, ref uVar20, iParam2 + 200 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    return;
}

void sub_5476(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
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

void sub_5571(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        switch (uParam0)
        {
            case 0:
            sub_2769( uParam1, "arrowBlack.jpg", -1, 16, 16 );
            break;
            case 2:
            sub_2769( uParam1, "arrow.jpg", -1, 16, 16 );
            break;
        }
    }
    return;
}

void sub_6075(unknown uParam0)
{
    return;
}

void sub_6416(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5)
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

void sub_6820(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_6831( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U864._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U864._fU4, uParam0 );
        StrCopy( ref g_U864._fU168, uParam0, 64 );
        g_U864._fU164 = 1;
    }
    sub_6969();
    return;
}

void sub_6831(boolean bParam0)
{
    if (bParam0)
    {
        g_U864._fU20 = g_U949;
    }
    else
    {
        g_U864._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U864._fU4, g_U864._fU20 );
    return;
}

void sub_6969()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U864._fU4 );
    if (fVar2 > (g_U948 - (g_U946 * g_U948)))
    {
        g_U864._fU28 = 1;
        g_U864._fU32 = (1.00000000 - g_U946) / fVar2;
        g_U864._fU36 = (1.00000000 - g_U946) * ((g_U948 - (g_U946 * g_U948)) / fVar2);
    }
    else
    {
        g_U864._fU28 = 0;
    }
    return;
}

void sub_7206(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
