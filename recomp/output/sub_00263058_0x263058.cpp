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

// Function: sub_00263058
// Address: 0x263058 - 0x2635c0
void sub_00263058_0x263058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263058_0x263058");
#endif

    switch (ctx->pc) {
        case 0x263058u: goto label_263058;
        case 0x26305cu: goto label_26305c;
        case 0x263060u: goto label_263060;
        case 0x263064u: goto label_263064;
        case 0x263068u: goto label_263068;
        case 0x26306cu: goto label_26306c;
        case 0x263070u: goto label_263070;
        case 0x263074u: goto label_263074;
        case 0x263078u: goto label_263078;
        case 0x26307cu: goto label_26307c;
        case 0x263080u: goto label_263080;
        case 0x263084u: goto label_263084;
        case 0x263088u: goto label_263088;
        case 0x26308cu: goto label_26308c;
        case 0x263090u: goto label_263090;
        case 0x263094u: goto label_263094;
        case 0x263098u: goto label_263098;
        case 0x26309cu: goto label_26309c;
        case 0x2630a0u: goto label_2630a0;
        case 0x2630a4u: goto label_2630a4;
        case 0x2630a8u: goto label_2630a8;
        case 0x2630acu: goto label_2630ac;
        case 0x2630b0u: goto label_2630b0;
        case 0x2630b4u: goto label_2630b4;
        case 0x2630b8u: goto label_2630b8;
        case 0x2630bcu: goto label_2630bc;
        case 0x2630c0u: goto label_2630c0;
        case 0x2630c4u: goto label_2630c4;
        case 0x2630c8u: goto label_2630c8;
        case 0x2630ccu: goto label_2630cc;
        case 0x2630d0u: goto label_2630d0;
        case 0x2630d4u: goto label_2630d4;
        case 0x2630d8u: goto label_2630d8;
        case 0x2630dcu: goto label_2630dc;
        case 0x2630e0u: goto label_2630e0;
        case 0x2630e4u: goto label_2630e4;
        case 0x2630e8u: goto label_2630e8;
        case 0x2630ecu: goto label_2630ec;
        case 0x2630f0u: goto label_2630f0;
        case 0x2630f4u: goto label_2630f4;
        case 0x2630f8u: goto label_2630f8;
        case 0x2630fcu: goto label_2630fc;
        case 0x263100u: goto label_263100;
        case 0x263104u: goto label_263104;
        case 0x263108u: goto label_263108;
        case 0x26310cu: goto label_26310c;
        case 0x263110u: goto label_263110;
        case 0x263114u: goto label_263114;
        case 0x263118u: goto label_263118;
        case 0x26311cu: goto label_26311c;
        case 0x263120u: goto label_263120;
        case 0x263124u: goto label_263124;
        case 0x263128u: goto label_263128;
        case 0x26312cu: goto label_26312c;
        case 0x263130u: goto label_263130;
        case 0x263134u: goto label_263134;
        case 0x263138u: goto label_263138;
        case 0x26313cu: goto label_26313c;
        case 0x263140u: goto label_263140;
        case 0x263144u: goto label_263144;
        case 0x263148u: goto label_263148;
        case 0x26314cu: goto label_26314c;
        case 0x263150u: goto label_263150;
        case 0x263154u: goto label_263154;
        case 0x263158u: goto label_263158;
        case 0x26315cu: goto label_26315c;
        case 0x263160u: goto label_263160;
        case 0x263164u: goto label_263164;
        case 0x263168u: goto label_263168;
        case 0x26316cu: goto label_26316c;
        case 0x263170u: goto label_263170;
        case 0x263174u: goto label_263174;
        case 0x263178u: goto label_263178;
        case 0x26317cu: goto label_26317c;
        case 0x263180u: goto label_263180;
        case 0x263184u: goto label_263184;
        case 0x263188u: goto label_263188;
        case 0x26318cu: goto label_26318c;
        case 0x263190u: goto label_263190;
        case 0x263194u: goto label_263194;
        case 0x263198u: goto label_263198;
        case 0x26319cu: goto label_26319c;
        case 0x2631a0u: goto label_2631a0;
        case 0x2631a4u: goto label_2631a4;
        case 0x2631a8u: goto label_2631a8;
        case 0x2631acu: goto label_2631ac;
        case 0x2631b0u: goto label_2631b0;
        case 0x2631b4u: goto label_2631b4;
        case 0x2631b8u: goto label_2631b8;
        case 0x2631bcu: goto label_2631bc;
        case 0x2631c0u: goto label_2631c0;
        case 0x2631c4u: goto label_2631c4;
        case 0x2631c8u: goto label_2631c8;
        case 0x2631ccu: goto label_2631cc;
        case 0x2631d0u: goto label_2631d0;
        case 0x2631d4u: goto label_2631d4;
        case 0x2631d8u: goto label_2631d8;
        case 0x2631dcu: goto label_2631dc;
        case 0x2631e0u: goto label_2631e0;
        case 0x2631e4u: goto label_2631e4;
        case 0x2631e8u: goto label_2631e8;
        case 0x2631ecu: goto label_2631ec;
        case 0x2631f0u: goto label_2631f0;
        case 0x2631f4u: goto label_2631f4;
        case 0x2631f8u: goto label_2631f8;
        case 0x2631fcu: goto label_2631fc;
        case 0x263200u: goto label_263200;
        case 0x263204u: goto label_263204;
        case 0x263208u: goto label_263208;
        case 0x26320cu: goto label_26320c;
        case 0x263210u: goto label_263210;
        case 0x263214u: goto label_263214;
        case 0x263218u: goto label_263218;
        case 0x26321cu: goto label_26321c;
        case 0x263220u: goto label_263220;
        case 0x263224u: goto label_263224;
        case 0x263228u: goto label_263228;
        case 0x26322cu: goto label_26322c;
        case 0x263230u: goto label_263230;
        case 0x263234u: goto label_263234;
        case 0x263238u: goto label_263238;
        case 0x26323cu: goto label_26323c;
        case 0x263240u: goto label_263240;
        case 0x263244u: goto label_263244;
        case 0x263248u: goto label_263248;
        case 0x26324cu: goto label_26324c;
        case 0x263250u: goto label_263250;
        case 0x263254u: goto label_263254;
        case 0x263258u: goto label_263258;
        case 0x26325cu: goto label_26325c;
        case 0x263260u: goto label_263260;
        case 0x263264u: goto label_263264;
        case 0x263268u: goto label_263268;
        case 0x26326cu: goto label_26326c;
        case 0x263270u: goto label_263270;
        case 0x263274u: goto label_263274;
        case 0x263278u: goto label_263278;
        case 0x26327cu: goto label_26327c;
        case 0x263280u: goto label_263280;
        case 0x263284u: goto label_263284;
        case 0x263288u: goto label_263288;
        case 0x26328cu: goto label_26328c;
        case 0x263290u: goto label_263290;
        case 0x263294u: goto label_263294;
        case 0x263298u: goto label_263298;
        case 0x26329cu: goto label_26329c;
        case 0x2632a0u: goto label_2632a0;
        case 0x2632a4u: goto label_2632a4;
        case 0x2632a8u: goto label_2632a8;
        case 0x2632acu: goto label_2632ac;
        case 0x2632b0u: goto label_2632b0;
        case 0x2632b4u: goto label_2632b4;
        case 0x2632b8u: goto label_2632b8;
        case 0x2632bcu: goto label_2632bc;
        case 0x2632c0u: goto label_2632c0;
        case 0x2632c4u: goto label_2632c4;
        case 0x2632c8u: goto label_2632c8;
        case 0x2632ccu: goto label_2632cc;
        case 0x2632d0u: goto label_2632d0;
        case 0x2632d4u: goto label_2632d4;
        case 0x2632d8u: goto label_2632d8;
        case 0x2632dcu: goto label_2632dc;
        case 0x2632e0u: goto label_2632e0;
        case 0x2632e4u: goto label_2632e4;
        case 0x2632e8u: goto label_2632e8;
        case 0x2632ecu: goto label_2632ec;
        case 0x2632f0u: goto label_2632f0;
        case 0x2632f4u: goto label_2632f4;
        case 0x2632f8u: goto label_2632f8;
        case 0x2632fcu: goto label_2632fc;
        case 0x263300u: goto label_263300;
        case 0x263304u: goto label_263304;
        case 0x263308u: goto label_263308;
        case 0x26330cu: goto label_26330c;
        case 0x263310u: goto label_263310;
        case 0x263314u: goto label_263314;
        case 0x263318u: goto label_263318;
        case 0x26331cu: goto label_26331c;
        case 0x263320u: goto label_263320;
        case 0x263324u: goto label_263324;
        case 0x263328u: goto label_263328;
        case 0x26332cu: goto label_26332c;
        case 0x263330u: goto label_263330;
        case 0x263334u: goto label_263334;
        case 0x263338u: goto label_263338;
        case 0x26333cu: goto label_26333c;
        case 0x263340u: goto label_263340;
        case 0x263344u: goto label_263344;
        case 0x263348u: goto label_263348;
        case 0x26334cu: goto label_26334c;
        case 0x263350u: goto label_263350;
        case 0x263354u: goto label_263354;
        case 0x263358u: goto label_263358;
        case 0x26335cu: goto label_26335c;
        case 0x263360u: goto label_263360;
        case 0x263364u: goto label_263364;
        case 0x263368u: goto label_263368;
        case 0x26336cu: goto label_26336c;
        case 0x263370u: goto label_263370;
        case 0x263374u: goto label_263374;
        case 0x263378u: goto label_263378;
        case 0x26337cu: goto label_26337c;
        case 0x263380u: goto label_263380;
        case 0x263384u: goto label_263384;
        case 0x263388u: goto label_263388;
        case 0x26338cu: goto label_26338c;
        case 0x263390u: goto label_263390;
        case 0x263394u: goto label_263394;
        case 0x263398u: goto label_263398;
        case 0x26339cu: goto label_26339c;
        case 0x2633a0u: goto label_2633a0;
        case 0x2633a4u: goto label_2633a4;
        case 0x2633a8u: goto label_2633a8;
        case 0x2633acu: goto label_2633ac;
        case 0x2633b0u: goto label_2633b0;
        case 0x2633b4u: goto label_2633b4;
        case 0x2633b8u: goto label_2633b8;
        case 0x2633bcu: goto label_2633bc;
        case 0x2633c0u: goto label_2633c0;
        case 0x2633c4u: goto label_2633c4;
        case 0x2633c8u: goto label_2633c8;
        case 0x2633ccu: goto label_2633cc;
        case 0x2633d0u: goto label_2633d0;
        case 0x2633d4u: goto label_2633d4;
        case 0x2633d8u: goto label_2633d8;
        case 0x2633dcu: goto label_2633dc;
        case 0x2633e0u: goto label_2633e0;
        case 0x2633e4u: goto label_2633e4;
        case 0x2633e8u: goto label_2633e8;
        case 0x2633ecu: goto label_2633ec;
        case 0x2633f0u: goto label_2633f0;
        case 0x2633f4u: goto label_2633f4;
        case 0x2633f8u: goto label_2633f8;
        case 0x2633fcu: goto label_2633fc;
        case 0x263400u: goto label_263400;
        case 0x263404u: goto label_263404;
        case 0x263408u: goto label_263408;
        case 0x26340cu: goto label_26340c;
        case 0x263410u: goto label_263410;
        case 0x263414u: goto label_263414;
        case 0x263418u: goto label_263418;
        case 0x26341cu: goto label_26341c;
        case 0x263420u: goto label_263420;
        case 0x263424u: goto label_263424;
        case 0x263428u: goto label_263428;
        case 0x26342cu: goto label_26342c;
        case 0x263430u: goto label_263430;
        case 0x263434u: goto label_263434;
        case 0x263438u: goto label_263438;
        case 0x26343cu: goto label_26343c;
        case 0x263440u: goto label_263440;
        case 0x263444u: goto label_263444;
        case 0x263448u: goto label_263448;
        case 0x26344cu: goto label_26344c;
        case 0x263450u: goto label_263450;
        case 0x263454u: goto label_263454;
        case 0x263458u: goto label_263458;
        case 0x26345cu: goto label_26345c;
        case 0x263460u: goto label_263460;
        case 0x263464u: goto label_263464;
        case 0x263468u: goto label_263468;
        case 0x26346cu: goto label_26346c;
        case 0x263470u: goto label_263470;
        case 0x263474u: goto label_263474;
        case 0x263478u: goto label_263478;
        case 0x26347cu: goto label_26347c;
        case 0x263480u: goto label_263480;
        case 0x263484u: goto label_263484;
        case 0x263488u: goto label_263488;
        case 0x26348cu: goto label_26348c;
        case 0x263490u: goto label_263490;
        case 0x263494u: goto label_263494;
        case 0x263498u: goto label_263498;
        case 0x26349cu: goto label_26349c;
        case 0x2634a0u: goto label_2634a0;
        case 0x2634a4u: goto label_2634a4;
        case 0x2634a8u: goto label_2634a8;
        case 0x2634acu: goto label_2634ac;
        case 0x2634b0u: goto label_2634b0;
        case 0x2634b4u: goto label_2634b4;
        case 0x2634b8u: goto label_2634b8;
        case 0x2634bcu: goto label_2634bc;
        case 0x2634c0u: goto label_2634c0;
        case 0x2634c4u: goto label_2634c4;
        case 0x2634c8u: goto label_2634c8;
        case 0x2634ccu: goto label_2634cc;
        case 0x2634d0u: goto label_2634d0;
        case 0x2634d4u: goto label_2634d4;
        case 0x2634d8u: goto label_2634d8;
        case 0x2634dcu: goto label_2634dc;
        case 0x2634e0u: goto label_2634e0;
        case 0x2634e4u: goto label_2634e4;
        case 0x2634e8u: goto label_2634e8;
        case 0x2634ecu: goto label_2634ec;
        case 0x2634f0u: goto label_2634f0;
        case 0x2634f4u: goto label_2634f4;
        case 0x2634f8u: goto label_2634f8;
        case 0x2634fcu: goto label_2634fc;
        case 0x263500u: goto label_263500;
        case 0x263504u: goto label_263504;
        case 0x263508u: goto label_263508;
        case 0x26350cu: goto label_26350c;
        case 0x263510u: goto label_263510;
        case 0x263514u: goto label_263514;
        case 0x263518u: goto label_263518;
        case 0x26351cu: goto label_26351c;
        case 0x263520u: goto label_263520;
        case 0x263524u: goto label_263524;
        case 0x263528u: goto label_263528;
        case 0x26352cu: goto label_26352c;
        case 0x263530u: goto label_263530;
        case 0x263534u: goto label_263534;
        case 0x263538u: goto label_263538;
        case 0x26353cu: goto label_26353c;
        case 0x263540u: goto label_263540;
        case 0x263544u: goto label_263544;
        case 0x263548u: goto label_263548;
        case 0x26354cu: goto label_26354c;
        case 0x263550u: goto label_263550;
        case 0x263554u: goto label_263554;
        case 0x263558u: goto label_263558;
        case 0x26355cu: goto label_26355c;
        case 0x263560u: goto label_263560;
        case 0x263564u: goto label_263564;
        case 0x263568u: goto label_263568;
        case 0x26356cu: goto label_26356c;
        case 0x263570u: goto label_263570;
        case 0x263574u: goto label_263574;
        case 0x263578u: goto label_263578;
        case 0x26357cu: goto label_26357c;
        case 0x263580u: goto label_263580;
        case 0x263584u: goto label_263584;
        case 0x263588u: goto label_263588;
        case 0x26358cu: goto label_26358c;
        case 0x263590u: goto label_263590;
        case 0x263594u: goto label_263594;
        case 0x263598u: goto label_263598;
        case 0x26359cu: goto label_26359c;
        case 0x2635a0u: goto label_2635a0;
        case 0x2635a4u: goto label_2635a4;
        case 0x2635a8u: goto label_2635a8;
        case 0x2635acu: goto label_2635ac;
        case 0x2635b0u: goto label_2635b0;
        case 0x2635b4u: goto label_2635b4;
        case 0x2635b8u: goto label_2635b8;
        case 0x2635bcu: goto label_2635bc;
        default: break;
    }

    ctx->pc = 0x263058u;

label_263058:
    // 0x263058: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x263058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_26305c:
    // 0x26305c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x26305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_263060:
    // 0x263060: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x263060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_263064:
    // 0x263064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x263064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_263068:
    // 0x263068: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x263068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_26306c:
    // 0x26306c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x26306cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_263070:
    // 0x263070: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x263070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_263074:
    // 0x263074: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x263074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_263078:
    // 0x263078: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x263078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_26307c:
    // 0x26307c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x26307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_263080:
    // 0x263080: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x263080u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_263084:
    // 0x263084: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x263084u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_263088:
    // 0x263088: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x263088u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_26308c:
    // 0x26308c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x26308cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_263090:
    // 0x263090: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x263090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_263094:
    // 0x263094: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x263094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
label_263098:
    // 0x263098: 0x10400139  beqz        $v0, . + 4 + (0x139 << 2)
label_26309c:
    if (ctx->pc == 0x26309Cu) {
        ctx->pc = 0x26309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263098u;
        // 0x26309c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630A0u;
        goto label_2630a0;
    }
    ctx->pc = 0x263098u;
    {
        const bool branch_taken_0x263098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263098u;
        // 0x26309c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263098) {
            ctx->pc = 0x263580u;
            goto label_263580;
        }
    }
    ctx->pc = 0x2630A0u;
label_2630a0:
    // 0x2630a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2630a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2630a4:
    // 0x2630a4: 0x8e350234  lw          $s5, 0x234($s1)
    ctx->pc = 0x2630a4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_2630a8:
    // 0x2630a8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2630a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2630ac:
    // 0x2630ac: 0xc0f6a96  jal         func_3DAA58
label_2630b0:
    if (ctx->pc == 0x2630B0u) {
        ctx->pc = 0x2630B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630ACu;
        // 0x2630b0: 0x8e3300b8  lw          $s3, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630B4u;
        goto label_2630b4;
    }
    ctx->pc = 0x2630ACu;
    SET_GPR_U32(ctx, 31, 0x2630B4u);
    ctx->pc = 0x2630B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2630ACu;
    // 0x2630b0: 0x8e3300b8  lw          $s3, 0xB8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2630ACu, 0x2630B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2630B4u;
label_2630b4:
    // 0x2630b4: 0xc0f6a96  jal         func_3DAA58
label_2630b8:
    if (ctx->pc == 0x2630B8u) {
        ctx->pc = 0x2630B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630B4u;
        // 0x2630b8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630BCu;
        goto label_2630bc;
    }
    ctx->pc = 0x2630B4u;
    SET_GPR_U32(ctx, 31, 0x2630BCu);
    ctx->pc = 0x2630B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2630B4u;
    // 0x2630b8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2630B4u, 0x2630BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2630BCu;
label_2630bc:
    // 0x2630bc: 0x8ea30418  lw          $v1, 0x418($s5)
    ctx->pc = 0x2630bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1048)));
label_2630c0:
    // 0x2630c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2630c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2630c4:
    // 0x2630c4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2630c8:
    if (ctx->pc == 0x2630C8u) {
        ctx->pc = 0x2630C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630C4u;
        // 0x2630c8: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630CCu;
        goto label_2630cc;
    }
    ctx->pc = 0x2630C4u;
    {
        const bool branch_taken_0x2630c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2630C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630C4u;
        // 0x2630c8: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630c4) {
            ctx->pc = 0x2630DCu;
            goto label_2630dc;
        }
    }
    ctx->pc = 0x2630CCu;
label_2630cc:
    // 0x2630cc: 0xc092432  jal         func_2490C8
label_2630d0:
    if (ctx->pc == 0x2630D0u) {
        ctx->pc = 0x2630D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630CCu;
        // 0x2630d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630D4u;
        goto label_2630d4;
    }
    ctx->pc = 0x2630CCu;
    SET_GPR_U32(ctx, 31, 0x2630D4u);
    ctx->pc = 0x2630D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2630CCu;
    // 0x2630d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x2630CCu, 0x2630D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2630D4u;
label_2630d4:
    // 0x2630d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2630d8:
    if (ctx->pc == 0x2630D8u) {
        ctx->pc = 0x2630D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630D4u;
        // 0x2630d8: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630DCu;
        goto label_2630dc;
    }
    ctx->pc = 0x2630D4u;
    {
        const bool branch_taken_0x2630d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2630D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630D4u;
        // 0x2630d8: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630d4) {
            ctx->pc = 0x2630F8u;
            goto label_2630f8;
        }
    }
    ctx->pc = 0x2630DCu;
label_2630dc:
    // 0x2630dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2630dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2630e0:
    // 0x2630e0: 0xc09243e  jal         func_2490F8
label_2630e4:
    if (ctx->pc == 0x2630E4u) {
        ctx->pc = 0x2630E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630E0u;
        // 0x2630e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630E8u;
        goto label_2630e8;
    }
    ctx->pc = 0x2630E0u;
    SET_GPR_U32(ctx, 31, 0x2630E8u);
    ctx->pc = 0x2630E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2630E0u;
    // 0x2630e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490F8u, 0x2630E0u, 0x2630E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2630E8u;
label_2630e8:
    // 0x2630e8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2630e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2630ec:
    // 0x2630ec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2630ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2630f0:
    // 0x2630f0: 0x10000024  b           . + 4 + (0x24 << 2)
label_2630f4:
    if (ctx->pc == 0x2630F4u) {
        ctx->pc = 0x2630F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630F0u;
        // 0x2630f4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630F8u;
        goto label_2630f8;
    }
    ctx->pc = 0x2630F0u;
    {
        const bool branch_taken_0x2630f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2630F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630F0u;
        // 0x2630f4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630f0) {
            ctx->pc = 0x263184u;
            goto label_263184;
        }
    }
    ctx->pc = 0x2630F8u;
label_2630f8:
    // 0x2630f8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2630f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2630fc:
    // 0x2630fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2630fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_263100:
    // 0x263100: 0xc0f70ce  jal         func_3DC338
label_263104:
    if (ctx->pc == 0x263104u) {
        ctx->pc = 0x263104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263100u;
        // 0x263104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263108u;
        goto label_263108;
    }
    ctx->pc = 0x263100u;
    SET_GPR_U32(ctx, 31, 0x263108u);
    ctx->pc = 0x263104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263100u;
    // 0x263104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x263100u, 0x263108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263108u;
label_263108:
    // 0x263108: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26310c:
    if (ctx->pc == 0x26310Cu) {
        ctx->pc = 0x26310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263108u;
        // 0x26310c: 0x8e63058c  lw          $v1, 0x58C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263110u;
        goto label_263110;
    }
    ctx->pc = 0x263108u;
    {
        const bool branch_taken_0x263108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263108) {
            ctx->pc = 0x26310Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263108u;
            // 0x26310c: 0x8e63058c  lw          $v1, 0x58C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26311Cu;
            goto label_26311c;
        }
    }
    ctx->pc = 0x263110u;
label_263110:
    // 0x263110: 0xc0c4900  jal         func_312400
label_263114:
    if (ctx->pc == 0x263114u) {
        ctx->pc = 0x263114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263110u;
        // 0x263114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263118u;
        goto label_263118;
    }
    ctx->pc = 0x263110u;
    SET_GPR_U32(ctx, 31, 0x263118u);
    ctx->pc = 0x263114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263110u;
    // 0x263114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263110u, 0x263118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263118u;
label_263118:
    // 0x263118: 0x8e63058c  lw          $v1, 0x58C($s3)
    ctx->pc = 0x263118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1420)));
label_26311c:
    // 0x26311c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x26311cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_263120:
    // 0x263120: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x263120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_263124:
    // 0x263124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_263128:
    // 0x263128: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x263128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26312c:
    // 0x26312c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x26312cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_263130:
    // 0x263130: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x263130u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_263134:
    // 0x263134: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x263134u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_263138:
    // 0x263138: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x263138u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_26313c:
    // 0x26313c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x26313cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_263140:
    // 0x263140: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x263140u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_263144:
    // 0x263144: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x263144u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_263148:
    // 0x263148: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x263148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_26314c:
    // 0x26314c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x26314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_263150:
    // 0x263150: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x263150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_263154:
    // 0x263154: 0xc0f70ce  jal         func_3DC338
label_263158:
    if (ctx->pc == 0x263158u) {
        ctx->pc = 0x263158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263154u;
        // 0x263158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26315Cu;
        goto label_26315c;
    }
    ctx->pc = 0x263154u;
    SET_GPR_U32(ctx, 31, 0x26315Cu);
    ctx->pc = 0x263158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263154u;
    // 0x263158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x263154u, 0x26315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26315Cu;
label_26315c:
    // 0x26315c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_263160:
    if (ctx->pc == 0x263160u) {
        ctx->pc = 0x263160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26315Cu;
        // 0x263160: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263164u;
        goto label_263164;
    }
    ctx->pc = 0x26315Cu;
    {
        const bool branch_taken_0x26315c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26315Cu;
        // 0x263160: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26315c) {
            ctx->pc = 0x263170u;
            goto label_263170;
        }
    }
    ctx->pc = 0x263164u;
label_263164:
    // 0x263164: 0xc0c4900  jal         func_312400
label_263168:
    if (ctx->pc == 0x263168u) {
        ctx->pc = 0x263168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263164u;
        // 0x263168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26316Cu;
        goto label_26316c;
    }
    ctx->pc = 0x263164u;
    SET_GPR_U32(ctx, 31, 0x26316Cu);
    ctx->pc = 0x263168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263164u;
    // 0x263168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263164u, 0x26316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26316Cu;
label_26316c:
    // 0x26316c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x26316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_263170:
    // 0x263170: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x263170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_263174:
    // 0x263174: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x263174u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_263178:
    // 0x263178: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x263178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26317c:
    // 0x26317c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26317cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_263180:
    // 0x263180: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x263180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_263184:
    // 0x263184: 0x266205a0  addiu       $v0, $s3, 0x5A0
    ctx->pc = 0x263184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1440));
label_263188:
    // 0x263188: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x263188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26318c:
    // 0x26318c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x26318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_263190:
    // 0x263190: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x263190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263194:
    // 0x263194: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x263194u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_263198:
    // 0x263198: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x263198u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_26319c:
    // 0x26319c: 0x4604259c  madd.s      $f22, $f4, $f4
    ctx->pc = 0x26319cu;
    ctx->f[22] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2631a0:
    // 0x2631a0: 0x46160584  c1          0x160584
    ctx->pc = 0x2631a0u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
label_2631a4:
    // 0x2631a4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2631a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2631a8:
    // 0x2631a8: 0xc66005a0  lwc1        $f0, 0x5A0($s3)
    ctx->pc = 0x2631a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2631ac:
    // 0x2631ac: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2631acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2631b0:
    // 0x2631b0: 0x46160843  div.s       $f1, $f1, $f22
    ctx->pc = 0x2631b0u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[22]); }
label_2631b4:
    // 0x2631b4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2631b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2631b8:
    // 0x2631b8: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2631b8u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[22]); }
label_2631bc:
    // 0x2631bc: 0x461618c3  div.s       $f3, $f3, $f22
    ctx->pc = 0x2631bcu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[22]); }
label_2631c0:
    // 0x2631c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2631c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2631c4:
    // 0x2631c4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2631c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2631c8:
    // 0x2631c8: 0x0  nop
    ctx->pc = 0x2631c8u;
    // NOP
label_2631cc:
    // 0x2631cc: 0x0  nop
    ctx->pc = 0x2631ccu;
    // NOP
label_2631d0:
    // 0x2631d0: 0x46161083  div.s       $f2, $f2, $f22
    ctx->pc = 0x2631d0u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[22]); }
label_2631d4:
    // 0x2631d4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2631d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2631d8:
    // 0x2631d8: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2631d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2631dc:
    // 0x2631dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2631dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2631e0:
    // 0x2631e0: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x2631e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2631e4:
    // 0x2631e4: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2631e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2631e8:
    // 0x2631e8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2631e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2631ec:
    // 0x2631ec: 0xc67405b0  lwc1        $f20, 0x5B0($s3)
    ctx->pc = 0x2631ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2631f0:
    // 0x2631f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2631f4:
    if (ctx->pc == 0x2631F4u) {
        ctx->pc = 0x2631F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631F0u;
        // 0x2631f4: 0x4605a542  mul.s       $f21, $f20, $f5 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2631F8u;
        goto label_2631f8;
    }
    ctx->pc = 0x2631F0u;
    {
        const bool branch_taken_0x2631f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2631F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631F0u;
        // 0x2631f4: 0x4605a542  mul.s       $f21, $f20, $f5 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631f0) {
            ctx->pc = 0x263204u;
            goto label_263204;
        }
    }
    ctx->pc = 0x2631F8u;
label_2631f8:
    // 0x2631f8: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x2631f8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
label_2631fc:
    // 0x2631fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_263200:
    if (ctx->pc == 0x263200u) {
        ctx->pc = 0x263200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631FCu;
        // 0x263200: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x263204u;
        goto label_263204;
    }
    ctx->pc = 0x2631FCu;
    {
        const bool branch_taken_0x2631fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631FCu;
        // 0x263200: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631fc) {
            ctx->pc = 0x26320Cu;
            goto label_26320c;
        }
    }
    ctx->pc = 0x263204u;
label_263204:
    // 0x263204: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x263204u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_263208:
    // 0x263208: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x263208u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_26320c:
    // 0x26320c: 0xc0b12b0  jal         func_2C4AC0
label_263210:
    if (ctx->pc == 0x263210u) {
        ctx->pc = 0x263214u;
        goto label_263214;
    }
    ctx->pc = 0x26320Cu;
    SET_GPR_U32(ctx, 31, 0x263214u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x26320Cu, 0x263214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263214u;
label_263214:
    // 0x263214: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x263214u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_263218:
    // 0x263218: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x263218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26321c:
    // 0x26321c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26321cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_263220:
    // 0x263220: 0x0  nop
    ctx->pc = 0x263220u;
    // NOP
label_263224:
    // 0x263224: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x263224u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263228:
    // 0x263228: 0x0  nop
    ctx->pc = 0x263228u;
    // NOP
label_26322c:
    // 0x26322c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_263230:
    if (ctx->pc == 0x263230u) {
        ctx->pc = 0x263230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26322Cu;
        // 0x263230: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x263234u;
        goto label_263234;
    }
    ctx->pc = 0x26322Cu;
    {
        const bool branch_taken_0x26322c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26322Cu;
        // 0x263230: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26322c) {
            ctx->pc = 0x26323Cu;
            goto label_26323c;
        }
    }
    ctx->pc = 0x263234u;
label_263234:
    // 0x263234: 0x10000003  b           . + 4 + (0x3 << 2)
label_263238:
    if (ctx->pc == 0x263238u) {
        ctx->pc = 0x263238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263234u;
        // 0x263238: 0x4600ab07  neg.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26323Cu;
        goto label_26323c;
    }
    ctx->pc = 0x263234u;
    {
        const bool branch_taken_0x263234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263234u;
        // 0x263238: 0x4600ab07  neg.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263234) {
            ctx->pc = 0x263244u;
            goto label_263244;
        }
    }
    ctx->pc = 0x26323Cu;
label_26323c:
    // 0x26323c: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x26323cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_263240:
    // 0x263240: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x263240u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_263244:
    // 0x263244: 0xc0b12b0  jal         func_2C4AC0
label_263248:
    if (ctx->pc == 0x263248u) {
        ctx->pc = 0x26324Cu;
        goto label_26324c;
    }
    ctx->pc = 0x263244u;
    SET_GPR_U32(ctx, 31, 0x26324Cu);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x263244u, 0x26324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26324Cu;
label_26324c:
    // 0x26324c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x26324cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_263250:
    // 0x263250: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x263250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263254:
    // 0x263254: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x263254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_263258:
    // 0x263258: 0x0  nop
    ctx->pc = 0x263258u;
    // NOP
label_26325c:
    // 0x26325c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26325cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263260:
    // 0x263260: 0x0  nop
    ctx->pc = 0x263260u;
    // NOP
label_263264:
    // 0x263264: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_263268:
    if (ctx->pc == 0x263268u) {
        ctx->pc = 0x263268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263264u;
        // 0x263268: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26326Cu;
        goto label_26326c;
    }
    ctx->pc = 0x263264u;
    {
        const bool branch_taken_0x263264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263264) {
            ctx->pc = 0x263268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263264u;
            // 0x263268: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x263280u;
            goto label_263280;
        }
    }
    ctx->pc = 0x26326Cu;
label_26326c:
    // 0x26326c: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x26326cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
label_263270:
    // 0x263270: 0xc0b12b0  jal         func_2C4AC0
label_263274:
    if (ctx->pc == 0x263274u) {
        ctx->pc = 0x263274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263270u;
        // 0x263274: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x263278u;
        goto label_263278;
    }
    ctx->pc = 0x263270u;
    SET_GPR_U32(ctx, 31, 0x263278u);
    ctx->pc = 0x263274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263270u;
    // 0x263274: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x263270u, 0x263278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263278u;
label_263278:
    // 0x263278: 0x10000004  b           . + 4 + (0x4 << 2)
label_26327c:
    if (ctx->pc == 0x26327Cu) {
        ctx->pc = 0x26327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263278u;
        // 0x26327c: 0xe7b80040  swc1        $f24, 0x40($sp) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x263280u;
        goto label_263280;
    }
    ctx->pc = 0x263278u;
    {
        const bool branch_taken_0x263278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263278u;
        // 0x26327c: 0xe7b80040  swc1        $f24, 0x40($sp) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263278) {
            ctx->pc = 0x26328Cu;
            goto label_26328c;
        }
    }
    ctx->pc = 0x263280u;
label_263280:
    // 0x263280: 0xc0b12b0  jal         func_2C4AC0
label_263284:
    if (ctx->pc == 0x263284u) {
        ctx->pc = 0x263284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263280u;
        // 0x263284: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x263288u;
        goto label_263288;
    }
    ctx->pc = 0x263280u;
    SET_GPR_U32(ctx, 31, 0x263288u);
    ctx->pc = 0x263284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263280u;
    // 0x263284: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x263280u, 0x263288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263288u;
label_263288:
    // 0x263288: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x263288u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26328c:
    // 0x26328c: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x26328cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_263290:
    // 0x263290: 0xe7b70044  swc1        $f23, 0x44($sp)
    ctx->pc = 0x263290u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_263294:
    // 0x263294: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x263294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_263298:
    // 0x263298: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x263298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_26329c:
    // 0x26329c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x26329cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2632a0:
    // 0x2632a0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2632a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2632a4:
    // 0x2632a4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2632a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2632a8:
    // 0x2632a8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2632a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2632ac:
    // 0x2632ac: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2632acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2632b0:
    // 0x2632b0: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2632b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2632b4:
    // 0x2632b4: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x2632b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2632b8:
    // 0x2632b8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2632b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2632bc:
    // 0x2632bc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2632bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2632c0:
    // 0x2632c0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2632c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2632c4:
    // 0x2632c4: 0x46010044  c1          0x10044
    ctx->pc = 0x2632c4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2632c8:
    // 0x2632c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2632c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2632cc:
    // 0x2632cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2632ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2632d0:
    // 0x2632d0: 0x0  nop
    ctx->pc = 0x2632d0u;
    // NOP
label_2632d4:
    // 0x2632d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2632d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2632d8:
    // 0x2632d8: 0x0  nop
    ctx->pc = 0x2632d8u;
    // NOP
label_2632dc:
    // 0x2632dc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2632e0:
    if (ctx->pc == 0x2632E0u) {
        ctx->pc = 0x2632E4u;
        goto label_2632e4;
    }
    ctx->pc = 0x2632DCu;
    {
        const bool branch_taken_0x2632dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2632dc) {
            ctx->pc = 0x263304u;
            goto label_263304;
        }
    }
    ctx->pc = 0x2632E4u;
label_2632e4:
    // 0x2632e4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2632e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2632e8:
    // 0x2632e8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2632e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2632ec:
    // 0x2632ec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2632ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2632f0:
    // 0x2632f0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2632f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2632f4:
    // 0x2632f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2632f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2632f8:
    // 0x2632f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2632f8u;
    // VWAITQ (Q already resolved in this runtime)
label_2632fc:
    // 0x2632fc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2632fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_263300:
    // 0x263300: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x263300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_263304:
    // 0x263304: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x263304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_263308:
    // 0x263308: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x263308u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_26330c:
    // 0x26330c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x26330cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_263310:
    // 0x263310: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x263310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_263314:
    // 0x263314: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x263314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_263318:
    // 0x263318: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x263318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_26331c:
    // 0x26331c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26331cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_263320:
    // 0x263320: 0xc0f70ce  jal         func_3DC338
label_263324:
    if (ctx->pc == 0x263324u) {
        ctx->pc = 0x263324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263320u;
        // 0x263324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263328u;
        goto label_263328;
    }
    ctx->pc = 0x263320u;
    SET_GPR_U32(ctx, 31, 0x263328u);
    ctx->pc = 0x263324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263320u;
    // 0x263324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x263320u, 0x263328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263328u;
label_263328:
    // 0x263328: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26332c:
    if (ctx->pc == 0x26332Cu) {
        ctx->pc = 0x26332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263328u;
        // 0x26332c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263330u;
        goto label_263330;
    }
    ctx->pc = 0x263328u;
    {
        const bool branch_taken_0x263328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263328u;
        // 0x26332c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263328) {
            ctx->pc = 0x26333Cu;
            goto label_26333c;
        }
    }
    ctx->pc = 0x263330u;
label_263330:
    // 0x263330: 0xc0c4900  jal         func_312400
label_263334:
    if (ctx->pc == 0x263334u) {
        ctx->pc = 0x263334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263330u;
        // 0x263334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263338u;
        goto label_263338;
    }
    ctx->pc = 0x263330u;
    SET_GPR_U32(ctx, 31, 0x263338u);
    ctx->pc = 0x263334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263330u;
    // 0x263334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263330u, 0x263338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263338u;
label_263338:
    // 0x263338: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x263338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26333c:
    // 0x26333c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x26333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_263340:
    // 0x263340: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x263340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_263344:
    // 0x263344: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x263344u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_263348:
    // 0x263348: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x263348u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_26334c:
    // 0x26334c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x26334cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_263350:
    // 0x263350: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x263350u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_263354:
    // 0x263354: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x263354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_263358:
    // 0x263358: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x263358u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26335c:
    // 0x26335c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x26335cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_263360:
    // 0x263360: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x263360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_263364:
    // 0x263364: 0x8ea3010c  lw          $v1, 0x10C($s5)
    ctx->pc = 0x263364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_263368:
    // 0x263368: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x263368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_26336c:
    // 0x26336c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26336cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_263370:
    // 0x263370: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x263370u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_263374:
    // 0x263374: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x263374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_263378:
    // 0x263378: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x263378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_26337c:
    // 0x26337c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26337cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_263380:
    // 0x263380: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x263380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_263384:
    // 0x263384: 0xc66d059c  lwc1        $f13, 0x59C($s3)
    ctx->pc = 0x263384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_263388:
    // 0x263388: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x263388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26338c:
    // 0x26338c: 0x0  nop
    ctx->pc = 0x26338cu;
    // NOP
label_263390:
    // 0x263390: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_263394:
    if (ctx->pc == 0x263394u) {
        ctx->pc = 0x263394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263390u;
        // 0x263394: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x263398u;
        goto label_263398;
    }
    ctx->pc = 0x263390u;
    {
        const bool branch_taken_0x263390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263390u;
        // 0x263394: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263390) {
            ctx->pc = 0x2633A4u;
            goto label_2633a4;
        }
    }
    ctx->pc = 0x263398u;
label_263398:
    // 0x263398: 0xc0b12b0  jal         func_2C4AC0
label_26339c:
    if (ctx->pc == 0x26339Cu) {
        ctx->pc = 0x26339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263398u;
        // 0x26339c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2633A0u;
        goto label_2633a0;
    }
    ctx->pc = 0x263398u;
    SET_GPR_U32(ctx, 31, 0x2633A0u);
    ctx->pc = 0x26339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263398u;
    // 0x26339c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x263398u, 0x2633A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2633A0u;
label_2633a0:
    // 0x2633a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2633a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2633a4:
    // 0x2633a4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2633a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2633a8:
    // 0x2633a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2633a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2633ac:
    // 0x2633ac: 0xa3a00041  sb          $zero, 0x41($sp)
    ctx->pc = 0x2633acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 0));
label_2633b0:
    // 0x2633b0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2633b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_2633b4:
    // 0x2633b4: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x2633b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_2633b8:
    // 0x2633b8: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x2633b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
label_2633bc:
    // 0x2633bc: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2633bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_2633c0:
    // 0x2633c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2633c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2633c4:
    // 0x2633c4: 0x8e250274  lw          $a1, 0x274($s1)
    ctx->pc = 0x2633c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_2633c8:
    // 0x2633c8: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x2633c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
label_2633cc:
    // 0x2633cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2633ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2633d0:
    // 0x2633d0: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x2633d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2633d4:
    // 0x2633d4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2633d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2633d8:
    // 0x2633d8: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x2633d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_2633dc:
    // 0x2633dc: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x2633dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_2633e0:
    // 0x2633e0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2633e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2633e4:
    // 0x2633e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2633e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2633e8:
    // 0x2633e8: 0xc097f90  jal         func_25FE40
label_2633ec:
    if (ctx->pc == 0x2633ECu) {
        ctx->pc = 0x2633ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633E8u;
        // 0x2633ec: 0xa3a20041  sb          $v0, 0x41($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2633F0u;
        goto label_2633f0;
    }
    ctx->pc = 0x2633E8u;
    SET_GPR_U32(ctx, 31, 0x2633F0u);
    ctx->pc = 0x2633ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2633E8u;
    // 0x2633ec: 0xa3a20041  sb          $v0, 0x41($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE40u, 0x2633E8u, 0x2633F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2633F0u;
label_2633f0:
    // 0x2633f0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2633f4:
    if (ctx->pc == 0x2633F4u) {
        ctx->pc = 0x2633F8u;
        goto label_2633f8;
    }
    ctx->pc = 0x2633F0u;
    {
        const bool branch_taken_0x2633f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2633f0) {
            ctx->pc = 0x26345Cu;
            goto label_26345c;
        }
    }
    ctx->pc = 0x2633F8u;
label_2633f8:
    // 0x2633f8: 0xc0f5240  jal         func_3D4900
label_2633fc:
    if (ctx->pc == 0x2633FCu) {
        ctx->pc = 0x2633FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633F8u;
        // 0x2633fc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263400u;
        goto label_263400;
    }
    ctx->pc = 0x2633F8u;
    SET_GPR_U32(ctx, 31, 0x263400u);
    ctx->pc = 0x2633FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2633F8u;
    // 0x2633fc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2633F8u, 0x263400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263400u;
label_263400:
    // 0x263400: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x263400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263404:
    // 0x263404: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x263404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_263408:
    // 0x263408: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x263408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26340c:
    // 0x26340c: 0xc0f70ce  jal         func_3DC338
label_263410:
    if (ctx->pc == 0x263410u) {
        ctx->pc = 0x263410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26340Cu;
        // 0x263410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263414u;
        goto label_263414;
    }
    ctx->pc = 0x26340Cu;
    SET_GPR_U32(ctx, 31, 0x263414u);
    ctx->pc = 0x263410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26340Cu;
    // 0x263410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26340Cu, 0x263414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263414u;
label_263414:
    // 0x263414: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_263418:
    if (ctx->pc == 0x263418u) {
        ctx->pc = 0x263418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263414u;
        // 0x263418: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26341Cu;
        goto label_26341c;
    }
    ctx->pc = 0x263414u;
    {
        const bool branch_taken_0x263414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263414) {
            ctx->pc = 0x263418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263414u;
            // 0x263418: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263428u;
            goto label_263428;
        }
    }
    ctx->pc = 0x26341Cu;
label_26341c:
    // 0x26341c: 0xc0c4900  jal         func_312400
label_263420:
    if (ctx->pc == 0x263420u) {
        ctx->pc = 0x263420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26341Cu;
        // 0x263420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263424u;
        goto label_263424;
    }
    ctx->pc = 0x26341Cu;
    SET_GPR_U32(ctx, 31, 0x263424u);
    ctx->pc = 0x263420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26341Cu;
    // 0x263420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26341Cu, 0x263424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263424u;
label_263424:
    // 0x263424: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x263424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_263428:
    // 0x263428: 0x26090080  addiu       $t1, $s0, 0x80
    ctx->pc = 0x263428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26342c:
    // 0x26342c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x26342cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_263430:
    // 0x263430: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x263430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_263434:
    // 0x263434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_263438:
    // 0x263438: 0x8e270288  lw          $a3, 0x288($s1)
    ctx->pc = 0x263438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
label_26343c:
    // 0x26343c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26343cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_263440:
    // 0x263440: 0xc66c05dc  lwc1        $f12, 0x5DC($s3)
    ctx->pc = 0x263440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_263444:
    // 0x263444: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x263444u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_263448:
    // 0x263448: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x263448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_26344c:
    // 0x26344c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x26344cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_263450:
    // 0x263450: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x263450u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
label_263454:
    // 0x263454: 0x10000019  b           . + 4 + (0x19 << 2)
label_263458:
    if (ctx->pc == 0x263458u) {
        ctx->pc = 0x263458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263454u;
        // 0x263458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26345Cu;
        goto label_26345c;
    }
    ctx->pc = 0x263454u;
    {
        const bool branch_taken_0x263454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263454u;
        // 0x263458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263454) {
            ctx->pc = 0x2634BCu;
            goto label_2634bc;
        }
    }
    ctx->pc = 0x26345Cu;
label_26345c:
    // 0x26345c: 0xc0f5240  jal         func_3D4900
label_263460:
    if (ctx->pc == 0x263460u) {
        ctx->pc = 0x263460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26345Cu;
        // 0x263460: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263464u;
        goto label_263464;
    }
    ctx->pc = 0x26345Cu;
    SET_GPR_U32(ctx, 31, 0x263464u);
    ctx->pc = 0x263460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26345Cu;
    // 0x263460: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x26345Cu, 0x263464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263464u;
label_263464:
    // 0x263464: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x263464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263468:
    // 0x263468: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x263468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_26346c:
    // 0x26346c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26346cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_263470:
    // 0x263470: 0xc0f70ce  jal         func_3DC338
label_263474:
    if (ctx->pc == 0x263474u) {
        ctx->pc = 0x263474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263470u;
        // 0x263474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263478u;
        goto label_263478;
    }
    ctx->pc = 0x263470u;
    SET_GPR_U32(ctx, 31, 0x263478u);
    ctx->pc = 0x263474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263470u;
    // 0x263474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x263470u, 0x263478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263478u;
label_263478:
    // 0x263478: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26347c:
    if (ctx->pc == 0x26347Cu) {
        ctx->pc = 0x26347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263478u;
        // 0x26347c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263480u;
        goto label_263480;
    }
    ctx->pc = 0x263478u;
    {
        const bool branch_taken_0x263478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263478) {
            ctx->pc = 0x26347Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263478u;
            // 0x26347c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26348Cu;
            goto label_26348c;
        }
    }
    ctx->pc = 0x263480u;
label_263480:
    // 0x263480: 0xc0c4900  jal         func_312400
label_263484:
    if (ctx->pc == 0x263484u) {
        ctx->pc = 0x263484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263480u;
        // 0x263484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263488u;
        goto label_263488;
    }
    ctx->pc = 0x263480u;
    SET_GPR_U32(ctx, 31, 0x263488u);
    ctx->pc = 0x263484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263480u;
    // 0x263484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263480u, 0x263488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263488u;
label_263488:
    // 0x263488: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x263488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_26348c:
    // 0x26348c: 0x26090080  addiu       $t1, $s0, 0x80
    ctx->pc = 0x26348cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_263490:
    // 0x263490: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x263490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_263494:
    // 0x263494: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x263494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_263498:
    // 0x263498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26349c:
    // 0x26349c: 0x8e270288  lw          $a3, 0x288($s1)
    ctx->pc = 0x26349cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
label_2634a0:
    // 0x2634a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2634a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2634a4:
    // 0x2634a4: 0xc66c05dc  lwc1        $f12, 0x5DC($s3)
    ctx->pc = 0x2634a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2634a8:
    // 0x2634a8: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x2634a8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_2634ac:
    // 0x2634ac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2634acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2634b0:
    // 0x2634b0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2634b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2634b4:
    // 0x2634b4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x2634b4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
label_2634b8:
    // 0x2634b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2634b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2634bc:
    // 0x2634bc: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x2634bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2634c0:
    // 0x2634c0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2634c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2634c4:
    // 0x2634c4: 0xc0d1d7e  jal         func_3475F8
label_2634c8:
    if (ctx->pc == 0x2634C8u) {
        ctx->pc = 0x2634C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634C4u;
        // 0x2634c8: 0x266b05c0  addiu       $t3, $s3, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 1472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634CCu;
        goto label_2634cc;
    }
    ctx->pc = 0x2634C4u;
    SET_GPR_U32(ctx, 31, 0x2634CCu);
    ctx->pc = 0x2634C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2634C4u;
    // 0x2634c8: 0x266b05c0  addiu       $t3, $s3, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475F8u, 0x2634C4u, 0x2634CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2634CCu;
label_2634cc:
    // 0x2634cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2634ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2634d0:
    // 0x2634d0: 0xc0d438a  jal         func_350E28
label_2634d4:
    if (ctx->pc == 0x2634D4u) {
        ctx->pc = 0x2634D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634D0u;
        // 0x2634d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634D8u;
        goto label_2634d8;
    }
    ctx->pc = 0x2634D0u;
    SET_GPR_U32(ctx, 31, 0x2634D8u);
    ctx->pc = 0x2634D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2634D0u;
    // 0x2634d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E28u, 0x2634D0u, 0x2634D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2634D8u;
label_2634d8:
    // 0x2634d8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2634dc:
    if (ctx->pc == 0x2634DCu) {
        ctx->pc = 0x2634DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634D8u;
        // 0x2634dc: 0x8e220274  lw          $v0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634E0u;
        goto label_2634e0;
    }
    ctx->pc = 0x2634D8u;
    {
        const bool branch_taken_0x2634d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2634d8) {
            ctx->pc = 0x2634DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2634D8u;
            // 0x2634dc: 0x8e220274  lw          $v0, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2634F4u;
            goto label_2634f4;
        }
    }
    ctx->pc = 0x2634E0u;
label_2634e0:
    // 0x2634e0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2634e4:
    if (ctx->pc == 0x2634E4u) {
        ctx->pc = 0x2634E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634E0u;
        // 0x2634e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634E8u;
        goto label_2634e8;
    }
    ctx->pc = 0x2634E0u;
    {
        const bool branch_taken_0x2634e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634E0u;
        // 0x2634e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634e0) {
            ctx->pc = 0x2634F0u;
            goto label_2634f0;
        }
    }
    ctx->pc = 0x2634E8u;
label_2634e8:
    // 0x2634e8: 0xc0d1e40  jal         func_347900
label_2634ec:
    if (ctx->pc == 0x2634ECu) {
        ctx->pc = 0x2634ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634E8u;
        // 0x2634ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634F0u;
        goto label_2634f0;
    }
    ctx->pc = 0x2634E8u;
    SET_GPR_U32(ctx, 31, 0x2634F0u);
    ctx->pc = 0x2634ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2634E8u;
    // 0x2634ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x2634E8u, 0x2634F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2634F0u;
label_2634f0:
    // 0x2634f0: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x2634f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_2634f4:
    // 0x2634f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2634f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2634f8:
    // 0x2634f8: 0x8c6400c8  lw          $a0, 0xC8($v1)
    ctx->pc = 0x2634f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_2634fc:
    // 0x2634fc: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_263500:
    if (ctx->pc == 0x263500u) {
        ctx->pc = 0x263500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634FCu;
        // 0x263500: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263504u;
        goto label_263504;
    }
    ctx->pc = 0x2634FCu;
    {
        const bool branch_taken_0x2634fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x263500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634FCu;
        // 0x263500: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634fc) {
            ctx->pc = 0x263580u;
            goto label_263580;
        }
    }
    ctx->pc = 0x263504u;
label_263504:
    // 0x263504: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x263504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_263508:
    // 0x263508: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x263508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_26350c:
    // 0x26350c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26350cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_263510:
    // 0x263510: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x263510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_263514:
    // 0x263514: 0xc0c2c18  jal         func_30B060
label_263518:
    if (ctx->pc == 0x263518u) {
        ctx->pc = 0x263518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263514u;
        // 0x263518: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26351Cu;
        goto label_26351c;
    }
    ctx->pc = 0x263514u;
    SET_GPR_U32(ctx, 31, 0x26351Cu);
    ctx->pc = 0x263518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263514u;
    // 0x263518: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B060u, 0x263514u, 0x26351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26351Cu;
label_26351c:
    // 0x26351c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_263520:
    if (ctx->pc == 0x263520u) {
        ctx->pc = 0x263520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26351Cu;
        // 0x263520: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263524u;
        goto label_263524;
    }
    ctx->pc = 0x26351Cu;
    {
        const bool branch_taken_0x26351c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26351Cu;
        // 0x263520: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26351c) {
            ctx->pc = 0x263584u;
            goto label_263584;
        }
    }
    ctx->pc = 0x263524u;
label_263524:
    // 0x263524: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x263524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_263528:
    // 0x263528: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x263528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26352c:
    // 0x26352c: 0xc0d4338  jal         func_350CE0
label_263530:
    if (ctx->pc == 0x263530u) {
        ctx->pc = 0x263530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26352Cu;
        // 0x263530: 0x8c6400c8  lw          $a0, 0xC8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263534u;
        goto label_263534;
    }
    ctx->pc = 0x26352Cu;
    SET_GPR_U32(ctx, 31, 0x263534u);
    ctx->pc = 0x263530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26352Cu;
    // 0x263530: 0x8c6400c8  lw          $a0, 0xC8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CE0u, 0x26352Cu, 0x263534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263534u;
label_263534:
    // 0x263534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263538:
    // 0x263538: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x263538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_26353c:
    // 0x26353c: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x26353cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_263540:
    // 0x263540: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x263540u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_263544:
    // 0x263544: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x263544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_263548:
    // 0x263548: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x263548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26354c:
    // 0x26354c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x26354cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_263550:
    // 0x263550: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x263550u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_263554:
    // 0x263554: 0x4a0003bf  vwaitq
    ctx->pc = 0x263554u;
    // VWAITQ (Q already resolved in this runtime)
label_263558:
    // 0x263558: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x263558u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26355c:
    // 0x26355c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x26355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_263560:
    // 0x263560: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x263560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_263564:
    // 0x263564: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x263564u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_263568:
    // 0x263568: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x263568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_26356c:
    // 0x26356c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x26356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_263570:
    // 0x263570: 0x40f809  jalr        $v0
label_263574:
    if (ctx->pc == 0x263574u) {
        ctx->pc = 0x263574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263570u;
        // 0x263574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263578u;
        goto label_263578;
    }
    ctx->pc = 0x263570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263578u);
        ctx->pc = 0x263574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263570u;
        // 0x263574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263570u, 0x263578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263578u;
label_263578:
    // 0x263578: 0xc0d1782  jal         func_345E08
label_26357c:
    if (ctx->pc == 0x26357Cu) {
        ctx->pc = 0x26357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263578u;
        // 0x26357c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263580u;
        goto label_263580;
    }
    ctx->pc = 0x263578u;
    SET_GPR_U32(ctx, 31, 0x263580u);
    ctx->pc = 0x26357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263578u;
    // 0x26357c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345E08u, 0x263578u, 0x263580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263580u;
label_263580:
    // 0x263580: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x263580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_263584:
    // 0x263584: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x263584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_263588:
    // 0x263588: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x263588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26358c:
    // 0x26358c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x26358cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_263590:
    // 0x263590: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x263590u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_263594:
    // 0x263594: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x263594u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_263598:
    // 0x263598: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x263598u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26359c:
    // 0x26359c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x26359cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2635a0:
    // 0x2635a0: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x2635a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2635a4:
    // 0x2635a4: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x2635a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2635a8:
    // 0x2635a8: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2635a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2635ac:
    // 0x2635ac: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2635acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2635b0:
    // 0x2635b0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2635b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2635b4:
    // 0x2635b4: 0x3e00008  jr          $ra
label_2635b8:
    if (ctx->pc == 0x2635B8u) {
        ctx->pc = 0x2635B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635B4u;
        // 0x2635b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2635BCu;
        goto label_2635bc;
    }
    ctx->pc = 0x2635B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2635B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635B4u;
        // 0x2635b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2635B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2635BCu;
label_2635bc:
    // 0x2635bc: 0x0  nop
    ctx->pc = 0x2635bcu;
    // NOP
    ctx->pc = 0x2635c0u;
}
