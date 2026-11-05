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

// Function: sub_0036FF0C
// Address: 0x36ff0c - 0x370398
void sub_0036FF0C_0x36ff0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FF0C_0x36ff0c");
#endif

    switch (ctx->pc) {
        case 0x36ff0cu: goto label_36ff0c;
        case 0x36ff10u: goto label_36ff10;
        case 0x36ff14u: goto label_36ff14;
        case 0x36ff18u: goto label_36ff18;
        case 0x36ff1cu: goto label_36ff1c;
        case 0x36ff20u: goto label_36ff20;
        case 0x36ff24u: goto label_36ff24;
        case 0x36ff28u: goto label_36ff28;
        case 0x36ff2cu: goto label_36ff2c;
        case 0x36ff30u: goto label_36ff30;
        case 0x36ff34u: goto label_36ff34;
        case 0x36ff38u: goto label_36ff38;
        case 0x36ff3cu: goto label_36ff3c;
        case 0x36ff40u: goto label_36ff40;
        case 0x36ff44u: goto label_36ff44;
        case 0x36ff48u: goto label_36ff48;
        case 0x36ff4cu: goto label_36ff4c;
        case 0x36ff50u: goto label_36ff50;
        case 0x36ff54u: goto label_36ff54;
        case 0x36ff58u: goto label_36ff58;
        case 0x36ff5cu: goto label_36ff5c;
        case 0x36ff60u: goto label_36ff60;
        case 0x36ff64u: goto label_36ff64;
        case 0x36ff68u: goto label_36ff68;
        case 0x36ff6cu: goto label_36ff6c;
        case 0x36ff70u: goto label_36ff70;
        case 0x36ff74u: goto label_36ff74;
        case 0x36ff78u: goto label_36ff78;
        case 0x36ff7cu: goto label_36ff7c;
        case 0x36ff80u: goto label_36ff80;
        case 0x36ff84u: goto label_36ff84;
        case 0x36ff88u: goto label_36ff88;
        case 0x36ff8cu: goto label_36ff8c;
        case 0x36ff90u: goto label_36ff90;
        case 0x36ff94u: goto label_36ff94;
        case 0x36ff98u: goto label_36ff98;
        case 0x36ff9cu: goto label_36ff9c;
        case 0x36ffa0u: goto label_36ffa0;
        case 0x36ffa4u: goto label_36ffa4;
        case 0x36ffa8u: goto label_36ffa8;
        case 0x36ffacu: goto label_36ffac;
        case 0x36ffb0u: goto label_36ffb0;
        case 0x36ffb4u: goto label_36ffb4;
        case 0x36ffb8u: goto label_36ffb8;
        case 0x36ffbcu: goto label_36ffbc;
        case 0x36ffc0u: goto label_36ffc0;
        case 0x36ffc4u: goto label_36ffc4;
        case 0x36ffc8u: goto label_36ffc8;
        case 0x36ffccu: goto label_36ffcc;
        case 0x36ffd0u: goto label_36ffd0;
        case 0x36ffd4u: goto label_36ffd4;
        case 0x36ffd8u: goto label_36ffd8;
        case 0x36ffdcu: goto label_36ffdc;
        case 0x36ffe0u: goto label_36ffe0;
        case 0x36ffe4u: goto label_36ffe4;
        case 0x36ffe8u: goto label_36ffe8;
        case 0x36ffecu: goto label_36ffec;
        case 0x36fff0u: goto label_36fff0;
        case 0x36fff4u: goto label_36fff4;
        case 0x36fff8u: goto label_36fff8;
        case 0x36fffcu: goto label_36fffc;
        case 0x370000u: goto label_370000;
        case 0x370004u: goto label_370004;
        case 0x370008u: goto label_370008;
        case 0x37000cu: goto label_37000c;
        case 0x370010u: goto label_370010;
        case 0x370014u: goto label_370014;
        case 0x370018u: goto label_370018;
        case 0x37001cu: goto label_37001c;
        case 0x370020u: goto label_370020;
        case 0x370024u: goto label_370024;
        case 0x370028u: goto label_370028;
        case 0x37002cu: goto label_37002c;
        case 0x370030u: goto label_370030;
        case 0x370034u: goto label_370034;
        case 0x370038u: goto label_370038;
        case 0x37003cu: goto label_37003c;
        case 0x370040u: goto label_370040;
        case 0x370044u: goto label_370044;
        case 0x370048u: goto label_370048;
        case 0x37004cu: goto label_37004c;
        case 0x370050u: goto label_370050;
        case 0x370054u: goto label_370054;
        case 0x370058u: goto label_370058;
        case 0x37005cu: goto label_37005c;
        case 0x370060u: goto label_370060;
        case 0x370064u: goto label_370064;
        case 0x370068u: goto label_370068;
        case 0x37006cu: goto label_37006c;
        case 0x370070u: goto label_370070;
        case 0x370074u: goto label_370074;
        case 0x370078u: goto label_370078;
        case 0x37007cu: goto label_37007c;
        case 0x370080u: goto label_370080;
        case 0x370084u: goto label_370084;
        case 0x370088u: goto label_370088;
        case 0x37008cu: goto label_37008c;
        case 0x370090u: goto label_370090;
        case 0x370094u: goto label_370094;
        case 0x370098u: goto label_370098;
        case 0x37009cu: goto label_37009c;
        case 0x3700a0u: goto label_3700a0;
        case 0x3700a4u: goto label_3700a4;
        case 0x3700a8u: goto label_3700a8;
        case 0x3700acu: goto label_3700ac;
        case 0x3700b0u: goto label_3700b0;
        case 0x3700b4u: goto label_3700b4;
        case 0x3700b8u: goto label_3700b8;
        case 0x3700bcu: goto label_3700bc;
        case 0x3700c0u: goto label_3700c0;
        case 0x3700c4u: goto label_3700c4;
        case 0x3700c8u: goto label_3700c8;
        case 0x3700ccu: goto label_3700cc;
        case 0x3700d0u: goto label_3700d0;
        case 0x3700d4u: goto label_3700d4;
        case 0x3700d8u: goto label_3700d8;
        case 0x3700dcu: goto label_3700dc;
        case 0x3700e0u: goto label_3700e0;
        case 0x3700e4u: goto label_3700e4;
        case 0x3700e8u: goto label_3700e8;
        case 0x3700ecu: goto label_3700ec;
        case 0x3700f0u: goto label_3700f0;
        case 0x3700f4u: goto label_3700f4;
        case 0x3700f8u: goto label_3700f8;
        case 0x3700fcu: goto label_3700fc;
        case 0x370100u: goto label_370100;
        case 0x370104u: goto label_370104;
        case 0x370108u: goto label_370108;
        case 0x37010cu: goto label_37010c;
        case 0x370110u: goto label_370110;
        case 0x370114u: goto label_370114;
        case 0x370118u: goto label_370118;
        case 0x37011cu: goto label_37011c;
        case 0x370120u: goto label_370120;
        case 0x370124u: goto label_370124;
        case 0x370128u: goto label_370128;
        case 0x37012cu: goto label_37012c;
        case 0x370130u: goto label_370130;
        case 0x370134u: goto label_370134;
        case 0x370138u: goto label_370138;
        case 0x37013cu: goto label_37013c;
        case 0x370140u: goto label_370140;
        case 0x370144u: goto label_370144;
        case 0x370148u: goto label_370148;
        case 0x37014cu: goto label_37014c;
        case 0x370150u: goto label_370150;
        case 0x370154u: goto label_370154;
        case 0x370158u: goto label_370158;
        case 0x37015cu: goto label_37015c;
        case 0x370160u: goto label_370160;
        case 0x370164u: goto label_370164;
        case 0x370168u: goto label_370168;
        case 0x37016cu: goto label_37016c;
        case 0x370170u: goto label_370170;
        case 0x370174u: goto label_370174;
        case 0x370178u: goto label_370178;
        case 0x37017cu: goto label_37017c;
        case 0x370180u: goto label_370180;
        case 0x370184u: goto label_370184;
        case 0x370188u: goto label_370188;
        case 0x37018cu: goto label_37018c;
        case 0x370190u: goto label_370190;
        case 0x370194u: goto label_370194;
        case 0x370198u: goto label_370198;
        case 0x37019cu: goto label_37019c;
        case 0x3701a0u: goto label_3701a0;
        case 0x3701a4u: goto label_3701a4;
        case 0x3701a8u: goto label_3701a8;
        case 0x3701acu: goto label_3701ac;
        case 0x3701b0u: goto label_3701b0;
        case 0x3701b4u: goto label_3701b4;
        case 0x3701b8u: goto label_3701b8;
        case 0x3701bcu: goto label_3701bc;
        case 0x3701c0u: goto label_3701c0;
        case 0x3701c4u: goto label_3701c4;
        case 0x3701c8u: goto label_3701c8;
        case 0x3701ccu: goto label_3701cc;
        case 0x3701d0u: goto label_3701d0;
        case 0x3701d4u: goto label_3701d4;
        case 0x3701d8u: goto label_3701d8;
        case 0x3701dcu: goto label_3701dc;
        case 0x3701e0u: goto label_3701e0;
        case 0x3701e4u: goto label_3701e4;
        case 0x3701e8u: goto label_3701e8;
        case 0x3701ecu: goto label_3701ec;
        case 0x3701f0u: goto label_3701f0;
        case 0x3701f4u: goto label_3701f4;
        case 0x3701f8u: goto label_3701f8;
        case 0x3701fcu: goto label_3701fc;
        case 0x370200u: goto label_370200;
        case 0x370204u: goto label_370204;
        case 0x370208u: goto label_370208;
        case 0x37020cu: goto label_37020c;
        case 0x370210u: goto label_370210;
        case 0x370214u: goto label_370214;
        case 0x370218u: goto label_370218;
        case 0x37021cu: goto label_37021c;
        case 0x370220u: goto label_370220;
        case 0x370224u: goto label_370224;
        case 0x370228u: goto label_370228;
        case 0x37022cu: goto label_37022c;
        case 0x370230u: goto label_370230;
        case 0x370234u: goto label_370234;
        case 0x370238u: goto label_370238;
        case 0x37023cu: goto label_37023c;
        case 0x370240u: goto label_370240;
        case 0x370244u: goto label_370244;
        case 0x370248u: goto label_370248;
        case 0x37024cu: goto label_37024c;
        case 0x370250u: goto label_370250;
        case 0x370254u: goto label_370254;
        case 0x370258u: goto label_370258;
        case 0x37025cu: goto label_37025c;
        case 0x370260u: goto label_370260;
        case 0x370264u: goto label_370264;
        case 0x370268u: goto label_370268;
        case 0x37026cu: goto label_37026c;
        case 0x370270u: goto label_370270;
        case 0x370274u: goto label_370274;
        case 0x370278u: goto label_370278;
        case 0x37027cu: goto label_37027c;
        case 0x370280u: goto label_370280;
        case 0x370284u: goto label_370284;
        case 0x370288u: goto label_370288;
        case 0x37028cu: goto label_37028c;
        case 0x370290u: goto label_370290;
        case 0x370294u: goto label_370294;
        case 0x370298u: goto label_370298;
        case 0x37029cu: goto label_37029c;
        case 0x3702a0u: goto label_3702a0;
        case 0x3702a4u: goto label_3702a4;
        case 0x3702a8u: goto label_3702a8;
        case 0x3702acu: goto label_3702ac;
        case 0x3702b0u: goto label_3702b0;
        case 0x3702b4u: goto label_3702b4;
        case 0x3702b8u: goto label_3702b8;
        case 0x3702bcu: goto label_3702bc;
        case 0x3702c0u: goto label_3702c0;
        case 0x3702c4u: goto label_3702c4;
        case 0x3702c8u: goto label_3702c8;
        case 0x3702ccu: goto label_3702cc;
        case 0x3702d0u: goto label_3702d0;
        case 0x3702d4u: goto label_3702d4;
        case 0x3702d8u: goto label_3702d8;
        case 0x3702dcu: goto label_3702dc;
        case 0x3702e0u: goto label_3702e0;
        case 0x3702e4u: goto label_3702e4;
        case 0x3702e8u: goto label_3702e8;
        case 0x3702ecu: goto label_3702ec;
        case 0x3702f0u: goto label_3702f0;
        case 0x3702f4u: goto label_3702f4;
        case 0x3702f8u: goto label_3702f8;
        case 0x3702fcu: goto label_3702fc;
        case 0x370300u: goto label_370300;
        case 0x370304u: goto label_370304;
        case 0x370308u: goto label_370308;
        case 0x37030cu: goto label_37030c;
        case 0x370310u: goto label_370310;
        case 0x370314u: goto label_370314;
        case 0x370318u: goto label_370318;
        case 0x37031cu: goto label_37031c;
        case 0x370320u: goto label_370320;
        case 0x370324u: goto label_370324;
        case 0x370328u: goto label_370328;
        case 0x37032cu: goto label_37032c;
        case 0x370330u: goto label_370330;
        case 0x370334u: goto label_370334;
        case 0x370338u: goto label_370338;
        case 0x37033cu: goto label_37033c;
        case 0x370340u: goto label_370340;
        case 0x370344u: goto label_370344;
        case 0x370348u: goto label_370348;
        case 0x37034cu: goto label_37034c;
        case 0x370350u: goto label_370350;
        case 0x370354u: goto label_370354;
        case 0x370358u: goto label_370358;
        case 0x37035cu: goto label_37035c;
        case 0x370360u: goto label_370360;
        case 0x370364u: goto label_370364;
        case 0x370368u: goto label_370368;
        case 0x37036cu: goto label_37036c;
        case 0x370370u: goto label_370370;
        case 0x370374u: goto label_370374;
        case 0x370378u: goto label_370378;
        case 0x37037cu: goto label_37037c;
        case 0x370380u: goto label_370380;
        case 0x370384u: goto label_370384;
        case 0x370388u: goto label_370388;
        case 0x37038cu: goto label_37038c;
        case 0x370390u: goto label_370390;
        case 0x370394u: goto label_370394;
        default: break;
    }

    ctx->pc = 0x36ff0cu;

label_36ff0c:
    // 0x36ff0c: 0x3e00008  jr          $ra
label_36ff10:
    if (ctx->pc == 0x36FF10u) {
        ctx->pc = 0x36FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF0Cu;
        // 0x36ff10: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FF14u;
        goto label_36ff14;
    }
    ctx->pc = 0x36FF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF0Cu;
        // 0x36ff10: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FF14u;
label_36ff14:
    // 0x36ff14: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36ff14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_36ff18:
    // 0x36ff18: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
label_36ff1c:
    if (ctx->pc == 0x36FF1Cu) {
        ctx->pc = 0x36FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF18u;
        // 0x36ff1c: 0x2dc2000d  sltiu       $v0, $t6, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FF20u;
        goto label_36ff20;
    }
    ctx->pc = 0x36FF18u;
    {
        const bool branch_taken_0x36ff18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF18u;
        // 0x36ff1c: 0x2dc2000d  sltiu       $v0, $t6, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff18) {
            ctx->pc = 0x370130u;
            goto label_370130;
        }
    }
    ctx->pc = 0x36FF20u;
label_36ff20:
    // 0x36ff20: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_36ff24:
    if (ctx->pc == 0x36FF24u) {
        ctx->pc = 0x36FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF20u;
        // 0x36ff24: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FF28u;
        goto label_36ff28;
    }
    ctx->pc = 0x36FF20u;
    {
        const bool branch_taken_0x36ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF20u;
        // 0x36ff24: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff20) {
            ctx->pc = 0x370004u;
            goto label_370004;
        }
    }
    ctx->pc = 0x36FF28u;
label_36ff28:
    // 0x36ff28: 0x9504000a  lhu         $a0, 0xA($t0)
    ctx->pc = 0x36ff28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_36ff2c:
    // 0x36ff2c: 0x25cefff4  addiu       $t6, $t6, -0xC
    ctx->pc = 0x36ff2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967284));
label_36ff30:
    // 0x36ff30: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x36ff30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_36ff34:
    // 0x36ff34: 0x2dc7000d  sltiu       $a3, $t6, 0xD
    ctx->pc = 0x36ff34u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_36ff38:
    // 0x36ff38: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x36ff38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
label_36ff3c:
    // 0x36ff3c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x36ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_36ff40:
    // 0x36ff40: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x36ff40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_36ff44:
    // 0x36ff44: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x36ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_36ff48:
    // 0x36ff48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x36ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_36ff4c:
    // 0x36ff4c: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x36ff4cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_36ff50:
    // 0x36ff50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_36ff54:
    // 0x36ff54: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x36ff54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_36ff58:
    // 0x36ff58: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x36ff58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_36ff5c:
    // 0x36ff5c: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x36ff5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_36ff60:
    // 0x36ff60: 0xc1f02  srl         $v1, $t4, 28
    ctx->pc = 0x36ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 28));
label_36ff64:
    // 0x36ff64: 0xc1100  sll         $v0, $t4, 4
    ctx->pc = 0x36ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_36ff68:
    // 0x36ff68: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x36ff68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_36ff6c:
    // 0x36ff6c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x36ff6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_36ff70:
    // 0x36ff70: 0x14c5023  subu        $t2, $t2, $t4
    ctx->pc = 0x36ff70u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_36ff74:
    // 0x36ff74: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x36ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_36ff78:
    // 0x36ff78: 0x1425026  xor         $t2, $t2, $v0
    ctx->pc = 0x36ff78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 2));
label_36ff7c:
    // 0x36ff7c: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x36ff7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_36ff80:
    // 0x36ff80: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x36ff80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_36ff84:
    // 0x36ff84: 0xa1e82  srl         $v1, $t2, 26
    ctx->pc = 0x36ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
label_36ff88:
    // 0x36ff88: 0xa1180  sll         $v0, $t2, 6
    ctx->pc = 0x36ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_36ff8c:
    // 0x36ff8c: 0x16a5823  subu        $t3, $t3, $t2
    ctx->pc = 0x36ff8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_36ff90:
    // 0x36ff90: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x36ff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_36ff94:
    // 0x36ff94: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x36ff94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_36ff98:
    // 0x36ff98: 0x1625826  xor         $t3, $t3, $v0
    ctx->pc = 0x36ff98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 2));
label_36ff9c:
    // 0x36ff9c: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x36ff9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_36ffa0:
    // 0x36ffa0: 0xb1602  srl         $v0, $t3, 24
    ctx->pc = 0x36ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 24));
label_36ffa4:
    // 0x36ffa4: 0xb1a00  sll         $v1, $t3, 8
    ctx->pc = 0x36ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_36ffa8:
    // 0x36ffa8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x36ffa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_36ffac:
    // 0x36ffac: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x36ffacu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_36ffb0:
    // 0x36ffb0: 0x1836026  xor         $t4, $t4, $v1
    ctx->pc = 0x36ffb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 3));
label_36ffb4:
    // 0x36ffb4: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x36ffb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_36ffb8:
    // 0x36ffb8: 0xc1402  srl         $v0, $t4, 16
    ctx->pc = 0x36ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
label_36ffbc:
    // 0x36ffbc: 0xc1c00  sll         $v1, $t4, 16
    ctx->pc = 0x36ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_36ffc0:
    // 0x36ffc0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x36ffc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_36ffc4:
    // 0x36ffc4: 0x14c5023  subu        $t2, $t2, $t4
    ctx->pc = 0x36ffc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_36ffc8:
    // 0x36ffc8: 0x1435026  xor         $t2, $t2, $v1
    ctx->pc = 0x36ffc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
label_36ffcc:
    // 0x36ffcc: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x36ffccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_36ffd0:
    // 0x36ffd0: 0xa1342  srl         $v0, $t2, 13
    ctx->pc = 0x36ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 13));
label_36ffd4:
    // 0x36ffd4: 0xa1cc0  sll         $v1, $t2, 19
    ctx->pc = 0x36ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 19));
label_36ffd8:
    // 0x36ffd8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x36ffd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_36ffdc:
    // 0x36ffdc: 0x16a5823  subu        $t3, $t3, $t2
    ctx->pc = 0x36ffdcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_36ffe0:
    // 0x36ffe0: 0x1635826  xor         $t3, $t3, $v1
    ctx->pc = 0x36ffe0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 3));
label_36ffe4:
    // 0x36ffe4: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x36ffe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_36ffe8:
    // 0x36ffe8: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x36ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_36ffec:
    // 0x36ffec: 0xb1702  srl         $v0, $t3, 28
    ctx->pc = 0x36ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 28));
label_36fff0:
    // 0x36fff0: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x36fff0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_36fff4:
    // 0x36fff4: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x36fff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_36fff8:
    // 0x36fff8: 0x1836026  xor         $t4, $t4, $v1
    ctx->pc = 0x36fff8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 3));
label_36fffc:
    // 0x36fffc: 0x10e0ffca  beqz        $a3, . + 4 + (-0x36 << 2)
label_370000:
    if (ctx->pc == 0x370000u) {
        ctx->pc = 0x370000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FFFCu;
        // 0x370000: 0x16a5821  addu        $t3, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370004u;
        goto label_370004;
    }
    ctx->pc = 0x36FFFCu;
    {
        const bool branch_taken_0x36fffc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x370000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FFFCu;
        // 0x370000: 0x16a5821  addu        $t3, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fffc) {
            ctx->pc = 0x36FF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ff28;
        }
    }
    ctx->pc = 0x370004u;
label_370004:
    // 0x370004: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x370004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_370008:
    // 0x370008: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x370008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_37000c:
    // 0x37000c: 0x24427fe0  addiu       $v0, $v0, 0x7FE0
    ctx->pc = 0x37000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32736));
label_370010:
    // 0x370010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x370010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_370014:
    // 0x370014: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x370014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_370018:
    // 0x370018: 0x800008  jr          $a0
label_37001c:
    if (ctx->pc == 0x37001Cu) {
        ctx->pc = 0x370020u;
        goto label_370020;
    }
    ctx->pc = 0x370018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x370020u;
label_370020:
    // 0x370020: 0x95070002  lhu         $a3, 0x2($t0)
    ctx->pc = 0x370020u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_370024:
    // 0x370024: 0x9505000a  lhu         $a1, 0xA($t0)
    ctx->pc = 0x370024u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_370028:
    // 0x370028: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x370028u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_37002c:
    // 0x37002c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x37002cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_370030:
    // 0x370030: 0x95030008  lhu         $v1, 0x8($t0)
    ctx->pc = 0x370030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
label_370034:
    // 0x370034: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x370034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_370038:
    // 0x370038: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x370038u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_37003c:
    // 0x37003c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x37003cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_370040:
    // 0x370040: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x370040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_370044:
    // 0x370044: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x370044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_370048:
    // 0x370048: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x370048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_37004c:
    // 0x37004c: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x37004cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_370050:
    // 0x370050: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x370050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_370054:
    // 0x370054: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_370058:
    if (ctx->pc == 0x370058u) {
        ctx->pc = 0x370058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370054u;
        // 0x370058: 0x1645821  addu        $t3, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37005Cu;
        goto label_37005c;
    }
    ctx->pc = 0x370054u;
    {
        const bool branch_taken_0x370054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370054u;
        // 0x370058: 0x1645821  addu        $t3, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370054) {
            ctx->pc = 0x3702F8u;
            goto label_3702f8;
        }
    }
    ctx->pc = 0x37005Cu;
label_37005c:
    // 0x37005c: 0x9102000a  lbu         $v0, 0xA($t0)
    ctx->pc = 0x37005cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
label_370060:
    // 0x370060: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x370060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_370064:
    // 0x370064: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x370064u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_370068:
    // 0x370068: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x370068u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_37006c:
    // 0x37006c: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x37006cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_370070:
    // 0x370070: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x370070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_370074:
    // 0x370074: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x370074u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_370078:
    // 0x370078: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x370078u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_37007c:
    // 0x37007c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37007cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_370080:
    // 0x370080: 0x95060008  lhu         $a2, 0x8($t0)
    ctx->pc = 0x370080u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
label_370084:
    // 0x370084: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x370084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_370088:
    // 0x370088: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x370088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_37008c:
    // 0x37008c: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x37008cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_370090:
    // 0x370090: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x370090u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
label_370094:
    // 0x370094: 0x10000099  b           . + 4 + (0x99 << 2)
label_370098:
    if (ctx->pc == 0x370098u) {
        ctx->pc = 0x370098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370094u;
        // 0x370098: 0x1445021  addu        $t2, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37009Cu;
        goto label_37009c;
    }
    ctx->pc = 0x370094u;
    {
        const bool branch_taken_0x370094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370094u;
        // 0x370098: 0x1445021  addu        $t2, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370094) {
            ctx->pc = 0x3702FCu;
            goto label_3702fc;
        }
    }
    ctx->pc = 0x37009Cu;
label_37009c:
    // 0x37009c: 0x91020008  lbu         $v0, 0x8($t0)
    ctx->pc = 0x37009cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
label_3700a0:
    // 0x3700a0: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3700a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_3700a4:
    // 0x3700a4: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x3700a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_3700a8:
    // 0x3700a8: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x3700a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_3700ac:
    // 0x3700ac: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x3700acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_3700b0:
    // 0x3700b0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3700b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_3700b4:
    // 0x3700b4: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x3700b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_3700b8:
    // 0x3700b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3700b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3700bc:
    // 0x3700bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3700bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3700c0:
    // 0x3700c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3700c4:
    if (ctx->pc == 0x3700C4u) {
        ctx->pc = 0x3700C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3700C0u;
        // 0x3700c4: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3700C8u;
        goto label_3700c8;
    }
    ctx->pc = 0x3700C0u;
    {
        const bool branch_taken_0x3700c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3700C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3700C0u;
        // 0x3700c4: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3700c0) {
            ctx->pc = 0x3700E8u;
            goto label_3700e8;
        }
    }
    ctx->pc = 0x3700C8u;
label_3700c8:
    // 0x3700c8: 0x91020006  lbu         $v0, 0x6($t0)
    ctx->pc = 0x3700c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
label_3700cc:
    // 0x3700cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3700ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3700d0:
    // 0x3700d0: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x3700d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3700d4:
    // 0x3700d4: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x3700d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_3700d8:
    // 0x3700d8: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x3700d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_3700dc:
    // 0x3700dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3700dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3700e0:
    // 0x3700e0: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x3700e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_3700e4:
    // 0x3700e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3700e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3700e8:
    // 0x3700e8: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x3700e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_3700ec:
    // 0x3700ec: 0x10000083  b           . + 4 + (0x83 << 2)
label_3700f0:
    if (ctx->pc == 0x3700F0u) {
        ctx->pc = 0x3700F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3700ECu;
        // 0x3700f0: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3700F4u;
        goto label_3700f4;
    }
    ctx->pc = 0x3700ECu;
    {
        const bool branch_taken_0x3700ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3700F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3700ECu;
        // 0x3700f0: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3700ec) {
            ctx->pc = 0x3702FCu;
            goto label_3702fc;
        }
    }
    ctx->pc = 0x3700F4u;
label_3700f4:
    // 0x3700f4: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x3700f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_3700f8:
    // 0x3700f8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x3700f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3700fc:
    // 0x3700fc: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x3700fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_370100:
    // 0x370100: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x370100u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_370104:
    // 0x370104: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x370104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_370108:
    // 0x370108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x370108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37010c:
    // 0x37010c: 0x1000007b  b           . + 4 + (0x7B << 2)
label_370110:
    if (ctx->pc == 0x370110u) {
        ctx->pc = 0x370110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37010Cu;
        // 0x370110: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370114u;
        goto label_370114;
    }
    ctx->pc = 0x37010Cu;
    {
        const bool branch_taken_0x37010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37010Cu;
        // 0x370110: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37010c) {
            ctx->pc = 0x3702FCu;
            goto label_3702fc;
        }
    }
    ctx->pc = 0x370114u;
label_370114:
    // 0x370114: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x370114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_370118:
    // 0x370118: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x370118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_37011c:
    // 0x37011c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x37011cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_370120:
    // 0x370120: 0x10000075  b           . + 4 + (0x75 << 2)
label_370124:
    if (ctx->pc == 0x370124u) {
        ctx->pc = 0x370124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370120u;
        // 0x370124: 0x95020000  lhu         $v0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370128u;
        goto label_370128;
    }
    ctx->pc = 0x370120u;
    {
        const bool branch_taken_0x370120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370120u;
        // 0x370124: 0x95020000  lhu         $v0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370120) {
            ctx->pc = 0x3702F8u;
            goto label_3702f8;
        }
    }
    ctx->pc = 0x370128u;
label_370128:
    // 0x370128: 0x10000073  b           . + 4 + (0x73 << 2)
label_37012c:
    if (ctx->pc == 0x37012Cu) {
        ctx->pc = 0x37012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370128u;
        // 0x37012c: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370130u;
        goto label_370130;
    }
    ctx->pc = 0x370128u;
    {
        const bool branch_taken_0x370128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370128u;
        // 0x37012c: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370128) {
            ctx->pc = 0x3702F8u;
            goto label_3702f8;
        }
    }
    ctx->pc = 0x370130u;
label_370130:
    // 0x370130: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_370134:
    if (ctx->pc == 0x370134u) {
        ctx->pc = 0x370134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370130u;
        // 0x370134: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x370138u;
        goto label_370138;
    }
    ctx->pc = 0x370130u;
    {
        const bool branch_taken_0x370130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370130u;
        // 0x370134: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370130) {
            ctx->pc = 0x37025Cu;
            goto label_37025c;
        }
    }
    ctx->pc = 0x370138u;
label_370138:
    // 0x370138: 0x91a40008  lbu         $a0, 0x8($t5)
    ctx->pc = 0x370138u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 8)));
label_37013c:
    // 0x37013c: 0x25cefff4  addiu       $t6, $t6, -0xC
    ctx->pc = 0x37013cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967284));
label_370140:
    // 0x370140: 0x91a20009  lbu         $v0, 0x9($t5)
    ctx->pc = 0x370140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 9)));
label_370144:
    // 0x370144: 0x2dc9000d  sltiu       $t1, $t6, 0xD
    ctx->pc = 0x370144u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_370148:
    // 0x370148: 0x91a70000  lbu         $a3, 0x0($t5)
    ctx->pc = 0x370148u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_37014c:
    // 0x37014c: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x37014cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_370150:
    // 0x370150: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x370150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_370154:
    // 0x370154: 0x91a5000a  lbu         $a1, 0xA($t5)
    ctx->pc = 0x370154u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10)));
label_370158:
    // 0x370158: 0x91a30001  lbu         $v1, 0x1($t5)
    ctx->pc = 0x370158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
label_37015c:
    // 0x37015c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x37015cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_370160:
    // 0x370160: 0x91a4000b  lbu         $a0, 0xB($t5)
    ctx->pc = 0x370160u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 11)));
label_370164:
    // 0x370164: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x370164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_370168:
    // 0x370168: 0x91a60002  lbu         $a2, 0x2($t5)
    ctx->pc = 0x370168u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
label_37016c:
    // 0x37016c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37016cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_370170:
    // 0x370170: 0x91a80004  lbu         $t0, 0x4($t5)
    ctx->pc = 0x370170u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4)));
label_370174:
    // 0x370174: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x370174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_370178:
    // 0x370178: 0x91a20005  lbu         $v0, 0x5($t5)
    ctx->pc = 0x370178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 5)));
label_37017c:
    // 0x37017c: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x37017cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_370180:
    // 0x370180: 0x91a70003  lbu         $a3, 0x3($t5)
    ctx->pc = 0x370180u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
label_370184:
    // 0x370184: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x370184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_370188:
    // 0x370188: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x370188u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_37018c:
    // 0x37018c: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x37018cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_370190:
    // 0x370190: 0x91a50006  lbu         $a1, 0x6($t5)
    ctx->pc = 0x370190u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 6)));
label_370194:
    // 0x370194: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x370194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_370198:
    // 0x370198: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x370198u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_37019c:
    // 0x37019c: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x37019cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_3701a0:
    // 0x3701a0: 0x91a40007  lbu         $a0, 0x7($t5)
    ctx->pc = 0x3701a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 7)));
label_3701a4:
    // 0x3701a4: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x3701a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3701a8:
    // 0x3701a8: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x3701a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_3701ac:
    // 0x3701ac: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x3701acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_3701b0:
    // 0x3701b0: 0xc1702  srl         $v0, $t4, 28
    ctx->pc = 0x3701b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 28));
label_3701b4:
    // 0x3701b4: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x3701b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_3701b8:
    // 0x3701b8: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x3701b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_3701bc:
    // 0x3701bc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3701bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_3701c0:
    // 0x3701c0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x3701c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_3701c4:
    // 0x3701c4: 0x14c5023  subu        $t2, $t2, $t4
    ctx->pc = 0x3701c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_3701c8:
    // 0x3701c8: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x3701c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
label_3701cc:
    // 0x3701cc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3701ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_3701d0:
    // 0x3701d0: 0x1435026  xor         $t2, $t2, $v1
    ctx->pc = 0x3701d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
label_3701d4:
    // 0x3701d4: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x3701d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_3701d8:
    // 0x3701d8: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x3701d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_3701dc:
    // 0x3701dc: 0xa1e82  srl         $v1, $t2, 26
    ctx->pc = 0x3701dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
label_3701e0:
    // 0x3701e0: 0xa1180  sll         $v0, $t2, 6
    ctx->pc = 0x3701e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_3701e4:
    // 0x3701e4: 0x16a5823  subu        $t3, $t3, $t2
    ctx->pc = 0x3701e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_3701e8:
    // 0x3701e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3701e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_3701ec:
    // 0x3701ec: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x3701ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_3701f0:
    // 0x3701f0: 0x1625826  xor         $t3, $t3, $v0
    ctx->pc = 0x3701f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 2));
label_3701f4:
    // 0x3701f4: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x3701f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
label_3701f8:
    // 0x3701f8: 0xb1602  srl         $v0, $t3, 24
    ctx->pc = 0x3701f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 24));
label_3701fc:
    // 0x3701fc: 0xb1a00  sll         $v1, $t3, 8
    ctx->pc = 0x3701fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_370200:
    // 0x370200: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x370200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_370204:
    // 0x370204: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x370204u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_370208:
    // 0x370208: 0x1836026  xor         $t4, $t4, $v1
    ctx->pc = 0x370208u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 3));
label_37020c:
    // 0x37020c: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x37020cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_370210:
    // 0x370210: 0xc1402  srl         $v0, $t4, 16
    ctx->pc = 0x370210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
label_370214:
    // 0x370214: 0xc1c00  sll         $v1, $t4, 16
    ctx->pc = 0x370214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_370218:
    // 0x370218: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x370218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_37021c:
    // 0x37021c: 0x14c5023  subu        $t2, $t2, $t4
    ctx->pc = 0x37021cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_370220:
    // 0x370220: 0x1435026  xor         $t2, $t2, $v1
    ctx->pc = 0x370220u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
label_370224:
    // 0x370224: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x370224u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_370228:
    // 0x370228: 0xa1342  srl         $v0, $t2, 13
    ctx->pc = 0x370228u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 13));
label_37022c:
    // 0x37022c: 0xa1cc0  sll         $v1, $t2, 19
    ctx->pc = 0x37022cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 19));
label_370230:
    // 0x370230: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x370230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_370234:
    // 0x370234: 0x16a5823  subu        $t3, $t3, $t2
    ctx->pc = 0x370234u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_370238:
    // 0x370238: 0x1635826  xor         $t3, $t3, $v1
    ctx->pc = 0x370238u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 3));
label_37023c:
    // 0x37023c: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x37023cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_370240:
    // 0x370240: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x370240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_370244:
    // 0x370244: 0xb1702  srl         $v0, $t3, 28
    ctx->pc = 0x370244u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 28));
label_370248:
    // 0x370248: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x370248u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_37024c:
    // 0x37024c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x37024cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_370250:
    // 0x370250: 0x1836026  xor         $t4, $t4, $v1
    ctx->pc = 0x370250u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 3));
label_370254:
    // 0x370254: 0x1120ffb8  beqz        $t1, . + 4 + (-0x48 << 2)
label_370258:
    if (ctx->pc == 0x370258u) {
        ctx->pc = 0x370258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370254u;
        // 0x370258: 0x16a5821  addu        $t3, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37025Cu;
        goto label_37025c;
    }
    ctx->pc = 0x370254u;
    {
        const bool branch_taken_0x370254 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x370258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370254u;
        // 0x370258: 0x16a5821  addu        $t3, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370254) {
            ctx->pc = 0x370138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370138;
        }
    }
    ctx->pc = 0x37025Cu;
label_37025c:
    // 0x37025c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37025cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_370260:
    // 0x370260: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x370260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_370264:
    // 0x370264: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x370264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
label_370268:
    // 0x370268: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x370268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37026c:
    // 0x37026c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x37026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_370270:
    // 0x370270: 0x800008  jr          $a0
label_370274:
    if (ctx->pc == 0x370274u) {
        ctx->pc = 0x370278u;
        goto label_370278;
    }
    ctx->pc = 0x370270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370270u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x370278u;
label_370278:
    // 0x370278: 0x91a2000b  lbu         $v0, 0xB($t5)
    ctx->pc = 0x370278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 11)));
label_37027c:
    // 0x37027c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x37027cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_370280:
    // 0x370280: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x370280u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_370284:
    // 0x370284: 0x91a2000a  lbu         $v0, 0xA($t5)
    ctx->pc = 0x370284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10)));
label_370288:
    // 0x370288: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x370288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_37028c:
    // 0x37028c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x37028cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_370290:
    // 0x370290: 0x91a20009  lbu         $v0, 0x9($t5)
    ctx->pc = 0x370290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 9)));
label_370294:
    // 0x370294: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x370294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_370298:
    // 0x370298: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x370298u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_37029c:
    // 0x37029c: 0x91a20008  lbu         $v0, 0x8($t5)
    ctx->pc = 0x37029cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 8)));
label_3702a0:
    // 0x3702a0: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3702a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_3702a4:
    // 0x3702a4: 0x91a20007  lbu         $v0, 0x7($t5)
    ctx->pc = 0x3702a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 7)));
label_3702a8:
    // 0x3702a8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3702a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3702ac:
    // 0x3702ac: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x3702acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3702b0:
    // 0x3702b0: 0x91a20006  lbu         $v0, 0x6($t5)
    ctx->pc = 0x3702b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 6)));
label_3702b4:
    // 0x3702b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3702b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3702b8:
    // 0x3702b8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x3702b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3702bc:
    // 0x3702bc: 0x91a20005  lbu         $v0, 0x5($t5)
    ctx->pc = 0x3702bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 5)));
label_3702c0:
    // 0x3702c0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3702c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3702c4:
    // 0x3702c4: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x3702c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3702c8:
    // 0x3702c8: 0x91a20004  lbu         $v0, 0x4($t5)
    ctx->pc = 0x3702c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4)));
label_3702cc:
    // 0x3702cc: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x3702ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3702d0:
    // 0x3702d0: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x3702d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
label_3702d4:
    // 0x3702d4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3702d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3702d8:
    // 0x3702d8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3702d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3702dc:
    // 0x3702dc: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x3702dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
label_3702e0:
    // 0x3702e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3702e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3702e4:
    // 0x3702e4: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3702e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3702e8:
    // 0x3702e8: 0x91a20001  lbu         $v0, 0x1($t5)
    ctx->pc = 0x3702e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
label_3702ec:
    // 0x3702ec: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3702ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3702f0:
    // 0x3702f0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3702f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3702f4:
    // 0x3702f4: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3702f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_3702f8:
    // 0x3702f8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3702f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3702fc:
    // 0x3702fc: 0xb1c82  srl         $v1, $t3, 18
    ctx->pc = 0x3702fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 18));
label_370300:
    // 0x370300: 0xb1380  sll         $v0, $t3, 14
    ctx->pc = 0x370300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 14));
label_370304:
    // 0x370304: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x370304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_370308:
    // 0x370308: 0x18b6026  xor         $t4, $t4, $t3
    ctx->pc = 0x370308u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
label_37030c:
    // 0x37030c: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x37030cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_370310:
    // 0x370310: 0xc1542  srl         $v0, $t4, 21
    ctx->pc = 0x370310u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 21));
label_370314:
    // 0x370314: 0xc1ac0  sll         $v1, $t4, 11
    ctx->pc = 0x370314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_370318:
    // 0x370318: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x370318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_37031c:
    // 0x37031c: 0x14c5026  xor         $t2, $t2, $t4
    ctx->pc = 0x37031cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 12));
label_370320:
    // 0x370320: 0x1435023  subu        $t2, $t2, $v1
    ctx->pc = 0x370320u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_370324:
    // 0x370324: 0xa19c2  srl         $v1, $t2, 7
    ctx->pc = 0x370324u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 7));
label_370328:
    // 0x370328: 0xa1640  sll         $v0, $t2, 25
    ctx->pc = 0x370328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 25));
label_37032c:
    // 0x37032c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x37032cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_370330:
    // 0x370330: 0x16a5826  xor         $t3, $t3, $t2
    ctx->pc = 0x370330u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
label_370334:
    // 0x370334: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x370334u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_370338:
    // 0x370338: 0xb1402  srl         $v0, $t3, 16
    ctx->pc = 0x370338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_37033c:
    // 0x37033c: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x37033cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_370340:
    // 0x370340: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x370340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_370344:
    // 0x370344: 0x18b6026  xor         $t4, $t4, $t3
    ctx->pc = 0x370344u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
label_370348:
    // 0x370348: 0x1836023  subu        $t4, $t4, $v1
    ctx->pc = 0x370348u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_37034c:
    // 0x37034c: 0xc1f02  srl         $v1, $t4, 28
    ctx->pc = 0x37034cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 28));
label_370350:
    // 0x370350: 0xc1100  sll         $v0, $t4, 4
    ctx->pc = 0x370350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_370354:
    // 0x370354: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x370354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_370358:
    // 0x370358: 0x14c5026  xor         $t2, $t2, $t4
    ctx->pc = 0x370358u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 12));
label_37035c:
    // 0x37035c: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x37035cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_370360:
    // 0x370360: 0xa1c82  srl         $v1, $t2, 18
    ctx->pc = 0x370360u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 18));
label_370364:
    // 0x370364: 0xa1380  sll         $v0, $t2, 14
    ctx->pc = 0x370364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 14));
label_370368:
    // 0x370368: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x370368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_37036c:
    // 0x37036c: 0x16a5826  xor         $t3, $t3, $t2
    ctx->pc = 0x37036cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
label_370370:
    // 0x370370: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x370370u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_370374:
    // 0x370374: 0xb1a02  srl         $v1, $t3, 8
    ctx->pc = 0x370374u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
label_370378:
    // 0x370378: 0xb1600  sll         $v0, $t3, 24
    ctx->pc = 0x370378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
label_37037c:
    // 0x37037c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x37037cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_370380:
    // 0x370380: 0x18b6026  xor         $t4, $t4, $t3
    ctx->pc = 0x370380u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
label_370384:
    // 0x370384: 0x3e00008  jr          $ra
label_370388:
    if (ctx->pc == 0x370388u) {
        ctx->pc = 0x370388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370384u;
        // 0x370388: 0x1821023  subu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37038Cu;
        goto label_37038c;
    }
    ctx->pc = 0x370384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370384u;
        // 0x370388: 0x1821023  subu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37038Cu;
label_37038c:
    // 0x37038c: 0x0  nop
    ctx->pc = 0x37038cu;
    // NOP
label_370390:
    // 0x370390: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x370390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_370394:
    // 0x370394: 0x0  nop
    ctx->pc = 0x370394u;
    // NOP
    ctx->pc = 0x370398u;
}
