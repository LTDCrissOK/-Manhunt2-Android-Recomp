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

// Function: sub_00196018
// Address: 0x196018 - 0x1965b8
void sub_00196018_0x196018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196018_0x196018");
#endif

    switch (ctx->pc) {
        case 0x196018u: goto label_196018;
        case 0x19601cu: goto label_19601c;
        case 0x196020u: goto label_196020;
        case 0x196024u: goto label_196024;
        case 0x196028u: goto label_196028;
        case 0x19602cu: goto label_19602c;
        case 0x196030u: goto label_196030;
        case 0x196034u: goto label_196034;
        case 0x196038u: goto label_196038;
        case 0x19603cu: goto label_19603c;
        case 0x196040u: goto label_196040;
        case 0x196044u: goto label_196044;
        case 0x196048u: goto label_196048;
        case 0x19604cu: goto label_19604c;
        case 0x196050u: goto label_196050;
        case 0x196054u: goto label_196054;
        case 0x196058u: goto label_196058;
        case 0x19605cu: goto label_19605c;
        case 0x196060u: goto label_196060;
        case 0x196064u: goto label_196064;
        case 0x196068u: goto label_196068;
        case 0x19606cu: goto label_19606c;
        case 0x196070u: goto label_196070;
        case 0x196074u: goto label_196074;
        case 0x196078u: goto label_196078;
        case 0x19607cu: goto label_19607c;
        case 0x196080u: goto label_196080;
        case 0x196084u: goto label_196084;
        case 0x196088u: goto label_196088;
        case 0x19608cu: goto label_19608c;
        case 0x196090u: goto label_196090;
        case 0x196094u: goto label_196094;
        case 0x196098u: goto label_196098;
        case 0x19609cu: goto label_19609c;
        case 0x1960a0u: goto label_1960a0;
        case 0x1960a4u: goto label_1960a4;
        case 0x1960a8u: goto label_1960a8;
        case 0x1960acu: goto label_1960ac;
        case 0x1960b0u: goto label_1960b0;
        case 0x1960b4u: goto label_1960b4;
        case 0x1960b8u: goto label_1960b8;
        case 0x1960bcu: goto label_1960bc;
        case 0x1960c0u: goto label_1960c0;
        case 0x1960c4u: goto label_1960c4;
        case 0x1960c8u: goto label_1960c8;
        case 0x1960ccu: goto label_1960cc;
        case 0x1960d0u: goto label_1960d0;
        case 0x1960d4u: goto label_1960d4;
        case 0x1960d8u: goto label_1960d8;
        case 0x1960dcu: goto label_1960dc;
        case 0x1960e0u: goto label_1960e0;
        case 0x1960e4u: goto label_1960e4;
        case 0x1960e8u: goto label_1960e8;
        case 0x1960ecu: goto label_1960ec;
        case 0x1960f0u: goto label_1960f0;
        case 0x1960f4u: goto label_1960f4;
        case 0x1960f8u: goto label_1960f8;
        case 0x1960fcu: goto label_1960fc;
        case 0x196100u: goto label_196100;
        case 0x196104u: goto label_196104;
        case 0x196108u: goto label_196108;
        case 0x19610cu: goto label_19610c;
        case 0x196110u: goto label_196110;
        case 0x196114u: goto label_196114;
        case 0x196118u: goto label_196118;
        case 0x19611cu: goto label_19611c;
        case 0x196120u: goto label_196120;
        case 0x196124u: goto label_196124;
        case 0x196128u: goto label_196128;
        case 0x19612cu: goto label_19612c;
        case 0x196130u: goto label_196130;
        case 0x196134u: goto label_196134;
        case 0x196138u: goto label_196138;
        case 0x19613cu: goto label_19613c;
        case 0x196140u: goto label_196140;
        case 0x196144u: goto label_196144;
        case 0x196148u: goto label_196148;
        case 0x19614cu: goto label_19614c;
        case 0x196150u: goto label_196150;
        case 0x196154u: goto label_196154;
        case 0x196158u: goto label_196158;
        case 0x19615cu: goto label_19615c;
        case 0x196160u: goto label_196160;
        case 0x196164u: goto label_196164;
        case 0x196168u: goto label_196168;
        case 0x19616cu: goto label_19616c;
        case 0x196170u: goto label_196170;
        case 0x196174u: goto label_196174;
        case 0x196178u: goto label_196178;
        case 0x19617cu: goto label_19617c;
        case 0x196180u: goto label_196180;
        case 0x196184u: goto label_196184;
        case 0x196188u: goto label_196188;
        case 0x19618cu: goto label_19618c;
        case 0x196190u: goto label_196190;
        case 0x196194u: goto label_196194;
        case 0x196198u: goto label_196198;
        case 0x19619cu: goto label_19619c;
        case 0x1961a0u: goto label_1961a0;
        case 0x1961a4u: goto label_1961a4;
        case 0x1961a8u: goto label_1961a8;
        case 0x1961acu: goto label_1961ac;
        case 0x1961b0u: goto label_1961b0;
        case 0x1961b4u: goto label_1961b4;
        case 0x1961b8u: goto label_1961b8;
        case 0x1961bcu: goto label_1961bc;
        case 0x1961c0u: goto label_1961c0;
        case 0x1961c4u: goto label_1961c4;
        case 0x1961c8u: goto label_1961c8;
        case 0x1961ccu: goto label_1961cc;
        case 0x1961d0u: goto label_1961d0;
        case 0x1961d4u: goto label_1961d4;
        case 0x1961d8u: goto label_1961d8;
        case 0x1961dcu: goto label_1961dc;
        case 0x1961e0u: goto label_1961e0;
        case 0x1961e4u: goto label_1961e4;
        case 0x1961e8u: goto label_1961e8;
        case 0x1961ecu: goto label_1961ec;
        case 0x1961f0u: goto label_1961f0;
        case 0x1961f4u: goto label_1961f4;
        case 0x1961f8u: goto label_1961f8;
        case 0x1961fcu: goto label_1961fc;
        case 0x196200u: goto label_196200;
        case 0x196204u: goto label_196204;
        case 0x196208u: goto label_196208;
        case 0x19620cu: goto label_19620c;
        case 0x196210u: goto label_196210;
        case 0x196214u: goto label_196214;
        case 0x196218u: goto label_196218;
        case 0x19621cu: goto label_19621c;
        case 0x196220u: goto label_196220;
        case 0x196224u: goto label_196224;
        case 0x196228u: goto label_196228;
        case 0x19622cu: goto label_19622c;
        case 0x196230u: goto label_196230;
        case 0x196234u: goto label_196234;
        case 0x196238u: goto label_196238;
        case 0x19623cu: goto label_19623c;
        case 0x196240u: goto label_196240;
        case 0x196244u: goto label_196244;
        case 0x196248u: goto label_196248;
        case 0x19624cu: goto label_19624c;
        case 0x196250u: goto label_196250;
        case 0x196254u: goto label_196254;
        case 0x196258u: goto label_196258;
        case 0x19625cu: goto label_19625c;
        case 0x196260u: goto label_196260;
        case 0x196264u: goto label_196264;
        case 0x196268u: goto label_196268;
        case 0x19626cu: goto label_19626c;
        case 0x196270u: goto label_196270;
        case 0x196274u: goto label_196274;
        case 0x196278u: goto label_196278;
        case 0x19627cu: goto label_19627c;
        case 0x196280u: goto label_196280;
        case 0x196284u: goto label_196284;
        case 0x196288u: goto label_196288;
        case 0x19628cu: goto label_19628c;
        case 0x196290u: goto label_196290;
        case 0x196294u: goto label_196294;
        case 0x196298u: goto label_196298;
        case 0x19629cu: goto label_19629c;
        case 0x1962a0u: goto label_1962a0;
        case 0x1962a4u: goto label_1962a4;
        case 0x1962a8u: goto label_1962a8;
        case 0x1962acu: goto label_1962ac;
        case 0x1962b0u: goto label_1962b0;
        case 0x1962b4u: goto label_1962b4;
        case 0x1962b8u: goto label_1962b8;
        case 0x1962bcu: goto label_1962bc;
        case 0x1962c0u: goto label_1962c0;
        case 0x1962c4u: goto label_1962c4;
        case 0x1962c8u: goto label_1962c8;
        case 0x1962ccu: goto label_1962cc;
        case 0x1962d0u: goto label_1962d0;
        case 0x1962d4u: goto label_1962d4;
        case 0x1962d8u: goto label_1962d8;
        case 0x1962dcu: goto label_1962dc;
        case 0x1962e0u: goto label_1962e0;
        case 0x1962e4u: goto label_1962e4;
        case 0x1962e8u: goto label_1962e8;
        case 0x1962ecu: goto label_1962ec;
        case 0x1962f0u: goto label_1962f0;
        case 0x1962f4u: goto label_1962f4;
        case 0x1962f8u: goto label_1962f8;
        case 0x1962fcu: goto label_1962fc;
        case 0x196300u: goto label_196300;
        case 0x196304u: goto label_196304;
        case 0x196308u: goto label_196308;
        case 0x19630cu: goto label_19630c;
        case 0x196310u: goto label_196310;
        case 0x196314u: goto label_196314;
        case 0x196318u: goto label_196318;
        case 0x19631cu: goto label_19631c;
        case 0x196320u: goto label_196320;
        case 0x196324u: goto label_196324;
        case 0x196328u: goto label_196328;
        case 0x19632cu: goto label_19632c;
        case 0x196330u: goto label_196330;
        case 0x196334u: goto label_196334;
        case 0x196338u: goto label_196338;
        case 0x19633cu: goto label_19633c;
        case 0x196340u: goto label_196340;
        case 0x196344u: goto label_196344;
        case 0x196348u: goto label_196348;
        case 0x19634cu: goto label_19634c;
        case 0x196350u: goto label_196350;
        case 0x196354u: goto label_196354;
        case 0x196358u: goto label_196358;
        case 0x19635cu: goto label_19635c;
        case 0x196360u: goto label_196360;
        case 0x196364u: goto label_196364;
        case 0x196368u: goto label_196368;
        case 0x19636cu: goto label_19636c;
        case 0x196370u: goto label_196370;
        case 0x196374u: goto label_196374;
        case 0x196378u: goto label_196378;
        case 0x19637cu: goto label_19637c;
        case 0x196380u: goto label_196380;
        case 0x196384u: goto label_196384;
        case 0x196388u: goto label_196388;
        case 0x19638cu: goto label_19638c;
        case 0x196390u: goto label_196390;
        case 0x196394u: goto label_196394;
        case 0x196398u: goto label_196398;
        case 0x19639cu: goto label_19639c;
        case 0x1963a0u: goto label_1963a0;
        case 0x1963a4u: goto label_1963a4;
        case 0x1963a8u: goto label_1963a8;
        case 0x1963acu: goto label_1963ac;
        case 0x1963b0u: goto label_1963b0;
        case 0x1963b4u: goto label_1963b4;
        case 0x1963b8u: goto label_1963b8;
        case 0x1963bcu: goto label_1963bc;
        case 0x1963c0u: goto label_1963c0;
        case 0x1963c4u: goto label_1963c4;
        case 0x1963c8u: goto label_1963c8;
        case 0x1963ccu: goto label_1963cc;
        case 0x1963d0u: goto label_1963d0;
        case 0x1963d4u: goto label_1963d4;
        case 0x1963d8u: goto label_1963d8;
        case 0x1963dcu: goto label_1963dc;
        case 0x1963e0u: goto label_1963e0;
        case 0x1963e4u: goto label_1963e4;
        case 0x1963e8u: goto label_1963e8;
        case 0x1963ecu: goto label_1963ec;
        case 0x1963f0u: goto label_1963f0;
        case 0x1963f4u: goto label_1963f4;
        case 0x1963f8u: goto label_1963f8;
        case 0x1963fcu: goto label_1963fc;
        case 0x196400u: goto label_196400;
        case 0x196404u: goto label_196404;
        case 0x196408u: goto label_196408;
        case 0x19640cu: goto label_19640c;
        case 0x196410u: goto label_196410;
        case 0x196414u: goto label_196414;
        case 0x196418u: goto label_196418;
        case 0x19641cu: goto label_19641c;
        case 0x196420u: goto label_196420;
        case 0x196424u: goto label_196424;
        case 0x196428u: goto label_196428;
        case 0x19642cu: goto label_19642c;
        case 0x196430u: goto label_196430;
        case 0x196434u: goto label_196434;
        case 0x196438u: goto label_196438;
        case 0x19643cu: goto label_19643c;
        case 0x196440u: goto label_196440;
        case 0x196444u: goto label_196444;
        case 0x196448u: goto label_196448;
        case 0x19644cu: goto label_19644c;
        case 0x196450u: goto label_196450;
        case 0x196454u: goto label_196454;
        case 0x196458u: goto label_196458;
        case 0x19645cu: goto label_19645c;
        case 0x196460u: goto label_196460;
        case 0x196464u: goto label_196464;
        case 0x196468u: goto label_196468;
        case 0x19646cu: goto label_19646c;
        case 0x196470u: goto label_196470;
        case 0x196474u: goto label_196474;
        case 0x196478u: goto label_196478;
        case 0x19647cu: goto label_19647c;
        case 0x196480u: goto label_196480;
        case 0x196484u: goto label_196484;
        case 0x196488u: goto label_196488;
        case 0x19648cu: goto label_19648c;
        case 0x196490u: goto label_196490;
        case 0x196494u: goto label_196494;
        case 0x196498u: goto label_196498;
        case 0x19649cu: goto label_19649c;
        case 0x1964a0u: goto label_1964a0;
        case 0x1964a4u: goto label_1964a4;
        case 0x1964a8u: goto label_1964a8;
        case 0x1964acu: goto label_1964ac;
        case 0x1964b0u: goto label_1964b0;
        case 0x1964b4u: goto label_1964b4;
        case 0x1964b8u: goto label_1964b8;
        case 0x1964bcu: goto label_1964bc;
        case 0x1964c0u: goto label_1964c0;
        case 0x1964c4u: goto label_1964c4;
        case 0x1964c8u: goto label_1964c8;
        case 0x1964ccu: goto label_1964cc;
        case 0x1964d0u: goto label_1964d0;
        case 0x1964d4u: goto label_1964d4;
        case 0x1964d8u: goto label_1964d8;
        case 0x1964dcu: goto label_1964dc;
        case 0x1964e0u: goto label_1964e0;
        case 0x1964e4u: goto label_1964e4;
        case 0x1964e8u: goto label_1964e8;
        case 0x1964ecu: goto label_1964ec;
        case 0x1964f0u: goto label_1964f0;
        case 0x1964f4u: goto label_1964f4;
        case 0x1964f8u: goto label_1964f8;
        case 0x1964fcu: goto label_1964fc;
        case 0x196500u: goto label_196500;
        case 0x196504u: goto label_196504;
        case 0x196508u: goto label_196508;
        case 0x19650cu: goto label_19650c;
        case 0x196510u: goto label_196510;
        case 0x196514u: goto label_196514;
        case 0x196518u: goto label_196518;
        case 0x19651cu: goto label_19651c;
        case 0x196520u: goto label_196520;
        case 0x196524u: goto label_196524;
        case 0x196528u: goto label_196528;
        case 0x19652cu: goto label_19652c;
        case 0x196530u: goto label_196530;
        case 0x196534u: goto label_196534;
        case 0x196538u: goto label_196538;
        case 0x19653cu: goto label_19653c;
        case 0x196540u: goto label_196540;
        case 0x196544u: goto label_196544;
        case 0x196548u: goto label_196548;
        case 0x19654cu: goto label_19654c;
        case 0x196550u: goto label_196550;
        case 0x196554u: goto label_196554;
        case 0x196558u: goto label_196558;
        case 0x19655cu: goto label_19655c;
        case 0x196560u: goto label_196560;
        case 0x196564u: goto label_196564;
        case 0x196568u: goto label_196568;
        case 0x19656cu: goto label_19656c;
        case 0x196570u: goto label_196570;
        case 0x196574u: goto label_196574;
        case 0x196578u: goto label_196578;
        case 0x19657cu: goto label_19657c;
        case 0x196580u: goto label_196580;
        case 0x196584u: goto label_196584;
        case 0x196588u: goto label_196588;
        case 0x19658cu: goto label_19658c;
        case 0x196590u: goto label_196590;
        case 0x196594u: goto label_196594;
        case 0x196598u: goto label_196598;
        case 0x19659cu: goto label_19659c;
        case 0x1965a0u: goto label_1965a0;
        case 0x1965a4u: goto label_1965a4;
        case 0x1965a8u: goto label_1965a8;
        case 0x1965acu: goto label_1965ac;
        case 0x1965b0u: goto label_1965b0;
        case 0x1965b4u: goto label_1965b4;
        default: break;
    }

    ctx->pc = 0x196018u;

label_196018:
    // 0x196018: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x196018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19601c:
    // 0x19601c: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x19601cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
label_196020:
    // 0x196020: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x196020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_196024:
    // 0x196024: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x196024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
label_196028:
    // 0x196028: 0x34c601ff  ori         $a2, $a2, 0x1FF
    ctx->pc = 0x196028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)511);
label_19602c:
    // 0x19602c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_196030:
    // 0x196030: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x196030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_196034:
    // 0x196034: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x196034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
label_196038:
    // 0x196038: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x196038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_19603c:
    // 0x19603c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19603cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196040:
    // 0x196040: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x196040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_196044:
    // 0x196044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196048:
    // 0x196048: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x196048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_19604c:
    // 0x19604c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_196050:
    // 0x196050: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x196050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_196054:
    // 0x196054: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x196054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_196058:
    // 0x196058: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x196058u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
label_19605c:
    // 0x19605c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x19605cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_196060:
    // 0x196060: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x196060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_196064:
    // 0x196064: 0xc061a4c  jal         func_186930
label_196068:
    if (ctx->pc == 0x196068u) {
        ctx->pc = 0x196068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196064u;
        // 0x196068: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19606Cu;
        goto label_19606c;
    }
    ctx->pc = 0x196064u;
    SET_GPR_U32(ctx, 31, 0x19606Cu);
    ctx->pc = 0x196068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196064u;
    // 0x196068: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186930u, 0x196064u, 0x19606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19606Cu;
label_19606c:
    // 0x19606c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x19606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_196070:
    // 0x196070: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x196070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_196074:
    // 0x196074: 0x14700006  bne         $v1, $s0, . + 4 + (0x6 << 2)
label_196078:
    if (ctx->pc == 0x196078u) {
        ctx->pc = 0x19607Cu;
        goto label_19607c;
    }
    ctx->pc = 0x196074u;
    {
        const bool branch_taken_0x196074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x196074) {
            ctx->pc = 0x196090u;
            goto label_196090;
        }
    }
    ctx->pc = 0x19607Cu;
label_19607c:
    // 0x19607c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x19607cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_196080:
    // 0x196080: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x196080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_196084:
    // 0x196084: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x196084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_196088:
    // 0x196088: 0x1000000a  b           . + 4 + (0xA << 2)
label_19608c:
    if (ctx->pc == 0x19608Cu) {
        ctx->pc = 0x19608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196088u;
        // 0x19608c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x196090u;
        goto label_196090;
    }
    ctx->pc = 0x196088u;
    {
        const bool branch_taken_0x196088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196088u;
        // 0x19608c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196088) {
            ctx->pc = 0x1960B4u;
            goto label_1960b4;
        }
    }
    ctx->pc = 0x196090u;
label_196090:
    // 0x196090: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_196094:
    if (ctx->pc == 0x196094u) {
        ctx->pc = 0x196094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196090u;
        // 0x196094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196098u;
        goto label_196098;
    }
    ctx->pc = 0x196090u;
    {
        const bool branch_taken_0x196090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x196094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196090u;
        // 0x196094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196090) {
            ctx->pc = 0x1960ACu;
            goto label_1960ac;
        }
    }
    ctx->pc = 0x196098u;
label_196098:
    // 0x196098: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19609c:
    // 0x19609c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1960a0:
    if (ctx->pc == 0x1960A0u) {
        ctx->pc = 0x1960A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19609Cu;
        // 0x1960a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960A4u;
        goto label_1960a4;
    }
    ctx->pc = 0x19609Cu;
    {
        const bool branch_taken_0x19609c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1960A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19609Cu;
        // 0x1960a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19609c) {
            ctx->pc = 0x1960ACu;
            goto label_1960ac;
        }
    }
    ctx->pc = 0x1960A4u;
label_1960a4:
    // 0x1960a4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1960a8:
    if (ctx->pc == 0x1960A8u) {
        ctx->pc = 0x1960A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A4u;
        // 0x1960a8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960ACu;
        goto label_1960ac;
    }
    ctx->pc = 0x1960A4u;
    {
        const bool branch_taken_0x1960a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1960A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A4u;
        // 0x1960a8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960a4) {
            ctx->pc = 0x1960B4u;
            goto label_1960b4;
        }
    }
    ctx->pc = 0x1960ACu;
label_1960ac:
    // 0x1960ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1960acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1960b0:
    // 0x1960b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1960b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1960b4:
    // 0x1960b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1960b8:
    if (ctx->pc == 0x1960B8u) {
        ctx->pc = 0x1960B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960B4u;
        // 0x1960b8: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960BCu;
        goto label_1960bc;
    }
    ctx->pc = 0x1960B4u;
    {
        const bool branch_taken_0x1960b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960B4u;
        // 0x1960b8: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960b4) {
            ctx->pc = 0x1960E8u;
            goto label_1960e8;
        }
    }
    ctx->pc = 0x1960BCu;
label_1960bc:
    // 0x1960bc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1960bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1960c0:
    // 0x1960c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1960c4:
    if (ctx->pc == 0x1960C4u) {
        ctx->pc = 0x1960C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C0u;
        // 0x1960c4: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960C8u;
        goto label_1960c8;
    }
    ctx->pc = 0x1960C0u;
    {
        const bool branch_taken_0x1960c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1960C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C0u;
        // 0x1960c4: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960c0) {
            ctx->pc = 0x1960D8u;
            goto label_1960d8;
        }
    }
    ctx->pc = 0x1960C8u;
label_1960c8:
    // 0x1960c8: 0xc06fb64  jal         func_1BED90
label_1960cc:
    if (ctx->pc == 0x1960CCu) {
        ctx->pc = 0x1960CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C8u;
        // 0x1960cc: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960D0u;
        goto label_1960d0;
    }
    ctx->pc = 0x1960C8u;
    SET_GPR_U32(ctx, 31, 0x1960D0u);
    ctx->pc = 0x1960CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960C8u;
    // 0x1960cc: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1960C8u, 0x1960D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960D0u;
label_1960d0:
    // 0x1960d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1960d4:
    if (ctx->pc == 0x1960D4u) {
        ctx->pc = 0x1960D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960D0u;
        // 0x1960d4: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960D8u;
        goto label_1960d8;
    }
    ctx->pc = 0x1960D0u;
    {
        const bool branch_taken_0x1960d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960D0u;
        // 0x1960d4: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960d0) {
            ctx->pc = 0x1960ECu;
            goto label_1960ec;
        }
    }
    ctx->pc = 0x1960D8u;
label_1960d8:
    // 0x1960d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1960dc:
    if (ctx->pc == 0x1960DCu) {
        ctx->pc = 0x1960DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960D8u;
        // 0x1960dc: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960E0u;
        goto label_1960e0;
    }
    ctx->pc = 0x1960D8u;
    {
        const bool branch_taken_0x1960d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1960DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960D8u;
        // 0x1960dc: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960d8) {
            ctx->pc = 0x1960ECu;
            goto label_1960ec;
        }
    }
    ctx->pc = 0x1960E0u;
label_1960e0:
    // 0x1960e0: 0xc06fb1e  jal         func_1BEC78
label_1960e4:
    if (ctx->pc == 0x1960E4u) {
        ctx->pc = 0x1960E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960E0u;
        // 0x1960e4: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960E8u;
        goto label_1960e8;
    }
    ctx->pc = 0x1960E0u;
    SET_GPR_U32(ctx, 31, 0x1960E8u);
    ctx->pc = 0x1960E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960E0u;
    // 0x1960e4: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x1960E0u, 0x1960E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960E8u;
label_1960e8:
    // 0x1960e8: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1960e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1960ec:
    // 0x1960ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1960ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1960f0:
    // 0x1960f0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1960f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1960f4:
    // 0x1960f4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1960f8:
    if (ctx->pc == 0x1960F8u) {
        ctx->pc = 0x1960F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960F4u;
        // 0x1960f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960FCu;
        goto label_1960fc;
    }
    ctx->pc = 0x1960F4u;
    {
        const bool branch_taken_0x1960f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1960F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960F4u;
        // 0x1960f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960f4) {
            ctx->pc = 0x196110u;
            goto label_196110;
        }
    }
    ctx->pc = 0x1960FCu;
label_1960fc:
    // 0x1960fc: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1960fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_196100:
    // 0x196100: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_196104:
    // 0x196104: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x196104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_196108:
    // 0x196108: 0x1000000a  b           . + 4 + (0xA << 2)
label_19610c:
    if (ctx->pc == 0x19610Cu) {
        ctx->pc = 0x19610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196108u;
        // 0x19610c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x196110u;
        goto label_196110;
    }
    ctx->pc = 0x196108u;
    {
        const bool branch_taken_0x196108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196108u;
        // 0x19610c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196108) {
            ctx->pc = 0x196134u;
            goto label_196134;
        }
    }
    ctx->pc = 0x196110u;
label_196110:
    // 0x196110: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_196114:
    if (ctx->pc == 0x196114u) {
        ctx->pc = 0x196114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196110u;
        // 0x196114: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196118u;
        goto label_196118;
    }
    ctx->pc = 0x196110u;
    {
        const bool branch_taken_0x196110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x196114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196110u;
        // 0x196114: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196110) {
            ctx->pc = 0x19612Cu;
            goto label_19612c;
        }
    }
    ctx->pc = 0x196118u;
label_196118:
    // 0x196118: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x196118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19611c:
    // 0x19611c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_196120:
    if (ctx->pc == 0x196120u) {
        ctx->pc = 0x196120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19611Cu;
        // 0x196120: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196124u;
        goto label_196124;
    }
    ctx->pc = 0x19611Cu;
    {
        const bool branch_taken_0x19611c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x196120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19611Cu;
        // 0x196120: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19611c) {
            ctx->pc = 0x19612Cu;
            goto label_19612c;
        }
    }
    ctx->pc = 0x196124u;
label_196124:
    // 0x196124: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_196128:
    if (ctx->pc == 0x196128u) {
        ctx->pc = 0x196128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196124u;
        // 0x196128: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19612Cu;
        goto label_19612c;
    }
    ctx->pc = 0x196124u;
    {
        const bool branch_taken_0x196124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x196128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196124u;
        // 0x196128: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196124) {
            ctx->pc = 0x196134u;
            goto label_196134;
        }
    }
    ctx->pc = 0x19612Cu;
label_19612c:
    // 0x19612c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196130:
    // 0x196130: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x196130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_196134:
    // 0x196134: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_196138:
    if (ctx->pc == 0x196138u) {
        ctx->pc = 0x19613Cu;
        goto label_19613c;
    }
    ctx->pc = 0x196134u;
    {
        const bool branch_taken_0x196134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196134) {
            ctx->pc = 0x196170u;
            goto label_196170;
        }
    }
    ctx->pc = 0x19613Cu;
label_19613c:
    // 0x19613c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x19613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_196140:
    // 0x196140: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_196144:
    if (ctx->pc == 0x196144u) {
        ctx->pc = 0x196144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196140u;
        // 0x196144: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x196148u;
        goto label_196148;
    }
    ctx->pc = 0x196140u;
    {
        const bool branch_taken_0x196140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196140u;
        // 0x196144: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196140) {
            ctx->pc = 0x19615Cu;
            goto label_19615c;
        }
    }
    ctx->pc = 0x196148u;
label_196148:
    // 0x196148: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x196148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_19614c:
    // 0x19614c: 0xc06fb64  jal         func_1BED90
label_196150:
    if (ctx->pc == 0x196150u) {
        ctx->pc = 0x196150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19614Cu;
        // 0x196150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196154u;
        goto label_196154;
    }
    ctx->pc = 0x19614Cu;
    SET_GPR_U32(ctx, 31, 0x196154u);
    ctx->pc = 0x196150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19614Cu;
    // 0x196150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x19614Cu, 0x196154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196154u;
label_196154:
    // 0x196154: 0x10000006  b           . + 4 + (0x6 << 2)
label_196158:
    if (ctx->pc == 0x196158u) {
        ctx->pc = 0x19615Cu;
        goto label_19615c;
    }
    ctx->pc = 0x196154u;
    {
        const bool branch_taken_0x196154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196154) {
            ctx->pc = 0x196170u;
            goto label_196170;
        }
    }
    ctx->pc = 0x19615Cu;
label_19615c:
    // 0x19615c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_196160:
    if (ctx->pc == 0x196160u) {
        ctx->pc = 0x196164u;
        goto label_196164;
    }
    ctx->pc = 0x19615Cu;
    {
        const bool branch_taken_0x19615c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19615c) {
            ctx->pc = 0x196170u;
            goto label_196170;
        }
    }
    ctx->pc = 0x196164u;
label_196164:
    // 0x196164: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x196164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_196168:
    // 0x196168: 0xc06fb1e  jal         func_1BEC78
label_19616c:
    if (ctx->pc == 0x19616Cu) {
        ctx->pc = 0x19616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196168u;
        // 0x19616c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196170u;
        goto label_196170;
    }
    ctx->pc = 0x196168u;
    SET_GPR_U32(ctx, 31, 0x196170u);
    ctx->pc = 0x19616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196168u;
    // 0x19616c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x196168u, 0x196170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196170u;
label_196170:
    // 0x196170: 0xc061a12  jal         func_186848
label_196174:
    if (ctx->pc == 0x196174u) {
        ctx->pc = 0x196174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196170u;
        // 0x196174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196178u;
        goto label_196178;
    }
    ctx->pc = 0x196170u;
    SET_GPR_U32(ctx, 31, 0x196178u);
    ctx->pc = 0x196174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196170u;
    // 0x196174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196170u, 0x196178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196178u;
label_196178:
    // 0x196178: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_19617c:
    // 0x19617c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_196180:
    if (ctx->pc == 0x196180u) {
        ctx->pc = 0x196180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19617Cu;
        // 0x196180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196184u;
        goto label_196184;
    }
    ctx->pc = 0x19617Cu;
    {
        const bool branch_taken_0x19617c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x196180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19617Cu;
        // 0x196180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19617c) {
            ctx->pc = 0x1961C4u;
            goto label_1961c4;
        }
    }
    ctx->pc = 0x196184u;
label_196184:
    // 0x196184: 0xc061a12  jal         func_186848
label_196188:
    if (ctx->pc == 0x196188u) {
        ctx->pc = 0x196188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196184u;
        // 0x196188: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19618Cu;
        goto label_19618c;
    }
    ctx->pc = 0x196184u;
    SET_GPR_U32(ctx, 31, 0x19618Cu);
    ctx->pc = 0x196188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196184u;
    // 0x196188: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196184u, 0x19618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19618Cu;
label_19618c:
    // 0x19618c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19618cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196190:
    // 0x196190: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x196190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_196194:
    // 0x196194: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x196194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_196198:
    // 0x196198: 0x40f809  jalr        $v0
label_19619c:
    if (ctx->pc == 0x19619Cu) {
        ctx->pc = 0x19619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196198u;
        // 0x19619c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961A0u;
        goto label_1961a0;
    }
    ctx->pc = 0x196198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1961A0u);
        ctx->pc = 0x19619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196198u;
        // 0x19619c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196198u, 0x1961A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1961A0u;
label_1961a0:
    // 0x1961a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1961a4:
    if (ctx->pc == 0x1961A4u) {
        ctx->pc = 0x1961A8u;
        goto label_1961a8;
    }
    ctx->pc = 0x1961A0u;
    {
        const bool branch_taken_0x1961a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1961a0) {
            ctx->pc = 0x1961BCu;
            goto label_1961bc;
        }
    }
    ctx->pc = 0x1961A8u;
label_1961a8:
    // 0x1961a8: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x1961a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_1961ac:
    // 0x1961ac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1961acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1961b0:
    // 0x1961b0: 0xc0f62ca  jal         func_3D8B28
label_1961b4:
    if (ctx->pc == 0x1961B4u) {
        ctx->pc = 0x1961B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961B0u;
        // 0x1961b4: 0x2484f140  addiu       $a0, $a0, -0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961B8u;
        goto label_1961b8;
    }
    ctx->pc = 0x1961B0u;
    SET_GPR_U32(ctx, 31, 0x1961B8u);
    ctx->pc = 0x1961B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961B0u;
    // 0x1961b4: 0x2484f140  addiu       $a0, $a0, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x1961B0u, 0x1961B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961B8u;
label_1961b8:
    // 0x1961b8: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1961b8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1961bc:
    // 0x1961bc: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
label_1961c0:
    if (ctx->pc == 0x1961C0u) {
        ctx->pc = 0x1961C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961BCu;
        // 0x1961c0: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961C4u;
        goto label_1961c4;
    }
    ctx->pc = 0x1961BCu;
    {
        const bool branch_taken_0x1961bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1961bc) {
            ctx->pc = 0x1961C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1961BCu;
            // 0x1961c0: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1961D4u;
            goto label_1961d4;
        }
    }
    ctx->pc = 0x1961C4u;
label_1961c4:
    // 0x1961c4: 0xc065aa0  jal         func_196A80
label_1961c8:
    if (ctx->pc == 0x1961C8u) {
        ctx->pc = 0x1961C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961C4u;
        // 0x1961c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961CCu;
        goto label_1961cc;
    }
    ctx->pc = 0x1961C4u;
    SET_GPR_U32(ctx, 31, 0x1961CCu);
    ctx->pc = 0x1961C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961C4u;
    // 0x1961c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196A80u, 0x1961C4u, 0x1961CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961CCu;
label_1961cc:
    // 0x1961cc: 0x10000066  b           . + 4 + (0x66 << 2)
label_1961d0:
    if (ctx->pc == 0x1961D0u) {
        ctx->pc = 0x1961D4u;
        goto label_1961d4;
    }
    ctx->pc = 0x1961CCu;
    {
        const bool branch_taken_0x1961cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1961cc) {
            ctx->pc = 0x196368u;
            goto label_196368;
        }
    }
    ctx->pc = 0x1961D4u;
label_1961d4:
    // 0x1961d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1961d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1961d8:
    // 0x1961d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1961dc:
    if (ctx->pc == 0x1961DCu) {
        ctx->pc = 0x1961DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961D8u;
        // 0x1961dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961E0u;
        goto label_1961e0;
    }
    ctx->pc = 0x1961D8u;
    {
        const bool branch_taken_0x1961d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1961DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961D8u;
        // 0x1961dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961d8) {
            ctx->pc = 0x1961E8u;
            goto label_1961e8;
        }
    }
    ctx->pc = 0x1961E0u;
label_1961e0:
    // 0x1961e0: 0x14620061  bne         $v1, $v0, . + 4 + (0x61 << 2)
label_1961e4:
    if (ctx->pc == 0x1961E4u) {
        ctx->pc = 0x1961E8u;
        goto label_1961e8;
    }
    ctx->pc = 0x1961E0u;
    {
        const bool branch_taken_0x1961e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1961e0) {
            ctx->pc = 0x196368u;
            goto label_196368;
        }
    }
    ctx->pc = 0x1961E8u;
label_1961e8:
    // 0x1961e8: 0xc061a12  jal         func_186848
label_1961ec:
    if (ctx->pc == 0x1961ECu) {
        ctx->pc = 0x1961ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961E8u;
        // 0x1961ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961F0u;
        goto label_1961f0;
    }
    ctx->pc = 0x1961E8u;
    SET_GPR_U32(ctx, 31, 0x1961F0u);
    ctx->pc = 0x1961ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961E8u;
    // 0x1961ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1961E8u, 0x1961F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961F0u;
label_1961f0:
    // 0x1961f0: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1961f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_1961f4:
    // 0x1961f4: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x1961f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1961f8:
    // 0x1961f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1961f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1961fc:
    // 0x1961fc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1961fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_196200:
    // 0x196200: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x196200u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_196204:
    // 0x196204: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x196204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_196208:
    // 0x196208: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x196208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19620c:
    // 0x19620c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_196210:
    // 0x196210: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x196210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_196214:
    // 0x196214: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x196214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_196218:
    // 0x196218: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x196218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19621c:
    // 0x19621c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19621cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_196220:
    // 0x196220: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x196220u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_196224:
    // 0x196224: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x196224u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_196228:
    // 0x196228: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x196228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19622c:
    // 0x19622c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x19622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_196230:
    // 0x196230: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x196230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_196234:
    // 0x196234: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x196234u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_196238:
    // 0x196238: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x196238u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_19623c:
    // 0x19623c: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x19623cu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_196240:
    // 0x196240: 0x46140504  c1          0x140504
    ctx->pc = 0x196240u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_196244:
    // 0x196244: 0xc061a12  jal         func_186848
label_196248:
    if (ctx->pc == 0x196248u) {
        ctx->pc = 0x196248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196244u;
        // 0x196248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19624Cu;
        goto label_19624c;
    }
    ctx->pc = 0x196244u;
    SET_GPR_U32(ctx, 31, 0x19624Cu);
    ctx->pc = 0x196248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196244u;
    // 0x196248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196244u, 0x19624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19624Cu;
label_19624c:
    // 0x19624c: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x19624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_196250:
    // 0x196250: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x196250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_196254:
    // 0x196254: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x196254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_196258:
    // 0x196258: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x196258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19625c:
    // 0x19625c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x19625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_196260:
    // 0x196260: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x196260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196264:
    // 0x196264: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x196264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_196268:
    // 0x196268: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x196268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19626c:
    // 0x19626c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x19626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_196270:
    // 0x196270: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x196270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196274:
    // 0x196274: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x196274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_196278:
    // 0x196278: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x196278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19627c:
    // 0x19627c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19627cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_196280:
    // 0x196280: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x196280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_196284:
    // 0x196284: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_196288:
    if (ctx->pc == 0x196288u) {
        ctx->pc = 0x196288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196284u;
        // 0x196288: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19628Cu;
        goto label_19628c;
    }
    ctx->pc = 0x196284u;
    {
        const bool branch_taken_0x196284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196284u;
        // 0x196288: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x196284) {
            ctx->pc = 0x1962F4u;
            goto label_1962f4;
        }
    }
    ctx->pc = 0x19628Cu;
label_19628c:
    // 0x19628c: 0xc061a12  jal         func_186848
label_196290:
    if (ctx->pc == 0x196290u) {
        ctx->pc = 0x196290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19628Cu;
        // 0x196290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196294u;
        goto label_196294;
    }
    ctx->pc = 0x19628Cu;
    SET_GPR_U32(ctx, 31, 0x196294u);
    ctx->pc = 0x196290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19628Cu;
    // 0x196290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19628Cu, 0x196294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196294u;
label_196294:
    // 0x196294: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x196294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_196298:
    // 0x196298: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x196298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19629c:
    // 0x19629c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19629cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1962a0:
    // 0x1962a0: 0x0  nop
    ctx->pc = 0x1962a0u;
    // NOP
label_1962a4:
    // 0x1962a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1962a8:
    if (ctx->pc == 0x1962A8u) {
        ctx->pc = 0x1962A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962A4u;
        // 0x1962a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962ACu;
        goto label_1962ac;
    }
    ctx->pc = 0x1962A4u;
    {
        const bool branch_taken_0x1962a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1962A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962A4u;
        // 0x1962a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962a4) {
            ctx->pc = 0x1962B0u;
            goto label_1962b0;
        }
    }
    ctx->pc = 0x1962ACu;
label_1962ac:
    // 0x1962ac: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x1962acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_1962b0:
    // 0x1962b0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1962b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1962b4:
    // 0x1962b4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1962b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1962b8:
    // 0x1962b8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1962b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1962bc:
    // 0x1962bc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1962bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1962c0:
    // 0x1962c0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1962c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1962c4:
    // 0x1962c4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1962c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_1962c8:
    // 0x1962c8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1962c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1962cc:
    // 0x1962cc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1962ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1962d0:
    // 0x1962d0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1962d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1962d4:
    // 0x1962d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1962d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1962d8:
    // 0x1962d8: 0x0  nop
    ctx->pc = 0x1962d8u;
    // NOP
label_1962dc:
    // 0x1962dc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1962e0:
    if (ctx->pc == 0x1962E0u) {
        ctx->pc = 0x1962E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962DCu;
        // 0x1962e0: 0xc620001c  lwc1        $f0, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962E4u;
        goto label_1962e4;
    }
    ctx->pc = 0x1962DCu;
    {
        const bool branch_taken_0x1962dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1962dc) {
            ctx->pc = 0x1962E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1962DCu;
            // 0x1962e0: 0xc620001c  lwc1        $f0, 0x1C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1962F8u;
            goto label_1962f8;
        }
    }
    ctx->pc = 0x1962E4u;
label_1962e4:
    // 0x1962e4: 0xc065a74  jal         func_1969D0
label_1962e8:
    if (ctx->pc == 0x1962E8u) {
        ctx->pc = 0x1962E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962E4u;
        // 0x1962e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962ECu;
        goto label_1962ec;
    }
    ctx->pc = 0x1962E4u;
    SET_GPR_U32(ctx, 31, 0x1962ECu);
    ctx->pc = 0x1962E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962E4u;
    // 0x1962e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1969D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1969D0u, 0x1962E4u, 0x1962ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962ECu;
label_1962ec:
    // 0x1962ec: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1962f0:
    if (ctx->pc == 0x1962F0u) {
        ctx->pc = 0x1962F4u;
        goto label_1962f4;
    }
    ctx->pc = 0x1962ECu;
    {
        const bool branch_taken_0x1962ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1962ec) {
            ctx->pc = 0x196368u;
            goto label_196368;
        }
    }
    ctx->pc = 0x1962F4u;
label_1962f4:
    // 0x1962f4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1962f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1962f8:
    // 0x1962f8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1962f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1962fc:
    // 0x1962fc: 0x0  nop
    ctx->pc = 0x1962fcu;
    // NOP
label_196300:
    // 0x196300: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_196304:
    if (ctx->pc == 0x196304u) {
        ctx->pc = 0x196308u;
        goto label_196308;
    }
    ctx->pc = 0x196300u;
    {
        const bool branch_taken_0x196300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x196300) {
            ctx->pc = 0x196368u;
            goto label_196368;
        }
    }
    ctx->pc = 0x196308u;
label_196308:
    // 0x196308: 0xc061a12  jal         func_186848
label_19630c:
    if (ctx->pc == 0x19630Cu) {
        ctx->pc = 0x19630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196308u;
        // 0x19630c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196310u;
        goto label_196310;
    }
    ctx->pc = 0x196308u;
    SET_GPR_U32(ctx, 31, 0x196310u);
    ctx->pc = 0x19630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196308u;
    // 0x19630c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196308u, 0x196310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196310u;
label_196310:
    // 0x196310: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x196310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_196314:
    // 0x196314: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x196314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196318:
    // 0x196318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x196318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19631c:
    // 0x19631c: 0x0  nop
    ctx->pc = 0x19631cu;
    // NOP
label_196320:
    // 0x196320: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_196324:
    if (ctx->pc == 0x196324u) {
        ctx->pc = 0x196324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196320u;
        // 0x196324: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196328u;
        goto label_196328;
    }
    ctx->pc = 0x196320u;
    {
        const bool branch_taken_0x196320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196320u;
        // 0x196324: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196320) {
            ctx->pc = 0x19632Cu;
            goto label_19632c;
        }
    }
    ctx->pc = 0x196328u;
label_196328:
    // 0x196328: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x196328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_19632c:
    // 0x19632c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19632cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_196330:
    // 0x196330: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x196330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_196334:
    // 0x196334: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x196334u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_196338:
    // 0x196338: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x196338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19633c:
    // 0x19633c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x19633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_196340:
    // 0x196340: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x196340u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_196344:
    // 0x196344: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x196344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_196348:
    // 0x196348: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x196348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19634c:
    // 0x19634c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x19634cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_196350:
    // 0x196350: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x196350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_196354:
    // 0x196354: 0x0  nop
    ctx->pc = 0x196354u;
    // NOP
label_196358:
    // 0x196358: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_19635c:
    if (ctx->pc == 0x19635Cu) {
        ctx->pc = 0x196360u;
        goto label_196360;
    }
    ctx->pc = 0x196358u;
    {
        const bool branch_taken_0x196358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x196358) {
            ctx->pc = 0x196368u;
            goto label_196368;
        }
    }
    ctx->pc = 0x196360u;
label_196360:
    // 0x196360: 0xc065a74  jal         func_1969D0
label_196364:
    if (ctx->pc == 0x196364u) {
        ctx->pc = 0x196364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196360u;
        // 0x196364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196368u;
        goto label_196368;
    }
    ctx->pc = 0x196360u;
    SET_GPR_U32(ctx, 31, 0x196368u);
    ctx->pc = 0x196364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196360u;
    // 0x196364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1969D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1969D0u, 0x196360u, 0x196368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196368u;
label_196368:
    // 0x196368: 0xc061a26  jal         func_186898
label_19636c:
    if (ctx->pc == 0x19636Cu) {
        ctx->pc = 0x19636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196368u;
        // 0x19636c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196370u;
        goto label_196370;
    }
    ctx->pc = 0x196368u;
    SET_GPR_U32(ctx, 31, 0x196370u);
    ctx->pc = 0x19636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196368u;
    // 0x19636c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x196368u, 0x196370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196370u;
label_196370:
    // 0x196370: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_196374:
    // 0x196374: 0xc0f6da6  jal         func_3DB698
label_196378:
    if (ctx->pc == 0x196378u) {
        ctx->pc = 0x196378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196374u;
        // 0x196378: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19637Cu;
        goto label_19637c;
    }
    ctx->pc = 0x196374u;
    SET_GPR_U32(ctx, 31, 0x19637Cu);
    ctx->pc = 0x196378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196374u;
    // 0x196378: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x196374u, 0x19637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19637Cu;
label_19637c:
    // 0x19637c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x19637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_196380:
    // 0x196380: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196384:
    // 0x196384: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x196384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_196388:
    // 0x196388: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_19638c:
    if (ctx->pc == 0x19638Cu) {
        ctx->pc = 0x19638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196388u;
        // 0x19638c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196390u;
        goto label_196390;
    }
    ctx->pc = 0x196388u;
    {
        const bool branch_taken_0x196388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196388u;
        // 0x19638c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196388) {
            ctx->pc = 0x1964FCu;
            goto label_1964fc;
        }
    }
    ctx->pc = 0x196390u;
label_196390:
    // 0x196390: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_196394:
    // 0x196394: 0x2442fdc0  addiu       $v0, $v0, -0x240
    ctx->pc = 0x196394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966720));
label_196398:
    // 0x196398: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19639c:
    // 0x19639c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1963a0:
    // 0x1963a0: 0x800008  jr          $a0
label_1963a4:
    if (ctx->pc == 0x1963A4u) {
        ctx->pc = 0x1963A8u;
        goto label_1963a8;
    }
    ctx->pc = 0x1963A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1963A8u: goto label_1963a8;
            case 0x1963D8u: goto label_1963d8;
            case 0x196458u: goto label_196458;
            case 0x19648Cu: goto label_19648c;
            case 0x1964E4u: goto label_1964e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1963A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1963A8u;
label_1963a8:
    // 0x1963a8: 0xc06596e  jal         func_1965B8
label_1963ac:
    if (ctx->pc == 0x1963ACu) {
        ctx->pc = 0x1963ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963A8u;
        // 0x1963ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963B0u;
        goto label_1963b0;
    }
    ctx->pc = 0x1963A8u;
    SET_GPR_U32(ctx, 31, 0x1963B0u);
    ctx->pc = 0x1963ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963A8u;
    // 0x1963ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1965B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1965B8u, 0x1963A8u, 0x1963B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963B0u;
label_1963b0:
    // 0x1963b0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1963b4:
    if (ctx->pc == 0x1963B4u) {
        ctx->pc = 0x1963B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963B0u;
        // 0x1963b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963B8u;
        goto label_1963b8;
    }
    ctx->pc = 0x1963B0u;
    {
        const bool branch_taken_0x1963b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1963B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963B0u;
        // 0x1963b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963b0) {
            ctx->pc = 0x1963E8u;
            goto label_1963e8;
        }
    }
    ctx->pc = 0x1963B8u;
label_1963b8:
    // 0x1963b8: 0xc061a1e  jal         func_186878
label_1963bc:
    if (ctx->pc == 0x1963BCu) {
        ctx->pc = 0x1963BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963B8u;
        // 0x1963bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963C0u;
        goto label_1963c0;
    }
    ctx->pc = 0x1963B8u;
    SET_GPR_U32(ctx, 31, 0x1963C0u);
    ctx->pc = 0x1963BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963B8u;
    // 0x1963bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1963B8u, 0x1963C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963C0u;
label_1963c0:
    // 0x1963c0: 0xc06df10  jal         func_1B7C40
label_1963c4:
    if (ctx->pc == 0x1963C4u) {
        ctx->pc = 0x1963C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963C0u;
        // 0x1963c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963C8u;
        goto label_1963c8;
    }
    ctx->pc = 0x1963C0u;
    SET_GPR_U32(ctx, 31, 0x1963C8u);
    ctx->pc = 0x1963C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963C0u;
    // 0x1963c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C40u, 0x1963C0u, 0x1963C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963C8u;
label_1963c8:
    // 0x1963c8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_1963cc:
    if (ctx->pc == 0x1963CCu) {
        ctx->pc = 0x1963D0u;
        goto label_1963d0;
    }
    ctx->pc = 0x1963C8u;
    {
        const bool branch_taken_0x1963c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1963c8) {
            ctx->pc = 0x19647Cu;
            goto label_19647c;
        }
    }
    ctx->pc = 0x1963D0u;
label_1963d0:
    // 0x1963d0: 0x10000040  b           . + 4 + (0x40 << 2)
label_1963d4:
    if (ctx->pc == 0x1963D4u) {
        ctx->pc = 0x1963D8u;
        goto label_1963d8;
    }
    ctx->pc = 0x1963D0u;
    {
        const bool branch_taken_0x1963d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1963d0) {
            ctx->pc = 0x1964D4u;
            goto label_1964d4;
        }
    }
    ctx->pc = 0x1963D8u;
label_1963d8:
    // 0x1963d8: 0xc06596e  jal         func_1965B8
label_1963dc:
    if (ctx->pc == 0x1963DCu) {
        ctx->pc = 0x1963DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963D8u;
        // 0x1963dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963E0u;
        goto label_1963e0;
    }
    ctx->pc = 0x1963D8u;
    SET_GPR_U32(ctx, 31, 0x1963E0u);
    ctx->pc = 0x1963DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963D8u;
    // 0x1963dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1965B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1965B8u, 0x1963D8u, 0x1963E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963E0u;
label_1963e0:
    // 0x1963e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1963e4:
    if (ctx->pc == 0x1963E4u) {
        ctx->pc = 0x1963E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963E0u;
        // 0x1963e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963E8u;
        goto label_1963e8;
    }
    ctx->pc = 0x1963E0u;
    {
        const bool branch_taken_0x1963e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1963E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963E0u;
        // 0x1963e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963e0) {
            ctx->pc = 0x1963F8u;
            goto label_1963f8;
        }
    }
    ctx->pc = 0x1963E8u;
label_1963e8:
    // 0x1963e8: 0xc0659b0  jal         func_1966C0
label_1963ec:
    if (ctx->pc == 0x1963ECu) {
        ctx->pc = 0x1963ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963E8u;
        // 0x1963ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963F0u;
        goto label_1963f0;
    }
    ctx->pc = 0x1963E8u;
    SET_GPR_U32(ctx, 31, 0x1963F0u);
    ctx->pc = 0x1963ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963E8u;
    // 0x1963ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1966C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1966C0u, 0x1963E8u, 0x1963F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963F0u;
label_1963f0:
    // 0x1963f0: 0x10000042  b           . + 4 + (0x42 << 2)
label_1963f4:
    if (ctx->pc == 0x1963F4u) {
        ctx->pc = 0x1963F8u;
        goto label_1963f8;
    }
    ctx->pc = 0x1963F0u;
    {
        const bool branch_taken_0x1963f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1963f0) {
            ctx->pc = 0x1964FCu;
            goto label_1964fc;
        }
    }
    ctx->pc = 0x1963F8u;
label_1963f8:
    // 0x1963f8: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1963f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1963fc:
    // 0x1963fc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1963fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_196400:
    // 0x196400: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_196404:
    if (ctx->pc == 0x196404u) {
        ctx->pc = 0x196404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196400u;
        // 0x196404: 0x38420002  xori        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x196408u;
        goto label_196408;
    }
    ctx->pc = 0x196400u;
    {
        const bool branch_taken_0x196400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196400u;
        // 0x196404: 0x38420002  xori        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196400) {
            ctx->pc = 0x196438u;
            goto label_196438;
        }
    }
    ctx->pc = 0x196408u;
label_196408:
    // 0x196408: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_19640c:
    if (ctx->pc == 0x19640Cu) {
        ctx->pc = 0x19640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196408u;
        // 0x19640c: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196410u;
        goto label_196410;
    }
    ctx->pc = 0x196408u;
    {
        const bool branch_taken_0x196408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196408) {
            ctx->pc = 0x19640Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196408u;
            // 0x19640c: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19642Cu;
            goto label_19642c;
        }
    }
    ctx->pc = 0x196410u;
label_196410:
    // 0x196410: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x196410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_196414:
    // 0x196414: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x196414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_196418:
    // 0x196418: 0x40f809  jalr        $v0
label_19641c:
    if (ctx->pc == 0x19641Cu) {
        ctx->pc = 0x196420u;
        goto label_196420;
    }
    ctx->pc = 0x196418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196420u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196418u, 0x196420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196420u;
label_196420:
    // 0x196420: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_196424:
    if (ctx->pc == 0x196424u) {
        ctx->pc = 0x196424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196420u;
        // 0x196424: 0x8e2200b4  lw          $v0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196428u;
        goto label_196428;
    }
    ctx->pc = 0x196420u;
    {
        const bool branch_taken_0x196420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196420) {
            ctx->pc = 0x196424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196420u;
            // 0x196424: 0x8e2200b4  lw          $v0, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196448u;
            goto label_196448;
        }
    }
    ctx->pc = 0x196428u;
label_196428:
    // 0x196428: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x196428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_19642c:
    // 0x19642c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x19642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_196430:
    // 0x196430: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_196434:
    if (ctx->pc == 0x196434u) {
        ctx->pc = 0x196434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196430u;
        // 0x196434: 0x8e2200b4  lw          $v0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196438u;
        goto label_196438;
    }
    ctx->pc = 0x196430u;
    {
        const bool branch_taken_0x196430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196430) {
            ctx->pc = 0x196434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196430u;
            // 0x196434: 0x8e2200b4  lw          $v0, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196448u;
            goto label_196448;
        }
    }
    ctx->pc = 0x196438u;
label_196438:
    // 0x196438: 0xc065a74  jal         func_1969D0
label_19643c:
    if (ctx->pc == 0x19643Cu) {
        ctx->pc = 0x19643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196438u;
        // 0x19643c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196440u;
        goto label_196440;
    }
    ctx->pc = 0x196438u;
    SET_GPR_U32(ctx, 31, 0x196440u);
    ctx->pc = 0x19643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196438u;
    // 0x19643c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1969D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1969D0u, 0x196438u, 0x196440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196440u;
label_196440:
    // 0x196440: 0x1000002e  b           . + 4 + (0x2E << 2)
label_196444:
    if (ctx->pc == 0x196444u) {
        ctx->pc = 0x196448u;
        goto label_196448;
    }
    ctx->pc = 0x196440u;
    {
        const bool branch_taken_0x196440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196440) {
            ctx->pc = 0x1964FCu;
            goto label_1964fc;
        }
    }
    ctx->pc = 0x196448u;
label_196448:
    // 0x196448: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_19644c:
    if (ctx->pc == 0x19644Cu) {
        ctx->pc = 0x196450u;
        goto label_196450;
    }
    ctx->pc = 0x196448u;
    {
        const bool branch_taken_0x196448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196448) {
            ctx->pc = 0x1964FCu;
            goto label_1964fc;
        }
    }
    ctx->pc = 0x196450u;
label_196450:
    // 0x196450: 0x10000020  b           . + 4 + (0x20 << 2)
label_196454:
    if (ctx->pc == 0x196454u) {
        ctx->pc = 0x196454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196450u;
        // 0x196454: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196458u;
        goto label_196458;
    }
    ctx->pc = 0x196450u;
    {
        const bool branch_taken_0x196450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196450u;
        // 0x196454: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196450) {
            ctx->pc = 0x1964D4u;
            goto label_1964d4;
        }
    }
    ctx->pc = 0x196458u;
label_196458:
    // 0x196458: 0xc061a12  jal         func_186848
label_19645c:
    if (ctx->pc == 0x19645Cu) {
        ctx->pc = 0x19645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196458u;
        // 0x19645c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196460u;
        goto label_196460;
    }
    ctx->pc = 0x196458u;
    SET_GPR_U32(ctx, 31, 0x196460u);
    ctx->pc = 0x19645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196458u;
    // 0x19645c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196458u, 0x196460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196460u;
label_196460:
    // 0x196460: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x196460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_196464:
    // 0x196464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196468:
    // 0x196468: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x196468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19646c:
    // 0x19646c: 0x40f809  jalr        $v0
label_196470:
    if (ctx->pc == 0x196470u) {
        ctx->pc = 0x196474u;
        goto label_196474;
    }
    ctx->pc = 0x19646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196474u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19646Cu, 0x196474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196474u;
label_196474:
    // 0x196474: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_196478:
    if (ctx->pc == 0x196478u) {
        ctx->pc = 0x19647Cu;
        goto label_19647c;
    }
    ctx->pc = 0x196474u;
    {
        const bool branch_taken_0x196474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196474) {
            ctx->pc = 0x1964FCu;
            goto label_1964fc;
        }
    }
    ctx->pc = 0x19647Cu;
label_19647c:
    // 0x19647c: 0xc065982  jal         func_196608
label_196480:
    if (ctx->pc == 0x196480u) {
        ctx->pc = 0x196480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19647Cu;
        // 0x196480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196484u;
        goto label_196484;
    }
    ctx->pc = 0x19647Cu;
    SET_GPR_U32(ctx, 31, 0x196484u);
    ctx->pc = 0x196480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19647Cu;
    // 0x196480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196608u, 0x19647Cu, 0x196484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196484u;
label_196484:
    // 0x196484: 0x1000001d  b           . + 4 + (0x1D << 2)
label_196488:
    if (ctx->pc == 0x196488u) {
        ctx->pc = 0x19648Cu;
        goto label_19648c;
    }
    ctx->pc = 0x196484u;
    {
        const bool branch_taken_0x196484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196484) {
            ctx->pc = 0x1964FCu;
            goto label_1964fc;
        }
    }
    ctx->pc = 0x19648Cu;
label_19648c:
    // 0x19648c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_196490:
    if (ctx->pc == 0x196490u) {
        ctx->pc = 0x196494u;
        goto label_196494;
    }
    ctx->pc = 0x19648Cu;
    {
        const bool branch_taken_0x19648c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19648c) {
            ctx->pc = 0x1964B8u;
            goto label_1964b8;
        }
    }
    ctx->pc = 0x196494u;
label_196494:
    // 0x196494: 0xc061a1e  jal         func_186878
label_196498:
    if (ctx->pc == 0x196498u) {
        ctx->pc = 0x196498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196494u;
        // 0x196498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19649Cu;
        goto label_19649c;
    }
    ctx->pc = 0x196494u;
    SET_GPR_U32(ctx, 31, 0x19649Cu);
    ctx->pc = 0x196498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196494u;
    // 0x196498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x196494u, 0x19649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19649Cu;
label_19649c:
    // 0x19649c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19649cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1964a0:
    // 0x1964a0: 0xc061a1e  jal         func_186878
label_1964a4:
    if (ctx->pc == 0x1964A4u) {
        ctx->pc = 0x1964A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964A0u;
        // 0x1964a4: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964A8u;
        goto label_1964a8;
    }
    ctx->pc = 0x1964A0u;
    SET_GPR_U32(ctx, 31, 0x1964A8u);
    ctx->pc = 0x1964A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964A0u;
    // 0x1964a4: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1964A0u, 0x1964A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964A8u;
label_1964a8:
    // 0x1964a8: 0xc06df10  jal         func_1B7C40
label_1964ac:
    if (ctx->pc == 0x1964ACu) {
        ctx->pc = 0x1964ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964A8u;
        // 0x1964ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964B0u;
        goto label_1964b0;
    }
    ctx->pc = 0x1964A8u;
    SET_GPR_U32(ctx, 31, 0x1964B0u);
    ctx->pc = 0x1964ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964A8u;
    // 0x1964ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C40u, 0x1964A8u, 0x1964B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964B0u;
label_1964b0:
    // 0x1964b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1964b4:
    if (ctx->pc == 0x1964B4u) {
        ctx->pc = 0x1964B8u;
        goto label_1964b8;
    }
    ctx->pc = 0x1964B0u;
    {
        const bool branch_taken_0x1964b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964b0) {
            ctx->pc = 0x1964CCu;
            goto label_1964cc;
        }
    }
    ctx->pc = 0x1964B8u;
label_1964b8:
    // 0x1964b8: 0xc061a1a  jal         func_186868
label_1964bc:
    if (ctx->pc == 0x1964BCu) {
        ctx->pc = 0x1964BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B8u;
        // 0x1964bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964C0u;
        goto label_1964c0;
    }
    ctx->pc = 0x1964B8u;
    SET_GPR_U32(ctx, 31, 0x1964C0u);
    ctx->pc = 0x1964BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964B8u;
    // 0x1964bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x1964B8u, 0x1964C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964C0u;
label_1964c0:
    // 0x1964c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1964c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1964c4:
    // 0x1964c4: 0xc072596  jal         func_1C9658
label_1964c8:
    if (ctx->pc == 0x1964C8u) {
        ctx->pc = 0x1964C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964C4u;
        // 0x1964c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964CCu;
        goto label_1964cc;
    }
    ctx->pc = 0x1964C4u;
    SET_GPR_U32(ctx, 31, 0x1964CCu);
    ctx->pc = 0x1964C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964C4u;
    // 0x1964c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9658u, 0x1964C4u, 0x1964CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964CCu;
label_1964cc:
    // 0x1964cc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1964d0:
    if (ctx->pc == 0x1964D0u) {
        ctx->pc = 0x1964D4u;
        goto label_1964d4;
    }
    ctx->pc = 0x1964CCu;
    {
        const bool branch_taken_0x1964cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1964cc) {
            ctx->pc = 0x1964FCu;
            goto label_1964fc;
        }
    }
    ctx->pc = 0x1964D4u;
label_1964d4:
    // 0x1964d4: 0xc0659f6  jal         func_1967D8
label_1964d8:
    if (ctx->pc == 0x1964D8u) {
        ctx->pc = 0x1964D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964D4u;
        // 0x1964d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964DCu;
        goto label_1964dc;
    }
    ctx->pc = 0x1964D4u;
    SET_GPR_U32(ctx, 31, 0x1964DCu);
    ctx->pc = 0x1964D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964D4u;
    // 0x1964d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967D8u, 0x1964D4u, 0x1964DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964DCu;
label_1964dc:
    // 0x1964dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1964e0:
    if (ctx->pc == 0x1964E0u) {
        ctx->pc = 0x1964E4u;
        goto label_1964e4;
    }
    ctx->pc = 0x1964DCu;
    {
        const bool branch_taken_0x1964dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964dc) {
            ctx->pc = 0x1964FCu;
            goto label_1964fc;
        }
    }
    ctx->pc = 0x1964E4u;
label_1964e4:
    // 0x1964e4: 0xc06596e  jal         func_1965B8
label_1964e8:
    if (ctx->pc == 0x1964E8u) {
        ctx->pc = 0x1964E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964E4u;
        // 0x1964e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964ECu;
        goto label_1964ec;
    }
    ctx->pc = 0x1964E4u;
    SET_GPR_U32(ctx, 31, 0x1964ECu);
    ctx->pc = 0x1964E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964E4u;
    // 0x1964e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1965B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1965B8u, 0x1964E4u, 0x1964ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964ECu;
label_1964ec:
    // 0x1964ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1964f0:
    if (ctx->pc == 0x1964F0u) {
        ctx->pc = 0x1964F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964ECu;
        // 0x1964f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964F4u;
        goto label_1964f4;
    }
    ctx->pc = 0x1964ECu;
    {
        const bool branch_taken_0x1964ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964ECu;
        // 0x1964f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964ec) {
            ctx->pc = 0x1964FCu;
            goto label_1964fc;
        }
    }
    ctx->pc = 0x1964F4u;
label_1964f4:
    // 0x1964f4: 0xc0659b0  jal         func_1966C0
label_1964f8:
    if (ctx->pc == 0x1964F8u) {
        ctx->pc = 0x1964F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F4u;
        // 0x1964f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964FCu;
        goto label_1964fc;
    }
    ctx->pc = 0x1964F4u;
    SET_GPR_U32(ctx, 31, 0x1964FCu);
    ctx->pc = 0x1964F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964F4u;
    // 0x1964f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1966C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1966C0u, 0x1964F4u, 0x1964FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964FCu;
label_1964fc:
    // 0x1964fc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_196500:
    if (ctx->pc == 0x196500u) {
        ctx->pc = 0x196500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964FCu;
        // 0x196500: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196504u;
        goto label_196504;
    }
    ctx->pc = 0x1964FCu;
    {
        const bool branch_taken_0x1964fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x196500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964FCu;
        // 0x196500: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964fc) {
            ctx->pc = 0x196598u;
            goto label_196598;
        }
    }
    ctx->pc = 0x196504u;
label_196504:
    // 0x196504: 0xc061a12  jal         func_186848
label_196508:
    if (ctx->pc == 0x196508u) {
        ctx->pc = 0x196508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196504u;
        // 0x196508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19650Cu;
        goto label_19650c;
    }
    ctx->pc = 0x196504u;
    SET_GPR_U32(ctx, 31, 0x19650Cu);
    ctx->pc = 0x196508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196504u;
    // 0x196508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196504u, 0x19650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19650Cu;
label_19650c:
    // 0x19650c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_196510:
    // 0x196510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196514:
    // 0x196514: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x196514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_196518:
    // 0x196518: 0x40f809  jalr        $v0
label_19651c:
    if (ctx->pc == 0x19651Cu) {
        ctx->pc = 0x196520u;
        goto label_196520;
    }
    ctx->pc = 0x196518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196520u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196518u, 0x196520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196520u;
label_196520:
    // 0x196520: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_196524:
    if (ctx->pc == 0x196524u) {
        ctx->pc = 0x196524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196520u;
        // 0x196524: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196528u;
        goto label_196528;
    }
    ctx->pc = 0x196520u;
    {
        const bool branch_taken_0x196520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196520u;
        // 0x196524: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196520) {
            ctx->pc = 0x196598u;
            goto label_196598;
        }
    }
    ctx->pc = 0x196528u;
label_196528:
    // 0x196528: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x196528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19652c:
    // 0x19652c: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x19652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_196530:
    // 0x196530: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x196530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_196534:
    // 0x196534: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x196534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_196538:
    // 0x196538: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x196538u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19653c:
    // 0x19653c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19653cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_196540:
    // 0x196540: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x196540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_196544:
    // 0x196544: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x196544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196548:
    // 0x196548: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x196548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19654c:
    // 0x19654c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x19654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_196550:
    // 0x196550: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x196550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_196554:
    // 0x196554: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x196554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_196558:
    // 0x196558: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x196558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19655c:
    // 0x19655c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19655cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_196560:
    // 0x196560: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x196560u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_196564:
    // 0x196564: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x196564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_196568:
    // 0x196568: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x196568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19656c:
    // 0x19656c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x19656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_196570:
    // 0x196570: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x196570u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_196574:
    // 0x196574: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x196574u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_196578:
    // 0x196578: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x196578u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_19657c:
    // 0x19657c: 0x46000004  c1          0x4
    ctx->pc = 0x19657cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_196580:
    // 0x196580: 0xc061a1e  jal         func_186878
label_196584:
    if (ctx->pc == 0x196584u) {
        ctx->pc = 0x196584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196580u;
        // 0x196584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196588u;
        goto label_196588;
    }
    ctx->pc = 0x196580u;
    SET_GPR_U32(ctx, 31, 0x196588u);
    ctx->pc = 0x196584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196580u;
    // 0x196584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x196580u, 0x196588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196588u;
label_196588:
    // 0x196588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19658c:
    // 0x19658c: 0xc06cdea  jal         func_1B37A8
label_196590:
    if (ctx->pc == 0x196590u) {
        ctx->pc = 0x196590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19658Cu;
        // 0x196590: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196594u;
        goto label_196594;
    }
    ctx->pc = 0x19658Cu;
    SET_GPR_U32(ctx, 31, 0x196594u);
    ctx->pc = 0x196590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19658Cu;
    // 0x196590: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x19658Cu, 0x196594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196594u;
label_196594:
    // 0x196594: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x196594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_196598:
    // 0x196598: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x196598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_19659c:
    // 0x19659c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x19659cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1965a0:
    // 0x1965a0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1965a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1965a4:
    // 0x1965a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1965a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1965a8:
    // 0x1965a8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1965a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1965ac:
    // 0x1965ac: 0x3e00008  jr          $ra
label_1965b0:
    if (ctx->pc == 0x1965B0u) {
        ctx->pc = 0x1965B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965ACu;
        // 0x1965b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1965B4u;
        goto label_1965b4;
    }
    ctx->pc = 0x1965ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1965B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965ACu;
        // 0x1965b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1965ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1965B4u;
label_1965b4:
    // 0x1965b4: 0x0  nop
    ctx->pc = 0x1965b4u;
    // NOP
    ctx->pc = 0x1965b8u;
}
