void main()
{
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    LOAD_ADDITIONAL_TEXT( "BLOGEL", 1 );
    g_U860._fU324 = 0;
    l_U2 = 10;
    l_U29 = l_U33._fU64[0];
    l_U30 = -1;
    l_U31 = -1;
    for ( l_U0 = 0; l_U0 <= 9; l_U0++ )
    {
        l_U3[l_U0] = l_U0;
    }
    for ( l_U0 = 0; l_U0 <= 3; l_U0++ )
    {
        l_U1 = GET_BITS_IN_RANGE( g_U956, l_U0 * 3, (l_U0 * 3) + 2 );
        if (l_U1 != 7)
        {
            l_U3[l_U1 + 10] = l_U0 + 10;
            l_U2++;
        }
    }
    if (l_U29 == -1)
    {
        l_U29 = l_U2 - 1;
    }
    if (l_U29 < (l_U2 - 1))
    {
        l_U30 = l_U29 + 6;
        if (l_U30 > (l_U2 - 1))
        {
            l_U30 = l_U2 - 1;
        }
    }
    if (l_U29 > 5)
    {
        l_U31 = l_U29 - 6;
    }
    sub_276();
    sub_1548( ref l_U33._fU0, 1, 0 );
    while (NOT g_U860._fU16)
    {
        WAIT( 0 );
        switch (g_U854._fU12)
        {
            case 2:
            if (l_U31 != -1)
            {
                sub_1946( ref g_U834, "eddielowfilthslayer.blogsnobs.org", l_U31, -1, -1 );
                g_U833 = 1;
            }
            break;
            default:
        }
    }
    g_U860._fU16 = 0;
    return;
}

void sub_276()
{
    boolean bVar2;
    int iVar3;

    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    for ( l_U0 = 0; l_U0 <= 5; l_U0++ )
    {
        sub_326( ref l_U18, "edBlogText", l_U0, -1, -1 );
        l_U22[l_U0] = CREATE_HTML_SCRIPT_OBJECT( ref l_U18 );
    }
    for ( l_U0 = 0; l_U0 <= 5; l_U0++ )
    {
        if ((l_U29 - l_U0) >= 0)
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "<span class="refont">" );
            if (NOT IS_JAPANESE_VERSION())
            {
                ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], GET_STRING_FROM_TEXT_FILE( "BLOG_UPDATED" ) );
            }
            else
            {
                ADD_STRING_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "BLOG_UPDATED" );
            }
            ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "&nbsp;" );
            if ((l_U29 - l_U0) == (l_U2 - 1))
            {
                ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "40&nbsp;" );
                if (NOT IS_JAPANESE_VERSION())
                {
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], GET_STRING_FROM_TEXT_FILE( "BLOG_MINUTES" ) );
                }
                else
                {
                    ADD_STRING_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "BLOG_MINUTES" );
                }
            }
            else
            {
                string(ref l_U18, ((l_U2 - (l_U29 - l_U0)) - 1) * 2, 16);
                ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], ref l_U18 );
                ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "&nbsp;" );
                if (NOT IS_JAPANESE_VERSION())
                {
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], GET_STRING_FROM_TEXT_FILE( "BLOG_DAYS" ) );
                }
                else
                {
                    ADD_STRING_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "BLOG_DAYS" );
                }
            }
            ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "<br/><br/>" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "</span>" );
            bVar2 = true;
            iVar3 = 1;
            while (bVar2)
            {
                sub_326( ref l_U18, "BLOGEL", l_U3[l_U29 - l_U0], iVar3, -1 );
                if (DOES_TEXT_LABEL_EXIST( ref l_U18 ))
                {
                    sub_1018( ref l_U22[l_U0], ref l_U18, -1 );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "<br/>" );
                    iVar3++;
                }
                else
                {
                    bVar2 = false;
                }
            }
            ADD_TO_HTML_SCRIPT_OBJECT( l_U22[l_U0], "<br/><br/>" );
        }
    }
    l_U32 = CREATE_HTML_SCRIPT_OBJECT( "eddieBlogNav" );
    if (l_U30 != -1)
    {
        sub_1326( ref l_U32, "BLOG_NEXT_POSTS", "BACK" );
        if (l_U31 != -1)
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U32, "&nbsp;" );
        }
    }
    if (l_U31 != -1)
    {
        sub_1018( ref l_U32, "BLOG_PREV_POSTS", 2 );
    }
    return;
}

void sub_326(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_1018(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1326(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_1548(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_1559( uParam1 );
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
    sub_1697();
    return;
}

void sub_1559(boolean bParam0)
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

void sub_1697()
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

void sub_1946(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
