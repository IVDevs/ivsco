void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U108 = 0;
    l_U109 = -1;
    l_U110 = 0;
    l_U111 = 0;
    l_U116 = 1;
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U124 = 0;
    l_U125 = 0;
    l_U126 = 0;
    l_U127 = 0;
    l_U128 = 0;
    l_U129 = 0;
    l_U130 = 0;
    l_U131 = 0;
    l_U134 = 1;
    l_U135 = 1;
    l_U136 = 1;
    l_U137 = 1;
    l_U138 = 0;
    l_U139 = 0;
    l_U140 = 0;
    l_U141 = 0;
    l_U142 = 0;
    l_U156 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (g_U15811[28] == 0)
    {
        WAIT( 0 );
    }
    if (g_U42893 == 0)
    {
        l_U131 = 0;
    }
    else
    {
        l_U131 = 1;
    }
    l_U132 = 1;
    sub_289();
    sub_720();
    while (l_U132)
    {
        switch (l_U131)
        {
            case 0:
            sub_791();
            break;
            case 1:
            sub_3958();
            break;
            case 2:
            sub_8003();
            break;
            case -1: break;
        }
        WAIT( 0 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_289()
{
    PRINTSTRING( "\n\n\n      -----> START GANG WAR C <-----" );
    l_U161[0] = {-1265.48500000, 1314.77500000, 20.79710000};
    l_U161[1] = {-1430.95200000, 506.92380000, 14.50880000};
    l_U161[2] = {-1535.32800000, 871.91960000, 20.90170000};
    l_U171[0] = {-470.57730000, 677.95950000, 9.40030000};
    l_U171[1] = {-334.14460000, 1593.07700000, 19.47840000};
    l_U171[2] = {-91.67290000, -315.97170000, 13.76250000};
    l_U181[0] = {946.48760000, 1829.47000000, 19.86310000};
    l_U181[1] = {494.80400000, 1618.75400000, 19.13400000};
    l_U188[0] = {1192.87700000, 607.41020000, 37.75080000};
    l_U188[1] = {1137.45000000, -401.04030000, 18.85560000};
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
    }
    if (NOT (IS_CHAR_INJURED( sub_617() )))
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_671(), 1, 1, 1 );
    }
    return;
}

void sub_617()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_671()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_720()
{
    return;
}

void sub_791()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar2 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "DrugWarsDeal" );
    iVar3 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "DrugWarsConvoy" );
    iVar4 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "DrugWarsPickup" );
    iVar5 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "DrugWarsShipment" );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) == 0)
    {
        l_U148 = 0;
    }
    if (((((((g_U12379 == 0) AND (g_U42894 == 0)) AND (NOT (IS_CHAR_DEAD( sub_617() )))) AND (iVar2 == 0)) AND (iVar3 == 0)) AND (iVar4 == 0)) AND (iVar5 == 0))
    {
        if (l_U138 == 0)
        {
            if (NOT (DOES_BLIP_EXIST( l_U158 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_617(), l_U171[1]._fU0, l_U171[1]._fU4, l_U171[1]._fU8, 2.50000000 * 5, 2.50000000 * 5, 2.50000000 * 5, 0 )))
                {
                    ADD_BLIP_FOR_COORD( l_U171[1]._fU0, l_U171[1]._fU4, l_U171[1]._fU8, ref l_U158 );
                    CHANGE_BLIP_SPRITE( l_U158, 108 );
                    CHANGE_BLIP_PRIORITY( l_U158, 1 );
                    l_U138 = 1;
                }
            }
        }
        if (l_U138 == 1)
        {
            if (((g_U42900 == 0) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
            {
                PRINT_HELP( "DW_HELP_00" );
                g_U42900 = 1;
            }
            if (DOES_BLIP_EXIST( l_U158 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_617(), l_U171[1]._fU0, l_U171[1]._fU4, l_U171[1]._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    if ((IS_WANTED_LEVEL_GREATER( sub_671(), 0 )) AND (l_U133 == 0))
                    {
                        PRINT_NOW( "DW_lose_cop", 7500, 1 );
                        l_U133 = 1;
                    }
                    else
                    {
                        l_U133 = 0;
                        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
                        {
                            if (l_U148 == 0)
                            {
                                PRINT_NOW( "DW_HBUSY", 7500, 1 );
                                l_U148 = 1;
                            }
                        }
                        else
                        {
                            l_U148 = 0;
                        }
                        if (sub_1485())
                        {
                            if (l_U149 == 0)
                            {
                                PRINT_NOW( "DW_factivity", 7500, 1 );
                                l_U149 = 1;
                            }
                        }
                        else
                        {
                            l_U149 = 0;
                        }
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_617() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_617(), ref uVar6 );
                        if (DOES_VEHICLE_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CAR_ON_FIRE( uVar6 )))
                            {
                                if (sub_2154())
                                {
                                    g_U12379 = 1;
                                    sub_2834();
                                    l_U135 = 1;
                                    sub_3663();
                                    GET_GAME_TIMER( ref l_U120 );
                                    SET_PLAYER_CONTROL_ADVANCED( sub_671(), 0, 1, 1 );
                                    l_U131++;
                                    l_U131++;
                                }
                            }
                        }
                    }
                    else if (sub_2154())
                    {
                        g_U12379 = 1;
                        sub_2834();
                        l_U135 = 1;
                        sub_3663();
                        GET_GAME_TIMER( ref l_U120 );
                        SET_PLAYER_CONTROL_ADVANCED( sub_671(), 0, 1, 1 );
                        l_U131++;
                        l_U131++;
                    }
                }
            }
        }
    }
    else
    {
        sub_3663();
        l_U138 = 0;
    }
    return;
}

int sub_1485()
{
    int I;
    unknown uVar3;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (sub_1511( I ))
        {
            uVar3 = sub_1613( I );
            if (g_U20825[uVar3]._fU0)
            {
                if (NOT (g_U14925[I]._fU80._fU0 == 0))
                {
                    PRINTSTRING( ".....Check_If_Friend_Activity_Setup: " );
                    PRINTINT( I );
                    PRINTSTRING( " strand setup\n" );
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_1511(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: return 1;
    }
    return 0;
}

int sub_1613(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 9;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1844( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_1844(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_2154()
{
    if (IS_CHAR_DEAD( sub_617() ))
    {
        return 0;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_671(), 0 ))
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_671() )))
    {
        return 0;
    }
    if (g_U12379)
    {
        return 0;
    }
    if (g_U12381)
    {
        return 0;
    }
    if ((sub_2256()) || (sub_2306()))
    {
        return 0;
    }
    if (NOT g_U22957)
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_671() )))
    {
        return 0;
    }
    if (NOT (sub_2389( 1, 1 )))
    {
        return 0;
    }
    if (sub_1485())
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        return 0;
    }
    if (NOT sub_2722())
    {
        return 0;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
    {
        return 0;
    }
    return 1;
}

int sub_2256()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_2306()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_2389(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_617() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_617(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_617() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_617(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_617()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_617() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_617() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_671() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_671() )))
    {
        return 0;
    }
    return 1;
}

int sub_2722()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

void sub_2834()
{
    sub_2843();
    sub_2988( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_3062();
    return;
}

void sub_2843()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_2988(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_3062()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_3100( 1, g_U575[I] )) == 0)
        {
            sub_3351( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_3529())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_3100(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_3351(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_3436( g_U575 - 1 );
    return;
}

void sub_3436(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_3529()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_3100( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3663()
{
    if (DOES_BLIP_EXIST( l_U157 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U157 );
    }
    if (DOES_BLIP_EXIST( l_U158 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U158 );
    }
    if (DOES_BLIP_EXIST( l_U159 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U159 );
    }
    if (DOES_BLIP_EXIST( l_U160 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U160 );
    }
    return;
}

void sub_3958()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;

    sub_3967();
    iVar2 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "DrugWarsDeal" );
    iVar3 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "DrugWarsConvoy" );
    iVar4 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "DrugWarsPickup" );
    iVar5 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "DrugWarsShipment" );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) == 0)
    {
        l_U148 = 0;
    }
    if (((((((g_U12379 == 0) AND (g_U42894 == 0)) AND (NOT (IS_CHAR_DEAD( sub_617() )))) AND (iVar2 == 0)) AND (iVar3 == 0)) AND (iVar4 == 0)) AND (iVar5 == 0))
    {
        sub_5009();
        if (NOT (DOES_BLIP_EXIST( l_U157 )))
        {
            GET_GAME_TIMER( ref l_U117 );
            if ((l_U117 - l_U118) > 120000)
            {
                if (l_U134 == 1)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U127 );
                    l_U134 = 0;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_617(), l_U161[l_U127]._fU0, l_U161[l_U127]._fU4, l_U161[l_U127]._fU8, 2.50000000 * 5, 2.50000000 * 5, 2.50000000 * 5, 0 )))
                {
                    ADD_BLIP_FOR_COORD( l_U161[l_U127]._fU0, l_U161[l_U127]._fU4, l_U161[l_U127]._fU8, ref l_U157 );
                    CHANGE_BLIP_SPRITE( l_U157, 108 );
                    CHANGE_BLIP_PRIORITY( l_U157, 1 );
                }
            }
        }
        if (DOES_BLIP_EXIST( l_U157 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_617(), l_U161[l_U127]._fU0, l_U161[l_U127]._fU4, l_U161[l_U127]._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((IS_WANTED_LEVEL_GREATER( sub_671(), 0 )) AND (l_U133 == 0))
                {
                    PRINT_NOW( "DW_lose_cop", 7500, 1 );
                    l_U133 = 1;
                }
                else
                {
                    l_U133 = 0;
                    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
                    {
                        if (l_U148 == 0)
                        {
                            PRINT_NOW( "DW_HBUSY", 7500, 1 );
                            l_U148 = 1;
                        }
                    }
                    else
                    {
                        l_U148 = 0;
                    }
                    if (sub_1485())
                    {
                        if (l_U149 == 0)
                        {
                            PRINT_NOW( "DW_factivity", 7500, 1 );
                            l_U149 = 1;
                        }
                    }
                    else
                    {
                        l_U149 = 0;
                    }
                }
                if (sub_2154())
                {
                    g_U12379 = 1;
                    sub_2834();
                    l_U134 = 1;
                    l_U139 = 1;
                    sub_3663();
                    GET_GAME_TIMER( ref l_U118 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_671(), 0, 1, 1 );
                    l_U131++;
                }
            }
        }
        if (NOT (DOES_BLIP_EXIST( l_U158 )))
        {
            GET_GAME_TIMER( ref l_U119 );
            if ((l_U119 - l_U120) > 120000)
            {
                if (l_U135 == 1)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U128 );
                    l_U135 = 0;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_617(), l_U171[l_U128]._fU0, l_U171[l_U128]._fU4, l_U171[l_U128]._fU8, 2.50000000 * 5, 2.50000000 * 5, 2.50000000 * 5, 0 )))
                {
                    ADD_BLIP_FOR_COORD( l_U171[l_U128]._fU0, l_U171[l_U128]._fU4, l_U171[l_U128]._fU8, ref l_U158 );
                    CHANGE_BLIP_SPRITE( l_U158, 108 );
                    CHANGE_BLIP_PRIORITY( l_U158, 1 );
                }
            }
        }
        if (DOES_BLIP_EXIST( l_U158 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_617(), l_U171[l_U128]._fU0, l_U171[l_U128]._fU4, l_U171[l_U128]._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((IS_WANTED_LEVEL_GREATER( sub_671(), 0 )) AND (l_U133 == 0))
                {
                    PRINT_NOW( "DW_lose_cop", 7500, 1 );
                    l_U133 = 1;
                }
                else if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
                {
                    if (l_U148 == 0)
                    {
                        PRINT_NOW( "DW_HBUSY", 7500, 1 );
                        l_U148 = 1;
                    }
                }
                else
                {
                    l_U148 = 0;
                }
                if (sub_1485())
                {
                    if (l_U149 == 0)
                    {
                        PRINT_NOW( "DW_factivity", 7500, 1 );
                        l_U149 = 1;
                    }
                }
                else
                {
                    l_U149 = 0;
                }
                l_U133 = 0;;
                if (sub_2154())
                {
                    g_U12379 = 1;
                    sub_2834();
                    l_U135 = 1;
                    l_U140 = 1;
                    sub_3663();
                    GET_GAME_TIMER( ref l_U120 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_671(), 0, 1, 1 );
                    l_U131++;
                }
            }
        }
        if (NOT (DOES_BLIP_EXIST( l_U159 )))
        {
            GET_GAME_TIMER( ref l_U121 );
            if ((l_U121 - l_U122) > 120000)
            {
                if (l_U136 == 1)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U129 );
                    l_U136 = 0;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_617(), l_U181[l_U129]._fU0, l_U181[l_U129]._fU4, l_U181[l_U129]._fU8, 2.50000000 * 5, 2.50000000 * 5, 2.50000000 * 5, 0 )))
                {
                    ADD_BLIP_FOR_COORD( l_U181[l_U129]._fU0, l_U181[l_U129]._fU4, l_U181[l_U129]._fU8, ref l_U159 );
                    CHANGE_BLIP_SPRITE( l_U159, 108 );
                    CHANGE_BLIP_PRIORITY( l_U159, 1 );
                }
            }
        }
        if (DOES_BLIP_EXIST( l_U159 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_617(), l_U181[l_U129]._fU0, l_U181[l_U129]._fU4, l_U181[l_U129]._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((IS_WANTED_LEVEL_GREATER( sub_671(), 0 )) AND (l_U133 == 0))
                {
                    PRINT_NOW( "DW_lose_cop", 7500, 1 );
                    l_U133 = 1;
                }
                else if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
                {
                    if (l_U148 == 0)
                    {
                        PRINT_NOW( "DW_HBUSY", 7500, 1 );
                        l_U148 = 1;
                    }
                }
                else
                {
                    l_U148 = 0;
                }
                if (sub_1485())
                {
                    if (l_U149 == 0)
                    {
                        PRINT_NOW( "DW_factivity", 7500, 1 );
                        l_U149 = 1;
                    }
                }
                else
                {
                    l_U149 = 0;
                }
                l_U133 = 0;;
                if (sub_2154())
                {
                    g_U12379 = 1;
                    sub_2834();
                    l_U136 = 1;
                    l_U141 = 1;
                    sub_3663();
                    GET_GAME_TIMER( ref l_U122 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_671(), 0, 1, 1 );
                    l_U131++;
                }
            }
        }
        if (NOT (DOES_BLIP_EXIST( l_U160 )))
        {
            GET_GAME_TIMER( ref l_U123 );
            if ((l_U123 - l_U124) > 120000)
            {
                if (l_U137 == 1)
                {
                    l_U130 = 0;
                    l_U137 = 0;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_617(), l_U188[l_U130]._fU0, l_U188[l_U130]._fU4, l_U188[l_U130]._fU8, 2.50000000 * 5, 2.50000000 * 5, 2.50000000 * 5, 0 )))
                {
                    ADD_BLIP_FOR_COORD( l_U188[l_U130]._fU0, l_U188[l_U130]._fU4, l_U188[l_U130]._fU8, ref l_U160 );
                    CHANGE_BLIP_SPRITE( l_U160, 108 );
                    CHANGE_BLIP_PRIORITY( l_U160, 1 );
                }
            }
        }
        if (DOES_BLIP_EXIST( l_U160 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_617(), l_U188[l_U130]._fU0, l_U188[l_U130]._fU4, l_U188[l_U130]._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((IS_WANTED_LEVEL_GREATER( sub_671(), 0 )) AND (l_U133 == 0))
                {
                    PRINT_NOW( "DW_lose_cop", 7500, 1 );
                    l_U133 = 1;
                }
                else if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
                {
                    if (l_U148 == 0)
                    {
                        PRINT_NOW( "DW_HBUSY", 7500, 1 );
                        l_U148 = 1;
                    }
                }
                else
                {
                    l_U148 = 0;
                }
                if (sub_1485())
                {
                    if (l_U149 == 0)
                    {
                        PRINT_NOW( "DW_factivity", 7500, 1 );
                        l_U149 = 1;
                    }
                }
                else
                {
                    l_U149 = 0;
                }
                l_U133 = 0;;
                if (sub_2154())
                {
                    g_U12379 = 1;
                    sub_2834();
                    l_U137 = 1;
                    l_U142 = 1;
                    sub_3663();
                    GET_GAME_TIMER( ref l_U124 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_671(), 0, 1, 1 );
                    l_U131++;
                }
            }
        }
    }
    else
    {
        sub_3663();
    }
    return;
}

void sub_3967()
{
    if ((g_U42919 >= 50) AND (g_U15811[58] == 1))
    {
        if (l_U143 == 0)
        {
            if (DOES_PICKUP_EXIST( l_U150[4] ))
            {
                REMOVE_PICKUP( l_U150[4] );
            }
            CREATE_PICKUP_ROTATE( -869131797, 15, 600, -438.11500000, 1398.00000000, 16.24700000, 270, 0, 44, ref l_U150[4] );
            ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U150[4], "E2_luisapartment" );
            l_U143 = 1;
        }
    }
    if ((g_U42919 >= 40) AND (g_U15811[60] == 1))
    {
        if (l_U144 == 0)
        {
            if (DOES_PICKUP_EXIST( l_U150[3] ))
            {
                REMOVE_PICKUP( l_U150[3] );
            }
            CREATE_PICKUP_ROTATE( 2087858952, 15, 25, -437.78700000, 1392.21800000, 16.11400000, 270.00000000, 0.00000000, 211.25000000, ref l_U150[3] );
            ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U150[3], "E2_luisapartment" );
            l_U144 = 1;
        }
    }
    if ((g_U42919 >= 30) AND (g_U15811[64] == 1))
    {
        if (l_U145 == 0)
        {
            if (DOES_PICKUP_EXIST( l_U150[2] ))
            {
                REMOVE_PICKUP( l_U150[2] );
            }
            CREATE_PICKUP_ROTATE( -1538378851, 15, 300, -436.67000000, 1398.49200000, 15.78000000, 0, 295, 125, ref l_U150[2] );
            ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U150[2], "E2_luisapartment" );
            l_U145 = 1;
        }
    }
    if ((g_U42919 >= 20) AND (g_U15811[62] == 1))
    {
        if (l_U146 == 0)
        {
            if (DOES_PICKUP_EXIST( l_U150[1] ))
            {
                REMOVE_PICKUP( l_U150[1] );
            }
            CREATE_PICKUP_ROTATE( 1891699769, 15, 800, -436.42000000, 1399.50000000, 15.80000000, 180, 250, 0, ref l_U150[1] );
            ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U150[1], "E2_luisapartment" );
            l_U146 = 1;
        }
    }
    if ((g_U42919 >= 10) AND (g_U15811[57] == 1))
    {
        if (l_U147 == 0)
        {
            if (DOES_PICKUP_EXIST( l_U150[0] ))
            {
                REMOVE_PICKUP( l_U150[0] );
            }
            CREATE_PICKUP_ROTATE( -1344782411, 15, 200, -437.23700000, 1394.82900000, 15.83600000, 90.00000000, 0.00000000, 321.25000000, ref l_U150[0] );
            ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U150[0], "E2_luisapartment" );
            l_U147 = 1;
        }
    }
    return;
}

void sub_5009()
{
    if (NOT g_U12379)
    {
        if (IS_PLAYER_PLAYING( sub_671() ))
        {
            if (NOT (IS_CHAR_DEAD( sub_617() )))
            {
                if (NOT (IS_THREAD_ACTIVE( g_U818 )))
                {
                    if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if ((NOT g_U10953._fU0) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                        {
                            if (l_U143 == 1)
                            {
                                if (g_U42902[4] == 0)
                                {
                                    PRINT_HELP( "DW_REWARD_05" );
                                    g_U42902[4] = 1;
                                }
                            }
                            if (l_U144 == 1)
                            {
                                if (g_U42902[3] == 0)
                                {
                                    PRINT_HELP( "DW_REWARD_04" );
                                    g_U42902[3] = 1;
                                }
                            }
                            if (l_U145 == 1)
                            {
                                if (g_U42902[2] == 0)
                                {
                                    PRINT_HELP( "DW_REWARD_03" );
                                    g_U42902[2] = 1;
                                }
                            }
                            if (l_U146 == 1)
                            {
                                if (g_U42902[1] == 0)
                                {
                                    PRINT_HELP( "DW_REWARD_02" );
                                    g_U42902[1] = 1;
                                }
                            }
                            if (l_U147 == 1)
                            {
                                if (g_U42902[0] == 0)
                                {
                                    PRINT_HELP( "DW_REWARD_01" );
                                    g_U42902[0] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_8003()
{
    char[32] cVar2;
    int iVar10;
    unknown uVar11;

    g_U42894 = 1;
    PRINTSTRING( "\n\n\n      -----> LOAD MAIN GANG WAR <-----" );
    sub_3663();
    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar10 );
    if (iVar10 < 26)
    {
        StrCopy( ref cVar2, "DrugWarsConvoy", 32 );
    }
    else if ((iVar10 >= 26) AND (iVar10 < 51))
    {
        StrCopy( ref cVar2, "DrugWarsPickup", 32 );
    }
    else if ((iVar10 >= 51) AND (iVar10 < 76))
    {
        StrCopy( ref cVar2, "DrugWarsDeal", 32 );
    }
    else
    {
        StrCopy( ref cVar2, "DrugWarsShipment", 32 );
    };;;
    REQUEST_SCRIPT( ref cVar2 );
    while (NOT (HAS_SCRIPT_LOADED( ref cVar2 )))
    {
        WAIT( 0 );
        if (NOT (HAS_SCRIPT_LOADED( ref cVar2 )))
        {
            REQUEST_SCRIPT( ref cVar2 );
        }
    }
    START_NEW_SCRIPT( ref cVar2, 8192 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref cVar2 );
    while (g_U42894 == 1)
    {
        WAIT( 0 );
    }
    g_U12379 = 0;
    if (g_U42893 == 1)
    {
        if (l_U134 == 1)
        {
            if (l_U139 == 1)
            {
                GET_GAME_TIMER( ref l_U118 );
                l_U139 = 0;
            }
        }
        if (l_U135 == 1)
        {
            if (l_U140 == 1)
            {
                GET_GAME_TIMER( ref l_U120 );
                l_U140 = 0;
            }
        }
        if (l_U136 == 1)
        {
            if (l_U141 == 1)
            {
                GET_GAME_TIMER( ref l_U122 );
                l_U141 = 0;
            }
        }
        if (l_U137 == 1)
        {
            if (l_U142 == 1)
            {
                GET_GAME_TIMER( ref l_U124 );
                l_U142 = 0;
            }
        }
    }
    if (g_U42893 == 0)
    {
        if (g_U42901 == 0)
        {
            PRINT_HELP( "DW_comp_help" );
            g_U42901 = 1;
        }
        g_U42893 = 1;
    }
    l_U131--;
    return;
}
