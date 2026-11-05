#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00251458
// Address: 0x251458 - 0x251c30
void sub_00251458_0x251458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251458_0x251458");
#endif

    switch (ctx->pc) {
        case 0x251458u: goto label_251458;
        case 0x25145cu: goto label_25145c;
        case 0x251460u: goto label_251460;
        case 0x251464u: goto label_251464;
        case 0x251468u: goto label_251468;
        case 0x25146cu: goto label_25146c;
        case 0x251470u: goto label_251470;
        case 0x251474u: goto label_251474;
        case 0x251478u: goto label_251478;
        case 0x25147cu: goto label_25147c;
        case 0x251480u: goto label_251480;
        case 0x251484u: goto label_251484;
        case 0x251488u: goto label_251488;
        case 0x25148cu: goto label_25148c;
        case 0x251490u: goto label_251490;
        case 0x251494u: goto label_251494;
        case 0x251498u: goto label_251498;
        case 0x25149cu: goto label_25149c;
        case 0x2514a0u: goto label_2514a0;
        case 0x2514a4u: goto label_2514a4;
        case 0x2514a8u: goto label_2514a8;
        case 0x2514acu: goto label_2514ac;
        case 0x2514b0u: goto label_2514b0;
        case 0x2514b4u: goto label_2514b4;
        case 0x2514b8u: goto label_2514b8;
        case 0x2514bcu: goto label_2514bc;
        case 0x2514c0u: goto label_2514c0;
        case 0x2514c4u: goto label_2514c4;
        case 0x2514c8u: goto label_2514c8;
        case 0x2514ccu: goto label_2514cc;
        case 0x2514d0u: goto label_2514d0;
        case 0x2514d4u: goto label_2514d4;
        case 0x2514d8u: goto label_2514d8;
        case 0x2514dcu: goto label_2514dc;
        case 0x2514e0u: goto label_2514e0;
        case 0x2514e4u: goto label_2514e4;
        case 0x2514e8u: goto label_2514e8;
        case 0x2514ecu: goto label_2514ec;
        case 0x2514f0u: goto label_2514f0;
        case 0x2514f4u: goto label_2514f4;
        case 0x2514f8u: goto label_2514f8;
        case 0x2514fcu: goto label_2514fc;
        case 0x251500u: goto label_251500;
        case 0x251504u: goto label_251504;
        case 0x251508u: goto label_251508;
        case 0x25150cu: goto label_25150c;
        case 0x251510u: goto label_251510;
        case 0x251514u: goto label_251514;
        case 0x251518u: goto label_251518;
        case 0x25151cu: goto label_25151c;
        case 0x251520u: goto label_251520;
        case 0x251524u: goto label_251524;
        case 0x251528u: goto label_251528;
        case 0x25152cu: goto label_25152c;
        case 0x251530u: goto label_251530;
        case 0x251534u: goto label_251534;
        case 0x251538u: goto label_251538;
        case 0x25153cu: goto label_25153c;
        case 0x251540u: goto label_251540;
        case 0x251544u: goto label_251544;
        case 0x251548u: goto label_251548;
        case 0x25154cu: goto label_25154c;
        case 0x251550u: goto label_251550;
        case 0x251554u: goto label_251554;
        case 0x251558u: goto label_251558;
        case 0x25155cu: goto label_25155c;
        case 0x251560u: goto label_251560;
        case 0x251564u: goto label_251564;
        case 0x251568u: goto label_251568;
        case 0x25156cu: goto label_25156c;
        case 0x251570u: goto label_251570;
        case 0x251574u: goto label_251574;
        case 0x251578u: goto label_251578;
        case 0x25157cu: goto label_25157c;
        case 0x251580u: goto label_251580;
        case 0x251584u: goto label_251584;
        case 0x251588u: goto label_251588;
        case 0x25158cu: goto label_25158c;
        case 0x251590u: goto label_251590;
        case 0x251594u: goto label_251594;
        case 0x251598u: goto label_251598;
        case 0x25159cu: goto label_25159c;
        case 0x2515a0u: goto label_2515a0;
        case 0x2515a4u: goto label_2515a4;
        case 0x2515a8u: goto label_2515a8;
        case 0x2515acu: goto label_2515ac;
        case 0x2515b0u: goto label_2515b0;
        case 0x2515b4u: goto label_2515b4;
        case 0x2515b8u: goto label_2515b8;
        case 0x2515bcu: goto label_2515bc;
        case 0x2515c0u: goto label_2515c0;
        case 0x2515c4u: goto label_2515c4;
        case 0x2515c8u: goto label_2515c8;
        case 0x2515ccu: goto label_2515cc;
        case 0x2515d0u: goto label_2515d0;
        case 0x2515d4u: goto label_2515d4;
        case 0x2515d8u: goto label_2515d8;
        case 0x2515dcu: goto label_2515dc;
        case 0x2515e0u: goto label_2515e0;
        case 0x2515e4u: goto label_2515e4;
        case 0x2515e8u: goto label_2515e8;
        case 0x2515ecu: goto label_2515ec;
        case 0x2515f0u: goto label_2515f0;
        case 0x2515f4u: goto label_2515f4;
        case 0x2515f8u: goto label_2515f8;
        case 0x2515fcu: goto label_2515fc;
        case 0x251600u: goto label_251600;
        case 0x251604u: goto label_251604;
        case 0x251608u: goto label_251608;
        case 0x25160cu: goto label_25160c;
        case 0x251610u: goto label_251610;
        case 0x251614u: goto label_251614;
        case 0x251618u: goto label_251618;
        case 0x25161cu: goto label_25161c;
        case 0x251620u: goto label_251620;
        case 0x251624u: goto label_251624;
        case 0x251628u: goto label_251628;
        case 0x25162cu: goto label_25162c;
        case 0x251630u: goto label_251630;
        case 0x251634u: goto label_251634;
        case 0x251638u: goto label_251638;
        case 0x25163cu: goto label_25163c;
        case 0x251640u: goto label_251640;
        case 0x251644u: goto label_251644;
        case 0x251648u: goto label_251648;
        case 0x25164cu: goto label_25164c;
        case 0x251650u: goto label_251650;
        case 0x251654u: goto label_251654;
        case 0x251658u: goto label_251658;
        case 0x25165cu: goto label_25165c;
        case 0x251660u: goto label_251660;
        case 0x251664u: goto label_251664;
        case 0x251668u: goto label_251668;
        case 0x25166cu: goto label_25166c;
        case 0x251670u: goto label_251670;
        case 0x251674u: goto label_251674;
        case 0x251678u: goto label_251678;
        case 0x25167cu: goto label_25167c;
        case 0x251680u: goto label_251680;
        case 0x251684u: goto label_251684;
        case 0x251688u: goto label_251688;
        case 0x25168cu: goto label_25168c;
        case 0x251690u: goto label_251690;
        case 0x251694u: goto label_251694;
        case 0x251698u: goto label_251698;
        case 0x25169cu: goto label_25169c;
        case 0x2516a0u: goto label_2516a0;
        case 0x2516a4u: goto label_2516a4;
        case 0x2516a8u: goto label_2516a8;
        case 0x2516acu: goto label_2516ac;
        case 0x2516b0u: goto label_2516b0;
        case 0x2516b4u: goto label_2516b4;
        case 0x2516b8u: goto label_2516b8;
        case 0x2516bcu: goto label_2516bc;
        case 0x2516c0u: goto label_2516c0;
        case 0x2516c4u: goto label_2516c4;
        case 0x2516c8u: goto label_2516c8;
        case 0x2516ccu: goto label_2516cc;
        case 0x2516d0u: goto label_2516d0;
        case 0x2516d4u: goto label_2516d4;
        case 0x2516d8u: goto label_2516d8;
        case 0x2516dcu: goto label_2516dc;
        case 0x2516e0u: goto label_2516e0;
        case 0x2516e4u: goto label_2516e4;
        case 0x2516e8u: goto label_2516e8;
        case 0x2516ecu: goto label_2516ec;
        case 0x2516f0u: goto label_2516f0;
        case 0x2516f4u: goto label_2516f4;
        case 0x2516f8u: goto label_2516f8;
        case 0x2516fcu: goto label_2516fc;
        case 0x251700u: goto label_251700;
        case 0x251704u: goto label_251704;
        case 0x251708u: goto label_251708;
        case 0x25170cu: goto label_25170c;
        case 0x251710u: goto label_251710;
        case 0x251714u: goto label_251714;
        case 0x251718u: goto label_251718;
        case 0x25171cu: goto label_25171c;
        case 0x251720u: goto label_251720;
        case 0x251724u: goto label_251724;
        case 0x251728u: goto label_251728;
        case 0x25172cu: goto label_25172c;
        case 0x251730u: goto label_251730;
        case 0x251734u: goto label_251734;
        case 0x251738u: goto label_251738;
        case 0x25173cu: goto label_25173c;
        case 0x251740u: goto label_251740;
        case 0x251744u: goto label_251744;
        case 0x251748u: goto label_251748;
        case 0x25174cu: goto label_25174c;
        case 0x251750u: goto label_251750;
        case 0x251754u: goto label_251754;
        case 0x251758u: goto label_251758;
        case 0x25175cu: goto label_25175c;
        case 0x251760u: goto label_251760;
        case 0x251764u: goto label_251764;
        case 0x251768u: goto label_251768;
        case 0x25176cu: goto label_25176c;
        case 0x251770u: goto label_251770;
        case 0x251774u: goto label_251774;
        case 0x251778u: goto label_251778;
        case 0x25177cu: goto label_25177c;
        case 0x251780u: goto label_251780;
        case 0x251784u: goto label_251784;
        case 0x251788u: goto label_251788;
        case 0x25178cu: goto label_25178c;
        case 0x251790u: goto label_251790;
        case 0x251794u: goto label_251794;
        case 0x251798u: goto label_251798;
        case 0x25179cu: goto label_25179c;
        case 0x2517a0u: goto label_2517a0;
        case 0x2517a4u: goto label_2517a4;
        case 0x2517a8u: goto label_2517a8;
        case 0x2517acu: goto label_2517ac;
        case 0x2517b0u: goto label_2517b0;
        case 0x2517b4u: goto label_2517b4;
        case 0x2517b8u: goto label_2517b8;
        case 0x2517bcu: goto label_2517bc;
        case 0x2517c0u: goto label_2517c0;
        case 0x2517c4u: goto label_2517c4;
        case 0x2517c8u: goto label_2517c8;
        case 0x2517ccu: goto label_2517cc;
        case 0x2517d0u: goto label_2517d0;
        case 0x2517d4u: goto label_2517d4;
        case 0x2517d8u: goto label_2517d8;
        case 0x2517dcu: goto label_2517dc;
        case 0x2517e0u: goto label_2517e0;
        case 0x2517e4u: goto label_2517e4;
        case 0x2517e8u: goto label_2517e8;
        case 0x2517ecu: goto label_2517ec;
        case 0x2517f0u: goto label_2517f0;
        case 0x2517f4u: goto label_2517f4;
        case 0x2517f8u: goto label_2517f8;
        case 0x2517fcu: goto label_2517fc;
        case 0x251800u: goto label_251800;
        case 0x251804u: goto label_251804;
        case 0x251808u: goto label_251808;
        case 0x25180cu: goto label_25180c;
        case 0x251810u: goto label_251810;
        case 0x251814u: goto label_251814;
        case 0x251818u: goto label_251818;
        case 0x25181cu: goto label_25181c;
        case 0x251820u: goto label_251820;
        case 0x251824u: goto label_251824;
        case 0x251828u: goto label_251828;
        case 0x25182cu: goto label_25182c;
        case 0x251830u: goto label_251830;
        case 0x251834u: goto label_251834;
        case 0x251838u: goto label_251838;
        case 0x25183cu: goto label_25183c;
        case 0x251840u: goto label_251840;
        case 0x251844u: goto label_251844;
        case 0x251848u: goto label_251848;
        case 0x25184cu: goto label_25184c;
        case 0x251850u: goto label_251850;
        case 0x251854u: goto label_251854;
        case 0x251858u: goto label_251858;
        case 0x25185cu: goto label_25185c;
        case 0x251860u: goto label_251860;
        case 0x251864u: goto label_251864;
        case 0x251868u: goto label_251868;
        case 0x25186cu: goto label_25186c;
        case 0x251870u: goto label_251870;
        case 0x251874u: goto label_251874;
        case 0x251878u: goto label_251878;
        case 0x25187cu: goto label_25187c;
        case 0x251880u: goto label_251880;
        case 0x251884u: goto label_251884;
        case 0x251888u: goto label_251888;
        case 0x25188cu: goto label_25188c;
        case 0x251890u: goto label_251890;
        case 0x251894u: goto label_251894;
        case 0x251898u: goto label_251898;
        case 0x25189cu: goto label_25189c;
        case 0x2518a0u: goto label_2518a0;
        case 0x2518a4u: goto label_2518a4;
        case 0x2518a8u: goto label_2518a8;
        case 0x2518acu: goto label_2518ac;
        case 0x2518b0u: goto label_2518b0;
        case 0x2518b4u: goto label_2518b4;
        case 0x2518b8u: goto label_2518b8;
        case 0x2518bcu: goto label_2518bc;
        case 0x2518c0u: goto label_2518c0;
        case 0x2518c4u: goto label_2518c4;
        case 0x2518c8u: goto label_2518c8;
        case 0x2518ccu: goto label_2518cc;
        case 0x2518d0u: goto label_2518d0;
        case 0x2518d4u: goto label_2518d4;
        case 0x2518d8u: goto label_2518d8;
        case 0x2518dcu: goto label_2518dc;
        case 0x2518e0u: goto label_2518e0;
        case 0x2518e4u: goto label_2518e4;
        case 0x2518e8u: goto label_2518e8;
        case 0x2518ecu: goto label_2518ec;
        case 0x2518f0u: goto label_2518f0;
        case 0x2518f4u: goto label_2518f4;
        case 0x2518f8u: goto label_2518f8;
        case 0x2518fcu: goto label_2518fc;
        case 0x251900u: goto label_251900;
        case 0x251904u: goto label_251904;
        case 0x251908u: goto label_251908;
        case 0x25190cu: goto label_25190c;
        case 0x251910u: goto label_251910;
        case 0x251914u: goto label_251914;
        case 0x251918u: goto label_251918;
        case 0x25191cu: goto label_25191c;
        case 0x251920u: goto label_251920;
        case 0x251924u: goto label_251924;
        case 0x251928u: goto label_251928;
        case 0x25192cu: goto label_25192c;
        case 0x251930u: goto label_251930;
        case 0x251934u: goto label_251934;
        case 0x251938u: goto label_251938;
        case 0x25193cu: goto label_25193c;
        case 0x251940u: goto label_251940;
        case 0x251944u: goto label_251944;
        case 0x251948u: goto label_251948;
        case 0x25194cu: goto label_25194c;
        case 0x251950u: goto label_251950;
        case 0x251954u: goto label_251954;
        case 0x251958u: goto label_251958;
        case 0x25195cu: goto label_25195c;
        case 0x251960u: goto label_251960;
        case 0x251964u: goto label_251964;
        case 0x251968u: goto label_251968;
        case 0x25196cu: goto label_25196c;
        case 0x251970u: goto label_251970;
        case 0x251974u: goto label_251974;
        case 0x251978u: goto label_251978;
        case 0x25197cu: goto label_25197c;
        case 0x251980u: goto label_251980;
        case 0x251984u: goto label_251984;
        case 0x251988u: goto label_251988;
        case 0x25198cu: goto label_25198c;
        case 0x251990u: goto label_251990;
        case 0x251994u: goto label_251994;
        case 0x251998u: goto label_251998;
        case 0x25199cu: goto label_25199c;
        case 0x2519a0u: goto label_2519a0;
        case 0x2519a4u: goto label_2519a4;
        case 0x2519a8u: goto label_2519a8;
        case 0x2519acu: goto label_2519ac;
        case 0x2519b0u: goto label_2519b0;
        case 0x2519b4u: goto label_2519b4;
        case 0x2519b8u: goto label_2519b8;
        case 0x2519bcu: goto label_2519bc;
        case 0x2519c0u: goto label_2519c0;
        case 0x2519c4u: goto label_2519c4;
        case 0x2519c8u: goto label_2519c8;
        case 0x2519ccu: goto label_2519cc;
        case 0x2519d0u: goto label_2519d0;
        case 0x2519d4u: goto label_2519d4;
        case 0x2519d8u: goto label_2519d8;
        case 0x2519dcu: goto label_2519dc;
        case 0x2519e0u: goto label_2519e0;
        case 0x2519e4u: goto label_2519e4;
        case 0x2519e8u: goto label_2519e8;
        case 0x2519ecu: goto label_2519ec;
        case 0x2519f0u: goto label_2519f0;
        case 0x2519f4u: goto label_2519f4;
        case 0x2519f8u: goto label_2519f8;
        case 0x2519fcu: goto label_2519fc;
        case 0x251a00u: goto label_251a00;
        case 0x251a04u: goto label_251a04;
        case 0x251a08u: goto label_251a08;
        case 0x251a0cu: goto label_251a0c;
        case 0x251a10u: goto label_251a10;
        case 0x251a14u: goto label_251a14;
        case 0x251a18u: goto label_251a18;
        case 0x251a1cu: goto label_251a1c;
        case 0x251a20u: goto label_251a20;
        case 0x251a24u: goto label_251a24;
        case 0x251a28u: goto label_251a28;
        case 0x251a2cu: goto label_251a2c;
        case 0x251a30u: goto label_251a30;
        case 0x251a34u: goto label_251a34;
        case 0x251a38u: goto label_251a38;
        case 0x251a3cu: goto label_251a3c;
        case 0x251a40u: goto label_251a40;
        case 0x251a44u: goto label_251a44;
        case 0x251a48u: goto label_251a48;
        case 0x251a4cu: goto label_251a4c;
        case 0x251a50u: goto label_251a50;
        case 0x251a54u: goto label_251a54;
        case 0x251a58u: goto label_251a58;
        case 0x251a5cu: goto label_251a5c;
        case 0x251a60u: goto label_251a60;
        case 0x251a64u: goto label_251a64;
        case 0x251a68u: goto label_251a68;
        case 0x251a6cu: goto label_251a6c;
        case 0x251a70u: goto label_251a70;
        case 0x251a74u: goto label_251a74;
        case 0x251a78u: goto label_251a78;
        case 0x251a7cu: goto label_251a7c;
        case 0x251a80u: goto label_251a80;
        case 0x251a84u: goto label_251a84;
        case 0x251a88u: goto label_251a88;
        case 0x251a8cu: goto label_251a8c;
        case 0x251a90u: goto label_251a90;
        case 0x251a94u: goto label_251a94;
        case 0x251a98u: goto label_251a98;
        case 0x251a9cu: goto label_251a9c;
        case 0x251aa0u: goto label_251aa0;
        case 0x251aa4u: goto label_251aa4;
        case 0x251aa8u: goto label_251aa8;
        case 0x251aacu: goto label_251aac;
        case 0x251ab0u: goto label_251ab0;
        case 0x251ab4u: goto label_251ab4;
        case 0x251ab8u: goto label_251ab8;
        case 0x251abcu: goto label_251abc;
        case 0x251ac0u: goto label_251ac0;
        case 0x251ac4u: goto label_251ac4;
        case 0x251ac8u: goto label_251ac8;
        case 0x251accu: goto label_251acc;
        case 0x251ad0u: goto label_251ad0;
        case 0x251ad4u: goto label_251ad4;
        case 0x251ad8u: goto label_251ad8;
        case 0x251adcu: goto label_251adc;
        case 0x251ae0u: goto label_251ae0;
        case 0x251ae4u: goto label_251ae4;
        case 0x251ae8u: goto label_251ae8;
        case 0x251aecu: goto label_251aec;
        case 0x251af0u: goto label_251af0;
        case 0x251af4u: goto label_251af4;
        case 0x251af8u: goto label_251af8;
        case 0x251afcu: goto label_251afc;
        case 0x251b00u: goto label_251b00;
        case 0x251b04u: goto label_251b04;
        case 0x251b08u: goto label_251b08;
        case 0x251b0cu: goto label_251b0c;
        case 0x251b10u: goto label_251b10;
        case 0x251b14u: goto label_251b14;
        case 0x251b18u: goto label_251b18;
        case 0x251b1cu: goto label_251b1c;
        case 0x251b20u: goto label_251b20;
        case 0x251b24u: goto label_251b24;
        case 0x251b28u: goto label_251b28;
        case 0x251b2cu: goto label_251b2c;
        case 0x251b30u: goto label_251b30;
        case 0x251b34u: goto label_251b34;
        case 0x251b38u: goto label_251b38;
        case 0x251b3cu: goto label_251b3c;
        case 0x251b40u: goto label_251b40;
        case 0x251b44u: goto label_251b44;
        case 0x251b48u: goto label_251b48;
        case 0x251b4cu: goto label_251b4c;
        case 0x251b50u: goto label_251b50;
        case 0x251b54u: goto label_251b54;
        case 0x251b58u: goto label_251b58;
        case 0x251b5cu: goto label_251b5c;
        case 0x251b60u: goto label_251b60;
        case 0x251b64u: goto label_251b64;
        case 0x251b68u: goto label_251b68;
        case 0x251b6cu: goto label_251b6c;
        case 0x251b70u: goto label_251b70;
        case 0x251b74u: goto label_251b74;
        case 0x251b78u: goto label_251b78;
        case 0x251b7cu: goto label_251b7c;
        case 0x251b80u: goto label_251b80;
        case 0x251b84u: goto label_251b84;
        case 0x251b88u: goto label_251b88;
        case 0x251b8cu: goto label_251b8c;
        case 0x251b90u: goto label_251b90;
        case 0x251b94u: goto label_251b94;
        case 0x251b98u: goto label_251b98;
        case 0x251b9cu: goto label_251b9c;
        case 0x251ba0u: goto label_251ba0;
        case 0x251ba4u: goto label_251ba4;
        case 0x251ba8u: goto label_251ba8;
        case 0x251bacu: goto label_251bac;
        case 0x251bb0u: goto label_251bb0;
        case 0x251bb4u: goto label_251bb4;
        case 0x251bb8u: goto label_251bb8;
        case 0x251bbcu: goto label_251bbc;
        case 0x251bc0u: goto label_251bc0;
        case 0x251bc4u: goto label_251bc4;
        case 0x251bc8u: goto label_251bc8;
        case 0x251bccu: goto label_251bcc;
        case 0x251bd0u: goto label_251bd0;
        case 0x251bd4u: goto label_251bd4;
        case 0x251bd8u: goto label_251bd8;
        case 0x251bdcu: goto label_251bdc;
        case 0x251be0u: goto label_251be0;
        case 0x251be4u: goto label_251be4;
        case 0x251be8u: goto label_251be8;
        case 0x251becu: goto label_251bec;
        case 0x251bf0u: goto label_251bf0;
        case 0x251bf4u: goto label_251bf4;
        case 0x251bf8u: goto label_251bf8;
        case 0x251bfcu: goto label_251bfc;
        case 0x251c00u: goto label_251c00;
        case 0x251c04u: goto label_251c04;
        case 0x251c08u: goto label_251c08;
        case 0x251c0cu: goto label_251c0c;
        case 0x251c10u: goto label_251c10;
        case 0x251c14u: goto label_251c14;
        case 0x251c18u: goto label_251c18;
        case 0x251c1cu: goto label_251c1c;
        case 0x251c20u: goto label_251c20;
        case 0x251c24u: goto label_251c24;
        case 0x251c28u: goto label_251c28;
        case 0x251c2cu: goto label_251c2c;
        default: break;
    }

    ctx->pc = 0x251458u;

label_251458:
    // 0x251458: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x251458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_25145c:
    // 0x25145c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25145cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_251460:
    // 0x251460: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x251460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_251464:
    // 0x251464: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x251464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_251468:
    // 0x251468: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x251468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_25146c:
    // 0x25146c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25146cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_251470:
    // 0x251470: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x251470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_251474:
    // 0x251474: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x251474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_251478:
    // 0x251478: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25147c:
    if (ctx->pc == 0x25147Cu) {
        ctx->pc = 0x25147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251478u;
        // 0x25147c: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251480u;
        goto label_251480;
    }
    ctx->pc = 0x251478u;
    {
        const bool branch_taken_0x251478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251478u;
        // 0x25147c: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251478) {
            ctx->pc = 0x251498u;
            goto label_251498;
        }
    }
    ctx->pc = 0x251480u;
label_251480:
    // 0x251480: 0xc089650  jal         func_225940
label_251484:
    if (ctx->pc == 0x251484u) {
        ctx->pc = 0x251488u;
        goto label_251488;
    }
    ctx->pc = 0x251480u;
    SET_GPR_U32(ctx, 31, 0x251488u);
    ctx->pc = 0x225940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225940u, 0x251480u, 0x251488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251488u;
label_251488:
    // 0x251488: 0xc07138a  jal         func_1C4E28
label_25148c:
    if (ctx->pc == 0x25148Cu) {
        ctx->pc = 0x25148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251488u;
        // 0x25148c: 0x8e240ffc  lw          $a0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251490u;
        goto label_251490;
    }
    ctx->pc = 0x251488u;
    SET_GPR_U32(ctx, 31, 0x251490u);
    ctx->pc = 0x25148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251488u;
    // 0x25148c: 0x8e240ffc  lw          $a0, 0xFFC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E28u, 0x251488u, 0x251490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251490u;
label_251490:
    // 0x251490: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_251494:
    if (ctx->pc == 0x251494u) {
        ctx->pc = 0x251494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251490u;
        // 0x251494: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251498u;
        goto label_251498;
    }
    ctx->pc = 0x251490u;
    {
        const bool branch_taken_0x251490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251490u;
        // 0x251494: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251490) {
            ctx->pc = 0x251C1Cu;
            goto label_251c1c;
        }
    }
    ctx->pc = 0x251498u;
label_251498:
    // 0x251498: 0x8e221068  lw          $v0, 0x1068($s1)
    ctx->pc = 0x251498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4200)));
label_25149c:
    // 0x25149c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2514a0:
    if (ctx->pc == 0x2514A0u) {
        ctx->pc = 0x2514A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25149Cu;
        // 0x2514a0: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2514A4u;
        goto label_2514a4;
    }
    ctx->pc = 0x25149Cu;
    {
        const bool branch_taken_0x25149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25149c) {
            ctx->pc = 0x2514A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25149Cu;
            // 0x2514a0: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2514C8u;
            goto label_2514c8;
        }
    }
    ctx->pc = 0x2514A4u;
label_2514a4:
    // 0x2514a4: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2514a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_2514a8:
    // 0x2514a8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2514a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2514ac:
    // 0x2514ac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2514b0:
    if (ctx->pc == 0x2514B0u) {
        ctx->pc = 0x2514B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514ACu;
        // 0x2514b0: 0xae201068  sw          $zero, 0x1068($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2514B4u;
        goto label_2514b4;
    }
    ctx->pc = 0x2514ACu;
    {
        const bool branch_taken_0x2514ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2514ac) {
            ctx->pc = 0x2514B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2514ACu;
            // 0x2514b0: 0xae201068  sw          $zero, 0x1068($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2514C4u;
            goto label_2514c4;
        }
    }
    ctx->pc = 0x2514B4u;
label_2514b4:
    // 0x2514b4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2514b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2514b8:
    // 0x2514b8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2514bc:
    if (ctx->pc == 0x2514BCu) {
        ctx->pc = 0x2514BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514B8u;
        // 0x2514bc: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2514C0u;
        goto label_2514c0;
    }
    ctx->pc = 0x2514B8u;
    {
        const bool branch_taken_0x2514b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2514b8) {
            ctx->pc = 0x2514BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2514B8u;
            // 0x2514bc: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2514C8u;
            goto label_2514c8;
        }
    }
    ctx->pc = 0x2514C0u;
label_2514c0:
    // 0x2514c0: 0xae201068  sw          $zero, 0x1068($s1)
    ctx->pc = 0x2514c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4200), GPR_U32(ctx, 0));
label_2514c4:
    // 0x2514c4: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2514c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2514c8:
    // 0x2514c8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2514c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2514cc:
    // 0x2514cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2514ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2514d0:
    // 0x2514d0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2514d4:
    if (ctx->pc == 0x2514D4u) {
        ctx->pc = 0x2514D8u;
        goto label_2514d8;
    }
    ctx->pc = 0x2514D0u;
    {
        const bool branch_taken_0x2514d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2514d0) {
            ctx->pc = 0x2514E8u;
            goto label_2514e8;
        }
    }
    ctx->pc = 0x2514D8u;
label_2514d8:
    // 0x2514d8: 0xc08cfb2  jal         func_233EC8
label_2514dc:
    if (ctx->pc == 0x2514DCu) {
        ctx->pc = 0x2514DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514D8u;
        // 0x2514dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2514E0u;
        goto label_2514e0;
    }
    ctx->pc = 0x2514D8u;
    SET_GPR_U32(ctx, 31, 0x2514E0u);
    ctx->pc = 0x2514DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2514D8u;
    // 0x2514dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EC8u, 0x2514D8u, 0x2514E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514E0u;
label_2514e0:
    // 0x2514e0: 0x100001ce  b           . + 4 + (0x1CE << 2)
label_2514e4:
    if (ctx->pc == 0x2514E4u) {
        ctx->pc = 0x2514E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514E0u;
        // 0x2514e4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2514E8u;
        goto label_2514e8;
    }
    ctx->pc = 0x2514E0u;
    {
        const bool branch_taken_0x2514e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2514E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514E0u;
        // 0x2514e4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514e0) {
            ctx->pc = 0x251C1Cu;
            goto label_251c1c;
        }
    }
    ctx->pc = 0x2514E8u;
label_2514e8:
    // 0x2514e8: 0xc0944f6  jal         func_2513D8
label_2514ec:
    if (ctx->pc == 0x2514ECu) {
        ctx->pc = 0x2514ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514E8u;
        // 0x2514ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2514F0u;
        goto label_2514f0;
    }
    ctx->pc = 0x2514E8u;
    SET_GPR_U32(ctx, 31, 0x2514F0u);
    ctx->pc = 0x2514ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2514E8u;
    // 0x2514ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x2514E8u, 0x2514F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514F0u;
label_2514f0:
    // 0x2514f0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2514f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2514f4:
    // 0x2514f4: 0x2406040e  addiu       $a2, $zero, 0x40E
    ctx->pc = 0x2514f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
label_2514f8:
    // 0x2514f8: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2514f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945416)));
label_2514fc:
    // 0x2514fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_251500:
    if (ctx->pc == 0x251500u) {
        ctx->pc = 0x251500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514FCu;
        // 0x251500: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251504u;
        goto label_251504;
    }
    ctx->pc = 0x2514FCu;
    {
        const bool branch_taken_0x2514fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514FCu;
        // 0x251500: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514fc) {
            ctx->pc = 0x251510u;
            goto label_251510;
        }
    }
    ctx->pc = 0x251504u;
label_251504:
    // 0x251504: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x251504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251508:
    // 0x251508: 0x10000010  b           . + 4 + (0x10 << 2)
label_25150c:
    if (ctx->pc == 0x25150Cu) {
        ctx->pc = 0x25150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251508u;
        // 0x25150c: 0x263003b0  addiu       $s0, $s1, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251510u;
        goto label_251510;
    }
    ctx->pc = 0x251508u;
    {
        const bool branch_taken_0x251508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251508u;
        // 0x25150c: 0x263003b0  addiu       $s0, $s1, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251508) {
            ctx->pc = 0x25154Cu;
            goto label_25154c;
        }
    }
    ctx->pc = 0x251510u;
label_251510:
    // 0x251510: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x251510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_251514:
    // 0x251514: 0x263003b0  addiu       $s0, $s1, 0x3B0
    ctx->pc = 0x251514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
label_251518:
    // 0x251518: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x251518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
label_25151c:
    // 0x25151c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x25151cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_251520:
    // 0x251520: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x251520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_251524:
    // 0x251524: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x251524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_251528:
    // 0x251528: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
label_25152c:
    if (ctx->pc == 0x25152Cu) {
        ctx->pc = 0x25152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251528u;
        // 0x25152c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251530u;
        goto label_251530;
    }
    ctx->pc = 0x251528u;
    {
        const bool branch_taken_0x251528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x251528) {
            ctx->pc = 0x25152Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251528u;
            // 0x25152c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25154Cu;
            goto label_25154c;
        }
    }
    ctx->pc = 0x251530u;
label_251530:
    // 0x251530: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_251534:
    if (ctx->pc == 0x251534u) {
        ctx->pc = 0x251534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251530u;
        // 0x251534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251538u;
        goto label_251538;
    }
    ctx->pc = 0x251530u;
    {
        const bool branch_taken_0x251530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x251534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251530u;
        // 0x251534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251530) {
            ctx->pc = 0x25154Cu;
            goto label_25154c;
        }
    }
    ctx->pc = 0x251538u;
label_251538:
    // 0x251538: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x251538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_25153c:
    // 0x25153c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x25153cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_251540:
    // 0x251540: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_251544:
    if (ctx->pc == 0x251544u) {
        ctx->pc = 0x251544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251540u;
        // 0x251544: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251548u;
        goto label_251548;
    }
    ctx->pc = 0x251540u;
    {
        const bool branch_taken_0x251540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251540) {
            ctx->pc = 0x251544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251540u;
            // 0x251544: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251528;
        }
    }
    ctx->pc = 0x251548u;
label_251548:
    // 0x251548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x251548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25154c:
    // 0x25154c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_251550:
    if (ctx->pc == 0x251550u) {
        ctx->pc = 0x251550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25154Cu;
        // 0x251550: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251554u;
        goto label_251554;
    }
    ctx->pc = 0x25154Cu;
    {
        const bool branch_taken_0x25154c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25154Cu;
        // 0x251550: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25154c) {
            ctx->pc = 0x25156Cu;
            goto label_25156c;
        }
    }
    ctx->pc = 0x251554u;
label_251554:
    // 0x251554: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x251554u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_251558:
    // 0x251558: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x251558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_25155c:
    // 0x25155c: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x25155cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
label_251560:
    // 0x251560: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x251560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_251564:
    // 0x251564: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x251564u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
label_251568:
    // 0x251568: 0x8ce2aa88  lw          $v0, -0x5578($a3)
    ctx->pc = 0x251568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
label_25156c:
    // 0x25156c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_251570:
    if (ctx->pc == 0x251570u) {
        ctx->pc = 0x251570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25156Cu;
        // 0x251570: 0x24060403  addiu       $a2, $zero, 0x403 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251574u;
        goto label_251574;
    }
    ctx->pc = 0x25156Cu;
    {
        const bool branch_taken_0x25156c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25156Cu;
        // 0x251570: 0x24060403  addiu       $a2, $zero, 0x403 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25156c) {
            ctx->pc = 0x25157Cu;
            goto label_25157c;
        }
    }
    ctx->pc = 0x251574u;
label_251574:
    // 0x251574: 0x1000000f  b           . + 4 + (0xF << 2)
label_251578:
    if (ctx->pc == 0x251578u) {
        ctx->pc = 0x251578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251574u;
        // 0x251578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25157Cu;
        goto label_25157c;
    }
    ctx->pc = 0x251574u;
    {
        const bool branch_taken_0x251574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251574u;
        // 0x251578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251574) {
            ctx->pc = 0x2515B4u;
            goto label_2515b4;
        }
    }
    ctx->pc = 0x25157Cu;
label_25157c:
    // 0x25157c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x25157cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_251580:
    // 0x251580: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x251580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_251584:
    // 0x251584: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x251584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
label_251588:
    // 0x251588: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x251588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_25158c:
    // 0x25158c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_251590:
    // 0x251590: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
label_251594:
    if (ctx->pc == 0x251594u) {
        ctx->pc = 0x251594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251590u;
        // 0x251594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251598u;
        goto label_251598;
    }
    ctx->pc = 0x251590u;
    {
        const bool branch_taken_0x251590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x251590) {
            ctx->pc = 0x251594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251590u;
            // 0x251594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2515B4u;
            goto label_2515b4;
        }
    }
    ctx->pc = 0x251598u;
label_251598:
    // 0x251598: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_25159c:
    if (ctx->pc == 0x25159Cu) {
        ctx->pc = 0x25159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251598u;
        // 0x25159c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2515A0u;
        goto label_2515a0;
    }
    ctx->pc = 0x251598u;
    {
        const bool branch_taken_0x251598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x25159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251598u;
        // 0x25159c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251598) {
            ctx->pc = 0x2515B4u;
            goto label_2515b4;
        }
    }
    ctx->pc = 0x2515A0u;
label_2515a0:
    // 0x2515a0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2515a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2515a4:
    // 0x2515a4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2515a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2515a8:
    // 0x2515a8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_2515ac:
    if (ctx->pc == 0x2515ACu) {
        ctx->pc = 0x2515ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515A8u;
        // 0x2515ac: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2515B0u;
        goto label_2515b0;
    }
    ctx->pc = 0x2515A8u;
    {
        const bool branch_taken_0x2515a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2515a8) {
            ctx->pc = 0x2515ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2515A8u;
            // 0x2515ac: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251590;
        }
    }
    ctx->pc = 0x2515B0u;
label_2515b0:
    // 0x2515b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2515b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2515b4:
    // 0x2515b4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2515b8:
    if (ctx->pc == 0x2515B8u) {
        ctx->pc = 0x2515B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515B4u;
        // 0x2515b8: 0x8e221004  lw          $v0, 0x1004($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2515BCu;
        goto label_2515bc;
    }
    ctx->pc = 0x2515B4u;
    {
        const bool branch_taken_0x2515b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515b4) {
            ctx->pc = 0x2515B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2515B4u;
            // 0x2515b8: 0x8e221004  lw          $v0, 0x1004($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2515F8u;
            goto label_2515f8;
        }
    }
    ctx->pc = 0x2515BCu;
label_2515bc:
    // 0x2515bc: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_2515c0:
    if (ctx->pc == 0x2515C0u) {
        ctx->pc = 0x2515C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515BCu;
        // 0x2515c0: 0x8e221004  lw          $v0, 0x1004($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2515C4u;
        goto label_2515c4;
    }
    ctx->pc = 0x2515BCu;
    {
        const bool branch_taken_0x2515bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515bc) {
            ctx->pc = 0x2515C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2515BCu;
            // 0x2515c0: 0x8e221004  lw          $v0, 0x1004($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2515F8u;
            goto label_2515f8;
        }
    }
    ctx->pc = 0x2515C4u;
label_2515c4:
    // 0x2515c4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2515c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2515c8:
    // 0x2515c8: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x2515c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_2515cc:
    // 0x2515cc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2515ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2515d0:
    // 0x2515d0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2515d4:
    if (ctx->pc == 0x2515D4u) {
        ctx->pc = 0x2515D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515D0u;
        // 0x2515d4: 0x8e221004  lw          $v0, 0x1004($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2515D8u;
        goto label_2515d8;
    }
    ctx->pc = 0x2515D0u;
    {
        const bool branch_taken_0x2515d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515d0) {
            ctx->pc = 0x2515D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2515D0u;
            // 0x2515d4: 0x8e221004  lw          $v0, 0x1004($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2515F8u;
            goto label_2515f8;
        }
    }
    ctx->pc = 0x2515D8u;
label_2515d8:
    // 0x2515d8: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x2515d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_2515dc:
    // 0x2515dc: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2515dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_2515e0:
    // 0x2515e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2515e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2515e4:
    // 0x2515e4: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2515e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2515e8:
    // 0x2515e8: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x2515e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
label_2515ec:
    // 0x2515ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2515ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2515f0:
    // 0x2515f0: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x2515f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
label_2515f4:
    // 0x2515f4: 0x8e221004  lw          $v0, 0x1004($s1)
    ctx->pc = 0x2515f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
label_2515f8:
    // 0x2515f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2515fc:
    if (ctx->pc == 0x2515FCu) {
        ctx->pc = 0x251600u;
        goto label_251600;
    }
    ctx->pc = 0x2515F8u;
    {
        const bool branch_taken_0x2515f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515f8) {
            ctx->pc = 0x25162Cu;
            goto label_25162c;
        }
    }
    ctx->pc = 0x251600u;
label_251600:
    // 0x251600: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x251600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_251604:
    // 0x251604: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x251604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_251608:
    // 0x251608: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25160c:
    if (ctx->pc == 0x25160Cu) {
        ctx->pc = 0x25160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251608u;
        // 0x25160c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251610u;
        goto label_251610;
    }
    ctx->pc = 0x251608u;
    {
        const bool branch_taken_0x251608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251608u;
        // 0x25160c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251608) {
            ctx->pc = 0x251618u;
            goto label_251618;
        }
    }
    ctx->pc = 0x251610u;
label_251610:
    // 0x251610: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_251614:
    if (ctx->pc == 0x251614u) {
        ctx->pc = 0x251618u;
        goto label_251618;
    }
    ctx->pc = 0x251610u;
    {
        const bool branch_taken_0x251610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251610) {
            ctx->pc = 0x25162Cu;
            goto label_25162c;
        }
    }
    ctx->pc = 0x251618u;
label_251618:
    // 0x251618: 0xc094ed4  jal         func_253B50
label_25161c:
    if (ctx->pc == 0x25161Cu) {
        ctx->pc = 0x25161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251618u;
        // 0x25161c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251620u;
        goto label_251620;
    }
    ctx->pc = 0x251618u;
    SET_GPR_U32(ctx, 31, 0x251620u);
    ctx->pc = 0x25161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251618u;
    // 0x25161c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x251618u, 0x251620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251620u;
label_251620:
    // 0x251620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x251620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_251624:
    // 0x251624: 0xc0944da  jal         func_251368
label_251628:
    if (ctx->pc == 0x251628u) {
        ctx->pc = 0x251628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251624u;
        // 0x251628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25162Cu;
        goto label_25162c;
    }
    ctx->pc = 0x251624u;
    SET_GPR_U32(ctx, 31, 0x25162Cu);
    ctx->pc = 0x251628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251624u;
    // 0x251628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x251624u, 0x25162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25162Cu;
label_25162c:
    // 0x25162c: 0xc094c2c  jal         func_2530B0
label_251630:
    if (ctx->pc == 0x251630u) {
        ctx->pc = 0x251630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25162Cu;
        // 0x251630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251634u;
        goto label_251634;
    }
    ctx->pc = 0x25162Cu;
    SET_GPR_U32(ctx, 31, 0x251634u);
    ctx->pc = 0x251630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25162Cu;
    // 0x251630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2530B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2530B0u, 0x25162Cu, 0x251634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251634u;
label_251634:
    // 0x251634: 0xc08cfb2  jal         func_233EC8
label_251638:
    if (ctx->pc == 0x251638u) {
        ctx->pc = 0x251638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251634u;
        // 0x251638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25163Cu;
        goto label_25163c;
    }
    ctx->pc = 0x251634u;
    SET_GPR_U32(ctx, 31, 0x25163Cu);
    ctx->pc = 0x251638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251634u;
    // 0x251638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EC8u, 0x251634u, 0x25163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25163Cu;
label_25163c:
    // 0x25163c: 0xc62003b0  lwc1        $f0, 0x3B0($s1)
    ctx->pc = 0x25163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251640:
    // 0x251640: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x251640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_251644:
    // 0x251644: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x251644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_251648:
    // 0x251648: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25164c:
    // 0x25164c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25164cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_251650:
    // 0x251650: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251654:
    // 0x251654: 0x0  nop
    ctx->pc = 0x251654u;
    // NOP
label_251658:
    // 0x251658: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_25165c:
    if (ctx->pc == 0x25165Cu) {
        ctx->pc = 0x25165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251658u;
        // 0x25165c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251660u;
        goto label_251660;
    }
    ctx->pc = 0x251658u;
    {
        const bool branch_taken_0x251658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251658u;
        // 0x25165c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251658) {
            ctx->pc = 0x251690u;
            goto label_251690;
        }
    }
    ctx->pc = 0x251660u;
label_251660:
    // 0x251660: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x251660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251664:
    // 0x251664: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x251664u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_251668:
    // 0x251668: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251668u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25166c:
    // 0x25166c: 0x0  nop
    ctx->pc = 0x25166cu;
    // NOP
label_251670:
    // 0x251670: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_251674:
    if (ctx->pc == 0x251674u) {
        ctx->pc = 0x251678u;
        goto label_251678;
    }
    ctx->pc = 0x251670u;
    {
        const bool branch_taken_0x251670 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251670) {
            ctx->pc = 0x251690u;
            goto label_251690;
        }
    }
    ctx->pc = 0x251678u;
label_251678:
    // 0x251678: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x251678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25167c:
    // 0x25167c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25167cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_251680:
    // 0x251680: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251680u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251684:
    // 0x251684: 0x0  nop
    ctx->pc = 0x251684u;
    // NOP
label_251688:
    // 0x251688: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_25168c:
    if (ctx->pc == 0x25168Cu) {
        ctx->pc = 0x25168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251688u;
        // 0x25168c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251690u;
        goto label_251690;
    }
    ctx->pc = 0x251688u;
    {
        const bool branch_taken_0x251688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251688) {
            ctx->pc = 0x25168Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251688u;
            // 0x25168c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251690u;
            goto label_251690;
        }
    }
    ctx->pc = 0x251690u;
label_251690:
    // 0x251690: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_251694:
    if (ctx->pc == 0x251694u) {
        ctx->pc = 0x251694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251690u;
        // 0x251694: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251698u;
        goto label_251698;
    }
    ctx->pc = 0x251690u;
    {
        const bool branch_taken_0x251690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251690) {
            ctx->pc = 0x251694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251690u;
            // 0x251694: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2516A4u;
            goto label_2516a4;
        }
    }
    ctx->pc = 0x251698u;
label_251698:
    // 0x251698: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x251698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_25169c:
    // 0x25169c: 0xfa2110b0  sqc2        $vf1, 0x10B0($s1)
    ctx->pc = 0x25169cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4272), _mm_castps_si128(ctx->vu0_vf[1]));
label_2516a0:
    // 0x2516a0: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x2516a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_2516a4:
    // 0x2516a4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2516a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2516a8:
    // 0x2516a8: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x2516a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
label_2516ac:
    // 0x2516ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2516acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2516b0:
    // 0x2516b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2516b4:
    if (ctx->pc == 0x2516B4u) {
        ctx->pc = 0x2516B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516B0u;
        // 0x2516b4: 0x8e251060  lw          $a1, 0x1060($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516B8u;
        goto label_2516b8;
    }
    ctx->pc = 0x2516B0u;
    {
        const bool branch_taken_0x2516b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2516B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516B0u;
        // 0x2516b4: 0x8e251060  lw          $a1, 0x1060($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516b0) {
            ctx->pc = 0x2516DCu;
            goto label_2516dc;
        }
    }
    ctx->pc = 0x2516B8u;
label_2516b8:
    // 0x2516b8: 0x38a2001b  xori        $v0, $a1, 0x1B
    ctx->pc = 0x2516b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)27);
label_2516bc:
    // 0x2516bc: 0x10400157  beqz        $v0, . + 4 + (0x157 << 2)
label_2516c0:
    if (ctx->pc == 0x2516C0u) {
        ctx->pc = 0x2516C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516BCu;
        // 0x2516c0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516C4u;
        goto label_2516c4;
    }
    ctx->pc = 0x2516BCu;
    {
        const bool branch_taken_0x2516bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2516C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516BCu;
        // 0x2516c0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516bc) {
            ctx->pc = 0x251C1Cu;
            goto label_251c1c;
        }
    }
    ctx->pc = 0x2516C4u;
label_2516c4:
    // 0x2516c4: 0x8e220ff8  lw          $v0, 0xFF8($s1)
    ctx->pc = 0x2516c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
label_2516c8:
    // 0x2516c8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2516c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2516cc:
    // 0x2516cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2516ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2516d0:
    // 0x2516d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2516d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2516d4:
    // 0x2516d4: 0x54640019  bnel        $v1, $a0, . + 4 + (0x19 << 2)
label_2516d8:
    if (ctx->pc == 0x2516D8u) {
        ctx->pc = 0x2516D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516D4u;
        // 0x2516d8: 0x8e220ff4  lw          $v0, 0xFF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516DCu;
        goto label_2516dc;
    }
    ctx->pc = 0x2516D4u;
    {
        const bool branch_taken_0x2516d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2516d4) {
            ctx->pc = 0x2516D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2516D4u;
            // 0x2516d8: 0x8e220ff4  lw          $v0, 0xFF4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4084)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25173Cu;
            goto label_25173c;
        }
    }
    ctx->pc = 0x2516DCu;
label_2516dc:
    // 0x2516dc: 0x38a2001b  xori        $v0, $a1, 0x1B
    ctx->pc = 0x2516dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)27);
label_2516e0:
    // 0x2516e0: 0x1040014e  beqz        $v0, . + 4 + (0x14E << 2)
label_2516e4:
    if (ctx->pc == 0x2516E4u) {
        ctx->pc = 0x2516E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516E0u;
        // 0x2516e4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516E8u;
        goto label_2516e8;
    }
    ctx->pc = 0x2516E0u;
    {
        const bool branch_taken_0x2516e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2516E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516E0u;
        // 0x2516e4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516e0) {
            ctx->pc = 0x251C1Cu;
            goto label_251c1c;
        }
    }
    ctx->pc = 0x2516E8u;
label_2516e8:
    // 0x2516e8: 0xc072d32  jal         func_1CB4C8
label_2516ec:
    if (ctx->pc == 0x2516ECu) {
        ctx->pc = 0x2516ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516E8u;
        // 0x2516ec: 0x8e240ff8  lw          $a0, 0xFF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516F0u;
        goto label_2516f0;
    }
    ctx->pc = 0x2516E8u;
    SET_GPR_U32(ctx, 31, 0x2516F0u);
    ctx->pc = 0x2516ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2516E8u;
    // 0x2516ec: 0x8e240ff8  lw          $a0, 0xFF8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB4C8u, 0x2516E8u, 0x2516F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2516F0u;
label_2516f0:
    // 0x2516f0: 0xde231020  ld          $v1, 0x1020($s1)
    ctx->pc = 0x2516f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_2516f4:
    // 0x2516f4: 0x34028400  ori         $v0, $zero, 0x8400
    ctx->pc = 0x2516f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
label_2516f8:
    // 0x2516f8: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x2516f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
label_2516fc:
    // 0x2516fc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2516fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_251700:
    // 0x251700: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x251700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
label_251704:
    // 0x251704: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x251704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_251708:
    // 0x251708: 0x14640144  bne         $v1, $a0, . + 4 + (0x144 << 2)
label_25170c:
    if (ctx->pc == 0x25170Cu) {
        ctx->pc = 0x25170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251708u;
        // 0x25170c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251710u;
        goto label_251710;
    }
    ctx->pc = 0x251708u;
    {
        const bool branch_taken_0x251708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251708u;
        // 0x25170c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251708) {
            ctx->pc = 0x251C1Cu;
            goto label_251c1c;
        }
    }
    ctx->pc = 0x251710u;
label_251710:
    // 0x251710: 0xc094ed4  jal         func_253B50
label_251714:
    if (ctx->pc == 0x251714u) {
        ctx->pc = 0x251714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251710u;
        // 0x251714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251718u;
        goto label_251718;
    }
    ctx->pc = 0x251710u;
    SET_GPR_U32(ctx, 31, 0x251718u);
    ctx->pc = 0x251714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251710u;
    // 0x251714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x251710u, 0x251718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251718u;
label_251718:
    // 0x251718: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x251718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_25171c:
    // 0x25171c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x25171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251720:
    // 0x251720: 0x8e22041c  lw          $v0, 0x41C($s1)
    ctx->pc = 0x251720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
label_251724:
    // 0x251724: 0xe6200500  swc1        $f0, 0x500($s1)
    ctx->pc = 0x251724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1280), bits); }
label_251728:
    // 0x251728: 0xae220420  sw          $v0, 0x420($s1)
    ctx->pc = 0x251728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 2));
label_25172c:
    // 0x25172c: 0xae20041c  sw          $zero, 0x41C($s1)
    ctx->pc = 0x25172cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
label_251730:
    // 0x251730: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x251730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_251734:
    // 0x251734: 0x10000138  b           . + 4 + (0x138 << 2)
label_251738:
    if (ctx->pc == 0x251738u) {
        ctx->pc = 0x251738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251734u;
        // 0x251738: 0xe62004fc  swc1        $f0, 0x4FC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25173Cu;
        goto label_25173c;
    }
    ctx->pc = 0x251734u;
    {
        const bool branch_taken_0x251734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251734u;
        // 0x251738: 0xe62004fc  swc1        $f0, 0x4FC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251734) {
            ctx->pc = 0x251C18u;
            goto label_251c18;
        }
    }
    ctx->pc = 0x25173Cu;
label_25173c:
    // 0x25173c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_251740:
    // 0x251740: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x251740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251744:
    // 0x251744: 0xc094d84  jal         func_253610
label_251748:
    if (ctx->pc == 0x251748u) {
        ctx->pc = 0x251748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251744u;
        // 0x251748: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25174Cu;
        goto label_25174c;
    }
    ctx->pc = 0x251744u;
    SET_GPR_U32(ctx, 31, 0x25174Cu);
    ctx->pc = 0x251748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251744u;
    // 0x251748: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253610u, 0x251744u, 0x25174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25174Cu;
label_25174c:
    // 0x25174c: 0xc072d32  jal         func_1CB4C8
label_251750:
    if (ctx->pc == 0x251750u) {
        ctx->pc = 0x251750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25174Cu;
        // 0x251750: 0x8e240ff8  lw          $a0, 0xFF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251754u;
        goto label_251754;
    }
    ctx->pc = 0x25174Cu;
    SET_GPR_U32(ctx, 31, 0x251754u);
    ctx->pc = 0x251750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25174Cu;
    // 0x251750: 0x8e240ff8  lw          $a0, 0xFF8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB4C8u, 0x25174Cu, 0x251754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251754u;
label_251754:
    // 0x251754: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x251754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_251758:
    // 0x251758: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x251758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_25175c:
    // 0x25175c: 0x3863001f  xori        $v1, $v1, 0x1F
    ctx->pc = 0x25175cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)31);
label_251760:
    // 0x251760: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_251764:
    if (ctx->pc == 0x251764u) {
        ctx->pc = 0x251764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251760u;
        // 0x251764: 0x8e240fe4  lw          $a0, 0xFE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251768u;
        goto label_251768;
    }
    ctx->pc = 0x251760u;
    {
        const bool branch_taken_0x251760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x251760) {
            ctx->pc = 0x251764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251760u;
            // 0x251764: 0x8e240fe4  lw          $a0, 0xFE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251774u;
            goto label_251774;
        }
    }
    ctx->pc = 0x251768u;
label_251768:
    // 0x251768: 0xc095510  jal         func_255440
label_25176c:
    if (ctx->pc == 0x25176Cu) {
        ctx->pc = 0x25176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251768u;
        // 0x25176c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251770u;
        goto label_251770;
    }
    ctx->pc = 0x251768u;
    SET_GPR_U32(ctx, 31, 0x251770u);
    ctx->pc = 0x25176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251768u;
    // 0x25176c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255440u, 0x251768u, 0x251770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251770u;
label_251770:
    // 0x251770: 0x8e240fe4  lw          $a0, 0xFE4($s1)
    ctx->pc = 0x251770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
label_251774:
    // 0x251774: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x251774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_251778:
    // 0x251778: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x251778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25177c:
    // 0x25177c: 0x40f809  jalr        $v0
label_251780:
    if (ctx->pc == 0x251780u) {
        ctx->pc = 0x251784u;
        goto label_251784;
    }
    ctx->pc = 0x25177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251784u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25177Cu, 0x251784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251784u;
label_251784:
    // 0x251784: 0xc0944f6  jal         func_2513D8
label_251788:
    if (ctx->pc == 0x251788u) {
        ctx->pc = 0x251788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251784u;
        // 0x251788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25178Cu;
        goto label_25178c;
    }
    ctx->pc = 0x251784u;
    SET_GPR_U32(ctx, 31, 0x25178Cu);
    ctx->pc = 0x251788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251784u;
    // 0x251788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x251784u, 0x25178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25178Cu;
label_25178c:
    // 0x25178c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x25178cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_251790:
    // 0x251790: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_251794:
    // 0x251794: 0xc06fc04  jal         func_1BF010
label_251798:
    if (ctx->pc == 0x251798u) {
        ctx->pc = 0x251798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251794u;
        // 0x251798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25179Cu;
        goto label_25179c;
    }
    ctx->pc = 0x251794u;
    SET_GPR_U32(ctx, 31, 0x25179Cu);
    ctx->pc = 0x251798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251794u;
    // 0x251798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF010u, 0x251794u, 0x25179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25179Cu;
label_25179c:
    // 0x25179c: 0x8e240fe8  lw          $a0, 0xFE8($s1)
    ctx->pc = 0x25179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
label_2517a0:
    // 0x2517a0: 0xc0701da  jal         func_1C0768
label_2517a4:
    if (ctx->pc == 0x2517A4u) {
        ctx->pc = 0x2517A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517A0u;
        // 0x2517a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2517A8u;
        goto label_2517a8;
    }
    ctx->pc = 0x2517A0u;
    SET_GPR_U32(ctx, 31, 0x2517A8u);
    ctx->pc = 0x2517A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2517A0u;
    // 0x2517a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0768u, 0x2517A0u, 0x2517A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2517A8u;
label_2517a8:
    // 0x2517a8: 0xc07138a  jal         func_1C4E28
label_2517ac:
    if (ctx->pc == 0x2517ACu) {
        ctx->pc = 0x2517ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517A8u;
        // 0x2517ac: 0x8e240ffc  lw          $a0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2517B0u;
        goto label_2517b0;
    }
    ctx->pc = 0x2517A8u;
    SET_GPR_U32(ctx, 31, 0x2517B0u);
    ctx->pc = 0x2517ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2517A8u;
    // 0x2517ac: 0x8e240ffc  lw          $a0, 0xFFC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E28u, 0x2517A8u, 0x2517B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2517B0u;
label_2517b0:
    // 0x2517b0: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x2517b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_2517b4:
    // 0x2517b4: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x2517b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_2517b8:
    // 0x2517b8: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x2517b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
label_2517bc:
    // 0x2517bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2517bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2517c0:
    // 0x2517c0: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
label_2517c4:
    if (ctx->pc == 0x2517C4u) {
        ctx->pc = 0x2517C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517C0u;
        // 0x2517c4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2517C8u;
        goto label_2517c8;
    }
    ctx->pc = 0x2517C0u;
    {
        const bool branch_taken_0x2517c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2517C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517C0u;
        // 0x2517c4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517c0) {
            ctx->pc = 0x2518D4u;
            goto label_2518d4;
        }
    }
    ctx->pc = 0x2517C8u;
label_2517c8:
    // 0x2517c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2517c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2517cc:
    // 0x2517cc: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2517ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2517d0:
    // 0x2517d0: 0xc08fed2  jal         func_23FB48
label_2517d4:
    if (ctx->pc == 0x2517D4u) {
        ctx->pc = 0x2517D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517D0u;
        // 0x2517d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2517D8u;
        goto label_2517d8;
    }
    ctx->pc = 0x2517D0u;
    SET_GPR_U32(ctx, 31, 0x2517D8u);
    ctx->pc = 0x2517D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2517D0u;
    // 0x2517d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2517D0u, 0x2517D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2517D8u;
label_2517d8:
    // 0x2517d8: 0x8e221004  lw          $v0, 0x1004($s1)
    ctx->pc = 0x2517d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
label_2517dc:
    // 0x2517dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2517e0:
    if (ctx->pc == 0x2517E0u) {
        ctx->pc = 0x2517E4u;
        goto label_2517e4;
    }
    ctx->pc = 0x2517DCu;
    {
        const bool branch_taken_0x2517dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2517dc) {
            ctx->pc = 0x251814u;
            goto label_251814;
        }
    }
    ctx->pc = 0x2517E4u;
label_2517e4:
    // 0x2517e4: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x2517e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_2517e8:
    // 0x2517e8: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x2517e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
label_2517ec:
    // 0x2517ec: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x2517ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_2517f0:
    // 0x2517f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2517f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2517f4:
    // 0x2517f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2517f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2517f8:
    // 0x2517f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2517fc:
    if (ctx->pc == 0x2517FCu) {
        ctx->pc = 0x251800u;
        goto label_251800;
    }
    ctx->pc = 0x2517F8u;
    {
        const bool branch_taken_0x2517f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2517f8) {
            ctx->pc = 0x251814u;
            goto label_251814;
        }
    }
    ctx->pc = 0x251800u;
label_251800:
    // 0x251800: 0x8e240ff0  lw          $a0, 0xFF0($s1)
    ctx->pc = 0x251800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
label_251804:
    // 0x251804: 0xc06cdb8  jal         func_1B36E0
label_251808:
    if (ctx->pc == 0x251808u) {
        ctx->pc = 0x251808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251804u;
        // 0x251808: 0x26251010  addiu       $a1, $s1, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25180Cu;
        goto label_25180c;
    }
    ctx->pc = 0x251804u;
    SET_GPR_U32(ctx, 31, 0x25180Cu);
    ctx->pc = 0x251808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251804u;
    // 0x251808: 0x26251010  addiu       $a1, $s1, 0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36E0u, 0x251804u, 0x25180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25180Cu;
label_25180c:
    // 0x25180c: 0x10000008  b           . + 4 + (0x8 << 2)
label_251810:
    if (ctx->pc == 0x251810u) {
        ctx->pc = 0x251814u;
        goto label_251814;
    }
    ctx->pc = 0x25180Cu;
    {
        const bool branch_taken_0x25180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25180c) {
            ctx->pc = 0x251830u;
            goto label_251830;
        }
    }
    ctx->pc = 0x251814u;
label_251814:
    // 0x251814: 0xc0948f6  jal         func_2523D8
label_251818:
    if (ctx->pc == 0x251818u) {
        ctx->pc = 0x251818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251814u;
        // 0x251818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25181Cu;
        goto label_25181c;
    }
    ctx->pc = 0x251814u;
    SET_GPR_U32(ctx, 31, 0x25181Cu);
    ctx->pc = 0x251818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251814u;
    // 0x251818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2523D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2523D8u, 0x251814u, 0x25181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25181Cu;
label_25181c:
    // 0x25181c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_251820:
    if (ctx->pc == 0x251820u) {
        ctx->pc = 0x251824u;
        goto label_251824;
    }
    ctx->pc = 0x25181Cu;
    {
        const bool branch_taken_0x25181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25181c) {
            ctx->pc = 0x251830u;
            goto label_251830;
        }
    }
    ctx->pc = 0x251824u;
label_251824:
    // 0x251824: 0x8e240ff0  lw          $a0, 0xFF0($s1)
    ctx->pc = 0x251824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
label_251828:
    // 0x251828: 0xc06cdda  jal         func_1B3768
label_25182c:
    if (ctx->pc == 0x25182Cu) {
        ctx->pc = 0x25182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251828u;
        // 0x25182c: 0x8e251004  lw          $a1, 0x1004($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251830u;
        goto label_251830;
    }
    ctx->pc = 0x251828u;
    SET_GPR_U32(ctx, 31, 0x251830u);
    ctx->pc = 0x25182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251828u;
    // 0x25182c: 0x8e251004  lw          $a1, 0x1004($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x251828u, 0x251830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251830u;
label_251830:
    // 0x251830: 0xc06cfd4  jal         func_1B3F50
label_251834:
    if (ctx->pc == 0x251834u) {
        ctx->pc = 0x251834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251830u;
        // 0x251834: 0x8e240ff0  lw          $a0, 0xFF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251838u;
        goto label_251838;
    }
    ctx->pc = 0x251830u;
    SET_GPR_U32(ctx, 31, 0x251838u);
    ctx->pc = 0x251834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251830u;
    // 0x251834: 0x8e240ff0  lw          $a0, 0xFF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3F50u, 0x251830u, 0x251838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251838u;
label_251838:
    // 0x251838: 0x8e240fec  lw          $a0, 0xFEC($s1)
    ctx->pc = 0x251838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4076)));
label_25183c:
    // 0x25183c: 0x8e250ff0  lw          $a1, 0xFF0($s1)
    ctx->pc = 0x25183cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
label_251840:
    // 0x251840: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x251840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_251844:
    // 0x251844: 0x8ca200b0  lw          $v0, 0xB0($a1)
    ctx->pc = 0x251844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
label_251848:
    // 0x251848: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x251848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_25184c:
    // 0x25184c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x25184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_251850:
    // 0x251850: 0x60f809  jalr        $v1
label_251854:
    if (ctx->pc == 0x251854u) {
        ctx->pc = 0x251854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251850u;
        // 0x251854: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251858u;
        goto label_251858;
    }
    ctx->pc = 0x251850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x251858u);
        ctx->pc = 0x251854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251850u;
        // 0x251854: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251850u, 0x251858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251858u;
label_251858:
    // 0x251858: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x251858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_25185c:
    // 0x25185c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x25185cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_251860:
    // 0x251860: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x251860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_251864:
    // 0x251864: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_251868:
    if (ctx->pc == 0x251868u) {
        ctx->pc = 0x25186Cu;
        goto label_25186c;
    }
    ctx->pc = 0x251864u;
    {
        const bool branch_taken_0x251864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251864) {
            ctx->pc = 0x2518B0u;
            goto label_2518b0;
        }
    }
    ctx->pc = 0x25186Cu;
label_25186c:
    // 0x25186c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x25186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_251870:
    // 0x251870: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x251870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_251874:
    // 0x251874: 0x40f809  jalr        $v0
label_251878:
    if (ctx->pc == 0x251878u) {
        ctx->pc = 0x251878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251874u;
        // 0x251878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25187Cu;
        goto label_25187c;
    }
    ctx->pc = 0x251874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25187Cu);
        ctx->pc = 0x251878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251874u;
        // 0x251878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251874u, 0x25187Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25187Cu;
label_25187c:
    // 0x25187c: 0x8e230ff0  lw          $v1, 0xFF0($s1)
    ctx->pc = 0x25187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
label_251880:
    // 0x251880: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x251880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251884:
    // 0x251884: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x251884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_251888:
    // 0x251888: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x251888u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_25188c:
    // 0x25188c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x25188cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_251890:
    // 0x251890: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_251894:
    if (ctx->pc == 0x251894u) {
        ctx->pc = 0x251898u;
        goto label_251898;
    }
    ctx->pc = 0x251890u;
    {
        const bool branch_taken_0x251890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251890) {
            ctx->pc = 0x2518A8u;
            goto label_2518a8;
        }
    }
    ctx->pc = 0x251898u;
label_251898:
    // 0x251898: 0xc0f7de8  jal         func_3DF7A0
label_25189c:
    if (ctx->pc == 0x25189Cu) {
        ctx->pc = 0x2518A0u;
        goto label_2518a0;
    }
    ctx->pc = 0x251898u;
    SET_GPR_U32(ctx, 31, 0x2518A0u);
    ctx->pc = 0x3DF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF7A0u, 0x251898u, 0x2518A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2518A0u;
label_2518a0:
    // 0x2518a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2518a4:
    if (ctx->pc == 0x2518A4u) {
        ctx->pc = 0x2518A8u;
        goto label_2518a8;
    }
    ctx->pc = 0x2518A0u;
    {
        const bool branch_taken_0x2518a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2518a0) {
            ctx->pc = 0x2518B0u;
            goto label_2518b0;
        }
    }
    ctx->pc = 0x2518A8u;
label_2518a8:
    // 0x2518a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2518a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2518ac:
    // 0x2518ac: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x2518acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2518b0:
    // 0x2518b0: 0xc094766  jal         func_251D98
label_2518b4:
    if (ctx->pc == 0x2518B4u) {
        ctx->pc = 0x2518B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518B0u;
        // 0x2518b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2518B8u;
        goto label_2518b8;
    }
    ctx->pc = 0x2518B0u;
    SET_GPR_U32(ctx, 31, 0x2518B8u);
    ctx->pc = 0x2518B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2518B0u;
    // 0x2518b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251D98u, 0x2518B0u, 0x2518B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2518B8u;
label_2518b8:
    // 0x2518b8: 0xc06cdb4  jal         func_1B36D0
label_2518bc:
    if (ctx->pc == 0x2518BCu) {
        ctx->pc = 0x2518BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518B8u;
        // 0x2518bc: 0x8e240ff0  lw          $a0, 0xFF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2518C0u;
        goto label_2518c0;
    }
    ctx->pc = 0x2518B8u;
    SET_GPR_U32(ctx, 31, 0x2518C0u);
    ctx->pc = 0x2518BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2518B8u;
    // 0x2518bc: 0x8e240ff0  lw          $a0, 0xFF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x2518B8u, 0x2518C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2518C0u;
label_2518c0:
    // 0x2518c0: 0x8e220fe8  lw          $v0, 0xFE8($s1)
    ctx->pc = 0x2518c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
label_2518c4:
    // 0x2518c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2518c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2518c8:
    // 0x2518c8: 0xc09485e  jal         func_252178
label_2518cc:
    if (ctx->pc == 0x2518CCu) {
        ctx->pc = 0x2518CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518C8u;
        // 0x2518cc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2518D0u;
        goto label_2518d0;
    }
    ctx->pc = 0x2518C8u;
    SET_GPR_U32(ctx, 31, 0x2518D0u);
    ctx->pc = 0x2518CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2518C8u;
    // 0x2518cc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252178u, 0x2518C8u, 0x2518D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2518D0u;
label_2518d0:
    // 0x2518d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2518d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2518d4:
    // 0x2518d4: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x2518d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
label_2518d8:
    // 0x2518d8: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_2518dc:
    if (ctx->pc == 0x2518DCu) {
        ctx->pc = 0x2518DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518D8u;
        // 0x2518dc: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2518E0u;
        goto label_2518e0;
    }
    ctx->pc = 0x2518D8u;
    {
        const bool branch_taken_0x2518d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2518d8) {
            ctx->pc = 0x2518DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2518D8u;
            // 0x2518dc: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251950u;
            goto label_251950;
        }
    }
    ctx->pc = 0x2518E0u;
label_2518e0:
    // 0x2518e0: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2518e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2518e4:
    // 0x2518e4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2518e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2518e8:
    // 0x2518e8: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2518e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_2518ec:
    // 0x2518ec: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2518f0:
    if (ctx->pc == 0x2518F0u) {
        ctx->pc = 0x2518F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518ECu;
        // 0x2518f0: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2518F4u;
        goto label_2518f4;
    }
    ctx->pc = 0x2518ECu;
    {
        const bool branch_taken_0x2518ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2518ec) {
            ctx->pc = 0x2518F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2518ECu;
            // 0x2518f0: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251950u;
            goto label_251950;
        }
    }
    ctx->pc = 0x2518F4u;
label_2518f4:
    // 0x2518f4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2518f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_2518f8:
    // 0x2518f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2518f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2518fc:
    // 0x2518fc: 0xc04785a  jal         func_11E168
label_251900:
    if (ctx->pc == 0x251900u) {
        ctx->pc = 0x251900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518FCu;
        // 0x251900: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251904u;
        goto label_251904;
    }
    ctx->pc = 0x2518FCu;
    SET_GPR_U32(ctx, 31, 0x251904u);
    ctx->pc = 0x251900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2518FCu;
    // 0x251900: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x2518FCu, 0x251904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251904u;
label_251904:
    // 0x251904: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_251908:
    if (ctx->pc == 0x251908u) {
        ctx->pc = 0x251908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251904u;
        // 0x251908: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25190Cu;
        goto label_25190c;
    }
    ctx->pc = 0x251904u;
    {
        const bool branch_taken_0x251904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251904) {
            ctx->pc = 0x251908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251904u;
            // 0x251908: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251950u;
            goto label_251950;
        }
    }
    ctx->pc = 0x25190Cu;
label_25190c:
    // 0x25190c: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x25190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_251910:
    // 0x251910: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_251914:
    if (ctx->pc == 0x251914u) {
        ctx->pc = 0x251914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251910u;
        // 0x251914: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251918u;
        goto label_251918;
    }
    ctx->pc = 0x251910u;
    {
        const bool branch_taken_0x251910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251910) {
            ctx->pc = 0x251914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251910u;
            // 0x251914: 0xde221020  ld          $v0, 0x1020($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251950u;
            goto label_251950;
        }
    }
    ctx->pc = 0x251918u;
label_251918:
    // 0x251918: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x251918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_25191c:
    // 0x25191c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_251920:
    // 0x251920: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x251920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_251924:
    // 0x251924: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_251928:
    if (ctx->pc == 0x251928u) {
        ctx->pc = 0x25192Cu;
        goto label_25192c;
    }
    ctx->pc = 0x251924u;
    {
        const bool branch_taken_0x251924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x251924) {
            ctx->pc = 0x251934u;
            goto label_251934;
        }
    }
    ctx->pc = 0x25192Cu;
label_25192c:
    // 0x25192c: 0xc06b9c0  jal         func_1AE700
label_251930:
    if (ctx->pc == 0x251930u) {
        ctx->pc = 0x251934u;
        goto label_251934;
    }
    ctx->pc = 0x25192Cu;
    SET_GPR_U32(ctx, 31, 0x251934u);
    ctx->pc = 0x1AE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE700u, 0x25192Cu, 0x251934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251934u;
label_251934:
    // 0x251934: 0xc0954fc  jal         func_2553F0
label_251938:
    if (ctx->pc == 0x251938u) {
        ctx->pc = 0x251938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251934u;
        // 0x251938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25193Cu;
        goto label_25193c;
    }
    ctx->pc = 0x251934u;
    SET_GPR_U32(ctx, 31, 0x25193Cu);
    ctx->pc = 0x251938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251934u;
    // 0x251938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553F0u, 0x251934u, 0x25193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25193Cu;
label_25193c:
    // 0x25193c: 0xc095504  jal         func_255410
label_251940:
    if (ctx->pc == 0x251940u) {
        ctx->pc = 0x251940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25193Cu;
        // 0x251940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251944u;
        goto label_251944;
    }
    ctx->pc = 0x25193Cu;
    SET_GPR_U32(ctx, 31, 0x251944u);
    ctx->pc = 0x251940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25193Cu;
    // 0x251940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255410u, 0x25193Cu, 0x251944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251944u;
label_251944:
    // 0x251944: 0xc0954e8  jal         func_2553A0
label_251948:
    if (ctx->pc == 0x251948u) {
        ctx->pc = 0x251948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251944u;
        // 0x251948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25194Cu;
        goto label_25194c;
    }
    ctx->pc = 0x251944u;
    SET_GPR_U32(ctx, 31, 0x25194Cu);
    ctx->pc = 0x251948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251944u;
    // 0x251948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553A0u, 0x251944u, 0x25194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25194Cu;
label_25194c:
    // 0x25194c: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x25194cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_251950:
    // 0x251950: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x251950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
label_251954:
    // 0x251954: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x251954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_251958:
    // 0x251958: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x251958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_25195c:
    // 0x25195c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x25195cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_251960:
    // 0x251960: 0x54400069  bnel        $v0, $zero, . + 4 + (0x69 << 2)
label_251964:
    if (ctx->pc == 0x251964u) {
        ctx->pc = 0x251964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251960u;
        // 0x251964: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251968u;
        goto label_251968;
    }
    ctx->pc = 0x251960u;
    {
        const bool branch_taken_0x251960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251960) {
            ctx->pc = 0x251964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251960u;
            // 0x251964: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251B08u;
            goto label_251b08;
        }
    }
    ctx->pc = 0x251968u;
label_251968:
    // 0x251968: 0x8e220ff0  lw          $v0, 0xFF0($s1)
    ctx->pc = 0x251968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
label_25196c:
    // 0x25196c: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x25196cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_251970:
    // 0x251970: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_251974:
    if (ctx->pc == 0x251974u) {
        ctx->pc = 0x251974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251970u;
        // 0x251974: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251978u;
        goto label_251978;
    }
    ctx->pc = 0x251970u;
    {
        const bool branch_taken_0x251970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x251970) {
            ctx->pc = 0x251974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251970u;
            // 0x251974: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251988u;
            goto label_251988;
        }
    }
    ctx->pc = 0x251978u;
label_251978:
    // 0x251978: 0xc08dc8e  jal         func_237238
label_25197c:
    if (ctx->pc == 0x25197Cu) {
        ctx->pc = 0x25197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251978u;
        // 0x25197c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251980u;
        goto label_251980;
    }
    ctx->pc = 0x251978u;
    SET_GPR_U32(ctx, 31, 0x251980u);
    ctx->pc = 0x25197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251978u;
    // 0x25197c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237238u, 0x251978u, 0x251980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251980u;
label_251980:
    // 0x251980: 0x10000061  b           . + 4 + (0x61 << 2)
label_251984:
    if (ctx->pc == 0x251984u) {
        ctx->pc = 0x251984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251980u;
        // 0x251984: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251988u;
        goto label_251988;
    }
    ctx->pc = 0x251980u;
    {
        const bool branch_taken_0x251980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251980u;
        // 0x251984: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251980) {
            ctx->pc = 0x251B08u;
            goto label_251b08;
        }
    }
    ctx->pc = 0x251988u;
label_251988:
    // 0x251988: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x251988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25198c:
    // 0x25198c: 0xc0f7d10  jal         func_3DF440
label_251990:
    if (ctx->pc == 0x251990u) {
        ctx->pc = 0x251990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25198Cu;
        // 0x251990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251994u;
        goto label_251994;
    }
    ctx->pc = 0x25198Cu;
    SET_GPR_U32(ctx, 31, 0x251994u);
    ctx->pc = 0x251990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25198Cu;
    // 0x251990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF440u, 0x25198Cu, 0x251994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251994u;
label_251994:
    // 0x251994: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_251998:
    if (ctx->pc == 0x251998u) {
        ctx->pc = 0x251998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251994u;
        // 0x251998: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25199Cu;
        goto label_25199c;
    }
    ctx->pc = 0x251994u;
    {
        const bool branch_taken_0x251994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251994) {
            ctx->pc = 0x251998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251994u;
            // 0x251998: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2519CCu;
            goto label_2519cc;
        }
    }
    ctx->pc = 0x25199Cu;
label_25199c:
    // 0x25199c: 0xc0f7d1a  jal         func_3DF468
label_2519a0:
    if (ctx->pc == 0x2519A0u) {
        ctx->pc = 0x2519A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25199Cu;
        // 0x2519a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519A4u;
        goto label_2519a4;
    }
    ctx->pc = 0x25199Cu;
    SET_GPR_U32(ctx, 31, 0x2519A4u);
    ctx->pc = 0x2519A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25199Cu;
    // 0x2519a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF468u, 0x25199Cu, 0x2519A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2519A4u;
label_2519a4:
    // 0x2519a4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2519a8:
    if (ctx->pc == 0x2519A8u) {
        ctx->pc = 0x2519A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519A4u;
        // 0x2519a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519ACu;
        goto label_2519ac;
    }
    ctx->pc = 0x2519A4u;
    {
        const bool branch_taken_0x2519a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2519a4) {
            ctx->pc = 0x2519A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2519A4u;
            // 0x2519a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2519CCu;
            goto label_2519cc;
        }
    }
    ctx->pc = 0x2519ACu;
label_2519ac:
    // 0x2519ac: 0xc0f7d24  jal         func_3DF490
label_2519b0:
    if (ctx->pc == 0x2519B0u) {
        ctx->pc = 0x2519B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519ACu;
        // 0x2519b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519B4u;
        goto label_2519b4;
    }
    ctx->pc = 0x2519ACu;
    SET_GPR_U32(ctx, 31, 0x2519B4u);
    ctx->pc = 0x2519B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2519ACu;
    // 0x2519b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF490u, 0x2519ACu, 0x2519B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2519B4u;
label_2519b4:
    // 0x2519b4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2519b8:
    if (ctx->pc == 0x2519B8u) {
        ctx->pc = 0x2519B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519B4u;
        // 0x2519b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519BCu;
        goto label_2519bc;
    }
    ctx->pc = 0x2519B4u;
    {
        const bool branch_taken_0x2519b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2519b4) {
            ctx->pc = 0x2519B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2519B4u;
            // 0x2519b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2519CCu;
            goto label_2519cc;
        }
    }
    ctx->pc = 0x2519BCu;
label_2519bc:
    // 0x2519bc: 0xc0f7d32  jal         func_3DF4C8
label_2519c0:
    if (ctx->pc == 0x2519C0u) {
        ctx->pc = 0x2519C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519BCu;
        // 0x2519c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519C4u;
        goto label_2519c4;
    }
    ctx->pc = 0x2519BCu;
    SET_GPR_U32(ctx, 31, 0x2519C4u);
    ctx->pc = 0x2519C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2519BCu;
    // 0x2519c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF4C8u, 0x2519BCu, 0x2519C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2519C4u;
label_2519c4:
    // 0x2519c4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2519c8:
    if (ctx->pc == 0x2519C8u) {
        ctx->pc = 0x2519C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519C4u;
        // 0x2519c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519CCu;
        goto label_2519cc;
    }
    ctx->pc = 0x2519C4u;
    {
        const bool branch_taken_0x2519c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2519c4) {
            ctx->pc = 0x2519C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2519C4u;
            // 0x2519c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2519CCu;
            goto label_2519cc;
        }
    }
    ctx->pc = 0x2519CCu;
label_2519cc:
    // 0x2519cc: 0x5640003c  bnel        $s2, $zero, . + 4 + (0x3C << 2)
label_2519d0:
    if (ctx->pc == 0x2519D0u) {
        ctx->pc = 0x2519D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519CCu;
        // 0x2519d0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519D4u;
        goto label_2519d4;
    }
    ctx->pc = 0x2519CCu;
    {
        const bool branch_taken_0x2519cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2519cc) {
            ctx->pc = 0x2519D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2519CCu;
            // 0x2519d0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251AC0u;
            goto label_251ac0;
        }
    }
    ctx->pc = 0x2519D4u;
label_2519d4:
    // 0x2519d4: 0xc06b640  jal         func_1AD900
label_2519d8:
    if (ctx->pc == 0x2519D8u) {
        ctx->pc = 0x2519D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519D4u;
        // 0x2519d8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519DCu;
        goto label_2519dc;
    }
    ctx->pc = 0x2519D4u;
    SET_GPR_U32(ctx, 31, 0x2519DCu);
    ctx->pc = 0x2519D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2519D4u;
    // 0x2519d8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD900u, 0x2519D4u, 0x2519DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2519DCu;
label_2519dc:
    // 0x2519dc: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_2519e0:
    if (ctx->pc == 0x2519E0u) {
        ctx->pc = 0x2519E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519DCu;
        // 0x2519e0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519E4u;
        goto label_2519e4;
    }
    ctx->pc = 0x2519DCu;
    {
        const bool branch_taken_0x2519dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2519dc) {
            ctx->pc = 0x2519E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2519DCu;
            // 0x2519e0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251AC0u;
            goto label_251ac0;
        }
    }
    ctx->pc = 0x2519E4u;
label_2519e4:
    // 0x2519e4: 0x8e220fe0  lw          $v0, 0xFE0($s1)
    ctx->pc = 0x2519e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4064)));
label_2519e8:
    // 0x2519e8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_2519ec:
    if (ctx->pc == 0x2519ECu) {
        ctx->pc = 0x2519F0u;
        goto label_2519f0;
    }
    ctx->pc = 0x2519E8u;
    {
        const bool branch_taken_0x2519e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2519e8) {
            ctx->pc = 0x251AD0u;
            goto label_251ad0;
        }
    }
    ctx->pc = 0x2519F0u;
label_2519f0:
    // 0x2519f0: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2519f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2519f4:
    // 0x2519f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2519f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2519f8:
    // 0x2519f8: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2519f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2519fc:
    // 0x2519fc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2519fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_251a00:
    // 0x251a00: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_251a04:
    if (ctx->pc == 0x251A04u) {
        ctx->pc = 0x251A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A00u;
        // 0x251a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A08u;
        goto label_251a08;
    }
    ctx->pc = 0x251A00u;
    {
        const bool branch_taken_0x251a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A00u;
        // 0x251a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a00) {
            ctx->pc = 0x251A34u;
            goto label_251a34;
        }
    }
    ctx->pc = 0x251A08u;
label_251a08:
    // 0x251a08: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x251a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_251a0c:
    // 0x251a0c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_251a10:
    if (ctx->pc == 0x251A10u) {
        ctx->pc = 0x251A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A0Cu;
        // 0x251a10: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A14u;
        goto label_251a14;
    }
    ctx->pc = 0x251A0Cu;
    {
        const bool branch_taken_0x251a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A0Cu;
        // 0x251a10: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a0c) {
            ctx->pc = 0x251A34u;
            goto label_251a34;
        }
    }
    ctx->pc = 0x251A14u;
label_251a14:
    // 0x251a14: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_251a18:
    if (ctx->pc == 0x251A18u) {
        ctx->pc = 0x251A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A14u;
        // 0x251a18: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A1Cu;
        goto label_251a1c;
    }
    ctx->pc = 0x251A14u;
    {
        const bool branch_taken_0x251a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A14u;
        // 0x251a18: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a14) {
            ctx->pc = 0x251A34u;
            goto label_251a34;
        }
    }
    ctx->pc = 0x251A1Cu;
label_251a1c:
    // 0x251a1c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_251a20:
    if (ctx->pc == 0x251A20u) {
        ctx->pc = 0x251A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A1Cu;
        // 0x251a20: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A24u;
        goto label_251a24;
    }
    ctx->pc = 0x251A1Cu;
    {
        const bool branch_taken_0x251a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A1Cu;
        // 0x251a20: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a1c) {
            ctx->pc = 0x251A34u;
            goto label_251a34;
        }
    }
    ctx->pc = 0x251A24u;
label_251a24:
    // 0x251a24: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_251a28:
    if (ctx->pc == 0x251A28u) {
        ctx->pc = 0x251A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A24u;
        // 0x251a28: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A2Cu;
        goto label_251a2c;
    }
    ctx->pc = 0x251A24u;
    {
        const bool branch_taken_0x251a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A24u;
        // 0x251a28: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a24) {
            ctx->pc = 0x251A34u;
            goto label_251a34;
        }
    }
    ctx->pc = 0x251A2Cu;
label_251a2c:
    // 0x251a2c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_251a30:
    if (ctx->pc == 0x251A30u) {
        ctx->pc = 0x251A34u;
        goto label_251a34;
    }
    ctx->pc = 0x251A2Cu;
    {
        const bool branch_taken_0x251a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x251a2c) {
            ctx->pc = 0x251A38u;
            goto label_251a38;
        }
    }
    ctx->pc = 0x251A34u;
label_251a34:
    // 0x251a34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x251a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251a38:
    // 0x251a38: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_251a3c:
    if (ctx->pc == 0x251A3Cu) {
        ctx->pc = 0x251A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A38u;
        // 0x251a3c: 0x8e221004  lw          $v0, 0x1004($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A40u;
        goto label_251a40;
    }
    ctx->pc = 0x251A38u;
    {
        const bool branch_taken_0x251a38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x251a38) {
            ctx->pc = 0x251A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251A38u;
            // 0x251a3c: 0x8e221004  lw          $v0, 0x1004($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251A58u;
            goto label_251a58;
        }
    }
    ctx->pc = 0x251A40u;
label_251a40:
    // 0x251a40: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x251a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_251a44:
    // 0x251a44: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x251a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
label_251a48:
    // 0x251a48: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x251a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_251a4c:
    // 0x251a4c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_251a50:
    if (ctx->pc == 0x251A50u) {
        ctx->pc = 0x251A54u;
        goto label_251a54;
    }
    ctx->pc = 0x251A4Cu;
    {
        const bool branch_taken_0x251a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251a4c) {
            ctx->pc = 0x251AD0u;
            goto label_251ad0;
        }
    }
    ctx->pc = 0x251A54u;
label_251a54:
    // 0x251a54: 0x8e221004  lw          $v0, 0x1004($s1)
    ctx->pc = 0x251a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
label_251a58:
    // 0x251a58: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_251a5c:
    if (ctx->pc == 0x251A5Cu) {
        ctx->pc = 0x251A60u;
        goto label_251a60;
    }
    ctx->pc = 0x251A58u;
    {
        const bool branch_taken_0x251a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251a58) {
            ctx->pc = 0x251AD0u;
            goto label_251ad0;
        }
    }
    ctx->pc = 0x251A60u;
label_251a60:
    // 0x251a60: 0x8e220fec  lw          $v0, 0xFEC($s1)
    ctx->pc = 0x251a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4076)));
label_251a64:
    // 0x251a64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x251a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_251a68:
    // 0x251a68: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x251a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251a6c:
    // 0x251a6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x251a6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251a70:
    // 0x251a70: 0x0  nop
    ctx->pc = 0x251a70u;
    // NOP
label_251a74:
    // 0x251a74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_251a78:
    if (ctx->pc == 0x251A78u) {
        ctx->pc = 0x251A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A74u;
        // 0x251a78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A7Cu;
        goto label_251a7c;
    }
    ctx->pc = 0x251A74u;
    {
        const bool branch_taken_0x251a74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x251A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A74u;
        // 0x251a78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a74) {
            ctx->pc = 0x251A80u;
            goto label_251a80;
        }
    }
    ctx->pc = 0x251A7Cu;
label_251a7c:
    // 0x251a7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x251a7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251a80:
    // 0x251a80: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_251a84:
    if (ctx->pc == 0x251A84u) {
        ctx->pc = 0x251A88u;
        goto label_251a88;
    }
    ctx->pc = 0x251A80u;
    {
        const bool branch_taken_0x251a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x251a80) {
            ctx->pc = 0x251AD0u;
            goto label_251ad0;
        }
    }
    ctx->pc = 0x251A88u;
label_251a88:
    // 0x251a88: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x251a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251a8c:
    // 0x251a8c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x251a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_251a90:
    // 0x251a90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_251a94:
    // 0x251a94: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x251a94u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_251a98:
    // 0x251a98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x251a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251a9c:
    // 0x251a9c: 0x0  nop
    ctx->pc = 0x251a9cu;
    // NOP
label_251aa0:
    // 0x251aa0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_251aa4:
    if (ctx->pc == 0x251AA4u) {
        ctx->pc = 0x251AA8u;
        goto label_251aa8;
    }
    ctx->pc = 0x251AA0u;
    {
        const bool branch_taken_0x251aa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251aa0) {
            ctx->pc = 0x251AD0u;
            goto label_251ad0;
        }
    }
    ctx->pc = 0x251AA8u;
label_251aa8:
    // 0x251aa8: 0x8e230ff8  lw          $v1, 0xFF8($s1)
    ctx->pc = 0x251aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
label_251aac:
    // 0x251aac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x251aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_251ab0:
    // 0x251ab0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x251ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_251ab4:
    // 0x251ab4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_251ab8:
    if (ctx->pc == 0x251AB8u) {
        ctx->pc = 0x251ABCu;
        goto label_251abc;
    }
    ctx->pc = 0x251AB4u;
    {
        const bool branch_taken_0x251ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251ab4) {
            ctx->pc = 0x251AD0u;
            goto label_251ad0;
        }
    }
    ctx->pc = 0x251ABCu;
label_251abc:
    // 0x251abc: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x251abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_251ac0:
    // 0x251ac0: 0xc06b85c  jal         func_1AE170
label_251ac4:
    if (ctx->pc == 0x251AC4u) {
        ctx->pc = 0x251AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AC0u;
        // 0x251ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AC8u;
        goto label_251ac8;
    }
    ctx->pc = 0x251AC0u;
    SET_GPR_U32(ctx, 31, 0x251AC8u);
    ctx->pc = 0x251AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AC0u;
    // 0x251ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x251AC0u, 0x251AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AC8u;
label_251ac8:
    // 0x251ac8: 0x1000000f  b           . + 4 + (0xF << 2)
label_251acc:
    if (ctx->pc == 0x251ACCu) {
        ctx->pc = 0x251ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AC8u;
        // 0x251acc: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AD0u;
        goto label_251ad0;
    }
    ctx->pc = 0x251AC8u;
    {
        const bool branch_taken_0x251ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AC8u;
        // 0x251acc: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ac8) {
            ctx->pc = 0x251B08u;
            goto label_251b08;
        }
    }
    ctx->pc = 0x251AD0u;
label_251ad0:
    // 0x251ad0: 0xc09470c  jal         func_251C30
label_251ad4:
    if (ctx->pc == 0x251AD4u) {
        ctx->pc = 0x251AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AD0u;
        // 0x251ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AD8u;
        goto label_251ad8;
    }
    ctx->pc = 0x251AD0u;
    SET_GPR_U32(ctx, 31, 0x251AD8u);
    ctx->pc = 0x251AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AD0u;
    // 0x251ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251C30u, 0x251AD0u, 0x251AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AD8u;
label_251ad8:
    // 0x251ad8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_251adc:
    if (ctx->pc == 0x251ADCu) {
        ctx->pc = 0x251AE0u;
        goto label_251ae0;
    }
    ctx->pc = 0x251AD8u;
    {
        const bool branch_taken_0x251ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ad8) {
            ctx->pc = 0x251AFCu;
            goto label_251afc;
        }
    }
    ctx->pc = 0x251AE0u;
label_251ae0:
    // 0x251ae0: 0xc06b9c0  jal         func_1AE700
label_251ae4:
    if (ctx->pc == 0x251AE4u) {
        ctx->pc = 0x251AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AE0u;
        // 0x251ae4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AE8u;
        goto label_251ae8;
    }
    ctx->pc = 0x251AE0u;
    SET_GPR_U32(ctx, 31, 0x251AE8u);
    ctx->pc = 0x251AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AE0u;
    // 0x251ae4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE700u, 0x251AE0u, 0x251AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AE8u;
label_251ae8:
    // 0x251ae8: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x251ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_251aec:
    // 0x251aec: 0xc06c546  jal         func_1B1518
label_251af0:
    if (ctx->pc == 0x251AF0u) {
        ctx->pc = 0x251AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AECu;
        // 0x251af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AF4u;
        goto label_251af4;
    }
    ctx->pc = 0x251AECu;
    SET_GPR_U32(ctx, 31, 0x251AF4u);
    ctx->pc = 0x251AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AECu;
    // 0x251af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x251AECu, 0x251AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AF4u;
label_251af4:
    // 0x251af4: 0x10000004  b           . + 4 + (0x4 << 2)
label_251af8:
    if (ctx->pc == 0x251AF8u) {
        ctx->pc = 0x251AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AF4u;
        // 0x251af8: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AFCu;
        goto label_251afc;
    }
    ctx->pc = 0x251AF4u;
    {
        const bool branch_taken_0x251af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AF4u;
        // 0x251af8: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251af4) {
            ctx->pc = 0x251B08u;
            goto label_251b08;
        }
    }
    ctx->pc = 0x251AFCu;
label_251afc:
    // 0x251afc: 0xc08dc8e  jal         func_237238
label_251b00:
    if (ctx->pc == 0x251B00u) {
        ctx->pc = 0x251B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AFCu;
        // 0x251b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251B04u;
        goto label_251b04;
    }
    ctx->pc = 0x251AFCu;
    SET_GPR_U32(ctx, 31, 0x251B04u);
    ctx->pc = 0x251B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AFCu;
    // 0x251b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237238u, 0x251AFCu, 0x251B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B04u;
label_251b04:
    // 0x251b04: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x251b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_251b08:
    // 0x251b08: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x251b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_251b0c:
    // 0x251b0c: 0x40f809  jalr        $v0
label_251b10:
    if (ctx->pc == 0x251B10u) {
        ctx->pc = 0x251B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B0Cu;
        // 0x251b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251B14u;
        goto label_251b14;
    }
    ctx->pc = 0x251B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251B14u);
        ctx->pc = 0x251B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B0Cu;
        // 0x251b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251B0Cu, 0x251B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251B14u;
label_251b14:
    // 0x251b14: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x251b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_251b18:
    // 0x251b18: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x251b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_251b1c:
    // 0x251b1c: 0xc4619904  lwc1        $f1, -0x66FC($v1)
    ctx->pc = 0x251b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251b20:
    // 0x251b20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x251b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_251b24:
    // 0x251b24: 0xc6201074  lwc1        $f0, 0x1074($s1)
    ctx->pc = 0x251b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251b28:
    // 0x251b28: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x251b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_251b2c:
    // 0x251b2c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_251b30:
    if (ctx->pc == 0x251B30u) {
        ctx->pc = 0x251B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B2Cu;
        // 0x251b30: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251B34u;
        goto label_251b34;
    }
    ctx->pc = 0x251B2Cu;
    {
        const bool branch_taken_0x251b2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x251B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B2Cu;
        // 0x251b30: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b2c) {
            ctx->pc = 0x251B48u;
            goto label_251b48;
        }
    }
    ctx->pc = 0x251B34u;
label_251b34:
    // 0x251b34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x251b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_251b38:
    // 0x251b38: 0x0  nop
    ctx->pc = 0x251b38u;
    // NOP
label_251b3c:
    // 0x251b3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x251b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_251b40:
    // 0x251b40: 0x10000008  b           . + 4 + (0x8 << 2)
label_251b44:
    if (ctx->pc == 0x251B44u) {
        ctx->pc = 0x251B48u;
        goto label_251b48;
    }
    ctx->pc = 0x251B40u;
    {
        const bool branch_taken_0x251b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251b40) {
            ctx->pc = 0x251B64u;
            goto label_251b64;
        }
    }
    ctx->pc = 0x251B48u;
label_251b48:
    // 0x251b48: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x251b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_251b4c:
    // 0x251b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x251b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_251b50:
    // 0x251b50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x251b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_251b54:
    // 0x251b54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x251b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_251b58:
    // 0x251b58: 0x0  nop
    ctx->pc = 0x251b58u;
    // NOP
label_251b5c:
    // 0x251b5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x251b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_251b60:
    // 0x251b60: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x251b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_251b64:
    // 0x251b64: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x251b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_251b68:
    // 0x251b68: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x251b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_251b6c:
    // 0x251b6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_251b70:
    // 0x251b70: 0x0  nop
    ctx->pc = 0x251b70u;
    // NOP
label_251b74:
    // 0x251b74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x251b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_251b78:
    // 0x251b78: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x251b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251b7c:
    // 0x251b7c: 0x0  nop
    ctx->pc = 0x251b7cu;
    // NOP
label_251b80:
    // 0x251b80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_251b84:
    if (ctx->pc == 0x251B84u) {
        ctx->pc = 0x251B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B80u;
        // 0x251b84: 0xae20106c  sw          $zero, 0x106C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251B88u;
        goto label_251b88;
    }
    ctx->pc = 0x251B80u;
    {
        const bool branch_taken_0x251b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251b80) {
            ctx->pc = 0x251B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251B80u;
            // 0x251b84: 0xae20106c  sw          $zero, 0x106C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251B88u;
            goto label_251b88;
        }
    }
    ctx->pc = 0x251B88u;
label_251b88:
    // 0x251b88: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x251b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_251b8c:
    // 0x251b8c: 0xc6211078  lwc1        $f1, 0x1078($s1)
    ctx->pc = 0x251b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251b90:
    // 0x251b90: 0xc4409908  lwc1        $f0, -0x66F8($v0)
    ctx->pc = 0x251b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251b94:
    // 0x251b94: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x251b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
label_251b98:
    // 0x251b98: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_251b9c:
    if (ctx->pc == 0x251B9Cu) {
        ctx->pc = 0x251B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B98u;
        // 0x251b9c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251BA0u;
        goto label_251ba0;
    }
    ctx->pc = 0x251B98u;
    {
        const bool branch_taken_0x251b98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x251B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B98u;
        // 0x251b9c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b98) {
            ctx->pc = 0x251BB4u;
            goto label_251bb4;
        }
    }
    ctx->pc = 0x251BA0u;
label_251ba0:
    // 0x251ba0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x251ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_251ba4:
    // 0x251ba4: 0x0  nop
    ctx->pc = 0x251ba4u;
    // NOP
label_251ba8:
    // 0x251ba8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x251ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_251bac:
    // 0x251bac: 0x10000008  b           . + 4 + (0x8 << 2)
label_251bb0:
    if (ctx->pc == 0x251BB0u) {
        ctx->pc = 0x251BB4u;
        goto label_251bb4;
    }
    ctx->pc = 0x251BACu;
    {
        const bool branch_taken_0x251bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251bac) {
            ctx->pc = 0x251BD0u;
            goto label_251bd0;
        }
    }
    ctx->pc = 0x251BB4u;
label_251bb4:
    // 0x251bb4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x251bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_251bb8:
    // 0x251bb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x251bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_251bbc:
    // 0x251bbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x251bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_251bc0:
    // 0x251bc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x251bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_251bc4:
    // 0x251bc4: 0x0  nop
    ctx->pc = 0x251bc4u;
    // NOP
label_251bc8:
    // 0x251bc8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x251bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_251bcc:
    // 0x251bcc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x251bccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_251bd0:
    // 0x251bd0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x251bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_251bd4:
    // 0x251bd4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x251bd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_251bd8:
    // 0x251bd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_251bdc:
    // 0x251bdc: 0x0  nop
    ctx->pc = 0x251bdcu;
    // NOP
label_251be0:
    // 0x251be0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x251be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_251be4:
    // 0x251be4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251be8:
    // 0x251be8: 0x0  nop
    ctx->pc = 0x251be8u;
    // NOP
label_251bec:
    // 0x251bec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_251bf0:
    if (ctx->pc == 0x251BF0u) {
        ctx->pc = 0x251BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BECu;
        // 0x251bf0: 0xae201070  sw          $zero, 0x1070($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251BF4u;
        goto label_251bf4;
    }
    ctx->pc = 0x251BECu;
    {
        const bool branch_taken_0x251bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251bec) {
            ctx->pc = 0x251BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251BECu;
            // 0x251bf0: 0xae201070  sw          $zero, 0x1070($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4208), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251BF4u;
            goto label_251bf4;
        }
    }
    ctx->pc = 0x251BF4u;
label_251bf4:
    // 0x251bf4: 0xc094df2  jal         func_2537C8
label_251bf8:
    if (ctx->pc == 0x251BF8u) {
        ctx->pc = 0x251BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BF4u;
        // 0x251bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251BFCu;
        goto label_251bfc;
    }
    ctx->pc = 0x251BF4u;
    SET_GPR_U32(ctx, 31, 0x251BFCu);
    ctx->pc = 0x251BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251BF4u;
    // 0x251bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2537C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2537C8u, 0x251BF4u, 0x251BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251BFCu;
label_251bfc:
    // 0x251bfc: 0xc094914  jal         func_252450
label_251c00:
    if (ctx->pc == 0x251C00u) {
        ctx->pc = 0x251C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BFCu;
        // 0x251c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C04u;
        goto label_251c04;
    }
    ctx->pc = 0x251BFCu;
    SET_GPR_U32(ctx, 31, 0x251C04u);
    ctx->pc = 0x251C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251BFCu;
    // 0x251c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252450u, 0x251BFCu, 0x251C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C04u;
label_251c04:
    // 0x251c04: 0xc0944f6  jal         func_2513D8
label_251c08:
    if (ctx->pc == 0x251C08u) {
        ctx->pc = 0x251C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C04u;
        // 0x251c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C0Cu;
        goto label_251c0c;
    }
    ctx->pc = 0x251C04u;
    SET_GPR_U32(ctx, 31, 0x251C0Cu);
    ctx->pc = 0x251C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C04u;
    // 0x251c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x251C04u, 0x251C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C0Cu;
label_251c0c:
    // 0x251c0c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x251c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_251c10:
    // 0x251c10: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x251c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
label_251c14:
    // 0x251c14: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x251c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_251c18:
    // 0x251c18: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x251c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_251c1c:
    // 0x251c1c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x251c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_251c20:
    // 0x251c20: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x251c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_251c24:
    // 0x251c24: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x251c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_251c28:
    // 0x251c28: 0x3e00008  jr          $ra
label_251c2c:
    if (ctx->pc == 0x251C2Cu) {
        ctx->pc = 0x251C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C28u;
        // 0x251c2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C30u;
        goto label_fallthrough_0x251c28;
    }
    ctx->pc = 0x251C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C28u;
        // 0x251c2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x251c28:
    ctx->pc = 0x251C30u;
}
