void main()
{
    char[64] cVar2;

    StrCopy( ref cVar2, "www.our-own-reality.com/a1.html", 64 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U857._fU324 = 0;
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    switch (g_U963)
    {
        case 1:
        StrCopy( ref cVar2, "www.our-own-reality.com/b1.html", 64 );
        break;
        case 2:
        StrCopy( ref cVar2, "www.our-own-reality.com/c1.html", 64 );
        break;
        case 3:
        StrCopy( ref cVar2, "www.our-own-reality.com/d1.html", 64 );
        break;
        case 4:
        StrCopy( ref cVar2, "www.our-own-reality.com/e1.html", 64 );
        break;
    }
    sub_286( ref cVar2, 1, 0 );
    return;
}

void sub_286(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_297( uParam1 );
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
    sub_435();
    return;
}

void sub_297(boolean bParam0)
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

void sub_435()
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
