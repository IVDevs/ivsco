void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U100 = 0;
    l_U101 = 1;
    l_U102 = 3;
    l_U183 = 0;
    l_U184 = 0;
    l_U350 = 1;
    l_U351 = 1;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 0 );
        switch (l_U183)
        {
            case 0:
            sub_124();
            break;
            case 1: break;
            case 2:
            for ( l_U238 = 0; l_U238 < 12; l_U238++ )
            {
                if ((g_U43709[l_U238]) AND (NOT g_U43741[l_U238]))
                {
                    if ((l_U212[l_U238] == 31) AND (l_U225[l_U238] == 12))
                    {
                        GET_CURRENT_DATE( ref l_U212[l_U238], ref l_U225[l_U238] );
                        sub_1421( l_U258[l_U238], 1 );
                    }
                }
            }
            switch (l_U184)
            {
                case 0:
                GET_CURRENT_DATE( ref l_U350, ref l_U351 );
                l_U184 = 1;
                break;
                case 1:
                if (NOT l_U317)
                {
                    GET_CURRENT_DATE( ref l_U240, ref l_U241 );
                    l_U239 = GET_HOURS_OF_DAY();
                    if (l_U239 >= l_U198)
                    {
                        l_U349 = COMPARE_TWO_DATES( l_U241, l_U240, l_U351, l_U350 );
                        if (l_U349 > 3)
                        {
                            l_U348 = sub_1771();
                            if (NOT (l_U348 == -1))
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U310 );
                                l_U184 = 2;
                            }
                        }
                    }
                }
                for ( l_U238 = 0; l_U238 < 12; l_U238++ )
                {
                    if (NOT l_U317)
                    {
                        if (sub_2143( l_U258[l_U238], 1, 0 ))
                        {
                            if (sub_1870( l_U238 ))
                            {
                                if (sub_2480())
                                {
                                    l_U348 = l_U238;
                                    l_U184 = 3;
                                }
                                else
                                {
                                    l_U348 = l_U238;
                                    l_U316 = 98;
                                    l_U184 = 3;
                                }
                            }
                            else
                            {
                                l_U348 = l_U238;
                                l_U316 = 98;
                                l_U184 = 3;
                            }
                        }
                    }
                    else
                    {
                        l_U348 = l_U238;
                        l_U316 = 98;
                        l_U184 = 3;
                    }
                }
                for ( l_U238 = 0; l_U238 < 12; l_U238++ )
                {
                    if (NOT l_U317)
                    {
                        if ((l_U239 > 15) AND (l_U239 < 18))
                        {
                            if (sub_3113( l_U238 ))
                            {
                                if (sub_3291( 1 ))
                                {
                                    l_U348 = l_U238;
                                    l_U184 = 4;
                                }
                            }
                        }
                    }
                }
                break;
                case 2:
                if (NOT (g_U43754[l_U348] > 2))
                {
                    if (l_U318[l_U348] == 1)
                    {
                        if (l_U315 == 0)
                        {
                            if (sub_3291( 1 ))
                            {
                                sub_4015( l_U284[l_U348], l_U297[l_U348] );
                                l_U297[l_U348]++;
                                l_U315++;
                            }
                            else
                            {
                                GET_CURRENT_DATE( ref l_U311, ref l_U312 );
                                l_U313 = COMPARE_TWO_DATES( l_U312, l_U311, l_U241, l_U240 );
                                if (l_U313 > 0)
                                {
                                    sub_6560( 0 );
                                }
                            }
                        }
                        if (l_U315 == 1)
                        {
                            GET_CURRENT_DATE( ref l_U311, ref l_U312 );
                            l_U313 = COMPARE_TWO_DATES( l_U312, l_U311, l_U241, l_U240 );
                            if (l_U313 > 0)
                            {
                                sub_6560( 1 );
                            }
                            else if ((sub_6727( ref l_U331 )) == 3)
                            {
                                if (sub_3291( 0 ))
                                {
                                    g_U43725 = l_U348;
                                    g_U43726 = l_U240;
                                    l_U350 = l_U240;
                                    l_U351 = l_U241;
                                    l_U212[l_U348] = l_U240;
                                    l_U225[l_U348] = l_U241;
                                    l_U318[l_U348] = 0;
                                    l_U184 = 5;
                                }
                            }
                        }
                    }
                    else if (l_U310 > 3)
                    {
                        if (l_U314 == 0)
                        {
                            if (sub_3291( 1 ))
                            {
                                sub_6997();
                                sub_8605( ref l_U353[l_U348]._fU0, l_U339[0], "END" );
                                sub_8605( ref l_U353[l_U348]._fU84, l_U339[1], l_U339[2] );
                                sub_8605( ref l_U353[l_U348]._fU120, l_U339[3], l_U339[4] );
                                if (sub_9096( l_U258[l_U348], ref l_U353[l_U348]._fU0, ref l_U353[l_U348]._fU84, ref l_U353[l_U348]._fU120, "Booty1", l_U345, 10000 ))
                                {
                                    l_U314++;
                                }
                                else
                                {
                                    sub_6560( 1 );
                                }
                            }
                        }
                        if (l_U314 == 1)
                        {
                            PRINTNL();
                            PRINTSTRING( "In iWomanCallStage = 1" );
                            if (NOT (sub_12282() == 0))
                            {
                                if (sub_12282() == 7)
                                {
                                    PRINTNL();
                                    PRINTSTRING( "Call ended yes" );
                                    l_U314++;
                                }
                                if (((sub_12282() == 8) || (sub_12282() == 2)) || (sub_12282() == 1))
                                {
                                    sub_6560( 1 );
                                }
                            }
                        }
                        if (l_U314 == 2)
                        {
                            PRINTNL();
                            PRINTSTRING( "In iWomanCallStage = 2" );
                            if (sub_3291( 0 ))
                            {
                                g_U43725 = l_U348;
                                g_U43726 = l_U240;
                                l_U350 = l_U240;
                                l_U351 = l_U241;
                                l_U212[l_U348] = l_U240;
                                l_U225[l_U348] = l_U241;
                                l_U184 = 5;
                            }
                        }
                    }
                    if (l_U310 < 4)
                    {
                        if (l_U315 == 0)
                        {
                            if (sub_3291( 1 ))
                            {
                                sub_4015( l_U284[l_U348], l_U297[l_U348] );
                                l_U297[l_U348]++;
                                if (l_U297[l_U348] > 3)
                                {
                                    l_U297[l_U348] = 1;
                                }
                                l_U315++;
                            }
                            else
                            {
                                GET_CURRENT_DATE( ref l_U311, ref l_U312 );
                                l_U313 = COMPARE_TWO_DATES( l_U312, l_U311, l_U241, l_U240 );
                                if (l_U313 > 0)
                                {
                                    sub_6560( 1 );
                                }
                            }
                        }
                        if (l_U315 == 1)
                        {
                            GET_CURRENT_DATE( ref l_U311, ref l_U312 );
                            l_U313 = COMPARE_TWO_DATES( l_U312, l_U311, l_U241, l_U240 );
                            if (l_U313 > 0)
                            {
                                sub_6560( 1 );
                            }
                            else if ((sub_6727( ref l_U331 )) == 3)
                            {
                                if (sub_3291( 0 ))
                                {
                                    g_U43725 = l_U348;
                                    g_U43726 = l_U240;
                                    l_U350 = l_U240;
                                    l_U351 = l_U241;
                                    l_U212[l_U348] = l_U240;
                                    l_U225[l_U348] = l_U241;
                                    l_U184 = 5;
                                }
                            }
                        }
                    }
                }
                break;
                case 3:
                if (l_U316 == 0)
                {
                    if ((sub_2480()) AND (sub_1870( l_U348 )))
                    {
                        if (sub_2143( l_U258[l_U348], 1, 0 ))
                        {
                            sub_13050( l_U348 );
                            sub_14153( ref l_U353[l_U348]._fU0, l_U339[0], l_U339[1], l_U339[2] );
                            sub_14234( ref l_U353[l_U348]._fU0, l_U345, 1 );
                            l_U316++;
                        }
                    }
                }
                if (l_U316 == 1)
                {
                    if ((sub_14410( 0 )) || (sub_12282() == 2))
                    {
                        l_U316++;
                    }
                }
                if (l_U316 == 2)
                {
                    g_U43725 = l_U348;
                    l_U318[l_U348] = 0;
                    g_U43726 = l_U240;
                    l_U350 = l_U240;
                    l_U351 = l_U241;
                    l_U212[l_U348] = l_U240;
                    l_U225[l_U348] = l_U241;
                    l_U184 = 5;
                }
                if (l_U316 == 98)
                {
                    sub_14819();
                    sub_15639( l_U339[0], l_U345, 1 );
                    l_U316 = 99;
                }
                if (l_U316 == 99)
                {
                    if ((sub_14410( 0 )) || (sub_12282() == 2))
                    {
                        l_U316 = 0;
                        l_U184 = 1;
                    }
                }
                break;
                case 4:
                if (sub_3291( 1 ))
                {
                    if (l_U315 == 0)
                    {
                        l_U297[l_U348] = 5;
                        sub_4015( l_U284[l_U348], l_U297[l_U348] );
                        l_U315++;
                    }
                    if (l_U315 == 1)
                    {
                        g_U43709[l_U348] = 0;
                        g_U43741[l_U348] = 0;
                        g_U43754[l_U348] = 0;
                        l_U318[l_U348] = 1;
                        l_U212[l_U348] = 31;
                        l_U225[l_U348] = 12;
                        l_U297[l_U348] = 1;
                        g_U43724--;
                        sub_16114( l_U258[l_U348] );
                        l_U315 = 0;
                        l_U314 = 0;
                        l_U316 = 0;
                        l_U348 = -1;
                        l_U184 = 1;
                    }
                }
                break;
                case 5:
                if (NOT g_U43722)
                {
                    if (HAS_SCRIPT_LOADED( "BootyCall" ))
                    {
                        START_NEW_SCRIPT( "BootyCall", 1024 );
                        l_U317 = 1;
                        g_U43722 = 1;
                        l_U184 = 6;
                    }
                    else
                    {
                        REQUEST_SCRIPT( "BootyCall" );
                    }
                }
                break;
                case 6:
                if (NOT g_U43722)
                {
                    if (l_U317)
                    {
                        GET_CURRENT_DATE( ref l_U311, ref l_U312 );
                        l_U313 = COMPARE_TWO_DATES( l_U312, l_U311, l_U241, l_U240 );
                        if (l_U313 > 0)
                        {
                            l_U317 = 0;
                        }
                    }
                    else if (g_U43741[l_U348])
                    {
                        l_U352 = l_U297[l_U348];
                        l_U297[l_U348] = 4;
                        sub_4015( l_U284[l_U348], l_U297[l_U348] );
                        l_U297[l_U348] = l_U352;
                    }
                    l_U316 = 0;
                    l_U314 = 0;
                    l_U315 = 0;
                    l_U348 = -1;
                    l_U184 = 1;;
                }
                break;
            }
        }
    }
    return;
}

void sub_124()
{
    l_U185[0] = 0;
    l_U185[1] = 0;
    l_U185[2] = 0;
    l_U185[3] = 0;
    l_U185[4] = 0;
    l_U185[5] = 0;
    l_U185[6] = 0;
    l_U185[7] = 0;
    l_U185[8] = 0;
    l_U185[9] = 0;
    l_U185[10] = 0;
    l_U185[11] = 0;
    l_U199[0] = 0;
    l_U199[1] = 1;
    l_U199[2] = 2;
    l_U199[3] = 3;
    l_U199[4] = 4;
    l_U199[5] = 5;
    l_U199[6] = 0;
    l_U199[7] = 1;
    l_U199[8] = 2;
    l_U199[9] = 3;
    l_U199[10] = 4;
    l_U199[11] = 5;
    l_U198 = 18;
    l_U212[0] = 31;
    l_U212[1] = 31;
    l_U212[2] = 31;
    l_U212[3] = 31;
    l_U212[4] = 31;
    l_U212[5] = 31;
    l_U212[6] = 31;
    l_U212[7] = 31;
    l_U212[8] = 31;
    l_U212[9] = 31;
    l_U212[10] = 31;
    l_U212[11] = 31;
    l_U225[0] = 12;
    l_U225[1] = 12;
    l_U225[2] = 12;
    l_U225[3] = 12;
    l_U225[4] = 12;
    l_U225[5] = 12;
    l_U225[6] = 12;
    l_U225[7] = 12;
    l_U225[8] = 12;
    l_U225[9] = 12;
    l_U225[10] = 12;
    l_U225[11] = 12;
    l_U297[0] = 1;
    l_U297[1] = 1;
    l_U297[2] = 1;
    l_U297[3] = 1;
    l_U297[4] = 1;
    l_U297[5] = 1;
    l_U297[6] = 1;
    l_U297[7] = 1;
    l_U297[8] = 1;
    l_U297[9] = 1;
    l_U297[10] = 1;
    l_U297[11] = 1;
    l_U242 = 99;
    l_U240 = 98;
    l_U241 = 98;
    l_U314 = 0;
    l_U316 = 0;
    l_U315 = 0;
    l_U310 = 0;
    l_U318[0] = 1;
    l_U318[1] = 1;
    l_U318[2] = 1;
    l_U318[3] = 1;
    l_U318[4] = 1;
    l_U318[5] = 1;
    l_U318[6] = 1;
    l_U318[7] = 1;
    l_U318[8] = 1;
    l_U318[9] = 1;
    l_U318[10] = 1;
    l_U318[11] = 1;
    g_U43767[0] = 31;
    g_U43767[1] = 31;
    g_U43767[2] = 31;
    g_U43767[3] = 31;
    g_U43767[4] = 31;
    g_U43767[5] = 31;
    g_U43767[6] = 31;
    g_U43767[7] = 31;
    g_U43767[8] = 31;
    g_U43767[9] = 31;
    g_U43767[10] = 31;
    g_U43767[11] = 31;
    g_U43780[0] = 12;
    g_U43780[1] = 12;
    g_U43780[2] = 12;
    g_U43780[3] = 12;
    g_U43780[4] = 12;
    g_U43780[5] = 12;
    g_U43780[6] = 12;
    g_U43780[7] = 12;
    g_U43780[8] = 12;
    g_U43780[9] = 12;
    g_U43780[10] = 12;
    g_U43780[11] = 12;
    for ( l_U238 = 0; l_U238 < 12; l_U238++ )
    {
        l_U245[l_U238] = 16;
        l_U245[l_U238] += l_U238;
        l_U258[l_U238] = l_U245[l_U238];
        l_U271[l_U238] = 16;
        l_U271[l_U238] += l_U238;
        l_U284[l_U238] = l_U271[l_U238];
    }
    l_U183 = 2;
    return;
}

void sub_1421(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;

    if (NOT g_U16014[uParam0]._fU212._fU0)
    {
        if (g_U95._fU0 == 1012)
        {
            g_U95._fU92 = 1;
        }
        g_U16014[uParam0]._fU212._fU0 = 1;
        if (bParam1)
        {
            StrCopy( ref cVar4, "CONT_", 16 );
            ConcatString(ref cVar4, ref g_U16014[uParam0]._fU212._fU8, 16);
            SET_PHONE_HUD_ITEM( 2, ref cVar4, -1 );
        }
        g_U95._fU520 = 0;
    }
    return;
}

void sub_1771()
{
    int I;
    int iVar3;
    unknown uVar4;
    int[12] iVar5;

    array(ref iVar5, 12);
    iVar5[0] = -1;
    iVar5[1] = -1;
    iVar5[2] = -1;
    iVar5[3] = -1;
    iVar5[4] = -1;
    iVar5[5] = -1;
    iVar5[6] = -1;
    iVar5[7] = -1;
    iVar5[8] = -1;
    iVar5[9] = -1;
    iVar5[10] = -1;
    iVar5[11] = -1;
    for ( I = 0; I < 12; I++ )
    {
        if (sub_1870( I ))
        {
            iVar5[iVar3] = I;
            iVar3++;
        }
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar3, ref uVar4 );
    if (iVar5[uVar4] == -1)
    {
        ;
    }
    else if (NOT (sub_1870( iVar5[uVar4] )))
    {
        ;
    }
    return iVar5[uVar4];
}

int sub_1870(unknown uParam0)
{
    int iVar3;

    if (g_U43709[uParam0])
    {
        if (NOT (g_U43754[uParam0] > 2))
        {
            iVar3 = COMPARE_TWO_DATES( l_U241, l_U240, l_U225[uParam0], l_U212[uParam0] );
            if (iVar3 > 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_2143(int iParam0, boolean bParam1, unknown uParam2)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_2226( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_2226( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U95._fU0 == 1005) AND (g_U95._fU60 == iParam0))
    {
        if (bParam1)
        {
            if ((g_U95._fU508 >= 4) AND ((NOT g_U95._fU372) || (uParam2)))
            {
                return 1;
            }
        }
        else if (NOT g_U95._fU368)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2226(unknown uParam0)
{
    return;
}

int sub_2480()
{
    if (NOT g_U12379)
    {
        if (IS_PLAYER_PLAYING( sub_2500() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_2500(), 0 )))
            {
                if (NOT (IS_THREAD_ACTIVE( g_U818 )))
                {
                    if (NOT IS_MINIGAME_IN_PROGRESS())
                    {
                        if (sub_2595( 1, 1 ))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_2500()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_2595(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2627() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2627(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2627() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2627(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2627()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2627() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2627() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2500() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2500() )))
    {
        return 0;
    }
    return 1;
}

void sub_2627()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_3113(unknown uParam0)
{
    int iVar3;

    if (g_U43709[uParam0])
    {
        if (g_U43754[uParam0] > 2)
        {
            iVar3 = COMPARE_TWO_DATES( l_U241, l_U240, l_U225[uParam0], l_U212[uParam0] );
            if (iVar3 > 0)
            {
                return 1;
            }
        }
        if (g_U43741[uParam0])
        {
            iVar3 = COMPARE_TWO_DATES( l_U241, l_U240, g_U43780[uParam0], g_U43767[uParam0] );
            if (iVar3 > 6)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_3291(unknown uParam0)
{
    if (NOT g_U12379)
    {
        if (IS_PLAYER_PLAYING( sub_2500() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_2500(), 0 )))
            {
                if (NOT (IS_THREAD_ACTIVE( g_U818 )))
                {
                    if (NOT sub_3365())
                    {
                        if (NOT ((uParam0) AND (sub_3424( 0 ))))
                        {
                            if (NOT sub_3806())
                            {
                                if (NOT IS_MINIGAME_IN_PROGRESS())
                                {
                                    if (sub_2595( 1, 1 ))
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_3365()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_3424(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_3444())
    {
        return 1;
    }
    if (sub_3479())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_3550( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_3699( iParam0 ))
        {
            return 1;
        }
        return 0;
    }
    if (g_U42731._fU4 > iVar3)
    {
        return 1;
    }
    return 0;
}

void sub_3444()
{
    return g_U95._fU540;
}

int sub_3479()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U42731._fU0 > iVar2)
    {
        return 1;
    }
    return 0;
}

int sub_3550(int iParam0)
{
    int iVar3;

    iVar3 = sub_3559();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_3614();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_3559()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_3614()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_3699(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 - g_U42731._fU8;
    if (iVar4 < iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_3806()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

void sub_4015(unknown uParam0, unknown uParam1)
{
    sub_4038( uParam0, uParam1, 16383, 16383, ref l_U331 );
    if (l_U318[l_U348] == 1)
    {
        sub_4399();
        sub_4720( ref l_U331, l_U338 );
    }
    sub_4754( ref l_U331, 1 );
    sub_4785( ref l_U331, 0 );
    sub_4816( ref l_U331, 6 );
    sub_4850( ref l_U331, 0 );
    return;
}

void sub_4038(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_4060( uParam0, 0, iParam4 + 0 );
    sub_4060( uParam1, 1, iParam4 + 0 );
    sub_4060( uParam2, 2, iParam4 + 0 );
    sub_4060( uParam3, 3, iParam4 + 0 );
    sub_4060( 0, 4, iParam4 + 0 );
    sub_4060( 1, 5, iParam4 + 0 );
    sub_4060( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_4060(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_4399()
{
    if (l_U348 == 0)
    {
        l_U338 = 50;
    }
    else if (l_U348 == 1)
    {
        l_U338 = 51;
    }
    else if (l_U348 == 2)
    {
        l_U338 = 52;
    }
    else if (l_U348 == 3)
    {
        l_U338 = 53;
    }
    else if (l_U348 == 4)
    {
        l_U338 = 54;
    }
    else if (l_U348 == 5)
    {
        l_U338 = 55;
    }
    else if (l_U348 == 6)
    {
        l_U338 = 56;
    }
    else if (l_U348 == 7)
    {
        l_U338 = 57;
    }
    else if (l_U348 == 8)
    {
        l_U338 = 58;
    }
    else if (l_U348 == 9)
    {
        l_U338 = 59;
    }
    else if (l_U348 == 10)
    {
        l_U338 = 60;
    }
    else if (l_U348 == 11)
    {
        l_U338 = 61;
    };;;;;;;;;;;;
    return;
}

void sub_4720(int iParam0, unknown uParam1)
{
    sub_4060( uParam1, 6, iParam0 + 0 );
    return;
}

void sub_4754(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_4785(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_4816(int iParam0, unknown uParam1)
{
    sub_4060( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_4850(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;
    char[16] cVar6;
    int iVar10;

    iVar5 = 0;
    StrCopy( ref cVar6, "T1_NAME_", 16 );
    if (g_U95._fU540)
    {
        return 0;
    }
    if ((g_U575[g_U575 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_4920())
        {
            sub_5221( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar10 = sub_5434( iParam0->_fU0 );
    if (iVar10 != -1)
    {
        sub_5221( iVar10 );
    }
    if (bParam1)
    {
        if (NOT (g_U560 == 9))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but other cellphone script is already active\n" );
            return 0;
        }
        if (NOT (g_U95._fU0 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone screen is not OFF\n" );
            return 0;
        }
        if (NOT (g_U95._fU404 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone quickscreen is not OFF\n" );
            return 0;
        }
    }
    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (g_U575[I]._fU0[0] == -1)
        {
            g_U575[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U575;
            iVar5++;
            if (iVar5 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar5 );
            }
            else
            {
                ConcatString(ref cVar6, sub_4958( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar6, iVar5 );
            }
            g_U95._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U560 == 9)
            {
                g_U95._fU404 = 1017;
            }
            else if (g_U95._fU0 == 1016)
            {
                g_U95._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15811[2] = 1;
        }
        else if ((sub_4958( 4, g_U575[I] )) == 0)
        {
            iVar5++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    g_U95._fU408 = 0;
    if (bParam1)
    {
        g_U95._fU408 = 1;
    }
    return 1;
}

int sub_4920()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_4958( 1, g_U575[I] )) != 0) AND (g_U575[I]._fU20))
        {
            sub_5221( I );
            return 1;
        }
    }
    return 0;
}

int sub_4958(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_5221(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_5306( g_U575 - 1 );
    return;
}

void sub_5306(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_5434(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U575 - 1); Result++ )
    {
        if (g_U575[Result]._fU0[0] != -1)
        {
            if (sub_5499( uParam0, g_U575[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U575;
        }
    }
    return -1;
}

int sub_5499(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_4958( 0, uParam0 );
        if (iVar14 == (sub_4958( 0, uParam6 )))
        {
            iVar15 = sub_4958( 3, uParam0 );
            if (iVar15 == (sub_4958( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_6560(boolean bParam0)
{
    l_U350 = l_U240;
    l_U351 = l_U241;
    l_U315 = 0;
    l_U314 = 0;
    if (bParam0)
    {
        l_U318[l_U348] = 0;
    }
    l_U348 = -1;
    l_U184 = 1;
    return;
}

int sub_6727(int iParam0)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_5499( iParam0->_fU0, g_U575[I] ))
            {
                iParam0->_fU24 = I;
                return sub_4958( 4, g_U575[I] );
            }
        }
        iParam0->_fU24 = -2;
    }
    return 8;
}

void sub_6997()
{
    if (l_U348 == 0)
    {
        l_U339[0] = "E2BC_HOOK";
        l_U339[1] = "E2BC_LDATY";
        l_U339[2] = "E2BC_PBBYE";
        l_U339[3] = "E2BC_LDATN";
        l_U339[4] = "E2BC_NBYE";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 1)
    {
        l_U339[0] = "E2BC_THOOK";
        l_U339[1] = "E2BC_LDATY";
        l_U339[2] = "E2BC_TPPHN";
        l_U339[3] = "E2BC_LDATN";
        l_U339[4] = "E2BC_TNPHN";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 2)
    {
        l_U339[0] = "E2BC_HOKU";
        l_U339[1] = "E2BC_LDATY";
        l_U339[2] = "E2BC_APOS";
        l_U339[3] = "E2BC_LDATN";
        l_U339[4] = "E2BC_NEGE";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 3)
    {
        l_U339[0] = "E2BC_AHKU";
        l_U339[1] = "E2BC_LDATY";
        l_U339[2] = "E2BC_PBYE";
        l_U339[3] = "E2BC_LDATN";
        l_U339[4] = "E2BC_NEGB";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 4)
    {
        l_U339[0] = "E2BC_UPHK";
        l_U339[1] = "E2BC_LDATY";
        l_U339[2] = "E2BC_YNEB";
        l_U339[3] = "E2BC_LDATN";
        l_U339[4] = "E2BC_YPOB";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 5)
    {
        l_U339[0] = "E2BC_HKP5";
        l_U339[1] = "E2BC_LDATY";
        l_U339[2] = "E2BC_POS5";
        l_U339[3] = "E2BC_LDATN";
        l_U339[4] = "E2BC_NEG5";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 6)
    {
        l_U339[0] = "E2BC_HKP7";
        l_U339[1] = "E2BC_LDATY";
        l_U339[2] = "E2BC_POS7";
        l_U339[3] = "E2BC_LDATN";
        l_U339[4] = "E2BC_NEG7";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 7)
    {
        l_U339[0] = "E2BC_HKP8";
        l_U339[1] = "E2BCB_LDATY";
        l_U339[2] = "E2BC_POS8";
        l_U339[3] = "E2BCB_LDATN";
        l_U339[4] = "E2BC_NEG8";
        l_U345 = "E2BCBAU";
    }
    if (l_U348 == 8)
    {
        l_U339[0] = "E2BC_HKP9";
        l_U339[1] = "E2BCB_LDATY";
        l_U339[2] = "E2BC_POS9";
        l_U339[3] = "E2BCB_LDATN";
        l_U339[4] = "E2BC_NEG9";
        l_U345 = "E2BCBAU";
    }
    if (l_U348 == 9)
    {
        l_U339[0] = "E2BC_HK1";
        l_U339[1] = "E2BCB_LDATY";
        l_U339[2] = "E2BC_POS1";
        l_U339[3] = "E2BCB_LDATN";
        l_U339[4] = "E2BC_NEG1";
        l_U345 = "E2BCBAU";
    }
    if (l_U348 == 10)
    {
        l_U339[0] = "E2BC_HKP2";
        l_U339[1] = "E2BCB_LDATY";
        l_U339[2] = "E2BC_POS2";
        l_U339[3] = "E2BCB_LDATN";
        l_U339[4] = "E2BC_NEGG2";
        l_U345 = "E2BCBAU";
    }
    if (l_U348 == 11)
    {
        l_U339[0] = "E2BC_SMN9";
        l_U339[1] = "E2BCB_LDATY";
        l_U339[2] = "E2BC_SMN4";
        l_U339[3] = "E2BCB_LDATN";
        l_U339[4] = "E2BC_SMN3";
        l_U345 = "E2BCBAU";
    }
    return;
}

void sub_8605(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_8656( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_8656(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_9096(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    return sub_9126( uParam0, uParam1, uParam5, 1, uParam2, uParam3, uParam4, uParam6, 1, 0, 1, 0, 0, 0 );
}

int sub_9126(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U95._fU540)
    {
        return 0;
    }
    sub_2226( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 >= 6)
        {
            sub_2226( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2500() )))
    {
        sub_2226( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_2627() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2627() ))))
    {
        sub_2226( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_2226( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_9641()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU48 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
        case 1:
        if (g_U95._fU368)
        {
            if ((g_U95._fU372) || (NOT bParam8))
            {
                sub_2226( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U95._fU60 != -1)
        {
            if ((g_U16014[g_U95._fU60]._fU212._fU24 != 5) AND (g_U16014[g_U95._fU60]._fU212._fU24 != 4))
            {
                g_U16014[g_U95._fU60]._fU212._fU24 = 0;
            }
        }
        g_U95._fU368 = 1;
        g_U95._fU372 = bParam8;
        uParam0 = g_U95._fU60;
        break;
        case 2:
        if ((NOT sub_9641()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU52 = 1;
        g_U95._fU56 = 1;
        g_U95._fU372 = 1;
        g_U95._fU368 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_11013( uParam0, ref g_U95._fU176 );
    sub_11673( ref g_U95._fU160 );
    g_U95._fU380 = uParam10;
    g_U95._fU376 = bParam11;
    g_U95._fU420 = uParam12;
    g_U95._fU424 = -1;
    g_U95._fU364 = uParam3;
    StrCopy( ref g_U95._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8972[I] = {(uParam1^)[I]};
        sub_11913( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U95._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U95._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U95._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U95._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U95._fU208, uParam6, 16 );
    g_U95._fU80 = uParam7;
    g_U95._fU384 = 0;
    g_U95._fU532 = uParam13;
    g_U8867 = 4;
    return 1;
}

int sub_9641()
{
    if ((g_U95._fU48) || (g_U95._fU52))
    {
        return 0;
    }
    if (g_U95._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_9698())
    {
        return 0;
    }
    if (g_U560 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_9698()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2500() )))
    {
        sub_2226( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_2226( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U95._fU376)
    {
        sub_2226( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U95._fU100) || (g_U95._fU104))
    {
        sub_2226( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2500() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2627() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_2627(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_2226( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_2627() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_2226( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_2226( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2500() )))
    {
        sub_2226( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_11013(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "TONY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "MORI", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "YUSUF", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ARMANDO", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ADRIANA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "BULGARIN", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ROCCO", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "HENRIQUE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "reserve1", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "ASSISTANT", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "DESSIE", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "JOJO", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "TAYLOR", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "VIKKY", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "ANA", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "DANA", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "CINDY", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "TANIA", 32 );
        break;
        case 23:
        StrCopy( (uParam1^), "LILY", 32 );
        break;
        case 24:
        StrCopy( (uParam1^), "TAMI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DOMINO", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "HEIDI", 32 );
        break;
        case 27:
        StrCopy( (uParam1^), "SIMONE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_11673(unknown uParam0)
{
    StrCopy( (uParam0^), "LUIS", 16 );
    return;
}

void sub_11913(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_12282()
{
    if (g_U95._fU60 != -1)
    {
        return g_U16014[g_U95._fU60]._fU212._fU24;
    }
    return 6;
}

void sub_13050(unknown uParam0)
{
    if (l_U348 == 0)
    {
        l_U339[0] = "E2BC_HPHN";
        l_U339[1] = "E2BC_LDATE";
        l_U339[2] = "E2BC_GOOD";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 1)
    {
        l_U339[0] = "E2BC_THI";
        l_U339[1] = "E2BC_LDATE";
        l_U339[2] = "E2BC_TAGR";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 2)
    {
        l_U339[0] = "E2BC_HI";
        l_U339[1] = "E2BC_LDATE";
        l_U339[2] = "E2BC_AAGR";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 3)
    {
        l_U339[0] = "E2BC_AHI";
        l_U339[1] = "E2BC_LDATE";
        l_U339[2] = "E2BC_AYES";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 4)
    {
        l_U339[0] = "E2BC_HELL";
        l_U339[1] = "E2BC_LDATE";
        l_U339[2] = "E2BC_REEG";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 5)
    {
        l_U339[0] = "E2BC_HI5";
        l_U339[1] = "E2BC_LDATE";
        l_U339[2] = "E2BC_AGR5";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 6)
    {
        l_U339[0] = "E2BC_HI7";
        l_U339[1] = "E2BC_LDATE";
        l_U339[2] = "E2BC_AGR7";
        l_U345 = "E2BCAUD";
    }
    if (l_U348 == 7)
    {
        l_U339[0] = "E2BC_HI8";
        l_U339[1] = "E2BCB_LDATE";
        l_U339[2] = "E2BC_AG8";
        l_U345 = "E2BCBAU";
    }
    if (l_U348 == 8)
    {
        l_U339[0] = "E2BC_HI9";
        l_U339[1] = "E2BCB_LDATE";
        l_U339[2] = "E2BC_AG9";
        l_U345 = "E2BCBAU";
    }
    if (l_U348 == 9)
    {
        l_U339[0] = "E2BC_HI1";
        l_U339[1] = "E2BCB_LDATE";
        l_U339[2] = "E2BC_AG1";
        l_U345 = "E2BCBAU";
    }
    if (l_U348 == 10)
    {
        l_U339[0] = "E2BC_HI2";
        l_U339[1] = "E2BCB_LDATE";
        l_U339[2] = "E2BC_AG2";
        l_U345 = "E2BCBAU";
    }
    if (l_U348 == 11)
    {
        l_U339[0] = "E2BC_SMN8";
        l_U339[1] = "E2BCB_LDATE";
        l_U339[2] = "E2BC_SMN1";
        l_U345 = "E2BCBAU";
    }
    return;
}

void sub_14153(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_8656( uParam0, uParam1, uParam2, uParam3, "END", "END", "END", "END", "END" );
    return;
}

int sub_14234(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U95._fU60;
    if (bParam2)
    {
        return sub_9126( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U95._fU368)
    {
        StrCopy( ref g_U95._fU224[0], uParam1, 16 );
        g_U95._fU224[1] = {(uParam0^)[0]};
        sub_11013( uVar14, ref g_U95._fU176 );
        g_U95._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_14410(boolean bParam0)
{
    unknown uVar3;

    if (g_U95._fU60 != -1)
    {
        switch (g_U16014[g_U95._fU60]._fU212._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U95._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_2627(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_2226( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_14819()
{
    if (l_U348 == 0)
    {
        l_U339[0] = "E2BC_ANS";
        l_U345 = "E2BCAUD";
        l_U346 = "JOJO";
        l_U347 = 1;
    }
    if (l_U348 == 1)
    {
        l_U339[0] = "E2BC_TANS";
        l_U345 = "E2BCAUD";
        l_U346 = "TAYLOR";
        l_U347 = 1;
    }
    if (l_U348 == 2)
    {
        l_U339[0] = "E2BC_APHO";
        l_U345 = "E2BCAUD";
        l_U346 = "VIKKY";
        l_U347 = 3;
    }
    if (l_U348 == 3)
    {
        l_U339[0] = "E2BC_PHOAN";
        l_U345 = "E2BCAUD";
        l_U346 = "ANA";
        l_U347 = 4;
    }
    if (l_U348 == 4)
    {
        l_U339[0] = "E2BC_ONPH";
        l_U345 = "E2BCAUD";
        l_U346 = "DANA";
        l_U347 = 5;
    }
    if (l_U348 == 5)
    {
        l_U339[0] = "E2BC_ANS5";
        l_U345 = "E2BCAUD";
        l_U346 = "CINDY";
        l_U347 = 6;
    }
    if (l_U348 == 6)
    {
        l_U339[0] = "E2BC_ANS7";
        l_U345 = "E2BCAUD";
        l_U346 = "TANIA";
        l_U347 = 7;
    }
    if (l_U348 == 7)
    {
        l_U339[0] = "E2BC_ANS8";
        l_U345 = "E2BCBAU";
        l_U346 = "LILY";
        l_U347 = 1;
    }
    if (l_U348 == 8)
    {
        l_U339[0] = "E2BC_ANS9";
        l_U345 = "E2BCBAU";
        l_U346 = "TAMI";
        l_U347 = 2;
    }
    if (l_U348 == 9)
    {
        l_U339[0] = "E2BC_ANS1";
        l_U345 = "E2BCBAU";
        l_U346 = "DOMINO";
        l_U347 = 3;
    }
    if (l_U348 == 10)
    {
        l_U339[0] = "E2BC_ANS2";
        l_U345 = "E2BCBAU";
        l_U346 = "HEIDI";
        l_U347 = 4;
    }
    if (l_U348 == 11)
    {
        l_U339[0] = "E2BC_SMN2";
        l_U345 = "E2BCBAU";
        l_U346 = "SIMONE";
        l_U347 = 5;
    }
    return;
}

int sub_15639(unknown uParam0, unknown uParam1, boolean bParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U95._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_9126( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U95._fU368) == 1)
        {
            StrCopy( ref g_U95._fU224[0], uParam1, 16 );
            StrCopy( ref g_U95._fU224[1], uParam0, 16 );
            sub_11013( uVar23, ref g_U95._fU176 );
            g_U95._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

void sub_16114(unknown uParam0)
{
    if (g_U16014[uParam0]._fU212._fU0)
    {
        switch (g_U95._fU0)
        {
            case 1014:
            g_U95._fU92 = 1;
            break;
            default:
        }
        g_U16014[uParam0]._fU212._fU0 = 0;
    }
    return;
}
