void main()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;
    boolean bVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;

    l_U0 = 2;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    fVar3 = 0.00000000;
    bVar4 = true;
    bVar5 = false;
    SETTIMERA( 0 );
    while (bVar4)
    {
        WAIT( 0 );
        bVar5 = true;
        if (NOT g_U10978)
        {
            if (IS_PLAYER_PLAYING( sub_70() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_113() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_113() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_113(), ref uVar2 );
                        if (NOT (IS_CAR_DEAD( uVar2 )))
                        {
                            bVar5 = false;
                            if (TIMERA() > 5000)
                            {
                                GET_CAR_SPEED( uVar2, ref fVar3 );
                                if (fVar3 > 17.00000000)
                                {
                                    if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                                    {
                                        if (sub_270( l_U0 ))
                                        {
                                            PRINT_HELP( "CARDIVE" );
                                            bVar4 = false;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (bVar5)
        {
            SETTIMERA( 0 );
        }
    }
    WAIT( 15000 );
    sub_497( l_U0 );
    while (NOT g_U15654[10])
    {
        WAIT( 5000 );
    }
    bVar4 = true;
    SETTIMERA( 0 );
    while (bVar4)
    {
        WAIT( 0 );
        bVar5 = true;
        if (NOT g_U10978)
        {
            if (IS_PLAYER_PLAYING( sub_70() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_113() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_113() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_113(), ref uVar2 );
                        if (NOT (IS_CAR_DEAD( uVar2 )))
                        {
                            bVar5 = false;
                            if (TIMERA() > 5000)
                            {
                                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (sub_270( l_U0 ))
                                    {
                                        PRINT_HELP( "CARCAMS" );
                                        bVar4 = false;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (bVar5)
        {
            SETTIMERA( 0 );
        }
    }
    WAIT( 6000 );
    sub_497( l_U0 );
    iVar6 = 2;
    iVar7 = nil;
    while (iVar6 > 0)
    {
        bVar4 = true;
        SETTIMERA( 0 );
        while (bVar4)
        {
            WAIT( 0 );
            iVar7 = nil;
            bVar5 = true;
            if (NOT g_U10978)
            {
                if (IS_PLAYER_PLAYING( sub_70() ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_113() )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_113() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_113(), ref uVar2 );
                            if (NOT (IS_CAR_DEAD( uVar2 )))
                            {
                                GET_CINEMATIC_CAM( ref iVar7 );
                                if (NOT (iVar7 == nil))
                                {
                                    bVar5 = false;
                                    if (TIMERA() > 5000)
                                    {
                                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                                        {
                                            if (sub_270( l_U0 ))
                                            {
                                                PRINT_HELP( "CINMODE" );
                                                bVar4 = false;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (bVar5)
            {
                SETTIMERA( 0 );
            }
        }
        bVar8 = true;
        SETTIMERA( 0 );
        while (TIMERA() < 6000)
        {
            WAIT( 0 );
            iVar7 = nil;
            GET_CINEMATIC_CAM( ref iVar7 );
            if (iVar7 == nil)
            {
                bVar8 = false;
            }
        }
        sub_497( l_U0 );
        while (bVar8)
        {
            WAIT( 0 );
            iVar7 = nil;
            GET_CINEMATIC_CAM( ref iVar7 );
            if (iVar7 == nil)
            {
                bVar8 = false;
            }
        }
        iVar6--;
        if (iVar6 > 0)
        {
            WAIT( 60000 );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_70()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_113()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_270(int iParam0)
{
    int iVar3;

    iVar3 = g_U64522[iParam0];
    if (g_U64539 == iParam0)
    {
        return 1;
    }
    if (g_U64541 == iParam0)
    {
        if (iVar3 <= g_U64538)
        {
            return 0;
        }
        g_U64538 = g_U64540;
        g_U64539 = g_U64541;
        g_U64540 = 0;
        g_U64541 = 16;
        return 1;
    }
    if (iVar3 <= g_U64540)
    {
        return 0;
    }
    g_U64540 = iVar3;
    g_U64541 = iParam0;
    return 0;
}

void sub_497(unknown uParam0)
{
    if (NOT (sub_508( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

boolean sub_508(int iParam0)
{
    return iParam0 == g_U64539;
}
