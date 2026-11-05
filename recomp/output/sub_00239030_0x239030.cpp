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

// Function: sub_00239030
// Address: 0x239030 - 0x2393d8
void sub_00239030_0x239030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239030_0x239030");
#endif

    switch (ctx->pc) {
        case 0x239030u: goto label_239030;
        case 0x239034u: goto label_239034;
        case 0x239038u: goto label_239038;
        case 0x23903cu: goto label_23903c;
        case 0x239040u: goto label_239040;
        case 0x239044u: goto label_239044;
        case 0x239048u: goto label_239048;
        case 0x23904cu: goto label_23904c;
        case 0x239050u: goto label_239050;
        case 0x239054u: goto label_239054;
        case 0x239058u: goto label_239058;
        case 0x23905cu: goto label_23905c;
        case 0x239060u: goto label_239060;
        case 0x239064u: goto label_239064;
        case 0x239068u: goto label_239068;
        case 0x23906cu: goto label_23906c;
        case 0x239070u: goto label_239070;
        case 0x239074u: goto label_239074;
        case 0x239078u: goto label_239078;
        case 0x23907cu: goto label_23907c;
        case 0x239080u: goto label_239080;
        case 0x239084u: goto label_239084;
        case 0x239088u: goto label_239088;
        case 0x23908cu: goto label_23908c;
        case 0x239090u: goto label_239090;
        case 0x239094u: goto label_239094;
        case 0x239098u: goto label_239098;
        case 0x23909cu: goto label_23909c;
        case 0x2390a0u: goto label_2390a0;
        case 0x2390a4u: goto label_2390a4;
        case 0x2390a8u: goto label_2390a8;
        case 0x2390acu: goto label_2390ac;
        case 0x2390b0u: goto label_2390b0;
        case 0x2390b4u: goto label_2390b4;
        case 0x2390b8u: goto label_2390b8;
        case 0x2390bcu: goto label_2390bc;
        case 0x2390c0u: goto label_2390c0;
        case 0x2390c4u: goto label_2390c4;
        case 0x2390c8u: goto label_2390c8;
        case 0x2390ccu: goto label_2390cc;
        case 0x2390d0u: goto label_2390d0;
        case 0x2390d4u: goto label_2390d4;
        case 0x2390d8u: goto label_2390d8;
        case 0x2390dcu: goto label_2390dc;
        case 0x2390e0u: goto label_2390e0;
        case 0x2390e4u: goto label_2390e4;
        case 0x2390e8u: goto label_2390e8;
        case 0x2390ecu: goto label_2390ec;
        case 0x2390f0u: goto label_2390f0;
        case 0x2390f4u: goto label_2390f4;
        case 0x2390f8u: goto label_2390f8;
        case 0x2390fcu: goto label_2390fc;
        case 0x239100u: goto label_239100;
        case 0x239104u: goto label_239104;
        case 0x239108u: goto label_239108;
        case 0x23910cu: goto label_23910c;
        case 0x239110u: goto label_239110;
        case 0x239114u: goto label_239114;
        case 0x239118u: goto label_239118;
        case 0x23911cu: goto label_23911c;
        case 0x239120u: goto label_239120;
        case 0x239124u: goto label_239124;
        case 0x239128u: goto label_239128;
        case 0x23912cu: goto label_23912c;
        case 0x239130u: goto label_239130;
        case 0x239134u: goto label_239134;
        case 0x239138u: goto label_239138;
        case 0x23913cu: goto label_23913c;
        case 0x239140u: goto label_239140;
        case 0x239144u: goto label_239144;
        case 0x239148u: goto label_239148;
        case 0x23914cu: goto label_23914c;
        case 0x239150u: goto label_239150;
        case 0x239154u: goto label_239154;
        case 0x239158u: goto label_239158;
        case 0x23915cu: goto label_23915c;
        case 0x239160u: goto label_239160;
        case 0x239164u: goto label_239164;
        case 0x239168u: goto label_239168;
        case 0x23916cu: goto label_23916c;
        case 0x239170u: goto label_239170;
        case 0x239174u: goto label_239174;
        case 0x239178u: goto label_239178;
        case 0x23917cu: goto label_23917c;
        case 0x239180u: goto label_239180;
        case 0x239184u: goto label_239184;
        case 0x239188u: goto label_239188;
        case 0x23918cu: goto label_23918c;
        case 0x239190u: goto label_239190;
        case 0x239194u: goto label_239194;
        case 0x239198u: goto label_239198;
        case 0x23919cu: goto label_23919c;
        case 0x2391a0u: goto label_2391a0;
        case 0x2391a4u: goto label_2391a4;
        case 0x2391a8u: goto label_2391a8;
        case 0x2391acu: goto label_2391ac;
        case 0x2391b0u: goto label_2391b0;
        case 0x2391b4u: goto label_2391b4;
        case 0x2391b8u: goto label_2391b8;
        case 0x2391bcu: goto label_2391bc;
        case 0x2391c0u: goto label_2391c0;
        case 0x2391c4u: goto label_2391c4;
        case 0x2391c8u: goto label_2391c8;
        case 0x2391ccu: goto label_2391cc;
        case 0x2391d0u: goto label_2391d0;
        case 0x2391d4u: goto label_2391d4;
        case 0x2391d8u: goto label_2391d8;
        case 0x2391dcu: goto label_2391dc;
        case 0x2391e0u: goto label_2391e0;
        case 0x2391e4u: goto label_2391e4;
        case 0x2391e8u: goto label_2391e8;
        case 0x2391ecu: goto label_2391ec;
        case 0x2391f0u: goto label_2391f0;
        case 0x2391f4u: goto label_2391f4;
        case 0x2391f8u: goto label_2391f8;
        case 0x2391fcu: goto label_2391fc;
        case 0x239200u: goto label_239200;
        case 0x239204u: goto label_239204;
        case 0x239208u: goto label_239208;
        case 0x23920cu: goto label_23920c;
        case 0x239210u: goto label_239210;
        case 0x239214u: goto label_239214;
        case 0x239218u: goto label_239218;
        case 0x23921cu: goto label_23921c;
        case 0x239220u: goto label_239220;
        case 0x239224u: goto label_239224;
        case 0x239228u: goto label_239228;
        case 0x23922cu: goto label_23922c;
        case 0x239230u: goto label_239230;
        case 0x239234u: goto label_239234;
        case 0x239238u: goto label_239238;
        case 0x23923cu: goto label_23923c;
        case 0x239240u: goto label_239240;
        case 0x239244u: goto label_239244;
        case 0x239248u: goto label_239248;
        case 0x23924cu: goto label_23924c;
        case 0x239250u: goto label_239250;
        case 0x239254u: goto label_239254;
        case 0x239258u: goto label_239258;
        case 0x23925cu: goto label_23925c;
        case 0x239260u: goto label_239260;
        case 0x239264u: goto label_239264;
        case 0x239268u: goto label_239268;
        case 0x23926cu: goto label_23926c;
        case 0x239270u: goto label_239270;
        case 0x239274u: goto label_239274;
        case 0x239278u: goto label_239278;
        case 0x23927cu: goto label_23927c;
        case 0x239280u: goto label_239280;
        case 0x239284u: goto label_239284;
        case 0x239288u: goto label_239288;
        case 0x23928cu: goto label_23928c;
        case 0x239290u: goto label_239290;
        case 0x239294u: goto label_239294;
        case 0x239298u: goto label_239298;
        case 0x23929cu: goto label_23929c;
        case 0x2392a0u: goto label_2392a0;
        case 0x2392a4u: goto label_2392a4;
        case 0x2392a8u: goto label_2392a8;
        case 0x2392acu: goto label_2392ac;
        case 0x2392b0u: goto label_2392b0;
        case 0x2392b4u: goto label_2392b4;
        case 0x2392b8u: goto label_2392b8;
        case 0x2392bcu: goto label_2392bc;
        case 0x2392c0u: goto label_2392c0;
        case 0x2392c4u: goto label_2392c4;
        case 0x2392c8u: goto label_2392c8;
        case 0x2392ccu: goto label_2392cc;
        case 0x2392d0u: goto label_2392d0;
        case 0x2392d4u: goto label_2392d4;
        case 0x2392d8u: goto label_2392d8;
        case 0x2392dcu: goto label_2392dc;
        case 0x2392e0u: goto label_2392e0;
        case 0x2392e4u: goto label_2392e4;
        case 0x2392e8u: goto label_2392e8;
        case 0x2392ecu: goto label_2392ec;
        case 0x2392f0u: goto label_2392f0;
        case 0x2392f4u: goto label_2392f4;
        case 0x2392f8u: goto label_2392f8;
        case 0x2392fcu: goto label_2392fc;
        case 0x239300u: goto label_239300;
        case 0x239304u: goto label_239304;
        case 0x239308u: goto label_239308;
        case 0x23930cu: goto label_23930c;
        case 0x239310u: goto label_239310;
        case 0x239314u: goto label_239314;
        case 0x239318u: goto label_239318;
        case 0x23931cu: goto label_23931c;
        case 0x239320u: goto label_239320;
        case 0x239324u: goto label_239324;
        case 0x239328u: goto label_239328;
        case 0x23932cu: goto label_23932c;
        case 0x239330u: goto label_239330;
        case 0x239334u: goto label_239334;
        case 0x239338u: goto label_239338;
        case 0x23933cu: goto label_23933c;
        case 0x239340u: goto label_239340;
        case 0x239344u: goto label_239344;
        case 0x239348u: goto label_239348;
        case 0x23934cu: goto label_23934c;
        case 0x239350u: goto label_239350;
        case 0x239354u: goto label_239354;
        case 0x239358u: goto label_239358;
        case 0x23935cu: goto label_23935c;
        case 0x239360u: goto label_239360;
        case 0x239364u: goto label_239364;
        case 0x239368u: goto label_239368;
        case 0x23936cu: goto label_23936c;
        case 0x239370u: goto label_239370;
        case 0x239374u: goto label_239374;
        case 0x239378u: goto label_239378;
        case 0x23937cu: goto label_23937c;
        case 0x239380u: goto label_239380;
        case 0x239384u: goto label_239384;
        case 0x239388u: goto label_239388;
        case 0x23938cu: goto label_23938c;
        case 0x239390u: goto label_239390;
        case 0x239394u: goto label_239394;
        case 0x239398u: goto label_239398;
        case 0x23939cu: goto label_23939c;
        case 0x2393a0u: goto label_2393a0;
        case 0x2393a4u: goto label_2393a4;
        case 0x2393a8u: goto label_2393a8;
        case 0x2393acu: goto label_2393ac;
        case 0x2393b0u: goto label_2393b0;
        case 0x2393b4u: goto label_2393b4;
        case 0x2393b8u: goto label_2393b8;
        case 0x2393bcu: goto label_2393bc;
        case 0x2393c0u: goto label_2393c0;
        case 0x2393c4u: goto label_2393c4;
        case 0x2393c8u: goto label_2393c8;
        case 0x2393ccu: goto label_2393cc;
        case 0x2393d0u: goto label_2393d0;
        case 0x2393d4u: goto label_2393d4;
        default: break;
    }

    ctx->pc = 0x239030u;

label_239030:
    // 0x239030: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x239030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_239034:
    // 0x239034: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x239034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
label_239038:
    // 0x239038: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x239038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
label_23903c:
    // 0x23903c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23903cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239040:
    // 0x239040: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x239040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
label_239044:
    // 0x239044: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x239044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
label_239048:
    // 0x239048: 0x8e23036c  lw          $v1, 0x36C($s1)
    ctx->pc = 0x239048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23904c:
    // 0x23904c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x23904cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_239050:
    // 0x239050: 0x144000d1  bnez        $v0, . + 4 + (0xD1 << 2)
label_239054:
    if (ctx->pc == 0x239054u) {
        ctx->pc = 0x239054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239050u;
        // 0x239054: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239058u;
        goto label_239058;
    }
    ctx->pc = 0x239050u;
    {
        const bool branch_taken_0x239050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239050u;
        // 0x239054: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239050) {
            ctx->pc = 0x239398u;
            goto label_239398;
        }
    }
    ctx->pc = 0x239058u;
label_239058:
    // 0x239058: 0xc08e3b2  jal         func_238EC8
label_23905c:
    if (ctx->pc == 0x23905Cu) {
        ctx->pc = 0x23905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239058u;
        // 0x23905c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239060u;
        goto label_239060;
    }
    ctx->pc = 0x239058u;
    SET_GPR_U32(ctx, 31, 0x239060u);
    ctx->pc = 0x23905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239058u;
    // 0x23905c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x239058u, 0x239060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239060u;
label_239060:
    // 0x239060: 0x8e22048c  lw          $v0, 0x48C($s1)
    ctx->pc = 0x239060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
label_239064:
    // 0x239064: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_239068:
    if (ctx->pc == 0x239068u) {
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23906Cu;
        goto label_23906c;
    }
    ctx->pc = 0x239064u;
    {
        const bool branch_taken_0x239064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239064) {
            ctx->pc = 0x239068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239064u;
            // 0x239068: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2390A0u;
            goto label_2390a0;
        }
    }
    ctx->pc = 0x23906Cu;
label_23906c:
    // 0x23906c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23906cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_239070:
    // 0x239070: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x239070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_239074:
    // 0x239074: 0xc0b2af0  jal         func_2CABC0
label_239078:
    if (ctx->pc == 0x239078u) {
        ctx->pc = 0x239078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239074u;
        // 0x239078: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23907Cu;
        goto label_23907c;
    }
    ctx->pc = 0x239074u;
    SET_GPR_U32(ctx, 31, 0x23907Cu);
    ctx->pc = 0x239078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239074u;
    // 0x239078: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x239074u, 0x23907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23907Cu;
label_23907c:
    // 0x23907c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23907cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239080:
    // 0x239080: 0xc0b1488  jal         func_2C5220
label_239084:
    if (ctx->pc == 0x239084u) {
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239080u;
        // 0x239084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239088u;
        goto label_239088;
    }
    ctx->pc = 0x239080u;
    SET_GPR_U32(ctx, 31, 0x239088u);
    ctx->pc = 0x239084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239080u;
    // 0x239084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x239080u, 0x239088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239088u;
label_239088:
    // 0x239088: 0xc0b1488  jal         func_2C5220
label_23908c:
    if (ctx->pc == 0x23908Cu) {
        ctx->pc = 0x23908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239088u;
        // 0x23908c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239090u;
        goto label_239090;
    }
    ctx->pc = 0x239088u;
    SET_GPR_U32(ctx, 31, 0x239090u);
    ctx->pc = 0x23908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239088u;
    // 0x23908c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x239088u, 0x239090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239090u;
label_239090:
    // 0x239090: 0xae30048c  sw          $s0, 0x48C($s1)
    ctx->pc = 0x239090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1164), GPR_U32(ctx, 16));
label_239094:
    // 0x239094: 0xc0b1488  jal         func_2C5220
label_239098:
    if (ctx->pc == 0x239098u) {
        ctx->pc = 0x239098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239094u;
        // 0x239098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23909Cu;
        goto label_23909c;
    }
    ctx->pc = 0x239094u;
    SET_GPR_U32(ctx, 31, 0x23909Cu);
    ctx->pc = 0x239098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239094u;
    // 0x239098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x239094u, 0x23909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23909Cu;
label_23909c:
    // 0x23909c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2390a0:
    // 0x2390a0: 0x8e25048c  lw          $a1, 0x48C($s1)
    ctx->pc = 0x2390a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
label_2390a4:
    // 0x2390a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2390a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2390a8:
    // 0x2390a8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2390a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2390ac:
    // 0x2390ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2390acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2390b0:
    // 0x2390b0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2390b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2390b4:
    // 0x2390b4: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2390b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2390b8:
    // 0x2390b8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2390b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2390bc:
    // 0x2390bc: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x2390bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2390c0:
    // 0x2390c0: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2390c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2390c4:
    // 0x2390c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2390c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2390c8:
    // 0x2390c8: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x2390c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2390cc:
    // 0x2390cc: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2390ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2390d0:
    // 0x2390d0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2390d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2390d4:
    // 0x2390d4: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x2390d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2390d8:
    // 0x2390d8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2390d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2390dc:
    // 0x2390dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2390dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2390e0:
    // 0x2390e0: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x2390e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2390e4:
    // 0x2390e4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2390e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2390e8:
    // 0x2390e8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2390e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2390ec:
    // 0x2390ec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2390ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2390f0:
    // 0x2390f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2390f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2390f4:
    // 0x2390f4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2390f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2390f8:
    // 0x2390f8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2390f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2390fc:
    // 0x2390fc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2390fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_239100:
    // 0x239100: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_239104:
    if (ctx->pc == 0x239104u) {
        ctx->pc = 0x239104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239100u;
        // 0x239104: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x239108u;
        goto label_239108;
    }
    ctx->pc = 0x239100u;
    {
        const bool branch_taken_0x239100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239100u;
        // 0x239104: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x239100) {
            ctx->pc = 0x239110u;
            goto label_239110;
        }
    }
    ctx->pc = 0x239108u;
label_239108:
    // 0x239108: 0xae2004b4  sw          $zero, 0x4B4($s1)
    ctx->pc = 0x239108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1204), GPR_U32(ctx, 0));
label_23910c:
    // 0x23910c: 0xae2004a8  sw          $zero, 0x4A8($s1)
    ctx->pc = 0x23910cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1192), GPR_U32(ctx, 0));
label_239110:
    // 0x239110: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x239110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_239114:
    // 0x239114: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x239114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_239118:
    // 0x239118: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23911c:
    if (ctx->pc == 0x23911Cu) {
        ctx->pc = 0x239120u;
        goto label_239120;
    }
    ctx->pc = 0x239118u;
    {
        const bool branch_taken_0x239118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239118) {
            ctx->pc = 0x239130u;
            goto label_239130;
        }
    }
    ctx->pc = 0x239120u;
label_239120:
    // 0x239120: 0xc076824  jal         func_1DA090
label_239124:
    if (ctx->pc == 0x239124u) {
        ctx->pc = 0x239128u;
        goto label_239128;
    }
    ctx->pc = 0x239120u;
    SET_GPR_U32(ctx, 31, 0x239128u);
    ctx->pc = 0x1DA090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA090u, 0x239120u, 0x239128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239128u;
label_239128:
    // 0x239128: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_23912c:
    if (ctx->pc == 0x23912Cu) {
        ctx->pc = 0x23912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239128u;
        // 0x23912c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239130u;
        goto label_239130;
    }
    ctx->pc = 0x239128u;
    {
        const bool branch_taken_0x239128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239128u;
        // 0x23912c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239128) {
            ctx->pc = 0x23915Cu;
            goto label_23915c;
        }
    }
    ctx->pc = 0x239130u;
label_239130:
    // 0x239130: 0x124000a3  beqz        $s2, . + 4 + (0xA3 << 2)
label_239134:
    if (ctx->pc == 0x239134u) {
        ctx->pc = 0x239134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239130u;
        // 0x239134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239138u;
        goto label_239138;
    }
    ctx->pc = 0x239130u;
    {
        const bool branch_taken_0x239130 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239130u;
        // 0x239134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239130) {
            ctx->pc = 0x2393C0u;
            goto label_2393c0;
        }
    }
    ctx->pc = 0x239138u;
label_239138:
    // 0x239138: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x239138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_23913c:
    // 0x23913c: 0xc08fed2  jal         func_23FB48
label_239140:
    if (ctx->pc == 0x239140u) {
        ctx->pc = 0x239140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23913Cu;
        // 0x239140: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239144u;
        goto label_239144;
    }
    ctx->pc = 0x23913Cu;
    SET_GPR_U32(ctx, 31, 0x239144u);
    ctx->pc = 0x239140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23913Cu;
    // 0x239140: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23913Cu, 0x239144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239144u;
label_239144:
    // 0x239144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239148:
    // 0x239148: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x239148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_23914c:
    // 0x23914c: 0xc08fed2  jal         func_23FB48
label_239150:
    if (ctx->pc == 0x239150u) {
        ctx->pc = 0x239150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23914Cu;
        // 0x239150: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239154u;
        goto label_239154;
    }
    ctx->pc = 0x23914Cu;
    SET_GPR_U32(ctx, 31, 0x239154u);
    ctx->pc = 0x239150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23914Cu;
    // 0x239150: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23914Cu, 0x239154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239154u;
label_239154:
    // 0x239154: 0x1000009b  b           . + 4 + (0x9B << 2)
label_239158:
    if (ctx->pc == 0x239158u) {
        ctx->pc = 0x239158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239154u;
        // 0x239158: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23915Cu;
        goto label_23915c;
    }
    ctx->pc = 0x239154u;
    {
        const bool branch_taken_0x239154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239154u;
        // 0x239158: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239154) {
            ctx->pc = 0x2393C4u;
            goto label_2393c4;
        }
    }
    ctx->pc = 0x23915Cu;
label_23915c:
    // 0x23915c: 0xc08a1f2  jal         func_2287C8
label_239160:
    if (ctx->pc == 0x239160u) {
        ctx->pc = 0x239160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23915Cu;
        // 0x239160: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239164u;
        goto label_239164;
    }
    ctx->pc = 0x23915Cu;
    SET_GPR_U32(ctx, 31, 0x239164u);
    ctx->pc = 0x239160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23915Cu;
    // 0x239160: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x23915Cu, 0x239164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239164u;
label_239164:
    // 0x239164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239168:
    // 0x239168: 0xc0f70ce  jal         func_3DC338
label_23916c:
    if (ctx->pc == 0x23916Cu) {
        ctx->pc = 0x23916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239168u;
        // 0x23916c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239170u;
        goto label_239170;
    }
    ctx->pc = 0x239168u;
    SET_GPR_U32(ctx, 31, 0x239170u);
    ctx->pc = 0x23916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239168u;
    // 0x23916c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x239168u, 0x239170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239170u;
label_239170:
    // 0x239170: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_239174:
    if (ctx->pc == 0x239174u) {
        ctx->pc = 0x239174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239170u;
        // 0x239174: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x239178u;
        goto label_239178;
    }
    ctx->pc = 0x239170u;
    {
        const bool branch_taken_0x239170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239170) {
            ctx->pc = 0x239174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239170u;
            // 0x239174: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x239184u;
            goto label_239184;
        }
    }
    ctx->pc = 0x239178u;
label_239178:
    // 0x239178: 0xc0c4900  jal         func_312400
label_23917c:
    if (ctx->pc == 0x23917Cu) {
        ctx->pc = 0x23917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239178u;
        // 0x23917c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239180u;
        goto label_239180;
    }
    ctx->pc = 0x239178u;
    SET_GPR_U32(ctx, 31, 0x239180u);
    ctx->pc = 0x23917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239178u;
    // 0x23917c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x239178u, 0x239180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239180u;
label_239180:
    // 0x239180: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x239180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_239184:
    // 0x239184: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x239184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_239188:
    // 0x239188: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x239188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23918c:
    // 0x23918c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x23918cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_239190:
    // 0x239190: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x239190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_239194:
    // 0x239194: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x239194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_239198:
    // 0x239198: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x239198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_23919c:
    // 0x23919c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23919cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2391a0:
    // 0x2391a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2391a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2391a4:
    // 0x2391a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2391a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2391a8:
    // 0x2391a8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2391a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2391ac:
    // 0x2391ac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2391acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2391b0:
    // 0x2391b0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2391b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2391b4:
    // 0x2391b4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2391b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2391b8:
    // 0x2391b8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2391b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2391bc:
    // 0x2391bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2391bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2391c0:
    // 0x2391c0: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2391c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2391c4:
    // 0x2391c4: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x2391c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2391c8:
    // 0x2391c8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2391c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2391cc:
    // 0x2391cc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2391ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2391d0:
    // 0x2391d0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2391d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_2391d4:
    // 0x2391d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2391d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2391d8:
    // 0x2391d8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2391d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2391dc:
    // 0x2391dc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2391dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_2391e0:
    // 0x2391e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2391e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2391e4:
    // 0x2391e4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2391e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2391e8:
    // 0x2391e8: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2391e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2391ec:
    // 0x2391ec: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2391ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2391f0:
    // 0x2391f0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2391f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2391f4:
    // 0x2391f4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2391f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2391f8:
    // 0x2391f8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2391f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2391fc:
    // 0x2391fc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2391fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_239200:
    // 0x239200: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x239200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_239204:
    // 0x239204: 0xc07a8b2  jal         func_1EA2C8
label_239208:
    if (ctx->pc == 0x239208u) {
        ctx->pc = 0x239208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239204u;
        // 0x239208: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23920Cu;
        goto label_23920c;
    }
    ctx->pc = 0x239204u;
    SET_GPR_U32(ctx, 31, 0x23920Cu);
    ctx->pc = 0x239208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239204u;
    // 0x239208: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x239204u, 0x23920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23920Cu;
label_23920c:
    // 0x23920c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x23920cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_239210:
    // 0x239210: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x239210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_239214:
    // 0x239214: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x239214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_239218:
    // 0x239218: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x239218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23921c:
    // 0x23921c: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x23921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_239220:
    // 0x239220: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x239220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_239224:
    // 0x239224: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x239224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_239228:
    // 0x239228: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x239228u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_23922c:
    // 0x23922c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x23922cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_239230:
    // 0x239230: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x239230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_239234:
    // 0x239234: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x239234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_239238:
    // 0x239238: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x239238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23923c:
    // 0x23923c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239240:
    // 0x239240: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x239240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_239244:
    // 0x239244: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x239244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_239248:
    // 0x239248: 0xc0f6a96  jal         func_3DAA58
label_23924c:
    if (ctx->pc == 0x23924Cu) {
        ctx->pc = 0x23924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239248u;
        // 0x23924c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x239250u;
        goto label_239250;
    }
    ctx->pc = 0x239248u;
    SET_GPR_U32(ctx, 31, 0x239250u);
    ctx->pc = 0x23924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239248u;
    // 0x23924c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x239248u, 0x239250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239250u;
label_239250:
    // 0x239250: 0xc0f6a96  jal         func_3DAA58
label_239254:
    if (ctx->pc == 0x239254u) {
        ctx->pc = 0x239254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239250u;
        // 0x239254: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239258u;
        goto label_239258;
    }
    ctx->pc = 0x239250u;
    SET_GPR_U32(ctx, 31, 0x239258u);
    ctx->pc = 0x239254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239250u;
    // 0x239254: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x239250u, 0x239258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239258u;
label_239258:
    // 0x239258: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x239258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23925c:
    // 0x23925c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x23925cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_239260:
    // 0x239260: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x239260u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239264:
    // 0x239264: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x239264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_239268:
    // 0x239268: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x239268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_23926c:
    // 0x23926c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x23926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_239270:
    // 0x239270: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x239270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_239274:
    // 0x239274: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x239274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_239278:
    // 0x239278: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x239278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23927c:
    // 0x23927c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23927cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_239280:
    // 0x239280: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x239280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_239284:
    // 0x239284: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x239284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_239288:
    // 0x239288: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x239288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23928c:
    // 0x23928c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x23928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_239290:
    // 0x239290: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x239290u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_239294:
    // 0x239294: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x239294u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_239298:
    // 0x239298: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x239298u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_23929c:
    // 0x23929c: 0x0  nop
    ctx->pc = 0x23929cu;
    // NOP
label_2392a0:
    // 0x2392a0: 0x0  nop
    ctx->pc = 0x2392a0u;
    // NOP
label_2392a4:
    // 0x2392a4: 0x46010084  c1          0x10084
    ctx->pc = 0x2392a4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2392a8:
    // 0x2392a8: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x2392a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2392ac:
    // 0x2392ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2392acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2392b0:
    // 0x2392b0: 0x0  nop
    ctx->pc = 0x2392b0u;
    // NOP
label_2392b4:
    // 0x2392b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2392b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2392b8:
    // 0x2392b8: 0x0  nop
    ctx->pc = 0x2392b8u;
    // NOP
label_2392bc:
    // 0x2392bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2392c0:
    if (ctx->pc == 0x2392C0u) {
        ctx->pc = 0x2392C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392BCu;
        // 0x2392c0: 0xe7a200e0  swc1        $f2, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392C4u;
        goto label_2392c4;
    }
    ctx->pc = 0x2392BCu;
    {
        const bool branch_taken_0x2392bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2392C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392BCu;
        // 0x2392c0: 0xe7a200e0  swc1        $f2, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392bc) {
            ctx->pc = 0x2392E8u;
            goto label_2392e8;
        }
    }
    ctx->pc = 0x2392C4u;
label_2392c4:
    // 0x2392c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2392c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2392c8:
    // 0x2392c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2392c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2392cc:
    // 0x2392cc: 0x0  nop
    ctx->pc = 0x2392ccu;
    // NOP
label_2392d0:
    // 0x2392d0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2392d0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2392d4:
    // 0x2392d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2392d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2392d8:
    // 0x2392d8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2392d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2392dc:
    // 0x2392dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2392dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2392e0:
    // 0x2392e0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2392e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2392e4:
    // 0x2392e4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2392e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2392e8:
    // 0x2392e8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2392ec:
    // 0x2392ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2392ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2392f0:
    // 0x2392f0: 0xc076e46  jal         func_1DB918
label_2392f4:
    if (ctx->pc == 0x2392F4u) {
        ctx->pc = 0x2392F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F0u;
        // 0x2392f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392F8u;
        goto label_2392f8;
    }
    ctx->pc = 0x2392F0u;
    SET_GPR_U32(ctx, 31, 0x2392F8u);
    ctx->pc = 0x2392F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392F0u;
    // 0x2392f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2392F0u, 0x2392F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392F8u;
label_2392f8:
    // 0x2392f8: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x2392f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
label_2392fc:
    // 0x2392fc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2392fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_239300:
    // 0x239300: 0xc07788a  jal         func_1DE228
label_239304:
    if (ctx->pc == 0x239304u) {
        ctx->pc = 0x239304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239300u;
        // 0x239304: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239308u;
        goto label_239308;
    }
    ctx->pc = 0x239300u;
    SET_GPR_U32(ctx, 31, 0x239308u);
    ctx->pc = 0x239304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239300u;
    // 0x239304: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x239300u, 0x239308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239308u;
label_239308:
    // 0x239308: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_23930c:
    if (ctx->pc == 0x23930Cu) {
        ctx->pc = 0x23930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239308u;
        // 0x23930c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239310u;
        goto label_239310;
    }
    ctx->pc = 0x239308u;
    {
        const bool branch_taken_0x239308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239308u;
        // 0x23930c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239308) {
            ctx->pc = 0x239388u;
            goto label_239388;
        }
    }
    ctx->pc = 0x239310u;
label_239310:
    // 0x239310: 0x8e25048c  lw          $a1, 0x48C($s1)
    ctx->pc = 0x239310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
label_239314:
    // 0x239314: 0xc0763f2  jal         func_1D8FC8
label_239318:
    if (ctx->pc == 0x239318u) {
        ctx->pc = 0x239318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239314u;
        // 0x239318: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23931Cu;
        goto label_23931c;
    }
    ctx->pc = 0x239314u;
    SET_GPR_U32(ctx, 31, 0x23931Cu);
    ctx->pc = 0x239318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239314u;
    // 0x239318: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x239314u, 0x23931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23931Cu;
label_23931c:
    // 0x23931c: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_239320:
    // 0x239320: 0x8e22048c  lw          $v0, 0x48C($s1)
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
label_239324:
    // 0x239324: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x239324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_239328:
    // 0x239328: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x239328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_23932c:
    // 0x23932c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x23932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_239330:
    // 0x239330: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x239330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_239334:
    // 0x239334: 0x40f809  jalr        $v0
label_239338:
    if (ctx->pc == 0x239338u) {
        ctx->pc = 0x23933Cu;
        goto label_23933c;
    }
    ctx->pc = 0x239334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23933Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239334u, 0x23933Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23933Cu;
label_23933c:
    // 0x23933c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239340:
    // 0x239340: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x239340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_239344:
    // 0x239344: 0xc08fed2  jal         func_23FB48
label_239348:
    if (ctx->pc == 0x239348u) {
        ctx->pc = 0x239348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239344u;
        // 0x239348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23934Cu;
        goto label_23934c;
    }
    ctx->pc = 0x239344u;
    SET_GPR_U32(ctx, 31, 0x23934Cu);
    ctx->pc = 0x239348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239344u;
    // 0x239348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x239344u, 0x23934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23934Cu;
label_23934c:
    // 0x23934c: 0x8e22048c  lw          $v0, 0x48C($s1)
    ctx->pc = 0x23934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
label_239350:
    // 0x239350: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_239354:
    // 0x239354: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x239354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_239358:
    // 0x239358: 0xfa210490  sqc2        $vf1, 0x490($s1)
    ctx->pc = 0x239358u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1168), _mm_castps_si128(ctx->vu0_vf[1]));
label_23935c:
    // 0x23935c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_239360:
    if (ctx->pc == 0x239360u) {
        ctx->pc = 0x239360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23935Cu;
        // 0x239360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239364u;
        goto label_239364;
    }
    ctx->pc = 0x23935Cu;
    {
        const bool branch_taken_0x23935c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23935Cu;
        // 0x239360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23935c) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x239364u;
label_239364:
    // 0x239364: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x239364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_239368:
    // 0x239368: 0xc08fed2  jal         func_23FB48
label_23936c:
    if (ctx->pc == 0x23936Cu) {
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239370u;
        goto label_239370;
    }
    ctx->pc = 0x239368u;
    SET_GPR_U32(ctx, 31, 0x239370u);
    ctx->pc = 0x23936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239368u;
    // 0x23936c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x239368u, 0x239370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239370u;
label_239370:
    // 0x239370: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x239370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_239374:
    // 0x239374: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x239374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_239378:
    // 0x239378: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x239378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_23937c:
    // 0x23937c: 0x40f809  jalr        $v0
label_239380:
    if (ctx->pc == 0x239380u) {
        ctx->pc = 0x239384u;
        goto label_239384;
    }
    ctx->pc = 0x23937Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239384u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23937Cu, 0x239384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239384u;
label_239384:
    // 0x239384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239388:
    // 0x239388: 0xc076e38  jal         func_1DB8E0
label_23938c:
    if (ctx->pc == 0x23938Cu) {
        ctx->pc = 0x23938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239388u;
        // 0x23938c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239390u;
        goto label_239390;
    }
    ctx->pc = 0x239388u;
    SET_GPR_U32(ctx, 31, 0x239390u);
    ctx->pc = 0x23938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239388u;
    // 0x23938c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x239388u, 0x239390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239390u;
label_239390:
    // 0x239390: 0x1000000c  b           . + 4 + (0xC << 2)
label_239394:
    if (ctx->pc == 0x239394u) {
        ctx->pc = 0x239394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239390u;
        // 0x239394: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239398u;
        goto label_239398;
    }
    ctx->pc = 0x239390u;
    {
        const bool branch_taken_0x239390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239390u;
        // 0x239394: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239390) {
            ctx->pc = 0x2393C4u;
            goto label_2393c4;
        }
    }
    ctx->pc = 0x239398u;
label_239398:
    // 0x239398: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_23939c:
    if (ctx->pc == 0x23939Cu) {
        ctx->pc = 0x23939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239398u;
        // 0x23939c: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393A0u;
        goto label_2393a0;
    }
    ctx->pc = 0x239398u;
    {
        const bool branch_taken_0x239398 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239398u;
        // 0x23939c: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239398) {
            ctx->pc = 0x2393C0u;
            goto label_2393c0;
        }
    }
    ctx->pc = 0x2393A0u;
label_2393a0:
    // 0x2393a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2393a4:
    if (ctx->pc == 0x2393A4u) {
        ctx->pc = 0x2393A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393A0u;
        // 0x2393a4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393A8u;
        goto label_2393a8;
    }
    ctx->pc = 0x2393A0u;
    {
        const bool branch_taken_0x2393a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2393A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393A0u;
        // 0x2393a4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393a0) {
            ctx->pc = 0x2393C4u;
            goto label_2393c4;
        }
    }
    ctx->pc = 0x2393A8u;
label_2393a8:
    // 0x2393a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2393a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2393ac:
    // 0x2393ac: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2393acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2393b0:
    // 0x2393b0: 0xc08fed2  jal         func_23FB48
label_2393b4:
    if (ctx->pc == 0x2393B4u) {
        ctx->pc = 0x2393B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393B0u;
        // 0x2393b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393B8u;
        goto label_2393b8;
    }
    ctx->pc = 0x2393B0u;
    SET_GPR_U32(ctx, 31, 0x2393B8u);
    ctx->pc = 0x2393B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2393B0u;
    // 0x2393b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2393B0u, 0x2393B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393B8u;
label_2393b8:
    // 0x2393b8: 0xae2004a8  sw          $zero, 0x4A8($s1)
    ctx->pc = 0x2393b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1192), GPR_U32(ctx, 0));
label_2393bc:
    // 0x2393bc: 0xae2004b4  sw          $zero, 0x4B4($s1)
    ctx->pc = 0x2393bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1204), GPR_U32(ctx, 0));
label_2393c0:
    // 0x2393c0: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2393c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2393c4:
    // 0x2393c4: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2393c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_2393c8:
    // 0x2393c8: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2393c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2393cc:
    // 0x2393cc: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x2393ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_2393d0:
    // 0x2393d0: 0x3e00008  jr          $ra
label_2393d4:
    if (ctx->pc == 0x2393D4u) {
        ctx->pc = 0x2393D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393D0u;
        // 0x2393d4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393D8u;
        goto label_fallthrough_0x2393d0;
    }
    ctx->pc = 0x2393D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2393D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393D0u;
        // 0x2393d4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2393D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2393d0:
    ctx->pc = 0x2393D8u;
}
