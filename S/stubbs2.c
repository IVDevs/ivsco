void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U20 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U437 = 0;
    l_U438 = 0;
    l_U439 = 0;
    l_U440 = 0;
    l_U441 = 0;
    l_U442 = 0;
    l_U443 = 0;
    l_U444 = 0;
    l_U445 = 0;
    l_U446 = 0;
    l_U447 = 0;
    l_U448 = 0;
    l_U449 = 0;
    l_U450 = 0;
    l_U451 = 0;
    l_U452 = 0;
    l_U453 = 0;
    l_U454 = 0;
    l_U455 = 0;
    l_U456 = 0;
    l_U460 = 0;
    l_U461 = 0;
    l_U462 = 0;
    l_U463 = 0;
    l_U464 = 0;
    l_U465 = 0;
    l_U466 = 0;
    l_U467 = 0;
    l_U468 = 0;
    l_U469 = 0;
    l_U470 = 0;
    l_U471 = 0;
    l_U472 = 0;
    l_U478 = 0;
    l_U479 = 0;
    l_U480 = 0;
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U496 = {-951.40670000, 1308.14200000, 23.31450000};
    l_U499 = {-1485.64900000, -649.87490000, 1.84000000};
    l_U514 = -183203150;
    l_U515 = 2046537925;
    l_U516 = -1916293608;
    l_U517 = -92065793;
    l_U518 = -1676937780;
    l_U519 = -824416726;
    l_U520 = -2007026063;
    l_U521 = 1033245328;
    l_U522 = -268530289;
    l_U523 = 208763854;
    l_U524 = 895164698;
    l_U525 = 1923400478;
    l_U532 = 18000;
    l_U535 = 60000;
    l_U541 = 0.50000000;
    l_U549 = 0;
    l_U551 = 0;
    l_U552 = 0;
    l_U553 = 0;
    l_U554 = -1;
    l_U559 = 1264341792;
    l_U572 = 0;
    l_U573 = 0;
    l_U574 = 0;
    l_U613 = 2006142190;
    l_U614 = 226415164;
    l_U635 = 0;
    l_U636 = 0;
    l_U673 = 2046537925;
    l_U674 = -183203150;
    l_U685 = 0;
    l_U690 = 0;
    l_U691 = 0;
    l_U692 = 0;
    l_U693 = 0;
    l_U702 = 0;
    l_U704 = {-1535.09400000, -698.26800000, 0.00000000};
    l_U707 = 0;
    l_U708 = 0;
    l_U709 = 0.00000000;
    l_U710 = 0.00000000;
    l_U711 = 0.00000000;
    l_U712 = 0.00000000;
    l_U736 = {-1763.53600000, -388.60200000, 2.09790000};
    l_U739 = 0;
    l_U740 = {-1140.93600000, -371.51600000, 3.84000000};
    l_U743 = 270.00000000;
    l_U745 = {-1140.93600000, -378.05100000, 3.84000000};
    l_U748 = 270.00000000;
    l_U752 = 1;
    l_U753 = 0;
    CLEAR_AREA( -880.26000000, 1311, 20.97240000, 50, 1 );
    UNPAUSE_RADIO();
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1137();
        if (NOT (IS_CHAR_DEAD( sub_3311() )))
        {
            GET_CHAR_COORDINATES( sub_3311(), ref l_U505._fU0, ref l_U505._fU4, ref l_U505._fU8 );
        }
        EXTINGUISH_FIRE_AT_POINT( l_U505._fU0, l_U505._fU4, l_U505._fU8, 100 );
        sub_3427();
    }
    SET_MISSION_FLAG( 1 );
    while (true)
    {
        switch (l_U752)
        {
            case 1:
            sub_5786();
            break;
            case 2:
            sub_7529();
            break;
            case 3:
            sub_15727();
            break;
            case 4:
            sub_33778();
            break;
            case 5:
            sub_39082();
            break;
            case 6:
            sub_43370();
            break;
            case 7:
            sub_54345();
            break;
            case 8:
            sub_60813();
            break;
        }
        WAIT( 0 );
    }
    sub_3427();
    return;
}

void sub_1137()
{
    sub_1146();
    return;
}

void sub_1146()
{
    int iVar2;

    iVar2 = 2;
    sub_1160( iVar2 );
    sub_2301( iVar2 );
    return;
}

void sub_1160(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_1204();
        sub_1412();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1537();
            sub_1589();
            g_U11095 = 1;
        }
    }
    sub_1682();
    sub_1821();
    uVar5 = sub_1934( uParam0 );
    sub_2210( uVar5, 0 );
    return;
}

void sub_1204()
{
    if (g_U10993)
    {
        return;
    }
    sub_1231( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_1352();
    }
    return;
}

void sub_1231(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    iVar3 = g_U20913[iParam0]._fU100;
    iVar3--;
    g_U20913[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1352()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1412()
{
    sub_1421();
    return;
}

void sub_1421()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1537()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1589()
{
    sub_1598();
    return;
}

void sub_1598()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1682()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12306[J]._fU144[I]._fU36)
            {
                g_U12306[J]._fU28 = 1;
            }
            g_U12306[J]._fU144[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1821()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1843();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1843()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1934(unknown uParam0)
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
        case 8: return 8;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_2165( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_2165(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2210(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_2301(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2310();
    if (g_U0)
    {
        return;
    }
    if (g_U94._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12303)
    {
        return;
    }
    iVar3 = g_U14838[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12306[iParam0]._fU12)
    {
        return;
    }
    if (g_U10959._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10959._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_3070())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_3136();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_2310()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_2348( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_2348( 1, g_U572[I] )) != 0)
            {
                sub_2634( I );
            }
        }
    }
    if (NOT sub_2800())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    if (g_U94._fU0 == 1015)
    {
        g_U94._fU92 = 1;
    }
    return;
}

int sub_2348(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2634(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2719( g_U572 - 1 );
    return;
}

void sub_2719(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2800()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2348( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3070()
{
    if ((g_U10959._fU4 == 0) AND (g_U10959._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_3136()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_3311()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3427()
{
    if (l_U431)
    {
        END_CAM_COMMANDS( ref l_U529 );
    }
    sub_3457();
    STOP_STREAM();
    SET_MAX_WANTED_LEVEL( 6 );
    SET_FAKE_WANTED_LEVEL( 0 );
    STOP_STREAM();
    RELEASE_SOUND_ID( l_U531 );
    SET_RADAR_ZOOM( 0 );
    STOP_STREAM();
    FLUSH_SCENARIO_BLOCKING_AREAS();
    g_U39234 = 0;
    SET_SUPPRESS_HEADLIGHT_SWITCH( 0 );
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    sub_3688( ref l_U543, 0 );
    SET_PED_IS_BLIND_RAGING( sub_3311(), 0 );
    g_U10454 = 0;
    g_U11004 = 1;
    g_U10460 = 1;
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1385068499, 64654, 1272, 23, 1, 0.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1644.75000000, -659.09000000, -2.00000000, -1370.59000000, -535.77000000, 5.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1288.15000000, -297.31000000, -2.00000000, -1257.74000000, -232.67000000, 5.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1323.20000000, 981.88000000, 15, -1276.52000000, 1036.26000000, 25 );
    RELEASE_PATH_NODES();
    FLUSH_SCENARIO_BLOCKING_AREAS();
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CREATE_RANDOM_COPS( 1 );
    if ((NOT (IS_PLAYER_DEAD( sub_4018() ))) AND (NOT (IS_CHAR_DEAD( sub_3311() ))))
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_4018(), 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U368[1] )))
    {
        FREEZE_CHAR_POSITION( l_U368[1], 0 );
        SET_CHAR_PROOFS( l_U368[1], 0, 0, 0, 0, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[1], 0 );
        CLEAR_CHAR_TASKS( l_U368[1] );
        SET_CHAR_KEEP_TASK( l_U368[1], 1 );
        if (NOT (IS_CHAR_DEAD( sub_3311() )))
        {
            TASK_COMBAT( l_U368[1], sub_3311() );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U368[7] )))
    {
        SET_CHAR_PROOFS( l_U368[7], 0, 0, 0, 0, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[7], 0 );
        CLEAR_CHAR_TASKS( l_U368[7] );
        SET_CHAR_KEEP_TASK( l_U368[7], 1 );
        if ((NOT (IS_CAR_DEAD( l_U354 ))) AND (NOT (IS_CHAR_DEAD( sub_3311() ))))
        {
            if (IS_CHAR_IN_CAR( l_U368[7], l_U354 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U492 );
                TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U354 );
                TASK_COMBAT( 0, sub_3311() );
                CLOSE_SEQUENCE_TASK( l_U492 );
                TASK_PERFORM_SEQUENCE( l_U368[7], l_U492 );
                CLEAR_SEQUENCE_TASK( l_U492 );
            }
            else
            {
                TASK_COMBAT( l_U368[7], sub_3311() );
            }
        }
        else if (NOT (IS_CAR_DEAD( l_U354 )))
        {
            TASK_LEAVE_CAR_IMMEDIATELY( l_U368[7], l_U354 );
        }
        if (NOT (IS_CHAR_DEAD( sub_3311() )))
        {
            TASK_COMBAT( l_U368[7], sub_3311() );
        }
    }
    sub_4563();
    for ( l_U530 = 0; l_U530 <= 5; l_U530++ )
    {
        if (DOES_VEHICLE_EXIST( l_U355[l_U530] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U355[l_U530] );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U354 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U354 );
    }
    for ( l_U530 = 0; l_U530 <= 10; l_U530++ )
    {
        if (DOES_CHAR_EXIST( l_U368[l_U530] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U368[l_U530] );
        }
    }
    if (DOES_CHAR_EXIST( l_U384 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U384 );
    }
    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U380[l_U530] )))
        {
            SET_CHAR_KEEP_TASK( l_U380[l_U530], 1 );
        }
        if (DOES_CHAR_EXIST( l_U380[l_U530] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U380[l_U530] );
        }
    }
    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U385[l_U530] )))
        {
            SET_CHAR_KEEP_TASK( l_U385[l_U530], 1 );
        }
        if (DOES_CHAR_EXIST( l_U385[l_U530] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U385[l_U530] );
        }
    }
    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U389[l_U530] )))
        {
            SET_CHAR_KEEP_TASK( l_U389[l_U530], 1 );
        }
        if (DOES_CHAR_EXIST( l_U389[l_U530] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U389[l_U530] );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U363[0] ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U363[0] );
    }
    if (DOES_VEHICLE_EXIST( l_U363[1] ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U363[1] );
    }
    if (DOES_VEHICLE_EXIST( l_U527 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U527 );
    }
    if (DOES_OBJECT_EXIST( l_U526 ))
    {
        DELETE_OBJECT( ref l_U526 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U514 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U515 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U516 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U517 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U518 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U519 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U520 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U521 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U522 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U523 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U524 );
    DONT_SUPPRESS_CAR_MODEL( l_U520 );
    DONT_SUPPRESS_CAR_MODEL( 841808271 );
    if (l_U457[0] == 1)
    {
        g_U39233 = 1;
    }
    else if (l_U457[1] == 1)
    {
        g_U39233 = 2;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3457()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U402 ))
    {
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 != 1)
        {
            ;
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_PROPAGATE( l_U402, 0 );
            SET_CAM_ACTIVE( l_U402, 0 );
            DESTROY_CAM( l_U402 );
            l_U402 = nil;
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
        }
        END_CAM_COMMANDS( ref iVar2 );
    }
    return;
}

void sub_3688(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_4018()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4563()
{
    if (DOES_BLIP_EXIST( l_U403 ))
    {
        REMOVE_BLIP( l_U403 );
    }
    if (DOES_BLIP_EXIST( l_U404 ))
    {
        REMOVE_BLIP( l_U404 );
    }
    if (DOES_BLIP_EXIST( l_U405 ))
    {
        REMOVE_BLIP( l_U405 );
    }
    if (DOES_BLIP_EXIST( l_U418 ))
    {
        REMOVE_BLIP( l_U418 );
    }
    for ( l_U530 = 0; l_U530 <= 10; l_U530++ )
    {
        if (DOES_BLIP_EXIST( l_U406[l_U530] ))
        {
            REMOVE_BLIP( l_U406[l_U530] );
        }
    }
    return;
}

void sub_5786()
{
    l_U750 = sub_3311();
    l_U751 = sub_4018();
    sub_5825( "E1S2AUD" );
    sub_5954( 0, sub_3311(), "Johnny", 0 );
    g_U10460 = 0;
    sub_6110( 0 );
    g_U11004 = 0;
    SET_MAX_WANTED_LEVEL( 3 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 880887899, 64395, 65164, 4, 1, 0 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 641313740, 64395, 65158, 4, 1, 0 );
    sub_6284();
    SWITCH_ROADS_OFF( -1644.75000000, -659.09000000, -2.00000000, -1370.59000000, -535.77000000, 5.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 63886, 64786, -5.00000000, 64186, 65016, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 64629, 1252, -5, 64706, 1348, 100 );
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    sub_6674( "E1S2AUD", 6 );
    LOAD_ADDITIONAL_TEXT( "CORRP2", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    l_U531 = GET_SOUND_ID();
    REQUEST_MODEL( l_U520 );
    REQUEST_MODEL( l_U518 );
    REQUEST_MODEL( l_U519 );
    REQUEST_MODEL( l_U516 );
    REQUEST_MODEL( l_U522 );
    REQUEST_MODEL( 1206834384 );
    REQUEST_MODEL( -1714620273 );
    REQUEST_ANIMS( "MOVE_M@H_CUFFED" );
    while ((((((((NOT (HAS_MODEL_LOADED( l_U520 ))) || (NOT (HAS_MODEL_LOADED( l_U518 )))) || (NOT (HAS_MODEL_LOADED( l_U519 )))) || (NOT (HAS_MODEL_LOADED( l_U516 )))) || (NOT (HAS_MODEL_LOADED( l_U522 )))) || (NOT (HAS_MODEL_LOADED( 1206834384 )))) || (NOT (HAS_MODEL_LOADED( -1714620273 )))) || (NOT (HAVE_ANIMS_LOADED( "MOVE_M@H_CUFFED" ))))
    {
        WAIT( 0 );
    }
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "EP1_SFX\TS2_HIJACK_BUS" )))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "MISSSTUBBS2" );
    while (NOT (HAVE_ANIMS_LOADED( "MISSSTUBBS2" )))
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( l_U520 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U493 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U494 );
    LOAD_COMBAT_DECISION_MAKER( 9, ref l_U495 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U493, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U494, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U495, 0 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1385068499, 64654, 1272, 23, 1, 0.00000000 );
    CREATE_OBJECT_NO_OFFSET( 1206834384, l_U740._fU0, l_U740._fU4, l_U740._fU8, ref l_U744, 1 );
    SET_OBJECT_HEADING( l_U744, l_U743 );
    FREEZE_OBJECT_POSITION( l_U744, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1206834384 );
    CREATE_OBJECT_NO_OFFSET( -1714620273, l_U745._fU0, l_U745._fU4, l_U745._fU8, ref l_U749, 1 );
    SET_OBJECT_HEADING( l_U749, l_U748 );
    FREEZE_OBJECT_POSITION( l_U749, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1714620273 );
    SUPPRESS_CAR_MODEL( l_U520 );
    l_U752++;
    return;
}

void sub_5825(unknown uParam0)
{
    StrCopy( ref l_U34._fU0, uParam0, 16 );
    sub_5844();
    return;
}

void sub_5844()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U34._fU16[I]._fU0 = nil;
        StrCopy( ref l_U34._fU16[I]._fU4, "", 32 );
        l_U34._fU344[I] = 0;
    }
    return;
}

void sub_5954(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6038( "\n PED NUMBER ", uParam0 );
    sub_6078( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6038(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6078(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6110(boolean bParam0)
{
    g_U11108 = 1;
    if (bParam0)
    {
        sub_6134( 0, 0 );
    }
    else
    {
        sub_6134( 1, 1 );
    }
    return;
}

void sub_6134(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11094) AND (NOT g_U11093))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_6284()
{
    unknown uVar2;

    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U367 );
    if (((DOES_VEHICLE_EXIST( l_U367 )) AND (NOT (IS_CAR_DEAD( l_U367 )))) AND (l_U367 != nil))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( l_U367 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U367 );
        }
        if (LOCATE_CAR_3D( l_U367, -38.11260000, 764.70310000, 13.57710000, 15.00000000, 15.00000000, 15.00000000, 0 ))
        {
            CLEAR_AREA( -38.85910000, 753.98880000, 13.62240000, 4.00000000, 1 );
            SET_CAR_HEADING( l_U367, 0.00000000 );
            SET_CAR_COORDINATES( l_U367, -38.85910000, 753.98880000, 13.62240000 );
            GET_CAR_MODEL( l_U367, ref uVar2 );
            if (NOT (IS_THIS_MODEL_A_BOAT( uVar2 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U367 );
            }
        }
    }
    return;
}

void sub_6674(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_6710())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_6710()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_7529()
{
    unknown uVar2;
    unknown uVar3;

    if (IS_BIT_SET( g_U10959._fU0, 7 ))
    {
        SET_CUTSCENE_EXTRA_ROOM_POS( -108.10000000, -265.90000000, 13.40000000 );
        ENABLE_SCENE_STREAMING( 0 );
        GET_CURRENT_WEATHER( ref uVar2 );
        FORCE_WEATHER_NOW( 0 );
        LOAD_ADDITIONAL_TEXT( "E1S2AUD", 6 );
        START_CUTSCENE_NOW( "TS02_AA" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "TS02_AA" );
        FORCE_WEATHER_NOW( uVar2 );
        RELEASE_WEATHER();
        ENABLE_SCENE_STREAMING( 1 );
    }
    CLEAR_AREA_OF_CARS( -36.39840000, 764.94980000, 13.71320000, 200 );
    sub_7774( ref l_U750, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    SET_CHAR_COORDINATES( sub_3311(), -36.39840000, 764.94980000, 13.71320000 );
    SET_CHAR_HEADING( sub_3311(), 86.29980000 );
    SET_CAM_BEHIND_PED( sub_3311() );
    if ((g_U39149[10] == 1) AND (NOT (IS_BIT_SET( g_U10959._fU0, 7 ))))
    {
        CLEAR_AREA( -941.03480000, 1323.82200000, 23.31030000, 300, 1 );
        LOAD_SCENE( -941.03480000, 1323.82200000, 23.31030000 );
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U750 )))
        {
            SET_CHAR_COORDINATES( l_U750, -953.57970000, 1315.22100000, 23.45730000 );
            SET_CHAR_HEADING( l_U750, 309.21490000 );
        }
        else
        {
            GET_CAR_CHAR_IS_USING( l_U750, ref l_U367 );
            SET_CAR_COORDINATES( l_U367, -955.96110000, 1310.16500000, 23.51740000 );
            SET_CAR_HEADING( l_U367, 5.97210000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U367 );
            WARP_CHAR_FROM_CAR_TO_COORD( l_U750, -953.57970000, 1315.22100000, 23.45730000 );
            SET_CHAR_HEADING( l_U750, 309.21490000 );
        }
        SET_GAME_CAM_HEADING( 0 );
        WAIT( 0 );
        CLEAR_AREA( -941.03480000, 1323.82200000, 23.31030000, 300, 1 );
        sub_8786();
        sub_4563();
        sub_9198();
        while (l_U438 == 0)
        {
            sub_9290();
            PRINTSTRING( "\n\n\n      ----> CREATE COPS <----" );
            WAIT( 0 );
        }
        while (l_U435 == 0)
        {
            sub_11848();
            sub_12603();
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if (DOES_CHAR_EXIST( l_U380[l_U530] ))
                {
                    DELETE_CHAR( ref l_U380[l_U530] );
                }
            }
            sub_13782();
            PRINTSTRING( "\n\n\n      ----> CREATE PRISONERS <----" );
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL_ADVANCED( l_U751, 1, 1, 1 );
        sub_4563();
        sub_15084();
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        if (l_U473[3] == 0)
        {
            PRINT_NOW( "CP2_COMMAND_04", 7500, 1 );
            l_U473[3] = 1;
        }
        l_U436 = 1;
        SETTIMERA( 0 );
        l_U439 = 1;
        l_U752++;
    }
    else
    {
        g_U39149[10] = 0;
        sub_8786();
        sub_4563();
        sub_9198();
        REQUEST_MODEL( 841808271 );
        while (NOT (HAS_MODEL_LOADED( 841808271 )))
        {
            REQUEST_MODEL( 841808271 );
            WAIT( 0 );
        }
        CREATE_CAR( 841808271, -61.24130000, 763.66660000, 13.56290000, ref uVar3, 1 );
        SET_CAR_HEADING( uVar3, 179.53010000 );
        CHANGE_CAR_COLOUR( uVar3, 128, 128 );
        SET_EXTRA_CAR_COLOURS( uVar3, 128, 0 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 841808271 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar3 );
        SUPPRESS_CAR_MODEL( 841808271 );
        if (IS_SCREEN_FADED_OUT())
        {
            LOAD_SCENE( -36.39840000, 764.94980000, 13.71320000 );
            WAIT( 3000 );
            if (NOT IS_SCREEN_FADING_IN())
            {
                DO_SCREEN_FADE_IN( 500 );
                SETTIMERA( 0 );
                WAIT( 500 );
            }
        }
        SET_PLAYER_CONTROL( l_U751, 1 );
        PRINT_NOW( "CP2_COMMAND_07", 7500, 1 );
    }
    if (l_U367 != nil)
    {
        if (NOT (IS_CAR_DEAD( l_U367 )))
        {
            if (IS_CAR_A_MISSION_CAR( l_U367 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U367 );
            }
        }
    }
    l_U752++;
    return;
}

void sub_7774(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_3311()) AND (g_U15728[19]))
        {
            if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_8786()
{
    CLEAR_AREA( -880.26000000, 1311, 20.97240000, 50, 1 );
    CLEAR_AREA_OF_CARS( -880.26000000, 1311, 20.97240000, 50 );
    CREATE_CAR( l_U520, -880.26000000, 1311, 20.97240000, ref l_U354, 1 );
    SET_CAR_HEADING( l_U354, 0.75240000 );
    SET_CAR_HEALTH( l_U354, 1750 );
    SET_ENGINE_HEALTH( l_U354, 1750 );
    SET_PETROL_TANK_HEALTH( l_U354, 1750 );
    SET_CAN_BURST_CAR_TYRES( l_U354, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U354 );
    FREEZE_CAR_POSITION( l_U354, 1 );
    SET_CAR_PROOFS( l_U354, 1, 0, 0, 0, 0 );
    if (sub_9000())
    {
        SET_ENGINE_HEALTH( l_U354, 50 );
        SET_PETROL_TANK_HEALTH( l_U354, 50 );
    }
    l_U424 = 1;
    return;
}

void sub_9000()
{
    int iVar2;
    int Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar2 );
    Result = 0;
    if (iVar2 == 0)
    {
        if (SPOT_CHECK5() == 0)
        {
            Result = 1;
        }
    }
    else if (iVar2 == 1)
    {
        if (SPOT_CHECK6() == 0)
        {
            Result = 1;
        }
    }
    else if (iVar2 == 2)
    {
        if (SPOT_CHECK7() == 0)
        {
            Result = 1;
        }
    }
    else if (SPOT_CHECK8() == 0)
    {
        Result = 1;
    };;;;
    return Result;
}

void sub_9198()
{
    if (NOT (DOES_BLIP_EXIST( l_U403 )))
    {
        ADD_BLIP_FOR_COORD( l_U496._fU0, l_U496._fU4, l_U496._fU8, ref l_U403 );
        SET_ROUTE( l_U403, 1 );
    }
    return;
}

void sub_9290()
{
    if ((l_U438 == 0) AND (l_U437 == 0))
    {
        GET_CURRENT_BASIC_COP_MODEL( ref l_U514 );
        GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U515 );
        REQUEST_MODEL( l_U517 );
    }
    if (((((HAS_MODEL_LOADED( l_U514 )) AND (HAS_MODEL_LOADED( l_U515 ))) AND (HAS_MODEL_LOADED( l_U517 ))) AND (HAS_MODEL_LOADED( l_U516 ))) AND (l_U438 == 0))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -880.26000000, 1307.57300000, 20.97240000, 250, 250, 250, 0 )) || ((IS_CHAR_IN_ANY_HELI( l_U750 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -880.26000000, 1307.57300000, 20.97240000, 420, 420, 420, 0 ))))
        {
            CLEAR_AREA_OF_COPS( -880.26000000, 1307.57300000, 20.97240000, 125 );
            SET_CREATE_RANDOM_COPS( 0 );
            CREATE_CAR( l_U515, -870.75480000, 1321.79600000, 20.97240000, ref l_U355[0], 1 );
            SET_CAR_HEADING( l_U355[0], 239.38460000 );
            CREATE_CAR( l_U515, -845.08320000, 1306.87000000, 20.94680000, ref l_U355[1], 1 );
            SET_CAR_HEADING( l_U355[1], 91.36980000 );
            CREATE_CAR( l_U515, -853.01260000, 1288.93800000, 20.97300000, ref l_U355[2], 1 );
            SET_CAR_HEADING( l_U355[2], 179.69810000 );
            CREATE_CAR( l_U515, -878.91750000, 1290.13900000, 20.97270000, ref l_U355[3], 1 );
            SET_CAR_HEADING( l_U355[3], 359.24740000 );
            CREATE_CAR( l_U515, -870.99800000, 1311.44300000, 20.97240000, ref l_U355[4], 1 );
            SET_CAR_HEADING( l_U355[4], 243.34560000 );
            CREATE_CAR( l_U515, -910.66110000, 1334.57300000, 22.89380000, ref l_U355[5], 1 );
            SET_CAR_HEADING( l_U355[5], 88.55030000 );
            for ( l_U530 = 0; l_U530 <= 5; l_U530++ )
            {
                LOCK_CAR_DOORS( l_U355[l_U530], 7 );
                SET_CAR_IN_CUTSCENE( l_U355[l_U530], 1 );
            }
            CREATE_CHAR( 6, l_U516, -880.87440000, 1316.51100000, 20.96140000, ref l_U368[0], 1 );
            SET_CHAR_HEADING( l_U368[0], 280.73650000 );
            sub_5954( 6, l_U368[0], "PRISONER_COP", 0 );
            CREATE_CHAR( 6, l_U516, -884.20900000, 1302.19300000, 20.97270000, ref l_U368[1], 1 );
            SET_CHAR_HEADING( l_U368[1], 283.23070000 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U368[1], 10, 20000, 1 );
            SET_CURRENT_CHAR_WEAPON( l_U368[1], 10, 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U368[1], 0, 2, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U368[1], 1, 1, 0 );
            sub_5954( 4, l_U368[1], "PRISON_GUARD_2", 0 );
            SET_CHAR_NEVER_TARGETTED( l_U368[1], 1 );
            CREATE_CHAR( 6, l_U514, -852.65630000, 1291.71500000, 20.97300000, ref l_U368[2], 1 );
            SET_CHAR_HEADING( l_U368[2], 11.26440000 );
            TASK_USE_MOBILE_PHONE( l_U368[2], 1 );
            CREATE_CHAR( 6, l_U514, -883.20570000, 1273.26300000, 22.15750000, ref l_U368[3], 1 );
            SET_CHAR_HEADING( l_U368[3], 275.66300000 );
            if (HAS_MODEL_LOADED( l_U522 ))
            {
                TASK_START_SCENARIO_AT_POSITION( l_U368[3], "Scenario_SmokingOutsideOffice", -883.20570000, 1273.26300000, 22.15750000, 275.66300000 );
                GIVE_PED_AMBIENT_OBJECT( l_U368[3], l_U522 );
            }
            CREATE_CHAR( 6, l_U516, -916.11320000, 1326.47700000, 23.33390000, ref l_U368[4], 1 );
            SET_CHAR_HEADING( l_U368[4], 24.93740000 );
            CREATE_CHAR( 6, l_U514, -933.85730000, 1323.90500000, 23.43140000, ref l_U368[5], 1 );
            SET_CHAR_HEADING( l_U368[5], 23.67940000 );
            sub_5954( 1, l_U368[5], "GATE_GUARD", 0 );
            CREATE_CHAR( 6, l_U514, -873.56840000, 1314.23700000, 20.97240000, ref l_U368[6], 1 );
            SET_CHAR_HEADING( l_U368[6], 74.11360000 );
            TASK_USE_MOBILE_PHONE( l_U368[6], 1 );
            if (NOT (IS_CAR_DEAD( l_U354 )))
            {
                CREATE_CHAR_INSIDE_CAR( l_U354, 6, l_U516, ref l_U368[7] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[7], 1 );
                SET_CHAR_PROOFS( l_U368[7], 1, 1, 1, 1, 1 );
            }
            else
            {
                CREATE_CHAR( 6, l_U516, -891.86690000, 1335.27500000, 21.09270000, ref l_U368[7], 1 );
                SET_CHAR_HEADING( l_U368[7], 105.12150000 );
            }
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U368[7], 0 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U368[7], 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U368[7], 0, 0, 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U368[7], 1, 0, 0 );
            CREATE_CHAR( 6, l_U514, -866.79050000, 1339.77700000, 21.09260000, ref l_U368[8], 1 );
            SET_CHAR_HEADING( l_U368[8], 125.15340000 );
            TASK_USE_MOBILE_PHONE( l_U368[8], 1 );
            CREATE_CHAR( 6, l_U516, -885.39550000, 1323.24900000, 20.97270000, ref l_U368[9], 1 );
            SET_CHAR_HEADING( l_U368[9], 278.98120000 );
            CREATE_CHAR( 6, l_U517, -866.17190000, 1300.17700000, 21.12200000, ref l_U368[10], 1 );
            SET_CHAR_HEADING( l_U368[10], 64.26510000 );
            sub_5954( 8, l_U368[10], "Officer", 0 );
            CREATE_CHAR( 6, l_U517, -874.40220000, 1311.84500000, 20.97240000, ref l_U384, 1 );
            SET_CHAR_HEADING( l_U384, 91.58830000 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U384, 13, 20000, 1 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U384, 3 );
            SET_CHAR_RELATIONSHIP( l_U384, 1, 3 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U384, 1 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U384, 0 );
            SET_CHAR_BULLETPROOF_VEST( l_U384, 1 );
            ADD_ARMOUR_TO_CHAR( l_U384, 100 );
            SET_COMBAT_DECISION_MAKER( l_U384, l_U495 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U495, 0 );
            for ( l_U530 = 0; l_U530 <= 10; l_U530++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U368[l_U530] )))
                {
                    if (l_U530 == 10)
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( l_U368[10], 13, 20000, 1 );
                        SET_CHAR_BULLETPROOF_VEST( l_U368[10], 1 );
                        ADD_ARMOUR_TO_CHAR( l_U368[10], 100 );
                    }
                    else if (l_U530 != 1)
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( l_U368[l_U530], 7, 20000, 0 );
                    }
                    if (l_U530 != 7)
                    {
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U368[l_U530], 1 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U368[l_U530], 0 );
                    }
                    if ((((((l_U530 == 1) || (l_U530 == 2)) || (l_U530 == 3)) || (l_U530 == 5)) || (l_U530 == 6)) || (l_U530 == 10))
                    {
                        SET_COMBAT_DECISION_MAKER( l_U368[l_U530], l_U494 );
                        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U494, 0 );
                    }
                    else if (l_U530 == 4)
                    {
                        SET_COMBAT_DECISION_MAKER( l_U368[l_U530], l_U493 );
                        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U493, 0 );
                    }
                    else
                    {
                        SET_COMBAT_DECISION_MAKER( l_U368[l_U530], l_U495 );
                        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U495, 0 );
                    }
                    SET_CHAR_RELATIONSHIP_GROUP( l_U368[l_U530], 3 );
                    SET_CHAR_RELATIONSHIP( l_U368[l_U530], 1, 3 );
                }
            }
            TASK_STAND_GUARD( l_U368[4], -916.11320000, 1326.47700000, 23.33390000, 93.58110000, 5.00000000, 1, -1 );
            l_U438 = 1;
        }
    }
    return;
}

void sub_11848()
{
    if (l_U435 == 0)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -880.26000000, 1307.57300000, 20.97240000, 250, 250, 250, 0 )) || ((IS_CHAR_IN_ANY_HELI( l_U750 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -880.26000000, 1307.57300000, 20.97240000, 420, 420, 420, 0 ))))
        {
            CREATE_CHAR( 22, l_U518, -876.00000000, 1304, 20.97270000, ref l_U380[0], 1 );
            SET_CHAR_HEADING( l_U380[0], 19.52810000 );
            SET_CHAR_COMPONENT_VARIATION( l_U380[0], 0, 0, 3 );
            SET_CHAR_COMPONENT_VARIATION( l_U380[0], 8, 1, 0 );
            sub_5954( 3, l_U380[0], "PRISONER_2", 0 );
            CREATE_CHAR( 22, l_U518, -875.50000000, 1302, 20.97270000, ref l_U380[1], 1 );
            SET_CHAR_HEADING( l_U380[1], 19.48110000 );
            SET_CHAR_COMPONENT_VARIATION( l_U380[1], 0, 0, 2 );
            SET_CHAR_COMPONENT_VARIATION( l_U380[1], 8, 1, 0 );
            sub_5954( 2, l_U380[1], "PRISONER_1", 0 );
            CREATE_CHAR( 22, l_U519, -883.00000000, 1302.50000000, 20.97270000, ref l_U380[2], 1 );
            SET_CHAR_HEADING( l_U380[2], 283.23070000 );
            SET_CHAR_COMPONENT_VARIATION( l_U380[2], 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U380[2], 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U380[2], 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U380[2], 8, 1, 0 );
            sub_5954( 5, l_U380[2], "PSYCHO_PRISONER", 0 );
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U380[l_U530] )))
                {
                    SET_PED_PATH_MAY_USE_LADDERS( l_U380[l_U530], 0 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U380[l_U530], 0 );
                    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U380[l_U530], 0 );
                    SET_ANIM_GROUP_FOR_CHAR( l_U380[l_U530], "MOVE_M@H_CUFFED" );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U380[l_U530], 1 );
                    SET_CHAR_NEVER_TARGETTED( l_U380[l_U530], 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U380[l_U530], 1 );
                }
            }
            l_U435 = 1;
        }
    }
    return;
}

void sub_12603()
{
    if ((l_U447 == 0) AND (NOT (IS_CAR_DEAD( l_U354 ))))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -880.26000000, 1307.57300000, 20.97240000, 250, 250, 250, 0 )) || ((IS_CHAR_IN_ANY_HELI( l_U750 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -880.26000000, 1307.57300000, 20.97240000, 420, 420, 420, 0 ))))
        {
            GET_CAR_COORDINATES( l_U354, ref l_U502._fU0, ref l_U502._fU4, ref l_U502._fU8 );
            l_U502._fU8 += 30;
            GET_CAR_HEADING( l_U354, ref l_U538 );
            CREATE_CHAR( 22, l_U519, l_U502._fU0, l_U502._fU4, l_U502._fU8, ref l_U385[0], 1 );
            SET_CHAR_HEADING( l_U385[0], l_U538 );
            SET_CHAR_COMPONENT_VARIATION( l_U385[0], 0, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U385[0], 1, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U385[0], 8, 1, 0 );
            CREATE_CHAR( 22, l_U518, l_U502._fU0, l_U502._fU4, l_U502._fU8, ref l_U385[1], 1 );
            SET_CHAR_HEADING( l_U385[1], l_U538 );
            SET_CHAR_COMPONENT_VARIATION( l_U385[1], 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U385[1], 8, 1, 0 );
            CREATE_CHAR( 22, l_U519, l_U502._fU0, l_U502._fU4, l_U502._fU8, ref l_U385[2], 1 );
            SET_CHAR_HEADING( l_U385[2], l_U538 );
            SET_CHAR_COMPONENT_VARIATION( l_U385[2], 0, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U385[2], 1, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U385[2], 8, 1, 0 );
            ATTACH_PED_TO_CAR( l_U385[0], l_U354, 0, 0.70000000 - 0.10000000, -0.30000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
            ATTACH_PED_TO_CAR( l_U385[1], l_U354, 0, -0.70000000 + 0.07500000, -0.30000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
            ATTACH_PED_TO_CAR( l_U385[2], l_U354, 0, -0.70000000 + 0.07500000, 0.60000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U385[l_U530] )))
                {
                    SET_PED_PATH_MAY_USE_LADDERS( l_U385[l_U530], 0 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U385[l_U530], 0 );
                    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U385[l_U530], 0 );
                    SET_ANIM_GROUP_FOR_CHAR( l_U385[l_U530], "MOVE_M@H_CUFFED" );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U385[l_U530], 1 );
                    SET_CHAR_NEVER_TARGETTED( l_U385[l_U530], 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U385[l_U530], 1 );
                    OPEN_SEQUENCE_TASK( ref l_U492 );
                    TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 0, 0, 0, 0, 375 * (l_U530 + 3) );
                    TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 1, 0, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U492 );
                    TASK_PERFORM_SEQUENCE( l_U385[l_U530], l_U492 );
                    CLEAR_SEQUENCE_TASK( l_U492 );
                }
            }
            l_U447 = 1;
        }
    }
    return;
}

void sub_13782()
{
    if (NOT (IS_CAR_DEAD( l_U354 )))
    {
        GET_CAR_COORDINATES( l_U354, ref l_U502._fU0, ref l_U502._fU4, ref l_U502._fU8 );
        l_U502._fU8 += 30;
        GET_CAR_HEADING( l_U354, ref l_U538 );
        CREATE_CHAR( 22, l_U518, l_U502._fU0, l_U502._fU4, l_U502._fU8, ref l_U380[0], 1 );
        SET_CHAR_HEADING( l_U380[0], l_U538 );
        SET_CHAR_COMPONENT_VARIATION( l_U380[0], 0, 0, 3 );
        SET_CHAR_COMPONENT_VARIATION( l_U380[0], 8, 1, 0 );
        sub_5954( 3, l_U380[0], "PRISONER_2", 0 );
        CREATE_CHAR( 22, l_U518, l_U502._fU0, l_U502._fU4, l_U502._fU8, ref l_U380[1], 1 );
        SET_CHAR_HEADING( l_U380[1], l_U538 );
        SET_CHAR_COMPONENT_VARIATION( l_U380[1], 0, 0, 2 );
        SET_CHAR_COMPONENT_VARIATION( l_U380[1], 8, 1, 0 );
        sub_5954( 2, l_U380[1], "PRISONER_1", 0 );
        CREATE_CHAR( 22, l_U519, l_U502._fU0, l_U502._fU4, l_U502._fU8, ref l_U380[2], 1 );
        SET_CHAR_HEADING( l_U380[2], l_U538 );
        SET_CHAR_COMPONENT_VARIATION( l_U380[2], 0, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U380[2], 1, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U380[2], 3, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U380[2], 8, 0, 0 );
        sub_5954( 5, l_U380[2], "PSYCHO_PRISONER", 0 );
        ATTACH_PED_TO_CAR( l_U380[0], l_U354, 0, 0.70000000 - 0.10000000, -1.20000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
        ATTACH_PED_TO_CAR( l_U380[1], l_U354, 0, 0.70000000 - 0.10000000, -2.10000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
        ATTACH_PED_TO_CAR( l_U380[2], l_U354, 0, 0, -1.35000000, 0.82000000, l_U538 - 180, 0, 0, 0 );
        for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U380[l_U530] )))
            {
                SET_PED_PATH_MAY_USE_LADDERS( l_U380[l_U530], 0 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U380[l_U530], 0 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U380[l_U530], 0 );
                SET_ANIM_GROUP_FOR_CHAR( l_U380[l_U530], "MOVE_M@H_CUFFED" );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U380[l_U530], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U380[l_U530], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U380[l_U530], 1 );
                if (l_U530 != 2)
                {
                    OPEN_SEQUENCE_TASK( ref l_U492 );
                    TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 0, 0, 0, 0, 375 * l_U530 );
                    TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 1, 0, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U492 );
                    TASK_PERFORM_SEQUENCE( l_U380[l_U530], l_U492 );
                    CLEAR_SEQUENCE_TASK( l_U492 );
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U368[1] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U368[1] );
            ATTACH_PED_TO_CAR( l_U368[1], l_U354, 0, 0, -0.45000000, 0.82000000, l_U538 - 180, 0, 0, 0 );
            FREEZE_CHAR_POSITION( l_U368[1], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[1], 1 );
            SET_CHAR_RELATIONSHIP( l_U368[1], 2, 0 );
            SET_CHAR_PROOFS( l_U368[1], 1, 1, 1, 1, 1 );
        }
    }
    return;
}

void sub_15084()
{
    if (IS_VEH_DRIVEABLE( l_U354 ))
    {
        if (NOT (DOES_BLIP_EXIST( l_U404 )))
        {
            ADD_BLIP_FOR_CAR( l_U354, ref l_U404 );
            SET_BLIP_AS_FRIENDLY( l_U404, 1 );
            sub_15161( ref l_U404 );
        }
    }
    return;
}

void sub_15161(unknown uParam0)
{
    g_U2768 = (uParam0^);
    return;
}

void sub_15727()
{
    if ((l_U435 == 1) AND (l_U438 == 1))
    {
        sub_15756();
    }
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -880.26000000, 1307.57300000, 20.97240000, 425, 425, 425, 0 )) AND ((l_U435 == 0) || (l_U438 == 0)))
    {
        sub_9290();
        sub_11848();
        sub_12603();
        SETTIMERA( 0 );
    }
    if (l_U436 == 0)
    {
        if (((((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -880.26000000, 1307.57300000, 20.97240000, 57, 50, 40, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -936.97640000, 1329.63800000, 23.31020000, 4, 7, 5, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -881.69500000, 1262.96000000, 21.94880000, 3, 5, 5, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( l_U750, l_U496._fU0, l_U496._fU4, l_U496._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))) || ((IS_CHAR_IN_ANY_HELI( l_U750 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -880.26000000, 1307.57300000, 20.97240000, 400, 400, 400, 0 ))))
        {
            if ((sub_16850( 1, 1 )) || (IS_CHAR_IN_ANY_HELI( l_U750 )))
            {
                SETTIMERA( 0 );
                sub_19600();
                ALLOW_EMERGENCY_SERVICES( 0 );
                l_U752++;
            }
        }
    }
    sub_29448();
    sub_30066();
    sub_33196();
    return;
}

void sub_15756()
{
    if (l_U435 == 1)
    {
        for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
        {
            if (IS_CHAR_INJURED( l_U380[l_U530] ))
            {
                if (NOT (IS_CAR_DEAD( l_U354 )))
                {
                    FREEZE_CAR_POSITION( l_U354, 0 );
                }
                l_U528 = 3;
                sub_15856();
            }
        }
    }
    if (l_U447 == 1)
    {
        for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
        {
            if (IS_CHAR_INJURED( l_U385[l_U530] ))
            {
                if (NOT (IS_CAR_DEAD( l_U354 )))
                {
                    FREEZE_CAR_POSITION( l_U354, 0 );
                }
                l_U528 = 3;
                sub_15856();
            }
        }
    }
    return;
}

void sub_15856()
{
    sub_15865();
    sub_4563();
    sub_3688( ref l_U543, 0 );
    if (IS_SCREEN_FADING_OUT())
    {
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 750 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    switch (l_U528)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        STOP_STREAM();
        PRINT_NOW( "CP2_FAIL_03", 7500, 1 );
        if (DOES_CHAR_EXIST( l_U368[1] ))
        {
            SET_CHAR_PROOFS( l_U368[1], 0, 0, 0, 0, 0 );
        }
        if (DOES_CHAR_EXIST( l_U368[7] ))
        {
            SET_CHAR_PROOFS( l_U368[7], 0, 0, 0, 0, 0 );
        }
        SETTIMERA( 0 );
        if ((l_U752 >= 6) AND (NOT (IS_CAR_DEAD( l_U354 ))))
        {
            while ((IS_MESSAGE_BEING_DISPLAYED()) AND (TIMERA() < 8000))
            {
                WAIT( 0 );
            }
            sub_16774();
        }
        sub_17701( 2, "E1S2_CALLS", "E1S2AUD", 0 );
        sub_18287();
        break;
        case 2:
        PRINT_NOW( "CP2_FAIL_01", 7500, 1 );
        sub_17701( 2, "E1S2_CALLS", "E1S2AUD", 0 );
        sub_18287();
        break;
        case 3:
        PRINT_NOW( "CP2_FAIL_02", 7500, 1 );
        SETTIMERA( 0 );
        if (l_U752 == 4)
        {
            if (NOT (IS_CAR_DEAD( l_U354 )))
            {
                if (IS_CHAR_IN_CAR( l_U750, l_U354 ))
                {
                    while ((IS_MESSAGE_BEING_DISPLAYED()) AND (TIMERA() < 8000))
                    {
                        WAIT( 0 );
                    }
                    sub_16774();
                }
                else
                {
                    LOCK_CAR_DOORS( l_U354, 2 );
                }
            }
        }
        else if (l_U752 >= 5)
        {
            while ((IS_MESSAGE_BEING_DISPLAYED()) AND (TIMERA() < 8000))
            {
                WAIT( 0 );
            }
            sub_16774();
        }
        sub_17701( 2, "E1S2_STUBBS", "E1S2AUD", 0 );
        sub_18287();
        break;
        case 4:
        PRINT_NOW( "CP2_FAIL_04", 7500, 1 );
        sub_17701( 2, "E1S2_CALLS", "E1S2AUD", 0 );
        sub_18287();
        break;
        case 5:
        PRINT_NOW( "CP2_FAIL_05", 7500, 1 );
        SETTIMERA( 0 );
        while ((IS_MESSAGE_BEING_DISPLAYED()) AND (TIMERA() < 8000))
        {
            WAIT( 0 );
        }
        sub_16774();
        sub_17701( 2, "E1S2_CALLS", "E1S2AUD", 0 );
        sub_18287();
        break;
        case 6:
        PRINT_NOW( "CP2_FAIL_06", 7500, 1 );
        SETTIMERA( 0 );
        if (l_U752 >= 5)
        {
            while ((IS_MESSAGE_BEING_DISPLAYED()) AND (TIMERA() < 8000))
            {
                WAIT( 0 );
            }
            sub_16774();
        }
        sub_17701( 2, "E1S2_CALLS", "E1S2AUD", 0 );
        sub_18287();
        break;
    }
    if (g_U10991 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( l_U751, 150 );
        SAY_AMBIENT_SPEECH( l_U750, "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    l_U461 = 1;
    sub_3427();
    return;
}

void sub_15865()
{
    boolean bVar2;
    int I;
    unknown uVar4;

    PRINTSTRING( "\n [rw][script] CHECK_PRISONERS_ALIVE() is GETTING CALLED \n" );
    bVar2 = false;
    for ( I = 0; I <= 2; I++ )
    {
        if ((DOES_CHAR_EXIST( l_U385[I] )) AND (IS_CHAR_DEAD( l_U385[I] )))
        {
            WAIT( 150 );
            bVar2 = true;
            DELETE_CHAR( ref l_U385[I] );
        }
        if ((DOES_CHAR_EXIST( l_U380[I] )) AND (IS_CHAR_DEAD( l_U380[I] )))
        {
            WAIT( 150 );
            bVar2 = true;
            DELETE_CHAR( ref l_U380[I] );
        }
    }
    if (bVar2)
    {
        for ( I = 0; I <= 2; I++ )
        {
            if ((DOES_CHAR_EXIST( l_U385[I] )) AND (NOT (IS_CHAR_DEAD( l_U385[I] ))))
            {
                SET_CHAR_PROOFS( l_U385[I], 1, 1, 1, 1, 1 );
            }
            if ((DOES_CHAR_EXIST( l_U380[I] )) AND (NOT (IS_CHAR_DEAD( l_U380[I] ))))
            {
                SET_CHAR_PROOFS( l_U380[I], 1, 1, 1, 1, 1 );
            }
        }
    }
    if (IS_CAR_DEAD( l_U354 ))
    {
        for ( I = 0; I <= 2; I++ )
        {
            if (DOES_CHAR_EXIST( l_U385[I] ))
            {
                WAIT( 150 );
                bVar2 = true;
                DELETE_CHAR( ref l_U385[I] );
            }
            if (DOES_CHAR_EXIST( l_U380[I] ))
            {
                WAIT( 150 );
                bVar2 = true;
                DELETE_CHAR( ref l_U380[I] );
            }
        }
    }
    return;
}

void sub_16774()
{
    if (l_U752 >= 5)
    {
        WAIT( 1000 );
        while (IS_MESSAGE_BEING_DISPLAYED())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U750 )))
        {
            while (NOT (sub_16850( 1, 1 )))
            {
                WAIT( 0 );
            }
        }
        if ((NOT IS_SCREEN_FADED_OUT()) || (NOT IS_SCREEN_FADING_OUT()))
        {
            DO_SCREEN_FADE_OUT( 1000 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
        }
        SET_PLAYER_CONTROL_ADVANCED( l_U751, 0, 1, 1 );
        CLEAR_WANTED_LEVEL( l_U751 );
        sub_3457();
        LOAD_SCENE( -1713.22100000, 358.11890000, 24.44400000 );
        if (IS_CHAR_IN_ANY_CAR( l_U750 ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U750, -1713.22100000, 358.11890000, 24.44400000 );
        }
        else
        {
            SET_CHAR_COORDINATES( l_U750, -1713.22100000, 358.11890000, 24.44400000 );
        }
        SET_CHAR_HEADING( l_U750, 330.91020000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (NOT (IS_CAR_DEAD( l_U354 )))
        {
            DELETE_CAR( ref l_U354 );
        }
        for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U380[l_U530] )))
            {
                DELETE_CHAR( ref l_U380[l_U530] );
            }
        }
        for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U385[l_U530] )))
            {
                DELETE_CHAR( ref l_U385[l_U530] );
            }
        }
        CLEAR_AREA( -1713.22100000, 358.11890000, 24.44400000, 200, 1 );
        WAIT( 1000 );
        SET_PLAYER_CONTROL_ADVANCED( l_U751, 1, 1, 1 );
        if ((NOT IS_SCREEN_FADED_IN()) || (NOT IS_SCREEN_FADING_IN()))
        {
            DO_SCREEN_FADE_IN( 1000 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
        }
    }
    return;
}

int sub_16850(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3311() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3311(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3311() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3311(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3311()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3311() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3311() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4018() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4018() )))
    {
        return 0;
    }
    return 1;
}

void sub_17701(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_17745( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_17745(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U814 = 1;
        g_U815 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_18287()
{
    sub_18296();
    return;
}

void sub_18296()
{
    int iVar2;

    iVar2 = 2;
    sub_18310( iVar2 );
    sub_2301( iVar2 );
    return;
}

void sub_18310(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4018(), 150 );
    CLEAR_HELP();
    sub_1160( uParam0 );
    return;
}

void sub_19600()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U436 == 0)
    {
        SET_PLAYER_CONTROL_ADVANCED( l_U751, 0, 1, 1 );
        HAS_RESPRAY_HAPPENED();
        g_U39149[10] = 1;
        while (l_U439 == 0)
        {
            if (NOT l_U429)
            {
                if (TIMERA() >= 1100)
                {
                    l_U429 = 1;
                }
            }
            else if ((sub_19705()) AND (IS_SCREEN_FADED_IN()))
            {
                l_U430 = 1;
                INCREMENT_INT_STAT( 372, 1 );
                if (IS_CHAR_IN_ANY_HELI( l_U750 ))
                {
                    DO_SCREEN_FADE_OUT_UNHACKED( 250 );
                }
                else
                {
                    DO_SCREEN_FADE_OUT( 500 );
                }
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                CLEAR_PRINTS();
                sub_3688( ref l_U543, 0 );
                sub_19917();
                sub_20535();
                DISPLAY_RADAR( 1 );
                DISPLAY_HUD( 1 );
                SET_WIDESCREEN_BORDERS( 0 );
                SET_PLAYER_CONTROL_ADVANCED( l_U751, 1, 0, 1 );
                if (IS_CHAR_IN_ANY_HELI( l_U750 ))
                {
                    GET_CAR_CHAR_IS_USING( l_U750, ref l_U366 );
                    if (NOT (IS_CAR_DEAD( l_U366 )))
                    {
                        FREEZE_CAR_POSITION( l_U366, 0 );
                        SET_HELI_BLADES_FULL_SPEED( l_U366 );
                    }
                }
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U529 );
                l_U431 = 0;
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_CAM_BEHIND_PED( l_U750 );
                SET_POLICE_IGNORE_PLAYER( l_U751, 0 );
                if (NOT (IS_CAR_DEAD( l_U354 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( l_U354 );
                    FREEZE_CAR_POSITION( l_U354, 1 );
                }
                sub_4563();
                sub_15084();
                GET_CHAR_COORDINATES( l_U750, ref l_U505._fU0, ref l_U505._fU4, ref l_U505._fU8 );
                LOAD_SCENE( l_U505._fU0, l_U505._fU4, l_U505._fU8 );
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U750, l_U496._fU0, l_U496._fU4, l_U496._fU8, 2.50000000 + 1, 2.50000000 + 1, 2.50000000, 0 ))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U750 )))
                    {
                        SET_CHAR_COORDINATES( l_U750, -953.57970000, 1315.22100000, 23.45730000 );
                        SET_CHAR_HEADING( l_U750, 309.21490000 );
                        SET_GAME_CAM_HEADING( 0 );
                    }
                    else
                    {
                        GET_CAR_CHAR_IS_USING( l_U750, ref l_U367 );
                        SET_CAR_COORDINATES( l_U367, -955.96110000, 1310.16500000, 23.51740000 );
                        SET_CAR_HEADING( l_U367, 5.97210000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U367 );
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U750, -953.57970000, 1315.22100000, 23.45730000 );
                        SET_CHAR_HEADING( l_U750, 309.21490000 );
                        SET_GAME_CAM_HEADING( 0 );
                    }
                    SET_GAME_CAM_HEADING( 0 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_CAM_BEHIND_PED( l_U750 );
                DO_SCREEN_FADE_IN( 500 );
                SET_GAME_CAM_HEADING( 0 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                l_U439 = 1;
                if (l_U473[3] == 0)
                {
                    PRINT_NOW( "CP2_COMMAND_04", 7500, 1 );
                    l_U473[3] = 1;
                }
                l_U436 = 1;
                SETTIMERA( 0 );
            }
            switch (l_U753)
            {
                case 0:
                if (NOT (sub_21756( l_U750 )))
                {
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U750, l_U496._fU0, l_U496._fU4, l_U496._fU8, 2.50000000 + 1, 2.50000000 + 1, 2.50000000, 0 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U750 )))
                        {
                            SET_CHAR_COORDINATES( l_U750, -953.57970000, 1315.22100000, 23.45730000 );
                            SET_CHAR_HEADING( l_U750, 309.21490000 );
                            SET_GAME_CAM_HEADING( 0 );
                        }
                        else
                        {
                            GET_CAR_CHAR_IS_USING( l_U750, ref uVar2 );
                            SET_CAR_COORDINATES( uVar2, -955.96110000, 1310.16500000, 23.51740000 );
                            SET_CAR_HEADING( uVar2, 5.97210000 );
                            SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                            WARP_CHAR_FROM_CAR_TO_COORD( l_U750, -953.57970000, 1315.22100000, 23.45730000 );
                            SET_CHAR_HEADING( l_U750, 309.21490000 );
                        }
                        SET_GAME_CAM_HEADING( 0 );
                    }
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    SET_CAM_BEHIND_PED( l_U750 );
                    if (NOT (IS_CAR_DEAD( l_U354 )))
                    {
                        FREEZE_CAR_POSITION( l_U354, 0 );
                        LOCK_CAR_DOORS( l_U354, 1 );
                    }
                    while (l_U438 == 0)
                    {
                        sub_9290();
                        WAIT( 0 );
                    }
                    while (l_U435 == 0)
                    {
                        sub_11848();
                        sub_12603();
                        WAIT( 0 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U354 )))
                    {
                        CONTROL_CAR_DOOR( l_U354, 1, 0, 1.00000000 );
                        CONTROL_CAR_DOOR( l_U354, 0, 0, 1.00000000 );
                    }
                    SET_POLICE_IGNORE_PLAYER( l_U751, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U384 )))
                    {
                        SET_CHAR_COORDINATES( l_U384, -874.40220000, 1311.84500000, 20.97240000 );
                        SET_CHAR_HEADING( l_U384, 91.58830000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U384, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U368[0] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U368[0] );
                        SET_CHAR_COORDINATES( l_U368[0], -875.75430000, 1315.32300000, 21.00330000 );
                        SET_CHAR_HEADING( l_U368[0], 163.62020000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[0], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U368[1] )))
                    {
                        SET_CHAR_COORDINATES( l_U368[1], -884.20900000, 1302.19300000, 20.97270000 );
                        SET_CHAR_HEADING( l_U368[1], 283.23070000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[1], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U368[2] )))
                    {
                        SET_CHAR_COORDINATES( l_U368[2], -873.54640000, 1299.94800000, 21.00500000 );
                        SET_CHAR_HEADING( l_U368[2], 7.67020000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[2], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U368[4] )))
                    {
                        SET_CHAR_COORDINATES( l_U368[4], -916.11320000, 1326.47700000, 23.33390000 );
                        SET_CHAR_HEADING( l_U368[4], 24.93740000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[4], 1 );
                    }
                    SET_PLAYER_CONTROL_ADVANCED( l_U751, 0, 1, 1 );
                    if (IS_CHAR_IN_ANY_HELI( l_U750 ))
                    {
                        GET_CAR_CHAR_IS_USING( l_U750, ref l_U366 );
                        if (NOT (IS_CAR_DEAD( l_U366 )))
                        {
                            FREEZE_CAR_POSITION( l_U366, 1 );
                            GET_CAR_COORDINATES( l_U366, ref l_U508._fU0, ref l_U508._fU4, ref l_U508._fU8 );
                            GET_CAR_HEADING( l_U366, ref l_U539 );
                            if (l_U508._fU8 < 40)
                            {
                                SET_CAR_COORDINATES( l_U366, l_U508._fU0, l_U508._fU4, 50.00000000 );
                                SET_CAR_HEADING( l_U366, l_U539 );
                            }
                            SET_HELI_BLADES_FULL_SPEED( l_U366 );
                        }
                    }
                    FREEZE_CHAR_POSITION( l_U750, 1 );
                    LOAD_SCENE( -946.24220000, 1341.47300000, 34.87930000 );
                    BEGIN_CAM_COMMANDS( ref l_U529 );
                    l_U431 = 1;
                    DISPLAY_RADAR( 0 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    CREATE_CAM( 14, ref l_U393[0] );
                    CREATE_CAM( 14, ref l_U396[0] );
                    CREATE_CAM( 3, ref l_U399[0] );
                    CREATE_CAM( 14, ref l_U393[1] );
                    CREATE_CAM( 14, ref l_U396[1] );
                    CREATE_CAM( 3, ref l_U399[1] );
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -881.10000000, 1265.00000000, 23.26000000, 15, 15, 15, 0 ))
                    {
                        SET_CAM_POS( l_U393[0], -878.99440000, 1256.77500000, 31.93369000 );
                        SET_CAM_ROT( l_U393[0], -6.16857600, -0.00000000, 28.56653000 );
                        SET_CAM_FOV( l_U393[0], 57 );
                        SET_CAM_POS( l_U396[0], -883.47080000, 1251.40200000, 25.63214000 );
                        SET_CAM_ROT( l_U396[0], -1.39451000, -0.00000000, -8.40525700 );
                        SET_CAM_FOV( l_U396[0], 45 );
                    }
                    else
                    {
                        SET_CAM_POS( l_U393[0], -945.81370000, 1341.10100000, 29.48112000 );
                        SET_CAM_ROT( l_U393[0], -7.11518100, 0.00000000, -140.92830000 );
                        SET_CAM_FOV( l_U393[0], 55 );
                        SET_CAM_POS( l_U396[0], -944.90970000, 1337.46300000, 29.00657000 );
                        SET_CAM_ROT( l_U396[0], -5.74008700, 0.00000000, -122.13530000 );
                        SET_CAM_FOV( l_U396[0], 57 );
                    }
                    SET_CAM_ACTIVE( l_U393[0], 1 );
                    SET_CAM_PROPAGATE( l_U393[0], 1 );
                    SET_CAM_ACTIVE( l_U396[0], 1 );
                    SET_CAM_PROPAGATE( l_U396[0], 1 );
                    SET_CAM_ACTIVE( l_U399[0], 1 );
                    SET_CAM_PROPAGATE( l_U399[0], 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U399[0], l_U393[0], l_U396[0], 10000, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    FREEZE_CHAR_POSITION( l_U750, 0 );
                    if (DOES_BLIP_EXIST( l_U404 ))
                    {
                        REMOVE_BLIP( l_U404 );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    while (IS_SCREEN_FADING_IN())
                    {
                        WAIT( 0 );
                    }
                    SETTIMERA( 0 );
                    l_U753++;
                }
                break;
                case 1:
                if (TIMERA() >= 1000)
                {
                    if ((IS_VEH_DRIVEABLE( l_U354 )) AND (NOT (IS_CHAR_DEAD( l_U368[0] ))))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U380[0] )))
                        {
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            OPEN_SEQUENCE_TASK( ref l_U492 );
                            TASK_STAND_STILL( 0, 3500 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -876.95960000, 1309.88900000, 20.97270000, 2, -1, 0.50000000 );
                            TASK_LOOK_AT_CHAR( 0, l_U368[0], 5500, 0 );
                            TASK_STAND_STILL( 0, 6000 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U354, 3500, 0 );
                            CLOSE_SEQUENCE_TASK( l_U492 );
                            TASK_PERFORM_SEQUENCE( l_U380[0], l_U492 );
                            CLEAR_SEQUENCE_TASK( l_U492 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U380[1] )))
                        {
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            OPEN_SEQUENCE_TASK( ref l_U492 );
                            TASK_STAND_STILL( 0, 4000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -876.25000000, 1309.88900000, 20.97270000, 2, -1, 2.00000000 );
                            TASK_STAND_STILL( 0, 6000 );
                            TASK_LOOK_AT_CHAR( 0, l_U368[0], 11000, 0 );
                            TASK_STAND_STILL( 0, 1000 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U354, 3500, 1 );
                            CLOSE_SEQUENCE_TASK( l_U492 );
                            TASK_PERFORM_SEQUENCE( l_U380[1], l_U492 );
                            CLEAR_SEQUENCE_TASK( l_U492 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U380[2] )))
                        {
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            OPEN_SEQUENCE_TASK( ref l_U492 );
                            TASK_STAND_STILL( 0, 16500 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -876.47910000, 1309.42400000, 20.97240000, 2, -1, 0.50000000 );
                            TASK_STAND_STILL( 0, 5000 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U354, -1, 2 );
                            CLOSE_SEQUENCE_TASK( l_U492 );
                            TASK_PERFORM_SEQUENCE( l_U380[2], l_U492 );
                            CLEAR_SEQUENCE_TASK( l_U492 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U368[1] )))
                        {
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            OPEN_SEQUENCE_TASK( ref l_U492 );
                            TASK_SWAP_WEAPON( 0, 1 );
                            TASK_STAND_STILL( 0, 19000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -876.47910000, 1309.42400000, 20.97240000, 2, -1, 3.00000000 );
                            TASK_STAND_STILL( 0, 30000 );
                            CLOSE_SEQUENCE_TASK( l_U492 );
                            TASK_PERFORM_SEQUENCE( l_U368[1], l_U492 );
                            CLEAR_SEQUENCE_TASK( l_U492 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U368[2] )))
                        {
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            OPEN_SEQUENCE_TASK( ref l_U492 );
                            TASK_STAND_STILL( 0, 3500 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -876.95960000, 1309.88900000, 20.97270000, 2, -1, 4.00000000 );
                            TASK_STAND_STILL( 0, 7000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -873.54640000, 1299.94800000, 21.00500000, 2, -1, 1.00000000 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, -876.95960000, 1309.88900000, 20.97270000 );
                            CLOSE_SEQUENCE_TASK( l_U492 );
                            TASK_PERFORM_SEQUENCE( l_U368[2], l_U492 );
                            CLEAR_SEQUENCE_TASK( l_U492 );
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U384 ))) AND (NOT (IS_CHAR_INJURED( l_U380[0] ))))
                        {
                            TASK_LOOK_AT_CHAR( l_U384, l_U380[0], 40000, 0 );
                        }
                    }
                    l_U753++;
                }
                break;
                case 2:
                if (NOT l_U430)
                {
                    if ((TIMERA() >= 4700) AND (l_U486 == 0))
                    {
                        sub_24978( "E1S2_ONBUS", 0, 1, ref l_U543, 7, 1 );
                        l_U486 = 1;
                    }
                    if (TIMERA() >= 5000)
                    {
                        SET_CAM_POS( l_U393[1], -876.71050000, 1316.65000000, 22.42784000 );
                        SET_CAM_ROT( l_U393[1], 0.04899600, 0.00000000, -171.00450000 );
                        SET_CAM_FOV( l_U393[1], 45.00000000 );
                        SET_CAM_POS( l_U396[1], -876.97400000, 1316.25800000, 22.42918000 );
                        SET_CAM_ROT( l_U396[1], -0.40936600, 0.00000000, -155.99300000 );
                        SET_CAM_FOV( l_U396[1], 45.00000000 );
                        SET_CAM_INTERP_STYLE_CORE( l_U399[1], l_U393[1], l_U396[1], 10000, 0 );
                        SET_CAM_ACTIVE( l_U393[0], 0 );
                        SET_CAM_PROPAGATE( l_U393[0], 0 );
                        SET_CAM_ACTIVE( l_U396[0], 0 );
                        SET_CAM_PROPAGATE( l_U396[0], 0 );
                        SET_CAM_ACTIVE( l_U399[0], 0 );
                        SET_CAM_PROPAGATE( l_U399[0], 0 );
                        SET_CAM_ACTIVE( l_U393[1], 1 );
                        SET_CAM_PROPAGATE( l_U393[1], 1 );
                        SET_CAM_ACTIVE( l_U396[1], 1 );
                        SET_CAM_PROPAGATE( l_U396[1], 1 );
                        SET_CAM_ACTIVE( l_U399[1], 1 );
                        SET_CAM_PROPAGATE( l_U399[1], 1 );
                        SETTIMERA( 0 );
                        if (l_U486 == 0)
                        {
                            sub_24978( "E1S2_ONBUS", 0, 1, ref l_U543, 7, 1 );
                            l_U486 = 1;
                        }
                        l_U753++;
                    }
                }
                break;
                case 3:
                if (NOT l_U430)
                {
                    if ((TIMERA() >= 7000) || (NOT (sub_26465( l_U543 ))))
                    {
                        SET_CAM_POS( l_U393[1], -877.64590000, 1313.51200000, 22.57198000 );
                        SET_CAM_ROT( l_U393[1], -2.35743600, -0.00000000, -170.77530000 );
                        SET_CAM_FOV( l_U393[1], 33.00000000 );
                        SET_CAM_POS( l_U396[1], -877.64590000, 1313.51200000, 22.57198000 );
                        SET_CAM_ROT( l_U396[1], -2.35743600, -0.00000000, -170.77530000 );
                        SET_CAM_FOV( l_U396[1], 48.00000000 );
                        SET_CAM_INTERP_STYLE_CORE( l_U399[1], l_U393[1], l_U396[1], 7000, 0 );
                        SETTIMERA( 0 );
                        sub_24978( "E1S2_ONBUS", 1, 1, ref l_U543, 7, 1 );
                        l_U753++;
                    }
                }
                break;
                case 4:
                if (NOT l_U430)
                {
                    if ((TIMERA() >= 7000) || (NOT (sub_26465( l_U543 ))))
                    {
                        SET_CAM_POS( l_U393[1], -876.71050000, 1316.65000000, 22.42784000 );
                        SET_CAM_ROT( l_U393[1], 0.04899600, 0.00000000, -171.00450000 );
                        SET_CAM_FOV( l_U393[1], 45.00000000 );
                        SET_CAM_POS( l_U396[1], -876.84820000, 1316.44500000, 22.42854000 );
                        SET_CAM_ROT( l_U396[1], -0.19056200, 0.00000000, -151.47040000 );
                        SET_CAM_FOV( l_U396[1], 45.00000000 );
                        SET_CAM_INTERP_STYLE_CORE( l_U399[1], l_U393[1], l_U396[1], 6000, 0 );
                        SETTIMERA( 0 );
                        sub_24978( "E1S2_ONBUS", 2, 1, ref l_U543, 7, 1 );
                        l_U753++;
                    }
                }
                break;
                case 5:
                l_U753++;
                break;
                case 6:
                if (NOT l_U430)
                {
                    if ((TIMERA() >= 7000) || (NOT (sub_26465( l_U543 ))))
                    {
                        SET_CAM_POS( l_U393[1], -878.87540000, 1310.04000000, 22.63783000 );
                        SET_CAM_ROT( l_U393[1], -5.49742800, 0.00000000, -62.33430000 );
                        SET_CAM_FOV( l_U393[1], 45.00000000 );
                        SET_CAM_POS( l_U396[1], -878.92790000, 1309.41000000, 22.69914000 );
                        SET_CAM_ROT( l_U396[1], -3.89335400, 0.00000000, -10.43147000 );
                        SET_CAM_FOV( l_U396[1], 45.00000000 );
                        SET_CAM_INTERP_STYLE_CORE( l_U399[1], l_U393[1], l_U396[1], 9000, 0 );
                        if ((((NOT (IS_CAR_DEAD( l_U354 ))) AND (NOT (IS_CHAR_INJURED( l_U380[2] )))) AND (NOT (IS_CHAR_INJURED( l_U368[7] )))) AND (NOT (IS_CHAR_INJURED( l_U368[1] ))))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U380[2] );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U354, 2.50000000, -1.80000000 + 0.02000000, -1.00000000, ref l_U511._fU0, ref l_U511._fU4, ref l_U511._fU8 );
                            GET_CAR_HEADING( l_U354, ref l_U542 );
                            SET_CHAR_COORDINATES( l_U380[2], l_U511._fU0, l_U511._fU4, l_U511._fU8 );
                            SET_CHAR_HEADING( l_U380[2], l_U542 + 25 );
                            TASK_PLAY_ANIM( l_U380[2], "cs_prisoner", "MISSSTUBBS2", 8.00000000, 0, 0, 0, 1, 0 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U368[1] );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U354, 3.25000000, -1.90000000 - 0.11000000, -1.00000000, ref l_U511._fU0, ref l_U511._fU4, ref l_U511._fU8 );
                            GET_CAR_HEADING( l_U354, ref l_U542 );
                            SET_CHAR_COORDINATES( l_U368[1], l_U511._fU0, l_U511._fU4, l_U511._fU8 );
                            SET_CHAR_HEADING( l_U368[1], l_U542 + 25 );
                            SET_CURRENT_CHAR_WEAPON( l_U368[1], 10, 1 );
                            TASK_PLAY_ANIM( l_U368[1], "cs_gaurd", "MISSSTUBBS2", 8.00000000, 0, 0, 0, 1, 0 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U368[7] );
                            WARP_CHAR_INTO_CAR( l_U368[7], l_U354 );
                            OPEN_SEQUENCE_TASK( ref l_U492 );
                            TASK_STAND_STILL( 0, 3000 );
                            TASK_PLAY_ANIM_UPPER_BODY( 0, "cs_driver", "MISSSTUBBS2", 8.00000000, 0, 0, 0, 0, 0 );
                            TASK_STAND_STILL( 0, 60000 );
                            CLOSE_SEQUENCE_TASK( l_U492 );
                            TASK_PERFORM_SEQUENCE( l_U368[7], l_U492 );
                            CLEAR_SEQUENCE_TASK( l_U492 );
                            if ((NOT (IS_CHAR_INJURED( l_U384 ))) AND (NOT (IS_CHAR_INJURED( l_U380[2] ))))
                            {
                                TASK_LOOK_AT_CHAR( l_U384, l_U380[2], 10000, 0 );
                            }
                        }
                        sub_24978( "E1S2_BOAT", 0, 1, ref l_U543, 7, 1 );
                        SETTIMERA( 0 );
                        l_U753++;
                    }
                }
                break;
                case 7:
                l_U753++;
                break;
                case 8:
                if (NOT l_U430)
                {
                    if (TIMERA() >= 5500)
                    {
                        SET_CAM_POS( l_U393[1], -880.35740000, 1314.17800000, 23.23988000 );
                        SET_CAM_ROT( l_U393[1], -1.60150700, -0.00000000, -164.51080000 );
                        SET_CAM_FOV( l_U393[1], 50.00000000 );
                        SET_CAM_POS( l_U396[1], -880.35740000, 1314.17800000, 23.23988000 );
                        SET_CAM_ROT( l_U396[1], -1.60150700, -0.00000000, -164.51080000 );
                        SET_CAM_FOV( l_U396[1], 45.00000000 );
                        SET_CAM_INTERP_STYLE_CORE( l_U399[1], l_U393[1], l_U396[1], 15000, 0 );
                        sub_24978( "E1S2_BOAT", 2, 1, ref l_U543, 7, 1 );
                        SETTIMERA( 0 );
                        l_U753++;
                    }
                }
                break;
                case 9:
                l_U753++;
                break;
                case 10:
                if (NOT l_U430)
                {
                    if (TIMERA() >= 5750)
                    {
                        l_U429 = 0;
                        sub_20535();
                        sub_19917();
                        if (LOCATE_CHAR_ANY_MEANS_3D( l_U750, l_U496._fU0, l_U496._fU4, l_U496._fU8, 2.50000000 + 1, 2.50000000 + 1, 2.50000000, 0 ))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U750 )))
                            {
                                SET_CHAR_COORDINATES( l_U750, -953.57970000, 1315.22100000, 23.45730000 );
                                SET_CHAR_HEADING( l_U750, 309.21490000 );
                                SET_GAME_CAM_HEADING( 0 );
                            }
                            else
                            {
                                GET_CAR_CHAR_IS_USING( l_U750, ref uVar3 );
                                SET_CAR_COORDINATES( uVar3, -955.96110000, 1310.16500000, 23.51740000 );
                                SET_CAR_HEADING( uVar3, 5.97210000 );
                                SET_CAR_ON_GROUND_PROPERLY( uVar3 );
                                WARP_CHAR_FROM_CAR_TO_COORD( l_U750, -953.57970000, 1315.22100000, 23.45730000 );
                                SET_CHAR_HEADING( l_U750, 309.21490000 );
                            }
                            SET_GAME_CAM_HEADING( 0 );
                        }
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        SET_CAM_BEHIND_PED( l_U750 );
                        DISPLAY_RADAR( 1 );
                        DISPLAY_HUD( 1 );
                        SET_WIDESCREEN_BORDERS( 0 );
                        INCREMENT_INT_STAT( 373, 1 );
                        SET_PLAYER_CONTROL_ADVANCED( l_U751, 1, 0, 1 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        END_CAM_COMMANDS( ref l_U529 );
                        l_U431 = 0;
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        SET_CAM_BEHIND_PED( l_U750 );
                        SET_POLICE_IGNORE_PLAYER( l_U751, 0 );
                        if (NOT (IS_CAR_DEAD( l_U354 )))
                        {
                            SET_CAR_ON_GROUND_PROPERLY( l_U354 );
                        }
                        if (IS_CHAR_IN_ANY_HELI( l_U750 ))
                        {
                            GET_CAR_CHAR_IS_USING( l_U750, ref l_U366 );
                            if (NOT (IS_CAR_DEAD( l_U366 )))
                            {
                                FREEZE_CAR_POSITION( l_U366, 0 );
                                SET_HELI_BLADES_FULL_SPEED( l_U366 );
                            }
                        }
                        sub_4563();
                        sub_15084();
                        if (NOT (IS_CAR_DEAD( l_U354 )))
                        {
                            FREEZE_CAR_POSITION( l_U354, 1 );
                        }
                        if (l_U473[3] == 0)
                        {
                            PRINT_NOW( "CP2_COMMAND_04", 7500, 1 );
                            l_U473[3] = 1;
                        }
                        l_U436 = 1;
                        SETTIMERA( 0 );
                        l_U439 = 1;
                    }
                }
                break;
            }
            if (NOT (IS_CAR_DEAD( l_U354 )))
            {
                CONTROL_CAR_DOOR( l_U354, 1, 0, 1.00000000 );
                CONTROL_CAR_DOOR( l_U354, 0, 0, 1.00000000 );
            }
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U354 )))
        {
            CONTROL_CAR_DOOR( l_U354, 1, 0, 0.00000000 );
            CONTROL_CAR_DOOR( l_U354, 0, 0, 0.00000000 );
        }
    }
    else if (IS_CHAR_IN_ANY_HELI( l_U750 ))
    {
        GET_CAR_CHAR_IS_USING( l_U750, ref l_U366 );
        if (NOT (IS_CAR_DEAD( l_U366 )))
        {
            FREEZE_CAR_POSITION( l_U366, 0 );
        }
    }
    sub_19917();
    if (l_U473[3] == 0)
    {
        PRINT_NOW( "CP2_COMMAND_04", 7500, 1 );
        l_U473[3] = 1;
    }
    l_U436 = 1;
    SETTIMERA( 0 );;
    return;
}

int sub_19705()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_19917()
{
    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
    {
        if (DOES_CHAR_EXIST( l_U380[l_U530] ))
        {
            DELETE_CHAR( ref l_U380[l_U530] );
        }
    }
    sub_13782();
    if (NOT (IS_CHAR_INJURED( l_U384 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U384, 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U368[0] )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[0], 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U368[2] )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[2], 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U368[4] )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[4], 0 );
    }
    if ((l_U443 == 1) AND (l_U482 == 0))
    {
        if ((NOT (IS_CAR_DEAD( l_U354 ))) AND (NOT (IS_CHAR_INJURED( l_U380[2] ))))
        {
            CLEAR_CHAR_TASKS( l_U380[2] );
            ATTACH_PED_TO_CAR( l_U380[2], l_U354, 0, -0.70000000 + 0.07500000, -1.20000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U380[2], 8, 0, 0 );
            OPEN_SEQUENCE_TASK( ref l_U492 );
            TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 0, 0, 0, 0, 375 * l_U530 );
            TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 1, 0, 0, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U492 );
            TASK_PERFORM_SEQUENCE( l_U380[2], l_U492 );
            CLEAR_SEQUENCE_TASK( l_U492 );
        }
        if (DOES_CHAR_EXIST( l_U368[1] ))
        {
            DELETE_CHAR( ref l_U368[1] );
        }
        if (NOT (IS_CHAR_DEAD( l_U368[7] )))
        {
            SET_CHAR_PROOFS( l_U368[7], 0, 0, 0, 0, 0 );
        }
        l_U482 = 1;
    }
    return;
}

void sub_20535()
{
    if ((NOT (IS_CHAR_INJURED( l_U384 ))) AND (IS_VEH_DRIVEABLE( l_U354 )))
    {
        CLEAR_CHAR_TASKS( l_U384 );
        SET_CURRENT_CHAR_WEAPON( l_U384, 0, 1 );
        SET_CHAR_COORDINATES( l_U384, -873.96660000, 1313.05500000, 20.97240000 );
        SET_CHAR_HEADING( l_U384, 91.41720000 );
        OPEN_SEQUENCE_TASK( ref l_U492 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -873.96660000, 1313.05500000, 20.97240000, 2, -1, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, 100.24800000 );
        TASK_LOOK_AT_VEHICLE( 0, l_U354, 2500, 0 );
        TASK_STAND_STILL( 0, 3000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -874.67320000, 1301.32500000, 20.99010000, 2, -1, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, 46.98640000 );
        TASK_LOOK_AT_VEHICLE( 0, l_U354, 3700, 0 );
        TASK_STAND_STILL( 0, 3000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -882.94290000, 1297.22200000, 21.09280000, 2, -1, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, 308.69060000 );
        TASK_LOOK_AT_VEHICLE( 0, l_U354, 4000, 0 );
        TASK_STAND_STILL( 0, 3000 );
        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
        CLOSE_SEQUENCE_TASK( l_U492 );
        TASK_PERFORM_SEQUENCE( l_U384, l_U492 );
        CLEAR_SEQUENCE_TASK( l_U492 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U517 );
    }
    return;
}

int sub_21756(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_21820( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_21820(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2784))
    {
        return 1;
    }
    return 0;
}

void sub_24978(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_25005( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_25005(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_25063( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_25063(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_25085( iParam1 )))
    {
        return 0;
    }
    l_U34._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_25777( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_25085(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_25162( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_25162( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_25162( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_25162(unknown uParam0)
{
    return;
}

void sub_25777(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_26465(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_25162( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_25162( "\n speech is not playing" );
    }
    return 0;
}

void sub_29448()
{
    float fVar2;
    unknown uVar3;
    float fVar4;
    int iVar5;

    if (l_U445 == 0)
    {
        if (((IS_BULLET_IN_AREA( -881.10000000, 1271.51000000, 23.26000000, 0.20000000, 1 )) || (IS_SNIPER_BULLET_IN_AREA( -881.10000000 - 0.10000000, 1271.51000000 - 0.10000000, 23.26000000 - 0.10000000, -881.10000000 + 0.10000000, 1271.51000000 + 0.10000000, 23.26000000 + 0.10000000 ))) || (IS_BULLET_IN_BOX( -881.10000000 - 0.10000000, 1271.51000000 - 0.10000000, 23.26000000 - 0.10000000, -881.10000000 + 0.10000000, 1271.51000000 + 0.10000000, 23.26000000 + 0.10000000, 1 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1385068499, 64654, 1272, 23, 0, 0.00000000 );
            l_U445 = 1;
        }
        if (DOES_OBJECT_EXIST( l_U526 ))
        {
            GET_OBJECT_HEALTH( l_U526, ref fVar2 );
            if ((fVar2 < 1000) || (HAS_OBJECT_BEEN_DAMAGED( l_U526 )))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1385068499, 64654, 1272, 23, 0, 0.00000000 );
                l_U445 = 1;
            }
        }
        iVar5 = 0;
        if ((IS_CHAR_ON_ANY_BIKE( l_U750 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -881.10000000, 1271.51000000, 23.26000000, 1.50000000, 8.00000000, 2.00000000, 0 )))
        {
            GET_CAR_CHAR_IS_USING( l_U750, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                GET_CAR_SPEED( uVar3, ref fVar4 );
                if (fVar4 > 8.00000000)
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1385068499, 64654, 1272, 23, 0, 0.00000000 );
                    iVar5 = 1;
                }
                else
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1385068499, 64654, 1272, 23, 1, 0.00000000 );
                    iVar5 = 0;
                }
                if ((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -881.10000000, 1278.51000000, 23.26000000, 4.00000000, 8.00000000, 4.00000000, 0 )) AND (iVar5 == 1))
                {
                    l_U445 = 1;
                }
            }
        }
    }
    if ((l_U445 == 1) AND (DOES_OBJECT_EXIST( l_U526 )))
    {
        DELETE_OBJECT( ref l_U526 );
    }
    return;
}

void sub_30066()
{
    if ((NOT l_U423) AND (l_U528 < 1))
    {
        if (l_U484 == 0)
        {
            if (IS_VEH_DRIVEABLE( l_U354 ))
            {
                if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U354, l_U750 ))
                {
                    GET_GAME_TIMER( ref l_U537 );
                    l_U484 = 1;
                }
            }
            for ( l_U530 = 0; l_U530 <= 10; l_U530++ )
            {
                if (DOES_CHAR_EXIST( l_U368[l_U530] ))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U368[l_U530], l_U750, 0 ))
                    {
                        GET_GAME_TIMER( ref l_U537 );
                        l_U484 = 1;
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U368[l_U530] )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U750, l_U368[l_U530], 2.00000000, 2.00000000, 0 )) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U368[l_U530] ))))
                        {
                            GET_GAME_TIMER( ref l_U537 );
                            l_U484 = 1;
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U537 );
                        l_U484 = 1;
                    }
                }
            }
            for ( l_U530 = 0; l_U530 <= 5; l_U530++ )
            {
                if (DOES_VEHICLE_EXIST( l_U355[l_U530] ))
                {
                    if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U355[l_U530], l_U750 ))
                    {
                        GET_GAME_TIMER( ref l_U537 );
                        l_U484 = 1;
                    }
                    else if (NOT (IS_CAR_DEAD( l_U355[l_U530] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U750, l_U355[l_U530] ))
                        {
                            GET_GAME_TIMER( ref l_U537 );
                            l_U484 = 1;
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U537 );
                        l_U484 = 1;
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U384 ))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U384, l_U750, 0 ))
                {
                    GET_GAME_TIMER( ref l_U537 );
                    l_U484 = 1;
                }
                else if (NOT (IS_CHAR_DEAD( l_U384 )))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U750, l_U384, 6.00000000, 6.00000000, 0 )) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U384 ))))
                    {
                        GET_GAME_TIMER( ref l_U537 );
                        l_U484 = 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U537 );
                    l_U484 = 1;
                }
            }
            if (l_U484 == 0)
            {
                if ((IS_BULLET_IN_AREA( -880.26000000, 1307.57300000, 20.97240000, 70, 1 )) || (IS_SNIPER_BULLET_IN_AREA( -880.26000000 - 35, 1307.57300000 - 35, 20.97240000 - 35, -880.26000000 + 35, 1307.57300000 + 35, 20.97240000 + 35 )))
                {
                    GET_GAME_TIMER( ref l_U537 );
                    l_U484 = 1;
                }
            }
            if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( l_U750 )))
            {
                if ((((LOCATE_CHAR_ANY_MEANS_2D( l_U750, -879.25370000, 1316.51300000, 8.00000000, 8.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_2D( l_U750, -921.37270000, 1329.93700000, 8.00000000, 8.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -931.50000000, 1329.60700000, 23.40500000, 3.20000000, 7.00000000, 4.00000000, 0 ))) || (l_U425))
                {
                    GET_GAME_TIMER( ref l_U537 );
                    l_U484 = 1;
                }
                if (LOCATE_CHAR_IN_CAR_3D( l_U750, -870.00000000, 1317.00000000, 20.00000000, 30.00000000, 30.00000000, 40.00000000, 0 ))
                {
                    GET_GAME_TIMER( ref l_U537 );
                    l_U484 = 1;
                }
            }
        }
        if (l_U484 == 1)
        {
            GET_GAME_TIMER( ref l_U536 );
            if ((l_U536 - l_U537) > 500)
            {
                sub_31168();
            }
        }
    }
    return;
}

void sub_31168()
{
    if (l_U423 == 0)
    {
        if (l_U752 < 5)
        {
            l_U752 = 4;
            if (l_U436 == 0)
            {
                sub_4563();
                sub_15084();
                l_U439 = 1;
                if (l_U473[3] == 0)
                {
                    PRINT_NOW( "CP2_COMMAND_04", 7500, 1 );
                    l_U473[3] = 1;
                }
                sub_19917();
                l_U436 = 1;
            }
        }
        if (l_U752 < 5)
        {
            SET_MAX_WANTED_LEVEL( 0 );
            SET_FAKE_WANTED_LEVEL( 3 );
            g_U39234 = 1;
        }
        else
        {
            ALTER_WANTED_LEVEL( l_U751, 3 );
        }
        for ( l_U530 = 0; l_U530 <= 10; l_U530++ )
        {
            if (((NOT (IS_CHAR_INJURED( l_U368[l_U530] ))) AND (l_U530 != 1)) AND (l_U530 != 7))
            {
                if (l_U530 == 3)
                {
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U368[l_U530], -880.40770000, 1298.98900000, 20.97270000, 10 );
                }
                else if (l_U530 == 6)
                {
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U368[l_U530], -871.16200000, 1320.03300000, 20.97240000, 10 );
                }
                else if (l_U530 == 10)
                {
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U368[l_U530], -870.78610000, 1309.95200000, 20.97240000, 10 );
                };;;
                TASK_COMBAT( l_U368[l_U530], l_U750 );
            }
        }
        if ((NOT (IS_CHAR_INJURED( l_U384 ))) AND (l_U752 < 5))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U384 )))
            {
                TASK_COMBAT( l_U384, l_U750 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U368[7] ))) AND (NOT (IS_CAR_DEAD( l_U354 ))))
            {
                if (((IS_CHAR_SITTING_IN_CAR( l_U368[7], l_U354 )) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U354 )))) AND (l_U752 < 5))
                {
                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U368[7], "driver_panic", "MISSSTUBBS2", 8, 1, 0, 0, 0, -2 );
                }
            }
        }
        PLAY_SOUND_FROM_POSITION( l_U531, "TS2_HIJACK_BUS_ALARM", 64652, 1303, 26 );
        sub_31848();
        l_U423 = 1;
    }
    return;
}

void sub_31848()
{
    if (NOT (IS_CHAR_INJURED( l_U380[0] )))
    {
        OPEN_SEQUENCE_TASK( ref l_U492 );
        TASK_PLAY_ANIM( 0, "Cuffed_Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Cuffed_Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Cuffed_Chant_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Cuffed_Chant_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
        CLOSE_SEQUENCE_TASK( l_U492 );
        TASK_PERFORM_SEQUENCE( l_U380[0], l_U492 );
        CLEAR_SEQUENCE_TASK( l_U492 );
    }
    if (NOT (IS_CHAR_INJURED( l_U380[1] )))
    {
        OPEN_SEQUENCE_TASK( ref l_U492 );
        TASK_PLAY_ANIM( 0, "Cuffed_Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Cuffed_Chant_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Cuffed_Chant_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Cuffed_Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Cuffed_Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
        CLOSE_SEQUENCE_TASK( l_U492 );
        TASK_PERFORM_SEQUENCE( l_U380[1], l_U492 );
        CLEAR_SEQUENCE_TASK( l_U492 );
    }
    if (NOT (IS_CAR_DEAD( l_U354 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U385[0] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U492 );
            TASK_PLAY_ANIM( 0, "Cuffed_Chant_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Cuffed_Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
            CLOSE_SEQUENCE_TASK( l_U492 );
            TASK_PERFORM_SEQUENCE( l_U385[0], l_U492 );
            CLEAR_SEQUENCE_TASK( l_U492 );
        }
        if (NOT (IS_CHAR_INJURED( l_U385[1] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U492 );
            TASK_PLAY_ANIM( 0, "Cuffed_Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Cuffed_Chant_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Cuffed_Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Cuffed_Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
            CLOSE_SEQUENCE_TASK( l_U492 );
            TASK_PERFORM_SEQUENCE( l_U385[1], l_U492 );
            CLEAR_SEQUENCE_TASK( l_U492 );
        }
        if (NOT (IS_CHAR_INJURED( l_U385[2] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U492 );
            TASK_PLAY_ANIM( 0, "Cuffed_Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Cuffed_Chant_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Cuffed_Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
            CLOSE_SEQUENCE_TASK( l_U492 );
            TASK_PERFORM_SEQUENCE( l_U385[2], l_U492 );
            CLEAR_SEQUENCE_TASK( l_U492 );
        }
    }
    return;
}

void sub_33196()
{
    if (l_U424)
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U354 )))
        {
            if (NOT (IS_CAR_DEAD( l_U354 )))
            {
                FREEZE_CAR_POSITION( l_U354, 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U354 )))
            {
                if (IS_CAR_ON_FIRE( l_U354 ))
                {
                    EXPLODE_CAR( l_U354, 1, 0 );
                }
            }
            if (IS_CAR_DEAD( l_U354 ))
            {
                for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
                {
                    if (NOT (IS_CHAR_DEAD( l_U380[l_U530] )))
                    {
                        if (IS_PED_ATTACHED_TO_ANY_CAR( l_U380[l_U530] ))
                        {
                            DAMAGE_CHAR( l_U380[l_U530], 2000, 0 );
                        }
                    }
                }
                for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
                {
                    if (NOT (IS_CHAR_DEAD( l_U385[l_U530] )))
                    {
                        if (IS_PED_ATTACHED_TO_ANY_CAR( l_U385[l_U530] ))
                        {
                            DAMAGE_CHAR( l_U385[l_U530], 2000, 0 );
                        }
                    }
                }
            }
            l_U528 = 1;
            sub_15856();
        }
        else if (IS_VEH_DRIVEABLE( l_U354 ))
        {
            if ((((CHECK_STUCK_TIMER( l_U354, 3, 60000 )) || (CHECK_STUCK_TIMER( l_U354, 2, 30000 ))) || (CHECK_STUCK_TIMER( l_U354, 1, 40000 ))) || (CHECK_STUCK_TIMER( l_U354, 0, 5000 )))
            {
                if (NOT (IS_CAR_DEAD( l_U354 )))
                {
                    FREEZE_CAR_POSITION( l_U354, 0 );
                }
                l_U528 = 6;
                sub_15856();
            }
        }
        if (NOT (IS_CAR_DEAD( l_U354 )))
        {
            if (IS_CAR_ON_FIRE( l_U354 ))
            {
                FREEZE_CAR_POSITION( l_U354, 0 );
                EXPLODE_CAR( l_U354, 1, 0 );
            }
        }
    }
    return;
}

void sub_33778()
{
    int iVar2;
    unknown uVar3;

    sub_33196();
    sub_15756();
    if ((l_U485 == 0) AND (l_U423 == 1))
    {
        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_26465( l_U543 ))))
        {
            if ((l_U455 == 0) AND (NOT (IS_CHAR_INJURED( l_U368[5] ))))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U750, l_U368[5], 20, 20, 20, 0 ))
                {
                    sub_3688( ref l_U543, 0 );
                    sub_33932( "E1S2_PAST", ref l_U543, 7, 1 );
                    l_U485 = 1;
                }
            }
            if ((l_U455 == 1) AND (NOT (IS_CHAR_INJURED( l_U368[10] ))))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U750, l_U368[10], 30, 30, 30, 0 ))
                {
                    sub_3688( ref l_U543, 0 );
                    sub_33932( "E1S2_HOLD", ref l_U543, 7, 1 );
                    l_U485 = 1;
                }
            }
        }
        SET_PED_IS_BLIND_RAGING( sub_3311(), 1 );
    }
    if ((l_U469 == 0) AND (l_U423 == 1))
    {
        for ( l_U530 = 0; l_U530 <= 7; l_U530++ )
        {
            if (DOES_CHAR_EXIST( l_U368[l_U530] ))
            {
                if ((IS_CHAR_INJURED( l_U368[l_U530] )) AND (NOT (sub_26465( l_U543 ))))
                {
                    TRIGGER_POLICE_REPORT( "E1_SCANNER_ST2_01" );
                    l_U530 = 10;
                    l_U469 = 1;
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U354 ))
    {
        LOCK_CAR_DOORS( l_U354, 1 );
        GET_CAR_CHAR_IS_USING( l_U750, ref l_U367 );
        if (NOT (IS_CAR_DEAD( l_U354 )))
        {
            GET_DRIVER_OF_CAR( l_U354, ref iVar2 );
        }
        if (((l_U367 == l_U354) AND (iVar2 != nil)) || (IS_CHAR_IN_CAR( l_U750, l_U354 )))
        {
            REMOVE_BLIP( l_U404 );
            if (NOT (IS_CAR_DEAD( l_U354 )))
            {
                GET_DRIVER_OF_CAR( l_U354, ref iVar2 );
                if (iVar2 != nil)
                {
                    if (NOT (IS_CHAR_INJURED( iVar2 )))
                    {
                        sub_34491();
                    }
                }
            }
            DONT_DISPATCH_COPS_FOR_PLAYER( l_U751, 0 );
            if (NOT (IS_CAR_DEAD( l_U354 )))
            {
                FREEZE_CAR_POSITION( l_U354, 0 );
            }
            SET_MAX_WANTED_LEVEL( 3 );
            SET_FAKE_WANTED_LEVEL( 0 );
            g_U39234 = 0;
            if (NOT (IS_WANTED_LEVEL_GREATER( l_U751, 3 )))
            {
                ALTER_WANTED_LEVEL( l_U751, 3 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( l_U751 );
            }
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U750, 0 );
            if ((NOT (IS_CHAR_INJURED( l_U368[0] ))) AND (IS_VEH_DRIVEABLE( l_U355[0] )))
            {
                CLEAR_CHAR_TASKS( l_U368[0] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[0], 1 );
                OPEN_SEQUENCE_TASK( ref l_U492 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U355[0], -2 );
                TASK_CAR_MISSION_PED_TARGET( 0, l_U355[0], l_U750, 7, 15, 3, 10, -1 );
                CLOSE_SEQUENCE_TASK( l_U492 );
                TASK_PERFORM_SEQUENCE( l_U368[0], l_U492 );
                CLEAR_SEQUENCE_TASK( l_U492 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U368[2] ))) AND (IS_VEH_DRIVEABLE( l_U355[2] )))
            {
                CLEAR_CHAR_TASKS( l_U368[2] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[2], 1 );
                OPEN_SEQUENCE_TASK( ref l_U492 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U355[2], -2 );
                TASK_CAR_MISSION_PED_TARGET( 0, l_U355[2], l_U750, 7, 15, 3, 10, -1 );
                CLOSE_SEQUENCE_TASK( l_U492 );
                TASK_PERFORM_SEQUENCE( l_U368[2], l_U492 );
                CLEAR_SEQUENCE_TASK( l_U492 );
            }
            if ((HAS_MODEL_LOADED( l_U514 )) AND (HAS_MODEL_LOADED( l_U515 )))
            {
                CREATE_CAR( l_U515, -925.40060000, 1318.25800000, 23.57000000, ref l_U355[3], 1 );
                SET_CAR_HEADING( l_U355[3], 358.19160000 );
                CREATE_CHAR_INSIDE_CAR( l_U355[3], 6, l_U514, ref l_U368[3] );
                GIVE_DELAYED_WEAPON_TO_CHAR( l_U368[3], 7, 20000, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[3], 1 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U514 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U515 );
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            GET_GAME_TIMER( ref l_U534 );
            l_U434 = 1;
            l_U752 = 6;
        }
    }
    if (((NOT (IS_CAR_DEAD( l_U354 ))) AND (IS_CHAR_INJURED( l_U384 ))) AND (l_U432 == 1))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U354 ))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U354 );
        }
    }
    if ((((((((l_U455 == 0) AND (IS_CHAR_IN_ANY_POLICE_VEHICLE( l_U750 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -940.00000000, 1329.36400000, 23.30200000, 4.50000000, 5.00000000, 5.00000000, 0 ))) AND (NOT (IS_CHAR_DEAD( l_U368[5] )))) AND (NOT (sub_26465( l_U543 )))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U751, 0 )))) AND (l_U423 == 0))
    {
        sub_33932( "E1S2_CCAR", ref l_U543, 6, 1 );
        l_U455 = 1;
    }
    if ((((((((l_U456 == 0) AND (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( l_U750 )))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -940.00000000, 1329.36400000, 23.30200000, 3.00000000, 5.00000000, 5.00000000, 0 ))) AND (NOT (IS_CHAR_DEAD( l_U368[5] )))) AND (NOT (sub_26465( l_U543 )))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U751, 0 )))) AND (l_U423 == 0))
    {
        sub_33932( "E1S2_APP", ref l_U543, 6, 1 );
        l_U456 = 1;
    }
    sub_29448();
    sub_30066();
    if ((l_U423 == 1) AND (l_U468 == 0))
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( l_U751, 1 );
        l_U468 = 1;
    }
    if ((IS_VEH_DRIVEABLE( l_U354 )) AND (l_U439 == 1))
    {
        if ((l_U423 == 0) || (l_U443 == 1))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U750, l_U354 )))
            {
                sub_37114();
            }
        }
    }
    if (l_U439 == 1)
    {
        if (IS_CHAR_IN_ANY_CAR( l_U750 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U750, ref uVar3 );
        }
        if ((IS_CHAR_IN_ANY_CAR( l_U750 )) AND (HAS_RESPRAY_HAPPENED()))
        {
            l_U528 = 2;
            sub_15856();
        }
    }
    return;
}

void sub_33932(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_33955( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_33955(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_25063( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_34491()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    DO_SCREEN_FADE_OUT( 750 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        sub_15756();
        if (l_U461 == 1)
        {
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            WAIT( 1000 );
            DO_SCREEN_FADE_IN( 750 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            PRINT_NOW( "CP2_FAIL_02", 7500, 1 );
            return;
        }
        WAIT( 0 );
    }
    SET_PLAYER_CONTROL_ADVANCED( l_U751, 0, 1, 1 );
    ENABLE_SCENE_STREAMING( 0 );
    LOAD_ADDITIONAL_TEXT( "E1S2AUD", 6 );
    START_CUTSCENE_NOW( "ts02_ba" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U354 )))
    {
        FREEZE_CAR_POSITION( l_U354, 0 );
    }
    CLEAR_NAMED_CUTSCENE( "ts02_ba" );
    ENABLE_SCENE_STREAMING( 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U750 );
    if (NOT (IS_CAR_DEAD( l_U354 )))
    {
        GET_DRIVER_OF_CAR( l_U354, ref iVar2 );
        if (iVar2 != nil)
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U354, 2.50000000, 2.50000000, -1.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if (NOT (IS_CHAR_DEAD( iVar2 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iVar2, 0 );
                WARP_CHAR_FROM_CAR_TO_COORD( iVar2, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                DAMAGE_CHAR( iVar2, 2000, 0 );
                DAMAGE_PED_BODY_PART( iVar2, 1, 100 );
                DAMAGE_PED_BODY_PART( iVar2, 1, 100 );
            }
            else
            {
                DELETE_CHAR( ref iVar2 );
            }
            WAIT( 0 );
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U354 ))) AND (NOT (IS_CHAR_INJURED( l_U380[2] ))))
    {
        CLEAR_CHAR_TASKS( l_U380[2] );
        ATTACH_PED_TO_CAR( l_U380[2], l_U354, 0, -0.70000000 + 0.07500000, -1.20000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U380[2], 8, 0, 0 );
        OPEN_SEQUENCE_TASK( ref l_U492 );
        TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 0, 0, 0, 0, 375 * l_U530 );
        TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 1, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U492 );
        TASK_PERFORM_SEQUENCE( l_U380[2], l_U492 );
        CLEAR_SEQUENCE_TASK( l_U492 );
    }
    if (DOES_CHAR_EXIST( l_U368[1] ))
    {
        DELETE_CHAR( ref l_U368[1] );
    }
    if (NOT (IS_CHAR_DEAD( l_U368[7] )))
    {
        CLEAR_CHAR_TASKS( l_U368[7] );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[7], 0 );
        DAMAGE_CHAR( l_U368[7], 2000, 0 );
        DAMAGE_PED_BODY_PART( l_U368[7], 1, 100 );
        DAMAGE_PED_BODY_PART( l_U368[7], 1, 100 );
    }
    if (NOT (IS_CAR_DEAD( l_U354 )))
    {
        GET_DRIVER_OF_CAR( l_U354, ref iVar2 );
        if (iVar2 != nil)
        {
            DELETE_CHAR( ref iVar2 );
        }
        WARP_CHAR_INTO_CAR( l_U750, l_U354 );
        if (NOT (IS_CHAR_DEAD( l_U380[2] )))
        {
            for ( l_U530 = 0; l_U530 <= 10; l_U530++ )
            {
                GET_PED_BONE_POSITION( l_U380[2], 1205, 0, 0, 0, ref uVar6 );
                SET_CHAR_HEALTH( l_U380[2], 500 );
                FIRE_SINGLE_BULLET( uVar6._fU0, uVar6._fU4 + 0.25000000, uVar6._fU8, uVar6._fU0, uVar6._fU4, uVar6._fU8, 100 );
                FIRE_SINGLE_BULLET( uVar6._fU0, uVar6._fU4 + 0.25000000, uVar6._fU8, uVar6._fU0, uVar6._fU4, uVar6._fU8, 100 );
                FIRE_SINGLE_BULLET( uVar6._fU0, uVar6._fU4 + 0.25000000, uVar6._fU8, uVar6._fU0, uVar6._fU4, uVar6._fU8, 50 );
            }
        }
    }
    LOAD_SCENE( uVar6._fU0, uVar6._fU4, uVar6._fU8 );
    WAIT( 500 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_PLAYER_CONTROL_ADVANCED( l_U751, 1, 1, 1 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
    }
    while (NOT l_U441)
    {
        if (PRELOAD_STREAM( "S2_PRISON_BUS_RIOTING_PRISONERS_CALM" ))
        {
            if (NOT (IS_CHAR_DEAD( l_U380[1] )))
            {
                PLAY_STREAM_FROM_PED( l_U380[1] );
                l_U441 = 1;
            }
            else
            {
                l_U441 = 1;
            }
        }
        WAIT( 0 );
    }
    return;
}

void sub_37114()
{
    if (l_U433 == 0)
    {
        if ((l_U435 == 1) AND (l_U438 == 1))
        {
            if (TIMERA() >= l_U535)
            {
                l_U443 = 1;
            }
        }
        if (l_U443 == 1)
        {
            if (l_U439 == 0)
            {
                while (NOT (sub_16850( 1, 1 )))
                {
                    WAIT( 0 );
                }
                sub_19600();
                if ((l_U443 == 1) AND (l_U482 == 0))
                {
                    if ((NOT (IS_CAR_DEAD( l_U354 ))) AND (NOT (IS_CHAR_INJURED( l_U380[2] ))))
                    {
                        CLEAR_CHAR_TASKS( l_U380[2] );
                        ATTACH_PED_TO_CAR( l_U380[2], l_U354, 0, -0.70000000 + 0.07500000, -1.20000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
                        SET_CHAR_COMPONENT_VARIATION( l_U380[2], 8, 0, 0 );
                        OPEN_SEQUENCE_TASK( ref l_U492 );
                        TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 0, 0, 0, 0, 375 * l_U530 );
                        TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U492 );
                        TASK_PERFORM_SEQUENCE( l_U380[2], l_U492 );
                        CLEAR_SEQUENCE_TASK( l_U492 );
                    }
                    if (DOES_CHAR_EXIST( l_U368[1] ))
                    {
                        DELETE_CHAR( ref l_U368[1] );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U368[7] )))
                    {
                        SET_CHAR_PROOFS( l_U368[7], 0, 0, 0, 0, 0 );
                    }
                    l_U482 = 1;
                }
            }
            if ((NOT (IS_CHAR_INJURED( l_U384 ))) AND (IS_VEH_DRIVEABLE( l_U354 )))
            {
                if (NOT (IS_CAR_DEAD( l_U354 )))
                {
                    FREEZE_CAR_POSITION( l_U354, 0 );
                    LOCK_CAR_DOORS( l_U354, 2 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U384, 0 );
                if (l_U423 == 0)
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                }
                else
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                }
                l_U384 = l_U368[7];
                REQUEST_CAR_RECORDING( 882 );
                if (NOT (IS_CHAR_INJURED( l_U368[0] )))
                {
                    TASK_WANDER_STANDARD( l_U368[0] );
                }
                if (NOT (IS_CHAR_INJURED( l_U368[1] )))
                {
                    TASK_WANDER_STANDARD( l_U368[1] );
                }
                if (NOT (IS_CHAR_INJURED( l_U368[2] )))
                {
                    TASK_WANDER_STANDARD( l_U368[2] );
                }
                if (NOT (IS_CHAR_INJURED( l_U368[4] )))
                {
                    TASK_WANDER_STANDARD( l_U368[4] );
                }
                l_U433 = 1;
            }
        }
    }
    else if (l_U432 == 0)
    {
        if (((IS_VEH_DRIVEABLE( l_U354 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 882 ))) AND (NOT (IS_CHAR_INJURED( l_U384 ))))
        {
            if (IS_CHAR_IN_CAR( l_U384, l_U354 ))
            {
                if (NOT (IS_CAR_DEAD( l_U354 )))
                {
                    FREEZE_CAR_POSITION( l_U354, 0 );
                    LOCK_CAR_DOORS( l_U354, 2 );
                }
                START_PLAYBACK_RECORDED_CAR_USING_AI( l_U354, 882 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U384, 0 );
                SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U384, 1 );
                LOAD_PATH_NODES_IN_AREA( 63436, 64836, 64836, 1600 );
                if ((l_U443 == 1) AND (l_U482 == 0))
                {
                    if ((NOT (IS_CAR_DEAD( l_U354 ))) AND (NOT (IS_CHAR_INJURED( l_U380[2] ))))
                    {
                        CLEAR_CHAR_TASKS( l_U380[2] );
                        ATTACH_PED_TO_CAR( l_U380[2], l_U354, 0, -0.70000000 + 0.07500000, -1.20000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
                        SET_CHAR_COMPONENT_VARIATION( l_U380[2], 8, 0, 0 );
                        OPEN_SEQUENCE_TASK( ref l_U492 );
                        TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 0, 0, 0, 0, 375 * l_U530 );
                        TASK_PLAY_ANIM( 0, "sit_pass", "MISSSTUBBS2", 4, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U492 );
                        TASK_PERFORM_SEQUENCE( l_U380[2], l_U492 );
                        CLEAR_SEQUENCE_TASK( l_U492 );
                    }
                    HAS_RESPRAY_HAPPENED();
                    if (DOES_CHAR_EXIST( l_U368[1] ))
                    {
                        DELETE_CHAR( ref l_U368[1] );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U368[7] )))
                    {
                        SET_CHAR_PROOFS( l_U368[7], 0, 0, 0, 0, 0 );
                    }
                    l_U482 = 1;
                }
                l_U432 = 1;
            }
        }
    }
    else if ((NOT (IS_CAR_DEAD( l_U354 ))) AND (NOT (IS_CHAR_INJURED( l_U384 ))))
    {
        if (NOT (IS_CAR_DEAD( l_U354 )))
        {
            FREEZE_CAR_POSITION( l_U354, 0 );
            LOCK_CAR_DOORS( l_U354, 2 );
        }
        if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U354 ))) AND (HAVE_REQUESTED_PATH_NODES_BEEN_LOADED()))
        {
            SWITCH_ROADS_OFF( -1290.00000000, -300.00000000, -10.00000000, -1250.00000000, -225.00000000, 20.00000000 );
            SWITCH_ROADS_OFF( -1323.20000000, 981.88000000, 15, -1276.52000000, 1036.26000000, 25 );
            g_U10454 = 1;
            PRINT_NOW( "CP2_MISC_01", 7500, 1 );
            CLEAR_CHAR_TASKS( l_U384 );
            OPEN_SEQUENCE_TASK( ref l_U492 );
            TASK_CAR_DRIVE_TO_COORD( 0, l_U354, -1522.87000000, -112.96940000, 7.41700000, 15, 0, l_U520, 5, 8.00000000, 0 );
            TASK_CAR_DRIVE_TO_COORD( 0, l_U354, -1218.85300000, -221.13540000, 2.07600000, 15, 0, l_U520, 5, 8.00000000, 0 );
            TASK_CAR_DRIVE_TO_COORD( 0, l_U354, -1153.04600000, -374.77230000, 1.97510000, 6, 0, l_U520, 5, 8.00000000, 0 );
            CLOSE_SEQUENCE_TASK( l_U492 );
            TASK_PERFORM_SEQUENCE( l_U384, l_U492 );
            CLEAR_SEQUENCE_TASK( l_U492 );
            ALLOW_EMERGENCY_SERVICES( 0 );
            l_U752++;
        }
    }
    else if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U354 ))
    {
        STOP_PLAYBACK_RECORDED_CAR( l_U354 );
    }
    ALLOW_EMERGENCY_SERVICES( 0 );
    g_U10454 = 0;
    l_U453 = 1;
    l_U752++;;;;
    return;
}

void sub_39082()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U490 == 0)
    {
        if (l_U423 == 1)
        {
            DONT_DISPATCH_COPS_FOR_PLAYER( l_U751, 0 );
            SET_MAX_WANTED_LEVEL( 3 );
            SET_FAKE_WANTED_LEVEL( 0 );
            g_U39234 = 0;
            if (NOT (IS_WANTED_LEVEL_GREATER( l_U751, 3 )))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( l_U751, 3 )))
                {
                    ALTER_WANTED_LEVEL( l_U751, 3 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( l_U751 );
                }
                APPLY_WANTED_LEVEL_CHANGE_NOW( l_U751 );
            }
        }
        l_U490 = 1;
    }
    if (((NOT (sub_26465( l_U543 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (l_U434 == 0))
    {
        if (l_U471 == 0)
        {
            TRIGGER_POLICE_REPORT( "E1_SCANNER_ST2_03_BUS_LEAVING" );
            l_U471 = 1;
        }
    }
    if (l_U434 == 0)
    {
        if (IS_VEH_DRIVEABLE( l_U354 ))
        {
            if (IS_CHAR_IN_CAR( l_U750, l_U354 ))
            {
                if (NOT (IS_CAR_DEAD( l_U354 )))
                {
                    FREEZE_CAR_POSITION( l_U354, 0 );
                }
                REMOVE_BLIP( l_U404 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U750, 0 );
                SET_CREATE_RANDOM_COPS( 1 );
                DONT_DISPATCH_COPS_FOR_PLAYER( l_U751, 0 );
                if (NOT (IS_WANTED_LEVEL_GREATER( l_U751, 3 )))
                {
                    ALTER_WANTED_LEVEL( l_U751, 3 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( l_U751 );
                }
                APPLY_WANTED_LEVEL_CHANGE_NOW( l_U751 );
                l_U434 = 1;
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U354 ))
    {
        if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U354, l_U750 )) || (l_U423 == 1))
        {
            if (((NOT (IS_CHAR_INJURED( l_U384 ))) AND (l_U446 == 0)) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U354 ))))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U384, 1 );
                SET_CHAR_RELATIONSHIP( l_U384, 2, 0 );
                CLEAR_CHAR_TASKS( l_U384 );
                GET_CHAR_COORDINATES( l_U384, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (uVar2._fU4 > 65423)
                {
                    OPEN_SEQUENCE_TASK( ref l_U492 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U354, -1522.87000000, -112.96940000, 7.41700000, 20, 0, l_U520, 3, 15.00000000, 0 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U354, -1218.85300000, -221.13540000, 2.07600000, 20, 0, l_U520, 3, 15.00000000, 0 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U354, -1153.04600000, -374.77230000, 1.97510000, 6, 0, l_U520, 3, 15.00000000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U492 );
                    TASK_PERFORM_SEQUENCE( l_U384, l_U492 );
                    CLEAR_SEQUENCE_TASK( l_U492 );
                }
                else if (uVar2._fU4 > 65314)
                {
                    OPEN_SEQUENCE_TASK( ref l_U492 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U354, -1218.85300000, -221.13540000, 2.07600000, 20, 0, l_U520, 3, 15.00000000, 0 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U354, -1153.04600000, -374.77230000, 1.97510000, 6, 0, l_U520, 3, 15.00000000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U492 );
                    TASK_PERFORM_SEQUENCE( l_U384, l_U492 );
                    CLEAR_SEQUENCE_TASK( l_U492 );
                }
                else
                {
                    TASK_CAR_DRIVE_TO_COORD( l_U384, l_U354, -1153.04600000, -374.77230000, 1.97510000, 6, 0, l_U520, 3, 15.00000000, 0 );
                }
                sub_31848();
                l_U446 = 1;
                if (NOT (IS_WANTED_LEVEL_GREATER( l_U751, 3 )))
                {
                    ALTER_WANTED_LEVEL( l_U751, 3 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( l_U751 );
                }
                APPLY_WANTED_LEVEL_CHANGE_NOW( l_U751 );
            }
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U354 ))) AND (l_U453 == 0))
    {
        GET_CAR_COORDINATES( l_U354, ref l_U713._fU0, ref l_U713._fU4, ref l_U713._fU8 );
        if (l_U713._fU0 < 64596)
        {
            g_U10454 = 0;
            l_U453 = 1;
        }
    }
    if (l_U483 == 0)
    {
        if ((NOT (IS_CAR_DEAD( l_U354 ))) AND (IS_CHAR_INJURED( l_U384 )))
        {
            LOCK_CAR_DOORS( l_U354, 1 );
            l_U483 = 1;
        }
    }
    sub_29448();
    sub_30066();
    sub_33196();
    sub_15756();
    sub_40311();
    if (NOT (IS_CAR_DEAD( l_U354 )))
    {
        if (IS_CHAR_SITTING_IN_CAR( l_U750, l_U354 ))
        {
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            GET_GAME_TIMER( ref l_U534 );
            if (NOT (IS_CHAR_DEAD( l_U384 )))
            {
                SET_CHAR_RELATIONSHIP( l_U384, 5, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U384, 0 );
            }
            sub_33932( "E1S2_BUS", ref l_U543, 7, 1 );
            l_U752++;
        }
    }
    return;
}

void sub_40311()
{
    unknown uVar2;

    if (l_U432)
    {
        if ((IS_VEH_DRIVEABLE( l_U354 )) AND (sub_16850( 1, 1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U750 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U750, ref uVar2 );
            }
            if ((LOCATE_CAR_3D( l_U354, -1153.04600000, -374.77230000, 1.97510000, 25, 20, 5, 0 )) || ((IS_CHAR_IN_ANY_CAR( l_U750 )) AND (HAS_RESPRAY_HAPPENED())))
            {
                SETTIMERA( 0 );
                if (NOT (IS_CAR_DEAD( l_U354 )))
                {
                    LOCK_CAR_DOORS( l_U354, 2 );
                }
                sub_40486();
            }
        }
    }
    return;
}

void sub_40486()
{
    ENABLE_SCENE_STREAMING( 0 );
    if (IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_OUT( 250 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    sub_33196();
    sub_15756();
    if (l_U461 == 0)
    {
        sub_3457();
        if (l_U441)
        {
            l_U441 = 0;
            STOP_STREAM();
        }
        SET_PLAYER_CONTROL_ADVANCED( l_U751, 0, 1, 1 );
        BEGIN_CAM_COMMANDS( ref l_U703 );
        l_U690 = 1;
        CREATE_CAM( 14, ref l_U698 );
        CREATE_CAM( 14, ref l_U699 );
        CREATE_CAM( 14, ref l_U700 );
        CREATE_CAM( 3, ref l_U701 );
        SET_USE_HIGHDOF( 1 );
        SET_WIDESCREEN_BORDERS( 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        LOAD_SCENE( -1151.47400000, -374.75900000, 2.00540000 );
        CLEAR_AREA_OF_CARS( -1151.47400000, -374.75900000, 2.00540000, 50 );
        if (NOT (IS_CAR_DEAD( l_U354 )))
        {
            if (IS_CHAR_IN_CAR( l_U750, l_U354 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U750, -1167.50000000, -330.00000000, 2.13510000 );
                WAIT( 0 );
                if ((NOT (IS_CHAR_INJURED( l_U384 ))) AND (NOT (IS_CAR_DEAD( l_U354 ))))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U384 );
                    WARP_CHAR_INTO_CAR( l_U384, l_U354 );
                }
            }
        }
        GET_CHAR_COORDINATES( l_U750, ref l_U505._fU0, ref l_U505._fU4, ref l_U505._fU8 );
        GET_CHAR_HEADING( l_U750, ref l_U540 );
        SET_CHAR_COORDINATES( l_U750, -1167.50000000, -330.00000000, 2.13510000 );
        if (NOT (IS_CAR_DEAD( l_U354 )))
        {
            SET_CAR_HEADING( l_U354, 270.20340000 );
            SET_CAR_COORDINATES( l_U354, -1151.47400000, -374.75900000, 2.00540000 );
            if (NOT (IS_CHAR_INJURED( l_U384 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U384, 1 );
                CLEAR_CHAR_TASKS( l_U384 );
                OPEN_SEQUENCE_TASK( ref l_U492 );
                TASK_STAND_STILL( 0, 2000 );
                TASK_CAR_TEMP_ACTION( 0, l_U354, 9, 4000 );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U354, -1121.36000000, -409.71980000, 2.13000000, 4.00000000, 0, l_U520, 3, 2.00000000, 1 );
                CLOSE_SEQUENCE_TASK( l_U492 );
                TASK_PERFORM_SEQUENCE( l_U384, l_U492 );
                CLEAR_SEQUENCE_TASK( l_U492 );
            }
        }
        SET_CAM_POS( l_U699, -1153.27400000, -372.28530000, 9.89703800 );
        SET_CAM_ROT( l_U699, -1.39463700, 0.00000000, -98.62301000 );
        SET_CAM_FOV( l_U699, 57 );
        SET_CAM_POS( l_U700, -1151.65700000, -382.05900000, 4.97029800 );
        SET_CAM_ROT( l_U700, -2.84418500, -0.00000000, -59.49988000 );
        SET_CAM_FOV( l_U700, 65 );
        SET_CAM_INTERP_STYLE_CORE( l_U701, l_U699, l_U700, 12000, 0 );
        SET_CAM_ACTIVE( l_U701, 1 );
        SET_CAM_PROPAGATE( l_U701, 1 );
        DO_SCREEN_FADE_IN( 250 );
        SETTIMERA( 64786 );
        SETTIMERB( 0 );
        while (l_U690 == 1)
        {
            if ((l_U707 == 0) AND (TIMERA() > 35))
            {
                if (l_U549 == 0)
                {
                    l_U550 = GET_SOUND_ID();
                    PLAY_SOUND_FROM_POSITION( l_U550, "TS4_KILL_BILLY_IN_JAIL_MAIN_DOOR_OPEN", -1140.86000000, -374.80000000, 3.76000000 );
                    l_U549 = 1;
                }
                if (DOES_OBJECT_EXIST( l_U744 ))
                {
                    l_U743--;
                    SET_OBJECT_HEADING( l_U744, l_U743 );
                }
                if (DOES_OBJECT_EXIST( l_U749 ))
                {
                    l_U748++;
                    SET_OBJECT_HEADING( l_U749, l_U748 );
                }
                if ((l_U743 <= 190) AND (l_U748 >= 350))
                {
                    l_U707 = 1;
                    l_U743 = 190;
                    l_U748 = 350;
                }
                SETTIMERA( 0 );
            }
            if (((NOT (IS_CAR_DEAD( l_U354 ))) AND (l_U707 == 1)) AND (TIMERA() > 35))
            {
                GET_CAR_COORDINATES( l_U354, ref l_U713._fU0, ref l_U713._fU4, ref l_U713._fU8 );
                if ((l_U713._fU0 > 64408) AND (l_U708 == 0))
                {
                    if (DOES_OBJECT_EXIST( l_U744 ))
                    {
                        l_U743++;
                        SET_OBJECT_HEADING( l_U744, l_U743 );
                    }
                    if (DOES_OBJECT_EXIST( l_U749 ))
                    {
                        l_U748--;
                        SET_OBJECT_HEADING( l_U749, l_U748 );
                    }
                    if ((l_U743 >= 270) AND (l_U748 <= 270))
                    {
                        l_U708 = 1;
                        l_U743 = 270;
                        l_U748 = 270;
                    }
                    SETTIMERA( 0 );
                }
            }
            if ((l_U549 == 1) AND (l_U708 == 1))
            {
                STOP_SOUND( l_U550 );
                l_U549 = 0;
            }
            switch (l_U702)
            {
                case 0:
                if (TIMERB() > 11000)
                {
                    l_U702++;
                }
                break;
                case 1:
                l_U702++;
                break;
                case 2:
                INCREMENT_INT_STAT( 373, 1 );
                if (IS_SCREEN_FADED_IN())
                {
                    DO_SCREEN_FADE_OUT( 250 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                SET_CAM_ACTIVE( l_U698, 0 );
                SET_CAM_PROPAGATE( l_U698, 0 );
                SET_CAM_ACTIVE( l_U699, 0 );
                SET_CAM_PROPAGATE( l_U699, 0 );
                SET_CAM_ACTIVE( l_U700, 0 );
                SET_CAM_PROPAGATE( l_U700, 0 );
                SET_CAM_ACTIVE( l_U701, 0 );
                SET_CAM_PROPAGATE( l_U701, 0 );
                SET_USE_HIGHDOF( 0 );
                SET_WIDESCREEN_BORDERS( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                SET_CAM_BEHIND_PED( l_U750 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U690 = 0;
                break;
            }
            if ((sub_42314()) AND (TIMERB() > 1000))
            {
                l_U690 = 0;
                INCREMENT_INT_STAT( 372, 1 );
                if (IS_SCREEN_FADED_IN())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                SET_CAM_ACTIVE( l_U698, 0 );
                SET_CAM_PROPAGATE( l_U698, 0 );
                SET_CAM_ACTIVE( l_U699, 0 );
                SET_CAM_PROPAGATE( l_U699, 0 );
                SET_CAM_ACTIVE( l_U700, 0 );
                SET_CAM_PROPAGATE( l_U700, 0 );
                SET_CAM_ACTIVE( l_U701, 0 );
                SET_CAM_PROPAGATE( l_U701, 0 );
                SET_USE_HIGHDOF( 0 );
                SET_WIDESCREEN_BORDERS( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            }
            WAIT( 0 );
        }
        if (IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_OUT( 250 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        END_CAM_COMMANDS( ref l_U703 );
        ENABLE_SCENE_STREAMING( 1 );
        for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
        {
            if (DOES_CHAR_EXIST( l_U380[l_U530] ))
            {
                DELETE_CHAR( ref l_U380[l_U530] );
            }
        }
        for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
        {
            if (DOES_CHAR_EXIST( l_U385[l_U530] ))
            {
                DELETE_CHAR( ref l_U385[l_U530] );
            }
        }
        if (DOES_CHAR_EXIST( l_U384 ))
        {
            DELETE_CHAR( ref l_U384 );
        }
        if (DOES_VEHICLE_EXIST( l_U354 ))
        {
            DELETE_CAR( ref l_U354 );
        }
        LOAD_SCENE( l_U505._fU0, l_U505._fU4, l_U505._fU8 );
        SET_CHAR_HEADING( l_U750, l_U540 );
        SET_CHAR_COORDINATES( l_U750, l_U505._fU0, l_U505._fU4, l_U505._fU8 );
        if (IS_CHAR_IN_ANY_CAR( l_U750 ))
        {
            GET_CAR_CHAR_IS_USING( l_U750, ref l_U367 );
            if (NOT (IS_CAR_DEAD( l_U367 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U367 );
                APPLY_FORCE_TO_CAR( l_U367, 1, 0, 0, 0.20000000, 0, 0, 0, 0, 1, 1, 1 );
            }
        }
        SET_CAM_BEHIND_PED( l_U750 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        WAIT( 500 );
        SET_PLAYER_CONTROL_ADVANCED( l_U751, 1, 1, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        l_U528 = 2;
        sub_15856();
    }
    return;
}

int sub_42314()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_43370()
{
    if (l_U472 == 0)
    {
        sub_4563();
        SET_PED_IS_BLIND_RAGING( sub_3311(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
        DONT_DISPATCH_COPS_FOR_PLAYER( l_U751, 0 );
        HAS_RESPRAY_HAPPENED();
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        l_U472 = 1;
    }
    if ((l_U487 == 0) AND (NOT (sub_26465( l_U543 ))))
    {
        PRINT_NOW( "CP2_COMMAND_03", 7500, 1 );
        PRINTSTRING( "\n\n     ----> PRINT LOSE COPS TEXT <----\n\n\n" );
        l_U487 = 1;
    }
    if (l_U444 == 0)
    {
        if (TIMERA() >= 8000)
        {
            PRINT_HELP( "CP2_MISC_02" );
            PRINTSTRING( "\n\n     ----> PRINT PAD B TEXT 1 <----\n\n\n" );
            l_U444 = 1;
        }
    }
    if (((l_U467 == 0) AND (l_U444 == 1)) AND (l_U466 == 0))
    {
        if (TIMERA() >= 35000)
        {
            PRINT_HELP( "CP2_MISC_02" );
            PRINTSTRING( "\n\n     ----> PRINT PAD B TEXT 2 <----\n\n\n" );
            l_U467 = 1;
        }
    }
    if (l_U426 == 0)
    {
        if (IS_VEH_DRIVEABLE( l_U354 ))
        {
            if (LOCATE_CHAR_IN_CAR_2D( l_U750, -905.11580000, 1330.14100000, 13.00000000, 13.00000000, 0 ))
            {
                if ((IS_VEH_DRIVEABLE( l_U355[3] )) AND (NOT (IS_CHAR_INJURED( l_U368[3] ))))
                {
                    TASK_CAR_TEMP_ACTION( l_U368[3], l_U355[3], 9, 3000 );
                    SETTIMERB( 0 );
                    l_U426 = 1;
                }
            }
        }
    }
    if ((NOT l_U428) AND (l_U426))
    {
        if (TIMERB() >= 5000)
        {
            if (NOT (IS_CHAR_INJURED( l_U368[3] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U368[3], 0 );
            }
            l_U428 = 1;
        }
    }
    sub_44033();
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -930.21880000, 1245.45300000, 22.77850000, 8.00000000, 12.00000000, 6.00000000, 0 )) AND (l_U551 == 0))
    {
        for ( l_U530 = 0; l_U530 <= 4; l_U530++ )
        {
            sub_45699( l_U530 );
        }
        l_U551 = 1;
        SETTIMERB( 0 );
    }
    if ((l_U551 == 1) AND (l_U552 == 0))
    {
        if (TIMERB() >= 7000)
        {
            for ( l_U530 = 0; l_U530 <= 4; l_U530++ )
            {
                if (DOES_VEHICLE_EXIST( l_U560[l_U530] ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U560[l_U530] );
                }
                if (NOT (IS_CHAR_DEAD( l_U566[l_U530] )))
                {
                    SET_CHAR_KEEP_TASK( l_U566[l_U530], 1 );
                    SET_CHAR_RELATIONSHIP( l_U566[l_U530], 1, 3 );
                    SET_CHAR_RELATIONSHIP( l_U566[l_U530], 5, 0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566[l_U530], 0 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U566[l_U530] );
                }
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U559 );
            l_U552 = 1;
        }
    }
    if (((l_U551 == 1) AND (l_U552 == 0)) AND (l_U553 == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -900.86550000, 1180.94700000, 17.03910000, 10.00000000, 25.00000000, 10.00000000, 0 ))
        {
            sub_33932( "E1S2_BLOC", ref l_U543, 3, 1 );
            l_U553 = 1;
        }
    }
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U750, 64619, 960.00000000, 16.00000000, 20.00000000, 20.00000000, 10.00000000, 0 )) AND (l_U572 == 0))
    {
        sub_47231();
        l_U572 = 1;
        SETTIMERB( 0 );
    }
    if ((l_U572 == 1) AND (l_U573 == 0))
    {
        if (TIMERB() >= 8000)
        {
            for ( l_U530 = 0; l_U530 <= 8; l_U530++ )
            {
                if (DOES_VEHICLE_EXIST( l_U615[l_U530] ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U615[l_U530] );
                }
                if (NOT (IS_CHAR_DEAD( l_U625[l_U530] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U625[l_U530], 0 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U625[l_U530] );
                }
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U613 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U614 );
            l_U573 = 1;
        }
    }
    if (((l_U572 == 1) AND (l_U573 == 0)) AND (l_U574 == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -969.50000000, 780.00000000, 3.33240000, 25.00000000, 15.00000000, 10.00000000, 0 ))
        {
            sub_33932( "E1S2_CON", ref l_U543, 3, 1 );
            l_U574 = 1;
        }
    }
    if (((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -1095.52100000, 1246.84400000, 23.49410000, 40.00000000, 15.00000000, 10.00000000, 0 )) AND (l_U635 == 0)) AND (l_U686[0] == 0))
    {
        l_U685 = 0;
        sub_49141();
        l_U686[0] = 1;
        l_U635 = 1;
        SETTIMERB( 0 );
    }
    if (((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -964.07950000, 1353.43800000, 23.99650000, 15.00000000, 15.00000000, 10.00000000, 0 )) AND (l_U635 == 0)) AND (l_U686[1] == 0))
    {
        l_U685 = 1;
        sub_49141();
        l_U686[1] = 1;
        l_U635 = 1;
        SETTIMERB( 0 );
    }
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -1052.47200000, 1468.42700000, 23.50930000, 15.00000000, 15.00000000, 10.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -926.16930000, 1520.19300000, 24.59270000, 15.00000000, 15.00000000, 10.00000000, 0 )))
    {
        if ((l_U635 == 0) AND (l_U686[2] == 0))
        {
            l_U685 = 2;
            sub_49141();
            l_U686[2] = 1;
            l_U635 = 1;
            SETTIMERB( 0 );
        }
    }
    if (l_U635 == 1)
    {
        if (TIMERB() >= 8000)
        {
            for ( l_U530 = 0; l_U530 <= 3; l_U530++ )
            {
                if (DOES_VEHICLE_EXIST( l_U675[l_U530] ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675[l_U530] );
                }
                if (NOT (IS_CHAR_DEAD( l_U680[l_U530] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U680[l_U530], 0 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U680[l_U530] );
                }
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U673 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U674 );
            l_U635 = 0;
            l_U636 = 0;
        }
    }
    if ((l_U635 == 1) AND (l_U636 == 0))
    {
        if ((((LOCATE_CHAR_ANY_MEANS_3D( l_U750, -1095.50700000, 1199.41000000, 21.56570000, 13.00000000, 7.50000000, 10.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -1084.95800000, 1384.44800000, 23.45320000, 10.00000000, 10.00000000, 10.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -1030.92700000, 1538.34600000, 23.44150000, 15.00000000, 25.00000000, 10.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( l_U750, -940.85690000, 1586.22900000, 22.89810000, 5.00000000, 15.00000000, 10.00000000, 0 )))
        {
            sub_33932( "E1S2_BLOC", ref l_U543, 3, 1 );
            l_U636 = 1;
        }
    }
    if (l_U427 == 0)
    {
        if ((TIMERA() >= 15000) AND (NOT (LOCATE_CHAR_ANY_MEANS_2D( l_U750, -882.51840000, 1307.68000000, 50.00000000, 50.00000000, 0 ))))
        {
            for ( l_U530 = 0; l_U530 <= 5; l_U530++ )
            {
                if (DOES_VEHICLE_EXIST( l_U355[l_U530] ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U355[l_U530] );
                }
            }
            for ( l_U530 = 0; l_U530 <= 10; l_U530++ )
            {
                if (DOES_CHAR_EXIST( l_U368[l_U530] ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U368[l_U530] );
                }
            }
            if (DOES_CHAR_EXIST( l_U384 ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U384 );
            }
            l_U427 = 1;
        }
    }
    sub_51482();
    sub_29448();
    sub_30066();
    sub_52016();
    if (((l_U442 == 0) AND (l_U478 == 1)) AND (NOT (sub_26465( l_U543 ))))
    {
        PLAY_SOUND_FRONTEND( -1, "TS2_HIJACK_BUS_UNLOCK_CUFFS" );
        sub_44279();
        sub_52401();
        l_U442 = 1;
    }
    sub_33196();
    sub_15756();
    sub_53934();
    if (IS_VEH_DRIVEABLE( l_U354 ))
    {
        if ((NOT (IS_WANTED_LEVEL_GREATER( l_U751, 0 ))) AND (IS_CHAR_IN_CAR( l_U750, l_U354 )))
        {
            l_U752++;
        }
    }
    return;
}

void sub_44033()
{
    if (IS_VEH_DRIVEABLE( l_U354 ))
    {
        if (IS_CHAR_IN_CAR( l_U750, l_U354 ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( l_U751, 0 )))
            {
                if (l_U419)
                {
                    sub_4563();
                    sub_44115();
                    if (l_U473[0] == 0)
                    {
                        PRINT_NOW( "CP2_COMMAND_02", 7500, 1 );
                        l_U473[0] = 1;
                    }
                    else
                    {
                        CLEAR_PRINTS();
                    }
                    if ((l_U752 < 7) AND (l_U478 == 1))
                    {
                        sub_44279();
                    }
                    if (l_U480 == 1)
                    {
                        sub_44420();
                    }
                    l_U420[1] = 0;
                    l_U419 = 0;
                }
            }
            else if (NOT l_U420[1])
            {
                sub_4563();
                if (l_U473[1] == 0)
                {
                    PRINT_NOW( "CP2_COMMAND_03", 7500, 1 );
                    l_U473[1] = 1;
                }
                else
                {
                    CLEAR_PRINTS();
                }
                if ((l_U752 < 7) AND (l_U478 == 1))
                {
                    sub_44279();
                }
                if (l_U480 == 1)
                {
                    sub_44420();
                }
                l_U419 = 0;
                l_U420[1] = 1;
            }
        }
        else if (NOT l_U419)
        {
            if ((l_U452 == 1) AND (l_U464 == 0))
            {
                if (g_U39233 == 0)
                {
                    PAUSE_SCRIPTED_CONVERSATION( 0 );
                    sub_44816( ref l_U543 );
                }
                else if (g_U39233 == 1)
                {
                    PAUSE_SCRIPTED_CONVERSATION( 0 );
                    sub_44816( ref l_U543 );
                }
                l_U464 = 1;
            }
            sub_3457();
            sub_4563();
            sub_15084();
            if (l_U473[2] == 0)
            {
                PRINT_NOW( "CP2_COMMAND_05", 7500, 1 );
                l_U473[2] = 1;
            }
            if ((l_U752 < 7) AND (l_U478 == 1))
            {
                sub_45376();
            }
            if (l_U480 == 1)
            {
                if (l_U441)
                {
                    l_U441 = 0;
                    STOP_STREAM();
                }
            }
            if (l_U752 == 7)
            {
                l_U491 = 1;
            }
            l_U420[1] = 0;
            l_U419 = 1;
        }
    }
    return;
}

void sub_44115()
{
    if (NOT (DOES_BLIP_EXIST( l_U405 )))
    {
        ADD_BLIP_FOR_COORD( l_U499._fU0, l_U499._fU4, l_U499._fU8, ref l_U405 );
        SET_ROUTE( l_U405, 1 );
    }
    return;
}

void sub_44279()
{
    if (l_U441)
    {
        l_U441 = 0;
        l_U480 = 0;
        STOP_STREAM();
    }
    while (NOT l_U441)
    {
        if (PRELOAD_STREAM( "S2_PRISON_BUS_RIOTING_PRISONERS" ))
        {
            PLAY_STREAM_FRONTEND();
            l_U441 = 1;
        }
        WAIT( 0 );
    }
    return;
}

void sub_44420()
{
    if (l_U441)
    {
        l_U441 = 0;
        l_U480 = 1;
        STOP_STREAM();
    }
    while (NOT l_U441)
    {
        if (PRELOAD_STREAM( "S2_PRISON_BUS_RIOTING_PRISONERS_CALM" ))
        {
            if (NOT (IS_CHAR_DEAD( l_U380[1] )))
            {
                PLAY_STREAM_FROM_PED( l_U380[1] );
                l_U441 = 1;
            }
            else
            {
                l_U441 = 1;
            }
        }
        WAIT( 0 );
    }
    return;
}

int sub_44816(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_25162( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (iParam0->_fU4 == g_U8945)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_25162( "\n CONVERSATION PAUSED AT LINE " );
            sub_44972( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_25162( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_25162( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_25162( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_44972(unknown uParam0)
{
    return;
}

void sub_45376()
{
    if (l_U441)
    {
        l_U441 = 0;
        STOP_STREAM();
    }
    while (NOT l_U441)
    {
        if (PRELOAD_STREAM( "S2_PRISON_BUS_RIOTING_PRISONERS_POS" ))
        {
            if (NOT (IS_CHAR_DEAD( l_U380[1] )))
            {
                PLAY_STREAM_FROM_PED( l_U380[1] );
                l_U441 = 1;
            }
            else
            {
                l_U441 = 1;
            }
        }
        WAIT( 0 );
    }
    return;
}

void sub_45699(int iParam0)
{
    if (iParam0 == 0)
    {
        l_U556 = {64600, 1180, 16.87540000};
        l_U555 = 268;
    }
    else if (iParam0 == 1)
    {
        l_U556 = {64596, 1165, 16.85220000};
        l_U555 = 271;
    }
    else if (iParam0 == 2)
    {
        l_U556 = {64602, 1155, 16.87540000};
        l_U555 = 279;
    }
    else if (iParam0 == 3)
    {
        l_U556 = {64676, 1169, 17.00820000};
        l_U555 = 94;
    }
    else if (iParam0 == 4)
    {
        l_U556 = {64670, 1177, 16.95790000};
        l_U555 = 98;
    };;;;;
    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U559 );
    if (l_U554 != -1)
    {
        REQUEST_MODEL( l_U559 );
        while (NOT (HAS_MODEL_LOADED( l_U559 )))
        {
            WAIT( 0 );
        }
        if (((IS_THIS_MODEL_A_BOAT( l_U559 )) || (IS_THIS_MODEL_A_BIKE( l_U559 ))) || (IS_THIS_MODEL_A_HELI( l_U559 )))
        {
            l_U554 = -1;
        }
    }
    if (l_U554 == -1)
    {
        l_U559 = 2046537925;
        REQUEST_MODEL( l_U559 );
        while (NOT (HAS_MODEL_LOADED( l_U559 )))
        {
            WAIT( 0 );
        }
        if (HAS_MODEL_LOADED( l_U559 ))
        {
            CREATE_CAR( l_U559, l_U556._fU0, l_U556._fU4, l_U556._fU8, ref l_U560[iParam0], 1 );
            SET_CAR_HEADING( l_U560[iParam0], l_U555 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U559 );
        }
    }
    else
    {
        while (NOT (HAS_MODEL_LOADED( l_U559 )))
        {
            WAIT( 0 );
        }
        if (HAS_MODEL_LOADED( l_U559 ))
        {
            CREATE_CAR( l_U559, l_U556._fU0, l_U556._fU4, l_U556._fU8, ref l_U560[iParam0], 1 );
            SET_CAR_HEADING( l_U560[iParam0], l_U555 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U560[iParam0] )))
    {
        SET_CAR_ON_GROUND_PROPERLY( l_U560[iParam0] );
        SET_CAR_ENGINE_ON( l_U560[iParam0], 1, 1 );
        while (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U560[iParam0] )))
        {
            CREATE_RANDOM_CHAR_AS_DRIVER( l_U560[iParam0], ref l_U566[iParam0] );
            SET_CHAR_KEEP_TASK( l_U566[iParam0], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566[iParam0], 1 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U566[iParam0], 7, 20000, 1 );
            if (NOT (IS_CHAR_INJURED( l_U566[iParam0] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U492 );
                TASK_CAR_TEMP_ACTION( 0, l_U560[iParam0], 9, 4000 );
                if (iParam0 == 0)
                {
                    TASK_CAR_TEMP_ACTION( 0, l_U560[iParam0], 4, 200 );
                }
                else if ((iParam0 == 1) || (iParam0 == 3))
                {
                    TASK_CAR_TEMP_ACTION( 0, l_U560[iParam0], 5, 200 );
                }
                else
                {
                    TASK_CAR_TEMP_ACTION( 0, l_U560[iParam0], 6, 200 );
                }
                TASK_LEAVE_ANY_CAR( 0 );
                CLOSE_SEQUENCE_TASK( l_U492 );
                TASK_PERFORM_SEQUENCE( l_U566[iParam0], l_U492 );
                CLEAR_SEQUENCE_TASK( l_U492 );
                SET_DRIVE_TASK_CRUISE_SPEED( l_U566[iParam0], 45.00000000 );
            }
        }
        SWITCH_CAR_SIREN( l_U560[iParam0], 1 );
        SET_SIREN_WITH_NO_DRIVER( l_U560[iParam0], 1 );
        FORCE_CAR_LIGHTS( l_U560[iParam0], 2 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U559 );
    return;
}

void sub_47231()
{
    l_U585[0] = {-945.81980000, 782.09360000, 2.66990000 + 1};
    l_U575[0] = 87.62710000;
    l_U585[1] = {-941.72810000, 781.93910000, 2.17770000 + 1};
    l_U575[1] = 87.62710000;
    l_U585[2] = {-933.64370000, 782.65990000, 1.02170000 + 1};
    l_U575[2] = 87.62710000;
    l_U585[3] = {-921.84740000, 782.38290000, -0.79910000 + 1};
    l_U575[3] = 87.62710000;
    l_U585[4] = {-918.76830000, 783.91330000, -1.47170000 + 1};
    l_U575[4] = 87.62710000;
    l_U585[5] = {-912.14430000, 782.65800000, -2.65280000 + 1};
    l_U575[5] = 87.62710000;
    l_U585[6] = {64626, 783, -2};
    l_U575[6] = 87.62710000;
    l_U585[7] = {64626, 785, -2};
    l_U575[7] = 87.62710000;
    l_U585[8] = {64626, 781, -2};
    l_U575[8] = 87.62710000;
    REQUEST_MODEL( l_U613 );
    while (NOT (HAS_MODEL_LOADED( l_U613 )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( l_U614 );
    while (NOT (HAS_MODEL_LOADED( l_U614 )))
    {
        WAIT( 0 );
    }
    for ( l_U530 = 0; l_U530 <= 8; l_U530++ )
    {
        CREATE_CAR( l_U613, l_U585[l_U530]._fU0, l_U585[l_U530]._fU4, l_U585[l_U530]._fU8, ref l_U615[l_U530], 1 );
        SET_CAR_HEADING( l_U615[l_U530], l_U575[l_U530] );
        SET_CAR_ON_GROUND_PROPERLY( l_U615[l_U530] );
        SET_CAR_ENGINE_ON( l_U615[l_U530], 1, 1 );
        CREATE_CHAR_INSIDE_CAR( l_U615[l_U530], 7, l_U614, ref l_U625[l_U530] );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U625[l_U530], 1 );
        SET_CHAR_KEEP_TASK( l_U625[l_U530], 1 );
        if (l_U530 == 0)
        {
            OPEN_SEQUENCE_TASK( ref l_U492 );
            TASK_STAND_STILL( 0, 500 );
            TASK_CAR_MISSION_COORS_TARGET( 0, l_U615[l_U530], -1060.39700000, 781.79490000, 12.22970000, 4, 8.00000000, 2, 3, 6 );
            TASK_CAR_DRIVE_WANDER( 0, l_U615[l_U530], 15.00000000, 2 );
            CLOSE_SEQUENCE_TASK( l_U492 );
            TASK_PERFORM_SEQUENCE( l_U625[l_U530], l_U492 );
            CLEAR_SEQUENCE_TASK( l_U492 );
        }
        else if (l_U530 == 1)
        {
            TASK_CAR_MISSION( l_U625[l_U530], l_U615[l_U530], l_U615[0], 11, 12.00000000 + (l_U530 * 3), 2, 1, 6 );
        }
        else if (l_U530 == 2)
        {
            TASK_CAR_MISSION( l_U625[l_U530], l_U615[l_U530], l_U615[0], 10, 12.00000000 + (l_U530 * 3), 2, 1, 6 );
        }
        else if (l_U530 == 3)
        {
            TASK_CAR_MISSION( l_U625[l_U530], l_U615[l_U530], l_U615[0], 12, 12.00000000 + (l_U530 * 3), 2, 1, 6 );
        }
        else if (l_U530 == 4)
        {
            TASK_CAR_MISSION( l_U625[l_U530], l_U615[l_U530], l_U615[3], 11, 12.00000000 + (l_U530 * 3), 2, 1, 6 );
        }
        else if (l_U530 == 5)
        {
            TASK_CAR_MISSION( l_U625[l_U530], l_U615[l_U530], l_U615[3], 10, 12.00000000 + (l_U530 * 3), 2, 1, 6 );
        }
        else if (l_U530 == 6)
        {
            TASK_CAR_MISSION( l_U625[l_U530], l_U615[l_U530], l_U615[3], 12, 12.00000000 + (l_U530 * 3), 2, 1, 6 );
        }
        else if (l_U530 == 7)
        {
            TASK_CAR_MISSION( l_U625[l_U530], l_U615[l_U530], l_U615[6], 11, 12.00000000 + (l_U530 * 3), 2, 1, 6 );
        }
        else if (l_U530 == 8)
        {
            TASK_CAR_MISSION( l_U625[l_U530], l_U615[l_U530], l_U615[6], 10, 12.00000000 + (l_U530 * 3), 2, 1, 6 );
        }
        else
        {
            TASK_CAR_MISSION( l_U625[l_U530], l_U615[l_U530], l_U615[l_U530 - 1], 12, 12.00000000 + (l_U530 * 3), 2, 1, 6 );
        };;;;;;;;;
    }
    return;
}

void sub_49141()
{
    int iVar2;

    iVar2 = 0;
    if (l_U685 == 0)
    {
        l_U637[0] = {-1092.76300000, 1162.23400000, 15.61110000};
        l_U650[0] = 62.40800000;
        l_U637[1] = {-1098.89800000, 1165.79400000, 15.58490000};
        l_U650[1] = 290.17250000;
        l_U655[0] = {-1097.90800000 + 1.00000000, 1163.93500000, 15.62080000};
        l_U668[0] = 5.85260000;
        l_U655[1] = {-1094.04500000 + 2.50000000, 1160.28600000 + 2.00000000, 15.60200000};
        l_U668[1] = 3.63310000;
        iVar2 = 2;
    }
    else if (l_U685 == 1)
    {
        l_U637[0] = {-1136.34100000, 1382.21700000, 23.46740000};
        l_U650[0] = 347.66570000;
        l_U637[1] = {-1138.58900000, 1388.28700000, 23.43010000};
        l_U650[1] = 156.72930000;
        l_U637[2] = {-1131.45700000, 1391.27300000, 23.40690000};
        l_U650[2] = 135.35120000;
        l_U655[0] = {-1134.84000000, 1387.05100000, 23.49800000};
        l_U668[0] = 267.26200000;
        l_U655[1] = {-1131.68200000, 1395.02200000, 23.41850000};
        l_U668[1] = 242.30030000;
        l_U655[2] = {-1141.52800000, 1383.22000000, 23.49360000};
        l_U668[2] = 277.28130000;
        iVar2 = 3;
    }
    else if (l_U685 == 2)
    {
        l_U637[0] = {-973.05890000, 1602.25800000, 22.87730000};
        l_U650[0] = 297.74650000;
        l_U637[1] = {-978.34770000, 1594.19100000, 22.87850000};
        l_U650[1] = 18.39380000;
        l_U637[2] = {-1009.14500000, 1568.45300000, 22.89620000};
        l_U650[2] = 261.03130000;
        l_U637[3] = {-1012.32700000, 1580.96700000, 22.88850000};
        l_U650[3] = 346.33540000;
        l_U655[0] = {-977.09690000, 1598.79300000, 22.83840000};
        l_U668[0] = 249.24270000;
        l_U655[1] = {-977.11670000, 1588.54200000, 22.75100000};
        l_U668[1] = 271.66860000;
        l_U655[2] = {-1013.19100000, 1573.05700000, 22.70450000};
        l_U668[2] = 148.49330000;
        l_U655[3] = {-1010.67700000, 1587.71100000, 22.88330000};
        l_U668[3] = 66.84130000;
        iVar2 = 4;
    };;;
    GET_CURRENT_BASIC_COP_MODEL( ref l_U674 );
    while (NOT (HAS_MODEL_LOADED( l_U674 )))
    {
        REQUEST_MODEL( l_U674 );
        WAIT( 0 );
    }
    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U673 );
    while (NOT (HAS_MODEL_LOADED( l_U673 )))
    {
        REQUEST_MODEL( l_U673 );
        WAIT( 0 );
    }
    for ( l_U530 = 0; l_U530 <= (iVar2 - 1); l_U530++ )
    {
        CREATE_CAR( l_U673, l_U637[l_U530]._fU0, l_U637[l_U530]._fU4, l_U637[l_U530]._fU8, ref l_U675[l_U530], 1 );
        SET_CAR_HEADING( l_U675[l_U530], l_U650[l_U530] );
        SET_CAR_ON_GROUND_PROPERLY( l_U675[l_U530] );
        SET_CAR_ENGINE_ON( l_U675[l_U530], 1, 1 );
        SWITCH_CAR_SIREN( l_U675[l_U530], 1 );
        SET_SIREN_WITH_NO_DRIVER( l_U675[l_U530], 1 );
        FORCE_CAR_LIGHTS( l_U675[l_U530], 2 );
        CREATE_CHAR( 6, l_U674, l_U655[l_U530]._fU0, l_U655[l_U530]._fU4, l_U655[l_U530]._fU8, ref l_U680[l_U530], 1 );
        SET_CHAR_HEADING( l_U680[l_U530], l_U668[l_U530] );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U680[l_U530], 1 );
        SET_CHAR_KEEP_TASK( l_U680[l_U530], 1 );
        GIVE_DELAYED_WEAPON_TO_CHAR( l_U680[l_U530], 7, 20000, 1 );
        OPEN_SEQUENCE_TASK( ref l_U492 );
        TASK_AIM_GUN_AT_CHAR( 0, l_U750, 3000 );
        TASK_SHOOT_AT_CHAR( 0, l_U750, 5000, 3 );
        CLOSE_SEQUENCE_TASK( l_U492 );
        TASK_PERFORM_SEQUENCE( l_U680[l_U530], l_U492 );
        CLEAR_SEQUENCE_TASK( l_U492 );
    }
    return;
}

void sub_51482()
{
    int iVar2;

    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
    if (iVar2 == 4)
    {
        SET_SUPPRESS_HEADLIGHT_SWITCH( 1 );
    }
    else
    {
        SET_SUPPRESS_HEADLIGHT_SWITCH( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U354 )))
    {
        if (((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_SITTING_IN_CAR( l_U750, l_U354 ))) AND (NOT sub_51576()))
        {
            sub_51617();
            l_U466 = 1;
        }
        else
        {
            sub_3457();
        }
    }
    else
    {
        sub_3457();
    }
    return;
}

int sub_51576()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_51617()
{
    int iVar2;

    if (NOT (DOES_CAM_EXIST( l_U402 )))
    {
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 != 1)
        {
            ;
        }
        else
        {
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            CREATE_CAM( 14, ref l_U402 );
            SET_CAM_FOV( l_U402, 50.00000000 );
            ATTACH_CAM_TO_VEHICLE( l_U402, l_U354 );
            SET_CAM_ATTACH_OFFSET( l_U402, 0.00000000, -3.80000000, 1.10000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U402, 1 );
            POINT_CAM_AT_PED( l_U402, l_U750 );
            SET_CAM_POINT_OFFSET( l_U402, 0.60000000, 0.00000000, 0.50000000 );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U402, 1 );
            SET_CAM_ACTIVE( l_U402, 1 );
            SET_CAM_PROPAGATE( l_U402, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U21 = 1;
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U750, "MISSSTUBBS2", "look_in_mirror" )))
            {
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U750, "look_in_mirror", "MISSSTUBBS2", 8, 0, 0, 0, 0, 0 );
            }
        }
        END_CAM_COMMANDS( ref iVar2 );
    }
    return;
}

void sub_52016()
{
    int iVar2;

    GET_GAME_TIMER( ref l_U533 );
    if ((((l_U533 - l_U534) > l_U532) AND (NOT (sub_26465( l_U543 )))) AND (l_U419 == 0))
    {
        GET_GAME_TIMER( ref l_U534 );
        GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref l_U532 );
        SETTIMERB( 0 );
        if (l_U470 == 0)
        {
            TRIGGER_POLICE_REPORT( "E1_SCANNER_ST2_02" );
            l_U532 = 8000;
            l_U470 = 1;
        }
        else if (l_U478 == 0)
        {
            sub_33932( "E1S2_KEYS", ref l_U543, 6, 1 );
            l_U478 = 1;
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
            if (iVar2 < 50)
            {
                if (NOT (IS_CHAR_INJURED( l_U380[0] )))
                {
                    sub_33932( "E1S22_WOR", ref l_U543, 6, 1 );
                }
            }
            else
            {
                sub_33932( "E1S2_QUIP", ref l_U543, 6, 1 );
            }
        }
    }
    return;
}

void sub_52401()
{
    if (NOT (IS_CHAR_INJURED( l_U380[0] )))
    {
        SET_CHAR_COMPONENT_VARIATION( l_U380[0], 8, 0, 0 );
        OPEN_SEQUENCE_TASK( ref l_U492 );
        TASK_PLAY_ANIM( 0, "Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Chant_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Chant_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
        CLOSE_SEQUENCE_TASK( l_U492 );
        TASK_PERFORM_SEQUENCE( l_U380[0], l_U492 );
        CLEAR_SEQUENCE_TASK( l_U492 );
    }
    if (NOT (IS_CHAR_INJURED( l_U380[1] )))
    {
        SET_CHAR_COMPONENT_VARIATION( l_U380[1], 8, 0, 0 );
        OPEN_SEQUENCE_TASK( ref l_U492 );
        TASK_PLAY_ANIM( 0, "Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "chant_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Chant_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
        CLOSE_SEQUENCE_TASK( l_U492 );
        TASK_PERFORM_SEQUENCE( l_U380[1], l_U492 );
        CLEAR_SEQUENCE_TASK( l_U492 );
    }
    if (NOT (IS_CHAR_INJURED( l_U380[2] )))
    {
        SET_CHAR_COMPONENT_VARIATION( l_U380[2], 8, 0, 0 );
        OPEN_SEQUENCE_TASK( ref l_U492 );
        TASK_PLAY_ANIM( 0, "Chant_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Chant_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
        CLOSE_SEQUENCE_TASK( l_U492 );
        TASK_PERFORM_SEQUENCE( l_U380[2], l_U492 );
        CLEAR_SEQUENCE_TASK( l_U492 );
    }
    if (NOT (IS_CAR_DEAD( l_U354 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U385[0] )))
        {
            SET_CHAR_COMPONENT_VARIATION( l_U385[0], 8, 0, 0 );
            OPEN_SEQUENCE_TASK( ref l_U492 );
            TASK_PLAY_ANIM( 0, "Chant_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
            CLOSE_SEQUENCE_TASK( l_U492 );
            TASK_PERFORM_SEQUENCE( l_U385[0], l_U492 );
            CLEAR_SEQUENCE_TASK( l_U492 );
        }
        if (NOT (IS_CHAR_INJURED( l_U385[1] )))
        {
            SET_CHAR_COMPONENT_VARIATION( l_U385[1], 8, 0, 0 );
            OPEN_SEQUENCE_TASK( ref l_U492 );
            TASK_PLAY_ANIM( 0, "Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Chant_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
            CLOSE_SEQUENCE_TASK( l_U492 );
            TASK_PERFORM_SEQUENCE( l_U385[1], l_U492 );
            CLEAR_SEQUENCE_TASK( l_U492 );
        }
        if (NOT (IS_CHAR_INJURED( l_U385[2] )))
        {
            SET_CHAR_COMPONENT_VARIATION( l_U385[2], 8, 0, 0 );
            OPEN_SEQUENCE_TASK( ref l_U492 );
            TASK_PLAY_ANIM( 0, "Chant_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Chant_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Chant_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
            CLOSE_SEQUENCE_TASK( l_U492 );
            TASK_PERFORM_SEQUENCE( l_U385[2], l_U492 );
            CLEAR_SEQUENCE_TASK( l_U492 );
        }
    }
    return;
}

void sub_53934()
{
    unknown uVar2;

    if (IS_VEH_DRIVEABLE( l_U354 ))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U750 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U750, ref uVar2 );
        }
        if ((IS_CHAR_IN_ANY_CAR( l_U750 )) AND (HAS_RESPRAY_HAPPENED()))
        {
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if (DOES_CHAR_EXIST( l_U380[l_U530] ))
                {
                    DELETE_CHAR( ref l_U380[l_U530] );
                }
            }
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if (DOES_CHAR_EXIST( l_U385[l_U530] ))
                {
                    DELETE_CHAR( ref l_U385[l_U530] );
                }
            }
            if (DOES_VEHICLE_EXIST( l_U354 ))
            {
                DELETE_CAR( ref l_U354 );
            }
            l_U528 = 4;
            sub_15856();
        }
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U750, l_U354, 250.00000000, 250.00000000, 250.00000000, 0 )))
        {
            l_U528 = 4;
            sub_15856();
        }
    }
    return;
}

void sub_54345()
{
    if (l_U440 == 0)
    {
        SET_CREATE_RANDOM_COPS( 0 );
        DONT_DISPATCH_COPS_FOR_PLAYER( l_U751, 1 );
        GET_CHAR_COORDINATES( l_U750, ref l_U505._fU0, ref l_U505._fU4, ref l_U505._fU8 );
        CLEAR_AREA_OF_COPS( l_U505._fU0, l_U505._fU4, l_U505._fU8, 3000 );
        SET_MAX_WANTED_LEVEL( 0 );
        sub_54457();
        SETTIMERB( 0 );
        l_U440 = 1;
    }
    if (((NOT (sub_26465( l_U543 ))) AND (l_U480 == 0)) AND (l_U489 == 1))
    {
        if (l_U441)
        {
            l_U441 = 0;
            l_U480 = 1;
            STOP_STREAM();
        }
        while (NOT l_U441)
        {
            if (PRELOAD_STREAM( "S2_PRISON_BUS_RIOTING_PRISONERS_CALM" ))
            {
                if (NOT (IS_CHAR_DEAD( l_U380[1] )))
                {
                    PLAY_STREAM_FROM_PED( l_U380[1] );
                    l_U441 = 1;
                }
                else
                {
                    l_U441 = 1;
                }
            }
            WAIT( 0 );
        }
    }
    if (((l_U489 == 0) AND (NOT (sub_26465( l_U543 )))) AND (NOT (IS_CAR_DEAD( l_U354 ))))
    {
        if (IS_CHAR_SITTING_IN_CAR( l_U750, l_U354 ))
        {
            sub_33932( "E1S2_CALM", ref l_U543, 6, 1 );
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U380[l_U530] )))
                {
                    SET_ANIM_GROUP_FOR_CHAR( l_U380[l_U530], "MOVE_M@TEST" );
                    if (l_U530 == 0)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U492 );
                        TASK_PLAY_ANIM( 0, "Calm_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
                        CLOSE_SEQUENCE_TASK( l_U492 );
                        TASK_PERFORM_SEQUENCE( l_U380[l_U530], l_U492 );
                        CLEAR_SEQUENCE_TASK( l_U492 );
                    }
                    else if (l_U530 == 1)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U492 );
                        TASK_PLAY_ANIM( 0, "Calm_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
                        CLOSE_SEQUENCE_TASK( l_U492 );
                        TASK_PERFORM_SEQUENCE( l_U380[l_U530], l_U492 );
                        CLEAR_SEQUENCE_TASK( l_U492 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref l_U492 );
                        TASK_PLAY_ANIM( 0, "Calm_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
                        CLOSE_SEQUENCE_TASK( l_U492 );
                        TASK_PERFORM_SEQUENCE( l_U380[l_U530], l_U492 );
                        CLEAR_SEQUENCE_TASK( l_U492 );
                    }
                    SET_CHAR_RELATIONSHIP( l_U380[l_U530], 2, 3 );
                }
            }
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if ((NOT (IS_CHAR_INJURED( l_U385[l_U530] ))) AND (NOT (IS_CAR_DEAD( l_U354 ))))
                {
                    if (l_U530 == 0)
                    {
                        ATTACH_PED_TO_CAR( l_U385[0], l_U354, 0, 0.70000000 - 0.10000000, -0.30000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
                    }
                    else if (l_U530 == 1)
                    {
                        ATTACH_PED_TO_CAR( l_U385[1], l_U354, 0, -0.70000000 + 0.07500000, -0.30000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
                    }
                    else if (l_U530 == 2)
                    {
                        ATTACH_PED_TO_CAR( l_U385[2], l_U354, 0, -0.70000000 + 0.07500000, 0.60000000 - l_U541, 0.82000000 - l_U541, l_U538, 0, 0, 0 );
                    };;;
                    SET_ANIM_GROUP_FOR_CHAR( l_U385[l_U530], "MOVE_M@TEST" );
                    if (l_U530 == 0)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U492 );
                        TASK_PLAY_ANIM( 0, "Calm_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
                        CLOSE_SEQUENCE_TASK( l_U492 );
                        TASK_PERFORM_SEQUENCE( l_U385[l_U530], l_U492 );
                        CLEAR_SEQUENCE_TASK( l_U492 );
                    }
                    else if (l_U530 == 1)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U492 );
                        TASK_PLAY_ANIM( 0, "Calm_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
                        CLOSE_SEQUENCE_TASK( l_U492 );
                        TASK_PERFORM_SEQUENCE( l_U385[l_U530], l_U492 );
                        CLEAR_SEQUENCE_TASK( l_U492 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref l_U492 );
                        TASK_PLAY_ANIM( 0, "Calm_03", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_01", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_02", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        TASK_PLAY_ANIM( 0, "Calm_04", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
                        SET_SEQUENCE_TO_REPEAT( l_U492, 1 );
                        CLOSE_SEQUENCE_TASK( l_U492 );
                        TASK_PERFORM_SEQUENCE( l_U385[l_U530], l_U492 );
                        CLEAR_SEQUENCE_TASK( l_U492 );
                    }
                    SET_CHAR_RELATIONSHIP( l_U385[l_U530], 2, 3 );
                }
            }
            SETTIMERA( 0 );
            l_U489 = 1;
        }
    }
    if (((l_U451 == 0) AND (NOT (sub_26465( l_U543 )))) AND (NOT (IS_CAR_DEAD( l_U354 ))))
    {
        if (IS_CHAR_SITTING_IN_CAR( l_U750, l_U354 ))
        {
            sub_33932( "E1S2_TOGO", ref l_U543, 7, 1 );
            SETTIMERA( 0 );
            l_U451 = 1;
        }
    }
    if ((((l_U449 == 0) AND (l_U451 == 1)) AND (NOT (sub_26465( l_U543 )))) AND (NOT (IS_CAR_DEAD( l_U354 ))))
    {
        if ((NOT (IS_WANTED_LEVEL_GREATER( l_U751, 0 ))) AND (IS_CHAR_IN_CAR( l_U750, l_U354 )))
        {
            sub_44115();
            if (l_U473[0] == 0)
            {
                PRINT_NOW( "CP2_COMMAND_02", 7500, 1 );
                l_U473[0] = 1;
            }
            SETTIMERA( 0 );
        }
        l_U449 = 1;
    }
    if (((l_U450 == 0) AND (l_U449 == 1)) AND (TIMERA() > 8000))
    {
        SETTIMERA( 0 );
        l_U450 = 1;
    }
    if ((((((l_U452 == 0) AND (l_U450 == 1)) AND (TIMERA() > 8000)) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT (sub_26465( l_U543 )))) AND (l_U419 == 0))
    {
        if (g_U39233 == 0)
        {
            sub_33932( "E1S2_CHATV1", ref l_U543, 7, 1 );
            l_U457[0] = 1;
        }
        else if (g_U39233 == 1)
        {
            sub_33932( "E1S2_CHATV2", ref l_U543, 7, 1 );
            l_U457[1] = 1;
        }
        l_U452 = 1;
    }
    if (((((l_U491 == 1) AND (NOT (sub_26465( l_U543 )))) AND (NOT (IS_CAR_DEAD( l_U354 )))) AND (NOT (IS_CHAR_INJURED( l_U380[0] )))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U750, l_U354 )))
        {
            sub_33932( "E1S2_GO", ref l_U543, 7, 1 );
            l_U491 = 0;
        }
        else
        {
            l_U491 = 0;
        }
    }
    sub_44033();
    if (((((l_U452 == 1) AND (l_U464 == 1)) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT (sub_26465( l_U543 )))) AND (l_U419 == 0))
    {
        if (g_U39233 == 0)
        {
            sub_58199( "E1S2_CHATV1", ref l_U543, 7, 1 );
        }
        else if (g_U39233 == 1)
        {
            sub_58199( "E1S2_CHATV2", ref l_U543, 7, 1 );
        }
        l_U464 = 0;
    }
    if (NOT (IS_WANTED_LEVEL_GREATER( l_U751, 0 )))
    {
        if (l_U420[0])
        {
            if (IS_VEH_DRIVEABLE( l_U354 ))
            {
                if (IS_CHAR_IN_CAR( l_U750, l_U354 ))
                {
                    SET_RADAR_ZOOM( 750 );
                    sub_4563();
                    sub_44115();
                    if (l_U473[0] == 0)
                    {
                        PRINT_NOW( "CP2_COMMAND_02", 7500, 1 );
                        l_U473[0] = 1;
                    }
                    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U380[l_U530] )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U380[l_U530], 2, 3 );
                        }
                    }
                    l_U420[0] = 0;
                }
            }
        }
        if (NOT (IS_CAR_DEAD( l_U354 )))
        {
            if (IS_CHAR_IN_CAR( l_U750, l_U354 ))
            {
                if (LOCATE_CHAR_IN_CAR_3D( l_U750, l_U499._fU0, l_U499._fU4, l_U499._fU8 + 5, 2.50000000 * 2, 2.50000000 * 2, 2.50000000 * 2, 1 ))
                {
                    sub_58702();
                    if (DOES_BLIP_EXIST( l_U405 ))
                    {
                        REMOVE_BLIP( l_U405 );
                    }
                    SET_PLAYER_CONTROL_ADVANCED( l_U751, 0, 1, 1 );
                    l_U752++;
                }
            }
        }
    }
    else if (NOT l_U420[0])
    {
        SET_RADAR_ZOOM( 0 );
        sub_4563();
        if (l_U473[1] == 0)
        {
            PRINT_NOW( "CP2_COMMAND_03", 7500, 1 );
            l_U473[1] = 1;
        }
        for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U380[l_U530] )))
            {
                SET_CHAR_RELATIONSHIP( l_U380[l_U530], 5, 3 );
            }
        }
        l_U420[0] = 1;
    }
    if ((l_U454 == 0) AND (NOT (IS_CAR_DEAD( l_U354 ))))
    {
        if (LOCATE_CAR_3D( l_U354, -1536.48500000, -698.83680000, 0.00000000, 150.00000000, 150.00000000, 150.00000000, 0 ))
        {
            sub_59167();
            sub_59351();
            sub_59982();
            l_U454 = 1;
        }
    }
    sub_60111();
    sub_51482();
    sub_29448();
    sub_33196();
    sub_15756();
    sub_53934();
    if (l_U454 == 1)
    {
        sub_60417();
    }
    return;
}

void sub_54457()
{
    if ((l_U551 == 1) AND (l_U552 == 0))
    {
        for ( l_U530 = 0; l_U530 <= 4; l_U530++ )
        {
            if (DOES_VEHICLE_EXIST( l_U560[l_U530] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U560[l_U530] );
            }
            if (NOT (IS_CHAR_DEAD( l_U566[l_U530] )))
            {
                SET_CHAR_KEEP_TASK( l_U566[l_U530], 1 );
                SET_CHAR_RELATIONSHIP( l_U566[l_U530], 1, 3 );
                SET_CHAR_RELATIONSHIP( l_U566[l_U530], 5, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U566[l_U530], 0 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U566[l_U530] );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U559 );
        l_U552 = 1;
    }
    if ((l_U572 == 1) AND (l_U573 == 0))
    {
        for ( l_U530 = 0; l_U530 <= 8; l_U530++ )
        {
            if (DOES_VEHICLE_EXIST( l_U615[l_U530] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U615[l_U530] );
            }
            if (NOT (IS_CHAR_DEAD( l_U625[l_U530] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U625[l_U530], 0 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U625[l_U530] );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U613 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U614 );
        l_U573 = 1;
    }
    if (l_U635 == 1)
    {
        for ( l_U530 = 0; l_U530 <= 3; l_U530++ )
        {
            if (DOES_VEHICLE_EXIST( l_U675[l_U530] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U675[l_U530] );
            }
            if (NOT (IS_CHAR_DEAD( l_U680[l_U530] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U680[l_U530], 0 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U680[l_U530] );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U673 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U674 );
        l_U635 = 0;
        l_U636 = 0;
    }
    if (l_U427 == 0)
    {
        for ( l_U530 = 0; l_U530 <= 5; l_U530++ )
        {
            if (DOES_VEHICLE_EXIST( l_U355[l_U530] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U355[l_U530] );
            }
        }
        for ( l_U530 = 0; l_U530 <= 10; l_U530++ )
        {
            if (DOES_CHAR_EXIST( l_U368[l_U530] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U368[l_U530] );
            }
        }
        if (DOES_CHAR_EXIST( l_U384 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U384 );
        }
        l_U427 = 1;
    }
    return;
}

void sub_58199(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_58222( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

int sub_58222(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_25063( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_58702()
{
    float fVar2;

    if ((IS_CHAR_IN_ANY_CAR( l_U750 )) || (IS_CHAR_ON_ANY_BIKE( l_U750 )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U750, ref l_U367 );
        SET_PLAYER_CONTROL( l_U751, 0 );
        GET_CAR_SPEED( l_U367, ref fVar2 );
        while (fVar2 > 0.20000000)
        {
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( l_U367 )))
            {
                GET_CAR_SPEED( l_U367, ref fVar2 );
            }
        }
        SET_PLAYER_CONTROL( l_U751, 1 );
    }
    return;
}

void sub_59167()
{
    REQUEST_MODEL( l_U521 );
    while (NOT (HAS_MODEL_LOADED( l_U521 )))
    {
        WAIT( 0 );
    }
    CREATE_CAR( l_U521, -1536.48500000, -698.83680000, 0.00000000, ref l_U363[0], 1 );
    SET_CAR_HEADING( l_U363[0], 95.13970000 );
    WAIT( 1000 );
    CREATE_CAR( l_U521, -1524.44900000, -698.43360000, 0.00000000, ref l_U363[1], 1 );
    SET_CAR_HEADING( l_U363[1], 91.63830000 );
    return;
}

void sub_59351()
{
    REQUEST_MODEL( l_U523 );
    while (NOT (HAS_MODEL_LOADED( l_U523 )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( l_U522 );
    while (NOT (HAS_MODEL_LOADED( l_U522 )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 22, l_U523, -1525.27600000, -691.27590000, 6.17470000, ref l_U389[0], 1 );
    SET_CHAR_HEADING( l_U389[0], 337.16470000 );
    sub_5954( 7, l_U389[0], "BOAT_GUY", 0 );
    CREATE_CHAR( 22, l_U523, -1536.54600000, -695.76260000, 0.34910000, ref l_U389[1], 1 );
    SET_CHAR_HEADING( l_U389[1], 256.33200000 );
    if (NOT (IS_CAR_DEAD( l_U363[1] )))
    {
        CREATE_CHAR_INSIDE_CAR( l_U363[1], 22, l_U523, ref l_U389[2] );
    }
    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U389[l_U530] )))
        {
            SET_CHAR_NEVER_TARGETTED( l_U389[l_U530], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U389[l_U530], 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U389[l_U530], 1 );
            SET_CHAR_KEEP_TASK( l_U389[l_U530], 1 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U389[l_U530], 13, 20000, 1 );
            if (l_U530 == 0)
            {
                TASK_SWAP_WEAPON( l_U389[l_U530], 0 );
            }
            if ((HAS_MODEL_LOADED( l_U522 )) AND (l_U530 == 1))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U389[l_U530] );
                TASK_START_SCENARIO_AT_POSITION( l_U389[l_U530], "Scenario_SmokingOutsideOffice", -1536.54600000, -695.76260000, 0.34910000, 256.33200000 );
                GIVE_PED_AMBIENT_OBJECT( l_U389[l_U530], l_U522 );
            }
        }
    }
    return;
}

void sub_59982()
{
    REQUEST_MODEL( l_U525 );
    while (NOT (HAS_MODEL_LOADED( l_U525 )))
    {
        WAIT( 0 );
    }
    CREATE_CAR( l_U525, -1515.87300000, -645.48300000, 1.83850000, ref l_U527, 1 );
    SET_CAR_HEADING( l_U527, 266.96880000 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U525 );
    return;
}

void sub_60111()
{
    if (((NOT (IS_CAR_DEAD( l_U354 ))) AND (NOT (IS_CHAR_INJURED( l_U389[0] )))) AND (l_U463 == 0))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U750, l_U499._fU0, l_U499._fU4, l_U499._fU8, 100, 80, 10, 0 )) AND (IS_CHAR_IN_CAR( l_U750, l_U354 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U492 );
            TASK_LOOK_AT_CHAR( 0, l_U750, -2, 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 64051, -656.50000000, 2.00230000, 3, -2, 3.00000000 );
            TASK_PLAY_ANIM( 0, "WAVE", "MISSSTUBBS2", 4, 0, 0, 0, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U492 );
            TASK_PERFORM_SEQUENCE( l_U389[0], l_U492 );
            CLEAR_SEQUENCE_TASK( l_U492 );
            l_U463 = 1;
        }
    }
    return;
}

void sub_60417()
{
    for ( l_U530 = 0; l_U530 <= 1; l_U530++ )
    {
        if (NOT (IS_CAR_DEAD( l_U363[l_U530] )))
        {
            if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U363[l_U530], l_U750 )) || (IS_CHAR_IN_CAR( l_U750, l_U363[l_U530] )))
            {
                l_U528 = 5;
            }
        }
    }
    for ( l_U530 = 0; l_U530 <= 1; l_U530++ )
    {
        if (DOES_CHAR_EXIST( l_U389[l_U530] ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U389[l_U530], l_U750, 0 ))
            {
                l_U528 = 5;
            }
        }
        if (IS_CHAR_INJURED( l_U389[l_U530] ))
        {
            l_U528 = 5;
        }
    }
    if (l_U528 == 5)
    {
        for ( l_U530 = 0; l_U530 <= 1; l_U530++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U389[l_U530] )))
            {
                SET_CHAR_KEEP_TASK( l_U389[l_U530], 1 );
                TASK_COMBAT( l_U389[l_U530], l_U750 );
            }
        }
        sub_15856();
    }
    return;
}

void sub_60813()
{
    ENABLE_SCENE_STREAMING( 0 );
    if (IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_OUT( 250 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    sub_3688( ref l_U543, 0 );
    sub_3457();
    if (l_U441)
    {
        l_U441 = 0;
        STOP_STREAM();
    }
    SET_PLAYER_CONTROL_ADVANCED( l_U751, 0, 1, 1 );
    CLEAR_AREA_OF_CARS( l_U704._fU0, l_U704._fU4, l_U704._fU8, 30 );
    CLEAR_AREA( l_U499._fU0, l_U499._fU4, l_U499._fU8, 50, 1 );
    BEGIN_CAM_COMMANDS( ref l_U703 );
    l_U690 = 1;
    CREATE_CAM( 14, ref l_U698 );
    CREATE_CAM( 14, ref l_U699 );
    CREATE_CAM( 14, ref l_U700 );
    CREATE_CAM( 3, ref l_U701 );
    SET_CAM_POS( l_U699, -1529.91900000, -690.55940000, 9.13011600 );
    SET_CAM_ROT( l_U699, -15.35927000, 0.00000000, -115.00990000 );
    SET_CAM_FOV( l_U699, 45.00000000 );
    SET_CAM_POS( l_U700, -1529.91900000, -690.55940000, 9.13011600 );
    SET_CAM_ROT( l_U700, -15.35927000, 0.00000000, -115.00990000 );
    SET_CAM_FOV( l_U700, 45.00000000 );
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (IS_CHAR_IN_ANY_CAR( l_U750 ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( l_U750, -1525.02200000, -691.00000000, 6.17470000 );
    }
    else
    {
        SET_CHAR_COORDINATES( l_U750, -1525.02200000, -691.00000000, 6.17470000 );
    }
    SET_CHAR_HEADING( l_U750, 210.00000000 );
    WAIT( 500 );
    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U380[l_U530] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U380[l_U530] );
            SET_CHAR_KEEP_TASK( l_U380[l_U530], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U380[l_U530], 1 );
            if (IS_PED_ATTACHED_TO_ANY_CAR( l_U380[l_U530] ))
            {
                DETACH_PED( l_U380[l_U530], 1 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U380[l_U530] );
            if (l_U530 == 0)
            {
                SET_CHAR_COORDINATES( l_U380[l_U530], -1525.25500000, -692.75870000, 6.17480000 );
                SET_CHAR_HEADING( l_U380[l_U530], 336.64300000 );
                TASK_PLAY_ANIM( l_U380[l_U530], "idle_02", "MISSSTUBBS2", 8, 1, 0, 0, 0, -2 );
            }
            else if (l_U530 == 1)
            {
                SET_CHAR_COORDINATES( l_U380[l_U530], -1524.39000000, -694.09340000, 6.17500000 );
                SET_CHAR_HEADING( l_U380[l_U530], 354.73410000 );
                TASK_PLAY_ANIM( l_U380[l_U530], "idle_01", "MISSSTUBBS2", 8, 1, 0, 0, 0, -2 );
            }
            else if (l_U530 == 2)
            {
                SET_CHAR_COORDINATES( l_U380[l_U530], -1523.50000000, -693.00000000, 6.18000000 );
                SET_CHAR_HEADING( l_U380[l_U530], 43 );
                TASK_LOOK_AT_CHAR( l_U380[l_U530], l_U750, 20000, 0 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U380[l_U530], -1522.42000000, 64871, 3.03430000 );
                SET_CHAR_HEADING( l_U380[l_U530], 176.43210000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U380[l_U530], -1534.88400000, -695.84050000, 0.34910000, 2, 60000, 1.50000000 * (l_U530 + 1) );
            };;;
        }
    }
    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U385[l_U530] )))
        {
            CLEAR_CHAR_TASKS( l_U385[l_U530] );
            SET_CHAR_KEEP_TASK( l_U385[l_U530], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U385[l_U530], 1 );
            if (IS_PED_ATTACHED_TO_ANY_CAR( l_U385[l_U530] ))
            {
                DETACH_PED( l_U385[l_U530], 1 );
            }
            if (l_U530 == 0)
            {
                SET_CHAR_COORDINATES( l_U385[l_U530], -1522.58600000, -695.69080000, 6.13620000 );
                SET_CHAR_HEADING( l_U385[l_U530], 99.34740000 );
                OPEN_SEQUENCE_TASK( ref l_U492 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1534.88400000, -695.84050000, 0.34910000, 2, 60000, 1.50000000 * (l_U530 + 1) );
                CLOSE_SEQUENCE_TASK( l_U492 );
                TASK_PERFORM_SEQUENCE( l_U385[l_U530], l_U492 );
                CLEAR_SEQUENCE_TASK( l_U492 );
            }
            else if (l_U530 == 1)
            {
                SET_CHAR_COORDINATES( l_U385[l_U530], -1521.36700000, -695.69510000, 6.13620000 );
                SET_CHAR_HEADING( l_U385[l_U530], 102.27620000 );
                OPEN_SEQUENCE_TASK( ref l_U492 );
                TASK_STAND_STILL( 0, 400 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1534.88400000, -695.84050000, 0.34910000, 2, 60000, 1.50000000 * (l_U530 + 1) );
                CLOSE_SEQUENCE_TASK( l_U492 );
                TASK_PERFORM_SEQUENCE( l_U385[l_U530], l_U492 );
                CLEAR_SEQUENCE_TASK( l_U492 );
            }
            else if (l_U530 == 2)
            {
                SET_CHAR_COORDINATES( l_U385[l_U530], -1520.61700000, -693.90930000, 6.17520000 );
                SET_CHAR_HEADING( l_U385[l_U530], 135.00730000 );
                OPEN_SEQUENCE_TASK( ref l_U492 );
                TASK_STAND_STILL( 0, 800 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1534.88400000, -695.84050000, 0.34910000, 2, 60000, 1.50000000 * (l_U530 + 1) );
                CLOSE_SEQUENCE_TASK( l_U492 );
                TASK_PERFORM_SEQUENCE( l_U385[l_U530], l_U492 );
                CLEAR_SEQUENCE_TASK( l_U492 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U385[l_U530], -1520.00000000, -691.90000000, 6.17520000 );
                SET_CHAR_HEADING( l_U385[l_U530], 135.00730000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U385[l_U530], -1534.88400000, -695.84050000, 0.34910000, 2, 60000, 1.50000000 * (l_U530 + 1) );
            };;;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U389[0] )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U389[0] );
        SET_CHAR_COORDINATES( l_U389[0], -1523.80000000, -691.24000000, 6.17000000 );
        SET_CHAR_HEADING( l_U389[0], 125 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U389[0] ))) AND (NOT (IS_CAR_DEAD( l_U354 ))))
    {
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        OPEN_SEQUENCE_TASK( ref l_U492 );
        TASK_STAND_STILL( 0, 1000 );
        TASK_ENTER_CAR_AS_DRIVER( 0, l_U354, 60000 );
        CLOSE_SEQUENCE_TASK( l_U492 );
        TASK_PERFORM_SEQUENCE( l_U389[0], l_U492 );
        CLEAR_SEQUENCE_TASK( l_U492 );
    }
    SET_CAM_POS( l_U699, -1529.91900000, -690.55940000, 9.13011600 );
    SET_CAM_ROT( l_U699, -15.35927000, 0.00000000, -115.00990000 );
    SET_CAM_FOV( l_U699, 45.00000000 );
    SET_CAM_POS( l_U700, -1529.91900000, -690.55940000, 9.13011600 );
    SET_CAM_ROT( l_U700, -15.35927000, 0.00000000, -115.00990000 );
    SET_CAM_FOV( l_U700, 45.00000000 );
    SET_CAM_INTERP_STYLE_CORE( l_U701, l_U699, l_U700, 12000, 0 );
    SET_CAM_ACTIVE( l_U698, 0 );
    SET_CAM_PROPAGATE( l_U698, 0 );
    SET_CAM_ACTIVE( l_U701, 1 );
    SET_CAM_PROPAGATE( l_U701, 1 );
    if (NOT (IS_CHAR_INJURED( l_U389[0] )))
    {
        TASK_LOOK_AT_CHAR( l_U750, l_U389[0], 6000, 0 );
    }
    REQUEST_CAR_RECORDING( 883 );
    DO_SCREEN_FADE_IN( 250 );
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    l_U702 = -1;
    SETTIMERA( 0 );
    SETTIMERB( 0 );
    while (l_U690 == 1)
    {
        switch (l_U702)
        {
            case -1:
            if (TIMERA() > 2500)
            {
                SETTIMERA( 0 );
                l_U702++;
            }
            break;
            case 0:
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if ((NOT (IS_CHAR_DEAD( l_U385[l_U530] ))) AND (NOT (IS_CAR_DEAD( l_U363[0] ))))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U385[l_U530], l_U363[0], l_U530 );
                }
            }
            if ((NOT (IS_CAR_DEAD( l_U363[0] ))) AND (NOT (IS_CHAR_INJURED( l_U389[1] ))))
            {
                SET_CAR_HEADING( l_U363[0], 210.00000000 );
                SET_CAR_COORDINATES( l_U363[0], -1547.03600000, -746.51930000, 0.00000000 );
                WARP_CHAR_INTO_CAR( l_U389[1], l_U363[0] );
                OPEN_SEQUENCE_TASK( ref l_U492 );
                TASK_CAR_TEMP_ACTION( 0, l_U363[0], 9, 3000 );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U363[0], -1173.33900000, -772.77200000, 0.00000000, 30.00000000, 0, l_U521, 2, 5, 200 );
                TASK_CAR_TEMP_ACTION( 0, l_U363[0], 9, 999999 );
                CLOSE_SEQUENCE_TASK( l_U492 );
                TASK_PERFORM_SEQUENCE( l_U389[1], l_U492 );
                CLEAR_SEQUENCE_TASK( l_U492 );
            }
            if ((NOT (IS_CAR_DEAD( l_U363[1] ))) AND (NOT (IS_CHAR_INJURED( l_U389[2] ))))
            {
                TASK_CAR_TEMP_ACTION( l_U389[2], l_U363[1], 9, 500 );
            }
            SETTIMERA( 4501 );
            l_U702++;
            break;
            case 1:
            if ((TIMERA() > 3500) AND (l_U448 == 0))
            {
                l_U448 = 1;
            }
            if ((NOT (sub_26465( l_U543 ))) AND (TIMERA() > 4500))
            {
                SET_CAM_POS( l_U699, -1526.08200000, -690.49900000, 7.71379900 );
                SET_CAM_ROT( l_U699, -4.01467500, 0.00000000, -137.35520000 );
                SET_CAM_FOV( l_U699, 30.00000000 );
                SET_CAM_POS( l_U700, -1526.08200000, -690.49900000, 7.71379900 );
                SET_CAM_ROT( l_U700, -4.01467500, 0.00000000, -137.35520000 );
                SET_CAM_FOV( l_U700, 30.00000000 );
                SET_CAM_INTERP_STYLE_CORE( l_U701, l_U699, l_U700, 7000, 0 );
                SET_CAM_ACTIVE( l_U698, 0 );
                SET_CAM_PROPAGATE( l_U698, 0 );
                SET_CAM_ACTIVE( l_U701, 1 );
                SET_CAM_PROPAGATE( l_U701, 1 );
                if (NOT (IS_CHAR_DEAD( l_U380[2] )))
                {
                    TASK_LOOK_AT_CHAR( l_U750, l_U380[2], 15000, 0 );
                }
                if ((NOT (IS_CAR_DEAD( l_U354 ))) AND (NOT (IS_CHAR_DEAD( l_U389[0] ))))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U389[0] );
                    WARP_CHAR_INTO_CAR( l_U389[0], l_U354 );
                    SET_CAR_HEADING( l_U354, 189.41670000 );
                    SET_CAR_COORDINATES( l_U354, -1454.67300000, -683.11830000, 5.68750000 );
                    SET_CHAR_VISIBLE( l_U389[0], 0 );
                }
                sub_24978( "E1S2_DOCKS", 0, 1, ref l_U543, 8, 1 );
                l_U702++;
            }
            break;
            case 2:
            if (NOT (sub_26465( l_U543 )))
            {
                SET_CAM_POS( l_U699, -1527.57800000, -691.14120000, 7.70922600 );
                SET_CAM_ROT( l_U699, -2.31560500, 0.00000000, -106.53020000 );
                SET_CAM_FOV( l_U699, 25.00000000 );
                SET_CAM_POS( l_U700, -1527.57800000, -691.14120000, 7.70922600 );
                SET_CAM_ROT( l_U700, -2.31561100, -0.00000000, 169.51070000 );
                SET_CAM_FOV( l_U700, 25.00000000 );
                SET_CAM_INTERP_STYLE_CORE( l_U701, l_U699, l_U700, 14000, 5500 );
                SET_CAM_ACTIVE( l_U701, 1 );
                SET_CAM_PROPAGATE( l_U701, 1 );
                if ((NOT (IS_CHAR_INJURED( l_U389[0] ))) AND (NOT (IS_CAR_DEAD( l_U354 ))))
                {
                    TASK_CAR_TEMP_ACTION( l_U389[0], l_U354, 9, 10000 );
                }
                if ((NOT (IS_CHAR_DEAD( l_U380[2] ))) AND (NOT (IS_CAR_DEAD( l_U354 ))))
                {
                    CLEAR_CHAR_TASKS( l_U750 );
                    OPEN_SEQUENCE_TASK( ref l_U492 );
                    TASK_CLEAR_LOOK_AT( 0 );
                    TASK_LOOK_AT_CHAR( 0, l_U380[2], 1000, 0 );
                    TASK_LOOK_AT_VEHICLE( 0, l_U354, 3000, 0 );
                    TASK_LOOK_AT_CHAR( 0, l_U380[2], 10000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U492 );
                    TASK_PERFORM_SEQUENCE( l_U750, l_U492 );
                    CLEAR_SEQUENCE_TASK( l_U492 );
                }
                sub_24978( "E1S2_DOCKS", 2, 1, ref l_U543, 8, 1 );
                SETTIMERA( 0 );
                l_U702++;
            }
            break;
            case 3:
            if ((TIMERA() > 3000) AND (l_U692 == 0))
            {
                if (NOT (IS_CHAR_INJURED( l_U380[2] )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U380[2], -1534.88400000, -695.84050000, 0.34910000, 2, 60000, 1.50000000 );
                    l_U692 = 1;
                }
            }
            if (NOT (sub_26465( l_U543 )))
            {
                if (l_U692 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U380[2] )))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U380[2], -1534.88400000, -695.84050000, 0.34910000, 2, 60000, 1.50000000 );
                        l_U692 = 1;
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U380[0] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U492 );
                    TASK_STAND_STILL( 0, 350 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1534.88400000, -695.84050000, 0.34910000, 2, 60000, 1.50000000 * (l_U530 + 1) );
                    CLOSE_SEQUENCE_TASK( l_U492 );
                    TASK_PERFORM_SEQUENCE( l_U380[0], l_U492 );
                    CLEAR_SEQUENCE_TASK( l_U492 );
                }
                if (NOT (IS_CHAR_INJURED( l_U380[1] )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U380[1], -1534.88400000, -695.84050000, 0.34910000, 2, 60000, 1.50000000 * (l_U530 + 1) );
                }
                SETTIMERA( 0 );
                l_U702++;
            }
            break;
            case 4:
            if ((TIMERA() > 5000) AND (l_U694[1] == 0))
            {
                OPEN_SEQUENCE_TASK( ref l_U492 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1522.91800000, -695.56040000, 6.13620000, 2, -2, 0.50000000 );
                if (NOT (IS_CAR_DEAD( l_U363[1] )))
                {
                    TASK_LOOK_AT_VEHICLE( 0, l_U363[1], 8000, 0 );
                }
                CLOSE_SEQUENCE_TASK( l_U492 );
                TASK_PERFORM_SEQUENCE( l_U750, l_U492 );
                CLEAR_SEQUENCE_TASK( l_U492 );
                l_U694[1] = 1;
            }
            if (((TIMERA() > 6000) AND (l_U448 == 1)) AND (l_U694[1] == 1))
            {
                l_U702++;
            }
            if ((NOT (sub_26465( l_U543 ))) AND (l_U465 == 0))
            {
                sub_24978( "E1S2_DOCKS", 4, 0, ref l_U543, 8, 1 );
                l_U465 = 1;
            }
            break;
            case 5:
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if ((NOT (IS_CHAR_DEAD( l_U380[l_U530] ))) AND (NOT (IS_CAR_DEAD( l_U363[1] ))))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U380[l_U530], l_U363[1], l_U530 );
                }
            }
            if (NOT (IS_CAR_DEAD( l_U363[1] )))
            {
                if (HAS_CAR_RECORDING_BEEN_LOADED( 883 ))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U363[1], 883 );
                }
                else if (NOT (IS_CHAR_INJURED( l_U389[2] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U492 );
                    TASK_CAR_TEMP_ACTION( 0, l_U363[1], 9, 3000 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U363[1], -1507.51100000, -929.34770000, 0.00000000, 30.00000000, 0, l_U521, 2, 5, 200 );
                    TASK_CAR_TEMP_ACTION( 0, l_U363[1], 9, 999999 );
                    CLOSE_SEQUENCE_TASK( l_U492 );
                    TASK_PERFORM_SEQUENCE( l_U389[2], l_U492 );
                    CLEAR_SEQUENCE_TASK( l_U492 );
                }
            }
            if ((NOT (sub_26465( l_U543 ))) AND (l_U465 == 0))
            {
                sub_24978( "E1S2_DOCKS", 4, 0, ref l_U543, 8, 1 );
                l_U465 = 1;
            }
            SETTIMERA( 0 );
            l_U702++;
            break;
            case 6:
            if ((TIMERA() > 8000) AND (l_U693 == 0))
            {
                l_U693 = 1;
            }
            if ((NOT (sub_26465( l_U543 ))) AND (l_U465 == 0))
            {
                sub_24978( "E1S2_DOCKS", 4, 0, ref l_U543, 8, 1 );
                l_U465 = 1;
            }
            if ((TIMERA() > 8500) AND (l_U694[2] == 0))
            {
                if (DOES_CHAR_EXIST( l_U389[0] ))
                {
                    DELETE_CHAR( ref l_U389[0] );
                }
                if (DOES_VEHICLE_EXIST( l_U354 ))
                {
                    DELETE_CAR( ref l_U354 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U750, -1523.19500000, -692.43960000, 6.17520000, 2, -2, 0.50000000 );
                l_U694[2] = 1;
            }
            if ((TIMERA() > 11500) AND (NOT (sub_26465( l_U543 ))))
            {
                l_U702++;
            }
            break;
            case 7:
            INCREMENT_INT_STAT( 373, 1 );
            SET_CAM_ACTIVE( l_U698, 0 );
            SET_CAM_PROPAGATE( l_U698, 0 );
            SET_CAM_ACTIVE( l_U699, 0 );
            SET_CAM_PROPAGATE( l_U699, 0 );
            SET_CAM_ACTIVE( l_U700, 0 );
            SET_CAM_PROPAGATE( l_U700, 0 );
            SET_CAM_ACTIVE( l_U701, 0 );
            SET_CAM_PROPAGATE( l_U701, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( l_U750 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U690 = 0;
            break;
        }
        if ((sub_42314()) AND (TIMERB() > 1000))
        {
            l_U690 = 0;
            INCREMENT_INT_STAT( 372, 1 );
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            sub_3688( ref l_U543, 0 );
            SET_CAM_ACTIVE( l_U698, 0 );
            SET_CAM_PROPAGATE( l_U698, 0 );
            SET_CAM_ACTIVE( l_U699, 0 );
            SET_CAM_PROPAGATE( l_U699, 0 );
            SET_CAM_ACTIVE( l_U700, 0 );
            SET_CAM_PROPAGATE( l_U700, 0 );
            SET_CAM_ACTIVE( l_U701, 0 );
            SET_CAM_PROPAGATE( l_U701, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            if (NOT (IS_CAR_DEAD( l_U363[1] )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U363[1] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U363[1] );
                }
            }
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if (DOES_CHAR_EXIST( l_U380[l_U530] ))
                {
                    DELETE_CHAR( ref l_U380[l_U530] );
                }
            }
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if (DOES_CHAR_EXIST( l_U385[l_U530] ))
                {
                    DELETE_CHAR( ref l_U385[l_U530] );
                }
            }
            for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
            {
                if (DOES_CHAR_EXIST( l_U389[l_U530] ))
                {
                    DELETE_CHAR( ref l_U389[l_U530] );
                }
            }
            if (DOES_VEHICLE_EXIST( l_U363[0] ))
            {
                DELETE_CAR( ref l_U363[0] );
            }
            if (DOES_VEHICLE_EXIST( l_U363[1] ))
            {
                DELETE_CAR( ref l_U363[1] );
            }
            if (DOES_VEHICLE_EXIST( l_U354 ))
            {
                DELETE_CAR( ref l_U354 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U750 );
            SET_CHAR_COORDINATES( l_U750, -1523.19500000, -692.43960000, 6.17520000 );
            SET_CHAR_HEADING( l_U750, 355.47290000 );
            SET_CAM_BEHIND_PED( l_U750 );
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
        WAIT( 0 );
    }
    END_CAM_COMMANDS( ref l_U703 );
    ENABLE_SCENE_STREAMING( 1 );
    if (NOT (IS_CAR_DEAD( l_U363[1] )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U363[1] ))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U363[1] );
        }
    }
    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
    {
        if (DOES_CHAR_EXIST( l_U389[l_U530] ))
        {
            DELETE_CHAR( ref l_U389[l_U530] );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U354 ))
    {
        DELETE_CAR( ref l_U354 );
    }
    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
    {
        if (DOES_CHAR_EXIST( l_U380[l_U530] ))
        {
            DELETE_CHAR( ref l_U380[l_U530] );
        }
    }
    for ( l_U530 = 0; l_U530 <= 2; l_U530++ )
    {
        if (DOES_CHAR_EXIST( l_U385[l_U530] ))
        {
            DELETE_CHAR( ref l_U385[l_U530] );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U363[0] ))
    {
        DELETE_CAR( ref l_U363[0] );
    }
    if (DOES_VEHICLE_EXIST( l_U363[1] ))
    {
        DELETE_CAR( ref l_U363[1] );
    }
    SET_PLAYER_CONTROL_ADVANCED( l_U751, 1, 1, 1 );
    CLEAR_AREA_OF_CHARS( -1523.19500000, -692.43960000, 6.17520000, 500 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    sub_67749();
    return;
}

void sub_67749()
{
    sub_67758();
    g_U24 = 82;
    UNLOCK_MISSION_NEWS_STORY( 75 );
    sub_74533( 30 );
    sub_17701( 2, "E1S2_FREE2", "E1S2AUD", 0 );
    sub_3427();
    return;
}

void sub_67758()
{
    sub_67767();
    return;
}

void sub_67767()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_67785();
    sub_67844( iVar2, iVar3, iVar4 );
    return;
}

void sub_67785()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_67844(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 2;
    sub_67876( iVar5, uParam0, uParam1, uParam2, "Contact_3" );
    return;
}

void sub_67876(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14838[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_67972( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_67972( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14838[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_67972( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_67972( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_67972( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_67972( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_68549( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12306[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14838[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12306[uParam0]._fU144[I]._fU8++;
            if ((NOT g_U12306[uParam0]._fU144[I]._fU12) AND (g_U12306[uParam0]._fU144[I]._fU8 >= g_U12306[uParam0]._fU144[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12306[uParam0]._fU144[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_68997( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_4018() );
    sub_2310();
    bVar28 = true;
    uVar29 = sub_68549( uParam0, iVar7 );
    uVar30 = sub_1934( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14838[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U20913[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10982 );
                sub_73451( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_73885();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_73970( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_74049( uParam0 );
                sub_74088( 0 );
                sub_2210( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_74277();
        }
    }
    if (bParam2)
    {
        sub_73885();
        sub_74376();
        sub_74088( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_73885();
        sub_74428();
        sub_74088( 0 );
        sub_2210( uVar30, 0 );
    }
    sub_1821();
    return;
}

void sub_67972(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_68549(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_2165( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_68997(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_69093( uParam1 );
        break;
        case 1:
        bVar8 = sub_69788( uParam1 );
        break;
        case 2:
        bVar8 = sub_70521( uParam1 );
        break;
        case 3:
        bVar8 = sub_70758( uParam1 );
        break;
        case 4:
        bVar8 = sub_70924( uParam1 );
        break;
        case 5:
        bVar8 = sub_71123( uParam1 );
        break;
        case 6:
        bVar8 = sub_71318( uParam1 );
        break;
        case 7:
        bVar8 = sub_71523( uParam1 );
        break;
        case 8:
        bVar8 = sub_71728( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_70136( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_68549( uParam0, uParam1 );
    if (bParam3)
    {
        sub_72014( uVar9, uParam0 );
    }
    return 1;
}

int sub_69093(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_69190( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_69190( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_69190( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_69190( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_69190( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_69190( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_69695( "Contact 1", 1 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_69695( "Contact 1", 0 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_69190(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_69201( uParam1 );
    sub_69375( uParam0, 0, uParam2 );
    sub_69375( uParam0, 1, uParam3 );
    sub_69375( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_67785();
    return;
}

void sub_69201(unknown uParam0)
{
    ADD_SCORE( sub_4018(), uParam0 );
    sub_69226( uParam0 );
    return;
}

void sub_69226(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2165( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_69375(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_69695(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_69788(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69190( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_69190( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_69190( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_69190( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_69190( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_69190( iVar3, 0, sub_70014(), sub_70280(), 0, 0 );
        break;
        default:
        sub_69695( "Contact 2", 1 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_69695( "Contact 2", 0 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_70014()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_70136( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_70136(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_70280()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_70136( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_70521(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69190( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_69190( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_69190( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_69190( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_69695( "Contact 3", 1 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_69695( "Contact 3", 0 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_70758(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69190( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_69190( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_69695( "Friend 4", 1 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_69695( "Friend 4", 0 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_70924(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69190( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_69190( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_69190( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_69695( "Contact 5", 1 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_69695( "Contact 5", 0 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71123(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69190( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_69190( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_69190( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_69695( "Contact 6", 1 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_69695( "Contact 6", 0 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71318(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_69190( iVar3, 0, sub_70014(), sub_70280(), 0, 0 );
        break;
        default:
        sub_69695( "Friend 7", 1 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_69695( "Friend 7", 0 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71523(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_69190( iVar3, 0, sub_70014(), sub_70280(), 0, 0 );
        break;
        default:
        sub_69695( "Friend 8", 1 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_69695( "Friend 8", 0 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71728(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69190( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_69695( "Contact 9", 1 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_69695( "Contact 9", 0 );
        sub_69190( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_72014(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    if (sub_72075( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_72793( iParam1 );
    }
    return;
}

int sub_72075(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U14838[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U20913[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U20913[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_72215( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_72215(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_72385( 0 );
    return;
}

void sub_72385(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_72630();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_72630()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_72793(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U14815[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14815[iParam0]._fU4 == g_U14815[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14815[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14815[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_73024( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_73024( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_73024( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_73024( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_73024( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_73024( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_73024(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_73451(unknown uParam0, unknown uParam1)
{
    sub_73470( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_73470(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_73885()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

int sub_73970(int iParam0, int iParam1)
{
    if (iParam0 == 2)
    {
        if (iParam1 == 3)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_74049(unknown uParam0)
{
    sub_1682();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_74088(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_74139( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_74139(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_74277()
{
    sub_74286();
    return;
}

void sub_74286()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_74376()
{
    sub_74286();
    return;
}

void sub_74428()
{
    sub_74286();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_74533(int iParam0)
{
    if (iParam0 >= g_U1455)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_74620( iParam0 ))
    {
        sub_75670( iParam0 );
    }
    return;
}

int sub_74620(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1455[uParam0], 20 )) || (IS_BIT_SET( g_U1455[uParam0], 21 )))
    {
        return 0;
    }
    sub_74677( ref uVar3, 1, 0, 0 );
    sub_75289( uVar3, ref g_U1455[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1455[uParam0], 22, 31, g_U1455[0] );
    g_U1455[0]++;
    SET_BIT( ref g_U1455[uParam0], 20 );
    sub_25162( "\n ----------------------------------------------------------------" );
    sub_6038( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_25162( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_74677(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_74730( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_74862( iParam0 + 0 );
    }
    return;
}

void sub_74730(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_74862( iParam0 + 0 );
    }
    return;
}

void sub_74862(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_74893( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_74893(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_75289(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_75670(unknown uParam0)
{
    return;
}
