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

// Function: sub_002062D8
// Address: 0x2062d8 - 0x2065c8
void sub_002062D8_0x2062d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002062D8_0x2062d8");
#endif

    switch (ctx->pc) {
        case 0x2062d8u: goto label_2062d8;
        case 0x2062dcu: goto label_2062dc;
        case 0x2062e0u: goto label_2062e0;
        case 0x2062e4u: goto label_2062e4;
        case 0x2062e8u: goto label_2062e8;
        case 0x2062ecu: goto label_2062ec;
        case 0x2062f0u: goto label_2062f0;
        case 0x2062f4u: goto label_2062f4;
        case 0x2062f8u: goto label_2062f8;
        case 0x2062fcu: goto label_2062fc;
        case 0x206300u: goto label_206300;
        case 0x206304u: goto label_206304;
        case 0x206308u: goto label_206308;
        case 0x20630cu: goto label_20630c;
        case 0x206310u: goto label_206310;
        case 0x206314u: goto label_206314;
        case 0x206318u: goto label_206318;
        case 0x20631cu: goto label_20631c;
        case 0x206320u: goto label_206320;
        case 0x206324u: goto label_206324;
        case 0x206328u: goto label_206328;
        case 0x20632cu: goto label_20632c;
        case 0x206330u: goto label_206330;
        case 0x206334u: goto label_206334;
        case 0x206338u: goto label_206338;
        case 0x20633cu: goto label_20633c;
        case 0x206340u: goto label_206340;
        case 0x206344u: goto label_206344;
        case 0x206348u: goto label_206348;
        case 0x20634cu: goto label_20634c;
        case 0x206350u: goto label_206350;
        case 0x206354u: goto label_206354;
        case 0x206358u: goto label_206358;
        case 0x20635cu: goto label_20635c;
        case 0x206360u: goto label_206360;
        case 0x206364u: goto label_206364;
        case 0x206368u: goto label_206368;
        case 0x20636cu: goto label_20636c;
        case 0x206370u: goto label_206370;
        case 0x206374u: goto label_206374;
        case 0x206378u: goto label_206378;
        case 0x20637cu: goto label_20637c;
        case 0x206380u: goto label_206380;
        case 0x206384u: goto label_206384;
        case 0x206388u: goto label_206388;
        case 0x20638cu: goto label_20638c;
        case 0x206390u: goto label_206390;
        case 0x206394u: goto label_206394;
        case 0x206398u: goto label_206398;
        case 0x20639cu: goto label_20639c;
        case 0x2063a0u: goto label_2063a0;
        case 0x2063a4u: goto label_2063a4;
        case 0x2063a8u: goto label_2063a8;
        case 0x2063acu: goto label_2063ac;
        case 0x2063b0u: goto label_2063b0;
        case 0x2063b4u: goto label_2063b4;
        case 0x2063b8u: goto label_2063b8;
        case 0x2063bcu: goto label_2063bc;
        case 0x2063c0u: goto label_2063c0;
        case 0x2063c4u: goto label_2063c4;
        case 0x2063c8u: goto label_2063c8;
        case 0x2063ccu: goto label_2063cc;
        case 0x2063d0u: goto label_2063d0;
        case 0x2063d4u: goto label_2063d4;
        case 0x2063d8u: goto label_2063d8;
        case 0x2063dcu: goto label_2063dc;
        case 0x2063e0u: goto label_2063e0;
        case 0x2063e4u: goto label_2063e4;
        case 0x2063e8u: goto label_2063e8;
        case 0x2063ecu: goto label_2063ec;
        case 0x2063f0u: goto label_2063f0;
        case 0x2063f4u: goto label_2063f4;
        case 0x2063f8u: goto label_2063f8;
        case 0x2063fcu: goto label_2063fc;
        case 0x206400u: goto label_206400;
        case 0x206404u: goto label_206404;
        case 0x206408u: goto label_206408;
        case 0x20640cu: goto label_20640c;
        case 0x206410u: goto label_206410;
        case 0x206414u: goto label_206414;
        case 0x206418u: goto label_206418;
        case 0x20641cu: goto label_20641c;
        case 0x206420u: goto label_206420;
        case 0x206424u: goto label_206424;
        case 0x206428u: goto label_206428;
        case 0x20642cu: goto label_20642c;
        case 0x206430u: goto label_206430;
        case 0x206434u: goto label_206434;
        case 0x206438u: goto label_206438;
        case 0x20643cu: goto label_20643c;
        case 0x206440u: goto label_206440;
        case 0x206444u: goto label_206444;
        case 0x206448u: goto label_206448;
        case 0x20644cu: goto label_20644c;
        case 0x206450u: goto label_206450;
        case 0x206454u: goto label_206454;
        case 0x206458u: goto label_206458;
        case 0x20645cu: goto label_20645c;
        case 0x206460u: goto label_206460;
        case 0x206464u: goto label_206464;
        case 0x206468u: goto label_206468;
        case 0x20646cu: goto label_20646c;
        case 0x206470u: goto label_206470;
        case 0x206474u: goto label_206474;
        case 0x206478u: goto label_206478;
        case 0x20647cu: goto label_20647c;
        case 0x206480u: goto label_206480;
        case 0x206484u: goto label_206484;
        case 0x206488u: goto label_206488;
        case 0x20648cu: goto label_20648c;
        case 0x206490u: goto label_206490;
        case 0x206494u: goto label_206494;
        case 0x206498u: goto label_206498;
        case 0x20649cu: goto label_20649c;
        case 0x2064a0u: goto label_2064a0;
        case 0x2064a4u: goto label_2064a4;
        case 0x2064a8u: goto label_2064a8;
        case 0x2064acu: goto label_2064ac;
        case 0x2064b0u: goto label_2064b0;
        case 0x2064b4u: goto label_2064b4;
        case 0x2064b8u: goto label_2064b8;
        case 0x2064bcu: goto label_2064bc;
        case 0x2064c0u: goto label_2064c0;
        case 0x2064c4u: goto label_2064c4;
        case 0x2064c8u: goto label_2064c8;
        case 0x2064ccu: goto label_2064cc;
        case 0x2064d0u: goto label_2064d0;
        case 0x2064d4u: goto label_2064d4;
        case 0x2064d8u: goto label_2064d8;
        case 0x2064dcu: goto label_2064dc;
        case 0x2064e0u: goto label_2064e0;
        case 0x2064e4u: goto label_2064e4;
        case 0x2064e8u: goto label_2064e8;
        case 0x2064ecu: goto label_2064ec;
        case 0x2064f0u: goto label_2064f0;
        case 0x2064f4u: goto label_2064f4;
        case 0x2064f8u: goto label_2064f8;
        case 0x2064fcu: goto label_2064fc;
        case 0x206500u: goto label_206500;
        case 0x206504u: goto label_206504;
        case 0x206508u: goto label_206508;
        case 0x20650cu: goto label_20650c;
        case 0x206510u: goto label_206510;
        case 0x206514u: goto label_206514;
        case 0x206518u: goto label_206518;
        case 0x20651cu: goto label_20651c;
        case 0x206520u: goto label_206520;
        case 0x206524u: goto label_206524;
        case 0x206528u: goto label_206528;
        case 0x20652cu: goto label_20652c;
        case 0x206530u: goto label_206530;
        case 0x206534u: goto label_206534;
        case 0x206538u: goto label_206538;
        case 0x20653cu: goto label_20653c;
        case 0x206540u: goto label_206540;
        case 0x206544u: goto label_206544;
        case 0x206548u: goto label_206548;
        case 0x20654cu: goto label_20654c;
        case 0x206550u: goto label_206550;
        case 0x206554u: goto label_206554;
        case 0x206558u: goto label_206558;
        case 0x20655cu: goto label_20655c;
        case 0x206560u: goto label_206560;
        case 0x206564u: goto label_206564;
        case 0x206568u: goto label_206568;
        case 0x20656cu: goto label_20656c;
        case 0x206570u: goto label_206570;
        case 0x206574u: goto label_206574;
        case 0x206578u: goto label_206578;
        case 0x20657cu: goto label_20657c;
        case 0x206580u: goto label_206580;
        case 0x206584u: goto label_206584;
        case 0x206588u: goto label_206588;
        case 0x20658cu: goto label_20658c;
        case 0x206590u: goto label_206590;
        case 0x206594u: goto label_206594;
        case 0x206598u: goto label_206598;
        case 0x20659cu: goto label_20659c;
        case 0x2065a0u: goto label_2065a0;
        case 0x2065a4u: goto label_2065a4;
        case 0x2065a8u: goto label_2065a8;
        case 0x2065acu: goto label_2065ac;
        case 0x2065b0u: goto label_2065b0;
        case 0x2065b4u: goto label_2065b4;
        case 0x2065b8u: goto label_2065b8;
        case 0x2065bcu: goto label_2065bc;
        case 0x2065c0u: goto label_2065c0;
        case 0x2065c4u: goto label_2065c4;
        default: break;
    }

    ctx->pc = 0x2062d8u;

label_2062d8:
    // 0x2062d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2062d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2062dc:
    // 0x2062dc: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2062dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
label_2062e0:
    // 0x2062e0: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2062e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
label_2062e4:
    // 0x2062e4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2062e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2062e8:
    // 0x2062e8: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2062e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_2062ec:
    // 0x2062ec: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2062ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2062f0:
    // 0x2062f0: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2062f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_2062f4:
    // 0x2062f4: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2062f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_2062f8:
    // 0x2062f8: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2062f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_2062fc:
    // 0x2062fc: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2062fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_206300:
    // 0x206300: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x206300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_206304:
    // 0x206304: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x206304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
label_206308:
    // 0x206308: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x206308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
label_20630c:
    // 0x20630c: 0xc0819e8  jal         func_2067A0
label_206310:
    if (ctx->pc == 0x206310u) {
        ctx->pc = 0x206310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20630Cu;
        // 0x206310: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206314u;
        goto label_206314;
    }
    ctx->pc = 0x20630Cu;
    SET_GPR_U32(ctx, 31, 0x206314u);
    ctx->pc = 0x206310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20630Cu;
    // 0x206310: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2067A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067A0u, 0x20630Cu, 0x206314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206314u;
label_206314:
    // 0x206314: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x206314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_206318:
    // 0x206318: 0xc0d7424  jal         func_35D090
label_20631c:
    if (ctx->pc == 0x20631Cu) {
        ctx->pc = 0x20631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206318u;
        // 0x20631c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206320u;
        goto label_206320;
    }
    ctx->pc = 0x206318u;
    SET_GPR_U32(ctx, 31, 0x206320u);
    ctx->pc = 0x20631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206318u;
    // 0x20631c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x206318u, 0x206320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206320u;
label_206320:
    // 0x206320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x206320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_206324:
    // 0x206324: 0xc0d75d0  jal         func_35D740
label_206328:
    if (ctx->pc == 0x206328u) {
        ctx->pc = 0x206328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206324u;
        // 0x206328: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20632Cu;
        goto label_20632c;
    }
    ctx->pc = 0x206324u;
    SET_GPR_U32(ctx, 31, 0x20632Cu);
    ctx->pc = 0x206328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206324u;
    // 0x206328: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x206324u, 0x20632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20632Cu;
label_20632c:
    // 0x20632c: 0xc0d7596  jal         func_35D658
label_206330:
    if (ctx->pc == 0x206330u) {
        ctx->pc = 0x206330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20632Cu;
        // 0x206330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206334u;
        goto label_206334;
    }
    ctx->pc = 0x20632Cu;
    SET_GPR_U32(ctx, 31, 0x206334u);
    ctx->pc = 0x206330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20632Cu;
    // 0x206330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D658u, 0x20632Cu, 0x206334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206334u;
label_206334:
    // 0x206334: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x206334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_206338:
    // 0x206338: 0x24539b28  addiu       $s3, $v0, -0x64D8
    ctx->pc = 0x206338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941480));
label_20633c:
    // 0x20633c: 0xc08061e  jal         func_201878
label_206340:
    if (ctx->pc == 0x206340u) {
        ctx->pc = 0x206340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20633Cu;
        // 0x206340: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206344u;
        goto label_206344;
    }
    ctx->pc = 0x20633Cu;
    SET_GPR_U32(ctx, 31, 0x206344u);
    ctx->pc = 0x206340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20633Cu;
    // 0x206340: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201878u, 0x20633Cu, 0x206344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206344u;
label_206344:
    // 0x206344: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_206348:
    if (ctx->pc == 0x206348u) {
        ctx->pc = 0x206348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206344u;
        // 0x206348: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20634Cu;
        goto label_20634c;
    }
    ctx->pc = 0x206344u;
    {
        const bool branch_taken_0x206344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206344u;
        // 0x206348: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206344) {
            ctx->pc = 0x20642Cu;
            goto label_20642c;
        }
    }
    ctx->pc = 0x20634Cu;
label_20634c:
    // 0x20634c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x20634cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_206350:
    // 0x206350: 0x26310b60  addiu       $s1, $s1, 0xB60
    ctx->pc = 0x206350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2912));
label_206354:
    // 0x206354: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x206354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_206358:
    // 0x206358: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x206358u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20635c:
    // 0x20635c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20635cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206360:
    // 0x206360: 0xc0d74e8  jal         func_35D3A0
label_206364:
    if (ctx->pc == 0x206364u) {
        ctx->pc = 0x206364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206360u;
        // 0x206364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206368u;
        goto label_206368;
    }
    ctx->pc = 0x206360u;
    SET_GPR_U32(ctx, 31, 0x206368u);
    ctx->pc = 0x206364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206360u;
    // 0x206364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x206360u, 0x206368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206368u;
label_206368:
    // 0x206368: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x206368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_20636c:
    // 0x20636c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206370:
    // 0x206370: 0x24c60b70  addiu       $a2, $a2, 0xB70
    ctx->pc = 0x206370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2928));
label_206374:
    // 0x206374: 0xc0d74c6  jal         func_35D318
label_206378:
    if (ctx->pc == 0x206378u) {
        ctx->pc = 0x206378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206374u;
        // 0x206378: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20637Cu;
        goto label_20637c;
    }
    ctx->pc = 0x206374u;
    SET_GPR_U32(ctx, 31, 0x20637Cu);
    ctx->pc = 0x206378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206374u;
    // 0x206378: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x206374u, 0x20637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20637Cu;
label_20637c:
    // 0x20637c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20637cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206380:
    // 0x206380: 0xc0d7412  jal         func_35D048
label_206384:
    if (ctx->pc == 0x206384u) {
        ctx->pc = 0x206384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206380u;
        // 0x206384: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206388u;
        goto label_206388;
    }
    ctx->pc = 0x206380u;
    SET_GPR_U32(ctx, 31, 0x206388u);
    ctx->pc = 0x206384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206380u;
    // 0x206384: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x206380u, 0x206388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206388u;
label_206388:
    // 0x206388: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x206388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20638c:
    // 0x20638c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20638cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_206390:
    // 0x206390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206394:
    // 0x206394: 0xc0d74e8  jal         func_35D3A0
label_206398:
    if (ctx->pc == 0x206398u) {
        ctx->pc = 0x206398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206394u;
        // 0x206398: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20639Cu;
        goto label_20639c;
    }
    ctx->pc = 0x206394u;
    SET_GPR_U32(ctx, 31, 0x20639Cu);
    ctx->pc = 0x206398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206394u;
    // 0x206398: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x206394u, 0x20639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20639Cu;
label_20639c:
    // 0x20639c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x20639cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_2063a0:
    // 0x2063a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2063a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2063a4:
    // 0x2063a4: 0x24c60b80  addiu       $a2, $a2, 0xB80
    ctx->pc = 0x2063a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2944));
label_2063a8:
    // 0x2063a8: 0xc0d74c6  jal         func_35D318
label_2063ac:
    if (ctx->pc == 0x2063ACu) {
        ctx->pc = 0x2063ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063A8u;
        // 0x2063ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2063B0u;
        goto label_2063b0;
    }
    ctx->pc = 0x2063A8u;
    SET_GPR_U32(ctx, 31, 0x2063B0u);
    ctx->pc = 0x2063ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063A8u;
    // 0x2063ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2063A8u, 0x2063B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063B0u;
label_2063b0:
    // 0x2063b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2063b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2063b4:
    // 0x2063b4: 0xc0d7412  jal         func_35D048
label_2063b8:
    if (ctx->pc == 0x2063B8u) {
        ctx->pc = 0x2063B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063B4u;
        // 0x2063b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2063BCu;
        goto label_2063bc;
    }
    ctx->pc = 0x2063B4u;
    SET_GPR_U32(ctx, 31, 0x2063BCu);
    ctx->pc = 0x2063B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063B4u;
    // 0x2063b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2063B4u, 0x2063BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063BCu;
label_2063bc:
    // 0x2063bc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2063bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2063c0:
    // 0x2063c0: 0x26c60070  addiu       $a2, $s6, 0x70
    ctx->pc = 0x2063c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
label_2063c4:
    // 0x2063c4: 0xc0805f0  jal         func_2017C0
label_2063c8:
    if (ctx->pc == 0x2063C8u) {
        ctx->pc = 0x2063C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063C4u;
        // 0x2063c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2063CCu;
        goto label_2063cc;
    }
    ctx->pc = 0x2063C4u;
    SET_GPR_U32(ctx, 31, 0x2063CCu);
    ctx->pc = 0x2063C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063C4u;
    // 0x2063c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2017C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2017C0u, 0x2063C4u, 0x2063CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063CCu;
label_2063cc:
    // 0x2063cc: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2063ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2063d0:
    // 0x2063d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2063d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2063d4:
    // 0x2063d4: 0xc0805d6  jal         func_201758
label_2063d8:
    if (ctx->pc == 0x2063D8u) {
        ctx->pc = 0x2063D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063D4u;
        // 0x2063d8: 0xaec2006c  sw          $v0, 0x6C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2063DCu;
        goto label_2063dc;
    }
    ctx->pc = 0x2063D4u;
    SET_GPR_U32(ctx, 31, 0x2063DCu);
    ctx->pc = 0x2063D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063D4u;
    // 0x2063d8: 0xaec2006c  sw          $v0, 0x6C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201758u, 0x2063D4u, 0x2063DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063DCu;
label_2063dc:
    // 0x2063dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2063dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2063e0:
    // 0x2063e0: 0xc08061c  jal         func_201870
label_2063e4:
    if (ctx->pc == 0x2063E4u) {
        ctx->pc = 0x2063E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063E0u;
        // 0x2063e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2063E8u;
        goto label_2063e8;
    }
    ctx->pc = 0x2063E0u;
    SET_GPR_U32(ctx, 31, 0x2063E8u);
    ctx->pc = 0x2063E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063E0u;
    // 0x2063e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201870u, 0x2063E0u, 0x2063E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063E8u;
label_2063e8:
    // 0x2063e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2063e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2063ec:
    // 0x2063ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2063ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2063f0:
    // 0x2063f0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_2063f4:
    if (ctx->pc == 0x2063F4u) {
        ctx->pc = 0x2063F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063F0u;
        // 0x2063f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2063F8u;
        goto label_2063f8;
    }
    ctx->pc = 0x2063F0u;
    {
        const bool branch_taken_0x2063f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2063F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063F0u;
        // 0x2063f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063f0) {
            ctx->pc = 0x20640Cu;
            goto label_20640c;
        }
    }
    ctx->pc = 0x2063F8u;
label_2063f8:
    // 0x2063f8: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x2063f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2063fc:
    // 0x2063fc: 0xc0814ee  jal         func_2053B8
label_206400:
    if (ctx->pc == 0x206400u) {
        ctx->pc = 0x206400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063FCu;
        // 0x206400: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206404u;
        goto label_206404;
    }
    ctx->pc = 0x2063FCu;
    SET_GPR_U32(ctx, 31, 0x206404u);
    ctx->pc = 0x206400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063FCu;
    // 0x206400: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2053B8u, 0x2063FCu, 0x206404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206404u;
label_206404:
    // 0x206404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206408:
    // 0x206408: 0xa2c2000d  sb          $v0, 0xD($s6)
    ctx->pc = 0x206408u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 13), (uint8_t)GPR_U32(ctx, 2));
label_20640c:
    // 0x20640c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206410:
    // 0x206410: 0xc0d7412  jal         func_35D048
label_206414:
    if (ctx->pc == 0x206414u) {
        ctx->pc = 0x206414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206410u;
        // 0x206414: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206418u;
        goto label_206418;
    }
    ctx->pc = 0x206410u;
    SET_GPR_U32(ctx, 31, 0x206418u);
    ctx->pc = 0x206414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206410u;
    // 0x206414: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x206410u, 0x206418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206418u;
label_206418:
    // 0x206418: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20641c:
    // 0x20641c: 0xc0d7412  jal         func_35D048
label_206420:
    if (ctx->pc == 0x206420u) {
        ctx->pc = 0x206420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20641Cu;
        // 0x206420: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206424u;
        goto label_206424;
    }
    ctx->pc = 0x20641Cu;
    SET_GPR_U32(ctx, 31, 0x206424u);
    ctx->pc = 0x206420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20641Cu;
    // 0x206420: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20641Cu, 0x206424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206424u;
label_206424:
    // 0x206424: 0x1000004c  b           . + 4 + (0x4C << 2)
label_206428:
    if (ctx->pc == 0x206428u) {
        ctx->pc = 0x20642Cu;
        goto label_20642c;
    }
    ctx->pc = 0x206424u;
    {
        const bool branch_taken_0x206424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206424) {
            ctx->pc = 0x206558u;
            goto label_206558;
        }
    }
    ctx->pc = 0x20642Cu;
label_20642c:
    // 0x20642c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20642cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_206430:
    // 0x206430: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x206430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942272)));
label_206434:
    // 0x206434: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_206438:
    if (ctx->pc == 0x206438u) {
        ctx->pc = 0x206438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206434u;
        // 0x206438: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20643Cu;
        goto label_20643c;
    }
    ctx->pc = 0x206434u;
    {
        const bool branch_taken_0x206434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x206434) {
            ctx->pc = 0x206438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206434u;
            // 0x206438: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20644Cu;
            goto label_20644c;
        }
    }
    ctx->pc = 0x20643Cu;
label_20643c:
    // 0x20643c: 0xc0dbe86  jal         func_36FA18
label_206440:
    if (ctx->pc == 0x206440u) {
        ctx->pc = 0x206440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20643Cu;
        // 0x206440: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206444u;
        goto label_206444;
    }
    ctx->pc = 0x20643Cu;
    SET_GPR_U32(ctx, 31, 0x206444u);
    ctx->pc = 0x206440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20643Cu;
    // 0x206440: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x20643Cu, 0x206444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206444u;
label_206444:
    // 0x206444: 0x10000044  b           . + 4 + (0x44 << 2)
label_206448:
    if (ctx->pc == 0x206448u) {
        ctx->pc = 0x20644Cu;
        goto label_20644c;
    }
    ctx->pc = 0x206444u;
    {
        const bool branch_taken_0x206444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206444) {
            ctx->pc = 0x206558u;
            goto label_206558;
        }
    }
    ctx->pc = 0x20644Cu;
label_20644c:
    // 0x20644c: 0xc081ba0  jal         func_206E80
label_206450:
    if (ctx->pc == 0x206450u) {
        ctx->pc = 0x206450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20644Cu;
        // 0x206450: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206454u;
        goto label_206454;
    }
    ctx->pc = 0x20644Cu;
    SET_GPR_U32(ctx, 31, 0x206454u);
    ctx->pc = 0x206450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20644Cu;
    // 0x206450: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206E80u, 0x20644Cu, 0x206454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206454u;
label_206454:
    // 0x206454: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x206454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_206458:
    // 0x206458: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x206458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20645c:
    // 0x20645c: 0x8c629160  lw          $v0, -0x6EA0($v1)
    ctx->pc = 0x20645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938976)));
label_206460:
    // 0x206460: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x206460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_206464:
    // 0x206464: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x206464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_206468:
    // 0x206468: 0x24a58f20  addiu       $a1, $a1, -0x70E0
    ctx->pc = 0x206468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938400));
label_20646c:
    // 0x20646c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x20646cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_206470:
    // 0x206470: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206474:
    // 0x206474: 0xc0d7424  jal         func_35D090
label_206478:
    if (ctx->pc == 0x206478u) {
        ctx->pc = 0x206478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206474u;
        // 0x206478: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20647Cu;
        goto label_20647c;
    }
    ctx->pc = 0x206474u;
    SET_GPR_U32(ctx, 31, 0x20647Cu);
    ctx->pc = 0x206478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206474u;
    // 0x206478: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x206474u, 0x20647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20647Cu;
label_20647c:
    // 0x20647c: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x20647cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_206480:
    // 0x206480: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x206480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_206484:
    // 0x206484: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x206484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_206488:
    // 0x206488: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x206488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20648c:
    // 0x20648c: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x20648cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_206490:
    // 0x206490: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x206490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_206494:
    // 0x206494: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x206494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_206498:
    // 0x206498: 0x24a50468  addiu       $a1, $a1, 0x468
    ctx->pc = 0x206498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
label_20649c:
    // 0x20649c: 0x24c60b60  addiu       $a2, $a2, 0xB60
    ctx->pc = 0x20649cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2912));
label_2064a0:
    // 0x2064a0: 0xc0d74c6  jal         func_35D318
label_2064a4:
    if (ctx->pc == 0x2064A4u) {
        ctx->pc = 0x2064A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064A0u;
        // 0x2064a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064A8u;
        goto label_2064a8;
    }
    ctx->pc = 0x2064A0u;
    SET_GPR_U32(ctx, 31, 0x2064A8u);
    ctx->pc = 0x2064A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064A0u;
    // 0x2064a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2064A0u, 0x2064A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064A8u;
label_2064a8:
    // 0x2064a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2064a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2064ac:
    // 0x2064ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2064acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2064b0:
    // 0x2064b0: 0xc0d74a8  jal         func_35D2A0
label_2064b4:
    if (ctx->pc == 0x2064B4u) {
        ctx->pc = 0x2064B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064B0u;
        // 0x2064b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064B8u;
        goto label_2064b8;
    }
    ctx->pc = 0x2064B0u;
    SET_GPR_U32(ctx, 31, 0x2064B8u);
    ctx->pc = 0x2064B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064B0u;
    // 0x2064b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x2064B0u, 0x2064B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064B8u;
label_2064b8:
    // 0x2064b8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2064b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_2064bc:
    // 0x2064bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2064bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2064c0:
    // 0x2064c0: 0x24c60b90  addiu       $a2, $a2, 0xB90
    ctx->pc = 0x2064c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2960));
label_2064c4:
    // 0x2064c4: 0xc0d74c6  jal         func_35D318
label_2064c8:
    if (ctx->pc == 0x2064C8u) {
        ctx->pc = 0x2064C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064C4u;
        // 0x2064c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064CCu;
        goto label_2064cc;
    }
    ctx->pc = 0x2064C4u;
    SET_GPR_U32(ctx, 31, 0x2064CCu);
    ctx->pc = 0x2064C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064C4u;
    // 0x2064c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2064C4u, 0x2064CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064CCu;
label_2064cc:
    // 0x2064cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2064ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2064d0:
    // 0x2064d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2064d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2064d4:
    // 0x2064d4: 0xc0d74a8  jal         func_35D2A0
label_2064d8:
    if (ctx->pc == 0x2064D8u) {
        ctx->pc = 0x2064D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064D4u;
        // 0x2064d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064DCu;
        goto label_2064dc;
    }
    ctx->pc = 0x2064D4u;
    SET_GPR_U32(ctx, 31, 0x2064DCu);
    ctx->pc = 0x2064D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064D4u;
    // 0x2064d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x2064D4u, 0x2064DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064DCu;
label_2064dc:
    // 0x2064dc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2064dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_2064e0:
    // 0x2064e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2064e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2064e4:
    // 0x2064e4: 0x24c60b70  addiu       $a2, $a2, 0xB70
    ctx->pc = 0x2064e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2928));
label_2064e8:
    // 0x2064e8: 0xc0d74c6  jal         func_35D318
label_2064ec:
    if (ctx->pc == 0x2064ECu) {
        ctx->pc = 0x2064ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064E8u;
        // 0x2064ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064F0u;
        goto label_2064f0;
    }
    ctx->pc = 0x2064E8u;
    SET_GPR_U32(ctx, 31, 0x2064F0u);
    ctx->pc = 0x2064ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064E8u;
    // 0x2064ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2064E8u, 0x2064F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064F0u;
label_2064f0:
    // 0x2064f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2064f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2064f4:
    // 0x2064f4: 0xc0d7412  jal         func_35D048
label_2064f8:
    if (ctx->pc == 0x2064F8u) {
        ctx->pc = 0x2064F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064F4u;
        // 0x2064f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064FCu;
        goto label_2064fc;
    }
    ctx->pc = 0x2064F4u;
    SET_GPR_U32(ctx, 31, 0x2064FCu);
    ctx->pc = 0x2064F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064F4u;
    // 0x2064f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2064F4u, 0x2064FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064FCu;
label_2064fc:
    // 0x2064fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2064fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206500:
    // 0x206500: 0xc0d7412  jal         func_35D048
label_206504:
    if (ctx->pc == 0x206504u) {
        ctx->pc = 0x206504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206500u;
        // 0x206504: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206508u;
        goto label_206508;
    }
    ctx->pc = 0x206500u;
    SET_GPR_U32(ctx, 31, 0x206508u);
    ctx->pc = 0x206504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206500u;
    // 0x206504: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x206500u, 0x206508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206508u;
label_206508:
    // 0x206508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20650c:
    // 0x20650c: 0xc0d7412  jal         func_35D048
label_206510:
    if (ctx->pc == 0x206510u) {
        ctx->pc = 0x206510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20650Cu;
        // 0x206510: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206514u;
        goto label_206514;
    }
    ctx->pc = 0x20650Cu;
    SET_GPR_U32(ctx, 31, 0x206514u);
    ctx->pc = 0x206510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20650Cu;
    // 0x206510: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20650Cu, 0x206514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206514u;
label_206514:
    // 0x206514: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x206514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206518:
    // 0x206518: 0xc0d7412  jal         func_35D048
label_20651c:
    if (ctx->pc == 0x20651Cu) {
        ctx->pc = 0x20651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206518u;
        // 0x20651c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206520u;
        goto label_206520;
    }
    ctx->pc = 0x206518u;
    SET_GPR_U32(ctx, 31, 0x206520u);
    ctx->pc = 0x20651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206518u;
    // 0x20651c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x206518u, 0x206520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206520u;
label_206520:
    // 0x206520: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x206520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_206524:
    // 0x206524: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x206524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_206528:
    // 0x206528: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x206528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20652c:
    // 0x20652c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x20652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_206530:
    // 0x206530: 0x40f809  jalr        $v0
label_206534:
    if (ctx->pc == 0x206534u) {
        ctx->pc = 0x206534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206530u;
        // 0x206534: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206538u;
        goto label_206538;
    }
    ctx->pc = 0x206530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206538u);
        ctx->pc = 0x206534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206530u;
        // 0x206534: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206530u, 0x206538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206538u;
label_206538:
    // 0x206538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20653c:
    // 0x20653c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_206540:
    // 0x206540: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x206540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206544:
    // 0x206544: 0xc0d7412  jal         func_35D048
label_206548:
    if (ctx->pc == 0x206548u) {
        ctx->pc = 0x206548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206544u;
        // 0x206548: 0xa2c3000d  sb          $v1, 0xD($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 13), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20654Cu;
        goto label_20654c;
    }
    ctx->pc = 0x206544u;
    SET_GPR_U32(ctx, 31, 0x20654Cu);
    ctx->pc = 0x206548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206544u;
    // 0x206548: 0xa2c3000d  sb          $v1, 0xD($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 13), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x206544u, 0x20654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20654Cu;
label_20654c:
    // 0x20654c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206550:
    // 0x206550: 0xc0d7412  jal         func_35D048
label_206554:
    if (ctx->pc == 0x206554u) {
        ctx->pc = 0x206554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206550u;
        // 0x206554: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206558u;
        goto label_206558;
    }
    ctx->pc = 0x206550u;
    SET_GPR_U32(ctx, 31, 0x206558u);
    ctx->pc = 0x206554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206550u;
    // 0x206554: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x206550u, 0x206558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206558u;
label_206558:
    // 0x206558: 0xc081710  jal         func_205C40
label_20655c:
    if (ctx->pc == 0x20655Cu) {
        ctx->pc = 0x206560u;
        goto label_206560;
    }
    ctx->pc = 0x206558u;
    SET_GPR_U32(ctx, 31, 0x206560u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x206558u, 0x206560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206560u;
label_206560:
    // 0x206560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206564:
    // 0x206564: 0xc0817d4  jal         func_205F50
label_206568:
    if (ctx->pc == 0x206568u) {
        ctx->pc = 0x206568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206564u;
        // 0x206568: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20656Cu;
        goto label_20656c;
    }
    ctx->pc = 0x206564u;
    SET_GPR_U32(ctx, 31, 0x20656Cu);
    ctx->pc = 0x206568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206564u;
    // 0x206568: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x206564u, 0x20656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20656Cu;
label_20656c:
    // 0x20656c: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x20656cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_206570:
    // 0x206570: 0xc081560  jal         func_205580
label_206574:
    if (ctx->pc == 0x206574u) {
        ctx->pc = 0x206574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206570u;
        // 0x206574: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206578u;
        goto label_206578;
    }
    ctx->pc = 0x206570u;
    SET_GPR_U32(ctx, 31, 0x206578u);
    ctx->pc = 0x206574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206570u;
    // 0x206574: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x206570u, 0x206578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206578u;
label_206578:
    // 0x206578: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x206578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20657c:
    // 0x20657c: 0xc0d7468  jal         func_35D1A0
label_206580:
    if (ctx->pc == 0x206580u) {
        ctx->pc = 0x206580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20657Cu;
        // 0x206580: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206584u;
        goto label_206584;
    }
    ctx->pc = 0x20657Cu;
    SET_GPR_U32(ctx, 31, 0x206584u);
    ctx->pc = 0x206580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20657Cu;
    // 0x206580: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x20657Cu, 0x206584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206584u;
label_206584:
    // 0x206584: 0xa2d7000e  sb          $s7, 0xE($s6)
    ctx->pc = 0x206584u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 14), (uint8_t)GPR_U32(ctx, 23));
label_206588:
    // 0x206588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x206588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20658c:
    // 0x20658c: 0xa2c0000f  sb          $zero, 0xF($s6)
    ctx->pc = 0x20658cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 15), (uint8_t)GPR_U32(ctx, 0));
label_206590:
    // 0x206590: 0xc0d7412  jal         func_35D048
label_206594:
    if (ctx->pc == 0x206594u) {
        ctx->pc = 0x206594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206590u;
        // 0x206594: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206598u;
        goto label_206598;
    }
    ctx->pc = 0x206590u;
    SET_GPR_U32(ctx, 31, 0x206598u);
    ctx->pc = 0x206594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206590u;
    // 0x206594: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x206590u, 0x206598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206598u;
label_206598:
    // 0x206598: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x206598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_20659c:
    // 0x20659c: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x20659cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2065a0:
    // 0x2065a0: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2065a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2065a4:
    // 0x2065a4: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2065a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2065a8:
    // 0x2065a8: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2065a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2065ac:
    // 0x2065ac: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2065acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_2065b0:
    // 0x2065b0: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2065b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2065b4:
    // 0x2065b4: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x2065b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_2065b8:
    // 0x2065b8: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2065b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2065bc:
    // 0x2065bc: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2065bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_2065c0:
    // 0x2065c0: 0x3e00008  jr          $ra
label_2065c4:
    if (ctx->pc == 0x2065C4u) {
        ctx->pc = 0x2065C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065C0u;
        // 0x2065c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2065C8u;
        goto label_fallthrough_0x2065c0;
    }
    ctx->pc = 0x2065C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2065C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065C0u;
        // 0x2065c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2065C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2065c0:
    ctx->pc = 0x2065C8u;
}
