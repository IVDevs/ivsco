void main()
{
    int I;
    int iVar3;
    vector vVar4;
    vector vVar7;
    float fVar10;
    float fVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    boolean bVar16;
    int iVar17;
    float fVar18;
    float fVar19;
    float fVar20;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U57 = 0;
    l_U72 = 1;
    l_U73 = 0;
    l_U75 = 0;
    l_U76 = 0;
    l_U77 = 0;
    l_U78 = 0;
    l_U79 = 0;
    l_U80 = 0;
    l_U81 = 0;
    l_U82 = 0;
    l_U86 = 0;
    l_U87 = 0;
    l_U88 = 0;
    l_U89 = 0;
    l_U91 = 0;
    l_U92 = 0;
    l_U94 = 0;
    l_U95 = 0;
    l_U96 = 0;
    l_U97 = 0;
    l_U98 = 0;
    l_U99 = 0;
    l_U173 = 0.03950000 * 0.70000000;
    l_U187 = 0.03950000;
    l_U224 = -1;
    l_U225 = -1;
    l_U226 = 0;
    l_U231 = 20;
    l_U232 = 0;
    l_U235 = 0;
    l_U311 = {0.00000000, -0.70500000, 0.93300000};
    l_U358 = {0.00000000, 0.00000000, 0.00000000};
    l_U361 = {0.00000000, 0.00000000, 0.00000000};
    l_U364 = {0.00000000, 0.00000000, 0.00000000};
    l_U367 = {0.00000000, 0.00000000, 0.00000000};
    l_U370 = {0.19000000, 0.00000000, 4.00000000};
    l_U373 = {0.20000000, 0.00000000, 0.00000000};
    l_U376 = {-96.14500000, 0.00000000, 0.00000000};
    l_U379 = {0.00000000, -0.80000000, 0.09300000};
    l_U388 = {0.00000000, -0.80000000, 0.00000000};
    l_U422 = {0.00000000, 0.00000000, -0.03900000};
    l_U498 = 3.70000000;
    l_U499 = 1.50000000;
    l_U501 = 0.30000000;
    l_U502 = 1.00000000;
    l_U503 = -1.00000000;
    l_U504 = -1.00000000;
    l_U505 = {0.07500000, 0.02000000, 0.02000000};
    l_U508 = {0.90000000, 0.05000000, 0.05000000};
    l_U511 = -1.00000000;
    l_U512 = 20.00000000 * 3.14159300;
    PRINTSTRING( "POOL GAME - Script Started \n" );
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "Pool Game cleaned up, deatharrest. \n" );
        sub_691( 1000 );
    }
    fVar18 = 28.00000000;
    fVar19 = 1.00000000;
    l_U285 = {l_U722};
    l_U299 = {1.40000000, 2.00000000, 1.00000000};
    l_U308 = {l_U299._fU0 + 0.10000000, l_U299._fU4 + 0.10000000, 1.00000000};
    l_U302 = {0.78000000, 1.36000000, 1.00000000};
    l_U111[0] = 0.74000000;
    l_U111[1] = 1.40000000;
    l_U111[2] = 1.95000000;
    l_U111[3] = 2.20000000;
    l_U116[0] = 0.83000000;
    l_U116[1] = 1.32500000;
    l_U116[2] = 1.49000000;
    l_U116[3] = 1.83600000;
    l_U121[0] = 0.09500000;
    l_U121[1] = 0.17400000;
    l_U121[2] = 0.26300000;
    l_U121[3] = 0.40900000;
    l_U126[0] = -0.00900000;
    l_U126[1] = -0.00800000;
    l_U126[2] = -0.00300000;
    l_U126[3] = 0.01200000;
    l_U131[0] = 0.88500000;
    l_U131[1] = 1.35500000;
    l_U131[2] = 1.51400000;
    l_U131[3] = 1.81400000;
    l_U136[0] = 0.03300000;
    l_U136[1] = 0.19100000;
    l_U136[2] = 0.27000000;
    l_U136[3] = 0.36900000;
    l_U141[0] = 0.01600000;
    l_U141[1] = 0.00900000;
    l_U141[2] = 0.01500000;
    l_U141[3] = 0.00000000;
    l_U326[0]._fU0 = 0.31300000;
    l_U326[0]._fU4 = -1.42500000;
    l_U326[0]._fU8 = 1.36400000;
    l_U339[0]._fU0 = 0.13700000;
    l_U339[0]._fU4 = 0.99000000;
    l_U339[0]._fU8 = 0.05800000;
    l_U326[1]._fU0 = 0.54300000;
    l_U326[1]._fU4 = -1.05000000;
    l_U326[1]._fU8 = 0.94400000;
    l_U339[1]._fU0 = 0.08200000;
    l_U339[1]._fU4 = 1.24000000;
    l_U339[1]._fU8 = -0.12000000;
    l_U326[2]._fU0 = 0.50000000;
    l_U326[2]._fU4 = -0.91100000;
    l_U326[2]._fU8 = 0.90800000;
    l_U339[2]._fU0 = 0.15200000;
    l_U339[2]._fU4 = 1.00700000;
    l_U339[2]._fU8 = -0.00700000;
    l_U326[3]._fU0 = 0.65000000;
    l_U326[3]._fU4 = -0.78200000;
    l_U326[3]._fU8 = 0.85100000;
    l_U339[3]._fU0 = 0.53900000;
    l_U339[3]._fU4 = 1.32000000;
    l_U339[3]._fU8 = 0.02800000;
    l_U352 = {0.00000000, -0.30500000, 0.11500000};
    l_U355 = {0.00000000, 0.81500000, 0.00000000};
    l_U153[0] = -0.76000000;
    l_U158[0] = 1.34500000;
    l_U153[1] = 0.76000000;
    l_U158[1] = 1.34500000;
    l_U153[2] = 0.76000000;
    l_U158[2] = -1.34500000;
    l_U153[3] = -0.76000000;
    l_U158[3] = -1.34500000;
    l_U163[0] = 0.76000000;
    l_U166[0] = 0.72300000;
    l_U163[1] = -0.76000000;
    l_U166[1] = 0.72300000;
    l_U68 = 0;
    l_U176[0] = 0.99000000;
    l_U176[1] = 0.99000000;
    l_U176[2] = 0.99000000;
    l_U176[3] = 0.99000000;
    l_U181 = 2.00000000;
    l_U197 = 1.00000000;
    l_U197 = sub_5034( l_U285._fU0[0] );
    sub_5157();
    fVar20 = 0.00000000;
    sub_8130();
    PRINTSTRING( "POOL GAME - main loop starting \n" );
    sub_8409( 0 );
    while (true)
    {
        sub_8470();
        sub_5157();
        for ( I = 0; I < 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U285._fU0[I] )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U285._fU0[I], 1 );
            }
        }
        switch (l_U200)
        {
            case 0:
            switch (l_U201)
            {
                case 0:
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[I] )))
                    {
                        if (IS_AMBIENT_SPEECH_DISABLED( l_U285._fU0[I] ))
                        {
                            l_U100[I] = 1;
                            STOP_PED_SPEAKING( l_U285._fU0[I], 0 );
                        }
                    }
                }
                PRINTSTRING( "POOL_GAME_STATE_INITIALISE - started \n" );
                CLEAR_PRINTS();
                sub_8928();
                if (DOES_OBJECT_EXIST( l_U285._fU24 ))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, 0.00000000, 0.00000000, 0.00000000, ref vVar4.x, ref vVar4.y, ref l_U146 );
                }
                sub_9007( ref l_U206 );
                l_U58[0] = 0;
                l_U58[1] = 1;
                if (IS_PLAYER_PLAYING( sub_1293() ))
                {
                    SET_PLAYER_CONTROL( sub_1293(), 0 );
                    SET_EVERYONE_IGNORE_PLAYER( sub_1293(), 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U285._fU0[0], 1 );
                    CLEAR_CHAR_TASKS( l_U285._fU0[0] );
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[1] )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U285._fU0[0], l_U285._fU0[1] );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U285._fU0[1], l_U285._fU0[0] );
                    }
                }
                l_U239 = 0;
                if (IS_PLAYER_PLAYING( sub_1293() ))
                {
                    if (DOES_GROUP_EXIST( sub_2145() ))
                    {
                        GET_GROUP_SIZE( sub_2145(), ref I, ref iVar3 );
                        if (iVar3 > 0)
                        {
                            PRINTSTRING( "POOL GAME - group size = " );
                            PRINTINT( iVar3 );
                            PRINTSTRING( "\n" );
                            for ( I = 0; I < iVar3; I++ )
                            {
                                GET_GROUP_MEMBER( sub_2145(), I, ref iVar17 );
                                if (DOES_CHAR_EXIST( iVar17 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( iVar17 )))
                                    {
                                        if (NOT (l_U285._fU0[0] == iVar17))
                                        {
                                            if (NOT (l_U285._fU0[1] == iVar17))
                                            {
                                                if (sub_1590( iVar17 ))
                                                {
                                                    if (iVar17 == (sub_9495( 7 )))
                                                    {
                                                        PRINTSTRING( "POOL GAME - Henrique is non playing group member \n" );
                                                    }
                                                    if (iVar17 == (sub_9495( 3 )))
                                                    {
                                                        PRINTSTRING( "POOL GAME - Armando is non playing group member \n" );
                                                    }
                                                    l_U426[l_U239] = iVar17;
                                                    PRINTSTRING( "POOL GAME - Found non-playing group member \n" );
                                                    l_U239++;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                for ( I = 0; I < 3; I++ )
                {
                    iVar17 = sub_9905( I );
                    if (NOT (iVar17 == nil))
                    {
                        if (NOT (IS_CHAR_INJURED( iVar17 )))
                        {
                            if ((((NOT (sub_9981( iVar17 ))) AND (NOT (l_U285._fU0[0] == iVar17))) AND (NOT (l_U285._fU0[1] == iVar17))) AND (sub_1590( iVar17 )))
                            {
                                l_U426[l_U239] = iVar17;
                                PRINTSTRING( "POOL GAME - Found non-playing friend \n" );
                                l_U239++;
                            }
                        }
                    }
                }
                REQUEST_ANIMS( "MINI_POOL" );
                REQUEST_MODEL( -167968024 );
                REQUEST_MODEL( -927369996 );
                LOAD_ADDITIONAL_TEXT( "POOL", 3 );
                DO_SCREEN_FADE_OUT( 1000 );
                l_U201++;
                break;
                case 1:
                if ((((HAVE_ANIMS_LOADED( "MINI_POOL" )) AND (HAS_MODEL_LOADED( -167968024 ))) AND (IS_SCREEN_FADED_OUT())) AND (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\POOL_TABLE" )))
                {
                    l_U201++;
                }
                break;
                case 2:
                sub_10363();
                if (sub_1590( l_U285._fU0[0] ))
                {
                    sub_10617( l_U285._fU0[0] );
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[I] )))
                    {
                        if (NOT (l_U285._fU0[I] == sub_2459()))
                        {
                            if (IS_GROUP_MEMBER( l_U285._fU0[I], sub_2145() ))
                            {
                                PRINTINT( I );
                                REMOVE_CHAR_FROM_GROUP( l_U285._fU0[I] );
                            }
                        }
                    }
                }
                if (IS_PLAYER_PLAYING( sub_1293() ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2459(), 0, 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U285._fU0[0], 0, 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U285._fU0[1] )))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U285._fU0[1], 0, 1 );
                }
                for ( I = 0; I < l_U426; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U426[I] )))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U426[I] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U426[I], 1 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U426[I] );
                        if (NOT (sub_11186( l_U285._fU24 )))
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, -3.00000000, -1.00000000 + (I * 1.00000000), 0.00000000, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                            GET_OBJECT_HEADING( l_U285._fU24, ref fVar10 );
                            fVar10 += 270.00000000;
                        }
                        else
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, 3.00000000, -1.00000000 + (I * 1.00000000), 0.00000000, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                            GET_OBJECT_HEADING( l_U285._fU24, ref fVar10 );
                            fVar10 += 90.00000000;
                        }
                        SET_CHAR_COORDINATES( l_U426[I], vVar4.x, vVar4.y, vVar4.z );
                        SET_CHAR_HEADING( l_U426[I], fVar10 );
                    }
                }
                for ( I = 0; I < l_U285._fU0; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U285._fU0[I] );
                    }
                }
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                l_U228 = GET_SOUND_ID();
                DISPLAY_RADAR( 0 );
                if (DOES_OBJECT_EXIST( l_U285._fU24 ))
                {
                    GET_OBJECT_COORDINATES( l_U285._fU24, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                    CLEAR_AREA( vVar4.x, vVar4.y, vVar4.z, 5.00000000, 1 );
                    CLEAR_AREA_OF_CHARS( vVar4.x, vVar4.y, vVar4.z, 10.00000000 );
                }
                if (DOES_OBJECT_EXIST( l_U285._fU24 ))
                {
                    GET_ROOM_KEY_FROM_OBJECT( l_U285._fU24, ref l_U199 );
                    GET_OBJECT_COORDINATES( l_U285._fU24, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                }
                GET_INTERIOR_AT_COORDS( vVar4.x, vVar4.y, vVar4.z, ref l_U198 );
                OVERRIDE_FREEZE_FLAGS( 1 );
                SET_USE_POOL_GAME_PHYSICS_SETTINGS( 1 );
                if (NOT (l_U199 == 0))
                {
                    sub_11799();
                    l_U203 = 1;
                    l_U227 = 1;
                    l_U204 = 0;
                    GET_GAME_TIMER( ref l_U225 );
                    sub_8409( 2 );
                }
                break;
            }
            break;
            case 1:
            sub_701( 1 );
            if (l_U58[l_U203])
            {
                if (l_U58[l_U203])
                {
                    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                    {
                        CLEAR_PRINTS();
                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U285._fU0[l_U203] );
                        }
                        l_U2 = 1;
                        sub_8409( 8 );
                        break;
                    }
                }
                sub_14392();
                switch (l_U201)
                {
                    case 0:
                    if (IS_PLAYER_PLAYING( l_U285._fU12[l_U203] ))
                    {
                        SET_PLAYER_CONTROL( l_U285._fU12[l_U203], 0 );
                    }
                    sub_15411( l_U285._fU0[l_U203] );
                    sub_15411( l_U285._fU0[l_U204] );
                    sub_13580();
                    l_U83 = 0;
                    l_U201++;
                    break;
                    case 1:
                    if (NOT l_U83)
                    {
                        CLEAR_HELP();
                        switch (l_U220[l_U203])
                        {
                            case 0:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_08", "ANY" );
                            break;
                            case 1:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_08", "SOLID" );
                            break;
                            case 2:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_08", "STRIPE" );
                            break;
                            case 3:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_08", "BLACK" );
                            break;
                        }
                        l_U83 = 1;
                    }
                    if (DOES_CAM_EXIST( l_U108 ))
                    {
                        vVar7 = {sub_17163( l_U108 )};
                        fVar10 = VMAG( vVar7 );
                        if (fVar10 > 28.00000000)
                        {
                            fVar10 += -28.00000000;
                            fVar10 *= fVar10;
                            fVar10 /= 10000.00000000;
                        }
                        else
                        {
                            vVar7 = {0.00000000, 0.00000000, 0.00000000};
                        }
                        vVar7 = {vVar7 * (fVar10 * 0.00035000)};
                        vVar7.z = 0.00000000;
                    }
                    if (DOES_OBJECT_EXIST( l_U246[15] ))
                    {
                        GET_OBJECT_COORDINATES( l_U246[15], ref vVar4.x, ref vVar4.y, ref vVar4.z );
                        vVar4.x += vVar7.x;
                        vVar4.y += vVar7.y;
                        if (sub_17988( ref vVar4 ))
                        {
                            SET_OBJECT_COORDINATES( l_U246[15], vVar4.x, vVar4.y, vVar4.z );
                        }
                    }
                    if (l_U58[l_U203])
                    {
                        if (NOT l_U2)
                        {
                            if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 4 ))))
                            {
                                GET_OBJECT_COORDINATES( l_U246[15], ref vVar4.x, ref vVar4.y, ref vVar4.z );
                                PLAY_SOUND_FROM_POSITION( l_U228, "POOL_TABLE_PLACE_BALL", vVar4 );
                                CLEAR_HELP();
                                l_U2 = 1;
                                l_U80 = 0;
                                sub_8409( 2 );
                            }
                        }
                    }
                    break;
                }
            }
            else if (sub_927( 15 ))
            {
                sub_13580();
            }
            if (NOT l_U61)
            {
                if (DOES_OBJECT_EXIST( l_U246[15] ))
                {
                    SET_OBJECT_VISIBLE( l_U246[15], 0 );
                }
                if (DOES_OBJECT_EXIST( l_U263[15] ))
                {
                    DELETE_OBJECT( ref l_U263[15] );
                }
            }
            if (NOT l_U91)
            {
                if (DOES_OBJECT_EXIST( l_U246[15] ))
                {
                    GET_OBJECT_COORDINATES( l_U246[15], ref l_U400[0]._fU0, ref l_U400[0]._fU4, ref l_U400[0]._fU8 );
                }
                fVar10 = l_U153[1] - l_U153[0];
                fVar10 *= 0.33333300;
                fVar11 = l_U158[0] - l_U158[2];
                fVar11 *= 0.25000000;
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] + fVar10, l_U158[2] + (fVar11 * 1.00000000), l_U311._fU8, ref l_U400[1]._fU0, ref l_U400[1]._fU4, ref l_U400[1]._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] + fVar10, l_U158[2] + (fVar11 * 2.00000000), l_U311._fU8, ref l_U400[2]._fU0, ref l_U400[2]._fU4, ref l_U400[2]._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] + fVar10, l_U158[2] + (fVar11 * 3.00000000), l_U311._fU8, ref l_U400[3]._fU0, ref l_U400[3]._fU4, ref l_U400[3]._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] + (fVar10 * 2.00000000), l_U158[2] + (fVar11 * 1.00000000), l_U311._fU8, ref l_U400[4]._fU0, ref l_U400[4]._fU4, ref l_U400[4]._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] + (fVar10 * 2.00000000), l_U158[2] + (fVar11 * 2.00000000), l_U311._fU8, ref l_U400[5]._fU0, ref l_U400[5]._fU4, ref l_U400[5]._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] + (fVar10 * 2.00000000), l_U158[2] + (fVar11 * 3.00000000), l_U311._fU8, ref l_U400[6]._fU0, ref l_U400[6]._fU4, ref l_U400[6]._fU8 );
                l_U236 = -1;
                l_U186 = -1.00000000;
                for ( I = 0; I < 7; I++ )
                {
                    fVar10 = -1.00000000;
                    if (DOES_OBJECT_EXIST( l_U246[15] ))
                    {
                        if (sub_18337( l_U400[I] ))
                        {
                            SET_OBJECT_COORDINATES( l_U246[15], l_U400[I]._fU0, l_U400[I]._fU4, l_U400[I]._fU8 );
                            sub_20705( ref l_U382, ref l_U169, l_U220[l_U203], ref fVar10, ref l_U171, ref l_U170 );
                        }
                    }
                    PRINTSTRING( "Scratch position " );
                    PRINTINT( I );
                    PRINTSTRING( " score = " );
                    PRINTFLOAT( fVar10 );
                    PRINTSTRING( "\n" );
                    if (fVar10 > l_U186)
                    {
                        l_U236 = I;
                        l_U186 = fVar10;
                    }
                    WAIT( 0 );
                }
                if (NOT (l_U236 == -1))
                {
                    if (DOES_OBJECT_EXIST( l_U246[15] ))
                    {
                        SET_OBJECT_COORDINATES( l_U246[15], l_U400[l_U236]._fU0, l_U400[l_U236]._fU4, l_U400[l_U236]._fU8 );
                    }
                }
                else
                {
                    sub_13580();
                }
            }
            else
            {
                sub_13580();
                l_U91 = 0;
            }
            if (NOT l_U61)
            {
                if (DOES_OBJECT_EXIST( l_U246[15] ))
                {
                    SET_OBJECT_VISIBLE( l_U246[15], 0 );
                }
            }
            GET_OBJECT_COORDINATES( l_U246[15], ref vVar4.x, ref vVar4.y, ref vVar4.z );
            PLAY_SOUND_FROM_POSITION( l_U228, "POOL_TABLE_PLACE_BALL", vVar4 );
            l_U80 = 0;
            sub_8409( 2 );;
            break;
            case 2:
            sub_701( 1 );
            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
            {
                switch (l_U201)
                {
                    case 0:
                    if (DOES_OBJECT_EXIST( l_U246[15] ))
                    {
                        if (HAS_MODEL_LOADED( sub_11937( 15 ) ))
                        {
                            l_U201++;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_11937( 15 ) );
                        }
                    }
                    break;
                    case 1:
                    PRINTSTRING( "POOL_GAME_STATE_APPROACH - started \n" );
                    if (NOT l_U76)
                    {
                        sub_20705( ref l_U320, ref l_U169, l_U220[l_U203], ref fVar10, ref l_U171, ref l_U170 );
                        if (NOT l_U58[l_U203])
                        {
                            if (l_U171 < 10.00000000)
                            {
                                l_U391._fU4 = l_U173 * -0.70000000;
                                if ((VMAG( l_U391 )) > l_U173)
                                {
                                    fVar20 = VMAG( l_U391 );
                                    if (fVar20 == 0.00000000)
                                    {
                                        l_U391 = {l_U391 / 0.00000001};
                                    }
                                    else
                                    {
                                        l_U391 = {l_U391 / fVar20};
                                    }
                                    l_U391 = {l_U391 * l_U173};
                                }
                                PRINTSTRING( "BACKSPIN APPLIED FOR AI \n" );
                            }
                        }
                    }
                    if (NOT l_U58[l_U203])
                    {
                        fVar10 = l_U169;
                        if (fVar10 > 2.50000000)
                        {
                            fVar10 = 2.50000000;
                        }
                        fVar10 /= 2.50000000;
                        fVar10 *= -1.00000000;
                        fVar10 += 1.00000000;
                        PRINTSTRING( "Pool AI fTemp =" );
                        PRINTFLOAT( fVar10 );
                        PRINTSTRING( "\n" );
                        GENERATE_RANDOM_FLOAT_IN_RANGE( 5.00000000 * -1.00000000, 5.00000000, ref fVar11 );
                        PRINTSTRING( "Pool AI fTemp2 =" );
                        PRINTFLOAT( fVar11 );
                        PRINTSTRING( "\n" );
                        fVar11 *= fVar10;
                        fVar11 *= 1.00000000 - l_U197;
                        PRINTSTRING( "Pool AI Accuracy is " );
                        PRINTFLOAT( l_U197 );
                        PRINTSTRING( ", rotating aim by " );
                        PRINTFLOAT( fVar11 );
                        PRINTSTRING( "\n" );
                        vVar7 = {0.00000000, 0.00000000, fVar11};
                        l_U320 = {sub_17221( l_U320, vVar7 )};
                    }
                    if (DOES_OBJECT_EXIST( l_U246[15] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                        {
                            TASK_LOOK_AT_OBJECT( l_U285._fU0[l_U204], l_U246[15], -2, 0 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                    {
                        if (l_U58[l_U203])
                        {
                            if (l_U73)
                            {
                                if (IS_PLAYER_PLAYING( l_U285._fU12[l_U203] ))
                                {
                                    SET_PLAYER_CONTROL( l_U285._fU12[l_U203], 0 );
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U285._fU0[l_U203] );
                            }
                        }
                        l_U76 = 0;
                        sub_31095( l_U285._fU0[l_U203], l_U320, 1 );
                        if (NOT l_U80)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U296 );
                            switch (l_U205)
                            {
                                case 0:
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_33473( l_U285._fU0[l_U203] ), "MINI_POOL", 8.00000000, 0, 1, 0, 1, -1 );
                                break;
                                case 1:
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_33601( l_U285._fU0[l_U203] ), "MINI_POOL", 8.00000000, 0, 1, 0, 1, -1 );
                                break;
                                case 2:
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_33725( l_U285._fU0[l_U203] ), "MINI_POOL", 8.00000000, 0, 1, 0, 1, -1 );
                                break;
                                case 3:
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_33851( l_U285._fU0[l_U203] ), "MINI_POOL", 8.00000000, 0, 1, 0, 1, -1 );
                                break;
                            }
                            CLOSE_SEQUENCE_TASK( l_U296 );
                            TASK_PERFORM_SEQUENCE( l_U285._fU0[l_U203], l_U296 );
                            CLEAR_SEQUENCE_TASK( l_U296 );
                            SETTIMERA( 0 );
                        }
                        else
                        {
                            OPEN_SEQUENCE_TASK( ref l_U296 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "IDLE", "MINI_POOL", 8.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U296 );
                            TASK_PERFORM_SEQUENCE( l_U285._fU0[l_U203], l_U296 );
                            CLEAR_SEQUENCE_TASK( l_U296 );
                            SETTIMERA( 0 );
                        }
                        if (l_U80)
                        {
                            bVar16 = false;
                            SETTIMERA( 0 );
                            while (NOT bVar16)
                            {
                                WAIT( 0 );
                                bVar16 = false;
                                if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                                {
                                    if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", "IDLE" ))
                                    {
                                        SET_CHAR_ANIM_CURRENT_TIME( l_U285._fU0[l_U203], "MINI_POOL", "IDLE", 0.42000000 );
                                        bVar16 = true;
                                    }
                                }
                                if (TIMERA() > 5000)
                                {
                                    bVar16 = true;
                                }
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                        {
                            if (l_U58[l_U204])
                            {
                                if (IS_PLAYER_PLAYING( l_U285._fU12[l_U204] ))
                                {
                                    SET_PLAYER_CONTROL_ADVANCED( l_U285._fU12[l_U204], 0, 0, 1 );
                                }
                            }
                            sub_34416();
                        }
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_2509( 0 );
                        }
                        sub_34972();
                        if (IS_SCREEN_FADED_OUT())
                        {
                            DO_SCREEN_FADE_IN( 1000 );
                        }
                        l_U201++;
                    }
                    break;
                    case 2:
                    if (IS_SCREEN_FADED_IN())
                    {
                        SETTIMERA( 0 );
                        l_U201++;
                    }
                    break;
                    case 3:
                    if ((l_U61) AND (NOT l_U94))
                    {
                        if (l_U285._fU0[l_U203] == sub_2459())
                        {
                            if ((sub_1590( l_U285._fU0[l_U204] )) AND (sub_35547()))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                {
                                    SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_BREAK", 1, 1, 2 );
                                    PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_BREAK \n" );
                                }
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_BREAK", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_BREAK \n" );
                            }
                        }
                        else if ((sub_1590( l_U285._fU0[l_U203] )) AND (sub_35547()))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_FRIEND_BREAK", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_FRIEND_BREAK \n" );
                            }
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_FRIEND_BREAK", 1, 1, 2 );
                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_FRIEND_BREAK \n" );
                        };;;
                        l_U94 = 1;
                    }
                    sub_34972();
                    if (DOES_OBJECT_EXIST( l_U246[15] ))
                    {
                        SET_OBJECT_VISIBLE( l_U246[15], 1 );
                    }
                    if (NOT l_U80)
                    {
                        switch (l_U205)
                        {
                            case 0:
                            if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_33473( l_U285._fU0[l_U203] ) ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U285._fU0[l_U203], "MINI_POOL", sub_33473( l_U285._fU0[l_U203] ), ref fVar10 );
                            }
                            break;
                            case 1:
                            if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_33601( l_U285._fU0[l_U203] ) ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U285._fU0[l_U203], "MINI_POOL", sub_33601( l_U285._fU0[l_U203] ), ref fVar10 );
                            }
                            break;
                            case 2:
                            if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_33725( l_U285._fU0[l_U203] ) ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U285._fU0[l_U203], "MINI_POOL", sub_33725( l_U285._fU0[l_U203] ), ref fVar10 );
                            }
                            break;
                            case 3:
                            if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_33851( l_U285._fU0[l_U203] ) ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U285._fU0[l_U203], "MINI_POOL", sub_33851( l_U285._fU0[l_U203] ), ref fVar10 );
                            }
                            break;
                        }
                    }
                    else if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", "IDLE" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U285._fU0[l_U203], "MINI_POOL", "IDLE", ref fVar10 );
                    }
                    else
                    {
                        fVar10 = -1.00000000;
                    }
                    bVar16 = false;
                    GET_SCRIPT_TASK_STATUS( l_U285._fU0[l_U203], 29, ref l_U298 );
                    if ((l_U298 == 7) AND (TIMERA() > 1000))
                    {
                        bVar16 = true;
                    }
                    if (TIMERA() > 5000)
                    {
                        bVar16 = true;
                    }
                    if (NOT l_U2)
                    {
                        if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 4 ))))
                        {
                            bVar16 = true;
                            l_U2 = 1;
                        }
                    }
                    if (NOT l_U80)
                    {
                        switch (l_U205)
                        {
                            case 0:
                            if (fVar10 > l_U176[0])
                            {
                                bVar16 = true;
                            }
                            break;
                            case 1:
                            if (fVar10 > l_U176[1])
                            {
                                bVar16 = true;
                            }
                            break;
                            case 2:
                            if (fVar10 > l_U176[2])
                            {
                                bVar16 = true;
                            }
                            break;
                            case 3:
                            if (fVar10 > l_U176[3])
                            {
                                bVar16 = true;
                            }
                            break;
                        }
                    }
                    else if (fVar10 > 0.64000000)
                    {
                        bVar16 = true;
                    }
                    if (bVar16)
                    {
                        SETTIMERA( 0 );
                        l_U201++;
                    }
                    break;
                    case 4:
                    if (l_U58[l_U203])
                    {
                        if (l_U80)
                        {
                            sub_8409( 1 );
                        }
                        else
                        {
                            sub_8409( 3 );
                        }
                    }
                    else if (l_U80)
                    {
                        sub_8409( 1 );
                    }
                    else
                    {
                        sub_8409( 4 );
                    }
                    break;
                }
            }
            break;
            case 3:
            SET_ENABLE_NEAR_CLIP_SCAN( 0 );
            sub_701( 1 );
            if (l_U69)
            {
                sub_20705( ref l_U382, ref l_U169, l_U220[l_U203], ref fVar10, ref l_U171, ref l_U170 );
                l_U69 = 0;
            }
            if (l_U58[l_U203])
            {
                if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                {
                    CLEAR_PRINTS();
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U285._fU0[l_U203] );
                    }
                    sub_37453();
                    sub_8409( 8 );
                    l_U2 = 1;
                    break;
                }
            }
            if (NOT l_U2)
            {
                if ((IS_BUTTON_PRESSED( l_U285._fU32[l_U203], 13 )) || (IS_CONTROL_JUST_PRESSED( 2, 0 )))
                {
                    if (l_U68)
                    {
                        l_U68 = 0;
                    }
                    else
                    {
                        l_U68 = 1;
                    }
                    l_U2 = 1;
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
            {
                switch (l_U201)
                {
                    case 0:
                    FREEZE_OBJECT_POSITION( l_U246[15], 1 );
                    SET_OBJECT_QUATERNION( l_U246[15], 0.00000000, 0.00000000, 0.00000000, 1.00000000 );
                    sub_37825( ref l_U285._fU0[l_U203], l_U320, 0 );
                    if (DOES_OBJECT_EXIST( l_U280[l_U203] ))
                    {
                        SET_OBJECT_VISIBLE( l_U280[l_U203], 0 );
                    }
                    l_U150 = 0.99000000;
                    l_U149 = 0.99000000;
                    sub_38268();
                    SETTIMERA( 0 );
                    l_U175 = 0.00000000;
                    l_U83 = 0;
                    l_U84 = 0;
                    l_U201++;
                    break;
                    case 1:
                    if (l_U175 > 30000.00000000)
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] ))) AND (NOT (l_U285._fU0[l_U204] == sub_2459())))
                        {
                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_SLOW", 1, 1, 2 );
                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_SLOW \n" );
                        }
                        l_U175 = 0.00000000;
                    }
                    if (NOT l_U68)
                    {
                        if (NOT l_U83)
                        {
                            CLEAR_HELP();
                            switch (l_U220[l_U203])
                            {
                                case 0:
                                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_03", "ANY" );
                                break;
                                case 1:
                                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_03", "SOLID" );
                                break;
                                case 2:
                                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_03", "STRIPE" );
                                break;
                                case 3:
                                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_03", "BLACK" );
                                break;
                            }
                            l_U83 = 1;
                        }
                        l_U84 = 0;
                    }
                    else if (NOT l_U84)
                    {
                        CLEAR_HELP();
                        switch (l_U220[l_U203])
                        {
                            case 0:
                            l_U297 = "ANY";
                            break;
                            case 1:
                            l_U297 = "SOLID";
                            break;
                            case 2:
                            l_U297 = "STRIPE";
                            break;
                            case 3:
                            l_U297 = "BLACK";
                            break;
                        }
                        PRINT_HELP_WITH_STRING_NO_SOUND( "PLH_03B", l_U297 );
                        l_U196 = 0.00000000;
                        l_U84 = 1;
                    }
                    else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "PLH_11", l_U297 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_11", l_U297 );
                        }
                        else if (NOT l_U2)
                        {
                            if (IS_CONTROL_JUST_PRESSED( 2, 78 ))
                            {
                                CLEAR_HELP();
                                l_U2 = 1;
                            }
                        }
                        if (l_U196 > 7000.00000000)
                        {
                            CLEAR_HELP();
                        }
                    }
                    else if (NOT l_U2)
                    {
                        if (IS_CONTROL_JUST_PRESSED( 2, 78 ))
                        {
                            l_U84 = 0;
                            l_U2 = 1;
                        }
                    };;;
                    l_U83 = 0;;
                    if (NOT l_U2)
                    {
                        GET_POSITION_OF_ANALOGUE_STICKS( l_U285._fU32[l_U203], ref l_U207, ref l_U208, ref l_U209, ref l_U210 );
                        if ((l_U207 == 0) AND (l_U208 == 0))
                        {
                            GET_KEYBOARD_MOVE_INPUT( ref l_U207, ref l_U208 );
                        }
                        if ((l_U207 > 28) || (l_U207 < 65508))
                        {
                            if (l_U207 < 0)
                            {
                                bVar16 = false;
                                fVar10 = (TO_FLOAT( l_U207 )) * -1.00000000;
                            }
                            else
                            {
                                bVar16 = true;
                                fVar10 = TO_FLOAT( l_U207 );
                            }
                            fVar10 += -28.00000000;
                            fVar10 *= fVar10;
                            fVar10 /= 10000.00000000;
                            if ((IS_BUTTON_PRESSED( 0, 14 )) || (IS_CONTROL_PRESSED( 2, 2 )))
                            {
                                fVar10 *= 0.20000000;
                            }
                            else
                            {
                                fVar10 *= 5.00000000;
                            }
                            if (bVar16)
                            {
                                fVar10 *= -1.00000000;
                            }
                            l_U110 += fVar10;
                            if (l_U110 >= 360.00000000)
                            {
                                l_U110 += -360.00000000;
                            }
                            if (l_U110 < 0.00000000)
                            {
                                l_U110 += 360.00000000;
                            }
                            l_U320 = {sub_17221( 0.00000000, 5.00000000, 0.00000000, 0.00000000, 0.00000000, l_U110 )};
                        }
                    }
                    if (NOT l_U2)
                    {
                        vVar7 = {sub_42669()};
                        l_U174 = VMAG( vVar7 );
                        if ((# -NULL-0xc27bfa()) AND (NOT IS_USING_CONTROLLER()))
                        {
                            fVar18 = 0.00000000;
                            fVar19 = 5.00000000;
                        }
                        else
                        {
                            fVar18 = 28.00000000;
                            fVar19 = 1.00000000;
                        }
                        if (l_U174 > fVar18)
                        {
                            l_U174 += -1.00000000 * fVar18;
                            l_U174 *= l_U174;
                            l_U174 /= 10000.00000000;
                            fVar20 = VMAG( vVar7 );
                            if (fVar20 == 0.00000000)
                            {
                                vVar7 = {vVar7 / 0.00000001};
                            }
                            else
                            {
                                vVar7 = {vVar7 / fVar20};
                            }
                            vVar7 = {vVar7 * ((l_U174 * 0.00250000) * fVar19)};
                            l_U391 = {l_U391 + vVar7};
                            fVar20 = VMAG( l_U391 );
                            if (fVar20 > l_U173)
                            {
                                if (fVar20 == 0.00000000)
                                {
                                    l_U391 = {l_U391 / 0.00000010};
                                }
                                else
                                {
                                    l_U391 = {l_U391 / fVar20};
                                }
                                l_U391 = {l_U391 * l_U173};
                            }
                        }
                    }
                    if (DOES_OBJECT_EXIST( l_U246[15] ))
                    {
                        GET_OBJECT_COORDINATES( l_U246[15], ref vVar4.x, ref vVar4.y, ref vVar4.z );
                        vVar7 = {l_U320};
                        vVar7.z = 0.00000000;
                        fVar20 = VMAG( l_U320 );
                        if (fVar20 == 0.00000000)
                        {
                            vVar7 = {vVar7 / 0.00000010};
                        }
                        else
                        {
                            vVar7 = {vVar7 / fVar20};
                        }
                        vVar7 = {vVar7 * (3.00000000 * 0.03950000)};
                        vVar4 = {vVar4 - vVar7};
                        if (NOT (sub_18576( vVar4, l_U571 )))
                        {
                            if (l_U391._fU4 < 0.00000000)
                            {
                                l_U391._fU4 = 0.00000000;
                            }
                        }
                    }
                    if ((IS_BUTTON_PRESSED( 0, 19 )) || (IS_MOUSE_BUTTON_PRESSED( 2 )))
                    {
                        l_U391 = {0.00000000, 0.00000000, 0.00000000};
                    }
                    if (l_U58[l_U203])
                    {
                        if (DOES_OBJECT_EXIST( l_U246[15] ))
                        {
                            GET_OBJECT_COORDINATES( l_U246[15], ref vVar4.x, ref vVar4.y, ref vVar4.z );
                        }
                        if (sub_18576( vVar4, l_U571 ))
                        {
                            sub_43446( l_U246[15], l_U320 );
                        }
                        else
                        {
                            sub_3216();
                        }
                    }
                    if (NOT l_U68)
                    {
                        sub_45118( l_U320 );
                        sub_45630( l_U320 );
                    }
                    if (NOT l_U2)
                    {
                        if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 4 ))))
                        {
                            l_U2 = 1;
                            CLEAR_PRINTS();
                            sub_8409( 4 );
                        }
                    }
                    sub_37825( ref l_U285._fU0[l_U203], l_U320, 0 );
                    sub_38268();
                    break;
                }
            }
            if (NOT l_U68)
            {
                sub_46530();
            }
            else if (DOES_OBJECT_EXIST( l_U283 ))
            {
                SET_OBJECT_VISIBLE( l_U283, 0 );
            }
            sub_37453();
            sub_14392();;
            break;
            case 4:
            sub_701( 1 );
            sub_45630( l_U320 );
            if (l_U58[l_U203])
            {
                if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                {
                    CLEAR_PRINTS();
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U285._fU0[l_U203] );
                    }
                    sub_37453();
                    sub_8409( 8 );
                    l_U2 = 1;
                    break;
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
            {
                switch (l_U201)
                {
                    case 0:
                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
                    sub_37825( ref l_U285._fU0[l_U203], l_U320, 1 );
                    sub_34416();
                    l_U150 = 0.99000000;
                    l_U149 = 0.99000000;
                    sub_38268();
                    if (DOES_OBJECT_EXIST( l_U280[l_U203] ))
                    {
                        SET_OBJECT_VISIBLE( l_U280[l_U203], 1 );
                    }
                    sub_47852();
                    SETTIMERA( 0 );
                    l_U182 = 15000.00000000 * 0.80000000;
                    l_U63 = 0;
                    l_U232 = 0;
                    l_U185 = 0.00000000;
                    GET_GAME_TIMER( ref l_U233 );
                    l_U98 = 0;
                    l_U238 = 0;
                    l_U201++;
                    break;
                    case 1:
                    if (l_U175 > 30000.00000000)
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] ))) AND (NOT (l_U285._fU0[l_U204] == sub_2459())))
                        {
                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_SLOW", 1, 1, 2 );
                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_SLOW \n" );
                        }
                        l_U175 = 0.00000000;
                    }
                    if (l_U58[l_U203])
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PLH_04" )))
                        {
                            CLEAR_HELP();
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_04", "" );
                        }
                        if (NOT l_U2)
                        {
                            GET_POSITION_OF_ANALOGUE_STICKS( l_U285._fU32[l_U203], ref l_U207, ref l_U208, ref l_U209, ref l_U210 );
                            if ((l_U209 == 0) AND (l_U210 == 0))
                            {
                                GET_MOUSE_INPUT( ref l_U209, ref l_U210 );
                            }
                            if (NOT l_U98)
                            {
                                if (l_U210 < 0)
                                {
                                    l_U210 = 0;
                                }
                                if (l_U210 > 32)
                                {
                                    l_U98 = 1;
                                }
                            }
                            if (l_U210 < l_U232)
                            {
                                if (l_U232 > l_U238)
                                {
                                    l_U238 = l_U232;
                                }
                            }
                            if (l_U210 == l_U232)
                            {
                                if (l_U189 > 300.00000000)
                                {
                                    l_U238 = l_U232;
                                }
                            }
                            else
                            {
                                l_U189 = 0.00000000;
                            }
                            GET_FRAME_TIME( ref fVar10 );
                            fVar10 *= 1000.00000000;
                            fVar10 = (TO_FLOAT( l_U210 - l_U232 )) / fVar10;
                            fVar10 *= -1.00000000;
                            l_U188 = 0.00000000;
                            l_U188 = sub_49104( fVar10 );
                            l_U188 *= 2.00000000;
                            if (l_U188 > 6.00000000)
                            {
                                l_U188 = 6.00000000;
                            }
                            if (l_U188 < 0.30000000)
                            {
                                l_U188 = 0.30000000;
                            }
                            l_U232 = l_U210;
                            fVar10 = (TO_FLOAT( l_U210 )) / -128.00000000;
                            if (fVar10 <= 0.00000000)
                            {
                                l_U149 = (0.99000000 - 0.00000000) - ((fVar10 * -1.00000000) * (0.99000000 - 0.00000000));
                            }
                            else
                            {
                                l_U149 = 1.00000000;
                            }
                            l_U229 = l_U209;
                        }
                    }
                    else if (TIMERA() > 2000)
                    {
                        if (NOT l_U63)
                        {
                            l_U149 = 0.00000000;
                        }
                        else
                        {
                            l_U149 = 1.00000000;
                        }
                    }
                    l_U229 = 0;;
                    sub_37825( ref l_U285._fU0[l_U203], l_U320, 1 );
                    l_U152 = l_U149 - l_U150;
                    if (l_U152 > 0.20000000)
                    {
                        l_U152 = 0.20000000;
                    }
                    if (l_U152 < (0.20000000 * -1.00000000))
                    {
                        l_U152 = 0.20000000 * -1.00000000;
                    }
                    l_U150 += l_U152;
                    if (l_U150 > 1.00000000)
                    {
                        l_U150 = 1.00000000;
                    }
                    if (NOT l_U58[l_U203])
                    {
                        if (l_U150 < 0.05000000)
                        {
                            l_U63 = 1;
                        }
                    }
                    sub_38268();
                    if (l_U149 > 0.99000000)
                    {
                        if (l_U58[l_U203])
                        {
                            GET_GAME_TIMER( ref I );
                            l_U234 = I - l_U233;
                            if (l_U234 < 1)
                            {
                                l_U234 = 1;
                            }
                            if (l_U234 > 1000)
                            {
                                l_U234 = 1000;
                            }
                            PRINTSTRING( "fCueSpeed = " );
                            PRINTFLOAT( l_U188 );
                            PRINTSTRING( "\n" );
                            l_U151 = l_U188 * ((TO_FLOAT( l_U238 )) / 128.00000000);
                            if (l_U151 > 6.00000000)
                            {
                                l_U151 = 6.00000000;
                            }
                            if (l_U151 < 0.30000000)
                            {
                                l_U151 = 0.30000000;
                            }
                            PRINTSTRING( "fShotPower = " );
                            PRINTFLOAT( l_U151 );
                            PRINTSTRING( "\n" );
                        }
                        else if (NOT l_U61)
                        {
                            fVar10 = l_U169;
                            if (fVar10 > 2.00000000)
                            {
                                fVar10 = 2.00000000;
                            }
                            if (fVar10 < 0.00000000)
                            {
                                fVar10 = 0.00000000;
                            }
                            fVar10 /= 2.00000000;
                            fVar11 = 6.00000000 - 0.30000000;
                            fVar10 *= fVar11;
                            fVar10 += 0.30000000;
                            l_U151 = fVar10;
                        }
                        else
                        {
                            l_U151 = 6.00000000;
                        }
                        PRINTSTRING( "AI fShotPower = " );
                        PRINTFLOAT( l_U151 );
                        PRINTSTRING( "\n" );;
                        l_U201++;
                    }
                    if (l_U58[l_U203])
                    {
                        if (NOT l_U2)
                        {
                            if (IS_CONTROL_JUST_PRESSED( 2, 78 ))
                            {
                                l_U2 = 1;
                                sub_8409( 3 );
                            }
                        }
                    }
                    sub_47852();
                    break;
                    case 2:
                    CLEAR_HELP();
                    fVar10 = l_U149 - l_U150;
                    if (fVar10 > 0.20000000)
                    {
                        fVar10 = 0.20000000;
                    }
                    if (fVar10 < (0.20000000 * -1.00000000))
                    {
                        fVar10 = 0.20000000 * -1.00000000;
                    }
                    l_U150 += fVar10;
                    if (l_U150 > 1.00000000)
                    {
                        l_U150 = 1.00000000;
                    }
                    sub_38268();
                    if (l_U150 > 0.99000000)
                    {
                        fVar20 = VMAG( l_U320 );
                        if (fVar20 == 0.00000000)
                        {
                            vVar7 = {l_U320 / 0.00000010};
                        }
                        else
                        {
                            vVar7 = {l_U320 / fVar20};
                        }
                        if ((l_U229 > 64) || (l_U229 < 65472))
                        {
                            fVar10 = TO_FLOAT( l_U229 );
                            if (fVar10 < 0.00000000)
                            {
                                fVar10 *= -1.00000000;
                            }
                            fVar10 /= 128.00000000;
                            if (l_U229 < 0)
                            {
                                fVar10 *= -1.00000000;
                            }
                            fVar10 *= 0.10000000;
                            sub_50604( ref vVar7, fVar10, 0.00000000, 0.00000000 );
                        }
                        vVar7 = {vVar7 * l_U151};
                        vVar7.z = 0.00000000;
                        FREEZE_OBJECT_POSITION( l_U246[15], 0 );
                        sub_701( 0 );
                        sub_37453();
                        APPLY_FORCE_TO_OBJECT( l_U246[15], 1, vVar7, l_U367, 0, 0, 1, 1 );
                        l_U385 = {sub_31295( l_U285._fU0[l_U203], l_U320, 1 )};
                        l_U385._fU8 += l_U502;
                        GET_OBJECT_COORDINATES( l_U246[15], ref vVar4.x, ref vVar4.y, ref vVar4.z );
                        if ((l_U229 > 64) || (l_U229 < 65472))
                        {
                            PLAY_SOUND_FROM_POSITION( l_U228, "POOL_TABLE_MIS_CUE", vVar4 );
                        }
                        else
                        {
                            PLAY_SOUND_FROM_POSITION( l_U228, "POOL_TABLE_CUE_HIT_BALL", vVar4 );
                        }
                        SETTIMERA( 0 );
                        sub_8409( 5 );
                    }
                    sub_47852();
                    break;
                }
            }
            break;
            case 5:
            sub_701( 0 );
            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
            {
                switch (l_U201)
                {
                    case 0:
                    sub_47852();
                    fVar10 = 0.05000000 - l_U152;
                    fVar10 *= 0.30000000;
                    l_U152 += fVar10;
                    l_U150 += l_U152;
                    if (l_U150 > 1.00000000)
                    {
                        l_U150 = 1.00000000;
                    }
                    l_U150 = 1.00000000;
                    sub_38268();
                    if (l_U150 == 1.00000000)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U296 );
                        switch (l_U205)
                        {
                            case 0:
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_51297( l_U285._fU0[l_U203] ), "MINI_POOL", 9999.90000000, 0, 1, 0, 0, -1 );
                            break;
                            case 1:
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_51421( l_U285._fU0[l_U203] ), "MINI_POOL", 9999.90000000, 0, 1, 0, 0, -1 );
                            break;
                            case 2:
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_51541( l_U285._fU0[l_U203] ), "MINI_POOL", 9999.90000000, 0, 1, 0, 0, -1 );
                            break;
                            case 3:
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_51663( l_U285._fU0[l_U203] ), "MINI_POOL", 9999.90000000, 0, 1, 0, 0, -1 );
                            break;
                        }
                        if (DOES_OBJECT_EXIST( l_U246[15] ))
                        {
                            TASK_LOOK_AT_OBJECT( 0, l_U246[15], -2, 0 );
                        }
                        TASK_PLAY_ANIM( 0, "IDLE", "MINI_POOL", 4.00000000, 1, 0, 0, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U296 );
                        TASK_PERFORM_SEQUENCE( l_U285._fU0[l_U203], l_U296 );
                        CLEAR_SEQUENCE_TASK( l_U296 );
                        l_U77 = 0;
                        SETTIMERA( 0 );
                        l_U201++;
                    }
                    break;
                    case 1:
                    if (NOT l_U77)
                    {
                        if (sub_51939())
                        {
                            l_U77 = 1;
                        }
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", "IDLE" ))
                    {
                        l_U201++;
                    }
                    else if (DOES_OBJECT_EXIST( l_U284 ))
                    {
                        GET_OBJECT_COORDINATES( l_U284, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                        vVar7 = {l_U385 - vVar4};
                        vVar7 = {vVar7 * 0.10000000};
                        vVar4 = {vVar4 + vVar7};
                        SET_OBJECT_COORDINATES( l_U284, vVar4.x, vVar4.y, vVar4.z );
                    }
                    break;
                    case 2:
                    if (DOES_OBJECT_EXIST( l_U246[15] ))
                    {
                        if (sub_927( 15 ))
                        {
                            for ( I = 0; I < 2; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( l_U285._fU0[I] )))
                                {
                                    TASK_CLEAR_LOOK_AT( l_U285._fU0[I] );
                                }
                            }
                        }
                    }
                    if (DOES_OBJECT_EXIST( l_U284 ))
                    {
                        GET_OBJECT_COORDINATES( l_U284, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                        vVar7 = {l_U385 - vVar4};
                        vVar7 = {vVar7 * 0.30000000};
                        vVar4 = {vVar4 + vVar7};
                        SET_OBJECT_COORDINATES( l_U284, vVar4.x, vVar4.y, vVar4.z );
                    }
                    bVar16 = false;
                    if ((TIMERA() > 3000) AND (sub_53072()))
                    {
                        bVar16 = true;
                    }
                    if ((IS_KEYBOARD_KEY_JUST_PRESSED( 36 )) || (TIMERA() > 20000))
                    {
                        bVar16 = true;
                    }
                    if ((bVar16) AND (TIMERB() > 1000))
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U285._fU0[I] )))
                            {
                                TASK_CLEAR_LOOK_AT( l_U285._fU0[I] );
                            }
                        }
                        sub_53528();
                        sub_8409( 6 );
                    }
                    else if (NOT bVar16)
                    {
                        SETTIMERB( 0 );
                    }
                    break;
                }
            }
            break;
            case 6:
            sub_701( 1 );
            switch (l_U201)
            {
                case 0:
                l_U97 = 0;
                if (l_U76)
                {
                    l_U201 = 2;
                    break;
                }
                l_U223 = sub_53805( l_U203 );
                sub_54666();
                l_U212 = 0;
                l_U217 = 0;
                l_U218 = 0;
                for ( I = 0; I < 16; I++ )
                {
                    if (NOT (I == 15))
                    {
                        if (l_U7[I])
                        {
                            if (I < 7)
                            {
                                l_U217++;
                            }
                            if (I > 7)
                            {
                                l_U218++;
                            }
                            l_U212++;
                        }
                    }
                }
                if (l_U223 == 0)
                {
                    if (l_U214 == 0)
                    {
                        if (sub_2459() == l_U285._fU0[l_U203])
                        {
                            if ((sub_1590( l_U285._fU0[l_U204] )) AND (sub_35547()))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                {
                                    SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_MISS", 1, 1, 2 );
                                    PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_MISS \n" );
                                }
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_MISS", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_MISS \n" );
                            }
                        }
                        else if (l_U237 == 1)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_MISS_EASY_SHOT", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_MISS_EASY_SHOT \n" );
                            }
                        }
                        switch (l_U203)
                        {
                            case 0:
                            l_U203 = 1;
                            l_U204 = 0;
                            break;
                            case 1:
                            l_U203 = 0;
                            l_U204 = 1;
                            break;
                        }
                        l_U97 = 1;
                        l_U226 = 0;
                        l_U74 = 0;
                    }
                    else
                    {
                        l_U226++;
                        if (NOT l_U61)
                        {
                            if (l_U220[l_U203] == 0)
                            {
                                if (l_U215 == l_U214)
                                {
                                    if (l_U58[l_U203])
                                    {
                                        if (l_U215 == 1)
                                        {
                                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_2A" );
                                        }
                                        else
                                        {
                                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_2B" );
                                        }
                                    }
                                    else
                                    {
                                        l_U97 = 1;
                                    }
                                    switch (l_U203)
                                    {
                                        case 0:
                                        l_U220[0] = 1;
                                        l_U220[1] = 2;
                                        break;
                                        case 1:
                                        l_U220[0] = 2;
                                        l_U220[1] = 1;
                                        break;
                                    }
                                }
                                if (l_U216 == l_U214)
                                {
                                    if (l_U58[l_U203])
                                    {
                                        if (l_U216 == 1)
                                        {
                                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_3A" );
                                        }
                                        else
                                        {
                                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_3B" );
                                        }
                                    }
                                    else
                                    {
                                        l_U97 = 1;
                                    }
                                    switch (l_U203)
                                    {
                                        case 0:
                                        l_U220[0] = 2;
                                        l_U220[1] = 1;
                                        break;
                                        case 1:
                                        l_U220[0] = 1;
                                        l_U220[1] = 2;
                                        break;
                                    }
                                }
                                if ((((l_U215 + l_U216) == l_U214) AND (l_U215 > 0)) AND (l_U216 > 0))
                                {
                                    if (l_U58[l_U203])
                                    {
                                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_4" );
                                    }
                                    else
                                    {
                                        l_U97 = 1;
                                    }
                                }
                            }
                            else if (l_U220[l_U203] == 1)
                            {
                                if (l_U58[l_U203])
                                {
                                    if (l_U215 == 1)
                                    {
                                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_2A" );
                                    }
                                    else
                                    {
                                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_2B" );
                                    }
                                }
                                else
                                {
                                    l_U97 = 1;
                                }
                                if (l_U217 == 7)
                                {
                                    l_U220[l_U203] = 3;
                                }
                            }
                            else if (l_U220[l_U203] == 2)
                            {
                                if (l_U58[l_U203])
                                {
                                    if (l_U216 == 1)
                                    {
                                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_3A" );
                                    }
                                    else
                                    {
                                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_3B" );
                                    }
                                }
                                else
                                {
                                    l_U97 = 1;
                                }
                                if (l_U218 == 7)
                                {
                                    l_U220[l_U203] = 3;
                                }
                            }
                            else if (l_U220[l_U203] == 3)
                            {
                                if (l_U58[l_U203])
                                {
                                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10B", "OK_5" );
                                }
                                else
                                {
                                    l_U97 = 1;
                                }
                                l_U224 = l_U203;
                            };;;;
                            if (l_U224 == -1)
                            {
                                if (l_U285._fU0[l_U203] == sub_2459())
                                {
                                    if ((l_U226 >= 3) AND (NOT (l_U220[l_U203] == 3)))
                                    {
                                        if ((sub_1590( l_U285._fU0[l_U204] )) AND (sub_35547()))
                                        {
                                            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                            {
                                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_POTS_MANY", 1, 1, 2 );
                                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_POTS_MANY \n" );
                                            }
                                        }
                                        else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_POTS_MANY", 1, 1, 2 );
                                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_POTS_MANY \n" );
                                        }
                                    }
                                    else if (l_U220[l_U203] == 3)
                                    {
                                        if ((sub_1590( l_U285._fU0[l_U204] )) AND (sub_35547()))
                                        {
                                            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                            {
                                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_GOES_FOR_BLACK", 1, 1, 2 );
                                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_GOES_FOR_BLACK \n" );
                                            }
                                        }
                                        else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_GOES_FOR_BLACK", 1, 1, 2 );
                                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_GOES_FOR_BLACK \n" );
                                        }
                                    }
                                    else if (l_U237 == 3)
                                    {
                                        if (sub_1590( l_U285._fU0[l_U204] ))
                                        {
                                            if (sub_35547())
                                            {
                                                if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                                {
                                                    SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_POTS", 1, 1, 2 );
                                                    PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_POTS \n" );
                                                }
                                            }
                                            else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                                            {
                                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_POTS", 1, 1, 2 );
                                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_POTS \n" );
                                            }
                                        }
                                        else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_FLUKE_SHOT", 1, 1, 2 );
                                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_FLUKE_SHOT \n" );
                                        }
                                    }
                                    else if ((sub_1590( l_U285._fU0[l_U204] )) AND (sub_35547()))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_POTS", 1, 1, 2 );
                                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_POTS \n" );
                                        }
                                    }
                                    else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                                    {
                                        SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_POTS", 1, 1, 2 );
                                        PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_POTS \n" );
                                    };;;;;
                                }
                                else
                                {
                                    switch (l_U237)
                                    {
                                        case 2:
                                        case 3:
                                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_POT_DIFFICULT_SHOT", 1, 1, 2 );
                                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_POT_DIFFICULT_SHOT \n" );
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            l_U74 = 1;
                            bVar16 = false;
                            if (l_U215 == l_U214)
                            {
                                if (l_U58[l_U203])
                                {
                                    if (l_U215 == 1)
                                    {
                                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_2A" );
                                    }
                                    else
                                    {
                                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_2B" );
                                    }
                                }
                                else
                                {
                                    l_U97 = 1;
                                }
                                bVar16 = true;
                            }
                            if (l_U216 == l_U214)
                            {
                                if (l_U58[l_U203])
                                {
                                    if (l_U216 == 1)
                                    {
                                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_3A" );
                                    }
                                    else
                                    {
                                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_3B" );
                                    }
                                }
                                else
                                {
                                    l_U97 = 1;
                                }
                                bVar16 = true;
                            }
                            if ((((l_U215 + l_U216) == l_U214) AND (l_U215 > 0)) AND (l_U216 > 0))
                            {
                                if (l_U58[l_U203])
                                {
                                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "OK_4" );
                                }
                                else
                                {
                                    l_U97 = 1;
                                }
                                bVar16 = true;
                            }
                            if (bVar16)
                            {
                                if (l_U285._fU0[l_U203] == sub_2459())
                                {
                                    if ((sub_1590( l_U285._fU0[l_U204] )) AND (sub_35547()))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_POTS_ON_BREAK", 1, 1, 2 );
                                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_POTS_ON_BREAK \n" );
                                        }
                                    }
                                    else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                                    {
                                        SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_POTS_ON_BREAK", 1, 1, 2 );
                                        PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_POTS_ON_BREAK \n" );
                                    }
                                }
                                else
                                {
                                    switch (l_U237)
                                    {
                                        case 2:
                                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_POT_DIFFICULT_SHOT", 1, 1, 2 );
                                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_POT_DIFFICULT_SHOT \n" );
                                        }
                                        break;
                                        case 3:
                                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_FLUKE_SHOT", 1, 1, 2 );
                                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_FLUKE_SHOT \n" );
                                        }
                                        break;
                                    }
                                }
                            }
                            if (sub_927( 7 ))
                            {
                                if (l_U58[l_U203])
                                {
                                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10B", "OK_6" );
                                }
                                else
                                {
                                    l_U97 = 1;
                                }
                                l_U224 = l_U203;
                            }
                        }
                    }
                }
                else
                {
                    l_U226 = 0;
                    l_U74 = 0;
                    if (sub_2459() == l_U285._fU0[l_U203])
                    {
                        if ((sub_1590( l_U285._fU0[l_U204] )) AND (sub_35547()))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_FOUL", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_FOUL \n" );
                            }
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_FOUL", 1, 1, 2 );
                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_FOUL \n" );
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_FOUL", 1, 1, 2 );
                        PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_FOUL \n" );
                    }
                    if (l_U61)
                    {
                        if (l_U211 == 0)
                        {
                            l_U91 = 1;
                        }
                    }
                    if (NOT (sub_927( 7 )))
                    {
                        switch (l_U223)
                        {
                            case 1:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "FOUL1" );
                            break;
                            case 2:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "FOUL2" );
                            break;
                            case 3:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "FOUL3" );
                            break;
                            case 4:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "FOUL4" );
                            break;
                            case 5:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "FOUL5" );
                            break;
                            case 6:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "FOUL6" );
                            break;
                            case 7:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10", "FOUL7" );
                            break;
                        }
                    }
                    else
                    {
                        switch (l_U223)
                        {
                            case 1:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10B", "FOUL1B" );
                            break;
                            case 2:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10B", "FOUL2B" );
                            break;
                            case 3:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10B", "FOUL3B" );
                            break;
                            case 4:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10B", "FOUL4B" );
                            break;
                            case 5:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10B", "FOUL5" );
                            break;
                            case 6:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10B", "FOUL6B" );
                            break;
                            case 7:
                            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_10B", "FOUL7B" );
                            break;
                        }
                        l_U224 = l_U204;
                    }
                    switch (l_U203)
                    {
                        case 0:
                        l_U203 = 1;
                        l_U204 = 0;
                        break;
                        case 1:
                        l_U203 = 0;
                        l_U204 = 1;
                        break;
                    }
                    l_U80 = 1;
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (l_U220[I] == 0)
                    {
                        if (l_U212 == 15)
                        {
                            l_U220[I] = 3;
                        }
                    }
                    if (l_U220[I] == 2)
                    {
                        if (l_U218 == 7)
                        {
                            l_U220[I] = 3;
                        }
                    }
                    if (l_U220[I] == 1)
                    {
                        if (l_U217 == 7)
                        {
                            l_U220[I] = 3;
                        }
                    }
                }
                if (NOT l_U76)
                {
                    l_U61 = 0;
                }
                SETTIMERA( 0 );
                l_U201++;
                break;
                case 1:
                if (l_U224 == -1)
                {
                    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                    {
                        l_U89 = 1;
                        CLEAR_PRINTS();
                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U285._fU0[l_U203] );
                        }
                        l_U2 = 1;
                        sub_8409( 8 );
                        break;
                    }
                }
                bVar16 = false;
                if (TIMERA() > 5000)
                {
                    bVar16 = true;
                }
                if (l_U97)
                {
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                        {
                            if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U285._fU0[l_U203] ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U285._fU0[l_U204] ))))
                            {
                                bVar16 = true;
                            }
                        }
                    }
                }
                if (NOT l_U2)
                {
                    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 4 ))))
                    {
                        l_U2 = 1;
                        bVar16 = true;
                    }
                }
                if (bVar16)
                {
                    CLEAR_HELP();
                    l_U201++;
                }
                break;
                case 2:
                if (NOT (l_U224 == -1))
                {
                    l_U76 = 0;
                    PRINTSTRING( "bComingBackFromAbandoning = FALSE 2 \n" );
                    sub_8409( 7 );
                }
                else
                {
                    sub_8250();
                    if (NOT l_U80)
                    {
                        sub_8409( 2 );
                    }
                    else
                    {
                        sub_8409( 1 );
                    }
                }
                break;
            }
            break;
            case 7:
            sub_701( 1 );
            switch (l_U201)
            {
                case 0:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    if (l_U58[l_U224])
                    {
                        if (l_U224 == 0)
                        {
                            if (sub_1590( l_U285._fU0[1] ))
                            {
                                PRINTSTRING( "POOL - ACHIEVMENT UNLOCKED! \n" );
                                AWARD_ACHIEVEMENT( 3 );
                            }
                        }
                        else if (sub_1590( l_U285._fU0[0] ))
                        {
                            PRINTSTRING( "POOL - ACHIEVMENT UNLOCKED! \n" );
                            AWARD_ACHIEVEMENT( 3 );
                        }
                        if (l_U203 == l_U224)
                        {
                            if ((sub_1590( l_U285._fU0[l_U204] )) AND (sub_35547()))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                {
                                    l_U425 = l_U285._fU0[l_U204];
                                    SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_WINS", 1, 1, 2 );
                                    PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_WINS \n" );
                                }
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                            {
                                l_U425 = l_U285._fU0[l_U203];
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_WINS", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_WINS \n" );
                            }
                        }
                        else if ((sub_1590( l_U285._fU0[l_U203] )) AND (sub_35547()))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                            {
                                l_U425 = l_U285._fU0[l_U203];
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_WINS", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_WINS \n" );
                            }
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                        {
                            l_U425 = l_U285._fU0[l_U204];
                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_WINS", 1, 1, 2 );
                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_WINS \n" );
                        };;;
                    }
                    else if (l_U203 == l_U224)
                    {
                        if ((sub_1590( l_U285._fU0[l_U203] )) AND (sub_35547()))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                            {
                                l_U425 = l_U285._fU0[l_U203];
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_LOSES", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_LOSES \n" );
                            }
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                        {
                            l_U425 = l_U285._fU0[l_U204];
                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_LOSES", 1, 1, 2 );
                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_LOSES \n" );
                        }
                    }
                    else if ((sub_1590( l_U285._fU0[l_U204] )) AND (sub_35547()))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                        {
                            l_U425 = l_U285._fU0[l_U204];
                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_LOSES", 1, 1, 2 );
                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_LOSES \n" );
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                    {
                        l_U425 = l_U285._fU0[l_U203];
                        SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_LOSES", 1, 1, 2 );
                        PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_LOSES \n" );
                    };;;;
                    if (NOT (DOES_CAM_EXIST( l_U109 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U425 )))
                        {
                            CREATE_CAM( 14, ref l_U109 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            ATTACH_CAM_TO_PED( l_U109, l_U425 );
                            SET_CAM_ATTACH_OFFSET( l_U109, -1.47500000, 2.22500000, 0.55000000 );
                            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U109, 1 );
                            POINT_CAM_AT_PED( l_U109, l_U425 );
                            SET_CAM_POINT_OFFSET( l_U109, 0.20000000, 0.00000000, 0.42500000 );
                            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U109, 1 );
                            SET_CAM_FOV( l_U109, 21.50000000 );
                            SET_CAM_ACTIVE( l_U109, 1 );
                            SET_CAM_PROPAGATE( l_U109, 1 );
                        }
                    }
                    if (l_U58[l_U224])
                    {
                        PRINT_NOW( "WON", 5000, 1 );
                        INCREMENT_INT_STAT_NO_MESSAGE( 316, 1 );
                        if (l_U74)
                        {
                            INCREMENT_INT_STAT_NO_MESSAGE( 318, 1 );
                            PRINTSTRING( "POOL STAT UPDATED - NUMBER OF CLEARANCES FROM BREAK \n" );
                        }
                        sub_63369( 0 );
                        sub_63974( 0 );
                    }
                    else
                    {
                        PRINT_NOW( "LOST", 5000, 1 );
                        INCREMENT_INT_STAT_NO_MESSAGE( 317, 1 );
                        sub_63974( 1 );
                    }
                    SETTIMERA( 0 );
                    l_U95 = 0;
                    l_U201++;
                }
                break;
                case 1:
                if (TIMERA() > 3000)
                {
                    PRINT_HELP_FOREVER( "PLH_09" );
                    if (NOT l_U95)
                    {
                        if (l_U285._fU0[l_U203] == sub_2459())
                        {
                            if ((sub_1590( l_U285._fU0[l_U204] )) AND (sub_35547()))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                                {
                                    SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAY_AGAIN", 1, 1, 2 );
                                    PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAY_AGAIN \n" );
                                }
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAYER_AGAIN", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAYER_AGAIN \n" );
                            }
                        }
                        else if ((sub_1590( l_U285._fU0[l_U203] )) AND (sub_35547()))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U203], "POOL_PLAY_AGAIN", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iCurrentPlayer - POOL_PLAY_AGAIN \n" );
                            }
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "POOL_PLAYER_AGAIN", 1, 1, 2 );
                            PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - POOL_PLAYER_AGAIN \n" );
                        };;;
                        l_U95 = 1;
                    }
                    if (NOT l_U2)
                    {
                        if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
                        {
                            CLEAR_PRINTS();
                            CLEAR_HELP();
                            sub_8130();
                            sub_11799();
                            if (l_U227 == 0)
                            {
                                l_U203 = 1;
                                l_U204 = 0;
                                l_U227 = 1;
                            }
                            else
                            {
                                l_U203 = 0;
                                l_U204 = 1;
                                l_U227 = 0;
                            }
                            l_U2 = 1;
                            if (l_U58[l_U204])
                            {
                                sub_8409( 1 );
                            }
                            else
                            {
                                sub_8409( 2 );
                            }
                        }
                    }
                    if (NOT l_U2)
                    {
                        if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                        {
                            l_U2 = 1;
                            sub_64994( 0, 0 );
                        }
                    }
                }
                else if (NOT l_U2)
                {
                    if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
                    {
                        l_U2 = 1;
                        SETTIMERA( 10000 );
                    }
                }
                break;
            }
            break;
            case 8:
            sub_701( 1 );
            if (sub_65203( l_U203 ))
            {
                sub_64994( 1000, 1 );
            }
            switch (l_U201)
            {
                case 0:
                CLEAR_HELP();
                CLEAR_PRINTS();
                PRINT_NOW( "SURE", 5000, 1 );
                if (DOES_OBJECT_EXIST( l_U280[l_U203] ))
                {
                    SET_OBJECT_VISIBLE( l_U280[l_U203], 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                {
                    sub_31095( l_U285._fU0[l_U203], l_U320, 0 );
                    TASK_PLAY_ANIM( l_U285._fU0[l_U203], "IDLE", "MINI_POOL", 8.00000000, 1, 0, 0, 0, -1 );
                }
                sub_34416();
                sub_2509( 0 );
                if (NOT (DOES_CAM_EXIST( l_U109 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
                    {
                        l_U425 = l_U285._fU0[l_U203];
                        CREATE_CAM( 14, ref l_U109 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        ATTACH_CAM_TO_PED( l_U109, l_U425 );
                        SET_CAM_ATTACH_OFFSET( l_U109, -1.47500000, 2.22500000, 0.55000000 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U109, 1 );
                        POINT_CAM_AT_PED( l_U109, l_U425 );
                        SET_CAM_POINT_OFFSET( l_U109, 0.20000000, 0.00000000, 0.42500000 );
                        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U109, 1 );
                        SET_CAM_FOV( l_U109, 21.50000000 );
                        SET_CAM_ACTIVE( l_U109, 1 );
                        SET_CAM_PROPAGATE( l_U109, 1 );
                    }
                }
                l_U201++;
                break;
                case 1:
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PLH_07" )))
                {
                    PRINT_HELP_FOREVER( "PLH_07" );
                }
                if (NOT l_U2)
                {
                    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                    {
                        l_U2 = 1;
                        if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
                        {
                            if (NOT (sub_1590( l_U285._fU0[l_U204] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U285._fU0[l_U204], "GAME_QUIT_EARLY", 1, 1, 2 );
                                PRINTSTRING( "\nPOOL AMBIENT SPEECH - iWaitingPlayer - GAME_QUIT_EARLY \n" );
                            }
                        }
                        sub_64994( 0, 1 );
                    }
                }
                if (NOT l_U2)
                {
                    if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
                    {
                        CLEAR_PRINTS();
                        CLEAR_HELP();
                        l_U76 = 1;
                        l_U2 = 1;
                        if (NOT l_U89)
                        {
                            l_U89 = 0;
                            sub_8409( 6 );
                        }
                        else
                        {
                            sub_8409( 2 );
                        }
                    }
                }
                break;
            }
            break;
        }
        sub_66280();
        if (NOT (l_U200 == 3))
        {
            if (DOES_OBJECT_EXIST( l_U283 ))
            {
                DELETE_OBJECT( ref l_U283 );
            }
        }
        if (DOES_CAM_EXIST( l_U109 ))
        {
            if (DOES_CHAR_EXIST( l_U425 ))
            {
                if (NOT (l_U285._fU0[0] == l_U425))
                {
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
                    {
                        SET_CHAR_VISIBLE( l_U285._fU0[0], 0 );
                    }
                }
                if (NOT (l_U285._fU0[1] == l_U425))
                {
                    if (NOT (IS_CHAR_INJURED( l_U285._fU0[1] )))
                    {
                        SET_CHAR_VISIBLE( l_U285._fU0[1], 0 );
                    }
                }
            }
        }
        if (l_U62)
        {
            sub_66667();
        }
        if (DOES_OBJECT_EXIST( l_U285._fU24 ))
        {
            for ( I = 0; I < 16; I++ )
            {
                if ((DOES_OBJECT_EXIST( l_U246[I] )) AND (NOT l_U7[I]))
                {
                    if (DOES_OBJECT_EXIST( l_U263[I] ))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, 0.00000000, 0.00000000, l_U311._fU8, ref fVar10, ref fVar10, ref vVar4.z );
                        GET_OBJECT_COORDINATES( l_U246[I], ref vVar4.x, ref vVar4.y, ref fVar10 );
                        if (fVar10 < vVar4.z)
                        {
                            DELETE_OBJECT( ref l_U263[I] );
                        }
                        else
                        {
                            vVar4 = {vVar4 + l_U422};
                            SET_OBJECT_COORDINATES( l_U263[I], vVar4.x, vVar4.y, vVar4.z );
                        }
                    }
                    else
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, 0.00000000, 0.00000000, l_U311._fU8, ref fVar10, ref fVar10, ref vVar4.z );
                        GET_OBJECT_COORDINATES( l_U246[I], ref vVar4.x, ref vVar4.y, ref fVar10 );
                        if (fVar10 < vVar4.z)
                        {
                            DELETE_OBJECT( ref l_U263[I] );
                        }
                        else
                        {
                            vVar4 = {vVar4 + l_U422};
                            CREATE_OBJECT( 742638206, vVar4.x, vVar4.y, vVar4.z, ref l_U263[I], 1 );
                            FREEZE_OBJECT_POSITION( l_U263[I], 1 );
                            SET_OBJECT_COLLISION( l_U263[I], 0 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U263[I], l_U199 );
                        }
                    }
                }
                else if (DOES_OBJECT_EXIST( l_U263[I] ))
                {
                    DELETE_OBJECT( ref l_U263[I] );
                }
            }
        }
        if (NOT (l_U200 == 0))
        {
            sub_68663( l_U285._fU0[0], ref l_U280[0] );
            sub_68663( l_U285._fU0[1], ref l_U280[1] );
        }
        if ((IS_CHAR_INJURED( l_U285._fU0[0] )) || (IS_CHAR_INJURED( l_U285._fU0[1] )))
        {
            sub_64994( 1000, 1 );
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            l_U224 = 1;
            sub_8409( 7 );
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 33 ))
        {
            l_U224 = 0;
            sub_8409( 7 );
        }
        WAIT( 0 );
    }
    return;
}

void sub_691(unknown uParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    sub_701( 0 );
    DISPLAY_RADAR( 1 );
    if (DOES_OBJECT_EXIST( l_U283 ))
    {
        DELETE_OBJECT( ref l_U283 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U246[I] ))
        {
            if (sub_927( I ))
            {
                DELETE_OBJECT( ref l_U246[I] );
            }
            else
            {
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U246[I] );
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U263[I] ))
        {
            DELETE_OBJECT( ref l_U263[I] );
        }
    }
    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[I] )))
        {
            if (l_U100[I])
            {
                STOP_PED_SPEAKING( l_U285._fU0[I], 1 );
            }
        }
    }
    for ( I = 0; I < 2; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U280[I] ))
        {
            DELETE_OBJECT( ref l_U280[I] );
        }
    }
    for ( I = 0; I < 2; I++ )
    {
        if (l_U58[I])
        {
            if (IS_PLAYER_PLAYING( l_U285._fU12[I] ))
            {
                SET_PLAYER_CONTROL( l_U285._fU12[I], 1 );
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_1293() ))
    {
        SET_PLAYER_CONTROL( sub_1293(), 1 );
    }
    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[I] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U285._fU0[I], 0 );
            sub_1414( ref l_U285._fU0[I] );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U285._fU0[I] );
            if (sub_1590( l_U285._fU0[I] ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U285._fU0[I], sub_2145() )))
                {
                    SET_GROUP_MEMBER( sub_2145(), l_U285._fU0[I] );
                }
            }
        }
    }
    for ( I = 0; I < l_U239; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U426[I] )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U426[I], sub_2145() )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U426[I], 0 );
                SET_GROUP_MEMBER( sub_2145(), l_U426[I] );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U426[I] );
            }
        }
    }
    if (l_U225 > 0)
    {
        GET_GAME_TIMER( ref I );
        if ((I - l_U225) > 0)
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 52, I - l_U225 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_1293() ))
    {
        SET_EVERYONE_IGNORE_PLAYER( sub_1293(), 0 );
        SET_PLAYER_CONTROL( sub_1293(), 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2459() );
    }
    sub_2509( uParam0 );
    sub_3168( ref l_U206 );
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_3216();
    OVERRIDE_FREEZE_FLAGS( 0 );
    SET_USE_POOL_GAME_PHYSICS_SETTINGS( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    if (IS_PLAYER_PLAYING( sub_1293() ))
    {
        GET_CHAR_COORDINATES( sub_2459(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        sub_3366( uVar4, 200.00000000 );
    }
    sub_3539();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_701(boolean bParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U246[I] ))
        {
            FREEZE_OBJECT_POSITION( l_U246[I], bParam0 );
            if (bParam0)
            {
                SET_OBJECT_COLLISION( l_U246[I], 0 );
            }
            else
            {
                SET_OBJECT_COLLISION( l_U246[I], 1 );
            }
        }
    }
    if (bParam0)
    {
        l_U62 = 0;
        l_U87 = 0;
    }
    else
    {
        l_U62 = 1;
    }
    return;
}

int sub_927(int iParam0)
{
    if (NOT (iParam0 == -1))
    {
        return l_U7[iParam0];
    }
    return 0;
}

void sub_1293()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1414(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        sub_1442( (uParam0^) );
        SET_CHAR_COLLISION( (uParam0^), 1 );
        FREEZE_CHAR_POSITION( (uParam0^), 0 );
        SET_CHAR_VISIBLE( (uParam0^), 1 );
    }
    return;
}

void sub_1442(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_OBJECT_EXIST( l_U284 ))
        {
            if (IS_PED_ATTACHED_TO_OBJECT( uParam0, l_U284 ))
            {
                DETACH_PED( uParam0, 1 );
            }
        }
    }
    return;
}

int sub_1590(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (((IS_CHAR_MODEL( uParam0, sub_1617( 7 ) )) || (IS_CHAR_MODEL( uParam0, sub_1617( 1 ) ))) || (IS_CHAR_MODEL( uParam0, sub_1617( 3 ) )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_1617(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_2032( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_2032(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2145()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2459()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2509(int iParam0)
{
    if (DOES_CAM_EXIST( l_U103 ))
    {
        DESTROY_CAM( l_U103 );
    }
    if (DOES_CAM_EXIST( l_U104 ))
    {
        DESTROY_CAM( l_U104 );
    }
    if (DOES_CAM_EXIST( l_U105 ))
    {
        DESTROY_CAM( l_U105 );
    }
    if (DOES_CAM_EXIST( l_U106 ))
    {
        DESTROY_CAM( l_U106 );
    }
    if (DOES_CAM_EXIST( l_U107 ))
    {
        DESTROY_CAM( l_U107 );
    }
    if (DOES_CAM_EXIST( l_U108 ))
    {
        sub_2680();
    }
    if (DOES_CAM_EXIST( l_U109 ))
    {
        DESTROY_CAM( l_U109 );
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[0], 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[1] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[1], 1 );
        }
    }
    if (DOES_CAM_EXIST( l_U716 ))
    {
        SET_CAM_ACTIVE( l_U716, 0 );
        SET_CAM_PROPAGATE( l_U716, 0 );
        DESTROY_CAM( l_U717[0] );
        DESTROY_CAM( l_U717[1] );
        DESTROY_CAM( l_U717[2] );
        DESTROY_CAM( l_U717[3] );
        DESTROY_CAM( l_U716 );
    }
    if (iParam0 > 0)
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, iParam0 );
    }
    else
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    }
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( iParam0 );
    }
    if (iParam0 >= 0)
    {
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    return;
}

void sub_2680()
{
    if (DOES_CAM_EXIST( l_U108 ))
    {
        sub_2707( 1 );
        DESTROY_CAM( l_U108 );
    }
    return;
}

void sub_2707(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_OBJECT_EXIST( l_U285._fU24 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U370._fU0, l_U370._fU4, l_U370._fU8, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( uVar3._fU0, uVar3._fU4, uVar3._fU8, 5.00000000, 1897153089, uParam0 );
    }
    return;
}

void sub_3168(unknown uParam0)
{
    SET_USE_HIGHDOF( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_3216()
{
    int I;

    for ( I = 0; I < 25; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U472[I] ))
        {
            DELETE_OBJECT( ref l_U472[I] );
        }
    }
    return;
}

void sub_3366(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    boolean bVar7;

    bVar7 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar6 );
    if (DOES_VEHICLE_EXIST( uVar6 ))
    {
        if (NOT (IS_CAR_DEAD( uVar6 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2459(), uVar6 )))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar6 )))
                {
                    SET_CAR_AS_MISSION_CAR( uVar6 );
                    bVar7 = true;
                }
            }
        }
    }
    CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
    if (bVar7)
    {
        if (DOES_VEHICLE_EXIST( uVar6 ))
        {
            sub_3506( uVar6 );
        }
    }
    return;
}

void sub_3506(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_3539()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12380 = 0;
    if (g_U28807._fU0[0] == 34)
    {
        if (sub_3589())
        {
            g_U12379 = 0;
        }
        sub_3746();
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU40 == 8)
        {
            g_U28807._fU40 = 3;
        }
    }
    else if (NOT (g_U28807._fU24 == 16))
    {
        if (g_U28807._fU36 == 8)
        {
            g_U28807._fU36 = 3;
        }
    }
    else
    {
        return;
    }
    g_U28807._fU52 = 1;
    return;
}

int sub_3589()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony1" )) > 0)
    {
        PRINTSTRING( "\n\n*******************\nTony1 Active so don't change the g_onMission flag\n*******************\n" );
        return 0;
    }
    return 1;
}

void sub_3746()
{
    g_U28805._fU4 = 1;
    return;
}

float sub_5034(unknown uParam0)
{
    if (sub_1590( uParam0 ))
    {
        if (IS_CHAR_MODEL( uParam0, sub_1617( 0 ) ))
        {
            return 0.80000000;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1617( 1 ) ))
        {
            return 0.80000000;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1617( 3 ) ))
        {
            return 0.80000000;
        }
    }
    return 0.80000000;
}

void sub_5157()
{
    unknown[4] uVar2;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar2, 4);
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] + 0.03950000, l_U158[0] - 0.03950000, 0.89200000, ref uVar2[0]._fU0, ref uVar2[0]._fU4, ref uVar2[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[1] - 0.03950000, l_U158[1] - 0.03950000, 0.89200000, ref uVar2[1]._fU0, ref uVar2[1]._fU4, ref uVar2[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[2] - 0.03950000, l_U158[2] + 0.03950000, 0.89200000, ref uVar2[2]._fU0, ref uVar2[2]._fU4, ref uVar2[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[3] + 0.03950000, l_U158[3] + 0.03950000, 0.89200000, ref uVar2[3]._fU0, ref uVar2[3]._fU4, ref uVar2[3]._fU8 );
    l_U513._fU0[0]._fU0[0] = {uVar2[0]};
    l_U513._fU0[0]._fU0[1] = {uVar2[1]};
    l_U513._fU0[1]._fU0[0] = {uVar2[1]};
    l_U513._fU0[1]._fU0[1] = {uVar2[2]};
    l_U513._fU0[2]._fU0[0] = {uVar2[2]};
    l_U513._fU0[2]._fU0[1] = {uVar2[3]};
    l_U513._fU0[3]._fU0[0] = {uVar2[3]};
    l_U513._fU0[3]._fU0[1] = {uVar2[0]};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] + 0.03950000, l_U158[0] - 0.03950000, 0.89200000, ref uVar2[0]._fU0, ref uVar2[0]._fU4, ref uVar2[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[1] - 0.03950000, l_U158[1] - 0.03950000, 0.89200000, ref uVar2[1]._fU0, ref uVar2[1]._fU4, ref uVar2[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U163[0] - 0.03950000, l_U166[0] + 0.03950000, 0.89200000, ref uVar2[2]._fU0, ref uVar2[2]._fU4, ref uVar2[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U163[1] + 0.03950000, l_U166[1] + 0.03950000, 0.89200000, ref uVar2[3]._fU0, ref uVar2[3]._fU4, ref uVar2[3]._fU8 );
    l_U542._fU0[0]._fU0[0] = {uVar2[0]};
    l_U542._fU0[0]._fU0[1] = {uVar2[1]};
    l_U542._fU0[1]._fU0[0] = {uVar2[1]};
    l_U542._fU0[1]._fU0[1] = {uVar2[2]};
    l_U542._fU0[2]._fU0[0] = {uVar2[2]};
    l_U542._fU0[2]._fU0[1] = {uVar2[3]};
    l_U542._fU0[3]._fU0[0] = {uVar2[3]};
    l_U542._fU0[3]._fU0[1] = {uVar2[0]};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0], l_U158[0], 0.89200000, ref uVar2[0]._fU0, ref uVar2[0]._fU4, ref uVar2[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[1], l_U158[1], 0.89200000, ref uVar2[1]._fU0, ref uVar2[1]._fU4, ref uVar2[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[2], l_U158[2], 0.89200000, ref uVar2[2]._fU0, ref uVar2[2]._fU4, ref uVar2[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[3], l_U158[3], 0.89200000, ref uVar2[3]._fU0, ref uVar2[3]._fU4, ref uVar2[3]._fU8 );
    l_U571._fU0[0]._fU0[0] = {uVar2[0]};
    l_U571._fU0[0]._fU0[1] = {uVar2[1]};
    l_U571._fU0[1]._fU0[0] = {uVar2[1]};
    l_U571._fU0[1]._fU0[1] = {uVar2[2]};
    l_U571._fU0[2]._fU0[0] = {uVar2[2]};
    l_U571._fU0[2]._fU0[1] = {uVar2[3]};
    l_U571._fU0[3]._fU0[0] = {uVar2[3]};
    l_U571._fU0[3]._fU0[1] = {uVar2[0]};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U308._fU0 * -1.00000000, l_U308._fU4, l_U308._fU8, ref uVar2[0]._fU0, ref uVar2[0]._fU4, ref uVar2[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U308._fU0, l_U308._fU4, l_U308._fU8, ref uVar2[1]._fU0, ref uVar2[1]._fU4, ref uVar2[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U308._fU0, l_U308._fU4 * -1.00000000, l_U308._fU8, ref uVar2[2]._fU0, ref uVar2[2]._fU4, ref uVar2[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U308._fU0 * -1.00000000, l_U308._fU4 * -1.00000000, l_U308._fU8, ref uVar2[3]._fU0, ref uVar2[3]._fU4, ref uVar2[3]._fU8 );
    l_U600._fU0[0]._fU0[0] = {uVar2[0]};
    l_U600._fU0[0]._fU0[1] = {uVar2[1]};
    l_U600._fU0[1]._fU0[0] = {uVar2[1]};
    l_U600._fU0[1]._fU0[1] = {uVar2[2]};
    l_U600._fU0[2]._fU0[0] = {uVar2[2]};
    l_U600._fU0[2]._fU0[1] = {uVar2[3]};
    l_U600._fU0[3]._fU0[0] = {uVar2[3]};
    l_U600._fU0[3]._fU0[1] = {uVar2[0]};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U299._fU0 * -1.00000000, l_U299._fU4, l_U299._fU8, ref uVar2[0]._fU0, ref uVar2[0]._fU4, ref uVar2[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U299._fU0, l_U299._fU4, l_U299._fU8, ref uVar2[1]._fU0, ref uVar2[1]._fU4, ref uVar2[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U299._fU0, l_U299._fU4 * -1.00000000, l_U299._fU8, ref uVar2[2]._fU0, ref uVar2[2]._fU4, ref uVar2[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U299._fU0 * -1.00000000, l_U299._fU4 * -1.00000000, l_U299._fU8, ref uVar2[3]._fU0, ref uVar2[3]._fU4, ref uVar2[3]._fU8 );
    l_U629._fU0[0]._fU0[0] = {uVar2[0]};
    l_U629._fU0[0]._fU0[1] = {uVar2[1]};
    l_U629._fU0[1]._fU0[0] = {uVar2[1]};
    l_U629._fU0[1]._fU0[1] = {uVar2[2]};
    l_U629._fU0[2]._fU0[0] = {uVar2[2]};
    l_U629._fU0[2]._fU0[1] = {uVar2[3]};
    l_U629._fU0[3]._fU0[0] = {uVar2[3]};
    l_U629._fU0[3]._fU0[1] = {uVar2[0]};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U302._fU0 * -1.00000000, l_U302._fU4, l_U302._fU8, ref uVar2[0]._fU0, ref uVar2[0]._fU4, ref uVar2[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U302._fU0, l_U302._fU4, l_U302._fU8, ref uVar2[1]._fU0, ref uVar2[1]._fU4, ref uVar2[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U302._fU0, l_U302._fU4 * -1.00000000, l_U302._fU8, ref uVar2[2]._fU0, ref uVar2[2]._fU4, ref uVar2[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U302._fU0 * -1.00000000, l_U302._fU4 * -1.00000000, l_U302._fU8, ref uVar2[3]._fU0, ref uVar2[3]._fU4, ref uVar2[3]._fU8 );
    l_U658._fU0[0]._fU0[0] = {uVar2[0]};
    l_U658._fU0[0]._fU0[1] = {uVar2[1]};
    l_U658._fU0[1]._fU0[0] = {uVar2[1]};
    l_U658._fU0[1]._fU0[1] = {uVar2[2]};
    l_U658._fU0[2]._fU0[0] = {uVar2[2]};
    l_U658._fU0[2]._fU0[1] = {uVar2[3]};
    l_U658._fU0[3]._fU0[0] = {uVar2[3]};
    l_U658._fU0[3]._fU0[1] = {uVar2[0]};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] - 0.18300000, l_U158[0] + 0.18300000, 0.89200000, ref uVar2[0]._fU0, ref uVar2[0]._fU4, ref uVar2[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[1] + 0.18300000, l_U158[1] + 0.18300000, 0.89200000, ref uVar2[1]._fU0, ref uVar2[1]._fU4, ref uVar2[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[2] + 0.18300000, l_U158[2] - 0.18300000, 0.89200000, ref uVar2[2]._fU0, ref uVar2[2]._fU4, ref uVar2[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[3] - 0.18300000, l_U158[3] - 0.18300000, 0.89200000, ref uVar2[3]._fU0, ref uVar2[3]._fU4, ref uVar2[3]._fU8 );
    l_U687._fU0[0]._fU0[0] = {uVar2[0]};
    l_U687._fU0[0]._fU0[1] = {uVar2[1]};
    l_U687._fU0[1]._fU0[0] = {uVar2[1]};
    l_U687._fU0[1]._fU0[1] = {uVar2[2]};
    l_U687._fU0[2]._fU0[0] = {uVar2[2]};
    l_U687._fU0[2]._fU0[1] = {uVar2[3]};
    l_U687._fU0[3]._fU0[0] = {uVar2[3]};
    l_U687._fU0[3]._fU0[1] = {uVar2[0]};
    return;
}

void sub_8130()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        l_U7[I] = 0;
        l_U24[I] = 0;
    }
    l_U224 = -1;
    l_U212 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U220[0] = 0;
    l_U220[1] = 0;
    l_U61 = 1;
    l_U74 = 0;
    l_U62 = 0;
    l_U80 = 1;
    l_U94 = 0;
    sub_8250();
    return;
}

void sub_8250()
{
    l_U211 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U216 = 0;
    l_U213 = 0;
    l_U223 = 0;
    l_U391 = {0.00000000, 0.00000000, 0.00000000};
    l_U219 = 0;
    l_U86 = 0;
    l_U87 = 0;
    l_U183 = 0.00000000;
    l_U99 = 0;
    return;
}

void sub_8409(int iParam0)
{
    if (NOT (l_U200 == iParam0))
    {
        sub_3216();
        l_U201 = 0;
        l_U202 = 0;
        l_U200 = iParam0;
    }
    return;
}

void sub_8470()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U172 += fVar2;
    l_U175 += fVar2;
    l_U182 += fVar2;
    l_U184 += fVar2;
    l_U189 += fVar2;
    l_U196 += fVar2;
    return;
}

void sub_8928()
{
    return;
}

void sub_9007(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_USE_HIGHDOF( 1 );
    return;
}

void sub_9495(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    int iVar5;
    int I;

    Result = nil;
    if (IS_PLAYER_PLAYING( sub_1293() ))
    {
        if (DOES_GROUP_EXIST( sub_2145() ))
        {
            GET_GROUP_SIZE( sub_2145(), ref uVar4, ref iVar5 );
            if (iVar5 > 0)
            {
                for ( I = 0; I < iVar5; I++ )
                {
                    GET_GROUP_MEMBER( sub_2145(), I, ref Result );
                    if (NOT (IS_CHAR_INJURED( Result )))
                    {
                        if (IS_CHAR_MODEL( Result, sub_1617( uParam0 ) ))
                        {
                            return Result;
                        }
                    }
                }
            }
        }
    }
    Result = nil;
    return Result;
}

void sub_9905(int iParam0)
{
    if (iParam0 >= 2)
    {
        return nil;
    }
    return g_U28807._fU12[iParam0];
}

int sub_9981(int iParam0)
{
    int I;

    for ( I = 0; I < l_U426; I++ )
    {
        if (iParam0 == l_U426[I])
        {
            return 1;
        }
    }
    return 0;
}

void sub_10363()
{
    sub_10372();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_10372()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12380 = 1;
    g_U28807._fU44 = 34;
    if (NOT (g_U28807._fU0[0] == 34))
    {
        g_U28807._fU48 = 1;
        g_U28807._fU52 = 0;
        if (NOT (g_U28807._fU28 == 16))
        {
            sub_10462();
        }
        return;
    }
    if (sub_3589())
    {
        g_U12379 = 1;
    }
    sub_10538();
    return;
}

void sub_10462()
{
    if (NOT (g_U28807._fU56 > 0))
    {
        return;
    }
    g_U28807._fU56--;
    return;
}

void sub_10538()
{
    g_U28805._fU4 = 0;
    return;
}

void sub_10617(int iParam0)
{
    int I;

    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    if (iParam0 == nil)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT (g_U28807._fU0[I] == 34))
        {
            if (g_U28807._fU12[I] == iParam0)
            {
                g_U28807._fU44 = g_U28807._fU0[I];
                return;
            }
        }
    }
    PRINTSTRING( "********************Minigames_Store_CompetitorID() ---> Unknown Competitor PedIndex\n" );
    return;
}

int sub_11186(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (IS_OBJECT_IN_AREA_3D( uParam0, -1725.71000000, 343.84000000, 28.30000000, -1718.71000000, 350.84000000, 34.30000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_11799()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I < 16; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U246[I] ))
        {
            DELETE_OBJECT( ref l_U246[I] );
        }
        if (NOT (DOES_OBJECT_EXIST( l_U246[I] )))
        {
            if (DOES_OBJECT_EXIST( l_U285._fU24 ))
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, 0.00000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                CREATE_OBJECT( sub_11937( I ), uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U246[I], 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U246[I], l_U199 );
                SET_OBJECT_RECORDS_COLLISIONS( l_U246[I], 1 );
                SET_OBJECT_USED_IN_POOL_GAME( l_U246[I], 1 );
            }
        }
    }
    sub_12404( ref l_U285._fU24 );
    for ( I = 0; I < 16; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U246[I] ))
        {
            SET_OBJECT_DYNAMIC( l_U246[I], 1 );
            FREEZE_OBJECT_POSITION( l_U246[I], 0 );
            SET_OBJECT_COLLISION( l_U246[I], 1 );
            SET_OBJECT_VISIBLE( l_U246[I], 1 );
        }
    }
    while (NOT sub_14042())
    {
        WAIT( 0 );
    }
    sub_8130();
    return;
}

int sub_11937(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return -195381842;
        break;
        case 1:
        return -1037708987;
        break;
        case 2:
        return -1603367465;
        break;
        case 3:
        return 495978524;
        break;
        case 4:
        return 737289440;
        break;
        case 5:
        return 152821552;
        break;
        case 6:
        return 391805869;
        break;
        case 7:
        return 1777574126;
        break;
        case 8:
        return 1000457291;
        break;
        case 9:
        return 2027899357;
        break;
        case 10:
        return -1975456608;
        break;
        case 11:
        return 1464927937;
        break;
        case 12:
        return 1772563309;
        break;
        case 13:
        return 1139040232;
        break;
        case 14:
        return -735018886;
        break;
        case 15:
        return 510366967;
        break;
    }
    return 510366967;
}

void sub_12404(unknown uParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int I;

    fVar3 = 0.03950000 * 2.00000000;
    fVar4 = 0.03950000 * -1.00000000;
    fVar5 = (fVar3 * fVar3) - (0.03950000 * 0.03950000);
    fVar5 = SQRT( fVar5 );
    fVar6 = fVar5 * -1.00000000;
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( (uParam0^), l_U311._fU0, l_U311._fU4, l_U311._fU8, ref uVar7, ref uVar8, ref uVar9 );
    GET_OBJECT_HEADING( (uParam0^), ref uVar10 );
    SET_OBJECT_COORDINATES( l_U246[0], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[0], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[0], fVar4, fVar6, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[8], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[8], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[8], fVar3, 0.00000000, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[2], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[2], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[8], fVar4, fVar6, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[6], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[6], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[6], fVar3, 0.00000000, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[7], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[7], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[7], fVar3, 0.00000000, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[9], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[9], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[6], fVar4, fVar6, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[10], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[10], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[10], fVar3, 0.00000000, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[1], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[1], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[1], fVar3, 0.00000000, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[14], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[14], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[14], fVar3, 0.00000000, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[4], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[4], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[10], fVar4, fVar6, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[5], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[5], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[5], fVar3, 0.00000000, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[11], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[11], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[11], fVar3, 0.00000000, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[12], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[12], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[12], fVar3, 0.00000000, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[3], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[3], uVar10 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[3], fVar3, 0.00000000, 0.00000000, ref uVar7, ref uVar8, ref uVar9 );
    SET_OBJECT_COORDINATES( l_U246[13], uVar7, uVar8, uVar9 );
    SET_OBJECT_HEADING( l_U246[13], uVar10 );
    sub_13580();
    for ( I = 0; I < 16; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U246[I] ))
        {
            l_U7[I] = 0;
        }
    }
    return;
}

void sub_13580()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    FREEZE_OBJECT_POSITION( l_U246[15], 1 );
    SET_OBJECT_DYNAMIC( l_U246[15], 0 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, 0.04500000, 0.79800000, l_U311._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    SET_OBJECT_COORDINATES( l_U246[15], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    if (l_U57)
    {
        PRINTSTRING( "SET_OBJECT_COORDS called 4 pos.z = " );
        PRINTFLOAT( uVar2._fU8 );
        PRINTSTRING( "\n" );
    }
    SET_OBJECT_DYNAMIC( l_U246[15], 1 );
    FREEZE_OBJECT_POSITION( l_U246[15], 0 );
    SET_OBJECT_COLLISION( l_U246[15], 1 );
    SET_OBJECT_VISIBLE( l_U246[15], 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U246[15], l_U199 );
    l_U7[15] = 0;
    return;
}

int sub_14042()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U246[I] ))
        {
            if (DOES_OBJECT_HAVE_PHYSICS( l_U246[I] ))
            {
                SET_OBJECT_PHYSICS_PARAMS( l_U246[I], l_U503, l_U504, l_U505, l_U508, l_U511, l_U512 );
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

void sub_14392()
{
    if (DOES_CAM_EXIST( l_U109 ))
    {
        SET_CAM_ACTIVE( l_U109, 1 );
        SET_CAM_PROPAGATE( l_U109, 1 );
        DESTROY_CAM( l_U109 );
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[0], 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[1] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[1], 1 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    if (NOT (DOES_CAM_EXIST( l_U108 )))
    {
        CREATE_CAM( 14, ref l_U108 );
        ATTACH_CAM_TO_OBJECT( l_U108, l_U285._fU24 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U108, 1 );
        POINT_CAM_AT_OBJECT( l_U108, l_U285._fU24 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U108, 1 );
        sub_2707( 0 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    if ((DOES_CAM_EXIST( l_U105 )) || (DOES_CAM_EXIST( l_U104 )))
    {
        if (DOES_CAM_EXIST( l_U105 ))
        {
            if (l_U82)
            {
                if (sub_14726( l_U105, l_U108, 1000 ))
                {
                    DESTROY_CAM( l_U105 );
                }
            }
            else
            {
                DESTROY_CAM( l_U105 );
                SET_CAM_ACTIVE( l_U108, 1 );
                SET_CAM_PROPAGATE( l_U108, 1 );
            }
        }
        if (DOES_CAM_EXIST( l_U104 ))
        {
            if (l_U82)
            {
                if (sub_14726( l_U104, l_U108, 1000 ))
                {
                    DESTROY_CAM( l_U104 );
                }
            }
            else
            {
                DESTROY_CAM( l_U104 );
                SET_CAM_ACTIVE( l_U108, 1 );
                SET_CAM_PROPAGATE( l_U108, 1 );
            }
        }
    }
    else
    {
        SET_CAM_ACTIVE( l_U108, 1 );
        SET_CAM_PROPAGATE( l_U108, 1 );
    }
    if (DOES_CAM_EXIST( l_U103 ))
    {
        DESTROY_CAM( l_U103 );
    }
    if (DOES_CAM_EXIST( l_U108 ))
    {
        SET_CAM_ATTACH_OFFSET( l_U108, l_U370._fU0, l_U370._fU4, l_U370._fU8 );
        SET_CAM_POINT_OFFSET( l_U108, l_U373._fU0, l_U373._fU4, l_U373._fU8 );
        SET_CAM_FOV( l_U108, 45.00000000 );
        SET_CAM_NEAR_CLIP( l_U108, 0.05000000 );
    }
    return;
}

int sub_14726(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_CAM_EXIST( l_U107 )))
    {
        if (DOES_CAM_EXIST( uParam0 ))
        {
            SET_CAM_ACTIVE( uParam0, 1 );
            SET_CAM_PROPAGATE( uParam0, 0 );
        }
        if (DOES_CAM_EXIST( uParam1 ))
        {
            SET_CAM_ACTIVE( uParam1, 1 );
            SET_CAM_PROPAGATE( uParam1, 0 );
        }
        CREATE_CAM( 3, ref l_U107 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U107, 1, 1, 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U107, uParam0, uParam1, uParam2, 0 );
        SET_CAM_ACTIVE( l_U107, 1 );
        SET_CAM_PROPAGATE( l_U107, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    else if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U107 )))
    {
        DESTROY_CAM( l_U107 );
        SET_CAM_ACTIVE( uParam1, 1 );
        SET_CAM_PROPAGATE( uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_15411(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    uVar3 = {sub_15422( uParam0 )};
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( uParam0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 0.10000000, 0.10000000, 2.00000000, 0 ))) || (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_POOL", "IDLE" ))))
    {
        sub_1414( ref uParam0 );
        SET_CHAR_COORDINATES( uParam0, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        uVar9 = sub_16670( uParam0 );
        SET_CHAR_HEADING( uParam0, uVar9 );
        OPEN_SEQUENCE_TASK( ref l_U296 );
        TASK_PLAY_ANIM( 0, "IDLE", "MINI_POOL", 4.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U296 );
        TASK_PERFORM_SEQUENCE( uParam0, l_U296 );
        CLEAR_SEQUENCE_TASK( l_U296 );
    }
    return;
}

void sub_15422(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    unknown Result;
    unknown uVar10;
    unknown uVar11;
    vector vVar12;
    float fVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (DOES_OBJECT_EXIST( l_U285._fU24 ))
    {
        GET_OBJECT_COORDINATES( l_U285._fU24, ref vVar3.x, ref vVar3.y, ref vVar3.z );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        vVar12 = {vVar6 - vVar3};
        fVar15 = VMAG( vVar12 );
        if (fVar15 == 0.00000000)
        {
            vVar12 = {vVar12 / 0.00000001};
        }
        else
        {
            vVar12 = {vVar12 / fVar15};
        }
        vVar12 = {vVar12 * 10.00000000};
        vVar6 = {vVar3 + vVar12};
    }
    array(ref uVar17._fU0, 2);
    ref uVar17;
    uVar17._fU0[0] = {vVar3};
    uVar17._fU0[1] = {vVar6};
    if (NOT (sub_15651( uVar17, l_U600, ref Result, ref uVar16 )))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
    }
    Result._fU8 = l_U146;
    return Result;
}

int sub_15651(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37)
{
    boolean bVar40;
    int I;

    bVar40 = false;
    bVar40 = true;
    if (bVar40)
    {
        for ( I = 0; I < 4; I++ )
        {
            if (sub_15720( uParam0, uParam7._fU0[I], uParam36 ))
            {
                (uParam37^) = I;
                return 1;
            }
        }
    }
    return 0;
}

int sub_15720(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, int iParam14)
{
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    if (sub_15809( uParam0._fU0[0]._fU0, uParam0._fU0[0]._fU4, uParam0._fU0[1]._fU0, uParam0._fU0[1]._fU4, uParam7._fU0[0]._fU0, uParam7._fU0[0]._fU4, uParam7._fU0[1]._fU0, uParam7._fU0[1]._fU4, ref uVar17._fU0, ref uVar17._fU4 ))
    {
        iParam14->_fU0 = uVar17._fU0;
        iParam14->_fU4 = uVar17._fU4;
        return 1;
    }
    return 0;
}

int sub_15809(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, unknown uParam8, unknown uParam9)
{
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;

    if (NOT ((fParam2 - fParam0) == 0.00000000))
    {
        fVar19 = (fParam3 - fParam1) / (fParam2 - fParam0);
    }
    else
    {
        fVar19 = 999999999;
    }
    if (NOT ((fParam6 - fParam4) == 0.00000000))
    {
        fVar20 = (fParam7 - fParam5) / (fParam6 - fParam4);
    }
    else
    {
        fVar20 = 999999999;
    }
    fVar12 = fVar19;
    fVar15 = fVar20;
    fVar13 = -1.00000000;
    fVar16 = -1.00000000;
    fVar14 = fParam1 - (fVar19 * fParam0);
    fVar17 = fParam5 - (fVar20 * fParam4);
    fVar18 = 1.00000000 / ((fVar12 * fVar16) - (fVar15 * fVar13));
    fVar21 = ((fVar13 * fVar17) - (fVar16 * fVar14)) * fVar18;
    fVar22 = (fVar19 * ((fVar17 - fVar14) / (fVar19 - fVar20))) + fVar14;
    if (fParam0 > fParam2)
    {
        fVar23 = fParam0 + 0.00100000;
        fVar24 = fParam2 - 0.00100000;
    }
    else
    {
        fVar23 = fParam2 + 0.00100000;
        fVar24 = fParam0 - 0.00100000;
    }
    if (fParam1 > fParam3)
    {
        fVar25 = fParam1 + 0.00100000;
        fVar26 = fParam3 - 0.00100000;
    }
    else
    {
        fVar25 = fParam3 + 0.00100000;
        fVar26 = fParam1 - 0.00100000;
    }
    if (fParam4 > fParam6)
    {
        fVar27 = fParam4 + 0.00100000;
        fVar28 = fParam6 - 0.00100000;
    }
    else
    {
        fVar27 = fParam6 + 0.00100000;
        fVar28 = fParam4 - 0.00100000;
    }
    if (fParam5 > fParam7)
    {
        fVar29 = fParam5 + 0.00100000;
        fVar30 = fParam7 - 0.00100000;
    }
    else
    {
        fVar29 = fParam7 + 0.00100000;
        fVar30 = fParam5 - 0.00100000;
    }
    if ((NOT (fVar21 >= fVar24)) || (NOT (fVar21 <= fVar23)))
    {
        return 0;
    }
    if ((NOT (fVar21 >= fVar28)) || (NOT (fVar21 <= fVar27)))
    {
        return 0;
    }
    if ((NOT (fVar22 >= fVar26)) || (NOT (fVar22 <= fVar25)))
    {
        return 0;
    }
    if ((NOT (fVar22 >= fVar30)) || (NOT (fVar22 <= fVar29)))
    {
        return 0;
    }
    (uParam8^) = fVar21;
    (uParam9^) = fVar22;
    return 1;
}

void sub_16670(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown Result;

    if (DOES_OBJECT_EXIST( l_U285._fU24 ))
    {
        GET_OBJECT_COORDINATES( l_U285._fU24, ref vVar3.x, ref vVar3.y, ref vVar3.z );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
    }
    uVar9 = {vVar3 - vVar6};
    GET_HEADING_FROM_VECTOR_2D( uVar9._fU0, uVar9._fU4, ref Result );
    return Result;
}

void sub_17163(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    int iVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    vector Result;
    unknown uVar17;

    GET_CAM_ROT( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar6 );
    vVar7 = {0.00000000, 1.00000000, 0.00000000};
    vVar7 = {sub_17221( vVar7, 0.00000000, 0.00000000, uVar6 )};
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar10, ref iVar11, ref uVar12, ref uVar13 );
    if ((iVar10 == 0) AND (iVar11 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar10, ref iVar11 );
    }
    uVar3._fU0 = TO_FLOAT( iVar10 );
    uVar3._fU4 = (TO_FLOAT( iVar11 )) * -1.00000000;
    uVar3._fU8 = 0.00000000;
    if ((VMAG2( uVar3 )) < (0.00001000 * 0.00001000))
    {
        return vector( 0.00000000, 0.00000000, 0.00000000);
    }
    GET_HEADING_FROM_VECTOR_2D( uVar3._fU0, uVar3._fU4, ref uVar17 );
    Result = {0.00000000, 1.00000000, 0.00000000};
    Result = {sub_17221( Result, 0.00000000, 0.00000000, uVar6 )};
    Result = {sub_17221( Result, 0.00000000, 0.00000000, uVar17 )};
    Result = {Result / (VMAG( Result ))};
    Result = {Result * (VMAG( uVar3 ))};
    return Result;
}

void sub_17221(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = {uParam0};
    uVar8 = COS( uParam3._fU0 );
    uVar9 = SIN( uParam3._fU0 );
    uVar13._fU0 = uParam0._fU0;
    uVar13._fU4 = (uVar8 * Result._fU4) - (uVar9 * Result._fU8);
    uVar13._fU8 = (uVar9 * Result._fU4) + (uVar8 * Result._fU8);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU4 );
    uVar9 = SIN( uParam3._fU4 );
    uVar13._fU0 = (uVar8 * Result._fU0) + (uVar9 * Result._fU8);
    uVar13._fU4 = uParam0._fU4;
    uVar13._fU8 = (uVar8 * Result._fU8) - (uVar9 * Result._fU0);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU8 );
    uVar9 = SIN( uParam3._fU8 );
    uVar13._fU0 = (uVar8 * Result._fU0) - (uVar9 * Result._fU4);
    uVar13._fU4 = (uVar9 * Result._fU0) + (uVar8 * Result._fU4);
    uVar13._fU8 = uParam0._fU8;
    Result = {uVar13};
    return Result;
}

int sub_17988(int iParam0)
{
    int I;
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    vector vVar13;
    vector vVar16;
    vector vVar19;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;

    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        GET_OBJECT_COORDINATES( l_U246[15], ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, 0.04500000, 0.79800000, l_U311._fU8, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    if (vVar4.z > vVar7.z)
    {
        SET_OBJECT_COORDINATES( l_U246[15], vVar7.x, vVar7.y, vVar4.z );
    }
    if (iParam0->_fU8 < vVar4.z)
    {
        iParam0->_fU8 = vVar4.z;
    }
    for ( I = 0; I < 15; I++ )
    {
        if ((DOES_OBJECT_EXIST( l_U246[I] )) AND (NOT (sub_927( I ))))
        {
            GET_OBJECT_COORDINATES( l_U246[I], ref vVar4.x, ref vVar4.y, ref vVar4.z );
            vVar7 = {(iParam0^) - vVar4};
            vVar7.z = 0.00000000;
            if ((VMAG2( vVar7 )) < ((0.03950000 * 2.00000000) * (0.03950000 * 2.00000000)))
            {
                vVar7 = {vVar7 / (VMAG( vVar7 ))};
                vVar7 = {vVar7 * (0.03950000 * 2.00000000)};
                vVar7 = {vVar7 * 1.01000000};
                vVar16 = {vVar4 + vVar7};
                if (sub_18337( vVar16 ))
                {
                    (iParam0^) = {vVar16};
                }
                else
                {
                    return 0;
                }
            }
        }
    }
    array(ref uVar22._fU0, 2);
    ref uVar22;
    array(ref ref array(ref uVar29._fU0, 4)->_fU4->_fU0, 2);
    array(ref ref ref array(ref uVar29._fU0, 4)->_fU4->_fU28->_fU0, 2);
    array(ref ref ref ref array(ref uVar29._fU0, 4)->_fU4->_fU28->_fU28->_fU0, 2);
    array(ref ref ref ref ref array(ref uVar29._fU0, 4)->_fU4->_fU28->_fU28->_fU28->_fU0, 2);
    (((((array(ref uVar29._fU0, 4)) + 4) + 28) + 28) + 28) + 28;
    array(ref uVar29._fU0, 4);
    ref uVar29;
    if (l_U61)
    {
        uVar29 = {l_U542};
    }
    else
    {
        uVar29 = {l_U513};
    }
    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        if (NOT (sub_18576( (iParam0^), uVar29 )))
        {
            GET_OBJECT_COORDINATES( l_U246[15], ref vVar4.x, ref vVar4.y, ref vVar4.z );
            vVar7 = {(iParam0^) - vVar4};
            vVar7 = {vVar7 / (VMAG( vVar7 ))};
            vVar7 = {vVar7 * 0.10000000};
            uVar22._fU0[0] = {vVar4};
            uVar22._fU0[1] = {vVar4 + vVar7};
            if (sub_15651( uVar22, uVar29, ref vVar19, ref I ))
            {
                vVar19.z = iParam0->_fU8;
                GET_OBJECT_COORDINATES( l_U246[15], ref vVar4.x, ref vVar4.y, ref vVar4.z );
                vVar7 = {vVar19 - vVar4};
                vVar7.z = 0.00000000;
                uVar10 = {uVar29._fU0[I]._fU0[1] - uVar29._fU0[I]._fU0[0]};
                uVar10._fU8 = 0.00000000;
                vVar13 = {sub_19441( vVar7, uVar10 )};
                GET_OBJECT_COORDINATES( l_U246[15], ref vVar4.x, ref vVar4.y, ref vVar4.z );
                vVar16 = {vVar4 + vVar13};
                vVar7 = {vVar19 - vVar16};
                vVar7.z = 0.00000000;
                vVar16 = {vVar16 + vVar7};
                vVar7 = {vVar7 / (VMAG( vVar7 ))};
                vVar16 = {vVar16 - (vVar7 * 0.01000000)};
                if (sub_18337( vVar16 ))
                {
                    (iParam0^) = {vVar16};
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_18337(vector vParam0)
{
    int I;
    vector vVar6;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;

    for ( I = 0; I < 15; I++ )
    {
        if ((DOES_OBJECT_EXIST( l_U246[I] )) AND (NOT (sub_927( I ))))
        {
            GET_OBJECT_COORDINATES( l_U246[I], ref vVar6.x, ref vVar6.y, ref vVar6.z );
            uVar9 = {vParam0 - vVar6};
            uVar9._fU8 = 0.00000000;
            if ((VMAG2( uVar9 )) < ((0.03950000 * 2.00000000) * (0.03950000 * 2.00000000)))
            {
                return 0;
            }
        }
    }
    array(ref ref array(ref uVar12._fU0, 4)->_fU4->_fU0, 2);
    array(ref ref ref array(ref uVar12._fU0, 4)->_fU4->_fU28->_fU0, 2);
    array(ref ref ref ref array(ref uVar12._fU0, 4)->_fU4->_fU28->_fU28->_fU0, 2);
    array(ref ref ref ref ref array(ref uVar12._fU0, 4)->_fU4->_fU28->_fU28->_fU28->_fU0, 2);
    (((((array(ref uVar12._fU0, 4)) + 4) + 28) + 28) + 28) + 28;
    array(ref uVar12._fU0, 4);
    ref uVar12;
    if (l_U61)
    {
        uVar12 = {l_U542};
    }
    else
    {
        uVar12 = {l_U513};
    }
    if (NOT (sub_18576( vParam0, uVar12 )))
    {
        return 0;
    }
    return 1;
}

int sub_18576(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31)
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (NOT (sub_18618( uParam0, uParam3._fU0[I] )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_18618(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    vVar12 = {sub_18630( uParam3 )};
    vVar12.z = 0.00000000;
    uVar15 = {sub_18704( uParam3 )};
    uVar15._fU8 = 0.00000000;
    uVar18 = {vVar12 - vParam0};
    if ((sub_18928( ref uVar18, ref uVar15 )) >= 0.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_18630(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    vector Result;

    Result = {uParam0._fU0[0] + uParam0._fU0[1]};
    Result = {Result * 0.50000000};
    return Result;
}

void sub_18704(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    vector Result;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    vector vVar15;

    uVar12 = {uParam0._fU0[1] - uParam0._fU0[0]};
    vVar15 = {0.00000000, 0.00000000, 1.00000000};
    Result = {sub_18761( uVar12, vVar15 )};
    Result.z = 0.00000000;
    Result = {Result / (VMAG( Result ))};
    Result = {Result * -1.00000000};
    return Result;
}

vector sub_18761(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return vector( (uParam0._fU0 * uParam3._fU4) - (uParam0._fU4 * uParam3._fU0), (uParam0._fU8 * uParam3._fU0) - (uParam0._fU0 * uParam3._fU8), (uParam0._fU4 * uParam3._fU8) - (uParam0._fU8 * uParam3._fU4));
}

float sub_18928(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

vector sub_19441(unknown uParam0, unknown uParam1, unknown uParam2, vector vParam3)
{
    return vParam3 * ((sub_18928( ref vParam3, ref uParam0 )) / (VMAG( vParam3 )));
}

void sub_20705(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int J;
    int I;
    int iVar10;
    int iVar11;
    float fVar12;
    vector vVar13;
    unknown uVar16;
    vector vVar17;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;

    fVar12 = 0.00000000;
    if (l_U90)
    {
        PRINTSTRING( "\n" );
    }
    l_U237 = 0;
    for ( J = 0; J < 16; J++ )
    {
        if (NOT (J == 15))
        {
            if (NOT (sub_927( J )))
            {
                for ( I = 0; I < 6; I++ )
                {
                    if (l_U90)
                    {
                        PRINTSTRING( "Getting shot scrore for ball " );
                        PRINTINT( J );
                        PRINTSTRING( " in pocket " );
                        PRINTINT( I );
                        PRINTSTRING( ", " );
                    }
                    switch (uParam2)
                    {
                        case 0:
                        if (J == 7)
                        {
                            fVar20 = -1.00000000;
                        }
                        else
                        {
                            sub_20991( ref l_U246[J], I, ref fVar20, ref uVar21, ref uVar24, ref uVar25, ref uVar26 );
                        }
                        break;
                        case 1:
                        if (J >= 7)
                        {
                            fVar20 = -1.00000000;
                        }
                        else
                        {
                            sub_20991( ref l_U246[J], I, ref fVar20, ref uVar21, ref uVar24, ref uVar25, ref uVar26 );
                        }
                        break;
                        case 2:
                        if (J <= 7)
                        {
                            fVar20 = -1.00000000;
                        }
                        else
                        {
                            sub_20991( ref l_U246[J], I, ref fVar20, ref uVar21, ref uVar24, ref uVar25, ref uVar26 );
                        }
                        break;
                        case 3:
                        if (NOT (J == 7))
                        {
                            fVar20 = -1.00000000;
                        }
                        else
                        {
                            sub_20991( ref l_U246[J], I, ref fVar20, ref uVar21, ref uVar24, ref uVar25, ref uVar26 );
                        }
                        break;
                    }
                    if (l_U90)
                    {
                        PRINTSTRING( "Score = " );
                        PRINTFLOAT( fVar20 );
                        PRINTSTRING( "\n" );
                    }
                    if (fVar20 > fVar12)
                    {
                        if (l_U90)
                        {
                            PRINTSTRING( "\n *** Pocket Shot!*** " );
                            PRINTSTRING( "Ball No = " );
                            PRINTINT( J );
                            PRINTSTRING( ", " );
                            PRINTSTRING( "PocketNo = " );
                            PRINTINT( I );
                            PRINTSTRING( ", " );
                            PRINTSTRING( "fThisScore = " );
                            PRINTFLOAT( fVar20 );
                            PRINTSTRING( "\n" );
                        }
                        if (fVar20 >= 0.85000000)
                        {
                            l_U237 = 1;
                        }
                        else if (fVar20 > 0.20000000)
                        {
                            l_U237 = 2;
                        }
                        else
                        {
                            l_U237 = 3;
                        }
                        fVar12 = fVar20;
                        vVar13 = {uVar21};
                        uVar16 = uVar24;
                        (uParam4^) = uVar25;
                        (uParam5^) = uVar26;
                    }
                }
            }
        }
    }
    if (fVar12 <= 0.00000000)
    {
        WAIT( 0 );
        for ( J = 0; J < 16; J++ )
        {
            if (NOT (sub_927( J )))
            {
                for ( iVar11 = 0; iVar11 < 3; iVar11++ )
                {
                    switch (uParam2)
                    {
                        case 0:
                        if (J == 7)
                        {
                            fVar20 = -1.00000000;
                        }
                        else
                        {
                            sub_25472( ref l_U246[J], iVar11, ref fVar20, ref uVar21, ref uVar24 );
                        }
                        break;
                        case 1:
                        if (J >= 7)
                        {
                            fVar20 = -1.00000000;
                        }
                        else
                        {
                            sub_25472( ref l_U246[J], iVar11, ref fVar20, ref uVar21, ref uVar24 );
                        }
                        break;
                        case 2:
                        if (J <= 7)
                        {
                            fVar20 = -1.00000000;
                        }
                        else
                        {
                            sub_25472( ref l_U246[J], iVar11, ref fVar20, ref uVar21, ref uVar24 );
                        }
                        break;
                        case 3:
                        if (NOT (J == 7))
                        {
                            fVar20 = -1.00000000;
                        }
                        else
                        {
                            sub_25472( ref l_U246[J], iVar11, ref fVar20, ref uVar21, ref uVar24 );
                        }
                        break;
                    }
                    if (l_U90)
                    {
                        PRINTSTRING( "Blank shot - Ball No " );
                        PRINTINT( J );
                        PRINTSTRING( ", BallSideNo = " );
                        PRINTINT( iVar11 );
                        PRINTSTRING( ", score = " );
                        PRINTFLOAT( fVar20 );
                        PRINTSTRING( "\n" );
                    }
                    if (fVar20 > fVar12)
                    {
                        if (l_U90)
                        {
                            PRINTSTRING( "\n *** Blank shot! *** " );
                            PRINTSTRING( "Ball No = " );
                            PRINTINT( J );
                            PRINTSTRING( ", " );
                            PRINTSTRING( "BallSideNo = " );
                            PRINTINT( iVar11 );
                            PRINTSTRING( ", " );
                            PRINTSTRING( "fThisScore = " );
                            PRINTFLOAT( fVar20 );
                            PRINTSTRING( "\n" );
                        }
                        l_U237 = 3;
                        fVar12 = fVar20;
                        vVar13 = {uVar21};
                        uVar16 = uVar24;
                        (uParam4^) = 180.00000000;
                    }
                }
            }
        }
    }
    if (fVar12 <= 0.00000000)
    {
        WAIT( 0 );
        for ( J = 0; J < 16; J++ )
        {
            if (NOT (sub_927( J )))
            {
                if (NOT (J == 15))
                {
                    for ( iVar10 = 0; iVar10 < 4; iVar10++ )
                    {
                        fVar20 = -1.00000000;
                        switch (uParam2)
                        {
                            case 0:
                            if (NOT (J == 7))
                            {
                                if (sub_27290( l_U246[15], l_U246[J], iVar10, ref uVar21 ))
                                {
                                    fVar20 = sub_28411( l_U246[15], l_U246[J], uVar21, ref uVar24 );
                                }
                            }
                            break;
                            case 1:
                            if (NOT (J >= 7))
                            {
                                if (sub_27290( l_U246[15], l_U246[J], iVar10, ref uVar21 ))
                                {
                                    fVar20 = sub_28411( l_U246[15], l_U246[J], uVar21, ref uVar24 );
                                }
                            }
                            break;
                            case 2:
                            if (NOT (J <= 7))
                            {
                                if (sub_27290( l_U246[15], l_U246[J], iVar10, ref uVar21 ))
                                {
                                    fVar20 = sub_28411( l_U246[15], l_U246[J], uVar21, ref uVar24 );
                                }
                            }
                            break;
                            case 3:
                            if (J == 7)
                            {
                                if (sub_27290( l_U246[15], l_U246[J], iVar10, ref uVar21 ))
                                {
                                    fVar20 = sub_28411( l_U246[15], l_U246[J], uVar21, ref uVar24 );
                                }
                            }
                            break;
                        }
                        if (l_U90)
                        {
                            PRINTSTRING( "Snooker Recovery - Ball No " );
                            PRINTINT( J );
                            PRINTSTRING( ", CushionNo = " );
                            PRINTINT( iVar10 );
                            PRINTSTRING( ", score = " );
                            PRINTFLOAT( fVar20 );
                            PRINTSTRING( "\n" );
                        }
                        if (fVar20 > fVar12)
                        {
                            if (l_U90)
                            {
                                PRINTSTRING( "SNOOKER - Recovery shot! \n" );
                                PRINTSTRING( "Ball No = " );
                                PRINTINT( J );
                                PRINTSTRING( "\n" );
                                PRINTSTRING( "Cushion No = " );
                                PRINTINT( iVar10 );
                                PRINTSTRING( "\n" );
                                PRINTSTRING( "fThisScore = " );
                                PRINTFLOAT( fVar20 );
                                PRINTSTRING( "\n" );
                            }
                            l_U237 = 3;
                            fVar12 = fVar20;
                            vVar13 = {uVar21};
                            uVar16 = uVar24;
                        }
                    }
                }
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        GET_OBJECT_COORDINATES( l_U246[15], ref vVar17.x, ref vVar17.y, ref vVar17.z );
        if (l_U90)
        {
            PRINTSTRING( "FIND_BEST_SHOT - cue ball pos = " );
            PRINTFLOAT( vVar17.x );
            PRINTSTRING( ", " );
            PRINTFLOAT( vVar17.y );
            PRINTSTRING( ", " );
            PRINTFLOAT( vVar17.z );
            PRINTSTRING( "\n" );
        }
        vVar13.z = vVar17.z;
    }
    (uParam3^) = fVar12;
    (uParam0^) = {vVar13 - vVar17};
    (uParam1^) = uVar16;
    return;
}

void sub_20991(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    vector vVar9;
    vector vVar12;
    vector vVar15;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    vector vVar24;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    unknown uVar31;
    float fVar32;

    (uParam2^) = -1.00000000;
    (uParam4^) = 0.00000000;
    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        if (DOES_OBJECT_EXIST( (uParam0^) ))
        {
            if (NOT ((uParam0^) == l_U246[15]))
            {
                (uParam2^) = 1.00000000;
                sub_21089( uParam1, ref vVar9.x, ref vVar9.y, 0 );
                GET_OBJECT_COORDINATES( (uParam0^), ref vVar12.x, ref vVar12.y, ref vVar12.z );
                vVar24 = {vVar9 - vVar12};
                vVar24.z = 0.00000000;
                if ((VMAG( vVar24 )) < (0.03950000 * 2.00000000))
                {
                    sub_21089( uParam1, ref vVar9.x, ref vVar9.y, 1 );
                }
                GET_OBJECT_COORDINATES( l_U246[15], ref l_U323._fU0, ref l_U323._fU4, ref l_U323._fU8 );
                vVar12.z = l_U323._fU8;
                vVar9.z = l_U323._fU8;
                if (NOT (sub_22412( uParam0, uParam1, ref uVar31 )))
                {
                    if (l_U90)
                    {
                        PRINTSTRING( "Ball path to pocket not clear, " );
                    }
                    if (sub_23375( uParam0, ref uVar31 ))
                    {
                        if (l_U90)
                        {
                            PRINTSTRING( ", but same colour. " );
                        }
                        (uParam2^) *= 0.05000000 * 2.00000000;
                    }
                    else
                    {
                        (uParam2^) *= 0.05000000;
                    }
                }
                vVar15 = {vVar9 - vVar12};
                fVar32 = VMAG( vVar15 );
                if (fVar32 == 0.00000000)
                {
                    vVar24 = {vVar15 / 0.00000010};
                }
                else
                {
                    vVar24 = {vVar15 / fVar32};
                }
                vVar24 = {vVar24 * (0.03950000 * -2.00000000)};
                (iParam3^) = {vVar12 + vVar24};
                if (NOT (sub_22457( ref l_U246[15], uParam0, iParam3->_fU0, iParam3->_fU4, ref uVar31, ref uVar21 )))
                {
                    if (l_U90)
                    {
                        PRINTSTRING( "Cue ball to aim coord not clear, " );
                    }
                    (uParam2^) = -1.00000000;
                }
                uVar18 = {(iParam3^) - l_U323};
                fVar27 = 2.68000000;
                fVar27 -= 0.50000000;
                fVar28 = VMAG( vVar15 );
                if (l_U90)
                {
                    PRINTSTRING( "dist target ball to pocket = " );
                    PRINTFLOAT( fVar28 );
                    PRINTSTRING( ", " );
                }
                (uParam4^) += fVar28;
                fVar28 -= 0.01000000;
                if (fVar28 < 0.00000000)
                {
                    fVar28 *= -1.00000000;
                }
                if (fVar28 > fVar27)
                {
                    fVar28 = fVar27;
                }
                fVar28 /= fVar27;
                fVar29 = fVar28;
                fVar29 *= 0.20000000;
                fVar29 = 1.00000000 - fVar29;
                if (l_U90)
                {
                    PRINTSTRING( "fMultiplier = " );
                    PRINTFLOAT( fVar29 );
                    PRINTSTRING( ", " );
                }
                (uParam2^) *= fVar29;
                fVar28 = VMAG( uVar18 );
                (uParam6^) = fVar28;
                if (l_U90)
                {
                    PRINTSTRING( "dist cue ball to target = " );
                    PRINTFLOAT( fVar28 );
                    PRINTSTRING( ", " );
                }
                (uParam4^) += fVar28;
                fVar28 -= 0.50000000;
                if (fVar28 < 0.00000000)
                {
                    fVar28 *= -1.00000000;
                }
                if (fVar28 > fVar27)
                {
                    fVar28 = fVar27;
                }
                fVar28 /= fVar27;
                fVar29 = fVar28;
                fVar29 *= 0.05000000;
                fVar29 = 1.00000000 - fVar29;
                if (l_U90)
                {
                    PRINTSTRING( "fMultiplier = " );
                    PRINTFLOAT( fVar29 );
                    PRINTSTRING( ", " );
                }
                (uParam2^) *= fVar29;
                if (NOT (sub_18576( (iParam3^), l_U513 )))
                {
                    if (l_U90)
                    {
                        PRINTSTRING( "aim coord not on table, " );
                    }
                    (uParam2^) = -1.00000000;
                }
                GET_ANGLE_BETWEEN_2D_VECTORS( uVar18._fU0, uVar18._fU4, vVar15.x, vVar15.y, ref fVar30 );
                (uParam5^) = fVar30;
                if (fVar30 < 90.00000000)
                {
                    if (l_U90)
                    {
                        PRINTSTRING( "shot angle = " );
                        PRINTFLOAT( fVar30 );
                        PRINTSTRING( ", " );
                    }
                    fVar30 -= 5.00000000;
                    if (fVar30 < 0.00000000)
                    {
                        fVar30 *= -1.00000000;
                    }
                    fVar30 /= 90.00000000 - 5.00000000;
                    fVar29 = fVar30;
                    fVar29 *= 0.25000000;
                    fVar29 = 1.00000000 - fVar29;
                    if (l_U90)
                    {
                        PRINTSTRING( "fMultiplier = " );
                        PRINTFLOAT( fVar29 );
                        PRINTSTRING( ". " );
                    }
                    (uParam2^) *= fVar29;
                }
                else if (l_U90)
                {
                    PRINTSTRING( "shot angle > 90.0. " );
                }
                (uParam2^) = -1.00000000;;
            }
        }
    }
    return;
}

void sub_21089(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown uVar6;

    if (DOES_OBJECT_EXIST( l_U285._fU24 ))
    {
        if (NOT bParam3)
        {
            switch (uParam0)
            {
                case 0:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] - (0.18300000 * -0.02900000), l_U158[0] + (0.18300000 * -0.02900000), 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
                case 1:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[1] + (0.18300000 * -0.02900000), l_U158[1] + (0.18300000 * -0.02900000), 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
                case 2:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[1] + (0.18300000 * (-0.02900000 + 0.11900000)), ((l_U158[1] + (0.18300000 * (-0.02900000 + 0.11900000))) + (l_U158[2] - (0.18300000 * (-0.02900000 + 0.11900000)))) * 0.50000000, 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
                case 3:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[2] + (0.18300000 * -0.02900000), l_U158[2] - (0.18300000 * -0.02900000), 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
                case 4:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[3] - (0.18300000 * -0.02900000), l_U158[3] - (0.18300000 * -0.02900000), 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
                case 5:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] - (0.18300000 * (-0.02900000 + 0.11900000)), ((l_U158[0] + (0.18300000 * (-0.02900000 + 0.11900000))) + (l_U158[3] - (0.18300000 * (-0.02900000 + 0.11900000)))) * 0.50000000, 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
            }
        }
        else
        {
            switch (uParam0)
            {
                case 0:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] - (0.18300000 * 0.16000000), l_U158[0] + (0.18300000 * 0.16000000), 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
                case 1:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[1] + (0.18300000 * 0.16000000), l_U158[1] + (0.18300000 * 0.16000000), 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
                case 2:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[1] + (0.18300000 * (0.16000000 + 0.11900000)), ((l_U158[1] + (0.18300000 * (0.16000000 + 0.11900000))) + (l_U158[2] - (0.18300000 * (0.16000000 + 0.11900000)))) * 0.50000000, 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
                case 3:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[2] + (0.18300000 * 0.16000000), l_U158[2] - (0.18300000 * 0.16000000), 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
                case 4:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[3] - (0.18300000 * 0.16000000), l_U158[3] - (0.18300000 * 0.16000000), 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
                case 5:
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, l_U153[0] - (0.18300000 * (0.16000000 + 0.11900000)), ((l_U158[0] + (0.18300000 * (0.16000000 + 0.11900000))) + (l_U158[3] - (0.18300000 * (0.16000000 + 0.11900000)))) * 0.50000000, 0.00000000, uParam1, uParam2, ref uVar6 );
                break;
            }
        }
    }
    return;
}

int sub_22412(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    sub_21089( uParam1, ref uVar5._fU0, ref uVar5._fU4, 0 );
    uVar5._fU8 = 0;
    if (NOT (sub_22457( uParam0, uParam0, uVar5._fU0, uVar5._fU4, uParam2, ref uVar8 )))
    {
        return 0;
    }
    return 1;
}

int sub_22457(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    if (DOES_OBJECT_EXIST( (uParam0^) ))
    {
        GET_OBJECT_COORDINATES( (uParam0^), ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
        for ( I = 0; I < 16; I++ )
        {
            if ((NOT (l_U246[I] == (uParam0^))) AND (NOT (l_U246[I] == (uParam1^))))
            {
                if (NOT (sub_927( I )))
                {
                    if (sub_22592( ref l_U246[I], uVar9._fU0, uVar9._fU4, uParam2, uParam3, uParam5 ))
                    {
                        (uParam4^) = l_U246[I];
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

int sub_22592(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    float fVar15;
    vector vVar16;
    vector vVar19;
    vector vVar22;
    unknown uVar25;
    unknown uVar26;
    boolean bVar27;
    float fVar28;

    bVar27 = false;
    if (DOES_OBJECT_EXIST( (uParam0^) ))
    {
        GET_OBJECT_COORDINATES( (uParam0^), ref vVar16.x, ref vVar16.y, ref vVar16.z );
        vVar19.x = uParam3;
        vVar19.y = uParam4;
        vVar19.z = vVar16.z;
        vVar22 = {vVar19 - vVar16};
        if ((VMAG2( vVar22 )) < ((0.03950000 * 2.00000000) * (0.03950000 * 2.00000000)))
        {
            bVar27 = true;
        }
        vVar8.x = uParam3 - uParam1;
        vVar8.y = uParam4 - uParam2;
        vVar8.z = 0.00000000;
        uVar11._fU0 = vVar16.x - uParam1;
        uVar11._fU4 = vVar16.y - uParam2;
        uVar11._fU8 = 0.00000000;
        GET_ANGLE_BETWEEN_2D_VECTORS( vVar8.x, vVar8.y, uVar11._fU0, uVar11._fU4, ref fVar14 );
        if ((VMAG2( vVar8 )) > 0.00000000)
        {
            if (((VMAG2( vVar8 )) > (VMAG2( uVar11 ))) || (bVar27))
            {
                if ((fVar14 >= 90.00000000) AND (NOT bVar27))
                {
                    return 0;
                }
                else
                {
                    fVar15 = (VMAG( uVar11 )) * (SIN( fVar14 ));
                    if ((fVar15 < (0.03950000 * 2.00000000)) || (bVar27))
                    {
                        uVar25 = SQRT( (VMAG2( uVar11 )) - (fVar15 * fVar15) );
                        fVar28 = VMAG( vVar8 );
                        if (fVar28 == 0.00000000)
                        {
                            vVar8 = {vVar8 / 0.00000010};
                        }
                        else
                        {
                            vVar8 = {vVar8 / fVar28};
                        }
                        vVar8 = {vVar8 * uVar25};
                        uVar26 = SQRT( ((0.03950000 * 2.00000000) * (0.03950000 * 2.00000000)) - (fVar15 * fVar15) );
                        vVar22 = {vVar8};
                        fVar28 = VMAG( vVar22 );
                        if (fVar28 == 0.00000000)
                        {
                            vVar22 = {vVar22 / 0.00000010};
                        }
                        else
                        {
                            vVar22 = {vVar22 / fVar28};
                        }
                        vVar22 = {vVar22 * uVar26};
                        vVar8 = {vVar8 - vVar22};
                        (uParam5^) = {(vector( vVar16.z, uParam2, uParam1)) + vVar8};
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_23375(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = sub_23386( uParam0 );
    iVar5 = sub_23386( uParam1 );
    if ((iVar4 < 7) AND (iVar5 < 7))
    {
        return 1;
    }
    if ((iVar4 == 7) AND (iVar5 == 7))
    {
        return 1;
    }
    if (((iVar4 > 7) AND (iVar4 < 15)) AND ((iVar5 > 7) AND (iVar5 < 15)))
    {
        return 1;
    }
    if (iVar4 == iVar5)
    {
        return 1;
    }
    return 0;
}

int sub_23386(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result < 16; Result++ )
    {
        if (DOES_OBJECT_EXIST( l_U246[Result] ))
        {
            if (l_U246[Result] == (uParam0^))
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_25472(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    vector vVar7;
    vector vVar10;
    vector vVar13;
    vector vVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    float fVar22;
    unknown uVar23;
    float fVar24;

    (uParam2^) = 0.00000000;
    fVar24 = 0.00000000;
    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        if (DOES_OBJECT_EXIST( (uParam0^) ))
        {
            if (NOT ((uParam0^) == l_U246[15]))
            {
                (uParam2^) = 1.00000000;
                switch (uParam1)
                {
                    case 0:
                    GET_OBJECT_COORDINATES( (uParam0^), iParam3 + 0, iParam3 + 4, iParam3 + 8 );
                    break;
                    case 1:
                    GET_OBJECT_COORDINATES( l_U246[15], ref vVar10.x, ref vVar10.y, ref vVar10.z );
                    GET_OBJECT_COORDINATES( (uParam0^), ref vVar7.x, ref vVar7.y, ref vVar7.z );
                    vVar13 = {vVar7 - vVar10};
                    vVar13.z = 0.00000000;
                    fVar24 = VMAG( vVar13 );
                    if (fVar24 == 0.00000000)
                    {
                        vVar13 = {vVar13 / 0.00000001};
                    }
                    else
                    {
                        vVar13 = {vVar13 / fVar24};
                    }
                    vVar16 = {vVar13};
                    vVar16 = {vVar16 * (0.60000000 * 0.03950000)};
                    vVar13 = {sub_17221( vVar13, 0.00000000, 0.00000000, 90.00000000 )};
                    vVar13 = {vVar13 * (0.80000000 * 0.03950000)};
                    (iParam3^) = {vVar7 + vVar13};
                    (iParam3^) = {(iParam3^) - vVar16};
                    vVar13 = {(iParam3^) - vVar7};
                    fVar24 = VMAG( vVar13 );
                    if (fVar24 == 0.00000000)
                    {
                        vVar13 = {vVar13 / 0.00000001};
                    }
                    else
                    {
                        vVar13 = {vVar13 / fVar24};
                    }
                    vVar13 = {vVar13 * (0.03950000 * 2.00000000)};
                    (iParam3^) = {vVar7 + vVar13};
                    break;
                    case 2:
                    GET_OBJECT_COORDINATES( l_U246[15], ref vVar10.x, ref vVar10.y, ref vVar10.z );
                    GET_OBJECT_COORDINATES( (uParam0^), ref vVar7.x, ref vVar7.y, ref vVar7.z );
                    vVar13 = {vVar7 - vVar10};
                    vVar13.z = 0.00000000;
                    fVar24 = VMAG( vVar13 );
                    if (fVar24 == 0.00000000)
                    {
                        vVar13 = {vVar13 / 0.00000001};
                    }
                    else
                    {
                        vVar13 = {vVar13 / fVar24};
                    }
                    vVar16 = {vVar13};
                    vVar16 = {vVar16 * (0.60000000 * 0.03950000)};
                    vVar13 = {sub_17221( vVar13, 0.00000000, 0.00000000, 90.00000000 )};
                    vVar13 = {vVar13 * (0.80000000 * 0.03950000)};
                    (iParam3^) = {vVar7 - vVar13};
                    (iParam3^) = {(iParam3^) - vVar16};
                    vVar13 = {(iParam3^) - vVar7};
                    fVar24 = VMAG( vVar13 );
                    if (fVar24 == 0.00000000)
                    {
                        vVar13 = {vVar13 / 0.00000001};
                    }
                    else
                    {
                        vVar13 = {vVar13 / fVar24};
                    }
                    vVar13 = {vVar13 * (0.03950000 * 2.00000000)};
                    (iParam3^) = {vVar7 + vVar13};
                    break;
                }
                if (NOT (sub_22457( ref l_U246[15], uParam0, iParam3->_fU0, iParam3->_fU4, ref uVar23, ref uVar19 )))
                {
                    if (l_U90)
                    {
                        PRINTSTRING( "Ball path from cue ball to aim coords not clear, " );
                    }
                    (uParam2^) = -1.00000000;
                }
                GET_OBJECT_COORDINATES( l_U246[15], ref vVar10.x, ref vVar10.y, ref vVar10.z );
                vVar13 = {(iParam3^) - vVar10};
                vVar13.z = 0.00000000;
                (uParam4^) = VMAG( vVar13 );
                fVar22 = (uParam4^) - 0.50000000;
                if (fVar22 < 0.00000000)
                {
                    fVar22 *= -1.00000000;
                }
                if (fVar22 > 4.50000000)
                {
                    fVar22 = 4.50000000;
                }
                fVar22 /= 4.50000000;
                fVar22 += -1.00000000;
                fVar22 *= -1.00000000;
                (uParam2^) *= fVar22;
            }
        }
    }
    return;
}

int sub_27290(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    vector vVar18;
    vector vVar21;
    vector vVar24;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    float fVar49;
    float fVar50;

    array(ref uVar35._fU0, 2);
    ref uVar35;
    array(ref uVar42._fU0, 2);
    ref uVar42;
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (DOES_OBJECT_EXIST( uParam1 ))
        {
            GET_OBJECT_COORDINATES( uParam0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_OBJECT_COORDINATES( uParam1, ref vVar9.x, ref vVar9.y, ref vVar9.z );
            vVar12 = {sub_27422( l_U513._fU0[uParam2]._fU0[0], l_U513._fU0[uParam2]._fU0[1] )};
            fVar49 = VMAG( vVar12 );
            if (fVar49 == 0.00000000)
            {
                vVar12 = {vVar12 / 0.00000001};
            }
            else
            {
                vVar12 = {vVar12 / fVar49};
            }
            vVar12 = {vVar12 * 5.00000000};
            uVar42._fU0[0] = {l_U513._fU0[uParam2]._fU0[0]};
            uVar42._fU0[1] = {l_U513._fU0[uParam2]._fU0[1]};
            uVar35._fU0[0] = {vVar6};
            uVar35._fU0[1] = {vVar6 - vVar12};
            if (sub_15720( uVar42, uVar35, ref vVar21 ))
            {
                uVar35._fU0[0] = {vVar9};
                uVar35._fU0[1] = {vVar9 - vVar12};
                if (sub_15720( uVar42, uVar35, ref vVar24 ))
                {
                    uVar27 = {vVar21 - vVar6};
                    uVar27._fU8 = 0.00000000;
                    uVar33 = VMAG( uVar27 );
                    uVar30 = {vVar24 - vVar9};
                    uVar30._fU8 = 0.00000000;
                    uVar34 = VMAG( uVar30 );
                    vVar18 = {vVar24 - vVar21};
                    fVar50 = uVar33 + uVar34;
                    if (fVar50 == 0.00000000)
                    {
                        vVar18 = {vVar18 * (uVar33 / 0.00000100)};
                    }
                    else
                    {
                        vVar18 = {vVar18 * (uVar33 / fVar50)};
                    }
                    uVar15 = {vVar21 + vVar18};
                    uVar15._fU8 = vVar6.z;
                    (uParam3^) = {uVar15};
                    return 1;
                }
                else if (l_U90)
                {
                    PRINTSTRING( "\n GET_BOUNCE_POINT_ON_CUSHION - couldnt get intersect point 2\n" );
                }
            }
            else if (l_U90)
            {
                PRINTSTRING( "\n GET_BOUNCE_POINT_ON_CUSHION - couldnt get intersect point 1\n" );
            }
        }
        else if (l_U90)
        {
            PRINTSTRING( "\n GET_BOUNCE_POINT_ON_CUSHION - ball 2 doesn't exist\n" );
        }
    }
    else if (l_U90)
    {
        PRINTSTRING( "\n GET_BOUNCE_POINT_ON_CUSHION - ball 1 doesn't exist\n" );
    }
    return 0;
}

void sub_27422(vector vParam0, vector vParam3)
{
    vector Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;

    vParam0.z = 0.00000000;
    vParam3.z = 0.00000000;
    uVar11 = {vParam3 - vParam0};
    uVar11._fU8 = 0.00000000;
    Result = {sub_17221( uVar11, 0.00000000, 0.00000000, -90.00000000 )};
    fVar14 = VMAG( Result );
    if (fVar14 == 0.00000000)
    {
        Result = {Result / 0.00000010};
    }
    else
    {
        Result = {Result / fVar14};
    }
    Result.z = 0.00000000;
    return Result;
}

float sub_28411(unknown uParam0, unknown uParam1, vector vParam2, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    vector vVar17;
    vector vVar20;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    float fVar26;
    int I;
    unknown uVar28;

    if (sub_22457( ref uParam0, ref uParam1, vParam2.x, vParam2.y, ref uVar28, ref uVar23 ))
    {
        if (sub_22457( ref uParam1, ref uParam0, vParam2.x, vParam2.y, ref uVar28, ref uVar23 ))
        {
            for ( I = 0; I < 6; I++ )
            {
                sub_21089( I, ref vVar20.x, ref vVar20.y, 0 );
                vVar20.z = 0.00000000;
                vVar14 = {vParam2};
                vVar14.z = 0.00000000;
                uVar8 = {vVar20 - vVar14};
                if ((VMAG( uVar8 )) < (4.00000000 * 0.03950000))
                {
                    return -1.00000000;
                }
            }
            if ((DOES_OBJECT_EXIST( uParam0 )) AND (DOES_OBJECT_EXIST( uParam1 )))
            {
                GET_OBJECT_COORDINATES( uParam0, ref vVar14.x, ref vVar14.y, ref vVar14.z );
                GET_OBJECT_COORDINATES( uParam1, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                vVar14.z = 0.00000000;
                vVar17.z = 0.00000000;
                vParam2.z = 0.00000000;
                uVar8 = {vParam2 - vVar14};
                uVar11 = {vParam2 - vVar17};
                fVar26 = (VMAG( uVar8 )) + (VMAG( uVar11 ));
                (uParam5^) = fVar26;
                fVar26 += -0.50000000;
                if (fVar26 < 0.00000000)
                {
                    fVar26 *= -1.00000000;
                }
                if (fVar26 > 4.50000000)
                {
                    fVar26 = 4.50000000;
                }
                return fVar26 / 4.50000000;
            }
        }
    }
    return -1.00000000;
}

void sub_31095(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, boolean bParam4)
{
    vector vVar7;
    vector vVar10;
    vector vVar13;
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

    if (bParam4)
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( uParam0 );
    }
    sub_1414( ref uParam0 );
    if (bParam4)
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( uParam0 );
    }
    if (l_U57)
    {
        PRINTSTRING( "SET_CHAR_TO_OUTER_STANCE_POSITION_FROM_AIM_VEC - vAimVec = " );
        PRINTFLOAT( uParam1._fU0 );
        PRINTSTRING( ", " );
        PRINTFLOAT( uParam1._fU4 );
        PRINTSTRING( ", " );
        PRINTFLOAT( uParam1._fU8 );
        PRINTSTRING( "\n" );
    }
    vVar7 = {sub_31295( uParam0, uParam1, 0 )};
    vVar10 = {sub_32661( uParam0, uParam1 )};
    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        GET_OBJECT_COORDINATES( l_U246[15], ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar16 = {vVar13 - vVar7};
    uVar16._fU8 = 0.00000000;
    uVar19 = {vVar13 - vVar10};
    uVar19._fU8 = 0.00000000;
    uVar22 = {vVar7 - vVar10};
    if ((VMAG( uVar22 )) > 1.00000000)
    {
        PRINTSTRING( "IF (VMAG(vec3) > 1.0) \n " );
    }
    else if ((VMAG2( uVar19 )) > (VMAG2( uVar16 )))
    {
        PRINTSTRING( "IF (VMAG2(vec2) > VMAG2(vec1)) \n " );
        vVar7 = {vVar10};
    }
    if (l_U57)
    {
        PRINTSTRING( "SET_CHAR_TO_OUTER_STANCE_POSITION_FROM_AIM_VEC - pos = " );
        PRINTFLOAT( vVar7.x );
        PRINTSTRING( ", " );
        PRINTFLOAT( vVar7.y );
        PRINTSTRING( ", " );
        PRINTFLOAT( vVar7.z );
        PRINTSTRING( "\n" );
    }
    SET_CHAR_COORDINATES( uParam0, vVar7.x, vVar7.y, vVar7.z );
    uVar25 = sub_33322( ref uParam1 );
    SET_CHAR_HEADING( uParam0, uVar25 );
    FREEZE_CHAR_POSITION( uParam0, 1 );
    return;
}

void sub_31295(unknown uParam0, vector vParam1, boolean bParam4)
{
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    vector vVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;

    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        GET_OBJECT_COORDINATES( l_U246[15], ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    l_U205 = sub_31353( uParam0, vParam1 );
    if (bParam4)
    {
        if (DOES_OBJECT_EXIST( l_U284 ))
        {
            GET_OBJECT_COORDINATES( l_U284, ref vVar13.x, ref vVar13.y, ref vVar13.z );
        }
        else if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar13.x, ref vVar13.y, ref vVar13.z );
        }
        vParam1 = {vVar7 - vVar13};
        vParam1.z = 0.00000000;
    }
    fVar20 = VMAG( vParam1 );
    if (fVar20 == 0.00000000)
    {
        vParam1 = {vParam1 / 0.00000010};
    }
    else
    {
        vParam1 = {vParam1 / fVar20};
    }
    vParam1 = {vParam1 * 5.00000000};
    uVar10 = {vVar7 - vParam1};
    array(ref uVar21._fU0, 2);
    ref uVar21;
    uVar21._fU0[0] = {vVar7};
    uVar21._fU0[1] = {uVar10};
    if (NOT (sub_15651( uVar21, l_U629, ref uVar16, ref uVar19 )))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
        }
    }
    return sub_31564( ref uVar16, uParam0, bParam4 );
}

int sub_31353(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    float fVar18;
    unknown uVar19;
    float fVar20;

    vVar6 = {sub_31369( uParam0, uParam1, ref uVar19 )};
    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        GET_OBJECT_COORDINATES( l_U246[15], ref vVar9.x, ref vVar9.y, ref vVar9.z );
    }
    uVar12 = {vVar9 - vVar6};
    uVar12._fU8 = 0.00000000;
    fVar18 = VMAG( uVar12 );
    uVar15 = {l_U629._fU0[uVar19]._fU0[1] - l_U629._fU0[uVar19]._fU0[0]};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar12._fU0, uVar12._fU4, uVar15._fU0, uVar15._fU4, ref fVar20 );
    if (fVar20 > 90.00000000)
    {
        fVar20 += -180.00000000;
        fVar20 *= -1.00000000;
    }
    if (fVar20 < 35.00000000)
    {
        if ((sub_18928( ref uVar12, ref uVar15 )) > 0.00000000)
        {
            fVar18 *= 0.60000000;
        }
        else
        {
            fVar18 *= 1.40000000;
        }
    }
    l_U148 = fVar18;
    if (fVar18 < l_U111[0])
    {
        return 0;
    }
    else if (fVar18 < l_U111[1])
    {
        return 1;
    }
    else if (fVar18 < l_U111[2])
    {
        return 2;
    }
    else
    {
        return 3;
    };;;
    return 3;
}

void sub_31369(unknown uParam0, vector vParam1, unknown uParam4)
{
    vector vVar7;
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

    vParam1 = {vParam1 / (VMAG( vParam1 ))};
    vParam1 = {vParam1 * 5.00000000};
    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        GET_OBJECT_COORDINATES( l_U246[15], ref vVar7.x, ref vVar7.y, ref vVar7.z );
        uVar10 = {vVar7 - vParam1};
    }
    array(ref uVar16._fU0, 2);
    ref uVar16;
    uVar16._fU0[0] = {vVar7};
    uVar16._fU0[1] = {uVar10};
    if (NOT (sub_15651( uVar16, l_U629, ref uVar13, uParam4 )))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        }
    }
    return sub_31564( ref uVar13, uParam0, 0 );
}

void sub_31564(int iParam0, unknown uParam1, boolean bParam2)
{
    vector vVar5;
    vector vVar8;

    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        GET_OBJECT_COORDINATES( l_U246[15], ref vVar5.x, ref vVar5.y, ref vVar5.z );
    }
    vVar8 = {vVar5 - (iParam0^)};
    vVar8.z = 0.00000000;
    vVar8 = {vVar8 / (VMAG( vVar8 ))};
    vVar8 = {sub_17221( vVar8, 0.00000000, 0.00000000, 90.00000000 )};
    if (bParam2)
    {
        vVar8 = {vVar8 * 0.00000000};
    }
    else
    {
        vVar8 = {vVar8 * (sub_31721( uParam1 ))};
    }
    (iParam0^) = {(iParam0^) + vVar8};
    iParam0->_fU8 = l_U146;
    if (NOT bParam2)
    {
        iParam0->_fU8 += sub_31870( uParam1 );
    }
    return (iParam0^);
}

float sub_31721(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return l_U121[l_U205] + (l_U391._fU0 * (0.70000000 * -1.00000000));
        break;
    }
    return l_U136[l_U205] + (l_U391._fU0 * (0.70000000 * -1.00000000));
}

float sub_31870(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return l_U126[l_U205] + (l_U391._fU4 * 0.70000000);
        break;
    }
    return l_U141[l_U205] + (l_U391._fU4 * 0.70000000);
}

void sub_32661(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;

    l_U205 = sub_31353( uParam0, uParam1 );
    vVar6 = {uParam1};
    fVar15 = VMAG( vVar6 );
    if (fVar15 == 0.00000000)
    {
        vVar6 = {vVar6 / 0.00000010};
    }
    else
    {
        vVar6 = {vVar6 / fVar15};
    }
    vVar6 = {vVar6 * (sub_32752( uParam0 ))};
    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        GET_OBJECT_COORDINATES( l_U246[15], ref vVar9.x, ref vVar9.y, ref vVar9.z );
        uVar12 = {vVar9 - vVar6};
        return sub_31564( ref uVar12, uParam0, 0 );
    }
    return sub_31564( ref uVar12, uParam0, 0 );
}

void sub_32752(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return l_U116[l_U205];
        break;
    }
    return l_U131[l_U205];
}

void sub_33322(int iParam0)
{
    unknown Result;

    GET_HEADING_FROM_VECTOR_2D( iParam0->_fU0, iParam0->_fU4, ref Result );
    return Result;
}

string sub_33473(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "SHORT_SHOT_START";
        break;
    }
    return "F_SHORT_SHOT_START";
}

string sub_33601(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "MED_SHOT_START";
        break;
    }
    return "F_MED_SHOT_START";
}

string sub_33725(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "LONG_SHOT_START";
        break;
    }
    return "F_LONG_SHOT_START";
}

string sub_33851(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "XLONG_SHOT_START";
        break;
    }
    return "F_XLONG_SHOT_START";
}

void sub_34416()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    sub_1442( l_U285._fU0[l_U204] );
    if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U203] )))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U285._fU0[l_U203], 0.00000000, 1.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U285._fU0[l_U203], 0.00000000, -1.00000000, 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    }
    if (NOT (IS_CHAR_INJURED( l_U285._fU0[l_U204] )))
    {
        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U285._fU0[l_U204], uVar2._fU0, uVar2._fU4, uVar2._fU8, 1.50000000, 1.50000000, 2.00000000, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U285._fU0[l_U204], uVar5._fU0, uVar5._fU4, uVar5._fU8, 1.50000000, 1.50000000, 2.00000000, 0 ))))
        {
            sub_15411( l_U285._fU0[l_U204] );
        }
        else
        {
            sub_34733( l_U285._fU0[l_U204] );
        }
    }
    return;
}

void sub_34733(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    float fVar12;

    sub_1442( uParam0 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_HEADING( uParam0, ref fVar12 );
    }
    if (DOES_OBJECT_EXIST( l_U285._fU24 ))
    {
        GET_OBJECT_COORDINATES( l_U285._fU24, ref vVar6.x, ref vVar6.y, ref vVar6.z );
    }
    vVar9 = {vVar6 - vVar3};
    vVar9.z = 0.00000000;
    vVar9 = {vVar9 * 3.50000000};
    vVar3 = {vVar3 + vVar9};
    fVar12 += 180.00000000;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SET_CHAR_COORDINATES( uParam0, vVar3.x, vVar3.y, vVar3.z );
        sub_15411( uParam0 );
    }
    return;
}

void sub_34972()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (DOES_CAM_EXIST( l_U109 ))
    {
        SET_CAM_ACTIVE( l_U109, 1 );
        SET_CAM_PROPAGATE( l_U109, 1 );
        DESTROY_CAM( l_U109 );
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[0], 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[1] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[1], 1 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    sub_2680();
    if (NOT (DOES_CAM_EXIST( l_U103 )))
    {
        CREATE_CAM( 14, ref l_U103 );
        SET_CAM_ACTIVE( l_U103, 1 );
        SET_CAM_PROPAGATE( l_U103, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    GET_OBJECT_COORDINATES( l_U285._fU24, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_CHAR_COORDINATES( l_U285._fU0[l_U203], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U285._fU0[l_U203], 1.00000000, 4.00000000, 1.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    SET_CAM_POS( l_U103, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    POINT_CAM_AT_PED( l_U103, l_U285._fU0[l_U203] );
    SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U103, 1 );
    SET_CAM_POINT_OFFSET( l_U103, 0.00000000, 0.00000000, 0.50000000 );
    SET_CAM_FOV( l_U103, 40.00000000 );
    return;
}

int sub_35547()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
    if (iVar2 == 0)
    {
        return 1;
    }
    return 0;
}

void sub_37453()
{
    int I;

    for ( I = 0; I < 15; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U246[I] ))
        {
            if (NOT (sub_927( I )))
            {
                if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
                {
                    SET_OBJECT_ALPHA( l_U246[I], 255 );
                }
                else
                {
                    SET_OBJECT_VISIBLE( l_U246[I], 1 );
                    SET_OBJECT_VISIBLE( l_U263[I], 1 );
                }
            }
        }
    }
    return;
}

void sub_37825(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, boolean bParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    uVar7 = {sub_32661( (uParam0^), uParam1 )};
    l_U110 = sub_33322( ref uParam1 );
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (bParam4)
        {
            SET_CHAR_VISIBLE( (uParam0^), 1 );
        }
        else
        {
            SET_CHAR_VISIBLE( (uParam0^), 0 );
            SET_CHAR_COLLISION( (uParam0^), 0 );
        }
    }
    sub_37923( (uParam0^) );
    if (DOES_OBJECT_EXIST( l_U284 ))
    {
        SET_OBJECT_HEADING( l_U284, l_U110 );
        SET_OBJECT_COORDINATES( l_U284, uVar7._fU0, uVar7._fU4, uVar7._fU8 + l_U502 );
    }
    return;
}

void sub_37923(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT (DOES_OBJECT_EXIST( l_U284 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        CREATE_OBJECT( -809347846, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U284, 1 );
        SET_OBJECT_COLLISION( l_U284, 0 );
        SET_OBJECT_VISIBLE( l_U284, 0 );
        FREEZE_OBJECT_POSITION( l_U284, 1 );
        SET_OBJECT_HEADING( l_U284, uVar6 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_PED_ATTACHED_TO_OBJECT( uParam0, l_U284 )))
        {
            ATTACH_PED_TO_OBJECT( uParam0, l_U284, 0, 0.00000000, 0.00000000, 0.00000000, uVar6, 0.00000000, 0, 0 );
        }
    }
    return;
}

void sub_38268()
{
    float fVar2;

    if ((sub_38277()) AND (l_U182 > 15000.00000000))
    {
        if (NOT l_U85)
        {
            switch (l_U205)
            {
                case 0:
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_38554( l_U285._fU0[l_U203] ) )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U296 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_38554( l_U285._fU0[l_U203] ), "MINI_POOL", 4.00000000, 0, 1, 0, 1, -1 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_38719( l_U285._fU0[l_U203] ), "MINI_POOL", 4.00000000, 0, 1, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U296 );
                    TASK_PERFORM_SEQUENCE( l_U285._fU0[l_U203], l_U296 );
                    CLEAR_SEQUENCE_TASK( l_U296 );
                }
                else
                {
                    l_U85 = 1;
                }
                break;
                case 1:
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_38931( l_U285._fU0[l_U203] ) )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U296 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_38931( l_U285._fU0[l_U203] ), "MINI_POOL", 4.00000000, 0, 1, 0, 1, -1 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_39092( l_U285._fU0[l_U203] ), "MINI_POOL", 4.00000000, 0, 1, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U296 );
                    TASK_PERFORM_SEQUENCE( l_U285._fU0[l_U203], l_U296 );
                    CLEAR_SEQUENCE_TASK( l_U296 );
                }
                else
                {
                    l_U85 = 1;
                }
                break;
                case 2:
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_39300( l_U285._fU0[l_U203] ) )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U296 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_39300( l_U285._fU0[l_U203] ), "MINI_POOL", 4.00000000, 0, 1, 0, 1, -1 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_39463( l_U285._fU0[l_U203] ), "MINI_POOL", 4.00000000, 0, 1, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U296 );
                    TASK_PERFORM_SEQUENCE( l_U285._fU0[l_U203], l_U296 );
                    CLEAR_SEQUENCE_TASK( l_U296 );
                }
                else
                {
                    l_U85 = 1;
                }
                break;
                case 3:
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_39673( l_U285._fU0[l_U203] ) )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U296 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_39673( l_U285._fU0[l_U203] ), "MINI_POOL", 4.00000000, 0, 1, 0, 1, -1 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, sub_39838( l_U285._fU0[l_U203] ), "MINI_POOL", 4.00000000, 0, 1, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U296 );
                    TASK_PERFORM_SEQUENCE( l_U285._fU0[l_U203], l_U296 );
                    CLEAR_SEQUENCE_TASK( l_U296 );
                }
                else
                {
                    l_U85 = 1;
                }
                break;
            }
        }
        else
        {
            switch (l_U205)
            {
                case 0:
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_38554( l_U285._fU0[l_U203] ) )))
                {
                    l_U182 = 0.00000000;
                    l_U85 = 0;
                }
                break;
                case 1:
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_38931( l_U285._fU0[l_U203] ) )))
                {
                    l_U182 = 0.00000000;
                    l_U85 = 0;
                }
                break;
                case 2:
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_39300( l_U285._fU0[l_U203] ) )))
                {
                    l_U182 = 0.00000000;
                    l_U85 = 0;
                }
                break;
                case 3:
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_39673( l_U285._fU0[l_U203] ) )))
                {
                    l_U182 = 0.00000000;
                    l_U85 = 0;
                }
                break;
            }
        }
        l_U150 = 0.20000000;
    }
    else if (NOT sub_38277())
    {
        l_U182 = 0.00000000;
    }
    l_U85 = 0;
    if (l_U58[l_U203])
    {
        fVar2 = 9999.90000000;
    }
    else
    {
        fVar2 = 8.00000000;
    }
    switch (l_U205)
    {
        case 0:
        if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_38719( l_U285._fU0[l_U203] ) ))
        {
            SET_CHAR_ANIM_SPEED( l_U285._fU0[l_U203], "MINI_POOL", sub_38719( l_U285._fU0[l_U203] ), 0.00000000 );
            SET_CHAR_ANIM_CURRENT_TIME( l_U285._fU0[l_U203], "MINI_POOL", sub_38719( l_U285._fU0[l_U203] ), l_U150 );
        }
        else
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U285._fU0[l_U203], sub_38719( l_U285._fU0[l_U203] ), "MINI_POOL", fVar2, 0, 1, 0, 1, -1 );
        }
        break;
        case 1:
        if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_39092( l_U285._fU0[l_U203] ) ))
        {
            SET_CHAR_ANIM_SPEED( l_U285._fU0[l_U203], "MINI_POOL", sub_39092( l_U285._fU0[l_U203] ), 0.00000000 );
            SET_CHAR_ANIM_CURRENT_TIME( l_U285._fU0[l_U203], "MINI_POOL", sub_39092( l_U285._fU0[l_U203] ), l_U150 );
        }
        else
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U285._fU0[l_U203], sub_39092( l_U285._fU0[l_U203] ), "MINI_POOL", fVar2, 0, 1, 0, 1, -1 );
        }
        break;
        case 2:
        if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_39463( l_U285._fU0[l_U203] ) ))
        {
            SET_CHAR_ANIM_SPEED( l_U285._fU0[l_U203], "MINI_POOL", sub_39463( l_U285._fU0[l_U203] ), 0.00000000 );
            SET_CHAR_ANIM_CURRENT_TIME( l_U285._fU0[l_U203], "MINI_POOL", sub_39463( l_U285._fU0[l_U203] ), l_U150 );
        }
        else
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U285._fU0[l_U203], sub_39463( l_U285._fU0[l_U203] ), "MINI_POOL", fVar2, 0, 1, 0, 1, -1 );
        }
        break;
        case 3:
        if (IS_CHAR_PLAYING_ANIM( l_U285._fU0[l_U203], "MINI_POOL", sub_39838( l_U285._fU0[l_U203] ) ))
        {
            SET_CHAR_ANIM_SPEED( l_U285._fU0[l_U203], "MINI_POOL", sub_39838( l_U285._fU0[l_U203] ), 0.00000000 );
            SET_CHAR_ANIM_CURRENT_TIME( l_U285._fU0[l_U203], "MINI_POOL", sub_39838( l_U285._fU0[l_U203] ), l_U150 );
        }
        else
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U285._fU0[l_U203], sub_39838( l_U285._fU0[l_U203] ), "MINI_POOL", fVar2, 0, 1, 0, 1, -1 );
        }
        break;
    }
    return;
}

int sub_38277()
{
    if (l_U58[l_U203])
    {
        if (l_U200 == 4)
        {
            GET_POSITION_OF_ANALOGUE_STICKS( l_U285._fU32[l_U203], ref l_U207, ref l_U208, ref l_U209, ref l_U210 );
            if ((l_U209 == 0) AND (l_U210 == 0))
            {
                GET_MOUSE_INPUT( ref l_U209, ref l_U210 );
            }
            if ((l_U209 < 5) AND (l_U209 > -5))
            {
                if ((l_U210 < 5) AND (l_U210 > -5))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

string sub_38554(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "SHORT_SHOT_IDLE";
        break;
    }
    return "F_SHORT_SHOT_IDLE";
}

string sub_38719(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "SHORT_SHOT_FIRE";
        break;
    }
    return "F_SHORT_SHOT_FIRE";
}

string sub_38931(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "MED_SHOT_IDLE";
        break;
    }
    return "F_MED_SHOT_IDLE";
}

string sub_39092(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "MED_SHOT_FIRE";
        break;
    }
    return "F_MED_SHOT_FIRE";
}

string sub_39300(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "LONG_SHOT_IDLE";
        break;
    }
    return "F_LONG_SHOT_IDLE";
}

string sub_39463(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "LONG_SHOT_FIRE";
        break;
    }
    return "F_LONG_SHOT_FIRE";
}

string sub_39673(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "XLONG_SHOT_IDLE";
        break;
    }
    return "F_XLONG_SHOT_IDLE";
}

string sub_39838(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "XLONG_SHOT_FIRE";
        break;
    }
    return "F_XLONG_SHOT_FIRE";
}

void sub_42669()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;
    int iVar5;
    unknown Result;
    unknown uVar7;
    unknown uVar8;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar2, ref uVar3, ref iVar4, ref iVar5 );
    if ((iVar4 == 0) AND (iVar5 == 0))
    {
        GET_MOUSE_INPUT( ref iVar4, ref iVar5 );
    }
    Result._fU0 = TO_FLOAT( iVar4 );
    Result._fU4 = (TO_FLOAT( iVar5 )) * -1.00000000;
    Result._fU8 = 0.00000000;
    return Result;
}

void sub_43446(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    int I;
    vector vVar11;
    float fVar14;

    fVar9 = l_U498;
    for ( I = 0; I < 4; I++ )
    {
        l_U431[I]._fU36 = 0;
    }
    for ( I = 0; I < 4; I++ )
    {
        if (I == 0)
        {
            if (DOES_OBJECT_EXIST( uParam0 ))
            {
                GET_OBJECT_COORDINATES( uParam0, ref l_U431[I]._fU0._fU0, ref l_U431[I]._fU0._fU4, ref l_U431[I]._fU0._fU8 );
            }
            l_U431[I]._fU24 = {uParam1};
            l_U431[I]._fU36 = 1;
        }
        sub_43660( l_U431[I]._fU0, l_U431[I]._fU24, ref l_U431[I]._fU12, ref uVar6 );
        vVar11 = {l_U431[I]._fU12 - l_U431[I]._fU0};
        fVar14 = VMAG2( vVar11 );
        if (fVar14 < (fVar9 * fVar9))
        {
            if ((I + 1) < 4)
            {
                l_U431[I + 1]._fU0 = {l_U431[I]._fU12};
                l_U431[I + 1]._fU24 = {uVar6};
                l_U431[I + 1]._fU36 = 1;
            }
            fVar9 -= VMAG( vVar11 );
        }
        else
        {
            fVar14 = VMAG( vVar11 );
            if (fVar14 == 0.00000000)
            {
                vVar11 = {vVar11 / 0.00000010};
            }
            else
            {
                vVar11 = {vVar11 / fVar14};
            }
            vVar11 = {vVar11 * fVar9};
            l_U431[I]._fU12 = {l_U431[I]._fU0 + vVar11};
        }
    }
    sub_44444();
    return;
}

void sub_43660(vector vParam0, vector vParam3, int iParam6, unknown uParam7)
{
    unknown uVar10;
    float fVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    vParam3.z = 0.00000000;
    fVar11 = VMAG( vParam3 );
    if (fVar11 == 0.00000000)
    {
        vParam3 = {vParam3 / 0.00000100};
    }
    else
    {
        vParam3 = {vParam3 / fVar11};
    }
    vParam3 = {vParam3 * 5.00000000};
    array(ref uVar12._fU0, 2);
    ref uVar12;
    uVar12._fU0[0] = {vParam0};
    uVar12._fU0[1] = {vParam0 + vParam3};
    sub_15651( uVar12, l_U571, iParam6, ref uVar10 );
    iParam6->_fU8 = vParam0.z;
    sub_43818( iParam6, vParam3 );
    (uParam7^) = {sub_43958( vParam3, l_U571._fU0[uVar10]._fU0[0], l_U571._fU0[uVar10]._fU0[1] )};
    return;
}

void sub_43818(unknown uParam0, vector vParam1)
{
    float fVar6;

    fVar6 = VMAG( vParam1 );
    if (fVar6 == 0.00000000)
    {
        vParam1 = {vParam1 / 0.00000010};
    }
    else
    {
        vParam1 = {vParam1 / fVar6};
    }
    vParam1 = {vParam1 * (0.03950000 * l_U501)};
    (uParam0^) = {(uParam0^) - vParam1};
    return;
}

void sub_43958(unknown uParam0, unknown uParam1, unknown uParam2, vector vParam3, vector vParam6)
{
    float fVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    vector Result;
    float fVar21;

    uVar12 = {sub_27422( vParam3, vParam6 )};
    uVar15 = {vParam6 - vParam3};
    GET_ANGLE_BETWEEN_2D_VECTORS( uParam0._fU0, uParam0._fU4, uVar15._fU0, uVar15._fU4, ref fVar11 );
    fVar11 += -90.00000000;
    fVar11 *= -1.00000000;
    Result = {sub_17221( uVar12, 0.00000000, 0.00000000, fVar11 )};
    fVar21 = VMAG( Result );
    if (fVar21 == 0.00000000)
    {
        Result = {Result / 0.00000100};
    }
    else
    {
        Result = {Result / fVar21};
    }
    Result.z = 0.00000000;
    return Result;
}

void sub_44444()
{
    int I;
    float fVar3;
    unknown uVar4;
    float fVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    vector vVar11;
    float fVar14;

    fVar3 = l_U498 / 21;
    GET_FRAME_TIME( ref uVar4 );
    fVar5 = fVar3 / (l_U499 / uVar4);
    l_U500 += fVar5;
    if (l_U500 > fVar3)
    {
        l_U500 -= fVar3;
    }
    fVar8 = 0.00000000;
    iVar6 = 0;
    iVar7 = 0;
    fVar14 = 0.00000000;
    for ( I = 0; I < 25; I++ )
    {
        if (NOT (DOES_OBJECT_EXIST( l_U472[I] )))
        {
            CREATE_OBJECT( -809347846, l_U431[0]._fU0._fU0, l_U431[0]._fU0._fU4, l_U431[0]._fU0._fU8, ref l_U472[I], 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U472[I], l_U199 );
            SET_OBJECT_COLLISION( l_U472[I], 0 );
            SET_OBJECT_VISIBLE( l_U472[I], 0 );
            SET_OBJECT_SCALE( l_U472[I], l_U501 );
        }
        if (DOES_OBJECT_EXIST( l_U472[I] ))
        {
            SET_OBJECT_VISIBLE( l_U472[I], 0 );
            if (iVar7 < 4)
            {
                if (l_U431[iVar7]._fU36)
                {
                    vVar11 = {l_U431[iVar7]._fU12 - l_U431[iVar7]._fU0};
                    fVar9 = VMAG( vVar11 );
                    if (iVar7 == 0)
                    {
                        fVar10 = (iVar6 * fVar3) + l_U500;
                    }
                    else
                    {
                        fVar10 = (iVar6 * fVar3) + fVar8;
                    }
                    if (fVar10 > fVar9)
                    {
                        SET_OBJECT_VISIBLE( l_U472[I], 0 );
                        fVar8 = fVar10 - fVar9;
                        iVar6 = 0;
                        iVar7++;
                    }
                    else
                    {
                        fVar14 = VMAG( vVar11 );
                        if (fVar14 == 0.00000000)
                        {
                            vVar11 = {vVar11 / 0.00000100};
                        }
                        else
                        {
                            vVar11 = {vVar11 / fVar14};
                        }
                        vVar11 = {vVar11 * fVar10};
                        vVar11 = {vVar11 + l_U431[iVar7]._fU0};
                        SET_OBJECT_COORDINATES( l_U472[I], vVar11.x, vVar11.y, vVar11.z );
                        SET_OBJECT_VISIBLE( l_U472[I], 1 );
                        iVar6++;
                    }
                }
            }
        }
    }
    return;
}

void sub_45118(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    vector vVar8;
    vector vVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    vector vVar20;
    float fVar23;

    fVar23 = 0.00000000;
    vVar8 = {uParam0};
    fVar23 = VMAG( vVar8 );
    if (fVar23 == 0.00000000)
    {
        vVar8 = {vVar8 / 0.00000001};
    }
    else
    {
        vVar8 = {vVar8 / fVar23};
    }
    vVar11 = {sub_17221( vVar8, 0.00000000, 0.00000000, 90.00000000 )};
    uVar14 = {l_U379};
    uVar14._fU0 -= l_U391._fU0;
    uVar14._fU8 += l_U391._fU4;
    vVar11 = {vVar11 * uVar14._fU0};
    vVar8 = {vVar8 * uVar14._fU4};
    vVar8.z = uVar14._fU8;
    uVar17 = {vVar8 + vVar11};
    GET_HEADING_FROM_VECTOR_2D( uParam0._fU0, uParam0._fU4, ref vVar20.z );
    vVar20 = {vVar20 + l_U376};
    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U283 )))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[15], uVar17._fU0, uVar17._fU4, uVar17._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            CREATE_OBJECT( -927369996, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U283, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U283, l_U199 );
            SET_OBJECT_COLLISION( l_U283, 0 );
            FREEZE_OBJECT_POSITION( l_U283, 1 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U246[15], uVar17._fU0, uVar17._fU4, uVar17._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        SET_OBJECT_VISIBLE( l_U283, 1 );
        SET_OBJECT_COORDINATES( l_U283, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
        SET_OBJECT_ROTATION( l_U283, vVar20.x, vVar20.y, vVar20.z );
    }
    return;
}

void sub_45630(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;
    unknown uVar6;
    float fVar7;

    for ( I = 0; I < 15; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U246[I] ))
        {
            if (NOT (sub_927( I )))
            {
                fVar7 = sub_45696( ref l_U246[I], uParam0 );
                if (fVar7 < 0.10000000)
                {
                    fVar7 = 0.10000000;
                }
                if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
                {
                    if (fVar7 < 1.00000000)
                    {
                        uVar6 = ROUND( fVar7 * 255.00000000 );
                        SET_OBJECT_ALPHA( l_U246[I], uVar6 );
                    }
                    else
                    {
                        SET_OBJECT_ALPHA( l_U246[I], 255 );
                    }
                }
                else if (fVar7 < 0.50000000)
                {
                    SET_OBJECT_VISIBLE( l_U246[I], 0 );
                    SET_OBJECT_VISIBLE( l_U263[I], 0 );
                }
                else
                {
                    SET_OBJECT_VISIBLE( l_U246[I], 1 );
                    SET_OBJECT_VISIBLE( l_U263[I], 1 );
                }
            }
        }
    }
    return;
}

float sub_45696(unknown uParam0, vector vParam1)
{
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    vector vVar12;
    float Result;
    float fVar16;

    if (DOES_OBJECT_EXIST( l_U246[15] ))
    {
        fVar16 = VMAG( vParam1 );
        if (fVar16 == 0.00000000)
        {
            vParam1 = {vParam1 / 0.00000001};
        }
        else
        {
            vParam1 = {vParam1 / fVar16};
        }
        vVar12 = {vParam1};
        vParam1 = {vParam1 * 5.00000000};
        GET_OBJECT_COORDINATES( l_U246[15], ref vVar6.x, ref vVar6.y, ref vVar6.z );
        vVar12 = {vVar12 * 0.03950000};
        vVar6 = {vVar6 - vVar12};
        uVar9 = {vVar6 - vParam1};
        Result = sub_45882( uParam0, vVar6.x, vVar6.y, uVar9._fU0, uVar9._fU4 );
        if (Result > 0.00000000)
        {
            if (Result < 0.18000000)
            {
                Result /= 0.18000000;
                return Result;
            }
        }
    }
    return 1.00000000;
}

float sub_45882(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    float Result;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    if (DOES_OBJECT_EXIST( (uParam0^) ))
    {
        GET_OBJECT_COORDINATES( (uParam0^), ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
        uVar7._fU0 = uParam3 - uParam1;
        uVar7._fU4 = uParam4 - uParam2;
        uVar7._fU8 = 0.00000000;
        uVar10._fU0 = uVar15._fU0 - uParam1;
        uVar10._fU4 = uVar15._fU4 - uParam2;
        uVar10._fU8 = 0.00000000;
        GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar10._fU0, uVar10._fU4, ref fVar13 );
        if ((VMAG2( uVar7 )) > (VMAG2( uVar10 )))
        {
            if (fVar13 >= 90.00000000)
            {
                return -1.00000000;
            }
            else
            {
                Result = (VMAG( uVar10 )) * (SIN( fVar13 ));
                return Result;
            }
        }
        else
        {
            return -1.00000000;
        }
        break;
    }
    return -1.00000000;
}

void sub_46530()
{
    vector vVar2;
    vector vVar5;
    float fVar8;

    if (DOES_CAM_EXIST( l_U109 ))
    {
        SET_CAM_ACTIVE( l_U109, 1 );
        SET_CAM_PROPAGATE( l_U109, 1 );
        DESTROY_CAM( l_U109 );
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[0], 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[1] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[1], 1 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    if (NOT (DOES_CAM_EXIST( l_U104 )))
    {
        CREATE_CAM( 14, ref l_U104 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        ATTACH_CAM_TO_OBJECT( l_U104, l_U246[15] );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U104, 0 );
        POINT_CAM_AT_OBJECT( l_U104, l_U246[15] );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U104, 0 );
    }
    if ((DOES_CAM_EXIST( l_U105 )) || (DOES_CAM_EXIST( l_U108 )))
    {
        if (DOES_CAM_EXIST( l_U105 ))
        {
            if (l_U82)
            {
                if (sub_14726( l_U105, l_U104, 1000 ))
                {
                    DESTROY_CAM( l_U105 );
                }
            }
            else
            {
                DESTROY_CAM( l_U105 );
                SET_CAM_ACTIVE( l_U104, 1 );
                SET_CAM_PROPAGATE( l_U104, 1 );
            }
        }
        if (DOES_CAM_EXIST( l_U108 ))
        {
            if (l_U82)
            {
                if (sub_14726( l_U108, l_U104, 1000 ))
                {
                    sub_2680();
                }
            }
            else
            {
                sub_2680();
                SET_CAM_ACTIVE( l_U104, 1 );
                SET_CAM_PROPAGATE( l_U104, 1 );
            }
        }
    }
    else
    {
        SET_CAM_ACTIVE( l_U104, 1 );
        SET_CAM_PROPAGATE( l_U104, 1 );
    }
    if (DOES_CAM_EXIST( l_U103 ))
    {
        DESTROY_CAM( l_U103 );
    }
    if (DOES_CAM_EXIST( l_U104 ))
    {
        vVar2 = {l_U320};
        fVar8 = VMAG( vVar2 );
        if (fVar8 == 0.00000000)
        {
            vVar2 = {vVar2 / 0.00000001};
        }
        else
        {
            vVar2 = {vVar2 / fVar8};
        }
        vVar5 = {sub_17221( vVar2, 0.00000000, 0.00000000, 90.00000000 )};
        vVar5 = {vVar5 * l_U352._fU0};
        vVar2 = {vVar2 * l_U352._fU4};
        vVar2.z = l_U352._fU8;
        l_U314 = {vVar2 + vVar5};
        vVar2 = {l_U320};
        fVar8 = VMAG( vVar2 );
        if (fVar8 == 0.00000000)
        {
            vVar2 = {vVar2 / 0.00000001};
        }
        else
        {
            vVar2 = {vVar2 / fVar8};
        }
        vVar5 = {sub_17221( vVar2, 0.00000000, 0.00000000, 90.00000000 )};
        vVar5 = {vVar5 * l_U355._fU0};
        vVar2 = {vVar2 * l_U355._fU4};
        vVar2.z = l_U355._fU8;
        l_U317 = {vVar2 + vVar5};
        SET_CAM_ATTACH_OFFSET( l_U104, l_U314._fU0, l_U314._fU4, l_U314._fU8 );
        SET_CAM_POINT_OFFSET( l_U104, l_U317._fU0, l_U317._fU4, l_U317._fU8 );
        SET_CAM_FOV( l_U104, 50.00000000 );
        SET_CAM_NEAR_CLIP( l_U104, 0.01000000 );
    }
    return;
}

void sub_47852()
{
    if (DOES_CAM_EXIST( l_U109 ))
    {
        SET_CAM_ACTIVE( l_U109, 1 );
        SET_CAM_PROPAGATE( l_U109, 1 );
        DESTROY_CAM( l_U109 );
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[0], 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[1] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[1], 1 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    l_U314 = {l_U326[l_U205]};
    l_U317 = {l_U339[l_U205]};
    if (NOT (DOES_CAM_EXIST( l_U105 )))
    {
        CREATE_CAM( 14, ref l_U105 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    if (DOES_CAM_EXIST( l_U104 ))
    {
        if (l_U82)
        {
            if (sub_14726( l_U104, l_U105, 1000 ))
            {
                DESTROY_CAM( l_U104 );
            }
        }
        else
        {
            DESTROY_CAM( l_U104 );
            SET_CAM_ACTIVE( l_U105, 1 );
            SET_CAM_PROPAGATE( l_U105, 1 );
        }
    }
    else
    {
        SET_CAM_ACTIVE( l_U105, 1 );
        SET_CAM_PROPAGATE( l_U105, 1 );
    }
    if (DOES_CAM_EXIST( l_U103 ))
    {
        DESTROY_CAM( l_U103 );
    }
    sub_2680();
    if (DOES_CAM_EXIST( l_U105 ))
    {
        UNATTACH_CAM( l_U105 );
        UNPOINT_CAM( l_U105 );
        ATTACH_CAM_TO_PED( l_U105, l_U285._fU0[l_U203] );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U105, 1 );
        POINT_CAM_AT_PED( l_U105, l_U285._fU0[l_U203] );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U105, 1 );
        SET_CAM_ATTACH_OFFSET( l_U105, l_U314._fU0, l_U314._fU4, l_U314._fU8 );
        SET_CAM_POINT_OFFSET( l_U105, l_U317._fU0, l_U317._fU4, l_U317._fU8 );
        SET_CAM_FOV( l_U105, 40.00000000 );
    }
    return;
}

float sub_49104(unknown uParam0)
{
    float fVar3;
    int I;

    l_U190[4] = l_U190[3];
    l_U190[3] = l_U190[2];
    l_U190[2] = l_U190[1];
    l_U190[1] = l_U190[0];
    l_U190[0] = uParam0;
    fVar3 = 0.00000000;
    for ( I = 0; I < 5; I++ )
    {
        if (l_U190[I] > 0.00000000)
        {
            fVar3 += 1.00000000;
        }
    }
    return ((((l_U190[0] + l_U190[1]) + l_U190[2]) + l_U190[3]) + l_U190[4]) / fVar3;
}

void sub_50604(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    vector vVar9;

    uVar6 = {(uParam0^) / (VMAG( (uParam0^) ))};
    vVar9 = {uVar6};
    vVar9 = {sub_17221( vVar9, 0.00000000, 0.00000000, 90.00000000 )};
    vVar9 = {vVar9 * uParam1._fU0};
    (uParam0^) = {(uParam0^) + vVar9};
    vVar9 = {uVar6};
    vVar9 = {vVar9 * uParam1._fU4};
    (uParam0^) = {(uParam0^) + vVar9};
    (uParam0^) = {(uParam0^) + uParam1._fU4};
    return;
}

string sub_51297(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "SHORT_SHOT_END";
        break;
    }
    return "F_SHORT_SHOT_END";
}

string sub_51421(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "MED_SHOT_END";
        break;
    }
    return "F_MED_SHOT_END";
}

string sub_51541(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "LONG_SHOT_END";
        break;
    }
    return "F_LONG_SHOT_END";
}

string sub_51663(unknown uParam0)
{
    if (IS_CHAR_MALE( uParam0 ))
    {
        return "XLONG_SHOT_END";
        break;
    }
    return "F_XLONG_SHOT_END";
}

int sub_51939()
{
    vector vVar2;
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (DOES_CAM_EXIST( l_U109 ))
    {
        SET_CAM_ACTIVE( l_U109, 1 );
        SET_CAM_PROPAGATE( l_U109, 1 );
        DESTROY_CAM( l_U109 );
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[0], 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U285._fU0[1] )))
        {
            SET_CHAR_VISIBLE( l_U285._fU0[1], 1 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    if (NOT (DOES_CAM_EXIST( l_U106 )))
    {
        CREATE_CAM( 14, ref l_U106 );
        GET_OBJECT_COORDINATES( l_U285._fU24, ref vVar2.x, ref vVar2.y, ref vVar2.z );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U285._fU0[l_U203], l_U388._fU0, l_U388._fU4, l_U388._fU8, ref vVar5.x, ref vVar5.y, ref vVar5.z );
        uVar8 = {vVar5 - vVar2};
        vVar2.x += uVar8._fU0;
        vVar2.y += uVar8._fU4;
        vVar2.z += 2.61500000;
        SET_CAM_POS( l_U106, vVar2.x, vVar2.y, vVar2.z );
        POINT_CAM_AT_OBJECT( l_U106, l_U285._fU24 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U106, 0 );
        SET_CAM_POINT_OFFSET( l_U106, 0.00000000, 0.00000000, 0.50000000 );
        SET_CAM_FOV( l_U106, 60.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    if (DOES_CAM_EXIST( l_U103 ))
    {
        DESTROY_CAM( l_U103 );
    }
    sub_2680();
    if (DOES_CAM_EXIST( l_U105 ))
    {
        if (sub_14726( l_U105, l_U106, 1000 ))
        {
            DESTROY_CAM( l_U105 );
        }
    }
    else if (NOT (DOES_CAM_EXIST( l_U105 )))
    {
        CREATE_CAM( 14, ref l_U105 );
        if (DOES_CAM_EXIST( l_U106 ))
        {
            GET_CAM_POS( l_U106, ref vVar2.x, ref vVar2.y, ref vVar2.z );
        }
        SET_CAM_POS( l_U105, vVar2.x, vVar2.y, vVar2.z );
        POINT_CAM_AT_OBJECT( l_U105, l_U285._fU24 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U105, 0 );
        SET_CAM_POINT_OFFSET( l_U105, 0.00000000, 0.00000000, 0.50000000 );
        SET_CAM_FOV( l_U105, 60.00000000 );
        SET_CAM_ACTIVE( l_U105, 1 );
        SET_CAM_PROPAGATE( l_U105, 1 );
        if (DOES_CAM_EXIST( l_U106 ))
        {
            DESTROY_CAM( l_U106 );
        }
    }
    return 1;;
    return 0;
}

int sub_53072()
{
    int I;
    int iVar3;

    iVar3 = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (NOT (sub_927( I )))
        {
            if (sub_53117( ref l_U246[I] ))
            {
                iVar3++;
            }
        }
        else
        {
            iVar3++;
        }
    }
    if (iVar3 == 16)
    {
        return 1;
        break;
    }
    return 0;
}

int sub_53117(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (DOES_OBJECT_EXIST( (uParam0^) ))
    {
        GET_OBJECT_VELOCITY( (uParam0^), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU4 );
        GET_OBJECT_ROTATION_VELOCITY( (uParam0^), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        if (((VMAG2( uVar3 )) < (0.01000000 * 0.01000000)) AND ((VMAG2( uVar6 )) < (0.01000000 * 0.01000000)))
        {
            return 1;
        }
        else if (sub_53241( (uParam0^) ))
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

int sub_53241(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (NOT (sub_18576( uVar3, l_U687 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_53528()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        sub_53557( ref l_U246[I] );
    }
    return;
}

void sub_53557(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_OBJECT_EXIST( (uParam0^) ))
    {
        FREEZE_OBJECT_POSITION( (uParam0^), 1 );
        SET_OBJECT_DYNAMIC( (uParam0^), 0 );
        GET_OBJECT_COORDINATES( (uParam0^), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        SET_OBJECT_COORDINATES( (uParam0^), uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        SET_OBJECT_DYNAMIC( (uParam0^), 1 );
        FREEZE_OBJECT_POSITION( (uParam0^), 0 );
    }
    return;
}

int sub_53805(unknown uParam0)
{
    if ((NOT (l_U220[uParam0] == 3)) AND (sub_927( 7 )))
    {
        if (NOT l_U61)
        {
            return 5;
        }
    }
    if (NOT l_U99)
    {
        if (sub_927( 15 ))
        {
            return 3;
        }
    }
    else
    {
        return 7;
    }
    if (l_U211 == 0)
    {
        return 1;
    }
    switch (l_U220[uParam0])
    {
        case 0:
        if (l_U211 == 3)
        {
            return 2;
        }
        break;
        case 1:
        if (NOT (l_U211 == 1))
        {
            return 2;
        }
        break;
        case 2:
        if (NOT (l_U211 == 2))
        {
            return 2;
        }
        break;
        case 3:
        if (NOT (l_U211 == 3))
        {
            return 2;
        }
        break;
    }
    if (l_U212 > 0)
    {
        switch (l_U220[uParam0])
        {
            case 0: break;
            case 1:
            if (l_U216 > 0)
            {
                return 4;
            }
            break;
            case 2:
            if (l_U215 > 0)
            {
                return 4;
            }
            break;
            case 3:
            if ((l_U215 > 0) || (l_U216 > 0))
            {
                return 4;
            }
            break;
        }
    }
    if ((l_U219 == 0) AND (l_U214 == 0))
    {
        return 6;
    }
    if (sub_54199())
    {
        return 7;
    }
    return 0;
}

int sub_54199()
{
    int I;

    l_U213 = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (NOT (sub_927( I )))
        {
            if (sub_53241( l_U246[I] ))
            {
                PRINTSTRING( "ARE_ANY_BALLS_OFF_TABLE - fail on ball " );
                PRINTINT( I );
                PRINTSTRING( "\n" );
                l_U213++;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (NOT (sub_927( I )))
        {
            if (sub_54377( I ))
            {
                PRINTSTRING( "ARE_ANY_BALLS_OFF_TABLE - fail2 on ball " );
                PRINTINT( I );
                PRINTSTRING( "\n" );
                l_U213++;
            }
        }
    }
    if (l_U213 > 0)
    {
        return 1;
    }
    return 0;
}

int sub_54377(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (DOES_OBJECT_EXIST( l_U246[uParam0] ))
    {
        if (NOT (sub_927( uParam0 )))
        {
            GET_OBJECT_COORDINATES( l_U246[uParam0], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, 0.04500000, 0.79800000, l_U311._fU8, ref uVar3._fU0, ref uVar3._fU4, ref uVar6 );
            if (uVar3._fU8 > (uVar6 + (0.50000000 * 0.03950000)))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_54666()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if ((sub_53241( l_U246[I] )) AND (NOT (sub_927( I ))))
        {
            if (I == 15)
            {
                l_U99 = 1;
            }
            sub_54732( I );
        }
        if (sub_54377( I ))
        {
            if (I == 15)
            {
                l_U99 = 1;
            }
            sub_54732( I );
        }
    }
    return;
}

void sub_54732(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    FREEZE_OBJECT_POSITION( l_U246[iParam0], 1 );
    GET_OBJECT_COORDINATES( l_U285._fU24, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    if (NOT (sub_53241( l_U246[iParam0] )))
    {
        PLAY_SOUND_FROM_POSITION( l_U228, "POOL_TABLE_POCKET_BALL", uVar3 );
    }
    SET_OBJECT_COORDINATES( l_U246[iParam0], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
    SET_OBJECT_COLLISION( l_U246[iParam0], 0 );
    SET_OBJECT_VISIBLE( l_U246[iParam0], 0 );
    if (NOT (iParam0 == 15))
    {
        if (NOT (sub_53241( l_U246[iParam0] )))
        {
            l_U214++;
            if (iParam0 < 7)
            {
                l_U215++;
            }
            if ((iParam0 > 7) AND (iParam0 < 15))
            {
                l_U216++;
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U263[iParam0] ))
    {
        DELETE_OBJECT( ref l_U263[iParam0] );
    }
    l_U7[iParam0] = 1;
    return;
}

void sub_63369(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U43030[uParam0]._fU0)
    {
        iVar3 = g_U43030[uParam0]._fU8;
        if (iVar3 > 0)
        {
            sub_63438( 2, iVar3 );
            g_U43030[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_63438(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_63608( 0 );
    return;
}

void sub_63608(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_63853();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_63853()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_63974(unknown uParam0)
{
    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        g_U28807._fU40 = uParam0;
        return;
    }
    g_U28807._fU36 = uParam0;
    return;
}

void sub_64994(unknown uParam0, boolean bParam1)
{
    CLEAR_HELP();
    PRINT_NOW( "PLT_06", 5000, 1 );
    if (NOT (IS_CHAR_INJURED( l_U285._fU0[0] )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U285._fU0[0] );
    }
    if (NOT (IS_CHAR_INJURED( l_U285._fU0[1] )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U285._fU0[1] );
    }
    if (bParam1)
    {
        sub_63974( 3 );
    }
    sub_691( uParam0 );
    return;
}

int sub_65203(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    int iVar7;

    if (DOES_OBJECT_EXIST( l_U285._fU24 ))
    {
        if ((IS_PLAYER_PLAYING( l_U285._fU12[uParam0] )) AND (l_U58[uParam0]))
        {
            GET_OBJECT_COORDINATES( l_U285._fU24, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if (LOCATE_CHAR_ON_FOOT_3D( l_U285._fU0[uParam0], uVar3._fU0, uVar3._fU4, uVar3._fU8, 10.00000000, 10.00000000, 2.00000000, 0 ))
            {
                l_U172 = 0.00000000;
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PLH_06" ))
                {
                    CLEAR_HELP();
                }
            }
            else
            {
                CLEAR_HELP();
                fVar6 = l_U172 * 0.00100000;
                fVar6 = 5.00000000 - fVar6;
                iVar7 = ROUND( fVar6 );
                PRINT_HELP_FOREVER_WITH_NUMBER( "PLH_06", iVar7 );
                if (iVar7 <= 0)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_66280()
{
    if (l_U2)
    {
        if (((((((((((((NOT (IS_BUTTON_PRESSED( 0, 16 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 17 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 14 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 15 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 4 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 5 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 6 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 7 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
        {
            l_U2 = 0;
        }
    }
    return;
}

void sub_66667()
{
    int I;
    vector vVar3;
    vector vVar6;
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
    float fVar20;
    boolean bVar21;

    if (NOT l_U87)
    {
        if (DOES_OBJECT_EXIST( l_U246[15] ))
        {
            GET_OBJECT_VELOCITY( l_U246[15], ref l_U394._fU0, ref l_U394._fU4, ref l_U394._fU8 );
            l_U183 = VMAG( l_U394 );
            if (l_U183 > 0.00000000)
            {
                l_U87 = 1;
                l_U230 = 0;
            }
        }
    }
    if ((NOT l_U86) AND (l_U87))
    {
        if (DOES_OBJECT_EXIST( l_U246[15] ))
        {
            bVar21 = false;
            for ( I = 0; I < 15; I++ )
            {
                if ((DOES_OBJECT_EXIST( l_U246[15] )) AND (DOES_OBJECT_EXIST( l_U246[I] )))
                {
                    if (HAS_POOL_OBJECT_COLLIDED_WITH_OBJECT( l_U246[15], l_U246[I] ))
                    {
                        bVar21 = true;
                    }
                }
            }
            if (HAS_POOL_OBJECT_COLLIDED_WITH_CUSHION( l_U246[15] ))
            {
                bVar21 = true;
            }
            if (bVar21)
            {
                if (l_U183 > 0.00000000)
                {
                    l_U394._fU8 = 0.00000000;
                    uVar18 = VMAG( l_U394 );
                    GET_HEADING_FROM_VECTOR_2D( l_U320._fU0, l_U320._fU4, ref uVar19 );
                    l_U397._fU0 = l_U391._fU0 / l_U173;
                    l_U397._fU4 = l_U391._fU4 / l_U173;
                    l_U397._fU8 = 0.00000000;
                    l_U397 = {l_U397 / (VMAG( l_U397 ))};
                    l_U397 = {sub_17221( l_U397, 0.00000000, 0.00000000, uVar19 )};
                    l_U397 = {l_U397 * ((l_U151 * (uVar18 / l_U183)) * 1.00000000)};
                    l_U230 = l_U231;
                    l_U184 = 0.00000000;
                    l_U86 = 1;
                }
            }
            else
            {
                GET_OBJECT_VELOCITY( l_U246[15], ref l_U394._fU0, ref l_U394._fU4, ref l_U394._fU8 );
            }
        }
    }
    else if (l_U184 < 1000.00000000)
    {
        if (DOES_OBJECT_EXIST( l_U246[15] ))
        {
            APPLY_FORCE_TO_OBJECT( l_U246[15], 0, l_U397, 0.00000000, 0.00000000, 0.00000000, 0, 0, 1, 1 );
        }
        l_U230 += -1;
    }
    for ( I = 0; I < 15; I++ )
    {
        if (l_U211 == 0)
        {
            if ((DOES_OBJECT_EXIST( l_U246[15] )) AND (DOES_OBJECT_EXIST( l_U246[I] )))
            {
                if (HAS_POOL_OBJECT_COLLIDED_WITH_OBJECT( l_U246[15], l_U246[I] ))
                {
                    if (I < 7)
                    {
                        l_U211 = 1;
                    }
                    else if (I == 7)
                    {
                        l_U211 = 3;
                    }
                    else if (I > 7)
                    {
                        l_U211 = 2;
                    };;;
                }
            }
        }
        else
        {
            I = 15;
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (NOT (sub_927( I )))
        {
            if (sub_67518( ref l_U246[I] ))
            {
                sub_54732( I );
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U246[I] ))
        {
            if (HAS_POOL_OBJECT_COLLIDED_WITH_CUSHION( l_U246[I] ))
            {
                l_U219++;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (NOT (sub_53117( ref l_U246[I] )))
        {
            GET_OBJECT_VELOCITY( l_U246[I], ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            GET_OBJECT_ROTATION_VELOCITY( l_U246[I], ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
            if (((VMAG2( uVar9 )) < (0.01000000 * 0.01000000)) AND ((VMAG2( uVar15 )) < (0.50000000 * 0.50000000)))
            {
                sub_53557( ref l_U246[I] );
            }
        }
    }
    if (NOT (sub_927( 15 )))
    {
        if (sub_53117( ref l_U246[15] ))
        {
            if (DOES_OBJECT_EXIST( l_U246[15] ))
            {
                GET_OBJECT_COORDINATES( l_U246[15], ref vVar3.x, ref vVar3.y, ref vVar3.z );
            }
            if (NOT (sub_18576( vVar3, l_U571 )))
            {
                fVar20 = 999.90000000;
                for ( I = 0; I < 6; I++ )
                {
                    sub_21089( I, ref vVar6.x, ref vVar6.y, 0 );
                    vVar6.z = 0.00000000;
                    vVar3.z = 0.00000000;
                    uVar12 = {vVar6 - vVar3};
                    if ((VMAG( uVar12 )) < fVar20)
                    {
                        fVar20 = VMAG( uVar12 );
                    }
                }
                if (fVar20 < (0.03950000 * 3.00000000))
                {
                    sub_54732( 15 );
                }
            }
        }
    }
    return;
}

int sub_67518(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (DOES_OBJECT_EXIST( (uParam0^) ))
    {
        GET_OBJECT_COORDINATES( (uParam0^), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (sub_18576( uVar3, l_U687 ))
        {
            if (DOES_OBJECT_EXIST( l_U285._fU24 ))
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U285._fU24, 0.00000000, 0.00000000, 0.89200000, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            }
            if (uVar3._fU8 < uVar6._fU8)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_68663(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;

    if (l_U72)
    {
        if (NOT (DOES_OBJECT_EXIST( (uParam1^) )))
        {
            if (NOT (IS_CHAR_INJURED( iParam0 )))
            {
                GET_CHAR_COORDINATES( iParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                CREATE_OBJECT( -167968024, uVar4._fU0, uVar4._fU4, uVar4._fU8 - 3.00000000, uParam1, 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( (uParam1^), l_U199 );
            }
        }
        else if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            if (NOT (IS_OBJECT_ATTACHED( (uParam1^) )))
            {
                ATTACH_OBJECT_TO_PED( (uParam1^), iParam0, 1232, l_U358, l_U361, 0 );
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_33473( iParam0 ) ))
            {
                fVar7 = sub_68897( iParam0, "MINI_POOL", sub_33473( iParam0 ) );
                if ((l_U75) AND (iParam0 == sub_2459()))
                {
                    PRINTSTRING( "PLAYER PLAYING ANIM - SHORT_SHOT_START - time = " );
                    PRINTFLOAT( fVar7 );
                    PRINTSTRING( "\n" );
                }
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL" ))
                {
                    if (fVar7 > 0.99990000)
                    {
                        fVar7 = 0.99990000;
                    }
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL", fVar7 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_38719( iParam0 ) ))
            {
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL" ))
                {
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL", 0.99990000 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if ((IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_38554( iParam0 ) )) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_38719( iParam0 ) ))))
            {
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL" ))
                {
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL", 0.99990000 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_SHORT_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_51297( iParam0 ) ))
            {
                fVar7 = sub_68897( iParam0, "MINI_POOL", sub_51297( iParam0 ) );
                if ((l_U75) AND (iParam0 == sub_2459()))
                {
                    PRINTSTRING( "PLAYER PLAYING ANIM - SHORT_SHOT_END - time = " );
                    PRINTFLOAT( fVar7 );
                    PRINTSTRING( "\n" );
                }
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_SHORT_OUT", "MINI_POOL" ))
                {
                    fVar7 += 0.30000000;
                    if (fVar7 > 0.99990000)
                    {
                        fVar7 = 0.99990000;
                    }
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_SHORT_OUT", "MINI_POOL", fVar7 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_SHORT_OUT", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_SHORT_OUT", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_33601( iParam0 ) ))
            {
                fVar7 = sub_68897( iParam0, "MINI_POOL", sub_33601( iParam0 ) );
                if ((l_U75) AND (iParam0 == sub_2459()))
                {
                    PRINTSTRING( "PLAYER PLAYING ANIM - MED_SHOT_START - time = " );
                    PRINTFLOAT( fVar7 );
                    PRINTSTRING( "\n" );
                }
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_MED_IN", "MINI_POOL" ))
                {
                    if (fVar7 > 0.99990000)
                    {
                        fVar7 = 0.99990000;
                    }
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_MED_IN", "MINI_POOL", fVar7 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_MED_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_MED_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39092( iParam0 ) ))
            {
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_MED_IN", "MINI_POOL" ))
                {
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_MED_IN", "MINI_POOL", 0.99990000 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_MED_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_MED_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if ((IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_38931( iParam0 ) )) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39092( iParam0 ) ))))
            {
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_MED_IN", "MINI_POOL" ))
                {
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_MED_IN", "MINI_POOL", 0.99990000 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_MED_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_MED_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_51421( iParam0 ) ))
            {
                fVar7 = sub_68897( iParam0, "MINI_POOL", sub_51421( iParam0 ) );
                if ((l_U75) AND (iParam0 == sub_2459()))
                {
                    PRINTSTRING( "PLAYER PLAYING ANIM - MED_SHOT_END - time = " );
                    PRINTFLOAT( fVar7 );
                    PRINTSTRING( "\n" );
                }
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_MED_OUT", "MINI_POOL" ))
                {
                    fVar7 += 0.30000000;
                    if (fVar7 > 0.99990000)
                    {
                        fVar7 = 0.99990000;
                    }
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_MED_OUT", "MINI_POOL", fVar7 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_MED_OUT", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_MED_OUT", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_33725( iParam0 ) ))
            {
                fVar7 = sub_68897( iParam0, "MINI_POOL", sub_33725( iParam0 ) );
                if ((l_U75) AND (iParam0 == sub_2459()))
                {
                    PRINTSTRING( "PLAYER PLAYING ANIM - LONG_SHOT_START - time = " );
                    PRINTFLOAT( fVar7 );
                    PRINTSTRING( "\n" );
                }
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_LONG_IN", "MINI_POOL" ))
                {
                    if (fVar7 > 0.99990000)
                    {
                        fVar7 = 0.99990000;
                    }
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_LONG_IN", "MINI_POOL", fVar7 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_LONG_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_LONG_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39463( iParam0 ) ))
            {
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_LONG_IN", "MINI_POOL" ))
                {
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_LONG_IN", "MINI_POOL", 0.99990000 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_LONG_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_LONG_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if ((IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39300( iParam0 ) )) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39463( iParam0 ) ))))
            {
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_LONG_IN", "MINI_POOL" ))
                {
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_LONG_IN", "MINI_POOL", 0.99990000 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_LONG_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_LONG_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_51541( iParam0 ) ))
            {
                fVar7 = sub_68897( iParam0, "MINI_POOL", sub_51541( iParam0 ) );
                if ((l_U75) AND (iParam0 == sub_2459()))
                {
                    PRINTSTRING( "PLAYER PLAYING ANIM - LONG_SHOT_END - time = " );
                    PRINTFLOAT( fVar7 );
                    PRINTSTRING( "\n" );
                }
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_LONG_OUT", "MINI_POOL" ))
                {
                    fVar7 += 0.30000000;
                    if (fVar7 > 0.99990000)
                    {
                        fVar7 = 0.99990000;
                    }
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_LONG_OUT", "MINI_POOL", fVar7 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_LONG_OUT", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_LONG_OUT", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_33851( iParam0 ) ))
            {
                fVar7 = sub_68897( iParam0, "MINI_POOL", sub_33851( iParam0 ) );
                if ((l_U75) AND (iParam0 == sub_2459()))
                {
                    PRINTSTRING( "PLAYER PLAYING ANIM - XLONG_SHOT_START - time = " );
                    PRINTFLOAT( fVar7 );
                    PRINTSTRING( "\n" );
                }
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL" ))
                {
                    if (fVar7 > 0.99990000)
                    {
                        fVar7 = 0.99990000;
                    }
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL", fVar7 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39838( iParam0 ) ))
            {
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL" ))
                {
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL", 0.99990000 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if ((IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39673( iParam0 ) )) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39673( iParam0 ) ))))
            {
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL" ))
                {
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL", 0.99990000 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_XLONG_IN", "MINI_POOL", 0.00000000 );
                }
            }
            if (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_51663( iParam0 ) ))
            {
                fVar7 = sub_68897( iParam0, "MINI_POOL", sub_51663( iParam0 ) );
                if ((l_U75) AND (iParam0 == sub_2459()))
                {
                    PRINTSTRING( "PLAYER PLAYING ANIM - XLONG_SHOT_END - time = " );
                    PRINTFLOAT( fVar7 );
                    PRINTSTRING( "\n" );
                }
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_XLONG_OUT", "MINI_POOL" ))
                {
                    fVar7 += 0.30000000;
                    if (fVar7 > 0.99990000)
                    {
                        fVar7 = 0.99990000;
                    }
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_XLONG_OUT", "MINI_POOL", fVar7 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_XLONG_OUT", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_XLONG_OUT", "MINI_POOL", 0.00000000 );
                }
            }
            if (((((((((((((((((IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", "IDLE" )) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_33851( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39838( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39673( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_51663( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_33725( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39463( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39300( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_51541( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_33601( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_39092( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_38931( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_51421( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_33473( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_38719( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_38554( iParam0 ) )))) AND (NOT (IS_CHAR_PLAYING_ANIM( iParam0, "MINI_POOL", sub_51297( iParam0 ) ))))
            {
                fVar7 = sub_68897( iParam0, "MINI_POOL", "IDLE" );
                if ((l_U75) AND (iParam0 == sub_2459()))
                {
                    PRINTSTRING( "PLAYER PLAYING ANIM - IDLE - time = " );
                    PRINTFLOAT( fVar7 );
                    PRINTSTRING( "\n" );
                }
                if (IS_OBJECT_PLAYING_ANIM( (uParam1^), "OBJ_IDLE", "MINI_POOL" ))
                {
                    if (fVar7 > 0.99990000)
                    {
                        fVar7 = 0.99990000;
                    }
                    SET_OBJECT_ANIM_CURRENT_TIME( (uParam1^), "OBJ_IDLE", "MINI_POOL", fVar7 );
                }
                else if (PLAY_OBJECT_ANIM( (uParam1^), "OBJ_IDLE", "MINI_POOL", 1000.00000000, 0, 1 ))
                {
                    SET_OBJECT_ANIM_SPEED( (uParam1^), "OBJ_IDLE", "MINI_POOL", 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_68897(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    GET_CHAR_ANIM_CURRENT_TIME( uParam0, uParam1, uParam2, ref Result );
    return Result;
}
