void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U76 = 0;
    l_U78 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U77 = GET_CURRENT_LANGUAGE();
    l_U2 = l_U79._fU64[0];
    if ((l_U2 == 0) || (l_U2 == -1))
    {
        l_U2 = sub_91( 2, ref l_U4 );
    }
    l_U3 = l_U2 mod 100;
    switch (GET_CURRENT_EPISODE())
    {
        default:
        StrCopy( ref l_U68, "PBL", 16 );
        ConcatString(ref l_U68, GET_CURRENT_EPISODE(), 16);
        switch (l_U2 / 100)
        {
            case 0:
            ConcatString(ref l_U68, "_LINK_", 16);
            break;
            case 1:
            ConcatString(ref l_U68, "_S1LINK_", 16);
            break;
            case 2:
            ConcatString(ref l_U68, "_S2LINK_", 16);
            break;
        }
        ConcatString(ref l_U68, l_U3, 16);
        if (DOES_TEXT_LABEL_EXIST( ref l_U68 ))
        {
            StrCopy( ref l_U68, "PBLB", 16 );
            ConcatString(ref l_U68, GET_CURRENT_EPISODE(), 16);
            ConcatString(ref l_U68, l_U3, 16);
            l_U78 = 1;
            break;
        }
        case 0:
        StrCopy( ref l_U68, "PUBLB", 16 );
        ConcatString(ref l_U68, l_U3, 16);
        l_U78 = 0;
        break;
    }
    LOAD_ADDITIONAL_TEXT( ref l_U68, 1 );
    sub_1040( 1 );
    sub_4581( ref l_U79._fU0, 1, 0 );
    while (NOT g_U864._fU16)
    {
        WAIT( 0 );
        if (sub_4906( ref l_U77 ))
        {
            sub_1040( 0 );
            sub_4581( ref l_U79._fU0, 1, 1 );
        }
        if (g_U858._fU12 != -1)
        {
            sub_5035( ref g_U838, "www.publiclibertyonline.com", g_U858._fU12, -1, -1 );
            g_U837 = 1;
        }
    }
    g_U864._fU16 = 0;
    return;
}

int sub_91(unknown uParam0, unknown uParam1)
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
    sub_236( uParam0, uParam1 );
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

int sub_236(int iParam0, unknown uParam1)
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

void sub_1040(unknown uParam0)
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    l_U54 = 1;
    l_U65 = 0;
    l_U55 = CREATE_HTML_SCRIPT_OBJECT( "headline" );
    l_U56 = CREATE_HTML_SCRIPT_OBJECT( "sec_headline" );
    l_U57 = CREATE_HTML_SCRIPT_OBJECT( "reporter" );
    l_U58[0] = CREATE_HTML_SCRIPT_OBJECT( "news_story" );
    l_U58[1] = CREATE_HTML_SCRIPT_OBJECT( "newsStory1" );
    l_U58[2] = CREATE_HTML_SCRIPT_OBJECT( "newsStory2" );
    l_U58[3] = CREATE_HTML_SCRIPT_OBJECT( "newsStory3" );
    l_U58[4] = CREATE_HTML_SCRIPT_OBJECT( "newsStory4" );
    l_U58[5] = CREATE_HTML_SCRIPT_OBJECT( "newsStory5" );
    StrCopy( ref l_U72, "PBL", 16 );
    if (l_U78)
    {
        ConcatString(ref l_U72, GET_CURRENT_EPISODE(), 16);
    }
    ConcatString(ref l_U72, "_", 16);
    switch (l_U2 / 100)
    {
        case 1:
        ConcatString(ref l_U72, "S1", 16);
        break;
        case 2:
        ConcatString(ref l_U72, "S2", 16);
        break;
    }
    sub_1435( ref l_U68, ref l_U72, "HEAD", l_U3, -1 );
    sub_1519( ref l_U55, ref l_U68, -1 );
    sub_1435( ref l_U68, ref l_U72, "SECH", l_U3, -1 );
    sub_1519( ref l_U56, ref l_U68, -1 );
    sub_1435( ref l_U68, ref l_U72, "REP", l_U3, -1 );
    sub_1519( ref l_U57, ref l_U68, -1 );
    ConcatString(ref l_U72, "PAR_", 16);
    ConcatString(ref l_U72, l_U3, 16);
    ConcatString(ref l_U72, "_", 16);
    l_U68 = {l_U72};
    ConcatString(ref l_U68, l_U54, 16);
    l_U76 = 0;
    if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U68 )))
    {
        ConcatString(ref l_U68, "L", 16);
        l_U76 = 1;
    }
    while (DOES_TEXT_LABEL_EXIST( ref l_U68 ))
    {
        if (l_U76)
        {
            sub_1888( ref l_U58[l_U65], ref l_U68 );
        }
        else
        {
            sub_1519( ref l_U58[l_U65], ref l_U68, -1 );
        }
        ADD_TO_HTML_SCRIPT_OBJECT( l_U58[l_U65], "<br/><br/>" );
        l_U65++;
        l_U54++;
        l_U68 = {l_U72};
        ConcatString(ref l_U68, l_U54, 16);
        l_U76 = 0;
        if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U68 )))
        {
            ConcatString(ref l_U68, "L", 16);
            l_U76 = 1;
        }
    }
    sub_2127( ref l_U67, "advert_medium_0", 3, 0 );
    if (NOT (sub_2950( 2, ref l_U66, l_U2, 6, 1 )))
    {
        sub_2127( ref l_U66, "quick_link_table", 3, 1 );
    }
    return;
}

void sub_1435(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
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

void sub_1519(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1888(unknown uParam0, unknown uParam1)
{
    if (NOT IS_JAPANESE_VERSION())
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), GET_STRING_FROM_TEXT_FILE( uParam1 ) );
    }
    else
    {
        ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    }
    return;
}

void sub_2127(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_2950(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4)
{
    int I;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown[49] uVar11;

    iVar8 = 0;
    iVar9 = iParam2 mod 100;
    (uParam1^) = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    sub_3030( "\n newsStoryBeingRead is ", iParam2 );
    switch (uParam0)
    {
        case 0:
        sub_3093( uParam1, "titAlso.jpg", -1, 88, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "LATEST NEWS <br/><br/>" );
        break;
    }
    bVar10 = false;
    array(ref uVar11, 49);
    sub_91( uParam0, ref uVar11 );
    for ( I = 48; I >= 1; I += -1 )
    {
        if (uVar11[I] != -1)
        {
            if ((bVar10) || (uVar11[I] == iVar9))
            {
                if (bVar10)
                {
                    sub_3495( uParam0, uParam1, uVar11[I], -1, ref iVar8, uParam4, iParam3 );
                    sub_4387( "\n adding other stories" );
                }
                else
                {
                    sub_3495( uParam0, uParam1, uVar11[I], iParam2 / 100, ref iVar8, uParam4, iParam3 );
                    sub_4387( "\n just found the story" );
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

void sub_3030(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3093(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_3495(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4, unknown uParam5, int iParam6)
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
            sub_1435( ref uVar20, ref cVar11[I], "LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_3883( uParam0, uParam1, uParam5 );
                sub_1519( uParam1, ref uVar20, iParam2 );
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
            sub_1435( ref uVar20, ref cVar11[I], "S1LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_3883( uParam0, uParam1, uParam5 );
                sub_1519( uParam1, ref uVar20, iParam2 + 100 );
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
            sub_1435( ref uVar20, ref cVar11[I], "S2LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_3883( uParam0, uParam1, uParam5 );
                sub_1519( uParam1, ref uVar20, iParam2 + 200 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    return;
}

void sub_3883(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        switch (uParam0)
        {
            case 0:
            sub_3093( uParam1, "arrowBlack.jpg", -1, 16, 16 );
            break;
            case 2:
            sub_3093( uParam1, "arrow.jpg", -1, 16, 16 );
            break;
        }
    }
    return;
}

void sub_4387(unknown uParam0)
{
    return;
}

void sub_4581(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_4592( uParam1 );
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
    sub_4730();
    return;
}

void sub_4592(boolean bParam0)
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

void sub_4730()
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

int sub_4906(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_5035(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
