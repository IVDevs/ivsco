void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 1;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U132 = 20;
    l_U137 = 0;
    l_U147 = "amb@pimps_pros";
    l_U148 = 0;
    l_U150 = "misscar_sex";
    l_U175 = 0;
    l_U176 = 0;
    l_U177 = 0;
    l_U178 = 0;
    l_U179 = 1;
    StrCopy( ref l_U217, "pros_serv", 16 );
    l_U221 = 4;
    StrCopy( ref l_U222, "pros_07", 16 );
    l_U226 = 0.91600000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_260();
    }
    WAIT( 0 );
    l_U119 = l_U227;
    sub_1003();
    if ((g_U9272) || (g_U9273))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambPimpNpros" )) == 1)
        {
            g_U9273 = 0;
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambbeggar" )) == 0)
            {
                g_U9272 = 0;
            }
        }
    }
    while (l_U109)
    {
        WAIT( 0 );
        if (sub_1332())
        {
            switch (l_U105)
            {
                case 0:
                sub_3062();
                break;
                case 1:
                sub_4034();
                break;
                default: break;
            }
        }
        else
        {
            l_U109 = 0;
        }
        sub_22869();
    }
    if (l_U111)
    {
        if (DOES_CHAR_EXIST( l_U119 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U119 )))
            {
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
            }
        }
        if (l_U112)
        {
            g_U9272 = 0;
        }
        sub_2639();
    }
    if (l_U113)
    {
        g_U9273 = 0;
    }
    sub_260();
    return;
}

void sub_260()
{
    if (NOT (IS_CHAR_DEAD( l_U119 )))
    {
        CLEAR_CHAR_TASKS( l_U119 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    l_U119 = nil;
    if (NOT (IS_CHAR_DEAD( l_U120 )))
    {
        CLEAR_CHAR_TASKS( l_U120 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U120 );
    l_U120 = nil;
    if (NOT (IS_CHAR_DEAD( l_U121 )))
    {
        CLEAR_CHAR_TASKS( l_U121 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U121 );
    l_U121 = nil;
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U122 );
    l_U122 = nil;
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U129 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U130 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U131 );
    REMOVE_ANIMS( l_U147 );
    sub_481( 4, ref l_U222 );
    if (l_U115)
    {
        if (# -NULL-0xc27e8e())
        {
            PROSTITUTE_CAM_ACTIVATE( 0 );
        }
        if (IS_PLAYER_PLAYING( sub_751() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 1 );
        }
        l_U117 = 0;
        l_U115 = 0;
    }
    if (l_U116)
    {
        sub_702();
        l_U116 = 0;
    }
    if (l_U117)
    {
        if (IS_PLAYER_PLAYING( sub_751() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 1 );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_481(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((g_U10534 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_702();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_751(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_702()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_751()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1003()
{
    l_U109 = 0;
    if (DOES_CHAR_EXIST( l_U119 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U119 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
            l_U109 = 1;
        }
    }
    if (IS_PLAYER_PLAYING( sub_751() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_1089() )))
        {
            ;
        }
        else
        {
            l_U109 = 0;
        }
    }
    else
    {
        l_U109 = 0;
    }
    if (l_U109)
    {
        if (NOT (IS_CHAR_DEAD( l_U119 )))
        {
            GET_CHAR_COORDINATES( l_U119, ref l_U126._fU0, ref l_U126._fU4, ref l_U126._fU8 );
        }
    }
    return;
}

void sub_1089()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1332()
{
    if ((NOT sub_1341()) AND (DOES_CHAR_EXIST( l_U119 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U119 )))
            {
                if ((NOT g_U12379) AND (NOT sub_2236()))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1089(), 100.00000000, 100.00000000, 50.00000000, 0 ))
                    {
                        return 1;
                    }
                }
                else
                {
                    l_U106 = 11;
                }
            }
            else if (l_U106 == 0)
            {
                ;
            }
            else if (NOT g_U12379)
            {
                return 1;
            }
            else
            {
                sub_2503();
                l_U106 = 11;
            };;;
        }
    }
    return 0;
}

int sub_1341()
{
    if (NOT (IS_CHAR_INJURED( sub_1089() )))
    {
        if (sub_1373( sub_1089() ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_1373(unknown uParam0)
{
    if (((sub_1386( uParam0, 1, 0 )) || (sub_1386( uParam0, 2, 0 ))) || (sub_1386( uParam0, 0, 0 )))
    {
        return 1;
    }
    return 0;
}

int sub_1386(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_1414( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_1414(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_1089(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_2236()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_2503()
{
    unknown uVar2;

    if (l_U115)
    {
        if (# -NULL-0xc27e8e())
        {
            PROSTITUTE_CAM_ACTIVATE( 0 );
        }
        if (IS_PLAYER_PLAYING( sub_751() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 1 );
            GET_SCRIPT_TASK_STATUS( sub_1089(), 88, ref l_U145 );
            if (l_U145 == 1)
            {
                CLEAR_CHAR_TASKS( sub_1089() );
                CLEAR_CHAR_SECONDARY_TASK( sub_1089() );
            }
        }
        l_U117 = 0;
        l_U115 = 0;
        sub_2639();
    }
    if (l_U116)
    {
        sub_702();
        l_U116 = 0;
    }
    if (NOT (IS_CHAR_INJURED( l_U119 )))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
            DELETE_CHAR( ref l_U119 );
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U119 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            if (IS_CHAR_IN_ANY_CAR( l_U119 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_WANDER_STANDARD( 0 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U119, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    }
    if (l_U175)
    {
        if (IS_PLAYER_PLAYING( sub_751() ))
        {
            CLEAR_CHAR_TASKS( sub_1089() );
            CLEAR_CHAR_SECONDARY_TASK( sub_1089() );
            TASK_STAND_STILL( sub_1089(), 1 );
        }
        l_U175 = 0;
    }
    return;
}

void sub_2639()
{
    if ((((IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U217, l_U180[0] )) || (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U217, l_U180[1] ))) || (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U217, l_U180[2] ))) || (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U217, l_U180[3] )))
    {
        CLEAR_HELP();
    }
    return;
}

void sub_3062()
{
    REQUEST_ANIMS( l_U147 );
    REQUEST_ANIMS( l_U150 );
    if ((NOT (HAVE_ANIMS_LOADED( l_U147 ))) || (NOT (HAVE_ANIMS_LOADED( l_U150 ))))
    {
        REQUEST_ANIMS( l_U147 );
        REQUEST_ANIMS( l_U150 );
    }
    else if (# -NULL-0xc27e8e())
    {
        l_U180[0] = 70;
        l_U180[1] = 70;
        l_U180[2] = 70;
        l_U180[3] = l_U132;
        l_U132 = 70;
    }
    else
    {
        l_U180[0] = 20;
        l_U180[1] = 50;
        l_U180[2] = 70;
        l_U180[3] = l_U132;
        l_U132 = 20;
    }
    l_U151[0] = "f_handjob_intro";
    l_U155[0] = "f_handjob_loop";
    l_U159[0] = "f_handjob_outro";
    l_U163[0] = "m_handjob_intro";
    l_U167[0] = "m_handjob_loop";
    l_U171[0] = "m_handjob_outro";
    l_U151[1] = "f_blowjob_intro";
    l_U155[1] = "f_blowjob_loop";
    l_U159[1] = "f_blowjob_outro";
    l_U163[1] = "m_blowjob_intro";
    l_U167[1] = "m_blowjob_loop";
    l_U171[1] = "m_blowjob_outro";
    l_U151[2] = "f_sex_intro";
    l_U155[2] = "f_sex_loop";
    l_U159[2] = "f_sex_outro";
    l_U163[2] = "m_sex_intro";
    l_U167[2] = "m_sex_loop";
    l_U171[2] = "m_sex_outro";
    l_U187[0] = 750;
    l_U192[0] = 500;
    l_U197[0] = 250;
    l_U202[0] = 999999;
    l_U187[1] = 750;
    l_U192[1] = 500;
    l_U197[1] = 250;
    l_U202[1] = 999999;
    l_U187[2] = 1000;
    l_U192[2] = 500;
    l_U197[2] = 250;
    l_U202[2] = 999999;
    l_U187[3] = 1000;
    l_U192[3] = 500;
    l_U197[3] = 250;
    l_U202[3] = 999999;
    l_U207[0] = 0.01000000;
    l_U207[1] = 0.01000000;
    l_U207[2] = 0.50000000;
    l_U207[3] = 0.50000000;
    l_U212[0] = 1;
    l_U212[1] = 2;
    l_U212[2] = 3;
    l_U212[3] = 3;
    l_U148 = 0;
    l_U186 = l_U148;
    l_U175 = 0;
    l_U178 = 0;
    l_U105 = 1;;
    return;
}

void sub_4034()
{
    if (NOT (l_U106 == 10))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U119, sub_1089(), 0 ))
        {
            l_U137++;
            if (l_U137 >= 2)
            {
                sub_481( 4, ref l_U222 );
                l_U106 = 10;
            }
            else
            {
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U119 );
            }
        }
    }
    switch (l_U108)
    {
        case 0:
        sub_4180();
        break;
        case 2:
        sub_5816();
        break;
        case 4:
        sub_19276();
        break;
        case 5:
        sub_22073();
        break;
    }
    return;
}

void sub_4180()
{
    l_U108 = 0;
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U120 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U122 );
    l_U120 = nil;
    l_U122 = nil;
    l_U121 = nil;
    if (NOT (IS_CHAR_DEAD( l_U119 )))
    {
        if (NOT g_U9272)
        {
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1089(), 10.00000000, 10.00000000, 10.00000000, 0 )) AND (IS_SCORE_GREATER( sub_751(), l_U180[0] - 1 )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_1089() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1089(), ref l_U123 );
                    if (NOT (l_U123 == nil))
                    {
                        if (IS_VEH_DRIVEABLE( l_U123 ))
                        {
                            if (sub_4396( ref l_U123 ))
                            {
                                l_U108 = 2;
                            }
                            else
                            {
                                sub_4719();
                            }
                        }
                    }
                }
            }
            else if (sub_5086())
            {
                l_U108 = 4;
            }
            else if (NOT l_U114)
            {
                if (sub_5453())
                {
                    l_U108 = 5;
                }
            };;;
        }
        else if (sub_5086())
        {
            l_U108 = 4;
        }
        else if (NOT l_U114)
        {
            if (sub_5453())
            {
                l_U108 = 5;
            }
        };;;
    }
    if (l_U108 == 2)
    {
        if (NOT g_U9272)
        {
            l_U111 = 1;
        }
    }
    else if (NOT (l_U108 == 0))
    {
        if (l_U108 == 4)
        {
            if (NOT g_U9273)
            {
                l_U113 = 1;
                g_U9273 = 1;
            }
        }
        else if (l_U108 == 5)
        {
            l_U107 = 0;
        }
    }
    return;
}

int sub_4396(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        GET_CAR_MODEL( (uParam0^), ref uVar3 );
        if (sub_4433( uVar3 ))
        {
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( (uParam0^), ref iVar4 );
            if (iVar4 > 0)
            {
                GET_NUMBER_OF_PASSENGERS( (uParam0^), ref iVar4 );
                if ((iVar4 == 0) AND (IS_CAR_PASSENGER_SEAT_FREE( (uParam0^), 0 )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_4433(int iParam0)
{
    if (((((IS_THIS_MODEL_A_BOAT( iParam0 )) || (IS_THIS_MODEL_A_PLANE( iParam0 ))) || (IS_THIS_MODEL_A_HELI( iParam0 ))) || (IS_THIS_MODEL_A_TRAIN( iParam0 ))) || (IS_THIS_MODEL_A_BIKE( iParam0 )))
    {
        return 0;
    }
    if (((((((iParam0 == 2046537925) || (iParam0 == 148777611)) || (iParam0 == -350085182)) || (iParam0 == -1627000575)) || (iParam0 == -1900572838)) || (iParam0 == 1127131465)) || (iParam0 == 1911513875))
    {
        return 0;
    }
    if (((((iParam0 == 1560980623) || (iParam0 == 1938952078)) || (iParam0 == 1171614426)) || (iParam0 == -713569950)) || (iParam0 == -845979911))
    {
        return 0;
    }
    return 1;
}

void sub_4719()
{
    int iVar2;
    float fVar3;

    if (IS_PLAYER_PLAYING( sub_751() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1089() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1089(), ref l_U123 );
            if (NOT (l_U123 == nil))
            {
                if (IS_VEH_DRIVEABLE( l_U123 ))
                {
                    GET_CAR_SPEED( l_U123, ref fVar3 );
                    if (fVar3 <= 2.00000000)
                    {
                        if (IS_PLAYER_PRESSING_HORN( sub_751() ))
                        {
                            if ((IS_SCORE_GREATER( sub_751(), l_U180[0] - 1 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_751(), 0 ))))
                            {
                                if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1089() )))
                                {
                                    GET_GAME_TIMER( ref iVar2 );
                                    if ((iVar2 - g_U9568) > 5000)
                                    {
                                        if (IS_CHAR_ON_ANY_BIKE( sub_1089() ))
                                        {
                                            if (NOT (IS_CHAR_DEAD( l_U119 )))
                                            {
                                                SAY_AMBIENT_SPEECH( l_U119, "GENERIC_NO_THANKS", 1, 1, 0 );
                                            }
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( sub_1089(), "HOOKER_CAR_SMALL", 1, 1, 0 );
                                        }
                                        GET_GAME_TIMER( ref g_U9568 );
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref g_U9568 );
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

int sub_5086()
{
    int iVar2;

    if (NOT g_U9273)
    {
        GET_CHAR_COORDINATES( l_U119, ref l_U126._fU0, ref l_U126._fU4, ref l_U126._fU8 );
        GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U126._fU0, l_U126._fU4, l_U126._fU8, 10.00000000, 0, 0, ref l_U122 );
        if (NOT (l_U122 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U122 ))
            {
                if (sub_4396( ref l_U122 ))
                {
                    GET_DRIVER_OF_CAR( l_U122, ref l_U120 );
                    if (NOT (l_U120 == nil))
                    {
                        if (sub_5254( ref l_U120 ))
                        {
                            GET_CAR_MODEL( l_U122, ref iVar2 );
                            if ((NOT (iVar2 == -956048545)) AND (NOT (iVar2 == 1208856469)))
                            {
                                SET_CHAR_AS_MISSION_CHAR( l_U120 );
                                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U120, 0 );
                                SET_CAR_AS_MISSION_CAR( l_U122 );
                                SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U122, 0 );
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    l_U122 = nil;
    l_U120 = nil;
    return 0;
}

int sub_5254(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_CHAR_MALE( (uParam0^) ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_5453()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    l_U121 = nil;
    BEGIN_CHAR_SEARCH_CRITERIA();
    SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 35 );
    END_CHAR_SEARCH_CRITERIA();
    GET_CHAR_COORDINATES( l_U119, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_CLOSEST_CHAR( uVar2._fU0, uVar2._fU4, uVar2._fU8, 10.00000000, 1, 0, ref l_U121 );
    if (NOT (l_U121 == nil))
    {
        if (NOT (IS_CHAR_INJURED( l_U121 )))
        {
            SET_CHAR_AS_MISSION_CHAR( l_U121 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U121, 0 );
            return 1;
        }
        else
        {
            l_U121 = nil;
        }
    }
    l_U121 = nil;
    return 0;
}

void sub_5816()
{
    if (l_U111)
    {
        ;
    }
    if (g_U9272)
    {
        if (l_U106 > 0)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1089(), 15.00000000, 15.00000000, 3.00000000, 0 )))
            {
                CLEAR_CHAR_TASKS( l_U119 );
                if (DOES_CHAR_EXIST( l_U119 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U119 )))
                    {
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U119 );
                    }
                }
                l_U106 = 0;
                l_U108 = 0;
                if (l_U112)
                {
                    g_U9272 = 0;
                    l_U112 = 0;
                }
            }
        }
    }
    switch (l_U106)
    {
        case 0:
        if (NOT (l_U108 == 0))
        {
            l_U106 = 1;
        }
        else
        {
            sub_4180();
        }
        break;
        case 1:
        sub_6143();
        break;
        case 2:
        sub_6858();
        BLOCK_CHAR_GESTURE_ANIMS( l_U119, 1 );
        break;
        case 3:
        sub_7545();
        BLOCK_CHAR_GESTURE_ANIMS( l_U119, 1 );
        break;
        case 4:
        sub_8062();
        break;
        case 5:
        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1089(), 5.00000000, 5.00000000, 5.00000000, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_751(), 0 ))))
        {
            GET_SCRIPT_TASK_STATUS( l_U119, 29, ref l_U145 );
            if (l_U145 == 1)
            {
                GET_SEQUENCE_PROGRESS( l_U119, ref l_U146 );
                if (l_U146 > 0)
                {
                    if ((IS_CHAR_IN_ANY_CAR( sub_1089() )) AND (IS_CHAR_IN_ANY_CAR( l_U119 )))
                    {
                        if (l_U117)
                        {
                            if (IS_PLAYER_PLAYING( sub_751() ))
                            {
                                SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 1 );
                                l_U117 = 0;
                            }
                        }
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1089(), ref l_U123 );
                        if (IS_VEH_DRIVEABLE( l_U123 ))
                        {
                            if ((IS_CHAR_IN_CAR( l_U119, l_U123 )) AND (IS_CHAR_IN_CAR( sub_1089(), l_U123 )))
                            {
                                INCREMENT_INT_STAT_NO_MESSAGE( 303, 1 );
                                l_U106 = 7;
                                GET_GAME_TIMER( ref l_U133 );
                                l_U144 = 0;
                            }
                            SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_DRIVE_TO_LOC", 1, 1, 0 );
                            GET_GAME_TIMER( ref g_U9568 );
                            l_U118 = 0;
                        }
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                        CLEAR_CHAR_TASKS( l_U119 );
                        OPEN_SEQUENCE_TASK( ref l_U124 );
                        if (HAVE_ANIMS_LOADED( l_U147 ))
                        {
                            TASK_PLAY_ANIM( 0, "rejection", l_U147, 13.00000000, 0, 1, 1, 0, -1 );
                        }
                        CLOSE_SEQUENCE_TASK( l_U124 );
                        TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                        CLEAR_SEQUENCE_TASK( l_U124 );
                        TASK_CLEAR_LOOK_AT( sub_1089() );
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                        l_U106 = 11;
                    }
                }
            }
            else if (l_U145 == 7)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U119 )))
                {
                    SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                    CLEAR_CHAR_TASKS( l_U119 );
                    OPEN_SEQUENCE_TASK( ref l_U124 );
                    if (HAVE_ANIMS_LOADED( l_U147 ))
                    {
                        TASK_PLAY_ANIM( 0, "rejection", l_U147, 13.00000000, 0, 1, 1, 0, -1 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U124 );
                    TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                    CLEAR_SEQUENCE_TASK( l_U124 );
                    TASK_CLEAR_LOOK_AT( sub_1089() );
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                    l_U106 = 11;
                }
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U119 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
            l_U106 = 11;
        }
        break;
        case 6:
        GET_SCRIPT_TASK_STATUS( l_U119, 29, ref l_U145 );
        if (l_U145 == 7)
        {
            if (l_U111)
            {
                if (DOES_CHAR_EXIST( l_U119 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U119 )))
                    {
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U119 )))
                    {
                        TASK_WANDER_STANDARD( l_U119 );
                    }
                }
                if (l_U112)
                {
                    g_U9272 = 0;
                    l_U112 = 0;
                }
                sub_2639();
                l_U112 = 0;
            }
            l_U106 = 0;
            l_U108 = 0;
        }
        break;
        case 7:
        sub_10652();
        break;
        case 8:
        sub_11987();
        break;
        case 9:
        sub_15270();
        break;
        case 10:
        l_U106 = 11;
        break;
        case 11:
        if (l_U117)
        {
            if (IS_PLAYER_PLAYING( sub_751() ))
            {
                SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 1 );
                l_U117 = 0;
            }
        }
        if (l_U111)
        {
            if (DOES_CHAR_EXIST( l_U119 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U119 )))
                {
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                }
            }
            if (l_U112)
            {
                g_U9272 = 0;
                l_U112 = 0;
            }
            sub_2639();
            l_U111 = 0;
        }
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1089(), 20.00000000, 20.00000000, 20.00000000, 0 )))
        {
            l_U109 = 0;
        }
        break;
    }
    return;
}

void sub_6143()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    if (g_U9272)
    {
        if (DOES_CHAR_EXIST( l_U119 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U119 )))
            {
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U119 );
            }
        }
        l_U106 = 0;
        l_U108 = 0;
        l_U111 = 0;
    }
    else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1089(), 11.00000000, 11.00000000, 3.00000000, 0 ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1089() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1089(), ref l_U123 );
            if (IS_VEH_DRIVEABLE( l_U123 ))
            {
                if (sub_4396( ref l_U123 ))
                {
                    GET_CAR_SPEED( l_U123, ref fVar2 );
                    if (fVar2 <= 2.00000000)
                    {
                        if (IS_PLAYER_PRESSING_HORN( sub_751() ))
                        {
                            if ((IS_SCORE_GREATER( sub_751(), l_U180[0] - 1 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_751(), 0 ))))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U119 )))
                                {
                                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 0 );
                                    SET_CHAR_AS_MISSION_CHAR( l_U119 );
                                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U119, 0 );
                                }
                                GET_CAR_MODEL( l_U123, ref l_U125 );
                                GET_MODEL_DIMENSIONS( l_U125, ref vVar12, ref vVar9 );
                                vVar6 = {vVar9 - vVar12};
                                vVar6 = {vVar6 / 2.00000000};
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U123, -vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U123, vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                                GET_CHAR_COORDINATES( l_U119, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                                if ((VDIST( uVar18, uVar15 )) < (VDIST( uVar18, uVar3 )))
                                {
                                    uVar3 = {uVar15};
                                }
                                OPEN_SEQUENCE_TASK( ref l_U124 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, -1, 1.00000000 );
                                CLOSE_SEQUENCE_TASK( l_U124 );
                                TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                                CLEAR_SEQUENCE_TASK( l_U124 );
                                REMOVE_CAR_WINDOW( l_U123, 0 );
                                l_U106 = 2;
                                g_U9272 = 1;
                                l_U112 = 1;
                            }
                            else
                            {
                                l_U106 = 0;
                                l_U108 = 0;
                                g_U9272 = 0;
                                l_U112 = 0;
                            }
                        }
                    }
                }
                else
                {
                    sub_4719();
                }
            }
        }
    }
    return;
}

void sub_6858()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    GET_SCRIPT_TASK_STATUS( l_U119, 29, ref l_U145 );
    if (l_U145 == 7)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1089() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1089(), ref l_U123 );
            if (IS_VEH_DRIVEABLE( l_U123 ))
            {
                if (sub_4396( ref l_U123 ))
                {
                    GET_CAR_SPEED( l_U123, ref fVar2 );
                    if ((fVar2 <= 2.00000000) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_751(), 0 ))))
                    {
                        GET_CAR_MODEL( l_U123, ref l_U125 );
                        GET_MODEL_DIMENSIONS( l_U125, ref vVar12, ref vVar9 );
                        vVar6 = {vVar9 - vVar12};
                        vVar6 = {vVar6 / 2.00000000};
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U123, -vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U123, vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                        GET_CHAR_COORDINATES( l_U119, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                        if ((VDIST( uVar18, uVar15 )) < (VDIST( uVar18, uVar3 )))
                        {
                            uVar3 = {uVar15};
                        }
                        OPEN_SEQUENCE_TASK( ref l_U124 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, -1, 1.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_1089() );
                        TASK_STAND_STILL( 0, -2 );
                        CLOSE_SEQUENCE_TASK( l_U124 );
                        TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                        CLEAR_SEQUENCE_TASK( l_U124 );
                        l_U106 = 3;
                    }
                    else if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1089(), 15.00000000, 15.00000000, 5.00000000, 0 ))) || (IS_WANTED_LEVEL_GREATER( sub_751(), 0 )))
                    {
                        CLEAR_CHAR_TASKS( l_U119 );
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                        l_U106 = 11;
                    }
                }
                else
                {
                    CLEAR_CHAR_TASKS( l_U119 );
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                    l_U106 = 11;
                    sub_4719();
                }
            }
            else
            {
                CLEAR_CHAR_TASKS( l_U119 );
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                l_U106 = 11;
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U119 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
            l_U106 = 11;
        }
    }
    return;
}

void sub_7545()
{
    float fVar2;

    GET_SCRIPT_TASK_STATUS( l_U119, 29, ref l_U145 );
    if (l_U145 == 1)
    {
        GET_SEQUENCE_PROGRESS( l_U119, ref l_U146 );
        if (l_U146 > 1)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1089() ))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1089(), 15.00000000, 15.00000000, 5.00000000, 0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1089(), ref l_U123 );
                    if (IS_VEH_DRIVEABLE( l_U123 ))
                    {
                        if (sub_4396( ref l_U123 ))
                        {
                            GET_CAR_SPEED( l_U123, ref fVar2 );
                            if (fVar2 <= 2.00000000)
                            {
                                SAY_AMBIENT_SPEECH( l_U119, "SOLICIT", 1, 1, 0 );
                                OPEN_SEQUENCE_TASK( ref l_U124 );
                                if (HAVE_ANIMS_LOADED( l_U147 ))
                                {
                                    TASK_PLAY_ANIM( 0, "car_proposition", l_U147, 12.00000000, 0, 0, 0, 0, -1 );
                                }
                                CLOSE_SEQUENCE_TASK( l_U124 );
                                TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                                CLEAR_SEQUENCE_TASK( l_U124 );
                                GET_GAME_TIMER( ref l_U133 );
                                GET_GAME_TIMER( ref l_U134 );
                                l_U106 = 4;
                                TASK_LOOK_AT_CHAR( sub_1089(), l_U119, 10000, 0 );
                            }
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS( l_U119 );
                            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                            l_U106 = 11;
                            sub_4719();
                        }
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS( l_U119 );
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                        l_U106 = 11;
                    }
                }
                else
                {
                    CLEAR_CHAR_TASKS( l_U119 );
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                    l_U106 = 11;
                }
            }
        }
    }
    return;
}

void sub_8062()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_1089() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1089(), ref l_U123 );
        GET_CAR_SPEED( l_U123, ref uVar2 );
        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, sub_1089(), 15.00000000, 15.00000000, 5.00000000, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_751(), 0 ))))
        {
            if (sub_8172( 4, 0 ))
            {
                if (NOT l_U117)
                {
                    if (IS_PLAYER_PLAYING( sub_751() ))
                    {
                        SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 0 );
                        l_U117 = 1;
                    }
                }
                if (sub_8508( 4, ref l_U222, 0 ))
                {
                    sub_481( 4, ref l_U222 );
                    CLEAR_CHAR_TASKS( l_U119 );
                    SAY_AMBIENT_SPEECH( sub_1089(), "SOLICIT_HOOKER_RESP_POS_CAR", 1, 1, 0 );
                    OPEN_SEQUENCE_TASK( ref l_U124 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U123, -2, 0 );
                    TASK_STAND_STILL( 0, -2 );
                    CLOSE_SEQUENCE_TASK( l_U124 );
                    TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                    CLEAR_SEQUENCE_TASK( l_U124 );
                    l_U106 = 5;
                }
                else
                {
                    GET_GAME_TIMER( ref l_U135 );
                    l_U136 = l_U135 - l_U133;
                    GET_SCRIPT_TASK_STATUS( l_U119, 29, ref l_U145 );
                    if (l_U136 >= 7500)
                    {
                        SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                        CLEAR_CHAR_TASKS( l_U119 );
                        OPEN_SEQUENCE_TASK( ref l_U124 );
                        if (HAVE_ANIMS_LOADED( l_U147 ))
                        {
                            TASK_PLAY_ANIM( 0, "rejection", l_U147, 13.00000000, 0, 1, 1, 0, -1 );
                        }
                        CLOSE_SEQUENCE_TASK( l_U124 );
                        TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                        CLEAR_SEQUENCE_TASK( l_U124 );
                        sub_481( 4, ref l_U222 );
                        TASK_CLEAR_LOOK_AT( sub_1089() );
                        l_U106 = 6;
                    }
                }
            }
            else
            {
                sub_481( 4, ref l_U222 );
                if (l_U117)
                {
                    if (IS_PLAYER_PLAYING( sub_751() ))
                    {
                        SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 1 );
                        l_U117 = 0;
                    }
                }
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U119 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
            TASK_CLEAR_LOOK_AT( sub_1089() );
            l_U106 = 11;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( l_U119 );
        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
        TASK_CLEAR_LOOK_AT( sub_1089() );
        l_U106 = 11;
    }
    return;
}

int sub_8172(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_751() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_751() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_751() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_8268())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1089() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_8353())
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

int sub_8268()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_8353()
{
    return sub_8364( 0, 0 );
}

int sub_8364(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

int sub_8508(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_8172( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_751(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_8783();
                l_U3 = 1;
                g_U10535 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10535 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_8783()
{
    return sub_8364( 1, 1 );
}

void sub_10652()
{
    float fVar2;
    int iVar3;
    int iVar4;

    iVar3 = 4000;
    if (l_U115)
    {
        if (# -NULL-0xc27e8e())
        {
            PROSTITUTE_CAM_ACTIVATE( 0 );
        }
        if (IS_PLAYER_PLAYING( sub_751() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 1 );
        }
        l_U117 = 0;
        l_U115 = 0;
    }
    else if (l_U117)
    {
        if (IS_PLAYER_PLAYING( sub_751() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 1 );
            l_U117 = 0;
        }
    }
    if (l_U116)
    {
        sub_702();
        l_U116 = 0;
    }
    if (NOT l_U118)
    {
        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1089() ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U119 ))))
        {
            SAY_AMBIENT_SPEECH( sub_1089(), "HOOKER_QUIET", 1, 1, 0 );
            GET_GAME_TIMER( ref g_U9568 );
            l_U118 = 1;
        }
    }
    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_1089() )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_751(), 0 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1089(), ref l_U123 );
        if (IS_VEH_DRIVEABLE( l_U123 ))
        {
            if (IS_CHAR_IN_CAR( l_U119, l_U123 ))
            {
                GET_CAR_SPEED( l_U123, ref fVar2 );
                if ((fVar2 <= 2.00000000) AND (IS_PLAYER_CONTROL_ON( sub_751() )))
                {
                    if (NOT l_U110)
                    {
                        if (sub_11037())
                        {
                            GET_GAME_TIMER( ref l_U133 );
                            l_U110 = 1;
                        }
                        else if (l_U118)
                        {
                            GET_GAME_TIMER( ref iVar4 );
                            if ((iVar4 - g_U9568) > 30000)
                            {
                                if ((NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1089() ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U119 ))))
                                {
                                    SAY_AMBIENT_SPEECH( sub_1089(), "HOOKER_QUIET", 1, 1, 0 );
                                    GET_GAME_TIMER( ref g_U9568 );
                                }
                            }
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U135 );
                        l_U136 = l_U135 - l_U133;
                        if (l_U136 >= iVar3)
                        {
                            if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_8268()))
                            {
                                l_U178 = 0;
                                l_U179 = 1;
                                GET_GAME_TIMER( ref l_U185 );
                                if (NOT (# -NULL-0xc27e8e()))
                                {
                                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                    PRINT_HELP_FOREVER_WITH_NUMBER( ref l_U217, l_U180[l_U148] );
                                }
                                l_U106 = 8;
                            }
                        }
                        else if (NOT sub_11037())
                        {
                            if (l_U118)
                            {
                                GET_GAME_TIMER( ref iVar4 );
                                if ((iVar4 - g_U9568) > 5000)
                                {
                                    if ((NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1089() ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U119 ))))
                                    {
                                        SAY_AMBIENT_SPEECH( sub_1089(), "HOOKER_QUIET", 1, 1, 0 );
                                        GET_GAME_TIMER( ref g_U9568 );
                                    }
                                }
                            }
                            l_U110 = 0;
                        }
                        if (l_U110)
                        {
                            ;
                        }
                    }
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                l_U106 = 11;
            }
        }
        else
        {
            SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
            l_U106 = 11;
        }
    }
    else
    {
        SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
        sub_2503();
        l_U106 = 11;
    }
    if (NOT (l_U106 == 8))
    {
        sub_2639();
    }
    return;
}

int sub_11037()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;

    fVar7 = 10.00000000;
    if (IS_CHAR_IN_ANY_CAR( sub_1089() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1089(), ref l_U123 );
    }
    GET_CHAR_COORDINATES( sub_1089(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    if (GET_CLOSEST_MAJOR_CAR_NODE( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 ))
    {
        if ((VDIST( uVar4, uVar8 )) <= 10.00000000)
        {
            return 0;
        }
    }
    BEGIN_CHAR_SEARCH_CRITERIA();
    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 34 );
    END_CHAR_SEARCH_CRITERIA();
    GET_CLOSEST_CHAR( uVar4._fU0, uVar4._fU4, uVar4._fU8, fVar7, 1, 1, ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        return 0;
    }
    else
    {
        GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar4._fU0, uVar4._fU4, uVar4._fU8, fVar7, 0, 0, ref iVar3 );
        if (NOT (iVar3 == nil))
        {
            if (NOT (iVar3 == l_U123))
            {
                if (IS_VEH_DRIVEABLE( iVar3 ))
                {
                    GET_DRIVER_OF_CAR( iVar3, ref iVar2 );
                    if (NOT (iVar3 == nil))
                    {
                        return 0;
                    }
                }
            }
        }
    }
    GET_INTERIOR_FROM_CHAR( sub_1089(), ref iVar11 );
    if (NOT (iVar11 == nil))
    {
        return 0;
    }
    return 1;
}

void sub_11987()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;

    if (NOT l_U117)
    {
        if (IS_PLAYER_PLAYING( sub_751() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 0 );
        }
        l_U117 = 1;
    }
    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_1089() )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_751(), 0 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1089(), ref l_U123 );
        if (IS_VEH_DRIVEABLE( l_U123 ))
        {
            if (IS_CHAR_IN_CAR( l_U119, l_U123 ))
            {
                GET_CAR_SPEED( l_U123, ref fVar2 );
                if ((((fVar2 <= 2.00000000) AND (IS_PLAYER_CONTROL_ON( sub_751() ))) AND (NOT sub_8268())) || (l_U178))
                {
                    if (((IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U217, l_U180[l_U148] )) || (# -NULL-0xc27e8e())) || (l_U178))
                    {
                        if (NOT l_U178)
                        {
                            if (IS_SCORE_GREATER( sub_751(), l_U180[0] - 1 ))
                            {
                                if (# -NULL-0xc27e8e())
                                {
                                    l_U179 = 1;
                                    l_U178 = 1;
                                    l_U148 = 3;
                                }
                                else
                                {
                                    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
                                    iVar7 = l_U148;
                                    if (IS_CONTROL_PRESSED( 0, 23 ))
                                    {
                                        GET_GAME_TIMER( ref l_U135 );
                                        if ((l_U135 - l_U185) > 1000)
                                        {
                                            sub_12362( 1 );
                                            GET_GAME_TIMER( ref l_U185 );
                                        }
                                    }
                                    else
                                    {
                                        l_U185 = 0;
                                    }
                                    if (NOT (iVar7 == l_U148))
                                    {
                                        if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U217, l_U180[iVar7] ))
                                        {
                                            CLEAR_HELP();
                                        }
                                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                        PRINT_HELP_FOREVER_WITH_NUMBER( ref l_U217, l_U180[l_U148] );
                                    }
                                    if (sub_12773())
                                    {
                                        if (NOT l_U179)
                                        {
                                            sub_2639();
                                            l_U179 = 1;
                                            l_U178 = 1;
                                        }
                                    }
                                    else
                                    {
                                        l_U179 = 0;
                                    }
                                }
                            }
                            else
                            {
                                l_U148 = 3;
                                l_U178 = 1;
                            }
                        }
                        else if (NOT l_U115)
                        {
                            SET_PLAYER_CAN_DO_DRIVE_BY( sub_751(), 0 );
                            if (# -NULL-0xc27e8e())
                            {
                                PROSTITUTE_CAM_ACTIVATE( 1 );
                            }
                            l_U115 = 1;
                            l_U117 = 0;
                        }
                        if (NOT l_U116)
                        {
                            sub_8783();
                            sub_12967();
                            l_U116 = 1;
                        }
                        if (l_U148 == 0)
                        {
                            SAY_AMBIENT_SPEECH( sub_1089(), "HOOKER_CHEAP", 1, 1, 0 );
                        }
                        else if (l_U148 == 1)
                        {
                            SAY_AMBIENT_SPEECH( sub_1089(), "HOOKER_MIDRANGE", 1, 1, 0 );
                        }
                        else if (l_U148 == 2)
                        {
                            SAY_AMBIENT_SPEECH( sub_1089(), "HOOKER_EXPENSIVE", 1, 1, 0 );
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH( sub_1089(), "HOOKER_EXPENSIVE", 1, 1, 0 );
                        };;;
                        iVar8 = GET_CHAR_MONEY( l_U119 );
                        if (NOT (l_U148 == 3))
                        {
                            if (IS_SCORE_GREATER( sub_751(), l_U180[l_U148] - 1 ))
                            {
                                ADD_SCORE( sub_751(), -1 * l_U180[l_U148] );
                                INCREMENT_INT_STAT_NO_MESSAGE( 95, l_U180[l_U148] );
                                iVar8 += l_U180[l_U148];
                            }
                        }
                        else if (IS_SCORE_GREATER( sub_751(), l_U132 - 1 ))
                        {
                            ADD_SCORE( sub_751(), -1 * l_U132 );
                            INCREMENT_INT_STAT_NO_MESSAGE( 95, l_U132 );
                            iVar8 += l_U132;
                        }
                        SET_CHAR_MONEY( l_U119, iVar8 );
                        if (NOT (l_U148 == 3))
                        {
                            sub_13508( l_U123 );
                            if (HAVE_ANIMS_LOADED( l_U150 ))
                            {
                                TASK_PLAY_ANIM_WITH_FLAGS( l_U119, l_U151[l_U148], l_U150, 1000.00000000, -1, 8355 );
                                TASK_PLAY_ANIM_WITH_FLAGS( sub_1089(), l_U163[l_U148], l_U150, 1000.00000000, -1, 128 );
                                l_U175 = 1;
                                l_U176 = 0;
                                l_U177 = 0;
                            }
                        }
                        GET_GAME_TIMER( ref l_U133 );
                        GET_GAME_TIMER( ref l_U139 );
                        GET_GAME_TIMER( ref l_U142 );
                        GET_GAME_TIMER( ref l_U143 );
                        l_U141 = 0;
                        l_U140 = l_U187[l_U148];
                        l_U110 = 0;
                        l_U106 = 9;;
                    }
                    else
                    {
                        sub_2639();
                        l_U110 = 0;
                        l_U106 = 7;
                    }
                }
                else
                {
                    sub_2639();
                    l_U110 = 0;
                    l_U106 = 7;
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                sub_2639();
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
                l_U106 = 11;
            }
        }
        else
        {
            SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
            sub_2639();
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U119, 1 );
            l_U106 = 11;
        }
    }
    else
    {
        SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
        sub_2639();
        sub_2503();
        l_U106 = 11;
    }
    return;
}

void sub_12362(boolean bParam0)
{
    boolean bVar3;
    int I;

    l_U186 = l_U148;
    if (bParam0)
    {
        l_U186++;
    }
    else
    {
        l_U186--;
    }
    if (l_U186 >= (l_U180 - 1))
    {
        l_U186 = 0;
    }
    else if (l_U186 < 0)
    {
        l_U186 = (l_U180 - 1) - 1;
    }
    bVar3 = false;
    for ( I = 0; I < l_U180; I++ )
    {
        if (IS_SCORE_GREATER( sub_751(), l_U180[l_U186] - 1 ))
        {
            bVar3 = true;
            l_U149 = l_U186;
            I = l_U180;
        }
        else if (bParam0)
        {
            l_U186++;
        }
        else
        {
            l_U186--;
        }
        if (l_U186 >= (l_U180 - 1))
        {
            l_U186 = 0;
        }
        else if (l_U186 < 0)
        {
            l_U186 = (l_U180 - 1) - 1;
        };;;
    }
    if (bVar3)
    {
        l_U148 = l_U149;
    }
    return;
}

int sub_12773()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_12967()
{
    if ((g_U560 == 1) || (g_U8867 == 4))
    {
        if (g_U95._fU60 != -1)
        {
            g_U16014[g_U95._fU60]._fU212._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U95._fU376 = 0;
        g_U95._fU100 = 1;
    }
    return;
}

void sub_13508(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int[26] iVar7;

    bVar4 = false;
    iVar5 = 0;
    iVar6 = 0;
    array(ref iVar7, 26);
    iVar7[0] = -1041692462;
    iVar7[1] = -682211828;
    iVar7[2] = 1063483177;
    iVar7[3] = 108773431;
    iVar7[4] = 723973206;
    iVar7[5] = -2119578145;
    iVar7[6] = -1097828879;
    iVar7[7] = 418536135;
    iVar7[8] = -2124201592;
    iVar7[9] = 1830407356;
    iVar7[10] = -227741703;
    iVar7[11] = -449022887;
    iVar7[12] = 1264386590;
    iVar7[13] = -1685021548;
    iVar7[14] = 1349725314;
    iVar7[15] = 1923400478;
    iVar7[16] = 1723137093;
    iVar7[17] = -295689028;
    iVar7[18] = 1821991593;
    iVar7[19] = -1896659641;
    iVar7[20] = 1534326199;
    iVar7[21] = -825837129;
    iVar7[22] = -1758379524;
    iVar7[23] = -583281407;
    iVar7[24] = -498054846;
    iVar7[25] = 2006667053;
    iVar6 = 26;
    GET_CAR_MODEL( uParam0, ref iVar3 );
    while (iVar5 < iVar6)
    {
        if (iVar3 == iVar7[iVar5])
        {
            bVar4 = true;
            iVar5 = iVar6;
        }
        iVar5++;
    }
    if (bVar4)
    {
        l_U151[0] = "f_handjob_intro_low";
        l_U155[0] = "f_handjob_loop_low";
        l_U159[0] = "f_handjob_outro_low";
        l_U163[0] = "m_handjob_intro_low";
        l_U167[0] = "m_handjob_loop_low";
        l_U171[0] = "m_handjob_outro_low";
        l_U151[1] = "f_blowjob_intro_low";
        l_U155[1] = "f_blowjob_loop_low";
        l_U159[1] = "f_blowjob_outro_low";
        l_U163[1] = "m_blowjob_intro_low";
        l_U167[1] = "m_blowjob_loop_low";
        l_U171[1] = "m_blowjob_outro_low";
        l_U151[2] = "f_sex_intro_low";
        l_U155[2] = "f_sex_loop_low";
        l_U159[2] = "f_sex_outro_low";
        l_U163[2] = "m_sex_intro_low";
        l_U167[2] = "m_sex_loop_low";
        l_U171[2] = "m_sex_outro_low";
        l_U226 = 0.80900000;
    }
    else
    {
        l_U151[0] = "f_handjob_intro";
        l_U155[0] = "f_handjob_loop";
        l_U159[0] = "f_handjob_outro";
        l_U163[0] = "m_handjob_intro";
        l_U167[0] = "m_handjob_loop";
        l_U171[0] = "m_handjob_outro";
        l_U151[1] = "f_blowjob_intro";
        l_U155[1] = "f_blowjob_loop";
        l_U159[1] = "f_blowjob_outro";
        l_U163[1] = "m_blowjob_intro";
        l_U167[1] = "m_blowjob_loop";
        l_U171[1] = "m_blowjob_outro";
        l_U151[2] = "f_sex_intro";
        l_U155[2] = "f_sex_loop";
        l_U159[2] = "f_sex_outro";
        l_U163[2] = "m_sex_intro";
        l_U167[2] = "m_sex_loop";
        l_U171[2] = "m_sex_outro";
        l_U226 = 0.91600000;
    }
    return;
}

void sub_15270()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    int iVar10;
    int iVar11;

    iVar2 = 15000;
    SET_SCRIPTED_ANIM_SEAT_OFFSET( l_U119, l_U226 );
    if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U119 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_751(), 0 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U119, ref l_U123 );
        if (IS_VEH_DRIVEABLE( l_U123 ))
        {
            GET_CAR_SPEED( l_U123, ref fVar9 );
            if ((fVar9 <= 2.00000000) AND (IS_PLAYER_CONTROL_ON( sub_751() )))
            {
                sub_12967();
                GET_GAME_TIMER( ref l_U135 );
                if (NOT l_U177)
                {
                    GET_GAME_TIMER( ref l_U133 );
                }
                l_U136 = l_U135 - l_U133;
                if (l_U136 >= iVar2)
                {
                    if (NOT l_U176)
                    {
                        if (NOT (l_U148 == 3))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U119, l_U150, l_U159[l_U148] ))
                            {
                                if (HAS_CHAR_ANIM_FINISHED( l_U119, l_U150, l_U159[l_U148] ))
                                {
                                    if (HAVE_ANIMS_LOADED( l_U150 ))
                                    {
                                        TASK_PLAY_ANIM_WITH_FLAGS( l_U119, l_U159[l_U148], l_U150, 1000.00000000, -1, 8323 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( sub_1089(), l_U171[l_U148], l_U150, 1000.00000000, -1, 128 );
                                    }
                                    l_U176 = 1;
                                }
                            }
                            else if (HAVE_ANIMS_LOADED( l_U150 ))
                            {
                                TASK_PLAY_ANIM_WITH_FLAGS( l_U119, l_U159[l_U148], l_U150, 1000.00000000, -1, 8323 );
                                TASK_PLAY_ANIM_WITH_FLAGS( sub_1089(), l_U171[l_U148], l_U150, 1000.00000000, -1, 128 );
                            }
                            l_U176 = 1;;
                        }
                        else
                        {
                            l_U176 = 1;
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U119, 88, ref l_U145 );
                        if (l_U145 == 7)
                        {
                            l_U175 = 0;
                            sub_2503();
                            SAY_AMBIENT_SPEECH( sub_1089(), "AFTER_SEX", 1, 1, 0 );
                            SET_PLAYER_MOOD_NORMAL( sub_751() );
                            l_U106 = 11;
                        }
                    }
                }
                else if (IS_CHAR_SITTING_IN_CAR( sub_1089(), l_U123 ))
                {
                    GET_CHAR_COORDINATES( sub_1089(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                    uVar3._fU0 = uVar6._fU0 - 5.00000000;
                    uVar3._fU4 = uVar6._fU4 - 5.00000000;
                    uVar3._fU8 = uVar6._fU8 - 5.00000000;
                    uVar6._fU0 += 5.00000000;
                    uVar6._fU4 += 5.00000000;
                    uVar6._fU8 += 5.00000000;
                    if (NOT (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar3._fU0, uVar3._fU4, uVar3._fU8, uVar6._fU0, uVar6._fU4, uVar6._fU8 )))
                    {
                        l_U141 = l_U135 - l_U142;
                        if (l_U141 > 1000)
                        {
                            if (l_U177)
                            {
                                GET_CHAR_HEALTH( sub_1089(), ref l_U141 );
                                l_U141 += l_U212[l_U148];
                                if (l_U141 > 200)
                                {
                                    l_U141 = 200;
                                }
                                SET_CHAR_HEALTH( sub_1089(), l_U141 );
                                GET_GAME_TIMER( ref l_U142 );
                            }
                        }
                        iVar10 = iVar2 - l_U136;
                        if (iVar10 > 10000)
                        {
                            if (iVar10 < 13500)
                            {
                                l_U140 = l_U187[l_U148];
                            }
                        }
                        else if (iVar10 > 5000)
                        {
                            l_U140 = l_U192[l_U148];
                        }
                        else if (iVar10 > 1000)
                        {
                            l_U140 = l_U197[l_U148];
                        }
                        else
                        {
                            l_U140 = l_U202[l_U148];
                        };;;
                        GET_GAME_TIMER( ref l_U135 );
                        l_U136 = l_U135 - l_U139;
                        if (l_U136 >= l_U140)
                        {
                            if (NOT (l_U148 == 2))
                            {
                                if (l_U177)
                                {
                                    sub_16382( ref l_U123 );
                                    GET_GAME_TIMER( ref l_U139 );
                                }
                            }
                        }
                        if (l_U177)
                        {
                            if (l_U148 == 2)
                            {
                                GET_SCRIPT_TASK_STATUS( l_U119, 88, ref l_U145 );
                                if (l_U145 == 1)
                                {
                                    if (sub_16554())
                                    {
                                        GET_GAME_TIMER( ref l_U135 );
                                        l_U136 = l_U135 - l_U139;
                                        if (l_U136 >= 200)
                                        {
                                            sub_16382( ref l_U123 );
                                            GET_GAME_TIMER( ref l_U139 );
                                        }
                                    }
                                }
                            }
                        }
                        if (NOT l_U177)
                        {
                            if (NOT (l_U148 == 3))
                            {
                                if (HAVE_ANIMS_LOADED( l_U150 ))
                                {
                                    if ((IS_CHAR_PLAYING_ANIM( l_U119, l_U150, l_U151[l_U148] )) AND (IS_CHAR_PLAYING_ANIM( sub_1089(), l_U150, l_U163[l_U148] )))
                                    {
                                        if ((HAS_CHAR_ANIM_FINISHED( l_U119, l_U150, l_U151[l_U148] )) AND (HAS_CHAR_ANIM_FINISHED( sub_1089(), l_U150, l_U163[l_U148] )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( l_U119, l_U155[l_U148], l_U150, 1000.00000000, -1, 8339 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( sub_1089(), l_U167[l_U148], l_U150, 1000.00000000, -1, 144 );
                                            l_U177 = 1;
                                        }
                                    }
                                    else
                                    {
                                        TASK_PLAY_ANIM_WITH_FLAGS( l_U119, l_U155[l_U148], l_U150, 1000.00000000, -1, 147 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( sub_1089(), l_U167[l_U148], l_U150, 1000.00000000, -1, 144 );
                                        l_U177 = 1;
                                        l_U177 = 1;
                                    }
                                }
                                else
                                {
                                    l_U177 = 1;
                                }
                            }
                            else
                            {
                                l_U177 = 1;
                            }
                            if (l_U177)
                            {
                                GET_GAME_TIMER( ref l_U133 );
                                GET_GAME_TIMER( ref l_U139 );
                                GET_GAME_TIMER( ref l_U142 );
                            }
                        }
                        else if (iVar10 > 1500)
                        {
                            if (l_U177)
                            {
                                GET_GAME_TIMER( ref l_U135 );
                                if ((l_U135 - l_U143) > 6000)
                                {
                                    if (NOT (l_U148 == 1))
                                    {
                                        iVar11 = 0;
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 5000, ref iVar11 );
                                        if (iVar11 > 2500)
                                        {
                                            SAY_AMBIENT_SPEECH( sub_1089(), "HOOKER_SEX", 1, 1, 0 );
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U119, "HOOKER_SEX", 1, 1, 0 );
                                        }
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( sub_1089(), "HOOKER_RELIEF", 1, 1, 0 );
                                    }
                                    GET_GAME_TIMER( ref l_U143 );
                                }
                            }
                        }
                    }
                }
                else
                {
                    SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                    sub_2503();
                    l_U106 = 11;
                }
            }
            else
            {
                l_U144++;
                if (l_U144 >= 4)
                {
                    SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                    sub_2503();
                    l_U106 = 11;
                }
                else
                {
                    CLEAR_CHAR_TASKS( l_U119 );
                    CLEAR_CHAR_TASKS( sub_1089() );
                    TASK_STAND_STILL( l_U119, -2 );
                    l_U175 = 0;
                    l_U110 = 0;
                    l_U106 = 7;
                }
            }
        }
        else
        {
            SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
            sub_2503();
            l_U106 = 11;
        }
    }
    else
    {
        SAY_AMBIENT_SPEECH( l_U119, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
        CLEAR_CHAR_TASKS( sub_1089() );
        CLEAR_CHAR_SECONDARY_TASK( sub_1089() );
        sub_2503();
        l_U106 = 11;
    }
    return;
}

void sub_16382(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;

    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        uVar3 = {0.00000000, 0.00000000, l_U207[l_U148]};
        vVar6 = {0.00000000, 0.00000000, 0.00000000};
        APPLY_FORCE_TO_CAR( (uParam0^), 1, uVar3, vVar6, 0, 1, 1, 1 );
        SHAKE_PAD( 0, 5, 64 );
    }
    return;
}

int sub_16554()
{
    float fVar2;

    if (IS_CHAR_PLAYING_ANIM( l_U119, l_U150, l_U155[l_U148] ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( l_U119, l_U150, l_U155[l_U148], ref fVar2 );
        if ((fVar2 > 0.03350000) AND (fVar2 < 0.04350000))
        {
            return 1;
        }
        if ((fVar2 > 0.05940000) AND (fVar2 < 0.06940000))
        {
            return 1;
        }
        if ((fVar2 > 0.08340000) AND (fVar2 < 0.09340000))
        {
            return 1;
        }
        if ((fVar2 > 0.10580000) AND (fVar2 < 0.11580000))
        {
            return 1;
        }
        if ((fVar2 > 0.12510000) AND (fVar2 < 0.13510000))
        {
            return 1;
        }
        if ((fVar2 > 0.14110000) AND (fVar2 < 0.15110000))
        {
            return 1;
        }
        if ((fVar2 > 0.16190000) AND (fVar2 < 0.17190000))
        {
            return 1;
        }
        if ((fVar2 > 0.18280000) AND (fVar2 < 0.19280000))
        {
            return 1;
        }
        if ((fVar2 > 0.20360000) AND (fVar2 < 0.21360000))
        {
            return 1;
        }
        if ((fVar2 > 0.22280000) AND (fVar2 < 0.23280000))
        {
            return 1;
        }
        if ((fVar2 > 0.24050000) AND (fVar2 < 0.25050000))
        {
            return 1;
        }
        if ((fVar2 > 0.25350000) AND (fVar2 < 0.26350000))
        {
            return 1;
        }
        if ((fVar2 > 0.26770000) AND (fVar2 < 0.27770000))
        {
            return 1;
        }
        if ((fVar2 > 0.27570000) AND (fVar2 < 0.28570000))
        {
            return 1;
        }
        if ((fVar2 > 0.28550000) AND (fVar2 < 0.29550000))
        {
            return 1;
        }
        if ((fVar2 > 0.29520000) AND (fVar2 < 0.30520000))
        {
            return 1;
        }
        if ((fVar2 > 0.30470000) AND (fVar2 < 0.31470000))
        {
            return 1;
        }
        if ((fVar2 > 0.31440000) AND (fVar2 < 0.32440000))
        {
            return 1;
        }
        if ((fVar2 > 0.32550000) AND (fVar2 < 0.33550000))
        {
            return 1;
        }
        if ((fVar2 > 0.33520000) AND (fVar2 < 0.34520000))
        {
            return 1;
        }
        if ((fVar2 > 0.34470000) AND (fVar2 < 0.35470000))
        {
            return 1;
        }
        if ((fVar2 > 0.35600000) AND (fVar2 < 0.36600000))
        {
            return 1;
        }
        if ((fVar2 > 0.36590000) AND (fVar2 < 0.37590000))
        {
            return 1;
        }
        if ((fVar2 > 0.37550000) AND (fVar2 < 0.38550000))
        {
            return 1;
        }
        if ((fVar2 > 0.38510000) AND (fVar2 < 0.39510000))
        {
            return 1;
        }
        if ((fVar2 > 0.39460000) AND (fVar2 < 0.40460000))
        {
            return 1;
        }
        if ((fVar2 > 0.40570000) AND (fVar2 < 0.41570000))
        {
            return 1;
        }
        if ((fVar2 > 0.41690000) AND (fVar2 < 0.42690000))
        {
            return 1;
        }
        if ((fVar2 > 0.42510000) AND (fVar2 < 0.43510000))
        {
            return 1;
        }
        if ((fVar2 > 0.43620000) AND (fVar2 < 0.44620000))
        {
            return 1;
        }
        if ((fVar2 > 0.45860000) AND (fVar2 < 0.46860000))
        {
            return 1;
        }
        if ((fVar2 > 0.47310000) AND (fVar2 < 0.48310000))
        {
            return 1;
        }
        if ((fVar2 > 0.48750000) AND (fVar2 < 0.49750000))
        {
            return 1;
        }
        if ((fVar2 > 0.50350000) AND (fVar2 < 0.51350000))
        {
            return 1;
        }
        if ((fVar2 > 0.51960000) AND (fVar2 < 0.52960000))
        {
            return 1;
        }
        if ((fVar2 > 0.53400000) AND (fVar2 < 0.54400000))
        {
            return 1;
        }
        if ((fVar2 > 0.54850000) AND (fVar2 < 0.55850000))
        {
            return 1;
        }
        if ((fVar2 > 0.56290000) AND (fVar2 < 0.57290000))
        {
            return 1;
        }
        if ((fVar2 > 0.57730000) AND (fVar2 < 0.58730000))
        {
            return 1;
        }
        if ((fVar2 > 0.59180000) AND (fVar2 < 0.60180000))
        {
            return 1;
        }
        if ((fVar2 > 0.60460000) AND (fVar2 < 0.61460000))
        {
            return 1;
        }
        if ((fVar2 > 0.61280000) AND (fVar2 < 0.62280000))
        {
            return 1;
        }
        if ((fVar2 > 0.62240000) AND (fVar2 < 0.63240000))
        {
            return 1;
        }
        if ((fVar2 > 0.63060000) AND (fVar2 < 0.64060000))
        {
            return 1;
        }
        if ((fVar2 > 0.64020000) AND (fVar2 < 0.65020000))
        {
            return 1;
        }
        if ((fVar2 > 0.64960000) AND (fVar2 < 0.65960000))
        {
            return 1;
        }
        if ((fVar2 > 0.65920000) AND (fVar2 < 0.66920000))
        {
            return 1;
        }
        if ((fVar2 > 0.66880000) AND (fVar2 < 0.67880000))
        {
            return 1;
        }
        if ((fVar2 > 0.67700000) AND (fVar2 < 0.68700000))
        {
            return 1;
        }
        if ((fVar2 > 0.68800000) AND (fVar2 < 0.69800000))
        {
            return 1;
        }
        if ((fVar2 > 0.69620000) AND (fVar2 < 0.70620000))
        {
            return 1;
        }
        if ((fVar2 > 0.70590000) AND (fVar2 < 0.71590000))
        {
            return 1;
        }
        if ((fVar2 > 0.71560000) AND (fVar2 < 0.72560000))
        {
            return 1;
        }
        if ((fVar2 > 0.72550000) AND (fVar2 < 0.73550000))
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

void sub_19276()
{
    if (l_U106 > 0)
    {
        if (IS_VEH_DRIVEABLE( l_U122 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U120, l_U122 )))
                {
                    sub_19355();
                }
            }
        }
    }
    switch (l_U106)
    {
        case 0:
        if (NOT (l_U108 == 0))
        {
            l_U106 = 1;
        }
        else
        {
            sub_4180();
        }
        break;
        case 1:
        sub_19592();
        break;
        case 2:
        sub_19875();
        break;
        case 3:
        sub_20360();
        break;
        case 4:
        sub_20765();
        break;
        case 5:
        sub_21420();
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U119, 29, ref l_U145 );
            if (l_U145 == 7)
            {
                GET_GAME_TIMER( ref l_U135 );
                l_U136 = l_U135 - l_U133;
                if ((l_U136 >= 10000) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, l_U120, 12.00000000, 12.00000000, 5.00000000, 0 ))))
                {
                    sub_19355();
                }
            }
        }
        else
        {
            sub_19355();
        }
        break;
        case 7:
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            GET_GAME_TIMER( ref l_U135 );
            l_U136 = l_U135 - l_U133;
            if (l_U136 >= 10000)
            {
                l_U106 = 11;
            }
        }
        else
        {
            l_U106 = 11;
        }
        break;
        case 10:
        l_U106 = 11;
        break;
        case 11:
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, l_U120, 12.00000000, 12.00000000, 5.00000000, 0 )))
            {
                l_U109 = 0;
            }
            else if (IS_VEH_DRIVEABLE( l_U122 ))
            {
                if (IS_CHAR_IN_CAR( l_U119, l_U122 ))
                {
                    l_U109 = 0;
                }
            }
        }
        else
        {
            l_U109 = 0;
        }
        break;
    }
    return;
}

void sub_19355()
{
    CLEAR_CHAR_TASKS( l_U119 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U120 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U121 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U122 );
    l_U120 = nil;
    l_U122 = nil;
    l_U121 = nil;
    if (l_U113)
    {
        g_U9273 = 0;
    }
    l_U106 = 0;
    l_U108 = 0;
    return;
}

void sub_19592()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( l_U120 )))
    {
        if (IS_VEH_DRIVEABLE( l_U122 ))
        {
            if (IS_CHAR_IN_CAR( l_U120, l_U122 ))
            {
                GET_CHAR_COORDINATES( l_U119, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (GET_CLOSEST_CAR_NODE( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 ))
                {
                    GET_CAR_SPEED( l_U122, ref uVar5 );
                    OPEN_SEQUENCE_TASK( ref l_U124 );
                    TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U122, 0, 21, 5.00000000, 1, 3, 3 );
                    TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U122, 0, 5, 0.00000000, 1, 3, 3 );
                    CLOSE_SEQUENCE_TASK( l_U124 );
                    TASK_PERFORM_SEQUENCE( l_U120, l_U124 );
                    CLEAR_SEQUENCE_TASK( l_U124 );
                    l_U106 = 2;
                }
            }
            else
            {
                l_U106 = 11;
            }
        }
        else
        {
            l_U106 = 11;
        }
    }
    else
    {
        l_U106 = 11;
    }
    return;
}

void sub_19875()
{
    float fVar2;
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    if (NOT (IS_CHAR_INJURED( l_U120 )))
    {
        if (IS_VEH_DRIVEABLE( l_U122 ))
        {
            if (IS_CHAR_IN_CAR( l_U120, l_U122 ))
            {
                GET_CAR_SPEED( l_U122, ref fVar2 );
                GET_SCRIPT_TASK_STATUS( l_U120, 29, ref l_U145 );
                if ((l_U145 == 7) || (fVar2 <= 1.00000000))
                {
                    GET_CAR_MODEL( l_U122, ref l_U125 );
                    GET_MODEL_DIMENSIONS( l_U125, ref vVar6, ref vVar3 );
                    vVar9 = {vVar3 - vVar6};
                    vVar9 = {vVar9 / 2.00000000};
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U122, -vVar9.x + 0.20000000, 0.00000000, 0.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U122, vVar9.x + 0.20000000, 0.00000000, 0.00000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                    GET_CHAR_COORDINATES( l_U119, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                    if ((VDIST( uVar18, uVar15 )) < (VDIST( uVar18, uVar12 )))
                    {
                        uVar12 = {uVar15};
                    }
                    OPEN_SEQUENCE_TASK( ref l_U124 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar12._fU0, uVar12._fU4, uVar12._fU8, 2, -1, 1.00000000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U120 );
                    TASK_STAND_STILL( 0, -2 );
                    CLOSE_SEQUENCE_TASK( l_U124 );
                    TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                    CLEAR_SEQUENCE_TASK( l_U124 );
                    l_U106 = 3;
                }
            }
            else
            {
                sub_19355();
            }
        }
        else
        {
            sub_19355();
        }
    }
    else
    {
        sub_19355();
    }
    return;
}

void sub_20360()
{
    float fVar2;

    if (NOT (IS_CHAR_INJURED( l_U120 )))
    {
        if (IS_VEH_DRIVEABLE( l_U122 ))
        {
            if (IS_CHAR_IN_CAR( l_U120, l_U122 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U119, 29, ref l_U145 );
                if (l_U145 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U119, ref l_U146 );
                    if (l_U146 > 1)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, l_U120, 20.00000000, 20.00000000, 10.00000000, 0 ))
                        {
                            GET_CAR_SPEED( l_U122, ref fVar2 );
                            if (fVar2 <= 1.00000000)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U124 );
                                if (HAVE_ANIMS_LOADED( l_U147 ))
                                {
                                    TASK_PLAY_ANIM( 0, "car_proposition", l_U147, 15.00000000, 0, 0, 0, 0, -1 );
                                }
                                CLOSE_SEQUENCE_TASK( l_U124 );
                                TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                                CLEAR_SEQUENCE_TASK( l_U124 );
                                GET_GAME_TIMER( ref l_U133 );
                                GENERATE_RANDOM_INT_IN_RANGE( 4000, 8000, ref l_U138 );
                                TASK_LOOK_AT_CHAR( l_U120, l_U119, 10000, 0 );
                                l_U106 = 4;
                            }
                        }
                        else
                        {
                            sub_19355();
                        }
                    }
                }
            }
            else
            {
                sub_19355();
            }
        }
        else
        {
            sub_19355();
        }
    }
    else
    {
        sub_19355();
    }
    return;
}

void sub_20765()
{
    float fVar2;

    if (NOT (IS_CHAR_INJURED( l_U120 )))
    {
        if (IS_VEH_DRIVEABLE( l_U122 ))
        {
            if (IS_CHAR_IN_CAR( l_U120, l_U122 ))
            {
                GET_CAR_SPEED( l_U122, ref fVar2 );
                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U120, l_U119, 15.00000000, 15.00000000, 5.00000000, 0 )) AND (fVar2 <= 1.00000000))
                {
                    GET_GAME_TIMER( ref l_U135 );
                    l_U136 = l_U135 - l_U133;
                    if (l_U136 >= l_U138)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 10000, ref l_U138 );
                        if (l_U138 > 3000)
                        {
                            CLEAR_CHAR_TASKS( l_U119 );
                            OPEN_SEQUENCE_TASK( ref l_U124 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U122, -2, 0 );
                            TASK_STAND_STILL( 0, -2 );
                            CLOSE_SEQUENCE_TASK( l_U124 );
                            TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                            CLEAR_SEQUENCE_TASK( l_U124 );
                            l_U106 = 5;
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS( l_U119 );
                            OPEN_SEQUENCE_TASK( ref l_U124 );
                            if (HAVE_ANIMS_LOADED( l_U147 ))
                            {
                                TASK_PLAY_ANIM( 0, "rejection", l_U147, 16.00000000, 0, 1, 1, 0, -1 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U124 );
                            TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                            CLEAR_SEQUENCE_TASK( l_U124 );
                            if (NOT (IS_CHAR_INJURED( l_U120 )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U122 ))
                                {
                                    if (IS_CHAR_IN_CAR( l_U120, l_U122 ))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U124 );
                                        TASK_CAR_DRIVE_WANDER( 0, l_U122, 10.00000000, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U124 );
                                        TASK_PERFORM_SEQUENCE( l_U120, l_U124 );
                                        CLEAR_SEQUENCE_TASK( l_U124 );
                                        GET_GAME_TIMER( ref l_U133 );
                                    }
                                }
                            }
                            TASK_CLEAR_LOOK_AT( l_U120 );
                            l_U106 = 6;
                        }
                    }
                }
                else
                {
                    TASK_CLEAR_LOOK_AT( l_U120 );
                    sub_19355();
                }
            }
            else
            {
                TASK_CLEAR_LOOK_AT( l_U120 );
                sub_19355();
            }
        }
        else
        {
            sub_19355();
        }
    }
    else
    {
        sub_19355();
    }
    return;
}

void sub_21420()
{
    if (NOT (IS_CHAR_INJURED( l_U120 )))
    {
        if (IS_VEH_DRIVEABLE( l_U122 ))
        {
            if (IS_CHAR_IN_CAR( l_U120, l_U122 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U119, 29, ref l_U145 );
                if (l_U145 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U119, ref l_U146 );
                    if (l_U146 > 0)
                    {
                        if (IS_CHAR_IN_CAR( l_U119, l_U122 ))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U124 );
                            TASK_CAR_DRIVE_WANDER( 0, l_U122, 10.00000000, 0 );
                            CLOSE_SEQUENCE_TASK( l_U124 );
                            TASK_PERFORM_SEQUENCE( l_U120, l_U124 );
                            CLEAR_SEQUENCE_TASK( l_U124 );
                            l_U106 = 7;
                            GET_GAME_TIMER( ref l_U133 );
                        }
                    }
                }
            }
            else
            {
                sub_19355();
            }
        }
        else
        {
            sub_19355();
        }
    }
    else
    {
        sub_19355();
    }
    return;
}

void sub_22073()
{
    if (IS_CHAR_INJURED( l_U121 ))
    {
        sub_19355();
    }
    else
    {
        switch (l_U106)
        {
            case 0:
            if (NOT (l_U108 == 0))
            {
                l_U106 = 1;
            }
            else
            {
                sub_4180();
            }
            break;
            case 1:
            switch (l_U107)
            {
                case 0:
                OPEN_SEQUENCE_TASK( ref l_U124 );
                TASK_GO_TO_CHAR( 0, l_U119, -1, 2.00000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U119 );
                CLOSE_SEQUENCE_TASK( l_U124 );
                TASK_PERFORM_SEQUENCE( l_U121, l_U124 );
                CLEAR_SEQUENCE_TASK( l_U124 );
                OPEN_SEQUENCE_TASK( ref l_U124 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U121 );
                TASK_STAND_STILL( 0, 999999 );
                CLOSE_SEQUENCE_TASK( l_U124 );
                TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                CLEAR_SEQUENCE_TASK( l_U124 );
                l_U107 = 1;
                break;
                case 1:
                GET_SCRIPT_TASK_STATUS( l_U121, 29, ref l_U145 );
                if (l_U145 == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U124 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U119 );
                    CLOSE_SEQUENCE_TASK( l_U124 );
                    TASK_PERFORM_SEQUENCE( l_U121, l_U124 );
                    CLEAR_SEQUENCE_TASK( l_U124 );
                    OPEN_SEQUENCE_TASK( ref l_U124 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U121 );
                    CLOSE_SEQUENCE_TASK( l_U124 );
                    TASK_PERFORM_SEQUENCE( l_U119, l_U124 );
                    CLEAR_SEQUENCE_TASK( l_U124 );
                    l_U107 = 2;
                }
                else
                {
                    MODIFY_CHAR_MOVE_STATE( l_U121, 2 );
                }
                break;
                case 2:
                GET_SCRIPT_TASK_STATUS( l_U121, 29, ref l_U145 );
                if (l_U145 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( l_U119, 29, ref l_U145 );
                    if (l_U145 == 7)
                    {
                        l_U114 = 1;
                        l_U107 = 3;
                    }
                }
                break;
                case 3:
                sub_19355();
                break;
            }
            break;
            case 10:
            if (NOT (IS_CHAR_INJURED( l_U121 )))
            {
                TASK_COMBAT( l_U121, sub_1089() );
                SET_CHAR_KEEP_TASK( l_U121, 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U121 );
            l_U121 = nil;
            l_U106 = 11;
            break;
            case 11:
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, l_U120, 12.00000000, 12.00000000, 5.00000000, 0 )))
                {
                    l_U109 = 0;
                }
            }
            break;
        }
    }
    return;
}

void sub_22869()
{
    return;
}
