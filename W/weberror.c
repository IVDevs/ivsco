void main()
{
    unknown uVar2;

    l_U87 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    LOAD_ADDITIONAL_TEXT( "EYESRCH", 1 );
    g_U857._fU324 = 0;
    sub_53( ref l_U6 );
    sub_178();
    uVar2 = CREATE_HTML_SCRIPT_OBJECT( "errorBox" );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "The following page does not exist " );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, ref l_U88._fU0 );
    sub_976( "www.eyefind.info/error.html", 1, 0 );
    return;
}

void sub_53(unknown uParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        (uParam0^)[I] = I;
    }
    for ( I = (uParam0^) - 1; I >= 1; I += -1 )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar5 );
        uVar4 = (uParam0^)[I];
        (uParam0^)[I] = (uParam0^)[uVar5];
        (uParam0^)[uVar5] = uVar4;
    }
    return;
}

void sub_178()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    for ( I = 0; I <= 4; I++ )
    {
        sub_226( ref uVar3, "randomSearch", I, -1, -1 );
        l_U0[I] = CREATE_HTML_SCRIPT_OBJECT( ref uVar3 );
        sub_226( ref uVar7, "EYE_SEARCH3", l_U6[l_U87], -1, -1 );
        sub_226( ref uVar3, "EYE_SEARCH1", l_U6[l_U87], -1, -1 );
        sub_412( ref l_U0[I], ref uVar3, GET_STRING_FROM_TEXT_FILE( ref uVar7 ) );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<br/>" );
        sub_226( ref uVar3, "EYE_SEARCH2", l_U6[l_U87], -1, -1 );
        sub_611( ref l_U0[I], ref uVar3, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<br/>" );
        sub_412( ref l_U0[I], ref uVar7, GET_STRING_FROM_TEXT_FILE( ref uVar7 ) );
        l_U87++;
        if (l_U87 == 80)
        {
            l_U87 = 0;
        }
    }
    return;
}

void sub_226(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_412(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_611(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_976(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_987( uParam1 );
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
    sub_1125();
    return;
}

void sub_987(boolean bParam0)
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

void sub_1125()
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
