void main()
{
    int I;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    boolean bVar11;

    l_U100 = 0;
    l_U101 = 0;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 1;
    l_U109 = 0;
    l_U110 = 1;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 1;
    l_U120 = l_U119;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U124 = 0;
    l_U125 = 0;
    l_U126 = 0;
    l_U127 = 0;
    l_U128 = 0;
    l_U132 = 0;
    l_U133 = 0;
    l_U134 = 0;
    l_U135 = 0;
    l_U136 = 0;
    l_U137 = 0;
    l_U138 = 0;
    l_U139 = 0;
    l_U140 = 0;
    l_U141 = 0;
    l_U142 = 0;
    l_U146 = 0.53500000;
    l_U150 = 0.00000000;
    l_U158 = 30.00000000;
    l_U159 = 40.00000000;
    l_U160 = 4.00000000;
    l_U161 = -4.00000000;
    l_U162 = 4.00000000;
    l_U163 = -89.00000000;
    l_U164 = 89.00000000;
    ProtectedSet(l_U167, 0.00000000);
    ProtectedSet(l_U168, 0.22000000);
    l_U171 = 0;
    l_U172 = 0;
    l_U174 = -1;
    l_U177 = 0;
    l_U178 = 0;
    l_U180 = 0;
    l_U181 = 0;
    l_U182 = 0;
    l_U183 = 0;
    l_U184 = 0;
    l_U185 = 0;
    l_U186 = 0;
    l_U187 = 0;
    l_U188 = 0;
    l_U190 = -1;
    l_U191 = 0;
    l_U192 = 0;
    l_U193 = 0;
    l_U305 = 1;
    l_U307 = nil;
    l_U308 = nil;
    l_U309 = nil;
    l_U331 = {0.00000000, 0.00000000, 0.11900000};
    l_U334 = {-8.00000000, 0.00000000, 0.00000000};
    l_U341 = -1;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_555();
    }
    sub_2610( ref l_U179 );
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U341 );
    sub_2650( "" );
    if (IS_PLAYER_PLAYING( sub_1516() ))
    {
        sub_2786( 0, sub_1572(), "NIKO", 0 );
    }
    if (IS_PLAYER_PLAYING( sub_1516() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1572() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1572(), ref l_U340 );
            if (NOT (IS_CAR_DEAD( l_U340 )))
            {
                GET_DRIVER_OF_CAR( l_U340, ref l_U195 );
                if (l_U340 == g_U2239)
                {
                    if (DOES_CHAR_EXIST( l_U195 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            sub_2786( 1, l_U195, "CABBY", 0 );
                            SET_AMBIENT_VOICE_NAME( l_U195, "CABBY" );
                        }
                    }
                }
            }
        }
    }
    while (sub_3106())
    {
        if (NOT l_U142)
        {
            if (LOAD_ALL_PATH_NODES( 1 ))
            {
                if (NOT l_U123)
                {
                    l_U126 = 1;
                    l_U123 = 1;
                }
            }
        }
        if (NOT l_U119)
        {
            sub_3506();
        }
        if (NOT (IS_CHAR_INJURED( l_U195 )))
        {
            if ((NOT sub_3604()) || (sub_2238( l_U199 )))
            {
                if (NOT (l_U190 == -1))
                {
                    switch (l_U190)
                    {
                        case 0:
                        if (NOT g_U2225)
                        {
                            SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_WHERE_TO", 1, 1, 0 );
                            l_U190 = 20;
                        }
                        else if (NOT g_U2231)
                        {
                            if (g_U2240 < 2)
                            {
                                if (sub_3949( "TAX1_PICK", g_U2240, 1, ref l_U199, 2, 1 ))
                                {
                                    g_U2240++;
                                    l_U190 = 20;
                                }
                            }
                            else if (sub_4950( "TAX1_ARR", ref l_U199, 2, 1 ))
                            {
                                l_U190 = 20;
                            }
                        }
                        else if (g_U2241 < 2)
                        {
                            if (sub_3949( "TAX1_BETTER", g_U2241, 1, ref l_U199, 2, 1 ))
                            {
                                g_U2241++;
                                l_U190 = 20;
                            }
                        }
                        else if (sub_4950( "TAX1_ARR", ref l_U199, 2, 1 ))
                        {
                            l_U190 = 20;
                        };;;;
                        break;
                        case 1:
                        if (IS_PLAYER_PLAYING( sub_1516() ))
                        {
                            sub_5193( sub_1572() );
                            l_U190 = 2;
                        }
                        break;
                        case 2:
                        if (NOT sub_20464())
                        {
                            if (NOT g_U2225)
                            {
                                SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_BEGIN_JOURNEY", 1, 1, 0 );
                                l_U190 = 20;
                            }
                            else if (sub_4950( "TAX1_GO", ref l_U199, 2, 1 ))
                            {
                                l_U190 = 20;
                            }
                        }
                        break;
                        case 3:
                        if (NOT g_U2225)
                        {
                            SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_BANTER", 0, 0, 0 );
                            l_U190 = 20;
                        }
                        else
                        {
                            switch (g_U2242)
                            {
                                case 0:
                                if (sub_4950( "TAXI_BANT1", ref l_U199, 2, 1 ))
                                {
                                    l_U190 = 20;
                                    g_U2242++;
                                }
                                break;
                                case 1:
                                if (sub_4950( "TAXI_BANT2", ref l_U199, 2, 1 ))
                                {
                                    l_U190 = 20;
                                    g_U2242++;
                                }
                                break;
                                case 2:
                                if (sub_4950( "TAXI_BANT3", ref l_U199, 2, 1 ))
                                {
                                    l_U190 = 20;
                                    g_U2242++;
                                }
                                break;
                                case 3:
                                if (sub_4950( "TAXI_BANT4", ref l_U199, 2, 1 ))
                                {
                                    l_U190 = 20;
                                    g_U2242++;
                                }
                                break;
                                case 4:
                                if (sub_4950( "TAXI_BANT5", ref l_U199, 2, 1 ))
                                {
                                    l_U190 = 20;
                                    g_U2242++;
                                }
                                break;
                                default:
                                l_U190 = 20;
                                break;
                            }
                        }
                        break;
                        case 4:
                        if (NOT g_U2225)
                        {
                            SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_ARRIVE_AT_DEST", 1, 1, 0 );
                            l_U190 = 21;
                        }
                        else if (sub_4950( "TAX1_OUT", ref l_U199, 2, 1 ))
                        {
                            l_U190 = 21;
                        }
                        break;
                        case 5:
                        SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_CLOSE_AS_POSS", 1, 1, 0 );
                        l_U190 = 20;
                        break;
                        case 6:
                        SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_NO_MONEY", 1, 1, 0 );
                        l_U190 = 20;
                        break;
                        case 7:
                        if (IS_PLAYER_PLAYING( sub_1516() ))
                        {
                            bVar11 = IS_AMBIENT_SPEECH_DISABLED( sub_1572() );
                            if (bVar11)
                            {
                                STOP_PED_SPEAKING( sub_1572(), 0 );
                            }
                            SAY_AMBIENT_SPEECH( sub_1572(), "TAXI_CHANGE_DEST", 1, 1, 0 );
                            if (bVar11)
                            {
                                STOP_PED_SPEAKING( sub_1572(), 1 );
                            }
                            l_U190 = 8;
                        }
                        break;
                        case 8:
                        if (NOT sub_20464())
                        {
                            if (IS_PLAYER_PLAYING( sub_1516() ))
                            {
                                sub_5193( sub_1572() );
                                l_U190 = 9;
                            }
                        }
                        break;
                        case 9:
                        if (NOT sub_20464())
                        {
                            if (NOT g_U2225)
                            {
                                SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_CHANGE_DEST", 1, 1, 0 );
                                l_U190 = 20;
                            }
                            else if (sub_4950( "TAX1_GO", ref l_U199, 2, 1 ))
                            {
                                l_U190 = 20;
                            }
                        }
                        break;
                        case 10:
                        SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_RUN_AWAY", 1, 1, 0 );
                        l_U190 = 20;
                        break;
                        case 11:
                        SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_GET_OUT_EARLY", 1, 1, 0 );
                        l_U190 = 20;
                        break;
                        case 12:
                        if (NOT g_U2225)
                        {
                            SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_TRASHED", 1, 1, 0 );
                            l_U190 = 20;
                        }
                        break;
                        case 13:
                        if (NOT l_U138)
                        {
                            SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_AFFORD_PART_JOURNEY", 1, 1, 0 );
                            PRINT_HELP( "TX_H13" );
                            l_U138 = 1;
                        }
                        l_U190 = 20;
                        break;
                        case 14:
                        SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_TAKE_FIRST_CAB", 1, 1, 0 );
                        l_U190 = 20;
                        break;
                        case 15:
                        if (NOT g_U2225)
                        {
                            if (sub_4950( "TAX1_RADIO", ref l_U199, 1, 1 ))
                            {
                                l_U190 = 16;
                            }
                        }
                        else if (sub_4950( "TAX1_RADIO", ref l_U199, 1, 1 ))
                        {
                            l_U190 = 16;
                        }
                        break;
                        case 16:
                        if (NOT sub_20464())
                        {
                            if ((NOT IS_RADIO_RETUNING()) AND (l_U188 > 4000.00000000))
                            {
                                I = GET_PLAYER_RADIO_STATION_INDEX();
                                if (IS_PLAYER_PLAYING( sub_1516() ))
                                {
                                    bVar11 = IS_AMBIENT_SPEECH_DISABLED( sub_1572() );
                                    if (bVar11)
                                    {
                                        STOP_PED_SPEAKING( sub_1572(), 0 );
                                    }
                                    switch (I)
                                    {
                                        case 0:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_VIBE", 1, 1, 0 );
                                        break;
                                        case 1:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_LRR", 1, 1, 0 );
                                        break;
                                        case 2:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_JNR", 1, 1, 0 );
                                        break;
                                        case 3:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_MASSIVEB", 1, 1, 0 );
                                        break;
                                        case 4:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_K109", 1, 1, 0 );
                                        break;
                                        case 5:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_WKTT", 1, 1, 0 );
                                        break;
                                        case 6:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_LCHC", 1, 1, 0 );
                                        break;
                                        case 7:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_JOURNEY", 1, 1, 0 );
                                        break;
                                        case 8:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_FUSION", 1, 1, 0 );
                                        break;
                                        case 9:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_BEAT", 1, 1, 0 );
                                        break;
                                        case 10:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_BROKER", 1, 1, 0 );
                                        break;
                                        case 11:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_VLADIVOSTOK", 1, 1, 0 );
                                        break;
                                        case 12:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_PLR", 1, 1, 0 );
                                        break;
                                        case 13:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_SANJUAN", 1, 1, 0 );
                                        break;
                                        case 14:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_FRANCOIS", 1, 1, 0 );
                                        break;
                                        case 15:
                                        SAY_AMBIENT_SPEECH( sub_1572(), "RADIO_REQ_CLASSICS", 1, 1, 0 );
                                        break;
                                    }
                                    if (bVar11)
                                    {
                                        STOP_PED_SPEAKING( sub_1572(), 1 );
                                    }
                                }
                                if (g_U2225)
                                {
                                    l_U190 = 17;
                                }
                                else
                                {
                                    l_U190 = 20;
                                }
                            }
                        }
                        break;
                        case 17:
                        if (NOT sub_20464())
                        {
                            if (sub_4950( "TAX1_RESP", ref l_U199, 2, 1 ))
                            {
                                l_U190 = 20;
                            }
                        }
                        break;
                        case 18:
                        if (IS_PLAYER_PLAYING( sub_1516() ))
                        {
                            bVar11 = IS_AMBIENT_SPEECH_DISABLED( sub_1572() );
                            if (bVar11)
                            {
                                STOP_PED_SPEAKING( sub_1572(), 0 );
                            }
                            SAY_AMBIENT_SPEECH( sub_1572(), "TAXI_STEP_ON_IT", 1, 1, 0 );
                            if (bVar11)
                            {
                                STOP_PED_SPEAKING( sub_1572(), 1 );
                            }
                            l_U190 = 19;
                        }
                        break;
                        case 19:
                        if (NOT sub_20464())
                        {
                            if (NOT g_U2225)
                            {
                                SAY_AMBIENT_SPEECH( l_U195, "TAXI_D_SPEED_UP", 1, 1, 0 );
                                l_U190 = 20;
                            }
                            else
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                switch (I)
                                {
                                    case 0:
                                    if (sub_3949( "TAX1_RESP", 1, 1, ref l_U199, 2, 1 ))
                                    {
                                        l_U190 = 20;
                                    }
                                    break;
                                    case 1:
                                    if (sub_3949( "TAX1_RESP", 5, 1, ref l_U199, 2, 1 ))
                                    {
                                        l_U190 = 20;
                                    }
                                    break;
                                }
                            }
                        }
                        break;
                        case 21:
                        if (IS_PLAYER_PLAYING( sub_1516() ))
                        {
                            if (NOT sub_20464())
                            {
                                bVar11 = IS_AMBIENT_SPEECH_DISABLED( sub_1572() );
                                if (bVar11)
                                {
                                    STOP_PED_SPEAKING( sub_1572(), 0 );
                                }
                                SAY_AMBIENT_SPEECH( sub_1572(), "THANKS", 1, 1, 0 );
                                if (bVar11)
                                {
                                    STOP_PED_SPEAKING( sub_1572(), 1 );
                                }
                                l_U190 = 20;
                            }
                        }
                        break;
                        case 20:
                        if (NOT sub_20464())
                        {
                            l_U190 = -1;
                        }
                        break;
                    }
                }
            }
            else
            {
                l_U190 = -1;
            }
        }
        switch (l_U171)
        {
            case 0:
            g_U2230 = 0;
            if (IS_PLAYER_PLAYING( sub_1516() ))
            {
                BLOCK_PED_WEAPON_SWITCHING( sub_1572(), 1 );
                GET_CHAR_COORDINATES( sub_1572(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                l_U169 = GET_MAP_AREA_FROM_COORDS( uVar8 );
                l_U170 = l_U169;
            }
            g_U2225 = 0;
            if (sub_23605( l_U340 ))
            {
                g_U2225 = 1;
            }
            if (NOT g_U2225)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_1516(), 0 ))
                {
                    l_U111 = 1;
                    l_U175 = 5;
                    sub_23693( 3 );
                    break;
                }
            }
            if (l_U110)
            {
                l_U306 = GET_TXD( "blips" );
            }
            if (IS_VEH_DRIVEABLE( l_U340 ))
            {
                GET_CAR_COORDINATES( l_U340, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            }
            if (IS_CAR_MODEL( l_U340, -956048545 ))
            {
                l_U316 = {0.01000000, 0.51500000, 0.33300000};
                l_U328 = {-0.52000000, -1.00000000, 0.50000000};
                l_U161 = -12.00000000;
                l_U162 = 35.00000000;
                l_U163 = -130.00000000;
                l_U164 = 130.00000000;
            }
            if (IS_CAR_MODEL( l_U340, 1208856469 ))
            {
                l_U316 = {0.02400000, 0.69600000, 0.29200000};
                l_U328 = {-0.52000000, -0.99500000, 0.48000000};
                l_U161 = -12.00000000;
                l_U162 = 32.00000000;
                l_U163 = -130.00000000;
                l_U164 = 130.00000000;
            }
            if (IS_CAR_MODEL( l_U340, 1884962369 ))
            {
                l_U316 = {0.05700000, 0.84900000, 0.37000000};
                l_U328 = {-0.51100000, -0.81700000, 0.60200000};
                l_U161 = -12.00000000;
                l_U162 = 36.00000000;
                l_U163 = -130.00000000;
                l_U164 = 130.00000000;
            }
            if (sub_23605( l_U340 ))
            {
                if (IS_CAR_MODEL( l_U340, -1932515764 ))
                {
                    l_U316 = {0.00000000, 0.40300000, 0.33300000};
                    l_U328 = {-0.52000000, -1.03000000, 0.54000000};
                    l_U161 = -12.00000000;
                    l_U162 = 32.00000000;
                    l_U163 = -130.00000000;
                    l_U164 = 130.00000000;
                }
                else
                {
                    l_U316 = {0.00000000, 0.63300000, 0.51300000};
                    l_U328 = {-0.52000000, -0.93000000, 0.75200000};
                    l_U161 = -12.00000000;
                    l_U162 = 35.00000000;
                    l_U163 = -130.00000000;
                    l_U164 = 130.00000000;
                }
            }
            l_U159 = 40.00000000;
            l_U322 = {0.00000000, -1.51600000, 0.33500000};
            l_U325 = {0.00000000, -1.03200000, 0.30400000};
            if (NOT (IS_CHAR_INJURED( l_U195 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U195, 48, ref l_U197 );
                if (l_U197 == 7)
                {
                    if (IS_VEH_DRIVEABLE( l_U340 ))
                    {
                        TASK_CAR_TEMP_ACTION( l_U195, l_U340, 6, 15000 );
                    }
                }
            }
            for ( I = 0; I < 3; I++ )
            {
                if (NOT (IS_CAR_DEAD( l_U340 )))
                {
                    if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U340, I )))
                    {
                        GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U340, I, ref l_U196 );
                        if (NOT (IS_CHAR_INJURED( l_U196 )))
                        {
                            if ((NOT (IS_GROUP_MEMBER( l_U196, sub_1346() ))) AND (NOT (l_U196 == sub_1572())))
                            {
                                TASK_LEAVE_CAR_IMMEDIATELY( l_U196, l_U340 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U195 )))
            {
                FORCE_FULL_VOICE( l_U195 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U195, 0 );
                GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref I );
                SET_CHAR_MONEY( l_U195, I );
                CLEAR_CHAR_TASKS( l_U195 );
                CLEAR_CHAR_SECONDARY_TASK( l_U195 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U195, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U195, 1 );
                if (IS_VEH_DRIVEABLE( l_U340 ))
                {
                    TASK_CAR_TEMP_ACTION( l_U195, l_U340, 6, 99999999 );
                    SET_CAR_HEALTH( l_U340, 3000 );
                    SET_ENGINE_HEALTH( l_U340, 3000 );
                    SET_PETROL_TANK_HEALTH( l_U340, 3000 );
                }
                if (NOT (IS_PED_A_MISSION_PED( l_U195 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U195 );
                }
            }
            PRIORITIZE_STREAMING_REQUEST();
            REQUEST_ANIMS( "amb@taxi" );
            PRIORITIZE_STREAMING_REQUEST();
            REQUEST_MODEL( 2120484425 );
            while ((NOT (HAVE_ANIMS_LOADED( "amb@taxi" ))) || (NOT (HAS_MODEL_LOADED( 2120484425 ))))
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            while ((sub_24981()) AND (TIMERA() < 5000))
            {
                WAIT( 0 );
            }
            l_U151[0] = 0.27000000;
            l_U151[1] = 0.34700000;
            l_U151[2] = 0.43400000;
            l_U151[3] = 0.52100000;
            l_U151[4] = 0.60500000;
            STORE_SCORE( sub_1516(), ref l_U177 );
            if (g_U2225)
            {
                ProtectedSet(l_U167, 0.00000000);
            }
            else
            {
                ProtectedSet(l_U167, 2.00000000);
            }
            if (NOT (IS_CHAR_INJURED( l_U195 )))
            {
                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U195, "taxi_driver_chat_in", "amb@taxi", 1000.00000000, 0, 0, 0, 1, -1 );
            }
            GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U341 );
            sub_25366();
            l_U100 = 1;
            l_U107 = 0;
            l_U124 = 0;
            l_U125 = 0;
            if (DOES_GROUP_EXIST( sub_1346() ))
            {
                GET_GROUP_SIZE( sub_1346(), ref iVar3, ref I );
                if (I > 0)
                {
                    l_U124 = 1;
                }
            }
            l_U100 = 1;
            g_U2227 = 0;
            SETTIMERA( 0 );
            sub_23693( 1 );
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U195 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U195, 1 );
                BLOCK_CHAR_AMBIENT_ANIMS( l_U195, 1 );
            }
            switch (l_U172)
            {
                case 0:
                sub_29767();
                if (IS_VEH_DRIVEABLE( l_U340 ))
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U194 )))
                    {
                        CREATE_OBJECT( 2120484425, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref l_U194, 1 );
                        ATTACH_OBJECT_TO_CAR( l_U194, l_U340, 0, l_U316, 0.00000000, 0.00000000, 0.00000000 );
                        LOCK_CAR_DOORS( l_U340, 4 );
                        SET_TAXI_LIGHTS( l_U340, 0 );
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U340 ))
                {
                    if (DOES_OBJECT_EXIST( l_U194 ))
                    {
                        GET_KEY_FOR_CAR_IN_ROOM( l_U340, ref l_U192 );
                        if (NOT (l_U192 == 0))
                        {
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U194, l_U192 );
                        }
                    }
                }
                if (NOT (DOES_CAM_EXIST( l_U143 )))
                {
                    CREATE_CAM( 14, ref l_U143 );
                }
                if (DOES_OBJECT_EXIST( l_U194 ))
                {
                    ATTACH_CAM_TO_OBJECT( l_U143, l_U194 );
                    SET_CAM_ATTACH_OFFSET( l_U143, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U143, 1 );
                }
                sub_39943( l_U340, ref l_U143, l_U334 );
                SET_CAM_FOV( l_U143, l_U158 );
                SET_CAM_ACTIVE( l_U143, 1 );
                SET_CAM_PROPAGATE( l_U143, 1 );
                SET_INTERP_FROM_GAME_TO_SCRIPT( 1, 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_PTFX_CAM_INSIDE_VEHICLE( 1 );
                SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 1 );
                if (IS_PLAYER_PLAYING( sub_1516() ))
                {
                    SET_PLAYER_CONTROL( sub_1516(), 0 );
                }
                GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U174 );
                while (l_U174 == -1)
                {
                    GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U174 );
                    if (l_U174 == -1)
                    {
                        WAIT( 0 );
                    }
                }
                if (l_U108)
                {
                    SET_TEXT_RENDER_ID( l_U174 );
                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                }
                l_U138 = 0;
                l_U193 = 0;
                l_U100 = 1;
                SETTIMERA( 0 );
                l_U172++;
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( l_U195 )))
                {
                    switch (l_U193)
                    {
                        case 0:
                        if (((IS_CHAR_PLAYING_ANIM( l_U195, "amb@taxi", "taxi_driver_chat_in" )) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U195, "amb@taxi", "taxi_driver_chat" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U195, "amb@taxi", "taxi_driver_chat_out" ))))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U195, "amb@taxi", "taxi_driver_chat_in", ref fVar7 );
                            if (fVar7 > 0.99000000)
                            {
                                l_U190 = 0;
                                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U195, "taxi_driver_chat", "amb@taxi", 1000.00000000, 0, 0, 0, 1, -1 );
                                SETTIMERA( 0 );
                                l_U193++;
                            }
                        }
                        break;
                        case 1:
                        if (((IS_CHAR_PLAYING_ANIM( l_U195, "amb@taxi", "taxi_driver_chat" )) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U195, "amb@taxi", "taxi_driver_chat_in" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U195, "amb@taxi", "taxi_driver_chat_out" ))))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U195, "amb@taxi", "taxi_driver_chat", ref fVar7 );
                            if (fVar7 > 0.99000000)
                            {
                                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U195, "taxi_driver_chat_out", "amb@taxi", 1000.00000000, 0, 0, 0, 0, -1 );
                                if (l_U191 == 0)
                                {
                                    l_U191++;
                                }
                                l_U193++;
                            }
                        }
                        break;
                    }
                }
                if (l_U191 == 0)
                {
                    if (TIMERA() > 5000)
                    {
                        l_U191 = 1;
                    }
                }
                if (l_U191 == 1)
                {
                    if (NOT (DOES_CAM_EXIST( l_U144 )))
                    {
                        CREATE_CAM( 14, ref l_U144 );
                        ATTACH_CAM_TO_OBJECT( l_U144, l_U194 );
                        SET_CAM_ATTACH_OFFSET( l_U144, l_U325._fU0, l_U325._fU4, l_U325._fU8 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U144, 1 );
                        sub_39943( l_U340, ref l_U144, l_U334 );
                        SET_CAM_FOV( l_U144, l_U158 );
                    }
                    else
                    {
                        sub_39943( l_U340, ref l_U144, l_U334 );
                        SET_CAM_FOV( l_U144, l_U158 );
                        if (sub_41213( ref l_U143, ref l_U144, 2000 ))
                        {
                            l_U322 = {l_U325};
                            DESTROY_CAM( l_U144 );
                            SET_CAM_ACTIVE( l_U143, 1 );
                            SET_CAM_PROPAGATE( l_U143, 1 );
                            l_U191++;
                        }
                    }
                }
                if (DOES_CAM_EXIST( l_U143 ))
                {
                    if (DOES_OBJECT_EXIST( l_U194 ))
                    {
                        ATTACH_CAM_TO_OBJECT( l_U143, l_U194 );
                        SET_CAM_ATTACH_OFFSET( l_U143, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U143, 1 );
                        sub_39943( l_U340, ref l_U143, l_U334 );
                        SET_CAM_FOV( l_U143, l_U158 );
                    }
                }
                if (NOT sub_41669())
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (l_U114)
                        {
                            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H08" )))
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                                PRINT_HELP_FOREVER( "TX_H08" );
                            }
                        }
                        else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H04" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                            PRINT_HELP_FOREVER( "TX_H04" );
                        }
                    }
                }
                else
                {
                    sub_572();
                }
                sub_41873( 0 );
                sub_29767();
                sub_42859();
                if (NOT l_U100)
                {
                    if (((IS_CONTROL_PRESSED( 2, 77 )) AND (NOT l_U104)) AND (NOT sub_41669()))
                    {
                        if (l_U180 > 0)
                        {
                            l_U100 = 1;
                            if (IS_SCORE_GREATER( sub_1516(), (FLOOR( ProtectedGet(l_U167) )) - 1 ))
                            {
                                sub_572();
                                if (NOT (IS_CHAR_INJURED( l_U195 )))
                                {
                                    l_U190 = 1;
                                }
                                l_U106 = 0;
                                g_U2230 = 0;
                                l_U107 = 0;
                                l_U105 = 0;
                                sub_43741( ref l_U205[l_U173]._fU0, ref l_U310, ref l_U147 );
                                if (DOES_BLIP_EXIST( l_U98 ))
                                {
                                    if (l_U127)
                                    {
                                        SET_BLIP_AS_SHORT_RANGE( l_U98, 1 );
                                        l_U127 = 0;
                                    }
                                }
                                l_U98 = l_U205[l_U173]._fU0;
                                if (DOES_BLIP_EXIST( l_U98 ))
                                {
                                    if (IS_BLIP_SHORT_RANGE( l_U98 ))
                                    {
                                        SET_BLIP_AS_SHORT_RANGE( l_U98, 0 );
                                        l_U127 = 1;
                                    }
                                }
                                if (NOT (IS_CHAR_INJURED( l_U195 )))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U340 ))
                                    {
                                        CLOSE_ALL_CAR_DOORS( l_U340 );
                                        CLEAR_CHAR_SECONDARY_TASK( l_U195 );
                                        sub_46431( ref l_U195, ref l_U340, l_U310 );
                                    }
                                }
                                sub_41873( 1 );
                                l_U178 = 0;
                                if (g_U2225)
                                {
                                    ProtectedSet(l_U167, 0.00000000);
                                }
                                else
                                {
                                    ProtectedSet(l_U167, 2.00000000);
                                }
                                ProtectedSet(l_U168, 0.22000000);
                                SETTIMERA( 0 );
                                if (NOT (IS_CHAR_INJURED( l_U195 )))
                                {
                                    CLEAR_CHAR_SECONDARY_TASK( l_U195 );
                                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U195, "Taxi_driver_Meter_Press", "amb@taxi", 8.00000000, 0, 0, 0, 0, -1 );
                                }
                                if (IS_VEH_DRIVEABLE( l_U340 ))
                                {
                                    LOCK_CAR_DOORS( l_U340, 4 );
                                }
                                if (IS_PLAYER_PLAYING( sub_1516() ))
                                {
                                    SET_PLAYER_CONTROL( sub_1516(), 1 );
                                    SET_PLAYER_CAN_DO_DRIVE_BY( sub_1516(), 1 );
                                }
                                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 4 );
                                l_U187 = 60000;
                                l_U188 = 30000;
                                if (l_U119)
                                {
                                    sub_46794();
                                }
                                l_U322 = {l_U325};
                                if (DOES_CAM_EXIST( l_U144 ))
                                {
                                    DESTROY_CAM( l_U144 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U195 )))
                                {
                                    BLOCK_CHAR_GESTURE_ANIMS( l_U195, 0 );
                                    BLOCK_CHAR_AMBIENT_ANIMS( l_U195, 0 );
                                }
                                sub_23693( 2 );
                                break;
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U195 )))
                            {
                                BLOCK_CHAR_AMBIENT_ANIMS( l_U195, 0 );
                            }
                            l_U175 = 1;
                            sub_23693( 3 );
                            break;;
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( l_U195, 0 );
                        }
                        l_U175 = 2;
                        sub_23693( 3 );
                        break;;
                    }
                }
                if (NOT l_U100)
                {
                    if ((IS_CONTROL_PRESSED( 2, 43 )) AND (NOT sub_41669()))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( l_U195 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( l_U195, 0 );
                        }
                        l_U100 = 1;
                        l_U175 = 2;
                        sub_23693( 3 );
                        break;
                    }
                }
                break;
            }
            break;
            case 2:
            if (l_U141)
            {
                if (LOAD_ALL_PATH_NODES( 1 ))
                {
                    sub_43741( ref l_U98, ref l_U310, ref l_U147 );
                    if (NOT l_U141)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U340 ))
                            {
                                if (IS_CHAR_IN_CAR( l_U195, l_U340 ))
                                {
                                    if ((g_U2230) AND (NOT l_U140))
                                    {
                                        CLEAR_CHAR_TASKS( l_U195 );
                                        sub_47312( ref l_U195, ref l_U340, l_U310 );
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( l_U195 );
                                        sub_46431( ref l_U195, ref l_U340, l_U310 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            sub_47399();
            if (sub_41669())
            {
                sub_572();
            }
            else if ((l_U190 == -1) || (l_U190 == 3))
            {
                sub_49439();
            }
            if (l_U132)
            {
                if (DOES_BLIP_EXIST( l_U98 ))
                {
                    SET_ROUTE( l_U98, 1 );
                }
                l_U132 = 0;
            }
            if (l_U101)
            {
                uVar8 = {l_U310};
                uVar8._fU8 += 10.00000000;
                LINE( l_U310._fU0, l_U310._fU4, l_U310._fU8, uVar8._fU0, uVar8._fU4, uVar8._fU8 );
            }
            sub_29767();
            GET_FRAME_TIME( ref l_U149 );
            l_U178 += ROUND( l_U149 * 1000.00000000 );
            l_U187 += ROUND( l_U149 * 1000.00000000 );
            l_U188 += ROUND( l_U149 * 1000.00000000 );
            if (NOT l_U133)
            {
                if (g_U9890 == 9)
                {
                    ProtectedSet(l_U167, ProtectedGet(l_U167) + 5.00000000);
                    l_U133 = 1;
                }
            }
            if (l_U190 == -1)
            {
                if (NOT g_U2225)
                {
                    if (l_U187 > 120000)
                    {
                        l_U190 = 3;
                        l_U187 = 0;
                    }
                }
                else if (NOT l_U118)
                {
                    if (l_U187 > 65000)
                    {
                        l_U190 = 3;
                        l_U187 = 0;
                        l_U118 = 1;
                    }
                }
            }
            if (NOT l_U105)
            {
                if ((IS_CONTROL_PRESSED( 2, 52 )) || (IS_CONTROL_PRESSED( 2, 53 )))
                {
                    if (NOT sub_41669())
                    {
                        if (l_U188 > 30000)
                        {
                            l_U190 = 15;
                        }
                        l_U188 = 0;
                    }
                }
            }
            if (NOT g_U2225)
            {
                if (l_U178 > 5000)
                {
                    ProtectedSet(l_U167, ProtectedGet(l_U167) + ProtectedGet(l_U168));
                    l_U178 = 0;
                }
            }
            else
            {
                ProtectedSet(l_U167, 0.00000000);
            }
            if (NOT g_U2225)
            {
                if (IS_PLAYER_PLAYING( sub_1516() ))
                {
                    GET_CHAR_COORDINATES( sub_1572(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                }
                GET_DISTANCE_BETWEEN_COORDS_2D( uVar8._fU0, uVar8._fU4, l_U319._fU0, l_U319._fU4, ref fVar7 );
                if (fVar7 > 50.00000000)
                {
                    INCREMENT_FLOAT_STAT_NO_MESSAGE( 86, fVar7 );
                    ProtectedSet(l_U167, ProtectedGet(l_U167) + ProtectedGet(l_U168));
                    l_U178 = 0;
                    l_U319 = {uVar8};
                }
            }
            else
            {
                ProtectedSet(l_U167, 0.00000000);
            }
            if (NOT (IS_SCORE_GREATER( sub_1516(), (FLOOR( ProtectedGet(l_U167) )) - 1 )))
            {
                STORE_SCORE( sub_1516(), ref I );
                ProtectedSet(l_U167, TO_FLOAT( I ));
                ADD_SCORE( sub_1516(), I * -1 );
                INCREMENT_INT_STAT_NO_MESSAGE( 98, I );
                if (NOT (IS_CHAR_INJURED( l_U195 )))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                    SET_CHAR_MONEY( l_U195, I + iVar3 );
                }
                l_U113 = 1;
                l_U175 = 1;
                sub_23693( 3 );
                break;
            }
            if (IS_VEH_DRIVEABLE( l_U340 ))
            {
                if (DOES_GROUP_EXIST( sub_1346() ))
                {
                    GET_GROUP_SIZE( sub_1346(), ref iVar3, ref I );
                    if (I > 0)
                    {
                        GET_GROUP_MEMBER( sub_1346(), 0, ref l_U196 );
                        if (NOT (IS_CHAR_INJURED( l_U196 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U196, l_U340 )))
                            {
                                if (NOT (IS_CHAR_ON_SCREEN( l_U196 )))
                                {
                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 1 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 1 );
                                    }
                                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 2 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 2 );
                                    }
                                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 0 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 0 );
                                    };;;
                                }
                            }
                        }
                        if (I > 1)
                        {
                            GET_GROUP_MEMBER( sub_1346(), 1, ref l_U196 );
                            if (NOT (IS_CHAR_INJURED( l_U196 )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U196, l_U340 )))
                                {
                                    if (NOT (IS_CHAR_ON_SCREEN( l_U196 )))
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 1 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 1 );
                                        }
                                        else if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 2 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 2 );
                                        }
                                        else if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 0 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 0 );
                                        };;;
                                    }
                                }
                            }
                        }
                        CLOSE_ALL_CAR_DOORS( l_U340 );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U195 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U195, 49, ref l_U197 );
                if (l_U197 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( l_U195, 48, ref l_U197 );
                    if ((l_U197 == 7) || (TIMERA() > 2000))
                    {
                        if (IS_VEH_DRIVEABLE( l_U340 ))
                        {
                            if (LOCATE_CAR_2D( l_U340, l_U310._fU0, l_U310._fU4, 5.00000000, 5.00000000, 0 ))
                            {
                                ADD_SCORE( sub_1516(), (FLOOR( ProtectedGet(l_U167) )) * -1 );
                                INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( ProtectedGet(l_U167) ) );
                                if (NOT (IS_CHAR_INJURED( l_U195 )))
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                                    SET_CHAR_MONEY( l_U195, (FLOOR( ProtectedGet(l_U167) )) + iVar3 );
                                }
                                l_U113 = 1;
                                l_U175 = 0;
                                sub_23693( 3 );
                                break;
                            }
                            else if (IS_CHAR_IN_CAR( l_U195, l_U340 ))
                            {
                                if ((g_U2230) AND (NOT l_U140))
                                {
                                    CLEAR_CHAR_TASKS( l_U195 );
                                    sub_47312( ref l_U195, ref l_U340, l_U310 );
                                }
                                else
                                {
                                    CLEAR_CHAR_TASKS( l_U195 );
                                    sub_46431( ref l_U195, ref l_U340, l_U310 );
                                }
                            }
                        }
                    }
                }
                else if (NOT l_U140)
                {
                    if (g_U9890 == 9)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            CLEAR_CHAR_TASKS( l_U195 );
                            l_U140 = 1;
                        }
                    }
                }
                else if (NOT (g_U9890 == 9))
                {
                    if (NOT (IS_CHAR_INJURED( l_U195 )))
                    {
                        CLEAR_CHAR_TASKS( l_U195 );
                        l_U140 = 0;
                    }
                }
                if (g_U2227)
                {
                    ADD_SCORE( sub_1516(), (FLOOR( ProtectedGet(l_U167) )) * -1 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( ProtectedGet(l_U167) ) );
                    if (NOT (IS_CHAR_INJURED( l_U195 )))
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                        SET_CHAR_MONEY( l_U195, (FLOOR( ProtectedGet(l_U167) )) + iVar3 );
                    }
                    l_U113 = 1;
                    l_U175 = 0;
                    g_U2227 = 0;
                    sub_23693( 3 );
                    break;
                }
                if (NOT (IS_CAR_DEAD( l_U340 )))
                {
                    if (NOT (IS_CAR_STOPPED_AT_TRAFFIC_LIGHTS( l_U340 )))
                    {
                        if (CHECK_STUCK_TIMER( l_U340, 3, 3000 ))
                        {
                            if (NOT (CHECK_STUCK_TIMER( l_U340, 0, 3000 )))
                            {
                                CLEAR_CHAR_TASKS( l_U195 );
                                TASK_CAR_TEMP_ACTION( l_U195, l_U340, 3, 2000 );
                                SETTIMERA( 0 );
                            }
                        }
                    }
                    if (((CHECK_STUCK_TIMER( l_U340, 0, 3000 )) || (IS_CAR_ON_FIRE( l_U340 ))) || (NOT (IS_VEH_DRIVEABLE( l_U340 ))))
                    {
                        l_U175 = 3;
                        sub_23693( 3 );
                    }
                    if (CHECK_STUCK_TIMER( l_U340, 1, 3000 ))
                    {
                        l_U175 = 3;
                        sub_23693( 3 );
                    }
                    if (NOT g_U2225)
                    {
                        if (NOT l_U112)
                        {
                            if (IS_PLAYER_PLAYING( sub_1516() ))
                            {
                                if (IS_CHAR_SHOOTING( sub_1572() ))
                                {
                                    l_U111 = 1;
                                    l_U175 = 5;
                                    sub_23693( 3 );
                                }
                            }
                        }
                    }
                }
                if (NOT l_U107)
                {
                    if (IS_VEH_DRIVEABLE( l_U340 ))
                    {
                        if (LOCATE_CAR_2D( l_U340, l_U310._fU0, l_U310._fU4, 15.00000000, 15.00000000, 0 ))
                        {
                            CLEAR_CHAR_TASKS( l_U195 );
                            sub_46431( ref l_U195, ref l_U340, l_U310 );
                            l_U107 = 1;
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U340 ))
                {
                    if (NOT g_U2230)
                    {
                        if (LOCATE_CAR_3D( l_U340, l_U337._fU0, l_U337._fU4, l_U337._fU8, 25.00000000, 25.00000000, 5.00000000, 0 ))
                        {
                            ADD_SCORE( sub_1516(), (FLOOR( ProtectedGet(l_U167) )) * -1 );
                            INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( ProtectedGet(l_U167) ) );
                            if (NOT (IS_CHAR_INJURED( l_U195 )))
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                                SET_CHAR_MONEY( l_U195, (FLOOR( ProtectedGet(l_U167) )) + iVar3 );
                            }
                            l_U113 = 1;
                            l_U175 = 0;
                            sub_23693( 3 );
                            break;
                        }
                    }
                    else if (LOCATE_CAR_3D( l_U340, l_U337._fU0, l_U337._fU4, l_U337._fU8, 50.00000000, 50.00000000, 5.00000000, 0 ))
                    {
                        ADD_SCORE( sub_1516(), (FLOOR( ProtectedGet(l_U167) )) * -1 );
                        INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( ProtectedGet(l_U167) ) );
                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                            SET_CHAR_MONEY( l_U195, (FLOOR( ProtectedGet(l_U167) )) + iVar3 );
                        }
                        l_U113 = 1;
                        l_U175 = 0;
                        sub_23693( 3 );
                        break;
                    }
                }
            }
            if (NOT (IS_PED_DOING_DRIVEBY( sub_1572() )))
            {
                if (NOT l_U100)
                {
                    if (NOT l_U105)
                    {
                        if ((sub_53127()) AND (NOT sub_41669()))
                        {
                            if ((sub_42869( 0 )) || (sub_42950( 0 )))
                            {
                                SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 1 );
                                SET_PLAYER_CAN_DO_DRIVE_BY( sub_1516(), 0 );
                                SET_PLAYER_CONTROL( sub_1516(), 0 );
                                if (DOES_CAM_EXIST( l_U143 ))
                                {
                                    DESTROY_CAM( l_U143 );
                                }
                                CREATE_CAM( 14, ref l_U143 );
                                if (DOES_OBJECT_EXIST( l_U194 ))
                                {
                                    ATTACH_CAM_TO_OBJECT( l_U143, l_U194 );
                                    SET_CAM_ATTACH_OFFSET( l_U143, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
                                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U143, 1 );
                                }
                                sub_39943( l_U340, ref l_U143, l_U334 );
                                SET_CAM_FOV( l_U143, l_U158 );
                                SET_CAM_ACTIVE( l_U143, 1 );
                                SET_CAM_PROPAGATE( l_U143, 1 );
                                SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SET_PTFX_CAM_INSIDE_VEHICLE( 1 );
                                if (NOT (IS_CHAR_INJURED( l_U195 )))
                                {
                                    BLOCK_CHAR_AMBIENT_ANIMS( l_U195, 1 );
                                }
                                l_U105 = 1;
                                l_U100 = 1;
                            }
                        }
                    }
                }
                if (l_U105)
                {
                    if (NOT (IS_CHAR_INJURED( l_U195 )))
                    {
                        BLOCK_CHAR_GESTURE_ANIMS( l_U195, 1 );
                        BLOCK_CHAR_AMBIENT_ANIMS( l_U195, 1 );
                    }
                    if (DOES_CAM_EXIST( l_U143 ))
                    {
                        if (DOES_OBJECT_EXIST( l_U194 ))
                        {
                            sub_39943( l_U340, ref l_U143, l_U334 );
                        }
                    }
                    if (NOT (IS_CONTROL_PRESSED( 2, 78 )))
                    {
                        if (NOT sub_41669())
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H06" )))
                                {
                                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                                    PRINT_HELP_FOREVER( "TX_H06" );
                                }
                            }
                        }
                        else
                        {
                            sub_572();
                        }
                        sub_42859();
                        if (NOT l_U100)
                        {
                            if (((IS_CONTROL_PRESSED( 2, 77 )) AND (NOT l_U104)) AND (NOT sub_41669()))
                            {
                                l_U100 = 1;
                                if (IS_SCORE_GREATER( sub_1516(), (FLOOR( ProtectedGet(l_U167) )) - 1 ))
                                {
                                    sub_572();
                                    if (NOT (l_U98 == l_U205[l_U173]._fU0))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                                        {
                                            l_U190 = 7;
                                        }
                                        l_U138 = 0;
                                        g_U2230 = 0;
                                        l_U107 = 0;
                                        sub_43741( ref l_U205[l_U173]._fU0, ref l_U310, ref l_U147 );
                                        if (DOES_BLIP_EXIST( l_U98 ))
                                        {
                                            if (l_U127)
                                            {
                                                SET_BLIP_AS_SHORT_RANGE( l_U98, 1 );
                                                l_U127 = 0;
                                            }
                                        }
                                        l_U98 = l_U205[l_U173]._fU0;
                                        if (DOES_BLIP_EXIST( l_U98 ))
                                        {
                                            if (IS_BLIP_SHORT_RANGE( l_U98 ))
                                            {
                                                SET_BLIP_AS_SHORT_RANGE( l_U98, 0 );
                                                l_U127 = 1;
                                            }
                                        }
                                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                                        {
                                            if (IS_VEH_DRIVEABLE( l_U340 ))
                                            {
                                                CLEAR_CHAR_SECONDARY_TASK( l_U195 );
                                                sub_46431( ref l_U195, ref l_U340, l_U310 );
                                            }
                                        }
                                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                                        {
                                            CLEAR_CHAR_SECONDARY_TASK( l_U195 );
                                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U195, "Taxi_driver_Meter_Press", "amb@taxi", 8.00000000, 0, 0, 0, 0, -1 );
                                        }
                                    }
                                    l_U105 = 0;
                                    sub_54201();
                                    ProtectedSet(l_U168, 0.22000000);
                                    SETTIMERA( 0 );
                                    if (IS_PLAYER_PLAYING( sub_1516() ))
                                    {
                                        SET_PLAYER_CONTROL( sub_1516(), 1 );
                                        SET_PLAYER_CAN_DO_DRIVE_BY( sub_1516(), 1 );
                                    }
                                    if (NOT (IS_CHAR_INJURED( l_U195 )))
                                    {
                                        BLOCK_CHAR_AMBIENT_ANIMS( l_U195, 0 );
                                    }
                                    sub_23693( 2 );
                                    break;
                                }
                                else
                                {
                                    l_U175 = 1;
                                    if (NOT (IS_CHAR_INJURED( l_U195 )))
                                    {
                                        BLOCK_CHAR_AMBIENT_ANIMS( l_U195, 0 );
                                    }
                                    sub_23693( 3 );
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        l_U100 = 1;
                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H06" ))
                        {
                            sub_572();
                        }
                        sub_54201();
                        if (IS_PLAYER_PLAYING( sub_1516() ))
                        {
                            SET_PLAYER_CONTROL( sub_1516(), 1 );
                            SET_PLAYER_CAN_DO_DRIVE_BY( sub_1516(), 1 );
                        }
                        l_U105 = 0;
                        l_U115 = 1;
                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( l_U195, 0 );
                        }
                    }
                }
                else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H04" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H08" )))
                {
                    sub_572();
                    l_U106 = 0;
                }
                if (NOT l_U100)
                {
                    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) AND (NOT sub_41669()))
                    {
                        fVar7 = (((sub_54712( uVar8, l_U310 )) / 50.00000000) * ProtectedGet(l_U168)) * 2.40000000;
                        I = (FLOOR( ProtectedGet(l_U167) )) + (ROUND( fVar7 ));
                        fVar7 = TO_FLOAT( I );
                        fVar7 *= 1.33000000;
                        I = ROUND( fVar7 );
                        if (g_U2225)
                        {
                            I = 0;
                        }
                        l_U100 = 1;
                        if (IS_PLAYER_PLAYING( sub_1516() ))
                        {
                            if (IS_SCORE_GREATER( sub_1516(), I - 1 ))
                            {
                                l_U117 = 1;
                                SET_PLAYER_CONTROL( sub_1516(), 0 );
                                sub_572();
                                SETTIMERA( 0 );
                                ProtectedSet(l_U167, TO_FLOAT( I ));
                                sub_23693( 5 );
                                break;
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U195 )))
                            {
                                l_U190 = 13;
                            }
                        }
                    }
                }
                if (NOT g_U2230)
                {
                    if (NOT l_U100)
                    {
                        if ((IS_BUTTON_PRESSED( 0, 14 )) || ((IS_CONTROL_PRESSED( 2, 2 )) AND (NOT sub_41669())))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U195 )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U340 ))
                                {
                                    CLEAR_CHAR_TASKS( l_U195 );
                                    sub_47312( ref l_U195, ref l_U340, l_U310 );
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( l_U195 )))
                            {
                                l_U190 = 18;
                            }
                            ProtectedSet(l_U168, 0.22000000 * 2.00000000);
                            g_U2230 = 1;
                            BLOCK_PED_WEAPON_SWITCHING( sub_1572(), 0 );
                            l_U100 = 1;
                            l_U106 = 0;
                            break;
                        }
                    }
                }
                if (NOT l_U100)
                {
                    if ((IS_CONTROL_PRESSED( 2, 43 )) AND (NOT sub_41669()))
                    {
                        ADD_SCORE( sub_1516(), (FLOOR( ProtectedGet(l_U167) )) * -1 );
                        INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( ProtectedGet(l_U167) ) );
                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                            SET_CHAR_MONEY( l_U195, (FLOOR( ProtectedGet(l_U167) )) + iVar3 );
                        }
                        l_U100 = 1;
                        l_U113 = 1;
                        l_U175 = 4;
                        sub_23693( 3 );
                        break;
                    }
                }
            }
            else
            {
                sub_572();
            }
            break;
            case 5:
            if (IS_SCREEN_FADED_OUT())
            {
                sub_41873( 0 );
                while (l_U141)
                {
                    sub_43741( ref l_U98, ref l_U310, ref l_U147 );
                    if (l_U141)
                    {
                        WAIT( 0 );
                    }
                }
                iVar4 = 0;
                iVar5 = 0;
                iVar6 = 0;
                if (NOT (IS_CHAR_INJURED( sub_1572() )))
                {
                    GET_CHAR_COORDINATES( sub_1572(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                }
                fVar7 = sub_54712( uVar8, l_U310 );
                INCREMENT_FLOAT_STAT_NO_MESSAGE( 86, fVar7 );
                if (g_U2230)
                {
                    iVar4 = FLOOR( (fVar7 / 200.00000000) / 60.00000000 );
                    iVar5 = ROUND( (fVar7 / 200.00000000) - (60.00000000 * (TO_FLOAT( iVar4 ))) );
                }
                else
                {
                    iVar4 = FLOOR( (fVar7 / 100.00000000) / 60.00000000 );
                    iVar5 = ROUND( (fVar7 / 100.00000000) - (60.00000000 * (TO_FLOAT( iVar4 ))) );
                }
                if ((iVar4 + 2) < (sub_55640( 0 )))
                {
                    GET_TIME_OF_DAY( ref I, ref iVar3 );
                    iVar3 += iVar5;
                    if (iVar3 > 59)
                    {
                        iVar3 += 65476;
                        iVar4++;
                    }
                    I += iVar4;
                    if (I > 23)
                    {
                        I += 65512;
                        iVar6++;
                    }
                    if (iVar6 > 0)
                    {
                        SET_TIME_ONE_DAY_FORWARD();
                    }
                    SET_TIME_OF_DAY( I, iVar3 );
                }
                if (NOT (IS_CAR_DEAD( l_U340 )))
                {
                    LOAD_ALL_PATH_NODES( 0 );
                    l_U142 = 1;
                    sub_29767();
                    SET_CAR_HEADING( l_U340, l_U147 );
                    SET_CAR_COORDINATES( l_U340, l_U310._fU0, l_U310._fU4, l_U310._fU8 );
                    if (NOT l_U137)
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U340, 0.00000000, -3.00000000, 1.00000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    }
                    else
                    {
                        GET_CAR_COORDINATES( l_U340, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    }
                    REQUEST_COLLISION_AT_POSN( uVar8._fU0, uVar8._fU4, uVar8._fU8 );
                    LOAD_ALL_OBJECTS_NOW();
                    SET_CAR_HEADING( l_U340, l_U147 );
                    SET_CAR_COORDINATES( l_U340, uVar8._fU0, uVar8._fU4, uVar8._fU8 );
                    LOAD_SCENE( l_U310._fU0, l_U310._fU4, l_U310._fU8 );
                    POPULATE_NOW();
                }
                SETTIMERA( 0 );
                l_U134 = 0;
                while (NOT l_U134)
                {
                    CLEAR_AREA( l_U310._fU0, l_U310._fU4, l_U310._fU8, 20.00000000, 1 );
                    if (NOT (IS_CAR_DEAD( l_U340 )))
                    {
                        if ((SET_CAR_ON_GROUND_PROPERLY( l_U340 )) || (TIMERA() > 2000))
                        {
                            if (TIMERA() > 2000)
                            {
                                SET_CAR_COORDINATES( l_U340, l_U310._fU0, l_U310._fU4, l_U310._fU8 );
                            }
                            l_U134 = 1;
                        }
                    }
                    WAIT( 0 );
                }
                if (g_U64663)
                {
                    bVar11 = false;
                    SETTIMERA( 0 );
                    while (NOT bVar11)
                    {
                        if (((LOCATE_CHAR_ANY_MEANS_3D( sub_1572(), 81.12530000, -338.25000000, 11.15940000, 50.00000000, 50.00000000, 50.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_1572(), -1334.70000000, 317.90000000, 14.49000000, 50.00000000, 50.00000000, 50.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_1572(), 1066.50300000, 87.56122000, 34.13000000, 50.00000000, 50.00000000, 50.00000000, 0 )))
                        {
                            if (TIMERA() < 4000)
                            {
                                if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "gunLockup" )) > 0) || ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "gunLockupCT" )) > 0))
                                {
                                    bVar11 = true;
                                }
                                else
                                {
                                    WAIT( 0 );
                                }
                            }
                            else
                            {
                                bVar11 = true;
                            }
                        }
                        else
                        {
                            bVar11 = true;
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( l_U340 )))
                {
                    SET_CAR_FORWARD_SPEED( l_U340, 10.00000000 );
                    if (NOT (IS_CHAR_INJURED( l_U195 )))
                    {
                        CLEAR_CHAR_TASKS( l_U195 );
                        sub_46431( ref l_U195, ref l_U340, l_U310 );
                    }
                    DO_SCREEN_FADE_IN( 1000 );
                    l_U139 = 0;
                    SETTIMERA( 0 );
                    l_U175 = 0;
                    sub_2003();
                    l_U171 = 3;
                    ADD_SCORE( sub_1516(), (FLOOR( ProtectedGet(l_U167) )) * -1 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( ProtectedGet(l_U167) ) );
                    if (NOT (IS_CHAR_INJURED( l_U195 )))
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                        SET_CHAR_MONEY( l_U195, (FLOOR( ProtectedGet(l_U167) )) + iVar3 );
                    }
                    l_U113 = 1;
                }
            }
            else
            {
                sub_47399();
                if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADING_IN()))
                {
                    DO_SCREEN_FADE_OUT( 1000 );
                    l_U139 = 1;
                    SETTIMERA( 0 );
                }
            }
            break;
            case 3:
            switch (l_U172)
            {
                case 0:
                if (IS_PLAYER_PLAYING( sub_1516() ))
                {
                    GET_CHAR_COORDINATES( sub_1572(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    l_U170 = GET_MAP_AREA_FROM_COORDS( uVar8 );
                }
                sub_2003();
                sub_1651();
                if (IS_PLAYER_PLAYING( sub_1516() ))
                {
                    SET_PLAYER_CONTROL( sub_1516(), 1 );
                }
                sub_572();
                SETTIMERA( 0 );
                if ((NOT l_U111) || (l_U112))
                {
                    if (NOT (IS_CHAR_INJURED( l_U195 )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U340 )))
                        {
                            if (((NOT (CHECK_STUCK_TIMER( l_U340, 0, 3000 ))) AND (NOT (IS_CAR_ON_FIRE( l_U340 )))) AND (IS_VEH_DRIVEABLE( l_U340 )))
                            {
                                CLEAR_CHAR_TASKS( l_U195 );
                                OPEN_SEQUENCE_TASK( ref l_U198 );
                                if (NOT l_U137)
                                {
                                    TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U340, 0, 21, 12.00000000, 1, 3, 3 );
                                }
                                TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U340, 0, 5, 12.00000000, 1, 3, 3 );
                                CLOSE_SEQUENCE_TASK( l_U198 );
                                TASK_PERFORM_SEQUENCE( l_U195, l_U198 );
                                CLEAR_SEQUENCE_TASK( l_U198 );
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U195, 29, ref l_U197 );
                                if (l_U197 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U195 );
                                    OPEN_SEQUENCE_TASK( ref l_U198 );
                                    TASK_LEAVE_CAR( 0, l_U340 );
                                    TASK_WANDER_STANDARD( 0 );
                                    CLOSE_SEQUENCE_TASK( l_U198 );
                                    TASK_PERFORM_SEQUENCE( l_U195, l_U198 );
                                    CLEAR_SEQUENCE_TASK( l_U198 );
                                }
                            }
                        }
                    }
                }
                if (l_U111)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U195 ))) AND (IS_PLAYER_PLAYING( sub_1516() )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U195, 1 );
                        CLEAR_CHAR_TASKS( l_U195 );
                        OPEN_SEQUENCE_TASK( ref l_U198 );
                        if (IS_VEH_DRIVEABLE( l_U340 ))
                        {
                            TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U340, 0, 5, 12.00000000, 1, 3, 3 );
                            TASK_LEAVE_CAR( 0, l_U340 );
                        }
                        TASK_SMART_FLEE_CHAR( 0, sub_1572(), 9999.90000000, 999999 );
                        CLOSE_SEQUENCE_TASK( l_U198 );
                        TASK_PERFORM_SEQUENCE( l_U195, l_U198 );
                        CLEAR_SEQUENCE_TASK( l_U198 );
                    }
                }
                l_U172++;
                break;
                case 1:
                if (IS_SCREEN_FADED_IN())
                {
                    if (NOT (IS_CHAR_INJURED( l_U195 )))
                    {
                        switch (l_U175)
                        {
                            case 0:
                            if ((l_U157 > 75.00000000) AND (NOT g_U2225))
                            {
                                l_U190 = 5;
                            }
                            else
                            {
                                l_U190 = 4;
                            }
                            break;
                            case 1:
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                PRINT_NOW( "NOCASH", 7500, 1 );
                            }
                            l_U190 = 6;
                            break;
                            case 2: break;
                            case 3:
                            l_U190 = 12;
                            break;
                            case 4:
                            if (NOT g_U2225)
                            {
                                l_U190 = 11;
                            }
                            else
                            {
                                l_U190 = 4;
                            }
                            break;
                            case 5:
                            l_U190 = 10;
                            break;
                        }
                    }
                    SETTIMERA( 0 );
                    l_U172++;
                }
                break;
                case 2:
                if (NOT (IS_CAR_DEAD( l_U340 )))
                {
                    bVar11 = false;
                    GET_CAR_SPEED( l_U340, ref fVar7 );
                    if ((fVar7 < 0.10000000) || (TIMERA() > 3000))
                    {
                        bVar11 = true;
                    }
                    if ((CHECK_STUCK_TIMER( l_U340, 0, 3000 )) || (IS_CAR_ON_FIRE( l_U340 )))
                    {
                        bVar11 = true;
                    }
                    if ((bVar11) AND (NOT l_U111))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U340 ))
                            {
                                TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( l_U195, l_U340, 0, 5, 12.00000000, 0, 3, 3 );
                            }
                        }
                        if (IS_PLAYER_PLAYING( sub_1516() ))
                        {
                            GET_SCRIPT_TASK_STATUS( sub_1572(), 30, ref l_U197 );
                            if (l_U197 == 7)
                            {
                                sub_2003();
                                LOCK_CAR_DOORS( l_U340, 1 );
                                if (NOT l_U111)
                                {
                                    CLEAR_CHAR_TASKS( sub_1572() );
                                    TASK_LEAVE_CAR( sub_1572(), l_U340 );
                                }
                                l_U172++;
                            }
                        }
                        sub_58738( l_U340 );
                    }
                    if ((l_U111) AND (bVar11))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U195 )))
                        {
                            CLEAR_CHAR_TASKS( l_U195 );
                            OPEN_SEQUENCE_TASK( ref l_U198 );
                            TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U340 );
                            if (IS_PLAYER_PLAYING( sub_1516() ))
                            {
                                TASK_SMART_FLEE_CHAR( 0, sub_1572(), 9999.90000000, 999999 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U198 );
                            TASK_PERFORM_SEQUENCE( l_U195, l_U198 );
                            CLEAR_SEQUENCE_TASK( l_U198 );
                        }
                        sub_2003();
                        l_U172++;
                    }
                }
                break;
                case 3:
                CLEAR_CHAR_TASKS( sub_1572() );
                OPEN_SEQUENCE_TASK( ref l_U198 );
                TASK_SWAP_WEAPON( 0, 1 );
                CLOSE_SEQUENCE_TASK( l_U198 );
                TASK_PERFORM_SEQUENCE( sub_1572(), l_U198 );
                CLEAR_SEQUENCE_TASK( l_U198 );
                l_U171 = 99;
                break;
            }
            break;
        }
        sub_59153();
        WAIT( 0 );
    }
    if (NOT l_U117)
    {
        if (NOT (l_U169 == l_U170))
        {
            AWARD_ACHIEVEMENT( 21 );
        }
    }
    if (NOT g_U2229)
    {
        if (IS_PLAYER_PLAYING( sub_1516() ))
        {
            SET_PLAYER_CONTROL( sub_1516(), 1 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U340 )))
    {
        LOCK_CAR_DOORS( l_U340, 1 );
    }
    if ((NOT g_U2229) AND (NOT l_U111))
    {
        sub_58738( l_U340 );
    }
    if (NOT (l_U174 == -1))
    {
        SET_TEXT_RENDER_ID( l_U174 );
        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    }
    if ((NOT g_U2229) AND (NOT l_U111))
    {
        bVar11 = true;
        while (bVar11)
        {
            if (NOT (IS_CAR_DEAD( l_U340 )))
            {
                if (IS_PLAYER_PLAYING( sub_1516() ))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_1572(), l_U340 )))
                    {
                        if (NOT (sub_59639( sub_1572() )))
                        {
                            bVar11 = false;
                        }
                    }
                }
                else
                {
                    bVar11 = false;
                }
            }
            else
            {
                bVar11 = false;
            }
            WAIT( 0 );
        }
    }
    if ((NOT g_U2229) AND (NOT l_U111))
    {
        bVar11 = true;
        while (bVar11)
        {
            if (NOT (IS_CAR_DEAD( l_U340 )))
            {
                if (IS_PLAYER_PLAYING( sub_1516() ))
                {
                    if ((((NOT (IS_CHAR_IN_CAR( sub_1572(), l_U340 ))) AND (NOT (sub_59639( sub_1572() )))) AND (NOT (sub_60018( l_U340 )))) AND (NOT (sub_60185( l_U340 ))))
                    {
                        bVar11 = false;
                    }
                }
                else
                {
                    bVar11 = false;
                }
            }
            else
            {
                bVar11 = false;
            }
            WAIT( 0 );
        }
    }
    if (l_U111)
    {
        bVar11 = true;
        while (bVar11)
        {
            bVar11 = false;
            if (NOT (IS_CAR_DEAD( l_U340 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U195 )))
                {
                    if ((IS_CHAR_IN_CAR( l_U195, l_U340 )) || (sub_59639( l_U195 )))
                    {
                        bVar11 = true;
                    }
                }
            }
            WAIT( 0 );
        }
    }
    if (((l_U113) AND (NOT g_U2225)) AND (NOT l_U111))
    {
        PRINT_WITH_NUMBER( "FARE", FLOOR( ProtectedGet(l_U167) ), 7500, 0 );
        l_U113 = 0;
    }
    if ((NOT g_U2229) AND (NOT l_U111))
    {
        if (DOES_VEHICLE_EXIST( l_U340 ))
        {
            WAIT( 400 );
        }
    }
    sub_555();
    return;
}

void sub_555()
{
    int iVar2;
    int I;
    unknown uVar4;
    unknown uVar5;

    SET_PTFX_CAM_INSIDE_VEHICLE( 0 );
    sub_572();
    if (DOES_OBJECT_EXIST( l_U194 ))
    {
        DELETE_OBJECT( ref l_U194 );
    }
    if (NOT l_U111)
    {
        if (NOT (IS_CHAR_INJURED( l_U195 )))
        {
            SET_CHAR_KEEP_TASK( l_U195, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U195, 0 );
            if (IS_VEH_DRIVEABLE( l_U340 ))
            {
                if (IS_CHAR_IN_CAR( l_U195, l_U340 ))
                {
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U195, 0 );
                    if (NOT g_U2229)
                    {
                        TASK_CAR_DRIVE_WANDER( l_U195, l_U340, 20.00000000, 1 );
                    }
                    SET_TAXI_LIGHTS( l_U340, 1 );
                }
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U195 )))
    {
        SET_CHAR_KEEP_TASK( l_U195, 1 );
    }
    if (NOT (IS_CAR_DEAD( l_U340 )))
    {
        GET_CAR_HEALTH( l_U340, ref iVar2 );
        if (iVar2 > 1000)
        {
            SET_CAR_HEALTH( l_U340, iVar2 );
        }
        iVar2 = ROUND( GET_ENGINE_HEALTH( l_U340 ) );
        if (iVar2 > 1000)
        {
            SET_ENGINE_HEALTH( l_U340, TO_FLOAT( iVar2 ) );
        }
        iVar2 = ROUND( GET_PETROL_TANK_HEALTH( l_U340 ) );
        if (iVar2 > 1000)
        {
            SET_PETROL_TANK_HEALTH( l_U340, TO_FLOAT( iVar2 ) );
        }
    }
    if ((NOT g_U2229) AND (NOT l_U111))
    {
        if (DOES_GROUP_EXIST( sub_1346() ))
        {
            GET_GROUP_SIZE( sub_1346(), ref I, ref iVar2 );
            for ( I = 0; I < iVar2; I++ )
            {
                GET_GROUP_MEMBER( sub_1346(), I, ref uVar4 );
                if (NOT (IS_CHAR_INJURED( uVar4 )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( uVar4 ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( uVar4, ref uVar5 );
                        TASK_LEAVE_CAR_IMMEDIATELY( uVar4, uVar5 );
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS( uVar4 );
                    }
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_1516() ))
    {
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_1516(), 1 );
        BLOCK_PED_WEAPON_SWITCHING( sub_1572(), 0 );
    }
    if (IS_VEH_DRIVEABLE( l_U340 ))
    {
        SET_HAS_BEEN_OWNED_BY_PLAYER( l_U340, 0 );
    }
    sub_1651();
    if (IS_PLAYER_PLAYING( sub_1516() ))
    {
        SET_CHAR_VISIBLE( sub_1572(), 1 );
    }
    sub_2003();
    sub_2055( ref l_U179 );
    if (DOES_BLIP_EXIST( l_U99 ))
    {
        if (l_U128)
        {
            SET_BLIP_AS_SHORT_RANGE( l_U99, 1 );
            l_U128 = 0;
        }
        FLASH_BLIP( l_U99, 0 );
    }
    if (DOES_BLIP_EXIST( l_U98 ))
    {
        if (l_U127)
        {
            SET_BLIP_AS_SHORT_RANGE( l_U98, 1 );
            l_U127 = 0;
        }
    }
    l_U98 = nil;
    if (NOT g_U2229)
    {
        if ((IS_SCREEN_FADED_OUT()) AND (l_U139))
        {
            DO_SCREEN_FADE_IN( 1000 );
        }
    }
    if (sub_2238( l_U199 ))
    {
        sub_2422( ref l_U199, 1 );
    }
    REMOVE_ANIMS( "amb@taxi" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 2120484425 );
    g_U2229 = 0;
    LOAD_ALL_PATH_NODES( 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_572()
{
    if (((((((((((((((((((((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H01" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H03" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H04" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05B" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05C" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05D" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05E" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05F" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H06" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H08" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H09" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H10" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H11" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H12" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H09B" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H10B" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H13" ))) || (l_U106))
    {
        CLEAR_HELP();
    }
    return;
}

void sub_1346()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1516()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1572()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1651()
{
    if ((((DOES_CAM_EXIST( l_U143 )) || (DOES_CAM_EXIST( l_U145 ))) || (DOES_CAM_EXIST( l_U344 ))) || (DOES_CAM_EXIST( l_U145 )))
    {
        if (DOES_CAM_EXIST( l_U145 ))
        {
            DESTROY_CAM( l_U145 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        if (DOES_CAM_EXIST( l_U143 ))
        {
            DESTROY_CAM( l_U143 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        if (DOES_CAM_EXIST( l_U144 ))
        {
            DESTROY_CAM( l_U144 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        if (DOES_CAM_EXIST( l_U145 ))
        {
            DESTROY_CAM( l_U145 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        if (DOES_CAM_EXIST( l_U344 ))
        {
            DESTROY_CAM( l_U344 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        l_U189 = 0;
        if (IS_PLAYER_PLAYING( sub_1516() ))
        {
            SET_CHAR_VISIBLE( sub_1572(), 1 );
        }
        SET_PTFX_CAM_INSIDE_VEHICLE( 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    l_U115 = 0;
    return;
}

void sub_2003()
{
    if (NOT (l_U341 == -1))
    {
        SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U341 );
        l_U341 = -1;
    }
    return;
}

void sub_2055(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

int sub_2238(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_2350( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2350( "\n speech is not playing" );
    }
    return 0;
}

void sub_2350(unknown uParam0)
{
    return;
}

void sub_2422(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_2610(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_2650(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_2667();
    return;
}

void sub_2667()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_2786(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2866( "\n PED NUMBER ", uParam0 );
    sub_2906( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2866(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2906(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3106()
{
    if (l_U171 == 3)
    {
        return 1;
    }
    if (l_U171 == 99)
    {
        return 0;
    }
    if (NOT g_U2229)
    {
        if (IS_PLAYER_PLAYING( sub_1516() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1572() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1572(), ref l_U340 );
                if (NOT (IS_CAR_DEAD( l_U340 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_1572(), l_U340 ))
                    {
                        if (sub_3255( l_U340 ))
                        {
                            GET_DRIVER_OF_CAR( l_U340, ref l_U195 );
                            if (DOES_CHAR_EXIST( l_U195 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U195 )))
                                {
                                    if (IS_CHAR_SITTING_IN_CAR( l_U195, l_U340 ))
                                    {
                                        if (NOT (l_U195 == sub_1572()))
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
    }
    return 0;
}

int sub_3255(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_3506()
{
    return sub_3517( 1, 1 );
}

int sub_3517(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

void sub_3604()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_3949(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_3974( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_3974(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_4032( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_4032(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_4054( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_4730( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_4054(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2350( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_2350( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_2350( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_4730(int iParam0, int iParam1)
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

void sub_4950(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_4971( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_4971(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_4032( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_5193(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;

    uVar4 = sub_5209( l_U299._fU4 );
    PRINTSTRING( "Taxi goto street audio is - " );
    PRINTSTRING( uVar4 );
    PRINTSTRING( "\n" );
    if (NOT (COMPARE_STRING( uVar4, "EMPTY" )))
    {
        bVar3 = IS_AMBIENT_SPEECH_DISABLED( uParam0 );
        if (bVar3)
        {
            STOP_PED_SPEAKING( uParam0, 0 );
        }
        SAY_AMBIENT_SPEECH( uParam0, uVar4, 1, 1, 0 );
        if (bVar3)
        {
            STOP_PED_SPEAKING( sub_1572(), 1 );
        }
    }
    return;
}

string sub_5209(unknown uParam0)
{
    if (sub_5232( uParam0, "BX_1900ST" ))
    {
        return "TAXI_GIVE_DEST_1990_ST";
    }
    if (sub_5232( uParam0, "AMH1" ))
    {
        return "TAXI_GIVE_DEST_ALBANY_AVE";
    }
    if (sub_5232( uParam0, "BX_ALCATRAZ" ))
    {
        return "TAXI_GIVE_DEST_ALCATRAZ_AVE";
    }
    if (sub_5232( uParam0, "BRALG" ))
    {
        return "TAXI_GIVE_DEST_ALGONQUIN_BRIDGE";
    }
    if (sub_5232( uParam0, "BQ_ALGONQUIND" ))
    {
        return "TAXI_GIVE_DEST_ALGONQUIN_DUKES_EXPRESSWAY";
    }
    if (sub_5232( uParam0, "BX_ALTONA" ))
    {
        return "TAXI_GIVE_DEST_ALTONA_AVE";
    }
    if (sub_5232( uParam0, "SMH1" ))
    {
        return "TAXI_GIVE_DEST_AMETHYST_ST";
    }
    if (sub_5232( uParam0, "MMH5" ))
    {
        return "TAXI_GIVE_DEST_AMSTERDAM_LANE";
    }
    if (sub_5232( uParam0, "NJ_ANVIL" ))
    {
        return "TAXI_GIVE_DEST_ANVIL_AVE";
    }
    if (sub_5232( uParam0, "BX_APPLEJACK" ))
    {
        return "TAXI_GIVE_DEST_APPLEJACK_ST";
    }
    if (sub_5232( uParam0, "NJ_APPLEWHITE" ))
    {
        return "TAXI_GIVE_DEST_APPLEWHITE_ST";
    }
    if (sub_5232( uParam0, "BQ_ARAGON" ))
    {
        return "TAXI_GIVE_DEST_ARAGON_ST";
    }
    if (sub_5232( uParam0, "NJ_ARGUS" ))
    {
        return "TAXI_GIVE_DEST_ARGUS_ST";
    }
    if (sub_5232( uParam0, "NJ_ASAHARA" ))
    {
        return "TAXI_GIVE_DEST_ASAHARA_RD";
    }
    if (sub_5232( uParam0, "BQ_ASPARAGUS" ))
    {
        return "TAXI_GIVE_DEST_ASPARAGUS_AVE";
    }
    if (sub_5232( uParam0, "NJ_ASPDIN" ))
    {
        return "TAXI_GIVE_DEST_ASPDIN_DRIVE";
    }
    if (sub_5232( uParam0, "MMH26" ))
    {
        return "TAXI_GIVE_DEST_ASTORIA";
    }
    if (sub_5232( uParam0, "BX_ATTICA" ))
    {
        return "TAXI_GIVE_DEST_ATTICA_AVE";
    }
    if (sub_5232( uParam0, "NJ_BABBAGE" ))
    {
        return "TAXI_GIVE_DEST_BABBAGE_DRIVE";
    }
    if (sub_5232( uParam0, "NJ_BAER" ))
    {
        return "TAXI_GIVE_DEST_BAER_ST";
    }
    if (sub_5232( uParam0, "SMH2" ))
    {
        return "TAXI_GIVE_DEST_BARIUM_ST";
    }
    if (sub_5232( uParam0, "BQ_BART" ))
    {
        return "TAXI_GIVE_DEST_BART_ST";
    }
    if (sub_5232( uParam0, "BQ_BEAN" ))
    {
        return "TAXI_GIVE_DEST_BEAN_ST";
    }
    if (sub_5232( uParam0, "BX_BEAUMONT" ))
    {
        return "TAXI_GIVE_DEST_BEAUMONT_AVE";
    }
    if (sub_5232( uParam0, "NJ_BEAVERHEAD" ))
    {
        return "TAXI_GIVE_DEST_BEAVERHEAD_AVE";
    }
    if (sub_5232( uParam0, "NJ_BEDROCK" ))
    {
        return "TAXI_GIVE_DEST_BEDROCK_ST";
    }
    if (sub_5232( uParam0, "NJ_BIGHORN" ))
    {
        return "TAXI_GIVE_DEST_BIG_HORN_DRIVE";
    }
    if (sub_5232( uParam0, "AMH2" ))
    {
        return "TAXI_GIVE_DEST_BISMARCK_AVE";
    }
    if (sub_5232( uParam0, "BQ_BOLEYN" ))
    {
        return "TAXI_GIVE_DEST_BOLEYN_ST";
    }
    if (sub_5232( uParam0, "BQ_BOONE" ))
    {
        return "TAXI_GIVE_DEST_BOONE_ST";
    }
    if (sub_5232( uParam0, "BOTU" ))
    {
        return "TAXI_GIVE_DEST_BOOTH_TUNNEL";
    }
    if (sub_5232( uParam0, "MMH6" ))
    {
        return "TAXI_GIVE_DEST_BORLOCK_RD";
    }
    if (sub_5232( uParam0, "NJ_BOWLINE" ))
    {
        return "TAXI_GIVE_DEST_BOWLINE";
    }
    if (sub_5232( uParam0, "NJ_BOYDEN" ))
    {
        return "TAXI_GIVE_DEST_BOYDEN_AVE";
    }
    if (sub_5232( uParam0, "BQ_BRANDON" ))
    {
        return "TAXI_GIVE_DEST_BRANDON_AVE";
    }
    if (sub_5232( uParam0, "MMH8" ))
    {
        return "TAXI_GIVE_DEST_BRIDGE_LANE_NORTH";
    }
    if (sub_5232( uParam0, "MMH7" ))
    {
        return "TAXI_GIVE_DEST_BRIDGE_LANE_SOUTH";
    }
    if (sub_5232( uParam0, "NJ_BRIDGER" ))
    {
        return "TAXI_GIVE_DEST_BRIDGER_ST";
    }
    if (sub_5232( uParam0, "BQ_BROCOLLI" ))
    {
        return "TAXI_GIVE_DEST_BROCCOLI_ST";
    }
    if (sub_5232( uParam0, "BQ_BROKER" ))
    {
        return "TAXI_GIVE_DEST_BROKER_BRIDGE";
    }
    if (sub_5232( uParam0, "BQ_BROKERD" ))
    {
        return "TAXI_GIVE_DEST_BROKER_DUKES_EXPRESSWAY";
    }
    if (sub_5232( uParam0, "BX_BRONCO" ))
    {
        return "TAXI_GIVE_DEST_BRONCO_ST";
    }
    if (sub_5232( uParam0, "MMH13" ))
    {
        return "TAXI_GIVE_DEST_BROWN_PLACE";
    }
    if (sub_5232( uParam0, "BQ_BRUNNER" ))
    {
        return "TAXI_GIVE_DEST_BRUNNER_ST";
    }
    if (sub_5232( uParam0, "BQ_BUNKER" ))
    {
        return "TAXI_GIVE_DEST_BUNKER_HILL_AVE";
    }
    if (sub_5232( uParam0, "MMH22" ))
    {
        return "TAXI_GIVE_DEST_BURLESQUE";
    }
    if (sub_5232( uParam0, "MMH31" ))
    {
        return "TAXI_GIVE_DEST_BUS_LANE";
    }
    if (sub_5232( uParam0, "BX_BUTTERFLY" ))
    {
        return "TAXI_GIVE_DEST_BUTTERFLY_ST";
    }
    if (sub_5232( uParam0, "SMH3" ))
    {
        return "TAXI_GIVE_DEST_CALCIUM_ST";
    }
    if (sub_5232( uParam0, "BQ_CAMDEN" ))
    {
        return "TAXI_GIVE_DEST_CAMDEN_AVE";
    }
    if (sub_5232( uParam0, "NJ_CARIBOO" ))
    {
        return "TAXI_GIVE_DEST_CARIBOO_AVE";
    }
    if (sub_5232( uParam0, "BQ_CARROLLTON" ))
    {
        return "TAXI_GIVE_DEST_CARROLLTON_ST";
    }
    if (sub_5232( uParam0, "BQ_CARSON" ))
    {
        return "TAXI_GIVE_DEST_CARSON_ST";
    }
    if (sub_5232( uParam0, "BQ_CASSIDEY" ))
    {
        return "TAXI_GIVE_DEST_CASSIDEY_ST";
    }
    if (sub_5232( uParam0, "MMH15" ))
    {
        return "TAXI_GIVE_DEST_CASTLE_DRIVE";
    }
    if (sub_5232( uParam0, "MMH1" ))
    {
        return "TAXI_GIVE_DEST_CASTLE_TUNNEL";
    }
    if (sub_5232( uParam0, "BX_CATERPILLAR" ))
    {
        return "TAXI_GIVE_DEST_CATERPILLAR_ST";
    }
    if (sub_5232( uParam0, "NJ_CATSKILL" ))
    {
        return "TAXI_GIVE_DEST_CATSKILL_AVE";
    }
    if (sub_5232( uParam0, "MMH10" ))
    {
        return "TAXI_GIVE_DEST_CAVITY_LANE";
    }
    if (sub_5232( uParam0, "BQ_CAYUGA" ))
    {
        return "TAXI_GIVE_DEST_CAYUGA_AVE";
    }
    if (sub_5232( uParam0, "BQ_CHARLESTON" ))
    {
        return "TAXI_GIVE_DEST_CHARLESTON_AVE";
    }
    if (sub_5232( uParam0, "BQ_CHICORY" ))
    {
        return "TAXI_GIVE_DEST_CHICKORY_ST";
    }
    if (sub_5232( uParam0, "BQ_CHIVE" ))
    {
        return "TAXI_GIVE_DEST_CHIVE_ST";
    }
    if (sub_5232( uParam0, "BQ_CISCO" ))
    {
        return "TAXI_GIVE_DEST_CISCO_ST";
    }
    if (sub_5232( uParam0, "BQ_CLEVES" ))
    {
        return "TAXI_GIVE_DEST_CLEVES_AVE";
    }
    if (sub_5232( uParam0, "NJ_COCKERELL" ))
    {
        return "TAXI_GIVE_DEST_COCKERELL_AVE";
    }
    if (sub_5232( uParam0, "MMH25" ))
    {
        return "TAXI_GIVE_DEST_COD_ROW";
    }
    if (sub_5232( uParam0, "BQ_CODY" ))
    {
        return "TAXI_GIVE_DEST_CODY_ST";
    }
    if (sub_5232( uParam0, "AMH3" ))
    {
        return "TAXI_GIVE_DEST_COLUMBUS_AVE";
    }
    if (sub_5232( uParam0, "BQ_CONCORD" ))
    {
        return "TAXI_GIVE_DEST_CONCORD_AVE";
    }
    if (sub_5232( uParam0, "BQ_CONOY" ))
    {
        return "TAXI_GIVE_DEST_CONOY_AVE";
    }
    if (sub_5232( uParam0, "BQ_CREEK" ))
    {
        return "TAXI_GIVE_DEST_CREEK_ST";
    }
    if (sub_5232( uParam0, "BQ_CROCKETT" ))
    {
        return "TAXI_GIVE_DEST_CROCKETT_AVE";
    }
    if (sub_5232( uParam0, "BX_DARKHAMMERS" ))
    {
        return "TAXI_GIVE_DEST_DARKHAMMERS_ST";
    }
    if (sub_5232( uParam0, "BQ_DEADWOOD" ))
    {
        return "TAXI_GIVE_DEST_DEADWOOD_ST";
    }
    if (sub_5232( uParam0, "BQ_DELAWARE" ))
    {
        return "TAXI_GIVE_DEST_DELAWARE_AVE";
    }
    if (sub_5232( uParam0, "AMH5" ))
    {
        return "TAXI_GIVE_DEST_DENVER_AVE";
    }
    if (sub_5232( uParam0, "AMH4" ))
    {
        return "TAXI_GIVE_DEST_DENVER_EXETER_AVE";
    }
    if (sub_5232( uParam0, "SMH4" ))
    {
        return "TAXI_GIVE_DEST_DIAMOND_ST";
    }
    if (sub_5232( uParam0, "BQ_DILLON" ))
    {
        return "TAXI_GIVE_DEST_DILLON_ST";
    }
    if (sub_5232( uParam0, "BX_DOWNROCK" ))
    {
        return "TAXI_GIVE_DEST_DOWNROCK_LOOP";
    }
    if (sub_5232( uParam0, "NJ_DREBBEL" ))
    {
        return "TAXI_GIVE_DEST_DREBBEL";
    }
    if (sub_5232( uParam0, "BX_DRILL" ))
    {
        return "TAXI_GIVE_DEST_DRILL_ST";
    }
    if (sub_5232( uParam0, "BX_DROP" ))
    {
        return "TAXI_GIVE_DEST_DROP_ST";
    }
    if (sub_5232( uParam0, "BRDBB" ))
    {
        return "TAXI_GIVE_DEST_DUKES_BAY_BRIDGE";
    }
    if (sub_5232( uParam0, "BQ_DUKESBOU" ))
    {
        return "TAXI_GIVE_DEST_DUKES_BOULEVARD";
    }
    if (sub_5232( uParam0, "BQ_DUKES" ))
    {
        return "TAXI_GIVE_DEST_DUKES_DRIVE";
    }
    if (sub_5232( uParam0, "BQ_EARP" ))
    {
        return "TAXI_GIVE_DEST_EARP_ST";
    }
    if (sub_5232( uParam0, "BREBB" ))
    {
        return "TAXI_GIVE_DEST_EAST_BOROUGH_BRIDGE";
    }
    if (sub_5232( uParam0, "NJ_EDISON" ))
    {
        return "TAXI_GIVE_DEST_EDISON_AVE";
    }
    if (sub_5232( uParam0, "BX_ELBOW" ))
    {
        return "TAXI_GIVE_DEST_ELBOW_ST";
    }
    if (sub_5232( uParam0, "BQ_ELLERY" ))
    {
        return "TAXI_GIVE_DEST_ELLERY_ST";
    }
    if (sub_5232( uParam0, "SMH5" ))
    {
        return "TAXI_GIVE_DEST_EMERALD_ST";
    }
    if (sub_5232( uParam0, "NJ_EMERY" ))
    {
        return "TAXI_GIVE_DEST_EMERY_ST";
    }
    if (sub_5232( uParam0, "BQ_ERIE" ))
    {
        return "TAXI_GIVE_DEST_ERIE_AVE";
    }
    if (sub_5232( uParam0, "MMH16" ))
    {
        return "TAXI_GIVE_DEST_ERSATZ_ROW";
    }
    if (sub_5232( uParam0, "AMH6" ))
    {
        return "TAXI_GIVE_DEST_EXETER_AVE";
    }
    if (sub_5232( uParam0, "MMH19" ))
    {
        return "TAXI_GIVE_DEST_EYEDIDITMY_WAY";
    }
    if (sub_5232( uParam0, "NJ_FARNSWORTH" ))
    {
        return "TAXI_GIVE_DEST_FARNSWORTH_RD";
    }
    if (sub_5232( uParam0, "SMH6" ))
    {
        return "TAXI_GIVE_DEST_FELDSPAR_ST";
    }
    if (sub_5232( uParam0, "BX_FLANGER" ))
    {
        return "TAXI_GIVE_DEST_FLANGER_ST";
    }
    if (sub_5232( uParam0, "MMH30" ))
    {
        return "TAXI_GIVE_DEST_FLATFISH_PLAICE";
    }
    if (sub_5232( uParam0, "NJ_FLATHEAD" ))
    {
        return "TAXI_GIVE_DEST_FLATHEAD_RD";
    }
    if (sub_5232( uParam0, "NJ_FLEMING" ))
    {
        return "TAXI_GIVE_DEST_FLEMING_ST";
    }
    if (sub_5232( uParam0, "BX_FOLSOM" ))
    {
        return "TAXI_GIVE_DEST_FOLSOM_WAY";
    }
    if (sub_5232( uParam0, "AMH7" ))
    {
        return "TAXI_GIVE_DEST_FRANKFORT_AVE";
    }
    if (sub_5232( uParam0, "BQ_FRANKLIN" ))
    {
        return "TAXI_GIVE_DEST_FRANKLIN_ST";
    }
    if (sub_5232( uParam0, "BQ_FREETOWN" ))
    {
        return "TAXI_GIVE_DEST_FREETOWN_AVE";
    }
    if (sub_5232( uParam0, "NJ_FULCRUM" ))
    {
        return "TAXI_GIVE_DEST_FULCRUM_AVE";
    }
    if (sub_5232( uParam0, "BX_GAINER" ))
    {
        return "TAXI_GIVE_DEST_GAINER_ST";
    }
    if (sub_5232( uParam0, "AMH8" ))
    {
        return "TAXI_GIVE_DEST_GALVESTON_AVE";
    }
    if (sub_5232( uParam0, "SMH7" ))
    {
        return "TAXI_GIVE_DEST_GARNET_ST";
    }
    if (sub_5232( uParam0, "BQ_GARRETT" ))
    {
        return "TAXI_GIVE_DEST_GARRETT_ST";
    }
    if (sub_5232( uParam0, "BQ_GIBSON" ))
    {
        return "TAXI_GIVE_DEST_GIBSON_ST";
    }
    if (sub_5232( uParam0, "BX_GDBOULEVARD" ))
    {
        return "TAXI_GIVE_DEST_GRAND_BOULEVARD";
    }
    if (sub_5232( uParam0, "BX_GREENE" ))
    {
        return "TAXI_GIVE_DEST_GREENE_AVE";
    }
    if (sub_5232( uParam0, "NJ_GRENADIER" ))
    {
        return "TAXI_GIVE_DEST_GRENADIER_ST";
    }
    if (sub_5232( uParam0, "NJ_GROMMET" ))
    {
        return "TAXI_GIVE_DEST_GROMMET_ST";
    }
    if (sub_5232( uParam0, "BX_GUANTANAMO" ))
    {
        return "TAXI_GIVE_DEST_GUANTANAMO_AVE";
    }
    if (sub_5232( uParam0, "BQ_HANCOCK" ))
    {
        return "TAXI_GIVE_DEST_HANCOCK_ST";
    }
    if (sub_5232( uParam0, "BQ_HARDIN" ))
    {
        return "TAXI_GIVE_DEST_HARDIN_ST";
    }
    if (sub_5232( uParam0, "NJ_HARDTRACK" ))
    {
        return "TAXI_GIVE_DEST_HARDTRACK_AVE";
    }
    if (sub_5232( uParam0, "BQ_HARRISON" ))
    {
        return "TAXI_GIVE_DEST_HARRISON_ST";
    }
    if (sub_5232( uParam0, "BX_HEADSPRING" ))
    {
        return "TAXI_GIVE_DEST_HEADSPRING_ST";
    }
    if (sub_5232( uParam0, "MMH21" ))
    {
        return "TAXI_GIVE_DEST_HELL_GATE";
    }
    if (sub_5232( uParam0, "SMH8" ))
    {
        return "TAXI_GIVE_DEST_HEMATITE_ST";
    }
    if (sub_5232( uParam0, "BQ_HEWES" ))
    {
        return "TAXI_GIVE_DEST_HEWES_ST";
    }
    if (sub_5232( uParam0, "HIBRG" ))
    {
        return "TAXI_GIVE_DEST_HICKEY_BRIDGE";
    }
    if (sub_5232( uParam0, "BQ_HICKOCK" ))
    {
        return "TAXI_GIVE_DEST_HICKOCK_ST";
    }
    if (sub_5232( uParam0, "BX_HOLLOWBACK" ))
    {
        return "TAXI_GIVE_DEST_HOLLOWBACK_ST";
    }
    if (sub_5232( uParam0, "BQ_HOOPER" ))
    {
        return "TAXI_GIVE_DEST_HOOPER_ST";
    }
    if (sub_5232( uParam0, "BQ_HOWARD" ))
    {
        return "TAXI_GIVE_DEST_HOWARD_ST";
    }
    if (sub_5232( uParam0, "NJ_HUBBARD" ))
    {
        return "TAXI_GIVE_DEST_HUBBARD_AVE";
    }
    if (sub_5232( uParam0, "BQ_HUNTINGTON" ))
    {
        return "TAXI_GIVE_DEST_HUNTINGTON_ST";
    }
    if (sub_5232( uParam0, "MMH17" ))
    {
        return "TAXI_GIVE_DEST_IDEOLOGY_CIRCLE";
    }
    if (sub_5232( uParam0, "BQ_INCHON" ))
    {
        return "TAXI_GIVE_DEST_INCHON_AVE";
    }
    if (sub_5232( uParam0, "SMH9" ))
    {
        return "TAXI_GIVE_DEST_IRON_ST";
    }
    if (sub_5232( uParam0, "BQ_IROQUIOS" ))
    {
        return "TAXI_GIVE_DEST_IROQUOIS_AVE";
    }
    if (sub_5232( uParam0, "MMH24" ))
    {
        return "TAXI_GIVE_DEST_IVY_DRIVE_NORTH";
    }
    if (sub_5232( uParam0, "MMH23" ))
    {
        return "TAXI_GIVE_DEST_IVY_DRIVE_SOUTH";
    }
    if (sub_5232( uParam0, "NJ_IVY" ))
    {
        return "TAXI_GIVE_DEST_IVY_RD";
    }
    if (sub_5232( uParam0, "BX_JACKHAMMER" ))
    {
        return "TAXI_GIVE_DEST_JACKHAMMER_ST";
    }
    if (sub_5232( uParam0, "SMH10" ))
    {
        return "TAXI_GIVE_DEST_JADE_ST";
    }
    if (sub_5232( uParam0, "BQ_JAMES" ))
    {
        return "TAXI_GIVE_DEST_JAMES_ST";
    }
    if (sub_5232( uParam0, "NJ_JIMJONES" ))
    {
        return "TAXI_GIVE_DEST_JIM_JONES_AVE";
    }
    if (sub_5232( uParam0, "BX_JOLIET" ))
    {
        return "TAXI_GIVE_DEST_JOLIET_ST";
    }
    if (sub_5232( uParam0, "NJ_JULIN" ))
    {
        return "TAXI_GIVE_DEST_JULIN_AVE";
    }
    if (sub_5232( uParam0, "NJ_KEMENY" ))
    {
        return "TAXI_GIVE_DEST_KEMENY_ST";
    }
    if (sub_5232( uParam0, "NJ_KENECKIE" ))
    {
        return "TAXI_GIVE_DEST_KENECKIE_AVE";
    }
    if (sub_5232( uParam0, "BQ_KID" ))
    {
        return "TAXI_GIVE_DEST_KID_ST";
    }
    if (sub_5232( uParam0, "NJ_KORESH" ))
    {
        return "TAXI_GIVE_DEST_KORESH_SQ";
    }
    if (sub_5232( uParam0, "SMH11" ))
    {
        return "TAXI_GIVE_DEST_KUNZITE_ST";
    }
    if (sub_5232( uParam0, "NJ_LATCHKEY" ))
    {
        return "TAXI_GIVE_DEST_LATCHKEY_AVE";
    }
    if (sub_5232( uParam0, "LEAPE" ))
    {
        return "TAXI_GIVE_DEST_LEAPERS_BRIDGE";
    }
    if (sub_5232( uParam0, "BX_LEAVENWORTH" ))
    {
        return "TAXI_GIVE_DEST_LEAVENWORTH_AVE";
    }
    if (sub_5232( uParam0, "NJ_LEMHI" ))
    {
        return "TAXI_GIVE_DEST_LEMHI_ST";
    }
    if (sub_5232( uParam0, "MMH12" ))
    {
        return "TAXI_GIVE_DEST_LIBERTY";
    }
    if (sub_5232( uParam0, "BQ_LIVINGSTON" ))
    {
        return "TAXI_GIVE_DEST_LIVINGSTON_ST";
    }
    if (sub_5232( uParam0, "NJ_LOCOWSKI" ))
    {
        return "TAXI_GIVE_DEST_LOCOWSKI_AVE";
    }
    if (sub_5232( uParam0, "BX_LOMPOC" ))
    {
        return "TAXI_GIVE_DEST_LOMPOC_AVE";
    }
    if (sub_5232( uParam0, "NJ_LONGJOHN" ))
    {
        return "TAXI_GIVE_DEST_LONG_JOHN_AVE";
    }
    if (sub_5232( uParam0, "SMH12" ))
    {
        return "TAXI_GIVE_DEST_LORIMAR_ST";
    }
    if (sub_5232( uParam0, "BX_LOTUS" ))
    {
        return "TAXI_GIVE_DEST_LOTUS_ST";
    }
    if (sub_5232( uParam0, "MMH14" ))
    {
        return "TAXI_GIVE_DEST_LUDLITE_ROW";
    }
    if (sub_5232( uParam0, "BQ_LYNCH" ))
    {
        return "TAXI_GIVE_DEST_LYNCH_ST";
    }
    if (sub_5232( uParam0, "NJ_LYNDON" ))
    {
        return "TAXI_GIVE_DEST_LYNDON_AVE";
    }
    if (sub_5232( uParam0, "NJ_MAHESH" ))
    {
        return "TAXI_GIVE_DEST_MAHESH_AVE";
    }
    if (sub_5232( uParam0, "NJ_MANDREL" ))
    {
        return "TAXI_GIVE_DEST_MANDREL_RD";
    }
    if (sub_5232( uParam0, "SMH13" ))
    {
        return "TAXI_GIVE_DEST_MANGANESE_ST";
    }
    if (sub_5232( uParam0, "NJ_MANZANO" ))
    {
        return "TAXI_GIVE_DEST_MANZANO_RD";
    }
    if (sub_5232( uParam0, "BQ_MASTERSON" ))
    {
        return "TAXI_GIVE_DEST_MASTERSON_ST";
    }
    if (sub_5232( uParam0, "BQ_MIDDLETON" ))
    {
        return "TAXI_GIVE_DEST_MIDDLETON_LANE";
    }
    if (sub_5232( uParam0, "BX_MILL" ))
    {
        return "TAXI_GIVE_DEST_MILL_ST";
    }
    if (sub_5232( uParam0, "BQ_MOHANET" ))
    {
        return "TAXI_GIVE_DEST_MOHANET_AVE";
    }
    if (sub_5232( uParam0, "BQ_MOHAWK" ))
    {
        return "TAXI_GIVE_DEST_MOHAWK_AVE";
    }
    if (sub_5232( uParam0, "BQ_MOHEGAN" ))
    {
        return "TAXI_GIVE_DEST_MOHEGAN_AVE";
    }
    if (sub_5232( uParam0, "BQ_MONTAUK" ))
    {
        return "TAXI_GIVE_DEST_MONTAUK_AVE";
    }
    if (sub_5232( uParam0, "NJ_MOOG" ))
    {
        return "TAXI_GIVE_DEST_MOOG_ST";
    }
    if (sub_5232( uParam0, "BQ_MORRIS" ))
    {
        return "TAXI_GIVE_DEST_MORRIS_ST";
    }
    if (sub_5232( uParam0, "NY_MUERI" ))
    {
        return "TAXI_GIVE_DEST_MUERI_ST";
    }
    if (sub_5232( uParam0, "BQ_MUNSEE" ))
    {
        return "TAXI_GIVE_DEST_MUNSEE_AVE";
    }
    if (sub_5232( uParam0, "NJ_MUSKETEER" ))
    {
        return "TAXI_GIVE_DEST_MUSKETTER_AVE";
    }
    if (sub_5232( uParam0, "NJ_MYUNG" ))
    {
        return "TAXI_GIVE_DEST_MYUNG";
    }
    if (sub_5232( uParam0, "NJ_NIBLICK" ))
    {
        return "TAXI_GIVE_DEST_NIBLICK_ST";
    }
    if (sub_5232( uParam0, "SMH14" ))
    {
        return "TAXI_GIVE_DEST_NICKEL_ST";
    }
    if (sub_5232( uParam0, "BX_NORTHEX" ))
    {
        return "TAXI_GIVE_DEST_NORTHERN_EXPRESSWAY";
    }
    if (sub_5232( uParam0, "NOWOB" ))
    {
        return "TAXI_GIVE_DEST_NORTHWOOD_HEIGHTS_BRIDGE";
    }
    if (sub_5232( uParam0, "NJ_NOUGAT" ))
    {
        return "TAXI_GIVE_DEST_NOUGAT_ST";
    }
    if (sub_5232( uParam0, "BQ_OAKLEY" ))
    {
        return "TAXI_GIVE_DEST_OAKLEY_ST";
    }
    if (sub_5232( uParam0, "SMH15" ))
    {
        return "TAXI_GIVE_DEST_OBSIDIAN_ST";
    }
    if (sub_5232( uParam0, "NJ_ODHNER" ))
    {
        return "TAXI_GIVE_DEST_ODHNER_AVE";
    }
    if (sub_5232( uParam0, "BQ_ONEIDA" ))
    {
        return "TAXI_GIVE_DEST_ONEIDA_AVE";
    }
    if (sub_5232( uParam0, "BQ_ONION" ))
    {
        return "TAXI_GIVE_DEST_ONION_ST";
    }
    if (sub_5232( uParam0, "BQ_ONONDAGA" ))
    {
        return "TAXI_GIVE_DEST_ONONDAGA_AVE";
    }
    if (sub_5232( uParam0, "NJ_ORTIZ" ))
    {
        return "TAXI_GIVE_DEST_ORTIZ_RD";
    }
    if (sub_5232( uParam0, "NJ_OWLCREEK" ))
    {
        return "TAXI_GIVE_DEST_OWL_CREEK";
    }
    if (sub_5232( uParam0, "BQ_PANCHO" ))
    {
        return "TAXI_GIVE_DEST_PANCHO_ST";
    }
    if (sub_5232( uParam0, "NJ_PANHANDLE" ))
    {
        return "TAXI_GIVE_DEST_PANHANDLE_RD";
    }
    if (sub_5232( uParam0, "BQ_PARR" ))
    {
        return "TAXI_GIVE_DEST_PARR_ST";
    }
    if (sub_5232( uParam0, "NJ_PERCELL" ))
    {
        return "TAXI_GIVE_DEST_PERCELL_RD";
    }
    if (sub_5232( uParam0, "NJ_PHALANX" ))
    {
        return "TAXI_GIVE_DEST_PHALANX_RD";
    }
    if (sub_5232( uParam0, "BX_PLANCHE" ))
    {
        return "TAXI_GIVE_DEST_PLANCHE_ST";
    }
    if (sub_5232( uParam0, "NJ_PLUMBER" ))
    {
        return "TAXI_GIVE_DEST_PLUMBERS_SKYWAY";
    }
    if (sub_5232( uParam0, "NJ_PLUMBBOB" ))
    {
        return "TAXI_GIVE_DEST_PLUMBOB_AVE";
    }
    if (sub_5232( uParam0, "NJ_PRAETORIAN" ))
    {
        return "TAXI_GIVE_DEST_PRAETORIAN_AVE";
    }
    if (sub_5232( uParam0, "MMH18" ))
    {
        return "TAXI_GIVE_DEST_PRESIDENT_AVE";
    }
    if (sub_5232( uParam0, "MMH28" ))
    {
        return "TAXI_GIVE_DEST_PRESIDENT_ST";
    }
    if (sub_5232( uParam0, "MMH11" ))
    {
        return "TAXI_GIVE_DEST_PRIVATEER_RD";
    }
    if (sub_5232( uParam0, "SMH16" ))
    {
        return "TAXI_GIVE_DEST_PYRITE_ST";
    }
    if (sub_5232( uParam0, "SMH17" ))
    {
        return "TAXI_GIVE_DEST_QUARTZ_ST";
    }
    if (sub_5232( uParam0, "NJ_RAEL" ))
    {
        return "TAXI_GIVE_DEST_RAEL_AVE";
    }
    if (sub_5232( uParam0, "NJ_RAND" ))
    {
        return "TAXI_GIVE_DEST_RAND_AVE";
    }
    if (sub_5232( uParam0, "NJ_REDWING" ))
    {
        return "TAXI_GIVE_DEST_RED_WING_AVE";
    }
    if (sub_5232( uParam0, "BQ_RINGO" ))
    {
        return "TAXI_GIVE_DEST_RINGO_ST";
    }
    if (sub_5232( uParam0, "BX_ROCKET" ))
    {
        return "TAXI_GIVE_DEST_ROCKET_ST";
    }
    if (sub_5232( uParam0, "NJ_ROEBUCK" ))
    {
        return "TAXI_GIVE_DEST_ROEBUCK_RD";
    }
    if (sub_5232( uParam0, "SMH18" ))
    {
        return "TAXI_GIVE_DEST_RUBY_ST";
    }
    if (sub_5232( uParam0, "BX_RYKERS" ))
    {
        return "TAXI_GIVE_DEST_RYKERS_AVE";
    }
    if (sub_5232( uParam0, "NJ_SACRAMENTO" ))
    {
        return "TAXI_GIVE_DEST_SACRAMENTO_AVE";
    }
    if (sub_5232( uParam0, "BQ_SANJACINTO" ))
    {
        return "TAXI_GIVE_DEST_SAN_JACINTO_AVE";
    }
    if (sub_5232( uParam0, "BX_SANQUEN" ))
    {
        return "TAXI_GIVE_DEST_SAN_QUENTIN_AVE";
    }
    if (sub_5232( uParam0, "BQ_SAPONI" ))
    {
        return "TAXI_GIVE_DEST_SAPONI_AVE";
    }
    if (sub_5232( uParam0, "BQ_SARATOGA" ))
    {
        return "TAXI_GIVE_DEST_SARATOGA_AVE";
    }
    if (sub_5232( uParam0, "BQ_SAVANNAH" ))
    {
        return "TAXI_GIVE_DEST_SAVANNAH_AVE";
    }
    if (sub_5232( uParam0, "NJ_SCHNEIDER" ))
    {
        return "TAXI_GIVE_DEST_SCHNEIDER_AVE";
    }
    if (sub_5232( uParam0, "NJ_SCULPIN" ))
    {
        return "TAXI_GIVE_DEST_SCULPIN_AVE";
    }
    if (sub_5232( uParam0, "BQ_SENECA" ))
    {
        return "TAXI_GIVE_DEST_SENECA_AVE";
    }
    if (sub_5232( uParam0, "BQ_SEYMOUR" ))
    {
        return "TAXI_GIVE_DEST_SEYMOUR_AVE";
    }
    if (sub_5232( uParam0, "SMH19" ))
    {
        return "TAXI_GIVE_DEST_SILICON_ST";
    }
    if (sub_5232( uParam0, "BX_SINGSING" ))
    {
        return "TAXI_GIVE_DEST_SING_SING_AVE";
    }
    if (sub_5232( uParam0, "MMH3" ))
    {
        return "TAXI_GIVE_DEST_SOUTH_PARKWAY";
    }
    if (sub_5232( uParam0, "BX_SPIN" ))
    {
        return "TAXI_GIVE_DEST_SPIN_ST";
    }
    if (sub_5232( uParam0, "BQ_STILLWATER" ))
    {
        return "TAXI_GIVE_DEST_STILLWATER_AVE";
    }
    if (sub_5232( uParam0, "BQ_STONE" ))
    {
        return "TAXI_GIVE_DEST_STONE_ST";
    }
    if (sub_5232( uParam0, "NJ_STORAX" ))
    {
        return "TAXI_GIVE_DEST_STORAX_RD";
    }
    if (sub_5232( uParam0, "NJ_STROWER" ))
    {
        return "TAXI_GIVE_DEST_STROWER_AVE";
    }
    if (sub_5232( uParam0, "BQ_SUNDANCE" ))
    {
        return "TAXI_GIVE_DEST_SUNDANCE_ST";
    }
    if (sub_5232( uParam0, "BX_SWITCH" ))
    {
        return "TAXI_GIVE_DEST_SWITCH_ST";
    }
    if (sub_5232( uParam0, "NJ_TENMILE" ))
    {
        return "TAXI_GIVE_DEST_TEN_MILE_ST";
    }
    if (sub_5232( uParam0, "BQ_THORTON" ))
    {
        return "TAXI_GIVE_DEST_THORNTON_ST";
    }
    if (sub_5232( uParam0, "BQ_TINCONDEROGA" ))
    {
        return "TAXI_GIVE_DEST_TINCONDEROGA_AVE";
    }
    if (sub_5232( uParam0, "NJ_TINDERBOX" ))
    {
        return "TAXI_GIVE_DEST_TINDERBOX_AVE";
    }
    if (sub_5232( uParam0, "NJ_TOGGLE" ))
    {
        return "TAXI_GIVE_DEST_TOGGLE_AVE";
    }
    if (sub_5232( uParam0, "SMH20" ))
    {
        return "TAXI_GIVE_DEST_TOPAZ_ST";
    }
    if (sub_5232( uParam0, "NJ_TRAEGER" ))
    {
        return "TAXI_GIVE_DEST_TRAEGER_RD";
    }
    if (sub_5232( uParam0, "BQ_TRENTON" ))
    {
        return "TAXI_GIVE_DEST_TRENTON_AVE";
    }
    if (sub_5232( uParam0, "NJ_TRINITY" ))
    {
        return "TAXI_GIVE_DEST_TRINITY_RD";
    }
    if (sub_5232( uParam0, "BQ_TULSA" ))
    {
        return "TAXI_GIVE_DEST_TULSA_ST";
    }
    if (sub_5232( uParam0, "BX_TURTLE" ))
    {
        return "TAXI_GIVE_DEST_TURTLE_ST";
    }
    if (sub_5232( uParam0, "BQ_TUTELO" ))
    {
        return "TAXI_GIVE_DEST_TUTELO_AVE";
    }
    if (sub_5232( uParam0, "MMH2" ))
    {
        return "TAXI_GIVE_DEST_UNION_DRIVE_EAST";
    }
    if (sub_5232( uParam0, "MMH4" ))
    {
        return "TAXI_GIVE_DEST_UNION_DRIVE_WEST";
    }
    if (sub_5232( uParam0, "BX_UPROCK" ))
    {
        return "TAXI_GIVE_DEST_UPROCK_ST";
    }
    if (sub_5232( uParam0, "SMH21" ))
    {
        return "TAXI_GIVE_DEST_URANIUM_ST";
    }
    if (sub_5232( uParam0, "BX_VALDEZ" ))
    {
        return "TAXI_GIVE_DEST_VALDEZ_ST";
    }
    if (sub_5232( uParam0, "BQ_VALLEYFORGE" ))
    {
        return "TAXI_GIVE_DEST_VALLEY_FORGE_AVE";
    }
    if (sub_5232( uParam0, "SMH22" ))
    {
        return "TAXI_GIVE_DEST_VAUXITE_ST";
    }
    if (sub_5232( uParam0, "MMH27" ))
    {
        return "TAXI_GIVE_DEST_VESPUCCI_CIRCUS";
    }
    if (sub_5232( uParam0, "NJ_VITULLO" ))
    {
        return "TAXI_GIVE_DEST_VITULLO_AVE";
    }
    if (sub_5232( uParam0, "BX_WALLKILL" ))
    {
        return "TAXI_GIVE_DEST_WALLKILL_AVE";
    }
    if (sub_5232( uParam0, "MMH29" ))
    {
        return "TAXI_GIVE_DEST_WALNUT_WAY";
    }
    if (sub_5232( uParam0, "BQ_WALTON" ))
    {
        return "TAXI_GIVE_DEST_WALTON_LANE";
    }
    if (sub_5232( uParam0, "BQ_WAPPINGER" ))
    {
        return "TAXI_GIVE_DEST_WAPPINGER_AVE";
    }
    if (sub_5232( uParam0, "SMH23" ))
    {
        return "TAXI_GIVE_DEST_WARDITE_ST";
    }
    if (sub_5232( uParam0, "BQ_WENROHRONON" ))
    {
        return "TAXI_GIVE_DEST_WENROHRONON_AVE";
    }
    if (sub_5232( uParam0, "MMH20" ))
    {
        return "TAXI_GIVE_DEST_WEST_WAY";
    }
    if (sub_5232( uParam0, "BX_WINDMILL" ))
    {
        return "TAXI_GIVE_DEST_WINDMILL_ST";
    }
    if (sub_5232( uParam0, "MMH9" ))
    {
        return "TAXI_GIVE_DEST_WONG_WAY";
    }
    if (sub_5232( uParam0, "BX_WORM" ))
    {
        return "TAXI_GIVE_DEST_WORM_ST";
    }
    if (sub_5232( uParam0, "SMH24" ))
    {
        return "TAXI_GIVE_DEST_XENOTIME_ST";
    }
    if (sub_5232( uParam0, "BQ_YORKTOWN" ))
    {
        return "TAXI_GIVE_DEST_YORKTOWN_AVE";
    }
    return "EMPTY";
}

int sub_5232(int iParam0, unknown uParam1)
{
    if (iParam0 == (GET_HASH_KEY( uParam1 )))
    {
        return 1;
    }
    return 0;
}

int sub_20464()
{
    unknown uVar2;
    int iVar3;
    int I;

    if (NOT (IS_CHAR_INJURED( l_U195 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U195 ))
        {
            return 1;
        }
    }
    if (IS_PLAYER_PLAYING( sub_1516() ))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( sub_1572() ))
        {
            return 1;
        }
    }
    if ((sub_2238( l_U199 )) || (sub_3604()))
    {
        return 1;
    }
    if (IS_PLAYER_PLAYING( sub_1516() ))
    {
        if (DOES_GROUP_EXIST( sub_1346() ))
        {
            GET_GROUP_SIZE( sub_1346(), ref I, ref iVar3 );
            if (iVar3 > 0)
            {
                for ( I = 0; I < iVar3; I++ )
                {
                    GET_GROUP_MEMBER( sub_1346(), I, ref uVar2 );
                    if (NOT (IS_CHAR_INJURED( uVar2 )))
                    {
                        if (IS_AMBIENT_SPEECH_PLAYING( uVar2 ))
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

int sub_23605(int iParam0)
{
    if (iParam0 == g_U2239)
    {
        return 1;
    }
    return 0;
}

void sub_23693(int iParam0)
{
    if (NOT (l_U171 == iParam0))
    {
        l_U171 = iParam0;
        l_U172 = 0;
    }
    return;
}

int sub_24981()
{
    int I;

    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CAR_DEAD( l_U340 )))
        {
            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U340, I )))
            {
                GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U340, I, ref l_U196 );
                if (NOT (IS_CHAR_INJURED( l_U196 )))
                {
                    if ((NOT (IS_GROUP_MEMBER( l_U196, sub_1346() ))) AND (NOT (l_U196 == sub_1572())))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_25366()
{
    int I;

    l_U180 = 0;
    sub_25381();
    sub_25541( 8, 0 );
    sub_25541( 0, 0 );
    sub_25541( 1, 0 );
    sub_25541( 2, 0 );
    sub_25541( 82, 0 );
    sub_25541( 31, 1 );
    sub_25541( 32, 1 );
    sub_25541( 69, 1 );
    sub_25541( 34, 1 );
    sub_25541( 35, 1 );
    sub_25541( 28, 1 );
    sub_25541( 36, 1 );
    sub_25541( 37, 1 );
    sub_25541( 26, 1 );
    sub_25541( 25, 1 );
    sub_25541( 74, 1 );
    sub_25541( 38, 1 );
    sub_25541( 39, 1 );
    sub_25541( 40, 1 );
    sub_25541( 41, 1 );
    sub_25541( 42, 1 );
    sub_25541( 43, 1 );
    sub_25541( 44, 1 );
    sub_25541( 45, 1 );
    sub_25541( 27, 1 );
    sub_25541( 23, 1 );
    sub_25541( 55, 1 );
    sub_25541( 53, 1 );
    sub_25541( 72, 0 );
    sub_25541( 77, 0 );
    sub_25541( 78, 0 );
    sub_25541( 76, 0 );
    sub_25541( 92, 0 );
    sub_25541( 54, 0 );
    sub_25541( 33, 0 );
    sub_25541( 80, 0 );
    sub_25541( 29, 0 );
    sub_25541( 59, 0 );
    sub_25541( 75, 1 );
    sub_25541( 60, 1 );
    sub_25541( 61, 1 );
    sub_25541( 62, 1 );
    sub_25541( 66, 0 );
    sub_25541( 70, 0 );
    sub_25541( 71, 0 );
    sub_25541( 56, 1 );
    sub_25541( 58, 1 );
    sub_25541( 46, 0 );
    sub_25541( 49, 0 );
    sub_25541( 52, 0 );
    sub_25541( 48, 1 );
    sub_25541( 24, 0 );
    sub_25541( 50, 0 );
    sub_25541( 47, 0 );
    sub_25541( 21, 0 );
    sub_25541( 22, 0 );
    sub_25541( 51, 0 );
    sub_25541( 57, 0 );
    if (g_U10978)
    {
        if (sub_28889() == 0)
        {
            if (DOES_BLIP_EXIST( g_U2221 ))
            {
                for ( I = 0; I < 30; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U205[I]._fU0 ))
                    {
                        if (l_U205[I]._fU0 == g_U2221)
                        {
                            l_U173 = I;
                            I = 30;
                        }
                    }
                }
            }
        }
    }
    else if (NOT (g_U2221 == nil))
    {
        g_U2221 = nil;
    }
    if (g_U10978)
    {
        if (NOT (g_U2222 == 6))
        {
            for ( I = 0; I < 30; I++ )
            {
                if (DOES_BLIP_EXIST( l_U205[I]._fU0 ))
                {
                    if ((sub_26255( l_U205[I]._fU0 )) == g_U2222)
                    {
                        l_U173 = I;
                        I = 30;
                    }
                }
            }
        }
    }
    else if (NOT (g_U2222 == 6))
    {
        g_U2222 = 6;
    }
    return;
}

void sub_25381()
{
    int I;

    for ( I = 0; I < 30; I++ )
    {
        l_U205[I]._fU0 = nil;
        l_U205[I]._fU4 = 0;
        l_U205[I]._fU8 = 0;
    }
    l_U296._fU0 = nil;
    l_U296._fU4 = 0;
    l_U296._fU8 = 0;
    l_U299._fU0 = nil;
    l_U299._fU4 = 0;
    l_U299._fU8 = 0;
    l_U302._fU0 = nil;
    l_U302._fU4 = 0;
    l_U302._fU8 = 0;
    l_U180 = 0;
    return;
}

void sub_25541(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    int iVar8;

    iVar8 = GET_FIRST_BLIP_INFO_ID( uParam0 );
    while (DOES_BLIP_EXIST( iVar8 ))
    {
        if (l_U180 < 30)
        {
            if (sub_25592( iVar8 ))
            {
                if (sub_25663( iVar8 ))
                {
                    sub_26084( ref iVar8, ref uVar4 );
                    if (sub_26242( uVar4 ))
                    {
                        if (NOT (g_U2223 == iVar8))
                        {
                            bVar7 = false;
                            switch (uParam0)
                            {
                                case 8:
                                case 0:
                                case 1:
                                case 2:
                                case 23:
                                case 25:
                                case 26:
                                case 27:
                                case 28:
                                case 31:
                                case 32:
                                case 34:
                                case 35:
                                case 36:
                                case 37:
                                case 38:
                                case 39:
                                case 40:
                                case 41:
                                case 42:
                                case 43:
                                case 44:
                                case 45:
                                case 46:
                                case 54:
                                case 29:
                                case 59:
                                case 60:
                                case 61:
                                case 62:
                                case 33:
                                case 56:
                                case 58:
                                case 48:
                                case 49:
                                case 52:
                                case 24:
                                case 50:
                                case 21:
                                case 22:
                                case 47:
                                case 51:
                                case 57:
                                case 63:
                                case 64:
                                case 65:
                                case 66:
                                case 69:
                                case 70:
                                case 71:
                                case 72:
                                case 74:
                                case 75:
                                case 76:
                                case 77:
                                case 78:
                                case 80:
                                case 82:
                                case 92:
                                case 55:
                                case 53:
                                bVar7 = true;
                                break;
                                default:
                                bVar7 = false;
                                break;
                            }
                            if (DOES_BLIP_EXIST( g_U2224 ))
                            {
                                if ((sub_26255( iVar8 )) == 1)
                                {
                                    if (NOT (g_U2224 == iVar8))
                                    {
                                        bVar7 = false;
                                    }
                                }
                            }
                            if (bVar7)
                            {
                                bVar7 = false;
                                if ((((((GET_BLIP_INFO_ID_TYPE( iVar8 )) == 4) || ((GET_BLIP_INFO_ID_TYPE( iVar8 )) == 5)) || ((GET_BLIP_INFO_ID_TYPE( iVar8 )) == 6)) || ((GET_BLIP_INFO_ID_TYPE( iVar8 )) == 3)) || (sub_27143( iVar8 )))
                                {
                                    bVar7 = true;
                                }
                                if (((GET_BLIP_INFO_ID_TYPE( iVar8 )) == 5) AND (GET_MISSION_FLAG()))
                                {
                                    bVar7 = false;
                                }
                                if (bVar7)
                                {
                                    sub_27849( uVar4, uParam1 );
                                }
                            }
                        }
                    }
                }
            }
        }
        iVar8 = GET_NEXT_BLIP_INFO_ID( uParam0 );
    }
    return;
}

int sub_25592(unknown uParam0)
{
    int iVar3;

    if (DOES_BLIP_EXIST( uParam0 ))
    {
        iVar3 = GET_BLIP_INFO_ID_DISPLAY( uParam0 );
        if ((NOT (iVar3 == 0)) AND (NOT (iVar3 == 1)))
        {
            return 1;
        }
    }
    return 0;
}

void sub_25663(unknown uParam0)
{
    return sub_26012( sub_25674( uParam0 ) );
}

void sub_25674(unknown uParam0)
{
    unknown uVar3;
    vector Result;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    Result = {0.00000000, 0.00000000, 0.00000000};
    uVar3 = GET_BLIP_INFO_ID_TYPE( uParam0 );
    switch (uVar3)
    {
        case 1:
        uVar7 = GET_BLIP_INFO_ID_CAR_INDEX( uParam0 );
        if (IS_VEH_DRIVEABLE( uVar7 ))
        {
            GET_CAR_COORDINATES( uVar7, ref Result.x, ref Result.y, ref Result.z );
        }
        break;
        case 2:
        uVar8 = GET_BLIP_INFO_ID_PED_INDEX( uParam0 );
        if (NOT (IS_CHAR_INJURED( uVar8 )))
        {
            GET_CHAR_COORDINATES( uVar8, ref Result.x, ref Result.y, ref Result.z );
        }
        break;
        case 3:
        uVar9 = GET_BLIP_INFO_ID_OBJECT_INDEX( uParam0 );
        if (DOES_OBJECT_EXIST( uVar9 ))
        {
            GET_OBJECT_COORDINATES( uVar9, ref Result.x, ref Result.y, ref Result.z );
        }
        break;
        case 4:
        GET_BLIP_COORDS( uParam0, ref Result );
        break;
        case 6:
        uVar10 = GET_BLIP_INFO_ID_PICKUP_INDEX( uParam0 );
        if (DOES_PICKUP_EXIST( uVar10 ))
        {
            GET_PICKUP_COORDINATES( uVar10, ref Result.x, ref Result.y, ref Result.z );
        }
        break;
        case 5:
        GET_BLIP_COORDS( uParam0, ref Result );
        break;
    }
    return Result;
}

int sub_26012(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = GET_INT_STAT( 363 );
    iVar6 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    if (iVar6 <= iVar5)
    {
        return 1;
    }
    return 0;
}

void sub_26084(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (IS_PLAYER_PLAYING( sub_1516() ))
    {
        GET_CHAR_COORDINATES( sub_1572(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    iParam1->_fU0 = (uParam0^);
    if (NOT (iParam1->_fU0 == g_U2220))
    {
        FIND_STREET_NAME_AT_POSITION( sub_25674( iParam1->_fU0 ), ref uVar4, ref iVar5 );
    }
    else
    {
        FIND_STREET_NAME_AT_POSITION( g_U2235, ref uVar4, ref iVar5 );
    }
    iParam1->_fU4 = uVar4;
    if (NOT (iVar5 == 0))
    {
        iParam1->_fU8 = iVar5;
    }
    else
    {
        iParam1->_fU8 = uVar4;
    }
    return;
}

int sub_26242(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    if (NOT ((sub_26255( uParam0._fU0 )) == 1))
    {
        fVar5 = sub_26336( uParam0._fU0 );
        if (fVar5 > 40.00000000)
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_26255(unknown uParam0)
{
    int Result;

    Result = 6;
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        Result = GET_BLIP_SPRITE( uParam0 );
        if (((Result == 0) || (Result == 1)) || (Result == 2))
        {
            Result = 1;
        }
    }
    return Result;
}

void sub_26336(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;

    vVar9 = {0.00000000, 0.00000000, 1E7};
    if (IS_PLAYER_PLAYING( sub_1516() ))
    {
        GET_CHAR_COORDINATES( sub_1572(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        if (DOES_BLIP_EXIST( uParam0 ))
        {
            vVar6 = {sub_25674( uParam0 )};
            vVar9 = {vVar6 - vVar3};
        }
    }
    return VMAG( vVar9 );
}

int sub_27143(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;
    int iVar7;
    float fVar8;

    GET_BLIP_COLOUR( uParam0, ref iVar7 );
    if ((((iVar7 == 7) || (iVar7 == 9)) || (iVar7 == 18)) || (iVar7 == 8))
    {
        uVar6 = GET_BLIP_INFO_ID_TYPE( uParam0 );
        switch (uVar6)
        {
            case 2:
            uVar3 = GET_BLIP_INFO_ID_PED_INDEX( uParam0 );
            if (NOT (IS_CHAR_INJURED( uVar3 )))
            {
                if (NOT (sub_27258( uVar3 )))
                {
                    if (NOT (IS_GROUP_MEMBER( uVar3, sub_1346() )))
                    {
                        if (IS_PLAYER_PLAYING( sub_1516() ))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( uVar3, sub_1572(), 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                if (IS_CHAR_IN_ANY_CAR( uVar3 ))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uVar3, ref iVar5 );
                                    if (IS_VEH_DRIVEABLE( iVar5 ))
                                    {
                                        GET_DRIVER_OF_CAR( iVar5, ref iVar4 );
                                        if (DOES_CHAR_EXIST( iVar4 ))
                                        {
                                            if (g_U64923 == iVar4)
                                            {
                                                return 0;
                                            }
                                        }
                                        if (iVar5 == g_U2239)
                                        {
                                            return 0;
                                        }
                                        else if (IS_PLAYBACK_GOING_ON_FOR_CAR( iVar5 ))
                                        {
                                            return 0;
                                        }
                                        else if (NOT (sub_27526( iVar5 )))
                                        {
                                            return 0;
                                        };;;
                                    }
                                }
                                GET_CHAR_SPEED( uVar3, ref fVar8 );
                                if ((fVar8 < 0.10000000) AND (fVar8 > -0.10000000))
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 1:
            iVar5 = GET_BLIP_INFO_ID_CAR_INDEX( uParam0 );
            if (DOES_VEHICLE_EXIST( iVar5 ))
            {
                if (IS_VEH_DRIVEABLE( iVar5 ))
                {
                    if (IS_PLAYER_PLAYING( sub_1516() ))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_1572(), iVar5, 10.00000000, 10.00000000, 10.00000000, 0 )))
                        {
                            if (NOT (IS_CAR_MODEL( iVar5, 2046537925 )))
                            {
                                if (sub_27526( iVar5 ))
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 4:
            return 1;
            break;
        }
    }
    return 0;
}

int sub_27258(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_PED_TYPE( uParam0, ref iVar3 );
        if ((iVar3 == 6) || (iVar3 == 2))
        {
            return 1;
        }
    }
    return 0;
}

int sub_27526(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 < 0.50000000)
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_27849(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    int I;
    int iVar7;

    I = 0;
    iVar7 = 0;
    for ( I = 0; I < 30; I++ )
    {
        if ((sub_26255( l_U205[I]._fU0 )) == (sub_26255( uParam0._fU0 )))
        {
            iVar7 = I;
            I = 30;
        }
        else if (I == l_U180)
        {
            iVar7 = I;
            I = 30;
        }
    }
    I = 0;
    for ( I = 0; I < 30; I++ )
    {
        if (I < iVar7)
        {
            I = iVar7;
        }
        if (I < l_U180)
        {
            if ((sub_26255( l_U205[I]._fU0 )) == (sub_26255( uParam0._fU0 )))
            {
                if (sub_28036( uParam0, l_U205[I] ))
                {
                    if (bParam3)
                    {
                        sub_28099( uParam0, I );
                        I = 30;
                        return;
                    }
                    else
                    {
                        sub_28145( uParam0, I );
                        l_U180++;
                        I = 30;
                        return;
                    }
                }
                else if (bParam3)
                {
                    I = 30;
                    return;
                }
            }
            else
            {
                sub_28145( uParam0, I );
                l_U180++;
                I = 30;
                return;
            }
        }
        else
        {
            sub_28145( uParam0, I );
            l_U180++;
            I = 30;
            return;
        }
    }
    return;
}

int sub_28036(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((sub_26336( uParam0._fU0 )) < (sub_26336( uParam3._fU0 )))
    {
        return 1;
    }
    return 0;
}

void sub_28099(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U205[uParam3] = {uParam0};
    return;
}

void sub_28145(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_28156( uParam3 );
    l_U205[uParam3] = {uParam0};
    return;
}

void sub_28156(int iParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    for ( I = 29; I > iParam0; I-- )
    {
        uVar4 = {l_U205[I - 1]};
        l_U205[I] = {uVar4};
    }
    return;
}

void sub_28889()
{
    int Result;
    unknown uVar3;

    Result = 0;
    l_U135 = 1;
    uVar3 = GET_FIRST_BLIP_INFO_ID( 0 );
    while (DOES_BLIP_EXIST( uVar3 ))
    {
        if (sub_25592( uVar3 ))
        {
            if (sub_25663( uVar3 ))
            {
                if (((((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 4) || ((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 6)) || ((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 3)) || (sub_27143( uVar3 )))
                {
                    Result++;
                }
            }
        }
        uVar3 = GET_NEXT_BLIP_INFO_ID( 0 );
    }
    uVar3 = GET_FIRST_BLIP_INFO_ID( 1 );
    while (DOES_BLIP_EXIST( uVar3 ))
    {
        if (sub_25592( uVar3 ))
        {
            if (sub_25663( uVar3 ))
            {
                if (((((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 4) || ((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 6)) || ((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 3)) || (sub_27143( uVar3 )))
                {
                    Result++;
                }
            }
        }
        uVar3 = GET_NEXT_BLIP_INFO_ID( 1 );
    }
    uVar3 = GET_FIRST_BLIP_INFO_ID( 2 );
    while (DOES_BLIP_EXIST( uVar3 ))
    {
        if (sub_25592( uVar3 ))
        {
            if (sub_25663( uVar3 ))
            {
                if (((((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 4) || ((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 6)) || ((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 3)) || (sub_27143( uVar3 )))
                {
                    Result++;
                }
            }
        }
        uVar3 = GET_NEXT_BLIP_INFO_ID( 2 );
    }
    uVar3 = GET_FIRST_BLIP_INFO_ID( 8 );
    if (DOES_BLIP_EXIST( uVar3 ))
    {
        if (sub_25592( uVar3 ))
        {
            if (sub_25663( uVar3 ))
            {
                Result++;
            }
        }
    }
    l_U135 = 0;
    return Result;
}

void sub_29767()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;

    if ((DOES_OBJECT_EXIST( l_U194 )) AND (NOT (l_U174 == -1)))
    {
        fVar10 = 1.26400000;
        fVar11 = 0.60400000;
        fVar12 = 0.60400000;
        if (IS_JAPANESE_VERSION())
        {
            fVar10 = 0.94800000;
            fVar11 = 0.45300000;
            fVar12 = 0.45300000;
        }
        if (NOT (l_U171 == 5))
        {
            sub_29875();
        }
        if (l_U108)
        {
            SET_TEXT_RENDER_ID( l_U174 );
        }
        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
        if (l_U104)
        {
            if (l_U129)
            {
                if (DOES_BLIP_EXIST( l_U296._fU0 ))
                {
                    if ((sub_26255( l_U296._fU0 )) == 1)
                    {
                        if (DOES_BLIP_EXIST( l_U296._fU0 ))
                        {
                            GET_BLIP_COLOUR( l_U296._fU0, ref uVar3 );
                        }
                        GET_HUD_COLOUR( uVar3, ref uVar4, ref uVar5, ref uVar6, ref uVar7 );
                        sub_33832( uVar4, uVar5, uVar6, ref uVar4, ref uVar5, ref uVar6 );
                    }
                    fVar2 = (0.07500000 - 0.60000000) + (l_U150 * 0.60000000);
                    if (fVar2 < l_U146)
                    {
                        SET_TEXT_FONT( l_U305 );
                        if (IS_JAPANESE_VERSION())
                        {
                            SET_TEXT_FONT( 2 );
                        }
                        SET_TEXT_SCALE( fVar10, 3.93000000 );
                        SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                        SET_TEXT_CENTRE( 0 );
                        SET_TEXT_RIGHT_JUSTIFY( 0 );
                        if ((sub_26255( l_U296._fU0 )) == 1)
                        {
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        SET_TEXT_BACKGROUND( 0 );
                        SET_TEXT_PROPORTIONAL( 1 );
                        sub_34115( 0.26500000, fVar2, l_U296._fU0 );
                    }
                    if (l_U123)
                    {
                        fVar2 = (0.33700000 - 0.60000000) + (l_U150 * 0.60000000);
                        if (fVar2 < l_U146)
                        {
                            SET_TEXT_FONT( l_U305 );
                            if (IS_JAPANESE_VERSION())
                            {
                                SET_TEXT_FONT( 2 );
                            }
                            SET_TEXT_SCALE( fVar11, 2.32300000 );
                            SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                            SET_TEXT_CENTRE( 0 );
                            SET_TEXT_RIGHT_JUSTIFY( 0 );
                            if ((sub_26255( l_U296._fU0 )) == 1)
                            {
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            else
                            {
                                sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            SET_TEXT_BACKGROUND( 0 );
                            SET_TEXT_PROPORTIONAL( 1 );
                            if ((l_U296._fU4 == l_U296._fU8) || ((sub_34590( l_U296._fU4, l_U296._fU8 )) > 37))
                            {
                                DISPLAY_TEXT_WITH_SUBSTRING_GIVEN_HASH_KEY( 0.27000000, fVar2, "STRTNM1", l_U296._fU4 );
                            }
                            else
                            {
                                DISPLAY_TEXT_WITH_TWO_SUBSTRINGS_GIVEN_HASH_KEYS( 0.27000000, fVar2, "STRTNM2", l_U296._fU4, l_U296._fU8 );
                            }
                        }
                        fVar2 = (0.47600000 - 0.60000000) + (l_U150 * 0.60000000);
                        if (fVar2 < l_U146)
                        {
                            SET_TEXT_FONT( l_U305 );
                            if (IS_JAPANESE_VERSION())
                            {
                                SET_TEXT_FONT( 2 );
                            }
                            SET_TEXT_SCALE( fVar12, 2.32300000 );
                            SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                            SET_TEXT_CENTRE( 0 );
                            SET_TEXT_RIGHT_JUSTIFY( 0 );
                            if ((sub_26255( l_U296._fU0 )) == 1)
                            {
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            else
                            {
                                sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            SET_TEXT_BACKGROUND( 0 );
                            SET_TEXT_PROPORTIONAL( 1 );
                            uVar8 = sub_34949( l_U296._fU0 );
                            uVar9 = sub_35654( l_U296._fU0 );
                            if ((NOT (COMPARE_STRING( uVar8, "FULSTP" ))) AND (NOT ((sub_35741( uVar9, uVar8 )) > 37)))
                            {
                                DISPLAY_TEXT_WITH_TWO_STRINGS( 0.27000000, fVar2, "STRTNM3", uVar9, uVar8 );
                            }
                            else
                            {
                                DISPLAY_TEXT_WITH_STRING( 0.27000000, fVar2, "STRTNM1", uVar9 );
                            }
                        }
                    }
                    if (l_U110)
                    {
                        if ((sub_26255( l_U296._fU0 )) == 1)
                        {
                            DRAW_SPRITE( l_U307, 0.09700000, (0.32000000 - 0.60000000) + (l_U150 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_33832( 255, 255, 255, ref uVar4, ref uVar5, ref uVar6 );
                            DRAW_SPRITE( l_U307, 0.09700000, (0.32000000 - 0.60000000) + (l_U150 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                        }
                    }
                }
            }
        }
        if (l_U130)
        {
            if (DOES_BLIP_EXIST( l_U299._fU0 ))
            {
                if ((sub_26255( l_U299._fU0 )) == 1)
                {
                    if (DOES_BLIP_EXIST( l_U299._fU0 ))
                    {
                        GET_BLIP_COLOUR( l_U299._fU0, ref uVar3 );
                    }
                    GET_HUD_COLOUR( uVar3, ref uVar4, ref uVar5, ref uVar6, ref uVar7 );
                    sub_33832( uVar4, uVar5, uVar6, ref uVar4, ref uVar5, ref uVar6 );
                }
                fVar2 = 0.07500000 + (l_U150 * 0.60000000);
                if (fVar2 < l_U146)
                {
                    SET_TEXT_FONT( l_U305 );
                    if (IS_JAPANESE_VERSION())
                    {
                        SET_TEXT_FONT( 2 );
                    }
                    SET_TEXT_SCALE( fVar10, 3.93000000 );
                    SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                    SET_TEXT_CENTRE( 0 );
                    SET_TEXT_RIGHT_JUSTIFY( 0 );
                    if ((sub_26255( l_U299._fU0 )) == 1)
                    {
                        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                    }
                    else
                    {
                        sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                    }
                    SET_TEXT_BACKGROUND( 0 );
                    SET_TEXT_PROPORTIONAL( 1 );
                    sub_34115( 0.26500000, fVar2, l_U299._fU0 );
                }
                if (l_U123)
                {
                    fVar2 = 0.33700000 + (l_U150 * 0.60000000);
                    if (fVar2 < l_U146)
                    {
                        SET_TEXT_FONT( l_U305 );
                        if (IS_JAPANESE_VERSION())
                        {
                            SET_TEXT_FONT( 2 );
                        }
                        SET_TEXT_SCALE( fVar11, 2.32300000 );
                        SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                        SET_TEXT_CENTRE( 0 );
                        SET_TEXT_RIGHT_JUSTIFY( 0 );
                        if ((sub_26255( l_U299._fU0 )) == 1)
                        {
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        SET_TEXT_BACKGROUND( 0 );
                        SET_TEXT_PROPORTIONAL( 1 );
                        if ((l_U299._fU4 == l_U299._fU8) || ((sub_34590( l_U299._fU4, l_U299._fU8 )) > 37))
                        {
                            DISPLAY_TEXT_WITH_SUBSTRING_GIVEN_HASH_KEY( 0.27000000, fVar2, "STRTNM1", l_U299._fU4 );
                        }
                        else
                        {
                            DISPLAY_TEXT_WITH_TWO_SUBSTRINGS_GIVEN_HASH_KEYS( 0.27000000, fVar2, "STRTNM2", l_U299._fU4, l_U299._fU8 );
                        }
                    }
                    fVar2 = 0.47600000 + (l_U150 * 0.60000000);
                    if (fVar2 < l_U146)
                    {
                        SET_TEXT_FONT( l_U305 );
                        if (IS_JAPANESE_VERSION())
                        {
                            SET_TEXT_FONT( 2 );
                        }
                        SET_TEXT_SCALE( fVar12, 2.32300000 );
                        SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                        SET_TEXT_CENTRE( 0 );
                        SET_TEXT_RIGHT_JUSTIFY( 0 );
                        if ((sub_26255( l_U299._fU0 )) == 1)
                        {
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        SET_TEXT_BACKGROUND( 0 );
                        SET_TEXT_PROPORTIONAL( 1 );
                        uVar8 = sub_34949( l_U299._fU0 );
                        uVar9 = sub_35654( l_U299._fU0 );
                        if ((NOT (COMPARE_STRING( uVar8, "FULSTP" ))) AND (NOT ((sub_35741( uVar9, uVar8 )) > 37)))
                        {
                            DISPLAY_TEXT_WITH_TWO_STRINGS( 0.27000000, fVar2, "STRTNM3", uVar9, uVar8 );
                        }
                        else
                        {
                            DISPLAY_TEXT_WITH_STRING( 0.27000000, fVar2, "STRTNM1", uVar9 );
                        }
                    }
                }
                if (l_U110)
                {
                    if ((sub_26255( l_U299._fU0 )) == 1)
                    {
                        DRAW_SPRITE( l_U308, 0.09700000, 0.32000000 + (l_U150 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                    }
                    else
                    {
                        sub_33832( 255, 255, 255, ref uVar4, ref uVar5, ref uVar6 );
                        DRAW_SPRITE( l_U308, 0.09700000, 0.32000000 + (l_U150 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                    }
                }
            }
        }
        if (l_U104)
        {
            if (l_U131)
            {
                if (DOES_BLIP_EXIST( l_U302._fU0 ))
                {
                    if ((sub_26255( l_U302._fU0 )) == 1)
                    {
                        if (DOES_BLIP_EXIST( l_U302._fU0 ))
                        {
                            GET_BLIP_COLOUR( l_U302._fU0, ref uVar3 );
                        }
                        GET_HUD_COLOUR( uVar3, ref uVar4, ref uVar5, ref uVar6, ref uVar7 );
                        sub_33832( uVar4, uVar5, uVar6, ref uVar4, ref uVar5, ref uVar6 );
                    }
                    fVar2 = (0.07500000 + 0.60000000) + (l_U150 * 0.60000000);
                    if (fVar2 < l_U146)
                    {
                        SET_TEXT_FONT( l_U305 );
                        if (IS_JAPANESE_VERSION())
                        {
                            SET_TEXT_FONT( 2 );
                        }
                        SET_TEXT_SCALE( fVar10, 3.93000000 );
                        SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                        SET_TEXT_CENTRE( 0 );
                        SET_TEXT_RIGHT_JUSTIFY( 0 );
                        if ((sub_26255( l_U302._fU0 )) == 1)
                        {
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        SET_TEXT_BACKGROUND( 0 );
                        SET_TEXT_PROPORTIONAL( 1 );
                        sub_34115( 0.26500000, fVar2, l_U302._fU0 );
                    }
                    if (l_U123)
                    {
                        fVar2 = (0.33700000 + 0.60000000) + (l_U150 * 0.60000000);
                        if (fVar2 < l_U146)
                        {
                            SET_TEXT_FONT( l_U305 );
                            if (IS_JAPANESE_VERSION())
                            {
                                SET_TEXT_FONT( 2 );
                            }
                            SET_TEXT_SCALE( fVar11, 2.32300000 );
                            SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                            SET_TEXT_CENTRE( 0 );
                            SET_TEXT_RIGHT_JUSTIFY( 0 );
                            if ((sub_26255( l_U302._fU0 )) == 1)
                            {
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            else
                            {
                                sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            SET_TEXT_BACKGROUND( 0 );
                            SET_TEXT_PROPORTIONAL( 1 );
                            if ((l_U302._fU4 == l_U302._fU8) || ((sub_34590( l_U302._fU4, l_U302._fU8 )) > 37))
                            {
                                DISPLAY_TEXT_WITH_SUBSTRING_GIVEN_HASH_KEY( 0.27000000, fVar2, "STRTNM1", l_U302._fU4 );
                            }
                            else
                            {
                                DISPLAY_TEXT_WITH_TWO_SUBSTRINGS_GIVEN_HASH_KEYS( 0.27000000, fVar2, "STRTNM2", l_U302._fU4, l_U302._fU8 );
                            }
                        }
                        fVar2 = (0.47600000 + 0.60000000) + (l_U150 * 0.60000000);
                        if (fVar2 < l_U146)
                        {
                            SET_TEXT_FONT( l_U305 );
                            if (IS_JAPANESE_VERSION())
                            {
                                SET_TEXT_FONT( 2 );
                            }
                            SET_TEXT_SCALE( fVar12, 2.32300000 );
                            SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                            SET_TEXT_CENTRE( 0 );
                            SET_TEXT_RIGHT_JUSTIFY( 0 );
                            if ((sub_26255( l_U302._fU0 )) == 1)
                            {
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            else
                            {
                                sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            SET_TEXT_BACKGROUND( 0 );
                            SET_TEXT_PROPORTIONAL( 1 );
                            uVar8 = sub_34949( l_U302._fU0 );
                            uVar9 = sub_35654( l_U302._fU0 );
                            if ((NOT (COMPARE_STRING( uVar8, "FULSTP" ))) AND (NOT ((sub_35741( uVar9, uVar8 )) > 37)))
                            {
                                DISPLAY_TEXT_WITH_TWO_STRINGS( 0.27000000, fVar2, "STRTNM3", uVar9, uVar8 );
                            }
                            else
                            {
                                DISPLAY_TEXT_WITH_STRING( 0.27000000, fVar2, "STRTNM1", uVar9 );
                            }
                        }
                    }
                    if (l_U110)
                    {
                        if ((sub_26255( l_U302._fU0 )) == 1)
                        {
                            DRAW_SPRITE( l_U309, 0.09700000, (0.32000000 + 0.60000000) + (l_U150 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_33832( 255, 255, 255, ref uVar4, ref uVar5, ref uVar6 );
                            DRAW_SPRITE( l_U309, 0.09700000, (0.32000000 + 0.60000000) + (l_U150 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                        }
                    }
                }
            }
        }
        if (g_U2225)
        {
            ProtectedSet(l_U167, 0.00000000);
        }
        iVar13 = FLOOR( ProtectedGet(l_U167) );
        iVar14 = FLOOR( (TO_FLOAT( iVar13 )) * 0.00100000 );
        iVar13 += iVar14 * 64536;
        iVar15 = FLOOR( (TO_FLOAT( iVar13 )) * 0.01000000 );
        iVar13 += iVar15 * 65436;
        iVar16 = FLOOR( (TO_FLOAT( iVar13 )) * 0.10000000 );
        iVar13 += iVar16 * -10;
        iVar17 = iVar13;
        SET_TEXT_FONT( l_U305 );
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_FONT( 2 );
        }
        SET_TEXT_SCALE( 1.66100000, 4.80000000 );
        SET_TEXT_WRAP( 0.00000000, 1.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (NOT (4 == GET_CURRENT_LANGUAGE()))
        {
            DISPLAY_TEXT( l_U151[0], 0.73100000, "DOLLR" );
        }
        else
        {
            DISPLAY_TEXT( l_U151[4], 0.73100000, "DOLLR" );
        }
        SET_TEXT_FONT( l_U305 );
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_FONT( 2 );
        }
        SET_TEXT_SCALE( 1.66100000, 4.80000000 );
        SET_TEXT_WRAP( 0.00000000, 1.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (NOT (4 == GET_CURRENT_LANGUAGE()))
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U151[1], 0.73100000, "NUMBR", iVar14 );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U151[0], 0.73100000, "NUMBR", iVar14 );
        }
        SET_TEXT_FONT( l_U305 );
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_FONT( 2 );
        }
        SET_TEXT_SCALE( 1.66100000, 4.80000000 );
        SET_TEXT_WRAP( 0.00000000, 1.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (NOT (4 == GET_CURRENT_LANGUAGE()))
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U151[2], 0.73100000, "NUMBR", iVar15 );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U151[1], 0.73100000, "NUMBR", iVar15 );
        }
        SET_TEXT_FONT( l_U305 );
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_FONT( 2 );
        }
        SET_TEXT_SCALE( 1.66100000, 4.80000000 );
        SET_TEXT_WRAP( 0.00000000, 1.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (NOT (4 == GET_CURRENT_LANGUAGE()))
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U151[3], 0.73100000, "NUMBR", iVar16 );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U151[2], 0.73100000, "NUMBR", iVar16 );
        }
        SET_TEXT_FONT( l_U305 );
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_FONT( 2 );
        }
        SET_TEXT_SCALE( 1.66100000, 4.80000000 );
        SET_TEXT_WRAP( 0.00000000, 1.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        sub_33832( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (NOT (4 == GET_CURRENT_LANGUAGE()))
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U151[4], 0.73100000, "NUMBR", iVar17 );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U151[3], 0.73100000, "NUMBR", iVar17 );
        }
    }
    return;
}

void sub_29875()
{
    int I;
    boolean bVar3;

    bVar3 = false;
    if (l_U180 > 0)
    {
        sub_29899();
        l_U129 = 1;
        if (l_U173 > 0)
        {
            l_U296 = {l_U205[l_U173 - 1]};
        }
        else if (l_U173 == 0)
        {
            l_U296 = {l_U205[l_U180 - 1]};
        }
        else
        {
            l_U129 = 0;
        }
        l_U130 = 1;
        if (l_U180 > 0)
        {
            l_U299 = {l_U205[l_U173]};
        }
        else
        {
            l_U130 = 0;
        }
        l_U131 = 1;
        if (l_U173 < (l_U180 - 1))
        {
            l_U302 = {l_U205[l_U173 + 1]};
        }
        else if (l_U173 == (l_U180 - 1))
        {
            l_U302 = {l_U205[0]};
        }
        else
        {
            l_U131 = 0;
        }
        if (NOT (l_U307 == nil))
        {
            sub_30213( l_U307 );
        }
        l_U307 = sub_30320( sub_26255( l_U296._fU0 ) );
        if (NOT (l_U308 == nil))
        {
            sub_30213( l_U308 );
        }
        l_U308 = sub_30320( sub_26255( l_U299._fU0 ) );
        if (NOT (l_U309 == nil))
        {
            sub_30213( l_U309 );
        }
        l_U309 = sub_30320( sub_26255( l_U302._fU0 ) );
        if (l_U129)
        {
            if (NOT (DOES_BLIP_EXIST( l_U296._fU0 )))
            {
                bVar3 = true;
            }
        }
        if (l_U130)
        {
            if (NOT (DOES_BLIP_EXIST( l_U299._fU0 )))
            {
                bVar3 = true;
            }
        }
        if (l_U131)
        {
            if (NOT (DOES_BLIP_EXIST( l_U302._fU0 )))
            {
                bVar3 = true;
            }
        }
        if ((l_U105) || (l_U171 == 1))
        {
            if (DOES_BLIP_EXIST( l_U99 ))
            {
                if (NOT (l_U99 == l_U299._fU0))
                {
                    if (l_U128)
                    {
                        SET_BLIP_AS_SHORT_RANGE( l_U99, 1 );
                        l_U128 = 0;
                    }
                    FLASH_BLIP( l_U99, 0 );
                }
            }
            l_U99 = l_U299._fU0;
            if (DOES_BLIP_EXIST( l_U99 ))
            {
                if (IS_BLIP_SHORT_RANGE( l_U99 ))
                {
                    SET_BLIP_AS_SHORT_RANGE( l_U99, 0 );
                    l_U128 = 1;
                }
                FLASH_BLIP( l_U99, 1 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U99 ))
        {
            FLASH_BLIP( l_U99, 0 );
        }
    }
    if (l_U126)
    {
        bVar3 = true;
        l_U126 = 0;
    }
    if (NOT bVar3)
    {
        for ( I = 0; I < l_U180; I++ )
        {
            if (NOT (l_U205[I]._fU0 == nil))
            {
                if (NOT (DOES_BLIP_EXIST( l_U205[I]._fU0 )))
                {
                    bVar3 = true;
                }
            }
        }
    }
    if (NOT bVar3)
    {
        l_U183 = sub_33217();
        if (NOT (l_U183 == l_U184))
        {
            bVar3 = true;
        }
        l_U184 = l_U183;
    }
    if (NOT bVar3)
    {
        l_U181 = sub_28889();
        if (NOT (l_U181 == l_U182))
        {
            bVar3 = true;
        }
        l_U182 = l_U181;
    }
    if (NOT bVar3)
    {
        l_U185 = sub_33422();
        if (NOT (l_U185 == l_U186))
        {
            bVar3 = true;
        }
        l_U186 = l_U185;
    }
    if (NOT bVar3)
    {
        if (NOT (GET_MISSION_FLAG() == l_U121))
        {
            bVar3 = true;
        }
        l_U121 = GET_MISSION_FLAG();
    }
    if (bVar3)
    {
        sub_25366();
        sub_29875();
    }
    return;
}

void sub_29899()
{
    if (l_U173 < 0)
    {
        l_U173 = l_U180 - 1;
    }
    if (l_U173 > (l_U180 - 1))
    {
        l_U173 = 0;
    }
    return;
}

void sub_30213(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    if (iParam0 == l_U307)
    {
        iVar3++;
    }
    if (iParam0 == l_U308)
    {
        iVar3++;
    }
    if (iParam0 == l_U309)
    {
        iVar3++;
    }
    if (iVar3 == 1)
    {
        RELEASE_TEXTURE( iParam0 );
    }
    return;
}

void sub_30320(unknown uParam0)
{
    switch (uParam0)
    {
        case 21: return GET_TEXTURE( l_U306, "radar_burgershot" );
        case 22: return GET_TEXTURE( l_U306, "radar_chicken" );
        case 23: return GET_TEXTURE( l_U306, "radar_vlad" );
        case 24: return GET_TEXTURE( l_U306, "radar_internet" );
        case 26: return GET_TEXTURE( l_U306, "radar_littlejacob" );
        case 27: return GET_TEXTURE( l_U306, "radar_roman" );
        case 28: return GET_TEXTURE( l_U306, "radar_faustin" );
        case 29: return GET_TEXTURE( l_U306, "radar_safehouse" );
        case 31: return GET_TEXTURE( l_U306, "radar_berniecrane" );
        case 32: return GET_TEXTURE( l_U306, "radar_brucie" );
        case 33: return GET_TEXTURE( l_U306, "radar_cia" );
        case 34: return GET_TEXTURE( l_U306, "radar_dwayne" );
        case 35: return GET_TEXTURE( l_U306, "radar_elizabeta" );
        case 36: return GET_TEXTURE( l_U306, "radar_gambetti" );
        case 37: return GET_TEXTURE( l_U306, "radar_jimmy" );
        case 38: return GET_TEXTURE( l_U306, "radar_mcderrick" );
        case 39: return GET_TEXTURE( l_U306, "radar_mcfrancis" );
        case 40: return GET_TEXTURE( l_U306, "radar_mcgerry" );
        case 41: return GET_TEXTURE( l_U306, "radar_mckatie" );
        case 42: return GET_TEXTURE( l_U306, "radar_mcpackie" );
        case 43: return GET_TEXTURE( l_U306, "radar_philbell" );
        case 44: return GET_TEXTURE( l_U306, "radar_playboyx" );
        case 45: return GET_TEXTURE( l_U306, "radar_rayboccino" );
        case 46: return GET_TEXTURE( l_U306, "radar_8ball" );
        case 47: return GET_TEXTURE( l_U306, "radar_bar" );
        case 48: return GET_TEXTURE( l_U306, "radar_boattour" );
        case 49: return GET_TEXTURE( l_U306, "radar_bowling" );
        case 50: return GET_TEXTURE( l_U306, "radar_clothes" );
        case 51: return GET_TEXTURE( l_U306, "radar_club" );
        case 52: return GET_TEXTURE( l_U306, "radar_darts" );
        case 54: return GET_TEXTURE( l_U306, "radar_girlfriend" );
        case 56: return GET_TEXTURE( l_U306, "radar_helitour" );
        case 57: return GET_TEXTURE( l_U306, "radar_restaurant" );
        case 58: return GET_TEXTURE( l_U306, "radar_station" );
        case 59: return GET_TEXTURE( l_U306, "radar_weapons" );
        case 1: return GET_TEXTURE( l_U306, "radar_level" );
        case 60: return GET_TEXTURE( l_U306, "radar_police" );
        case 61: return GET_TEXTURE( l_U306, "radar_fire" );
        case 62: return GET_TEXTURE( l_U306, "radar_hospital" );
        case 8: return GET_TEXTURE( l_U306, "radar_waypoint" );
        case 63: return GET_TEXTURE( l_U306, "radar_male" );
        case 64: return GET_TEXTURE( l_U306, "radar_female" );
        case 65: return GET_TEXTURE( l_U306, "radar_raceflag" );
        case 66: return GET_TEXTURE( l_U306, "radar_stripclub" );
        case 69: return GET_TEXTURE( l_U306, "radar_dimitri" );
        case 70: return GET_TEXTURE( l_U306, "radar_comedy" );
        case 71: return GET_TEXTURE( l_U306, "radar_cabaret" );
        case 72: return GET_TEXTURE( l_U306, "radar_ransom" );
        case 74: return GET_TEXTURE( l_U306, "radar_michelle" );
        case 75: return GET_TEXTURE( l_U306, "radar_sprayshop" );
        case 76: return GET_TEXTURE( l_U306, "radar_assassin" );
        case 77: return GET_TEXTURE( l_U306, "radar_snake" );
        case 78: return GET_TEXTURE( l_U306, "radar_deal" );
        case 25: return GET_TEXTURE( l_U306, "radar_manny" );
        case 80: return GET_TEXTURE( l_U306, "radar_lawyer" );
        case 82: return GET_TEXTURE( l_U306, "radar_multiplayer" );
        case 92: return GET_TEXTURE( l_U306, "radar_united_liberty_paper" );
        case 55: return GET_TEXTURE( l_U306, "radar_playboyx_red" );
        case 53: return GET_TEXTURE( l_U306, "radar_dwayne_red" );
    }
    return GET_TEXTURE( l_U306, "radar_level" );
    return nil;
}

void sub_33217()
{
    int I;
    int Result;
    unknown uVar4;
    int iVar5;

    Result = 0;
    for ( I = 0; I < 110; I++ )
    {
        uVar4 = GET_FIRST_BLIP_INFO_ID( I );
        while (DOES_BLIP_EXIST( uVar4 ))
        {
            iVar5 = GET_BLIP_INFO_ID_TYPE( uVar4 );
            if (iVar5 == 5)
            {
                Result++;
            }
            uVar4 = GET_NEXT_BLIP_INFO_ID( I );
        }
    }
    return Result;
}

void sub_33422()
{
    int I;
    int Result;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    Result = 0;
    iVar5 = 21;
    iVar6 = 92;
    for ( I = 0; I < 110; I++ )
    {
        if ((I >= iVar5) AND (I <= iVar6))
        {
            uVar4 = GET_FIRST_BLIP_INFO_ID( I );
            while (DOES_BLIP_EXIST( uVar4 ))
            {
                iVar7 = GET_BLIP_INFO_ID_TYPE( uVar4 );
                if (NOT (iVar7 == 5))
                {
                    Result++;
                }
                uVar4 = GET_NEXT_BLIP_INFO_ID( I );
            }
        }
    }
    return Result;
}

void sub_33832(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (l_U136)
    {
        GET_CORRECTED_COLOUR( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
    }
    else
    {
        (uParam3^) = uParam0;
        (uParam4^) = uParam1;
        (uParam5^) = uParam2;
    }
    return;
}

void sub_34115(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (DOES_BLIP_EXIST( uParam2 ))
    {
        iVar5 = sub_26255( uParam2 );
        if (iVar5 == 92)
        {
            DISPLAY_TEXT( uParam0, uParam1, "TX_ULP" );
        }
        else if (iVar5 == 82)
        {
            DISPLAY_TEXT( uParam0, uParam1, "TX_MPT" );
        }
        else
        {
            DISPLAY_TEXT_WITH_BLIP_NAME( uParam0, uParam1, "STRTNM1", uParam2 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "DISPLAY_TAXI_BLIP_NAME - blip doesn't exist. What should be displayed in this case?" );
    }
    return;
}

int sub_34590(int iParam0, int iParam1)
{
    if (iParam0 == iParam1)
    {
        return GET_LENGTH_OF_STRING_WITH_THIS_HASH_KEY( iParam0 );
        break;
    }
    return ((GET_LENGTH_OF_STRING_WITH_THIS_HASH_KEY( iParam0 )) + (GET_LENGTH_OF_STRING_WITH_THIS_HASH_KEY( iParam1 ))) + 5;
}

string sub_34949(unknown uParam0)
{
    unknown uVar3;

    l_U135 = 1;
    uVar3 = GET_MAP_AREA_FROM_COORDS( sub_25674( uParam0 ) );
    l_U135 = 0;
    switch (uVar3)
    {
        case 0:
        if (sub_35029( uParam0 ))
        {
            return "DEST_BR";
        }
        else
        {
            return "DEST_DK";
        }
        break;
        case 1:
        if (sub_35445( uParam0 ))
        {
            return "FULSTP";
        }
        else
        {
            return "DEST_BO";
        }
        break;
        case 2:
        return "DEST_AL";
        break;
        case 3:
        return "DEST_AD";
        break;
        default:
        return "FULSTP";
        break;
    }
    return "FULSTP";
}

int sub_35029(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (DOES_BLIP_EXIST( uParam0 ))
    {
        uVar3 = {sub_25674( uParam0 )};
        uVar6 = GET_NAME_OF_ZONE( uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        if (COMPARE_STRING( uVar6, "ESHOO" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "OUTL" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "SCHOL" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "SUTHS" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "BEECW" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "BEGGA" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "DOWTW" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "BOAB" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "ROTTH" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "FIISL" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "FIREP" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "HOBEH" ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_35445(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (DOES_BLIP_EXIST( uParam0 ))
    {
        uVar3 = {sub_25674( uParam0 )};
        uVar6 = GET_NAME_OF_ZONE( uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        if (COMPARE_STRING( uVar6, "CHISL" ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_35654(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U135 = 1;
    uVar3 = {sub_25674( uParam0 )};
    l_U135 = 0;
    return GET_NAME_OF_ZONE( uVar3._fU0, uVar3._fU4, uVar3._fU8 );
}

int sub_35741(unknown uParam0, unknown uParam1)
{
    if (COMPARE_STRING( uParam0, uParam1 ))
    {
        return GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( uParam0 );
        break;
    }
    return ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( uParam0 )) + (GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( uParam1 ))) + 2;
}

void sub_39943(unknown uParam0, unknown uParam1, vector vParam2)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            GET_CAR_HEADING( uParam0, ref uVar7 );
            GET_CAR_ROLL( uParam0, ref uVar9 );
            GET_CAR_PITCH( uParam0, ref uVar8 );
            vVar10.x = uVar8 * 0.80000000;
            vVar10.y = uVar9 * -0.80000000;
            vVar10.z = uVar7;
            vVar10 = {vVar10 + vParam2};
            SET_CAM_ROT( (uParam1^), vVar10.x, vVar10.y, vVar10.z );
        }
    }
    return;
}

int sub_41213(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_CAM_EXIST( l_U344 )))
    {
        if (DOES_CAM_EXIST( (uParam0^) ))
        {
            SET_CAM_ACTIVE( (uParam0^), 1 );
            SET_CAM_PROPAGATE( (uParam0^), 0 );
        }
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            SET_CAM_ACTIVE( (uParam1^), 1 );
            SET_CAM_PROPAGATE( (uParam1^), 0 );
        }
        CREATE_CAM( 3, ref l_U344 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U344, 1, 1, 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U344, (uParam0^), (uParam1^), uParam2, 0 );
        SET_CAM_ACTIVE( l_U344, 1 );
        SET_CAM_PROPAGATE( l_U344, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    else if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U344 )))
    {
        DESTROY_CAM( l_U344 );
        SET_CAM_ACTIVE( (uParam1^), 1 );
        SET_CAM_PROPAGATE( (uParam1^), 1 );
        return 1;
    }
    return 0;
}

int sub_41669()
{
    if ((l_U119) AND (sub_41683()))
    {
        return 1;
    }
    return 0;
}

int sub_41683()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_41873(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if ((NOT (IS_CAR_DEAD( l_U340 ))) AND (IS_PLAYER_PLAYING( sub_1516() )))
    {
        if (DOES_GROUP_EXIST( sub_1346() ))
        {
            GET_GROUP_SIZE( sub_1346(), ref uVar4, ref iVar3 );
            if (iVar3 > 0)
            {
                GET_GROUP_MEMBER( sub_1346(), 0, ref l_U196 );
                if (NOT (IS_CHAR_INJURED( l_U196 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U196, l_U340 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1572(), l_U196, 15.00000000, 15.00000000, 15.00000000, 0 ))
                        {
                            if ((NOT (sub_42059( l_U196, l_U340 ))) || (IS_SCREEN_FADED_OUT()))
                            {
                                if (((NOT (IS_CHAR_ON_SCREEN( l_U196 ))) || (uParam0)) || (IS_SCREEN_FADED_OUT()))
                                {
                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 1 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 1 );
                                    }
                                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 2 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 2 );
                                    }
                                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 0 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 0 );
                                    };;;
                                }
                            }
                        }
                    }
                }
                if (iVar3 > 1)
                {
                    GET_GROUP_MEMBER( sub_1346(), 1, ref l_U196 );
                    if (NOT (IS_CHAR_INJURED( l_U196 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U196, l_U340 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1572(), l_U196, 15.00000000, 15.00000000, 15.00000000, 0 ))
                            {
                                if ((NOT (sub_42059( l_U196, l_U340 ))) || (IS_SCREEN_FADED_OUT()))
                                {
                                    if (((NOT (IS_CHAR_ON_SCREEN( l_U196 ))) || (uParam0)) || (IS_SCREEN_FADED_OUT()))
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 1 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 1 );
                                        }
                                        else if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 2 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 2 );
                                        }
                                        else if (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 0 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U196, l_U340, 0 );
                                        };;;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (l_U124)
        {
            if (NOT l_U125)
            {
                if (DOES_GROUP_EXIST( sub_1346() ))
                {
                    l_U125 = 1;
                    GET_GROUP_SIZE( sub_1346(), ref uVar4, ref iVar3 );
                    if (iVar3 > 0)
                    {
                        GET_GROUP_MEMBER( sub_1346(), 0, ref l_U196 );
                        if (NOT (IS_CHAR_INJURED( l_U196 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U196, l_U340 )))
                            {
                                l_U125 = 0;
                            }
                        }
                        if (iVar3 > 1)
                        {
                            GET_GROUP_MEMBER( sub_1346(), 1, ref l_U196 );
                            if (NOT (IS_CHAR_INJURED( l_U196 )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U196, l_U340 )))
                                {
                                    l_U125 = 0;
                                }
                            }
                        }
                    }
                }
                if (l_U125)
                {
                    CLOSE_ALL_CAR_DOORS( l_U340 );
                }
            }
        }
    }
    return;
}

int sub_42059(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( iParam1 )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (DOES_VEHICLE_EXIST( iVar4 ))
            {
                if (iVar4 == iParam1)
                {
                    if (IS_PED_JACKING( uParam0 ))
                    {
                        return 1;
                    }
                    if (NOT (IS_CHAR_ON_FOOT( uParam0 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_42859()
{
    if ((sub_42869( 0 )) || (sub_42950( 0 )))
    {
        GET_FRAME_TIME( ref l_U149 );
        l_U176 += ROUND( l_U149 * 1000.00000000 );
    }
    else
    {
        l_U176 = 0;
    }
    if (NOT l_U103)
    {
        if (NOT l_U100)
        {
            if ((sub_42869( 0 )) AND (NOT sub_41669()))
            {
                l_U102 = 1;
                l_U100 = 1;
            }
        }
        else if ((sub_42869( 0 )) AND (NOT sub_41669()))
        {
            if (l_U176 > 1000)
            {
                l_U102 = 1;
            }
        }
    }
    if (NOT l_U102)
    {
        if (NOT l_U100)
        {
            if ((sub_42950( 0 )) AND (NOT sub_41669()))
            {
                l_U103 = 1;
                l_U100 = 1;
            }
        }
        else if ((sub_42950( 0 )) AND (NOT sub_41669()))
        {
            if (l_U176 > 1000)
            {
                l_U103 = 1;
            }
        }
    }
    if (l_U102)
    {
        sub_43287();
    }
    if (l_U103)
    {
        sub_43429();
    }
    return;
}

int sub_42869(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar4 < 65504) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

int sub_42950(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar4 > 32) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

void sub_43287()
{
    l_U150 += 0.20000000;
    if (l_U150 > 1.00000000)
    {
        l_U150 = 0.00000000;
        l_U173 += -1;
        sub_29899();
        l_U102 = 0;
        l_U104 = 0;
        PLAY_AUDIO_EVENT( "HEADLAMP_SWITCH_BEAM_ON" );
    }
    else
    {
        l_U104 = 1;
    }
    return;
}

void sub_43429()
{
    l_U150 += 0.20000000 * -1.00000000;
    if (l_U150 < -1.00000000)
    {
        l_U150 = 0.00000000;
        l_U173++;
        sub_29899();
        l_U103 = 0;
        l_U104 = 0;
        PLAY_AUDIO_EVENT( "HEADLAMP_SWITCH_BEAM_ON" );
    }
    else
    {
        l_U104 = 1;
    }
    return;
}

void sub_43741(unknown uParam0, int iParam1, unknown uParam2)
{
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    boolean bVar12;
    boolean bVar13;
    vector vVar14;
    vector vVar17;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    int iVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    int iVar27;

    bVar13 = false;
    SETTIMERA( 0 );
    if (NOT ((uParam0^) == g_U2220))
    {
        if (LOAD_ALL_PATH_NODES( 1 ))
        {
            bVar13 = true;
        }
    }
    iVar11 = 1;
    bVar12 = false;
    l_U137 = 0;
    l_U141 = 0;
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        if (NOT ((uParam0^) == g_U2220))
        {
            if (NOT (sub_43850( uParam0, iParam1, uParam2 )))
            {
                vVar5 = {sub_25674( (uParam0^) )};
                l_U337 = {vVar5};
                sub_44003( ref vVar5 );
                if (NOT (sub_44220( vVar5, iParam1, uParam2 )))
                {
                    if (bVar13)
                    {
                        if (sub_44683( vVar5 ))
                        {
                            while (NOT bVar12)
                            {
                                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( vVar5.x, vVar5.y, vVar5.z, iVar11, GET_MAP_AREA_FROM_COORDS( vVar5 ), iParam1 + 0, iParam1 + 4, iParam1 + 8, uParam2, ref iVar27 );
                                if (sub_44868( vVar5 ))
                                {
                                    if (iVar27 >= 1)
                                    {
                                        if (iVar27 == 1)
                                        {
                                            sub_45017( iParam1, (uParam2^), 0.00000000 );
                                        }
                                        else
                                        {
                                            sub_45017( iParam1, (uParam2^), 2.00000000 );
                                        }
                                        if (sub_45396( vVar5, (iParam1^) ))
                                        {
                                            bVar12 = true;
                                        }
                                        else
                                        {
                                            iVar11++;
                                            bVar12 = false;
                                        }
                                    }
                                    else
                                    {
                                        iVar11++;
                                        bVar12 = false;
                                    }
                                }
                                else if (iVar27 >= 2)
                                {
                                    sub_45017( iParam1, (uParam2^), 2.00000000 );
                                    if (sub_45396( vVar5, (iParam1^) ))
                                    {
                                        bVar12 = true;
                                    }
                                    else
                                    {
                                        iVar11++;
                                        bVar12 = false;
                                    }
                                }
                                else
                                {
                                    iVar11++;
                                    bVar12 = false;
                                }
                                if (iVar11 > 100)
                                {
                                    bVar12 = true;
                                }
                            }
                        }
                        else
                        {
                            GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( vVar5.x, vVar5.y, vVar5.z, 1, GET_MAP_AREA_FROM_COORDS( vVar5 ), iParam1 + 0, iParam1 + 4, iParam1 + 8, uParam2, ref iVar27 );
                            if (sub_44868( vVar5 ))
                            {
                                iVar23 = 1;
                            }
                            else
                            {
                                iVar23 = 2;
                            }
                            GET_CLOSEST_ROAD( (iParam1^), 0.00000000, iVar23, ref vVar17, ref vVar14, ref uVar24, ref uVar25, ref uVar26 );
                            uVar20 = {(vVar17 + vVar14) * 0.50000000};
                            while (NOT bVar12)
                            {
                                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar20._fU0, uVar20._fU4, uVar20._fU8, iVar11, GET_MAP_AREA_FROM_COORDS( uVar20 ), iParam1 + 0, iParam1 + 4, iParam1 + 8, uParam2, ref iVar27 );
                                iVar11++;
                                if (sub_44868( vVar5 ))
                                {
                                    if (iVar27 >= 1)
                                    {
                                        if (iVar27 == 1)
                                        {
                                            sub_45017( iParam1, (uParam2^), 0.00000000 );
                                        }
                                        else
                                        {
                                            sub_45017( iParam1, (uParam2^), 2.00000000 );
                                        }
                                        if (sub_45396( vVar5, (iParam1^) ))
                                        {
                                            bVar12 = true;
                                        }
                                    }
                                }
                                else if (iVar27 >= 2)
                                {
                                    sub_45017( iParam1, (uParam2^), 2.00000000 );
                                    if (sub_45396( vVar5, (iParam1^) ))
                                    {
                                        bVar12 = true;
                                    }
                                }
                                if (iVar11 > 100)
                                {
                                    bVar12 = true;
                                }
                            }
                        }
                    }
                    else
                    {
                        l_U141 = 1;
                        (iParam1^) = {vVar5};
                        (uParam2^) = 0.00000000;
                    }
                }
                else
                {
                    l_U137 = 1;
                }
            }
            else
            {
                l_U137 = 1;
            }
        }
        else
        {
            (iParam1^) = {g_U2235};
            (uParam2^) = g_U2233;
            l_U137 = 1;
        }
    }
    uVar8 = {vVar5 - (iParam1^)};
    uVar8._fU8 = 0.00000000;
    l_U157 = VMAG( uVar8 );
    return;
}

int sub_43850(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam0^) == g_U10324[8]._fU32)
    {
        (uParam1^) = {1083.58600000, -638.18510000, 12.30600000};
        (uParam2^) = 167.03590000;
        return 1;
    }
    if ((uParam0^) == g_U10324[38]._fU32)
    {
        (uParam1^) = {60.54850000, -349.28930000, 13.68210000};
        (uParam2^) = 347.51950000;
        return 1;
    }
    return 0;
}

void sub_44003(int iParam0)
{
    if (sub_44048( (iParam0^), 827.20500000, -22.47010000, -100.00000000, 870.00480000, 40.87990000, 100.00000000 ))
    {
        iParam0->_fU8 = 25.00000000;
    }
    if (sub_44048( (iParam0^), 836.77980000, -59.49510000, -100.00000000, 885.12980000, 7.05490000, 100.00000000 ))
    {
        iParam0->_fU8 = 25.00000000;
    }
    return;
}

int sub_44048(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if ((((((uParam0._fU0 > uParam3._fU0) AND (uParam0._fU0 < uParam6._fU0)) AND (uParam0._fU4 > uParam3._fU4)) AND (uParam0._fU4 < uParam6._fU4)) AND (uParam0._fU8 > uParam3._fU8)) AND (uParam0._fU8 < uParam6._fU8))
    {
        return 1;
    }
    return 0;
}

int sub_44220(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_44048( uParam0, -1424.09100000, 1419.62500000, -100.00000000, -1326.14100000, 1537.05000000, 100.00000000 ))
    {
        (uParam3^) = {-1336.92300000, 1398.01600000, 16.42480000};
        (uParam4^) = 51.45030000;
        return 1;
    }
    if ((sub_44048( uParam0, -1015.45000000, 1839.62700000, -100.00000000, -912.00000000, 1911.17700000, 100.00000000 )) || (sub_44048( uParam0, -961.97500000, 1613.37500000, -100.00000000, -801.82500000, 1852.27500000, 100.00000000 )))
    {
        (uParam3^) = {-967.80370000, 1621.11400000, 22.68430000};
        (uParam4^) = 346.00000000;
        return 1;
    }
    if (sub_44048( uParam0, -280.00000000, -1064.00000000, -100.00000000, 40.00000000, -829.70000000, 100.00000000 ))
    {
        (uParam3^) = {-62.74670000, -802.31920000, 4.08270000};
        (uParam4^) = 263.42180000;
        return 1;
    }
    if (sub_44048( uParam0, 1150.35000000, 166.92000000, -100.00000000, 1209.71800000, 220.72960000, 100.00000000 ))
    {
        (uParam3^) = {1187.63500000, 191.45070000, 31.45980000};
        (uParam4^) = 10.10320000;
        return 1;
    }
    if (sub_44048( uParam0, 905.62530000, 555.79520000, -100.00000000, 938.07530000, 585.87020000, 100.00000000 ))
    {
        (uParam3^) = {931.05540000, 555.78030000, 21.22510000};
        (uParam4^) = 87.32520000;
        return 1;
    }
    return 0;
}

int sub_44683(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_44048( uParam0, -1242.89800000, 245.24480000, -100.00000000, -898.57300000, 577.49480000, 100.00000000 ))
    {
        return 1;
    }
    if (sub_44048( uParam0, -1266.19900000, -175.80000000, -100.00000000, -895.25000000, 240.00000000, 100.00000000 ))
    {
        return 1;
    }
    return 0;
}

int sub_44868(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_44048( uParam0, 433.00000000, 576.00000000, -100.00000000, 701.87500000, 1144.00000000, 100.00000000 ))
    {
        return 1;
    }
    if (sub_44048( uParam0, 565.19190000, 1365.01900000, -100.00000000, 651.79190000, 1445.51900000, 100.00000000 ))
    {
        return 1;
    }
    return 0;
}

void sub_45017(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;

    vVar5 = {0.00000000, uParam2, 0.00000000};
    vVar8 = {0.00000000, 0.00000000, uParam1 - 90.00000000};
    sub_45068( ref vVar5, vVar8 );
    (uParam0^) = {(uParam0^) + vVar5};
    return;
}

void sub_45068(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar6 = COS( uParam1._fU0 );
    uVar7 = SIN( uParam1._fU0 );
    uVar8._fU0 = iParam0->_fU0;
    uVar8._fU4 = (uVar6 * iParam0->_fU4) - (uVar7 * iParam0->_fU8);
    uVar8._fU8 = (uVar7 * iParam0->_fU4) + (uVar6 * iParam0->_fU8);
    (iParam0^) = {uVar8};
    uVar6 = COS( uParam1._fU4 );
    uVar7 = SIN( uParam1._fU4 );
    uVar8._fU0 = (uVar6 * iParam0->_fU0) + (uVar7 * iParam0->_fU8);
    uVar8._fU4 = iParam0->_fU4;
    uVar8._fU8 = (uVar6 * iParam0->_fU8) - (uVar7 * iParam0->_fU0);
    (iParam0^) = {uVar8};
    uVar6 = COS( uParam1._fU8 );
    uVar7 = SIN( uParam1._fU8 );
    uVar8._fU0 = (uVar6 * iParam0->_fU0) - (uVar7 * iParam0->_fU4);
    uVar8._fU4 = (uVar7 * iParam0->_fU0) + (uVar6 * iParam0->_fU4);
    uVar8._fU8 = iParam0->_fU8;
    (iParam0^) = {uVar8};
    return;
}

int sub_45396(vector vParam0, vector vParam3)
{
    int iVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    GET_INTERIOR_AT_COORDS( vParam3.x, vParam3.y, vParam3.z, ref iVar8 );
    if (NOT (sub_45432( vParam0, vParam3 )))
    {
        return 0;
    }
    if (NOT (iVar8 == nil))
    {
        return 0;
    }
    else if (vParam3.z > 0.00000000)
    {
        uVar9 = {vParam0 - vParam3};
        uVar9._fU8 = 0.00000000;
        if ((VMAG2( uVar9 )) < (10.00000000 * 10.00000000))
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_45432(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    iVar9 = GET_MAP_AREA_FROM_COORDS( uParam3 );
    if (iVar8 == iVar9)
    {
        return 1;
    }
    return 0;
}

void sub_46431(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (l_U140)
    {
        TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( (uParam0^), (uParam1^), uParam2._fU0, uParam2._fU4, uParam2._fU8, 4, 6.00000000, 1, 5, 10 );
    }
    else
    {
        TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( (uParam0^), (uParam1^), uParam2._fU0, uParam2._fU4, uParam2._fU8, 4, 12.00000000, 1, 5, 10 );
    }
    return;
}

void sub_46794()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_47312(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( (uParam0^), (uParam1^), uParam2._fU0, uParam2._fU4, uParam2._fU8, 4, 22.00000000, 2, 5, 10 );
    return;
}

void sub_47399()
{
    int iVar2;
    int iVar3;
    boolean bVar4;
    float fVar5;
    float fVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    int iVar12;

    fVar6 = l_U160;
    l_U114 = 0;
    if (IS_PLAYER_PLAYING( sub_1516() ))
    {
        if (((NOT (IS_CONTROL_PRESSED( 2, 51 ))) || (l_U115)) || (sub_41669()))
        {
            if (NOT l_U105)
            {
                if (l_U116)
                {
                    SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U342 );
                    l_U116 = 0;
                }
                if (NOT (IS_BUTTON_PRESSED( 0, 5 )))
                {
                    if (l_U122)
                    {
                        SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U343 );
                        l_U122 = 0;
                    }
                    if (IS_VEH_DRIVEABLE( l_U340 ))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( sub_1572(), l_U340 ))
                        {
                            bVar4 = false;
                            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U340, 1 )))
                            {
                                GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U340, 1, ref iVar3 );
                                if (iVar3 == sub_1572())
                                {
                                    bVar4 = true;
                                }
                            }
                            GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
                            if (iVar2 == 4)
                            {
                                iVar7 = 28;
                                switch (l_U189)
                                {
                                    case 0:
                                    GET_GAME_CAM_CHILD( ref uVar8 );
                                    if (DOES_CAM_EXIST( l_U145 ))
                                    {
                                        DESTROY_CAM( l_U145 );
                                    }
                                    CREATE_CAM( 14, ref l_U145 );
                                    ATTACH_CAM_TO_VEHICLE( l_U145, l_U340 );
                                    if (bVar4)
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U145, l_U328._fU0, l_U328._fU4, l_U328._fU8 );
                                    }
                                    else
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U145, l_U328._fU0 * -1.00000000, l_U328._fU4, l_U328._fU8 );
                                    }
                                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U145, 1 );
                                    sub_39943( l_U340, ref l_U145, 0.00000000, 0.00000000, 0.00000000 );
                                    SET_CAM_FOV( l_U145, l_U159 );
                                    SET_CAM_NEAR_CLIP( l_U145, 0.01000000 );
                                    l_U166 = 0.00000000;
                                    l_U165 = 0.00000000;
                                    if (IS_CAR_MODEL( l_U340, -956048545 ))
                                    {
                                        if (bVar4)
                                        {
                                            l_U166 = -26.67400000;
                                            l_U165 = 6.22300000;
                                        }
                                        else
                                        {
                                            l_U166 = 26.67400000;
                                            l_U165 = 6.22300000;
                                        }
                                    }
                                    if (IS_CAR_MODEL( l_U340, 1208856469 ))
                                    {
                                        if (bVar4)
                                        {
                                            l_U166 = -23.57100000;
                                            l_U165 = -1.41800000;
                                        }
                                        else
                                        {
                                            l_U166 = 23.57100000;
                                            l_U165 = -1.41800000;
                                        }
                                    }
                                    if (IS_CAR_MODEL( l_U340, 1884962369 ))
                                    {
                                        if (bVar4)
                                        {
                                            l_U166 = -26.64200000;
                                            l_U165 = -1.84600000;
                                        }
                                        else
                                        {
                                            l_U166 = 26.64200000;
                                            l_U165 = -1.84600000;
                                        }
                                    }
                                    if (sub_23605( l_U340 ))
                                    {
                                        if (IS_CAR_MODEL( l_U340, -1932515764 ))
                                        {
                                            if (bVar4)
                                            {
                                                l_U166 = -20.65400000;
                                                l_U165 = 0.92400000;
                                            }
                                            else
                                            {
                                                l_U166 = 20.65400000;
                                                l_U165 = 0.92400000;
                                            }
                                        }
                                        else if (bVar4)
                                        {
                                            l_U166 = -21.48700000;
                                            l_U165 = -0.20300000;
                                        }
                                        else
                                        {
                                            l_U166 = 21.48700000;
                                            l_U165 = -0.20300000;
                                        }
                                    }
                                    if (DOES_CAM_EXIST( l_U143 ))
                                    {
                                        DESTROY_CAM( l_U143 );
                                    }
                                    SET_CAM_ACTIVE( l_U145, 1 );
                                    SET_CAM_PROPAGATE( l_U145, 1 );
                                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    SET_PTFX_CAM_INSIDE_VEHICLE( 1 );
                                    sub_39943( l_U340, ref l_U145, l_U165, 0.00000000, l_U166 );
                                    SET_CAM_FOV( l_U145, l_U159 );
                                    if (bVar4)
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U145, l_U328._fU0, l_U328._fU4, l_U328._fU8 );
                                    }
                                    else
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U145, l_U328._fU0 * -1.00000000, l_U328._fU4, l_U328._fU8 );
                                    }
                                    l_U189++;
                                    if (IS_PLAYER_PLAYING( sub_1516() ))
                                    {
                                        SET_CHAR_VISIBLE( sub_1572(), 0 );
                                    }
                                    break;
                                    case 1:
                                    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar9, ref uVar10, ref iVar11, ref iVar12 );
                                    if ((iVar11 == 0) AND (iVar12 == 0))
                                    {
                                        GET_MOUSE_INPUT( ref iVar11, ref iVar12 );
                                        fVar6 *= 1.00000000 + ((8.00000000 - 1.00000000) * GET_MOUSE_SENSITIVITY());
                                        iVar7 = 1;
                                    }
                                    if (NOT IS_LOOK_INVERTED())
                                    {
                                        iVar12 *= -1;
                                    }
                                    if ((iVar12 > iVar7) || (iVar12 < (iVar7 * -1)))
                                    {
                                        fVar5 = TO_FLOAT( iVar12 );
                                        fVar5 *= fVar5;
                                        fVar5 /= (TO_FLOAT( 128 - iVar7 )) * (TO_FLOAT( 128 - iVar7 ));
                                        fVar5 *= fVar6;
                                        if (iVar12 < 0)
                                        {
                                            fVar5 *= -1.00000000;
                                        }
                                        l_U165 += fVar5;
                                        if (l_U165 < l_U161)
                                        {
                                            l_U165 = l_U161;
                                        }
                                        if (l_U165 > l_U162)
                                        {
                                            l_U165 = l_U162;
                                        }
                                    }
                                    if ((iVar11 > iVar7) || (iVar11 < (iVar7 * -1)))
                                    {
                                        fVar5 = TO_FLOAT( iVar11 );
                                        fVar5 *= fVar5;
                                        fVar5 /= (TO_FLOAT( 128 - iVar7 )) * (TO_FLOAT( 128 - iVar7 ));
                                        fVar5 *= fVar6;
                                        if (iVar11 > 0)
                                        {
                                            fVar5 *= -1.00000000;
                                        }
                                        l_U166 += fVar5;
                                        if (l_U166 < l_U163)
                                        {
                                            l_U166 = l_U163;
                                        }
                                        if (l_U166 > l_U164)
                                        {
                                            l_U166 = l_U164;
                                        }
                                    }
                                    sub_39943( l_U340, ref l_U145, l_U165, 0.00000000, l_U166 );
                                    SET_CAM_FOV( l_U145, l_U159 );
                                    if (bVar4)
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U145, l_U328._fU0, l_U328._fU4, l_U328._fU8 );
                                    }
                                    else
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U145, l_U328._fU0 * -1.00000000, l_U328._fU4, l_U328._fU8 );
                                    }
                                    if (NOT (IS_CONTROL_PRESSED( 2, 78 )))
                                    {
                                        l_U115 = 0;
                                    }
                                    break;
                                }
                                l_U114 = 1;
                            }
                            else
                            {
                                sub_1651();
                            }
                        }
                        else
                        {
                            sub_1651();
                        }
                    }
                    else
                    {
                        sub_1651();
                    }
                }
                else if (NOT l_U122)
                {
                    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U343 );
                    l_U122 = 1;
                }
                sub_1651();;
            }
        }
        else if (NOT l_U105)
        {
            if (NOT l_U100)
            {
                if (NOT (IS_CAR_DEAD( l_U340 )))
                {
                    if ((((IS_CHAR_SITTING_IN_CAR( sub_1572(), l_U340 )) AND (NOT (IS_PED_DOING_DRIVEBY( sub_1572() )))) AND (NOT (IS_BUTTON_PRESSED( 0, 5 )))) AND (NOT sub_41669()))
                    {
                        GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
                        if (iVar2 == 4)
                        {
                            sub_1651();
                        }
                        if (NOT (iVar2 == 5))
                        {
                            l_U342 = iVar2;
                            SET_FOLLOW_VEHICLE_CAM_SUBMODE( 5 );
                            l_U116 = 1;
                        }
                        l_U100 = 1;
                    }
                }
            }
        }
    }
    else
    {
        sub_1651();
    }
    return;
}

void sub_49439()
{
    if (NOT l_U106)
    {
        if ((((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H13" )))) AND (NOT sub_41669())) AND (IS_SCREEN_FADED_IN()))
        {
            if (l_U114)
            {
                if (NOT g_U2230)
                {
                    if (NOT g_U2225)
                    {
                        if (NOT l_U138)
                        {
                            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H09" )))
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                                PRINT_HELP( "TX_H09" );
                                l_U106 = 1;
                            }
                        }
                        else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H09B" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                            PRINT_HELP( "TX_H09B" );
                            l_U106 = 1;
                        }
                    }
                    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H11" )))
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                        PRINT_HELP( "TX_H11" );
                        l_U106 = 1;
                    }
                }
                else if (NOT g_U2225)
                {
                    if (NOT l_U138)
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H10" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                            PRINT_HELP( "TX_H10" );
                            l_U106 = 1;
                        }
                    }
                    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H10B" )))
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                        PRINT_HELP( "TX_H10B" );
                        l_U106 = 1;
                    }
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H12" )))
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                    PRINT_HELP( "TX_H12" );
                    l_U106 = 1;
                };;;
            }
            else if (NOT g_U2225)
            {
                if (NOT g_U2230)
                {
                    if (NOT l_U138)
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                            PRINT_HELP( "TX_H05" );
                            l_U106 = 1;
                        }
                    }
                    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05B" )))
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                        PRINT_HELP( "TX_H05B" );
                        l_U106 = 1;
                    }
                }
                else if (NOT l_U138)
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05C" )))
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                        PRINT_HELP( "TX_H05C" );
                        l_U106 = 1;
                    }
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05D" )))
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                    PRINT_HELP( "TX_H05D" );
                    l_U106 = 1;
                };;;
            }
            else if (NOT g_U2230)
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05E" )))
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                    PRINT_HELP( "TX_H05E" );
                    l_U106 = 1;
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05F" )))
            {
                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                PRINT_HELP( "TX_H05F" );
                l_U106 = 1;
            };;;;
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H13" ))
    {
        l_U106 = 0;
    }
    return;
}

int sub_53127()
{
    int iVar2;

    if (IS_VEH_DRIVEABLE( l_U340 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_1572(), l_U340 ))
        {
            GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
            if (iVar2 == 4)
            {
                if (NOT (l_U189 == 1))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_54201()
{
    if ((DOES_CAM_EXIST( l_U344 )) || (DOES_CAM_EXIST( l_U145 )))
    {
        if (DOES_CAM_EXIST( l_U145 ))
        {
            DESTROY_CAM( l_U145 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        if (DOES_CAM_EXIST( l_U344 ))
        {
            DESTROY_CAM( l_U344 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        l_U189 = 0;
    }
    return;
}

void sub_54712(vector vParam0, vector vParam3)
{
    float Result;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    uVar9 = {vParam3 - vParam0};
    Result = (VMAG( uVar9 )) * 1.30000000;
    return Result;
}

int sub_55640(boolean bParam0)
{
    int I;
    int iVar4;
    unknown uVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;

    iVar4 = sub_55649();
    uVar5 = GET_CURRENT_DAY_OF_WEEK();
    iVar6 = 7 - 1;
    bVar7 = true;
    iVar8 = 0;
    sub_55752( ref iVar4, 1, 0, 3 );
    iVar8 += sub_55861( iVar4 );
    if (iVar4 == 0)
    {
        sub_55752( ref uVar5, 1, 0, 6 );
        iVar6--;
    }
    for ( I = 0; I <= iVar6; I++ )
    {
        while (bVar7)
        {
            if ((bParam0) AND (iVar8 >= 6))
            {
                return 6;
            }
            if ((sub_56029( uVar5, iVar4 )) != 0)
            {
                return iVar8 - 1;
            }
            else
            {
                sub_55752( ref iVar4, 1, 0, 3 );
                iVar8 += sub_56214( iVar4 );
                if (iVar4 == 0)
                {
                    bVar7 = false;
                }
            }
        }
        bVar7 = true;
        sub_55752( ref uVar5, 1, 0, 6 );
    }
    if (bParam0)
    {
        return 6;
    }
    return -1;
}

int sub_55649()
{
    int iVar2;

    iVar2 = GET_HOURS_OF_DAY();
    if (iVar2 < 8)
    {
        return 0;
    }
    else if (iVar2 < 12)
    {
        return 1;
    }
    else if (iVar2 < 18)
    {
        return 2;
    };;;
    return 3;
}

void sub_55752(unknown uParam0, int iParam1, int iParam2, int iParam3)
{
    boolean bVar6;

    bVar6 = true;
    (uParam0^) += iParam1;
    while (bVar6)
    {
        if ((uParam0^) > iParam3)
        {
            (uParam0^) -= (iParam3 - iParam2) + 1;
        }
        else if ((uParam0^) < iParam2)
        {
            (uParam0^) += (iParam3 - iParam2) + 1;
        }
        else
        {
            bVar6 = false;
        }
    }
    return;
}

int sub_55861(unknown uParam0)
{
    int iVar3;

    iVar3 = GET_HOURS_OF_DAY();
    switch (uParam0)
    {
        case 0:
        return 24 - iVar3;
        break;
        case 1:
        return 8 - iVar3;
        break;
        case 2:
        return 12 - iVar3;
        break;
    }
    return 18 - iVar3;
}

int sub_56029(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

int sub_56214(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 8;
        break;
        case 2:
        return 4;
        break;
    }
    return 6;
}

void sub_58738(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (DOES_GROUP_EXIST( sub_1346() ))
        {
            GET_GROUP_SIZE( sub_1346(), ref I, ref iVar3 );
            if (iVar3 > 0)
            {
                for ( I = 0; I < iVar3; I++ )
                {
                    GET_GROUP_MEMBER( sub_1346(), I, ref uVar5 );
                    if (NOT (IS_CHAR_INJURED( uVar5 )))
                    {
                        if (IS_CHAR_IN_CAR( uVar5, uParam0 ))
                        {
                            TASK_LEAVE_CAR_IMMEDIATELY( uVar5, uParam0 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_59153()
{
    if (l_U100)
    {
        if ((((((((((((((NOT (IS_BUTTON_PRESSED( 0, 16 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 17 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 14 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 15 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 4 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 5 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 6 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 7 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 )))) AND (NOT (sub_42869( 0 )))) AND (NOT (sub_42950( 0 ))))
        {
            l_U100 = 0;
        }
    }
    return;
}

int sub_59639(unknown uParam0)
{
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (((((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ds" )) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ds_angry" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ps" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_out_ds" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_out_ps" )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_60018(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_PLAYER_PLAYING( sub_1516() ))
        {
            if (DOES_GROUP_EXIST( sub_1346() ))
            {
                GET_GROUP_SIZE( sub_1346(), ref I, ref iVar3 );
                if (iVar3 > 0)
                {
                    for ( I = 0; I < iVar3; I++ )
                    {
                        GET_GROUP_MEMBER( sub_1346(), I, ref uVar5 );
                        if (NOT (IS_CHAR_INJURED( uVar5 )))
                        {
                            if (sub_59639( uVar5 ))
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

int sub_60185(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_PLAYER_PLAYING( sub_1516() ))
        {
            if (DOES_GROUP_EXIST( sub_1346() ))
            {
                GET_GROUP_SIZE( sub_1346(), ref I, ref iVar3 );
                if (iVar3 > 0)
                {
                    for ( I = 0; I < iVar3; I++ )
                    {
                        GET_GROUP_MEMBER( sub_1346(), I, ref uVar5 );
                        if (NOT (IS_CHAR_INJURED( uVar5 )))
                        {
                            if (IS_CHAR_IN_CAR( uVar5, uParam0 ))
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
