void main()
{
    int iVar2;
    int iVar3;
    boolean bVar4;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    iVar2 = GET_CURRENT_DAY_OF_WEEK();
    iVar3 = GET_CURRENT_DAY_OF_WEEK();
    bVar4 = false;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            sub_84( g_U1458 );
        }
        iVar2 = GET_CURRENT_DAY_OF_WEEK();
        if (iVar2 != iVar3)
        {
            sub_10436();
            iVar3 = iVar2;
        }
        if ((GET_MINUTES_OF_DAY() mod 20) == 0)
        {
            if (NOT bVar4)
            {
                sub_10588();
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

void sub_84(unknown uParam0)
{
    CLEAR_NEWS_SCROLLBAR();
    switch (uParam0)
    {
        case 2:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Jingoism Act Renewed - New security measures ushered in...      Worse Things Happening At Sea - Body found in Humboldt...      Hike in Taxi Prices - A fare to remember...      " );
        break;
        case 3:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Can One Manny Make A Difference? - South Bohan community leader pushing for change...      A Full House Against Online Poker? - Bill is moved to the floor for debate...      " );
        break;
        case 4:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Identity Theft - You're to blame...      " );
        break;
        case 5:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Mobile Meth Lab Discovered - This may indicate epidemic...      Broker Bridge Incident - Activists get response from LCPD...      " );
        break;
        case 6:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Crime Rise - Police deny link to their jobs...      Bridges Remain Closed - No end in sight...      " );
        break;
        case 7:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Club Kid Death... Closing time for one clubber... Mysterious murder of good-time guy...      Exploitation… Sweatshops in LC?... Workers disgruntled...      " );
        break;
        case 8:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Deputy Mayor Attacks Gays - Dawkins won't take it lying down...      Deputy Commissioner Aims For Top Job - Francis Mcreary tipped as front running candidate...      Seized Labs Run By Cops - Meth-od policing?...      " );
        break;
        case 9:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Dawkins Swallows Words - Bryce Dawkins has big gay problem...      " );
        break;
        case 10:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Serial Killer On Loose - City encouraged to panic...      Liberty City No.1 for Pizza, Terrorism...      " );
        break;
        case 11:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Explosion In Bohan Linked To Terror Cell? - Police are baffled...      Hold The Call - Cheap phones flood market...      " );
        break;
        case 12:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Murder In Broker - Life's a beach?...      Swingers Strike - They've got the bats, but have they got the balls?...      Change In Crime - A host of new stereotypes ripe for parody...      " );
        break;
        case 13:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Biker Gang Chaos - Motor-cycle of violence continues...      " );
        break;
        case 14:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Nameless Killer Strikes Again - Will nothing stop what's-his-face?...      Mayor Under Pressure To Reopen Bridges - General public having opinions again...      " );
        break;
        case 15:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Finally it's a city again - Alderney still locked out...     Weazel Calls Ochoa Reckless - 'Mayor plays terror roulette with your safety'...     BAWSAQ 100 Closes Up 12 Points - 9 out of 10 people have no idea what the hell that means...      " );
        break;
        case 16:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Race to the death - Dangerous driving still cool...      Hate Crimes in the Park - Suspected gay basher in Middle Park...     Same sex marriage debate flames up in Congress - Should gay couples have the right to eventually get divorced?...     " );
        break;
        case 17:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Arson Spate in Broker - Where there's smoke, there's crime...     Hell For Leather - More biker gang violence on the streets of LC...     Weazel reports 'Day of Frenzy' as markets crash - More incomprehensible bad news...     " );
        break;
        case 18:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Making A Meal Of Justice - Feared criminal does a deal to turn in mob bosses...      Tony Prince asks for night time leniency - Club owner bemoans loss of LC Nightlife...     " );
        break;
        case 19:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Death At The Diner - Yet another brutal murder in Hove Beach...     Clone Med Erection Shocker - Shipment intercepted at docks...     Weazel reaction - 'N.O.O.S.E gets hard on innocent smuggling'...     " );
        break;
        case 20:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Street racing no longer just for streets - Danger in the skies above LC...     A Cut Above? - The science behind the razor that pushed shaving to the limit...     Weazel increase market panic - 'Financial Chaos as BAWSDAQ vibrates'...     " );
        break;
        case 21:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Algonquin Attorney Murder - LCPD vow to 'Kinda look into it, I guess'...     This time it's legs not heads! - Are shoulders, knees and toes next?...     Biker lawlessness continues - The Lost causing more trouble on LC's streets...     " );
        break;
        case 22:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Video Game violence becomes real - Argument over video games leads to murder...     Angry newborn murders father - Tantrum goes too far?...     Libertonian Excitement At Generous Donation - Lyle Cleethorpes' philanthropy continues...     " );
        break;
        case 23:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Death and Destruction at Construction Site - Several union workers dead...     Weazel Reaction Angers Unions - 'Corruption still rife in Construction'...     No more dead trees for Liberty Tree? - The future of online news...     " );
        break;
        case 24:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Pirates on the Open Rails... Subway Car Stolen... Authorities Await Ransom Demands...     Lawton promises action!... Sitting Duck Quacks... President Sets up Task Force...     Tired of Terror… Fear Fatigue… Citizens Speak Out Against Age of Paranoia." );
        break;
        case 25:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Guts strewn all over Fishmarket - Bodies found at docks...     Serial killer leaves note but no clues - Police remain baffled...     Weazel reports copunterfeit bills as - 'Fake currency a new terrorist enemy'...     " );
        break;
        case 26:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Russian dead in chopper accident - FIB investigating...     Jefferson To Address Gang Crime -Bobby Jefferson is to visit Liberty City as part of a Federal crack down on organized crime...     Weazel defends senator as - 'Another victim of 'wide stance''." );
        break;
        case 27:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Heist Ends in Death Blood Shocker - More than half a million dollars taken...     Arms Dealer Granted Entry Not… so Sickie Frickie…     Monsters Under MyBed?... MyRoom is full of predators...     " );
        break;
        case 28:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Alderney to Algonquin crossings open at last - LC awaits tacky invasion...     Weazel asks - 'Have the bad guys won their first battle?'...     Eris CEO Pete vassal in steroid shock - Another celebrity enters rehab...     " );
        break;
        case 29:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Fuel Depot Terror - Foreigners to blame?...     McTony Sues Over Napoleonic Slur - Little man, big temper...     Weazel cite more terrorist activity - 'Ochoa Ignores Weazel Warnings'...     " );
        break;
        case 30:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Oh Mamma!... Mafia Shootout in Algonquin Nightspot... Subway Shock as Air Guitar Man Mauled... The Rule of the Mob...     Reality Star... Howitzer to the face... Star's Desperate Scrape for Ratings...     " );
        break;
        case 31:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Rampage Owner Killed in Tower... Ashvilli's Private Army Wiped Out... Police Seek Extreme Sports Enthusiast...     The Recession is Not Over... President's Claims Jar with Facts...     " );
        break;
        case 32:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Deputy Police Commissioner Murdered - LCPD vows to find killer...     BAWSDAQ skyrockets 5 points on rising Colombian exports 2 - How will this affect wealthy?...     Boy trapped for six years in flat pack hell - Parents offered 20% discount card" );
        break;
        case 33:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Blasts Rock City… Is Nothing Safe?... Three Explosions Shake Illusion of Security...     NO RAMPAGE!... Ashvilli Denies Sale Speculation...     Dirty Dentist... Dentists need more regulation...     " );
        break;
        case 34:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Majestic Massacre - Diamond Dealer Dead...     Public Liberty Online questions Video Game Killing - 'Games Causing Serious Elf Problems'...     " );
        break;
        case 35:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Body of escaped convict found - Abducted and Murdered?...     Video Gamers Fire Blanks - Suspicions confirmed...     Weazel stir up more trouble - 'More problems with East European immigrants'...     " );
        break;
        case 36:
        ADD_STRING_TO_NEWS_SCROLLBAR( "300 Year Itch - Torres Sentenced...     Aisle Have Some of That! - Is romance dead?...     Public Liberty Online prompts new eugenics row - 'Morons Still Outbreeding Inteligensia 6-1'...     " );
        break;
        case 37:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Greenbacks Turning Red? - N.O.O.S.E investigation deepens...     Go Fuck Yourself? - Now you can!...     Weazel call couterfeit bills - 'An Act of War'...     " );
        break;
        case 38:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Helicopter battle in the skies - First in LC history!...     Oil terror massacre - Police looking for man with an accent...     Clone sex not OK say police - Really, really NOT ok...     " );
        break;
        case 39:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Rotterdam Rocked... Mysterious Explosions on the Standing Erection... NOOSE Shady on Incident Details...     Unwashed Hipster Bathed in Blood... Class Tensions Rise as Wrong Area Invaded...     " );
        break;
        case 40:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Serial Killer Strikes Again - Cops still baffled as to what to do...     Kerry McIntosh demands refund from rehab - Star arrested for DUI and possession...     Weazel insist - 'Illegals overwhelming America'...     " );
        break;
        case 41:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Hospital Hell - Witness Assassinated...     Half-hearted apology from half-cut pilot - The pilot who endagered passengers lives while drunk in the air, has apologised for his behaviour...     Traffic worse than ever. Should we re-close the bridges? - Ope" );
        break;
        case 42:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Jefferson's Convoy Ambushed - Foreign Criminal Gang suspected...     Don't turn us into a strip mall, says Prince - Club owner appeals for Vice...     Sneaker giant puts his foot down - Accusations of child labour continue...     " );
        break;
        case 43:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Wedding Becomes a Wake - Groom murdered at the alter...     Internet Kills Man - Kitchen of the future?...     Ecstasy generation still nervously awaiting backlash - Memories blurry, nerves twitchy...     " );
        break;
        case 44:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Wedding Becomes a Wake - Wedding guest murdered at ceremony...   Internet Kills Man - Kitchen of the future?...     Ecstasy generation still nervously awaiting backlash - Memories blurry, nerves twitchy...     " );
        break;
        case 45:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Bryce Dawkins Gay Shocker - Deputy Mayor taking it hard...     Mob boss Pegorino found dead - Police cite suspicious circumstances. Duh....     Ecstasy generation still nervously awaiting backlash - Memories blurry, nerves twitchy...     " );
        break;
        case 46:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Bryce Dawkins Gay Shocker - Deputy Mayor taking it hard...     Backdoor blowhole goes boom - Internet to blame, obviously...     Immigrant dead at Happiness Island - The latest in a string of ironic crimes...     " );
        break;
        case 47:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Yacht Explodes... Controversial Businessman Killed...     Bobby Blue sends Blue Bleets... Bobby Blue accidently sends graphic Bleet update to 500,000 fans...     Recession... What Recession?... Recession is dumb liberal lies and depression...     " );
        break;
        case 48:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Mob boss dies in hospital before he can go to trial - What will this mean for organized crime in LC?...     Bum Hits Jackpot - Finds diamonds sleeping rough...     " );
        break;
        default:
        ADD_STRING_TO_NEWS_SCROLLBAR( "Bomb dot-com? - Bridges are closed in the wake of internet threat...     Jingoism Act Renewed - Flag burning now outlawed and wiretapping totally cool...     Can One Manny Make a Difference? - South Bohan community leader pushing for change...   " );
        break;
    }
    return;
}

void sub_10436()
{
    int I;
    int iVar3;

    for ( I = 1; I <= (g_U1459 - 1); I++ )
    {
        if (IS_BIT_SET( g_U1459[I], 21 ))
        {
            iVar3 = GET_BITS_IN_RANGE( g_U1459[I], 0, 8 );
            if (iVar3 < 63)
            {
                iVar3++;
            }
            SET_BITS_IN_RANGE( ref g_U1459[I], 0, 8, iVar3 );
        }
    }
    return;
}

void sub_10588()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;

    iVar7 = g_U1458;
    for ( I = 1; I <= (g_U1459 - 1); I++ )
    {
        if (IS_BIT_SET( g_U1459[I], 20 ))
        {
            sub_10654( g_U1459[I], ref uVar3 );
            if (sub_10746( uVar3 ))
            {
                CLEAR_BIT( ref g_U1459[I], 20 );
                SET_BIT( ref g_U1459[I], 21 );
                SET_BITS_IN_RANGE( ref g_U1459[I], 0, 8, 0 );
                sub_11105( "\n ------------------------------------------------------" );
                sub_11180( "\n  The following news block is now active NEWS_BLOCK_", I );
                sub_11105( "\n ------------------------------------------------------" );
                g_U1458 = I;
            }
        }
    }
    if (g_U1458 != iVar7)
    {
        sub_84( g_U1458 );
    }
    return;
}

void sub_10654(unknown uParam0, int iParam1)
{
    ref iParam1->_fU0->_fU0 = GET_BITS_IN_RANGE( uParam0, 0, 4 );
    ref iParam1->_fU0->_fU4 = GET_BITS_IN_RANGE( uParam0, 5, 8 );
    ref iParam1->_fU8->_fU0 = GET_BITS_IN_RANGE( uParam0, 9, 13 );
    ref iParam1->_fU8->_fU4 = GET_BITS_IN_RANGE( uParam0, 14, 19 );
    return;
}

int sub_10746(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_10915( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_10915(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_11105(unknown uParam0)
{
    return;
}

void sub_11180(unknown uParam0, unknown uParam1)
{
    return;
}
