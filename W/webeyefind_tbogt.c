void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    char[16] cVar6;
    char[16] cVar10;
    char[64] cVar14;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    char[16] cVar33;
    unknown uVar37;
    char[16] cVar38;
    char[16] cVar42;
    unknown[3] uVar46;
    unknown uVar50;
    unknown[3] uVar51;
    char[16] cVar55;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;

    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    g_U864._fU324 = 0;
    uVar2 = CREATE_HTML_SCRIPT_OBJECT( "advert_xlarge_0" );
    if (g_U953 != -1)
    {
        iVar5 = g_U953;
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref iVar5 );
    }
    StrCopy( ref cVar10, "advert_", 16 );
    ConcatString(ref cVar10, iVar5 mod 5, 16);
    if (iVar5 >= 5)
    {
        if (# -NULL-0xc27c84())
        {
            StrCopy( ref cVar14, "e2:/xbox360/textures/eyeAdvert_", 64 );
        }
        else if (# -NULL-0xc27bfa())
        {
            StrCopy( ref cVar14, "e2:/pc/textures/eyeAdvert_", 64 );
        }
        ConcatString(ref cVar14, iVar5 / 5, 64);
    }
    else
    {
        StrCopy( ref cVar14, "eyeAdvert_", 64 );
        ConcatString(ref cVar14, iVar5 / 5, 64);
    }
    uVar3 = LOAD_TXD( ref cVar14 );
    uVar4 = GET_TEXTURE( uVar3, ref cVar10 );
    StrCopy( ref cVar6, "EYEADDRESS_", 16 );
    ConcatString(ref cVar6, iVar5, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "<a href="" );
    uVar30 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref cVar6 );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, GET_FIRST_N_CHARACTERS_OF_STRING( ref cVar6, uVar30 ) );
    StrCopy( ref cVar14, "eyeAdvert_", 64 );
    ConcatString(ref cVar14, iVar5 / 5, 64);
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "">" );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "<img src="" );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, ref cVar10 );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "" txd="" );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, ref cVar14 );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "" width="404" height="204" border="0"/></a>" );
    uVar31 = CREATE_HTML_SCRIPT_OBJECT( "userName" );
    uVar32 = CREATE_HTML_SCRIPT_OBJECT( "totalEmails" );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar31, ref g_U864._fU76 );
    if (g_U864._fU40 == -1)
    {
        string(ref cVar33, sub_600(), 16);
    }
    else
    {
        string(ref cVar33, sub_1125(), 16);
    }
    ADD_TO_HTML_SCRIPT_OBJECT( uVar32, ref cVar33 );
    sub_1221();
    uVar37 = CREATE_HTML_SCRIPT_OBJECT( "libTreeLink" );
    switch (GET_CURRENT_EPISODE())
    {
        default:
        StrCopy( ref cVar38, "LCT", 16 );
        ConcatString(ref cVar38, GET_CURRENT_EPISODE(), 16);
        cVar42 = {cVar38};
        ConcatString(ref cVar42, "_HEAD", 16);
        ConcatString(ref cVar38, "_LINK_", 16);
        ConcatString(ref cVar38, g_U1458, 16);
        if (DOES_TEXT_LABEL_EXIST( ref cVar38 ))
        {
            StrCopy( ref cVar38, "LBTR", 16 );
            ConcatString(ref cVar38, GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar38, g_U1458, 16);
            break;
        }
        case 0:
        StrCopy( ref cVar38, "LIBTR", 16 );
        ConcatString(ref cVar38, g_U1458, 16);
        StrCopy( ref cVar42, "LCT_HEAD", 16 );
        break;
    }
    LOAD_ADDITIONAL_TEXT( ref cVar38, 1 );
    sub_2448( ref cVar38, ref cVar42, g_U1458, -1, -1 );
    sub_2586( ref uVar37, ref cVar38, "www.libertytreeonline.com/news.html" );
    array(ref uVar46, 3);
    uVar46[0] = CREATE_HTML_SCRIPT_OBJECT( "tvAdvert_0" );
    uVar46[1] = CREATE_HTML_SCRIPT_OBJECT( "tvAdvert_1" );
    uVar46[2] = CREATE_HTML_SCRIPT_OBJECT( "tvAdvert_2" );
    uVar50 = LOAD_TXD( "webTVadverts" );
    array(ref uVar51, 3);
    array(ref cVar55, 3);
    switch (GET_CURRENT_DAY_OF_WEEK())
    {
        case 0:
        StrCopy( ref cVar55[0], "tvadvert_9", 16 );
        StrCopy( ref cVar55[1], "tvadvert_5", 16 );
        StrCopy( ref cVar55[2], "tvadvert_2", 16 );
        break;
        case 1:
        StrCopy( ref cVar55[0], "tvadvert_8", 16 );
        StrCopy( ref cVar55[1], "tvadvert_0", 16 );
        StrCopy( ref cVar55[2], "tvadvert_3", 16 );
        break;
        case 2:
        StrCopy( ref cVar55[0], "tvadvert_7", 16 );
        StrCopy( ref cVar55[1], "tvadvert_2", 16 );
        StrCopy( ref cVar55[2], "tvadvert_1", 16 );
        break;
        case 3:
        StrCopy( ref cVar55[0], "tvadvert_9", 16 );
        StrCopy( ref cVar55[1], "tvadvert_0", 16 );
        StrCopy( ref cVar55[2], "tvadvert_2", 16 );
        break;
        case 4:
        StrCopy( ref cVar55[0], "tvadvert_7", 16 );
        StrCopy( ref cVar55[1], "tvadvert_1", 16 );
        StrCopy( ref cVar55[2], "tvadvert_3", 16 );
        break;
        case 5:
        StrCopy( ref cVar55[0], "tvadvert_8", 16 );
        StrCopy( ref cVar55[1], "tvadvert_2", 16 );
        StrCopy( ref cVar55[2], "tvadvert_4", 16 );
        break;
        case 6:
        StrCopy( ref cVar55[0], "tvadvert_8", 16 );
        StrCopy( ref cVar55[1], "tvadvert_6", 16 );
        StrCopy( ref cVar55[2], "tvadvert_1", 16 );
        break;
    }
    uVar51[0] = GET_TEXTURE( uVar50, ref cVar55[0] );
    uVar51[1] = GET_TEXTURE( uVar50, ref cVar55[1] );
    uVar51[2] = GET_TEXTURE( uVar50, ref cVar55[2] );
    sub_3539( ref uVar46[0], "webTVadverts", ref cVar55[0], 128, 105, -1 );
    sub_3539( ref uVar46[1], "webTVadverts", ref cVar55[1], 128, 105, -1 );
    sub_3539( ref uVar46[2], "webTVadverts", ref cVar55[2], 128, 105, -1 );
    sub_3899( ref l_U6._fU0, 1, 0 );
    while (NOT g_U864._fU16)
    {
        WAIT( 0 );
    }
    RELEASE_TEXTURE( uVar4 );
    REMOVE_TXD( uVar3 );
    RELEASE_TEXTURE( uVar51[0] );
    RELEASE_TEXTURE( uVar51[1] );
    RELEASE_TEXTURE( uVar51[2] );
    REMOVE_TXD( uVar50 );
    g_U864._fU16 = 0;
    return;
}

void sub_600()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_637( 4, g_U975[I] )) == 0)
        {
            Result++;
        }
    }
    return Result;
}

int sub_637(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_1125()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 2; I++ )
    {
        if ((sub_637( 4, g_U1376[I] )) == 0)
        {
            Result++;
        }
    }
    return Result;
}

void sub_1221()
{
    sub_1254( ref l_U0[0], "advert_small_0", 4, 0 );
    sub_1254( ref l_U0[1], "advert_small_1", 4, 1 );
    sub_1254( ref l_U0[2], "advert_small_2", 4, 2 );
    sub_1254( ref l_U0[3], "advert_small_3", 4, 3 );
    sub_1254( ref l_U0[4], "advert_small_4", 4, 4 );
    return;
}

void sub_1254(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_2448(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_2586(unknown uParam0, unknown uParam1, unknown uParam2)
{
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam2 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<text name="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    return;
}

void sub_3539(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_3899(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_3910( uParam1 );
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
    sub_4048();
    return;
}

void sub_3910(boolean bParam0)
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

void sub_4048()
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
