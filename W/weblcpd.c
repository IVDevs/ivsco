void main()
{
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    switch (GET_HASH_KEY( ref l_U0._fU0 ))
    {
        case 182513705:
        LOAD_ADDITIONAL_TEXT( "LCPDAE", 1 );
        break;
        case 1635665666:
        LOAD_ADDITIONAL_TEXT( "LCPDFJ", 1 );
        break;
        case 1814895393:
        LOAD_ADDITIONAL_TEXT( "LCPDKO", 1 );
        break;
        case 373323254:
        LOAD_ADDITIONAL_TEXT( "LCPDPU", 1 );
        break;
        case 449497129:
        LOAD_ADDITIONAL_TEXT( "LCPDVZ", 1 );
        break;
    }
    g_U857._fU324 = 0;
    sub_201( ref l_U0._fU0, 1, 0 );
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        if (g_U851._fU12 != -1)
        {
            sub_590( ref g_U831, "www.libertycitypolice.com/profile.html", g_U851._fU12, -1, -1 );
            g_U830 = 1;
        }
    }
    g_U857._fU16 = 0;
    return;
}

void sub_201(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_212( uParam1 );
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
    sub_350();
    return;
}

void sub_212(boolean bParam0)
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

void sub_350()
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

void sub_590(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
