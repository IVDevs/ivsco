void main()
{
    int iVar2;

    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U857._fU324 = 0;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    LOAD_ADDITIONAL_TEXT( "VIPRING", 1 );
    l_U15 = 0;
    if (GET_CURRENT_DAY_OF_WEEK() != g_U1434._fU64)
    {
        sub_86();
    }
    sub_676();
    sub_1746( ref l_U22._fU0, 1, 0 );
    iVar2 = -2;
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        if (GET_CURRENT_DAY_OF_WEEK() != g_U1434._fU64)
        {
            DELETE_ALL_HTML_SCRIPT_OBJECTS();
            sub_86();
            sub_676();
            RELOAD_WEB_PAGE( g_U857._fU4 );
        }
        switch (g_U851._fU12)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            STOP_PREVIEW_RINGTONE();
            iVar2 = g_U1434._fU4[g_U851._fU12];
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            sub_2394( ref g_U831, "www.vipluxuryringtones.com/purchase.html", 0, g_U1434._fU4[g_U851._fU12 - 4], -1 );
            g_U830 = 1;
            break;
            case 8:
            case 9:
            case 10:
            case 11:
            STOP_PREVIEW_RINGTONE();
            iVar2 = g_U1434._fU24[g_U851._fU12 - 8];
            break;
            case 12:
            case 13:
            case 14:
            case 15:
            sub_2394( ref g_U831, "www.vipluxuryringtones.com/purchase.html", 1, g_U1434._fU24[g_U851._fU12 - 12], -1 );
            g_U830 = 1;
            break;
            case 16:
            case 17:
            case 18:
            case 19:
            sub_2394( ref g_U831, "www.vipluxuryringtones.com/purchase.html", 2, g_U1434._fU44[g_U851._fU12 - 16], -1 );
            g_U830 = 1;
            break;
            default:
            if ((iVar2 == -1) AND (TIMERA() > 250000))
            {
                STOP_PREVIEW_RINGTONE();
                iVar2 = -2;
            }
            else if ((iVar2 != -2) AND (iVar2 != -1))
            {
                if (iVar2 == 38)
                {
                    STOP_PREVIEW_RINGTONE();
                    PREVIEW_RINGTONE( 62 );
                    sub_2782( "\n CALLED RINGTONE TO BE PLAYED 62" );
                }
                else if (iVar2 == 39)
                {
                    STOP_PREVIEW_RINGTONE();
                    PREVIEW_RINGTONE( 63 );
                    sub_2782( "\n CALLED RINGTONE TO BE PLAYED 63" );
                }
                else
                {
                    STOP_PREVIEW_RINGTONE();
                    PREVIEW_RINGTONE( iVar2 + 22 );
                    sub_2935( "\n CALLED RINGTONE TO BE PLAYED, ", iVar2 + 22 );
                }
                SETTIMERA( 0 );
                iVar2 = -1;
            }
            break;
        }
    }
    STOP_PREVIEW_RINGTONE();
    sub_1128();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    g_U857._fU16 = 0;
    return;
}

void sub_86()
{
    int I;
    int[11] iVar3;
    unknown uVar15;
    unknown uVar16;

    array(ref iVar3, 11);
    g_U1434._fU4[0] = 31;
    g_U1434._fU4[1] = 38;
    g_U1434._fU4[2] = 39;
    GENERATE_RANDOM_INT_IN_RANGE( 16, 27, ref g_U1434._fU4[3] );
    for ( I = 3; I >= 1; I += -1 )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar15 );
        uVar16 = g_U1434._fU4[I];
        g_U1434._fU4[I] = g_U1434._fU4[uVar15];
        g_U1434._fU4[uVar15] = uVar16;
    }
    for ( I = 0; I <= 7; I++ )
    {
        iVar3[I] = I + 27;
    }
    iVar3[4] = 35;
    for ( I = 7; I >= 1; I += -1 )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar15 );
        uVar16 = iVar3[I];
        iVar3[I] = iVar3[uVar15];
        iVar3[uVar15] = uVar16;
    }
    for ( I = 0; I <= (g_U1434._fU24 - 1); I++ )
    {
        g_U1434._fU24[I] = iVar3[I];
    }
    for ( I = 0; I <= 10; I++ )
    {
        iVar3[I] = I + 1;
        sub_457( "\n theme array pos set to ", I, I + 1 );
    }
    for ( I = 10; I >= 1; I += -1 )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar15 );
        uVar16 = iVar3[I];
        iVar3[I] = iVar3[uVar15];
        iVar3[uVar15] = uVar16;
    }
    for ( I = 0; I <= (g_U1434._fU44 - 1); I++ )
    {
        g_U1434._fU44[I] = iVar3[I];
        sub_457( "\n the theme values are ", I, g_U1434._fU44[I] );
    }
    g_U1434._fU64 = GET_CURRENT_DAY_OF_WEEK();
    return;
}

void sub_457(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return;
}

void sub_676()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    for ( I = 0; I <= 3; I++ )
    {
        sub_709( ref uVar3, "mono", I, -1, -1 );
        l_U0[I] = CREATE_HTML_SCRIPT_OBJECT( ref uVar3 );
        sub_709( ref uVar3, "CP_RINGTONE", g_U1434._fU4[I], -1, -1 );
        sub_857( ref l_U0[I], ref uVar3, -1 );
    }
    for ( I = 0; I <= 3; I++ )
    {
        sub_709( ref uVar3, "poly", I, -1, -1 );
        l_U5[I] = CREATE_HTML_SCRIPT_OBJECT( ref uVar3 );
        sub_709( ref uVar3, "CP_RINGTONE", g_U1434._fU24[I], -1, -1 );
        sub_857( ref l_U5[I], ref uVar3, -1 );
    }
    sub_1128();
    sub_1208();
    for ( I = 0; I <= 3; I++ )
    {
        sub_709( ref uVar3, "theme", I, -1, -1 );
        l_U10[I] = CREATE_HTML_SCRIPT_OBJECT( ref uVar3 );
        sub_709( ref uVar3, "webTheme", g_U1434._fU44[I], -1, -1 );
        sub_1449( ref l_U10[I], "webThemesVIP", ref uVar3, 120, 120, I + 16 );
    }
    return;
}

void sub_709(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_857(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1128()
{
    int I;

    if (l_U15)
    {
        for ( I = 0; I <= (l_U17 - 1); I++ )
        {
            RELEASE_TEXTURE( l_U17[I] );
        }
        REMOVE_TXD( l_U16 );
        l_U15 = 0;
    }
    return;
}

void sub_1208()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT l_U15)
    {
        l_U16 = LOAD_TXD( "webThemesVIP" );
        for ( I = 0; I <= (l_U17 - 1); I++ )
        {
            sub_709( ref uVar3, "webTheme", g_U1434._fU44[I], -1, -1 );
            l_U17[I] = GET_TEXTURE( l_U16, ref uVar3 );
        }
        l_U15 = 1;
    }
    return;
}

void sub_1449(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_1746(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_1757( uParam1 );
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
    sub_1895();
    return;
}

void sub_1757(boolean bParam0)
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

void sub_1895()
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

void sub_2394(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

void sub_2782(unknown uParam0)
{
    return;
}

void sub_2935(unknown uParam0, unknown uParam1)
{
    return;
}
