void main()
{
    int iVar2;

    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U857._fU324 = 0;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    LOAD_ADDITIONAL_TEXT( "VIPRING", 1 );
    sub_66( ref l_U0._fU0, 1, 0 );
    iVar2 = -3;
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        if (g_U851._fU12 >= 1000)
        {
            sub_466( ref g_U831, "www.vipluxuryringtones.com/purchase.html", 1, g_U851._fU12 - 1000, -1 );
            g_U830 = 1;
        }
        else if (g_U851._fU12 >= 0)
        {
            STOP_PREVIEW_RINGTONE();
            iVar2 = g_U851._fU12;
        }
        else if ((iVar2 == -2) AND (TIMERA() > 250000))
        {
            STOP_PREVIEW_RINGTONE();
            iVar2 = -3;
        }
        else if ((iVar2 != -3) AND (iVar2 != -2))
        {
            STOP_PREVIEW_RINGTONE();
            PREVIEW_RINGTONE( iVar2 + 22 );
            sub_681( "\n CALLED RINGTONE TO BE PLAYED ", iVar2 + 22 );
            SETTIMERA( 0 );
            iVar2 = -2;
        };;;;
    }
    STOP_PREVIEW_RINGTONE();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    g_U857._fU16 = 0;
    return;
}

void sub_66(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_77( uParam1 );
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
    sub_215();
    return;
}

void sub_77(boolean bParam0)
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

void sub_215()
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

void sub_466(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

void sub_681(unknown uParam0, unknown uParam1)
{
    return;
}
