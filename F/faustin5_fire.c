void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 0;
    l_U3 = 0;
    l_U77 = 0;
    l_U100 = 1938952078;
    l_U101 = -610224615;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_63();
    }
    WAIT( 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (l_U1)
    {
        WAIT( 0 );
        switch (l_U0)
        {
            case 0:
            sub_351();
            break;
            case 1:
            sub_1071();
            break;
            default: break;
        }
    }
    sub_63();
    return;
}

void sub_63()
{
    if (l_U77)
    {
        for ( l_U80 = 0; l_U80 < l_U78; l_U80++ )
        {
            STOP_PTFX( l_U4[l_U80] );
            STOP_SOUND( l_U82[l_U80] );
            RELEASE_SOUND_ID( l_U82[l_U80] );
        }
        for ( l_U80 = 0; l_U80 < l_U79; l_U80++ )
        {
            REMOVE_SCRIPT_FIRE( l_U91[l_U80] );
        }
    }
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 600.06290000, 1468.30200000, 9.94910000, 645.37510000, 1488.85700000, 14.73830000 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_351()
{
    vector[8] vVar2;
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

    l_U15[0] = {605.00000000, 1475.30000000, 11.29500000};
    l_U46[0] = {0.00000000, 0.00000000, 45.00000000};
    l_U15[1] = {612.30000000, 1480.70000000, 11.29500000};
    l_U46[1] = {0.00000000, 0.00000000, 110.00000000};
    l_U15[2] = {619.70000000, 1474.90000000, 11.29500000};
    l_U46[2] = {0.00000000, 0.00000000, 80.00000000};
    l_U15[3] = {627.50000000, 1483.00000000, 11.29500000};
    l_U46[3] = {0.00000000, 0.00000000, 60.00000000};
    l_U78 = 4;
    array(ref vVar2, 8);
    vVar2[0] = {621.74090000, 1472.01200000, 11.63630000};
    vVar2[1] = {618.54170000, 1472.01200000, 11.63630000};
    vVar2[2] = {630.77830000, 1481.80000000, 11.64400000};
    vVar2[3] = {630.77830000, 1478.19600000, 11.64400000};
    l_U79 = 0;
    for ( l_U80 = 0; l_U80 < l_U78; l_U80++ )
    {
        l_U4[l_U80] = START_PTFX( "fire_plume_large", l_U15[l_U80], l_U46[l_U80], 1065353216 );
        l_U82[l_U80] = GET_SOUND_ID();
        PLAY_FIRE_SOUND_FROM_POSITION( l_U82[l_U80], vVar2[l_U80] );
    }
    for ( l_U80 = 0; l_U80 < l_U79; l_U80++ )
    {
        l_U91[l_U80] = START_SCRIPT_FIRE( vVar2[l_U80]._fU0, vVar2[l_U80]._fU4, vVar2[l_U80]._fU8, 3, 3 );
    }
    SWITCH_PED_PATHS_OFF( 600.06290000, 1468.30200000, 9.94910000, 645.37510000, 1488.85700000, 14.73830000 );
    SWAP_NEAREST_BUILDING_MODEL( 619.01590000, 1478.10600000, 11.29510000, 50.00000000, 737085764, 630869279 );
    SWAP_NEAREST_BUILDING_MODEL( 619.01590000, 1478.10600000, 11.29510000, 50.00000000, 352782722, -529948407 );
    SWAP_NEAREST_BUILDING_MODEL( 619.01590000, 1478.10600000, 11.29510000, 50.00000000, -304910528, 1868454720 );
    l_U77 = 1;
    GET_GAME_TIMER( ref l_U81 );
    l_U0 = 1;
    return;
}

void sub_1071()
{
    int iVar2;
    unknown uVar3;

    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1080(), 618.01590000, 1481.10600000, 11.29510000, 100.00000000, 100.00000000, 30.00000000, 0 )))
    {
        l_U1 = 0;
    }
    else
    {
        GET_GAME_TIMER( ref iVar2 );
        if ((iVar2 - l_U81) > 1000)
        {
            if (NOT l_U3)
            {
                if (sub_1208())
                {
                    if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( l_U100, 620.87380000, 1445.65800000, 11.62640000 ))
                    {
                        l_U3 = 1;
                    }
                }
            }
            if (NOT l_U2)
            {
                GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref uVar3 );
                REQUEST_MODEL( uVar3 );
                if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( uVar3, 616.99760000, 1462.29600000, 10.68090000 ))
                {
                    MARK_MODEL_AS_NO_LONGER_NEEDED( uVar3 );
                    l_U2 = 1;
                }
            }
        }
    }
    return;
}

void sub_1080()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1208()
{
    REQUEST_MODEL( l_U100 );
    REQUEST_MODEL( l_U101 );
    if ((HAS_MODEL_LOADED( l_U100 )) AND (HAS_MODEL_LOADED( l_U101 )))
    {
        return 1;
    }
    return 0;
}
