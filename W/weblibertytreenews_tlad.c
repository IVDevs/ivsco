void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U48 = 0;
    l_U51 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U50 = GET_CURRENT_LANGUAGE();
    l_U3 = l_U52._fU64[0];
    if ((l_U3 == 0) || (l_U3 == -1))
    {
        l_U3 = g_U1454;
    }
    l_U4 = l_U3 mod 100;
    switch (GET_CURRENT_EPISODE())
    {
        default:
        StrCopy( ref l_U24, "LCT", 16 );
        ConcatString(ref l_U24, GET_CURRENT_EPISODE(), 16);
        switch (l_U3 / 100)
        {
            case 0:
            ConcatString(ref l_U24, "_LINK_", 16);
            break;
            case 1:
            ConcatString(ref l_U24, "_S1LINK_", 16);
            break;
            case 2:
            ConcatString(ref l_U24, "_S2LINK_", 16);
            break;
        }
        ConcatString(ref l_U24, l_U4, 16);
        if (DOES_TEXT_LABEL_EXIST( ref l_U24 ))
        {
            StrCopy( ref l_U24, "LBTR", 16 );
            ConcatString(ref l_U24, GET_CURRENT_EPISODE(), 16);
            ConcatString(ref l_U24, l_U4, 16);
            l_U51 = 1;
            break;
        }
        case 0:
        StrCopy( ref l_U24, "LIBTR", 16 );
        ConcatString(ref l_U24, l_U4, 16);
        l_U51 = 0;
        break;
    }
    LOAD_ADDITIONAL_TEXT( ref l_U24, 1 );
    sub_347( 1 );
    sub_5668( ref l_U52._fU0, 1, 0 );
    while (NOT g_U860._fU16)
    {
        WAIT( 0 );
        if (sub_5993( ref l_U50 ))
        {
            sub_347( 0 );
            sub_5668( ref l_U52._fU0, 1, 1 );
        }
        if (g_U854._fU12 != -1)
        {
            sub_6130( ref g_U834, "www.libertytreeonline.com/news.html", g_U854._fU12, -1, -1 );
            g_U833 = 1;
        }
    }
    if (l_U48)
    {
        RELEASE_TEXTURE( l_U6 );
        REMOVE_TXD( l_U5 );
    }
    g_U860._fU16 = 0;
    return;
}

void sub_347(boolean bParam0)
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    l_U12 = 0;
    StrCopy( ref l_U20, "LCT", 16 );
    if (l_U51)
    {
        ConcatString(ref l_U20, GET_CURRENT_EPISODE(), 16);
    }
    ConcatString(ref l_U20, "_", 16);
    switch (l_U3 / 100)
    {
        case 0:
        l_U48 = 1;
        break;
        case 1:
        ConcatString(ref l_U20, "S1", 16);
        break;
        case 2:
        ConcatString(ref l_U20, "S2", 16);
        break;
    }
    sub_505( ref l_U7, "advert_medium_0", 3, 0 );
    if (NOT (sub_1326( 0, ref l_U8, l_U3, 5, 1 )))
    {
        sub_505( ref l_U8, "quick_link_table", 3, 1 );
    }
    l_U9 = CREATE_HTML_SCRIPT_OBJECT( "top_info" );
    if ((sub_3875( l_U4 )) < 2)
    {
        sub_1469( ref l_U9, "titexclusive.jpg", -1, 128, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U9, "<br/><br/>" );
    }
    l_U24 = {l_U20};
    ConcatString(ref l_U24, "HEAD_", 16);
    ConcatString(ref l_U24, l_U4, 16);
    sub_3131( ref l_U9, ref l_U24, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U9, "<br/>" );
    l_U10 = CREATE_HTML_SCRIPT_OBJECT( "photo" );
    l_U24 = {l_U20};
    ConcatString(ref l_U24, "SECH_", 16);
    ConcatString(ref l_U24, l_U4, 16);
    sub_3131( ref l_U10, ref l_U24, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U10, "<br/><br/>" );
    if (l_U48)
    {
        if (bParam0)
        {
            if (l_U51)
            {
                switch (l_U4)
                {
                    case 7:
                    l_U5 = LOAD_TXD( "e1:/pc/textures/webNews_222324" );
                    StrCopy( ref l_U28, "webNews_222324", 64 );
                    break;
                    case 10:
                    l_U5 = LOAD_TXD( "e1:/pc/textures/webNews_282930" );
                    StrCopy( ref l_U28, "webNews_282930", 64 );
                    break;
                    case 15:
                    l_U5 = LOAD_TXD( "e1:/pc/textures/webNews_789" );
                    StrCopy( ref l_U28, "webNews_789", 64 );
                    break;
                    case 16:
                    l_U5 = LOAD_TXD( "e1:/pc/textures/webNews_2021" );
                    StrCopy( ref l_U28, "webNews_2021", 64 );
                    break;
                    case 24:
                    l_U5 = LOAD_TXD( "e1:/pc/textures/webNews_101112" );
                    StrCopy( ref l_U28, "webNews_101112", 64 );
                    break;
                    case 30:
                    l_U5 = LOAD_TXD( "e1:/pc/textures/webNews_131415" );
                    StrCopy( ref l_U28, "webNews_131415", 64 );
                    break;
                }
                StrCopy( ref l_U44, "lts", 16 );
            }
            else
            {
                StrCopy( ref l_U28, "webLCTNews_", 64 );
                ConcatString(ref l_U28, l_U3 / 5, 64);
                sub_4659( ref l_U44, "storyPhoto", l_U3, -1, -1 );
                l_U5 = LOAD_TXD( ref l_U28 );
            }
            l_U6 = GET_TEXTURE( l_U5, ref l_U44 );
        }
        sub_4795( ref l_U10, ref l_U28, ref l_U44, 340, 176, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U10, "<br/><br/>" );
    }
    l_U11 = CREATE_HTML_SCRIPT_OBJECT( "reporter" );
    l_U24 = {l_U20};
    ConcatString(ref l_U24, "REP_", 16);
    ConcatString(ref l_U24, l_U4, 16);
    sub_3131( ref l_U11, ref l_U24, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U11, "<br/><br/>" );
    l_U13[0] = CREATE_HTML_SCRIPT_OBJECT( "newsStory" );
    l_U13[1] = CREATE_HTML_SCRIPT_OBJECT( "newsStory1" );
    l_U13[2] = CREATE_HTML_SCRIPT_OBJECT( "newsStory2" );
    l_U13[3] = CREATE_HTML_SCRIPT_OBJECT( "newsStory3" );
    l_U13[4] = CREATE_HTML_SCRIPT_OBJECT( "newsStory4" );
    l_U13[5] = CREATE_HTML_SCRIPT_OBJECT( "newsStory5" );
    l_U2 = 1;
    ConcatString(ref l_U20, "PAR_", 16);
    ConcatString(ref l_U20, l_U4, 16);
    ConcatString(ref l_U20, "_", 16);
    l_U24 = {l_U20};
    ConcatString(ref l_U24, l_U2, 16);
    sub_3675( ref l_U24 );
    l_U49 = 0;
    if (NOT l_U51)
    {
        if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U24 )))
        {
            ConcatString(ref l_U24, "L", 16);
            l_U49 = 1;
        }
    }
    while (DOES_TEXT_LABEL_EXIST( ref l_U24 ))
    {
        if (l_U49)
        {
            sub_5456( ref l_U13[l_U12], ref l_U24 );
        }
        else
        {
            sub_3131( ref l_U13[l_U12], ref l_U24, -1 );
        }
        ADD_TO_HTML_SCRIPT_OBJECT( l_U13[l_U12], "<br/><br/>" );
        l_U2++;
        l_U12++;
        l_U24 = {l_U20};
        ConcatString(ref l_U24, l_U2, 16);
        l_U49 = 0;
        if (NOT l_U51)
        {
            if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U24 )))
            {
                ConcatString(ref l_U24, "L", 16);
                l_U49 = 1;
            }
        }
    }
    return;
}

void sub_505(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[16] cVar6;
    unknown uVar10;

    (uParam0^) = CREATE_HTML_SCRIPT_OBJECT( uParam1 );
    StrCopy( ref cVar6, "WEBADDRESS_", 16 );
    ConcatString(ref cVar6, g_U950[uParam3], 16);
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
    string(ref cVar6, g_U950[uParam3], 16);
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

int sub_1326(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4)
{
    int I;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown[49] uVar11;

    iVar8 = 0;
    iVar9 = iParam2 mod 100;
    (uParam1^) = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    sub_1406( "\n newsStoryBeingRead is ", iParam2 );
    switch (uParam0)
    {
        case 0:
        sub_1469( uParam1, "titAlso.jpg", -1, 88, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "LATEST NEWS <br/><br/>" );
        break;
    }
    bVar10 = false;
    array(ref uVar11, 49);
    sub_1791( uParam0, ref uVar11 );
    for ( I = 48; I >= 1; I += -1 )
    {
        if (uVar11[I] != -1)
        {
            if ((bVar10) || (uVar11[I] == iVar9))
            {
                if (bVar10)
                {
                    sub_2559( uParam0, uParam1, uVar11[I], -1, ref iVar8, uParam4, iParam3 );
                    sub_3675( "\n adding other stories" );
                }
                else
                {
                    sub_2559( uParam0, uParam1, uVar11[I], iParam2 / 100, ref iVar8, uParam4, iParam3 );
                    sub_3675( "\n just found the story" );
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

void sub_1406(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1469(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

int sub_1791(unknown uParam0, unknown uParam1)
{
    int I;
    int J;

    (uParam1^)[0] = 0;
    for ( I = 1; I <= ((uParam1^) - 1); I++ )
    {
        (uParam1^)[I] = -1;
    }
    for ( I = 1; I <= (g_U1455 - 1); I++ )
    {
        if (IS_BIT_SET( g_U1455[I], 21 ))
        {
            (uParam1^)[GET_BITS_IN_RANGE( g_U1455[I], 22, 31 )] = I;
            (uParam1^)[0]++;
        }
    }
    sub_1936( uParam0, uParam1 );
    for ( I = 1; I <= (g_U1455 - 2); I++ )
    {
        if ((uParam1^)[I] == -1)
        {
            for ( J = I + 1; J <= (g_U1455 - 1); J++ )
            {
                if ((uParam1^)[J] != -1)
                {
                    (uParam1^)[I] = (uParam1^)[J];
                    (uParam1^)[I] = -1;
                    (uParam1^)[0]--;
                    J = g_U1455;
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

int sub_1936(int iParam0, unknown uParam1)
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

void sub_2559(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4, unknown uParam5, int iParam6)
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
            sub_2922( ref uVar20, ref cVar11[I], "LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_3017( uParam0, uParam1, uParam5 );
                sub_3131( uParam1, ref uVar20, iParam2 );
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
            sub_2922( ref uVar20, ref cVar11[I], "S1LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_3017( uParam0, uParam1, uParam5 );
                sub_3131( uParam1, ref uVar20, iParam2 + 100 );
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
            sub_2922( ref uVar20, ref cVar11[I], "S2LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_3017( uParam0, uParam1, uParam5 );
                sub_3131( uParam1, ref uVar20, iParam2 + 200 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    return;
}

void sub_2922(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
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

void sub_3017(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        switch (uParam0)
        {
            case 0:
            sub_1469( uParam1, "arrowBlack.jpg", -1, 16, 16 );
            break;
            case 2:
            sub_1469( uParam1, "arrow.jpg", -1, 16, 16 );
            break;
        }
    }
    return;
}

void sub_3131(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_3675(unknown uParam0)
{
    return;
}

void sub_3875(unknown uParam0)
{
    return GET_BITS_IN_RANGE( g_U1455[uParam0], 0, 8 );
}

void sub_4659(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_4795(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_5456(unknown uParam0, unknown uParam1)
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

void sub_5668(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_5679( uParam1 );
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
    sub_5817();
    return;
}

void sub_5679(boolean bParam0)
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

void sub_5817()
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

int sub_5993(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_6130(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
