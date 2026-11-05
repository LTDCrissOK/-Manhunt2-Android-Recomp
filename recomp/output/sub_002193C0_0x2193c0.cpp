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

// Function: sub_002193C0
// Address: 0x2193c0 - 0x219548
void sub_002193C0_0x2193c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002193C0_0x2193c0");
#endif

    switch (ctx->pc) {
        case 0x2193c0u: goto label_2193c0;
        case 0x2193c4u: goto label_2193c4;
        case 0x2193c8u: goto label_2193c8;
        case 0x2193ccu: goto label_2193cc;
        case 0x2193d0u: goto label_2193d0;
        case 0x2193d4u: goto label_2193d4;
        case 0x2193d8u: goto label_2193d8;
        case 0x2193dcu: goto label_2193dc;
        case 0x2193e0u: goto label_2193e0;
        case 0x2193e4u: goto label_2193e4;
        case 0x2193e8u: goto label_2193e8;
        case 0x2193ecu: goto label_2193ec;
        case 0x2193f0u: goto label_2193f0;
        case 0x2193f4u: goto label_2193f4;
        case 0x2193f8u: goto label_2193f8;
        case 0x2193fcu: goto label_2193fc;
        case 0x219400u: goto label_219400;
        case 0x219404u: goto label_219404;
        case 0x219408u: goto label_219408;
        case 0x21940cu: goto label_21940c;
        case 0x219410u: goto label_219410;
        case 0x219414u: goto label_219414;
        case 0x219418u: goto label_219418;
        case 0x21941cu: goto label_21941c;
        case 0x219420u: goto label_219420;
        case 0x219424u: goto label_219424;
        case 0x219428u: goto label_219428;
        case 0x21942cu: goto label_21942c;
        case 0x219430u: goto label_219430;
        case 0x219434u: goto label_219434;
        case 0x219438u: goto label_219438;
        case 0x21943cu: goto label_21943c;
        case 0x219440u: goto label_219440;
        case 0x219444u: goto label_219444;
        case 0x219448u: goto label_219448;
        case 0x21944cu: goto label_21944c;
        case 0x219450u: goto label_219450;
        case 0x219454u: goto label_219454;
        case 0x219458u: goto label_219458;
        case 0x21945cu: goto label_21945c;
        case 0x219460u: goto label_219460;
        case 0x219464u: goto label_219464;
        case 0x219468u: goto label_219468;
        case 0x21946cu: goto label_21946c;
        case 0x219470u: goto label_219470;
        case 0x219474u: goto label_219474;
        case 0x219478u: goto label_219478;
        case 0x21947cu: goto label_21947c;
        case 0x219480u: goto label_219480;
        case 0x219484u: goto label_219484;
        case 0x219488u: goto label_219488;
        case 0x21948cu: goto label_21948c;
        case 0x219490u: goto label_219490;
        case 0x219494u: goto label_219494;
        case 0x219498u: goto label_219498;
        case 0x21949cu: goto label_21949c;
        case 0x2194a0u: goto label_2194a0;
        case 0x2194a4u: goto label_2194a4;
        case 0x2194a8u: goto label_2194a8;
        case 0x2194acu: goto label_2194ac;
        case 0x2194b0u: goto label_2194b0;
        case 0x2194b4u: goto label_2194b4;
        case 0x2194b8u: goto label_2194b8;
        case 0x2194bcu: goto label_2194bc;
        case 0x2194c0u: goto label_2194c0;
        case 0x2194c4u: goto label_2194c4;
        case 0x2194c8u: goto label_2194c8;
        case 0x2194ccu: goto label_2194cc;
        case 0x2194d0u: goto label_2194d0;
        case 0x2194d4u: goto label_2194d4;
        case 0x2194d8u: goto label_2194d8;
        case 0x2194dcu: goto label_2194dc;
        case 0x2194e0u: goto label_2194e0;
        case 0x2194e4u: goto label_2194e4;
        case 0x2194e8u: goto label_2194e8;
        case 0x2194ecu: goto label_2194ec;
        case 0x2194f0u: goto label_2194f0;
        case 0x2194f4u: goto label_2194f4;
        case 0x2194f8u: goto label_2194f8;
        case 0x2194fcu: goto label_2194fc;
        case 0x219500u: goto label_219500;
        case 0x219504u: goto label_219504;
        case 0x219508u: goto label_219508;
        case 0x21950cu: goto label_21950c;
        case 0x219510u: goto label_219510;
        case 0x219514u: goto label_219514;
        case 0x219518u: goto label_219518;
        case 0x21951cu: goto label_21951c;
        case 0x219520u: goto label_219520;
        case 0x219524u: goto label_219524;
        case 0x219528u: goto label_219528;
        case 0x21952cu: goto label_21952c;
        case 0x219530u: goto label_219530;
        case 0x219534u: goto label_219534;
        case 0x219538u: goto label_219538;
        case 0x21953cu: goto label_21953c;
        case 0x219540u: goto label_219540;
        case 0x219544u: goto label_219544;
        default: break;
    }

    ctx->pc = 0x2193c0u;

label_2193c0:
    // 0x2193c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2193c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2193c4:
    // 0x2193c4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2193c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2193c8:
    // 0x2193c8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2193c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_2193cc:
    // 0x2193cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2193ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2193d0:
    // 0x2193d0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2193d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_2193d4:
    // 0x2193d4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2193d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_2193d8:
    // 0x2193d8: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2193d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_2193dc:
    // 0x2193dc: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2193dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2193e0:
    // 0x2193e0: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2193e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_2193e4:
    // 0x2193e4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2193e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2193e8:
    // 0x2193e8: 0xc0d7384  jal         func_35CE10
label_2193ec:
    if (ctx->pc == 0x2193ECu) {
        ctx->pc = 0x2193ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193E8u;
        // 0x2193ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193F0u;
        goto label_2193f0;
    }
    ctx->pc = 0x2193E8u;
    SET_GPR_U32(ctx, 31, 0x2193F0u);
    ctx->pc = 0x2193ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193E8u;
    // 0x2193ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2193E8u, 0x2193F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193F0u;
label_2193f0:
    // 0x2193f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2193f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2193f4:
    // 0x2193f4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2193f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2193f8:
    // 0x2193f8: 0xc0d7384  jal         func_35CE10
label_2193fc:
    if (ctx->pc == 0x2193FCu) {
        ctx->pc = 0x2193FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193F8u;
        // 0x2193fc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219400u;
        goto label_219400;
    }
    ctx->pc = 0x2193F8u;
    SET_GPR_U32(ctx, 31, 0x219400u);
    ctx->pc = 0x2193FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193F8u;
    // 0x2193fc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2193F8u, 0x219400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219400u;
label_219400:
    // 0x219400: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x219400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_219404:
    // 0x219404: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x219404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_219408:
    // 0x219408: 0x24513570  addiu       $s1, $v0, 0x3570
    ctx->pc = 0x219408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13680));
label_21940c:
    // 0x21940c: 0xc09eb04  jal         func_27AC10
label_219410:
    if (ctx->pc == 0x219410u) {
        ctx->pc = 0x219410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21940Cu;
        // 0x219410: 0x2472fe40  addiu       $s2, $v1, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219414u;
        goto label_219414;
    }
    ctx->pc = 0x21940Cu;
    SET_GPR_U32(ctx, 31, 0x219414u);
    ctx->pc = 0x219410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21940Cu;
    // 0x219410: 0x2472fe40  addiu       $s2, $v1, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x21940Cu, 0x219414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219414u;
label_219414:
    // 0x219414: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219418:
    // 0x219418: 0xc0d745c  jal         func_35D170
label_21941c:
    if (ctx->pc == 0x21941Cu) {
        ctx->pc = 0x21941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219418u;
        // 0x21941c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219420u;
        goto label_219420;
    }
    ctx->pc = 0x219418u;
    SET_GPR_U32(ctx, 31, 0x219420u);
    ctx->pc = 0x21941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219418u;
    // 0x21941c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x219418u, 0x219420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219420u;
label_219420:
    // 0x219420: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x219420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_219424:
    // 0x219424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219428:
    // 0x219428: 0xc0d756c  jal         func_35D5B0
label_21942c:
    if (ctx->pc == 0x21942Cu) {
        ctx->pc = 0x21942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219428u;
        // 0x21942c: 0x24a5ee60  addiu       $a1, $a1, -0x11A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219430u;
        goto label_219430;
    }
    ctx->pc = 0x219428u;
    SET_GPR_U32(ctx, 31, 0x219430u);
    ctx->pc = 0x21942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219428u;
    // 0x21942c: 0x24a5ee60  addiu       $a1, $a1, -0x11A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x219428u, 0x219430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219430u;
label_219430:
    // 0x219430: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_219434:
    if (ctx->pc == 0x219434u) {
        ctx->pc = 0x219434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219430u;
        // 0x219434: 0x3c150046  lui         $s5, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219438u;
        goto label_219438;
    }
    ctx->pc = 0x219430u;
    {
        const bool branch_taken_0x219430 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x219434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219430u;
        // 0x219434: 0x3c150046  lui         $s5, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219430) {
            ctx->pc = 0x219450u;
            goto label_219450;
        }
    }
    ctx->pc = 0x219438u;
label_219438:
    // 0x219438: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21943c:
    // 0x21943c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219440:
    // 0x219440: 0xc09dd98  jal         func_277660
label_219444:
    if (ctx->pc == 0x219444u) {
        ctx->pc = 0x219444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219440u;
        // 0x219444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219448u;
        goto label_219448;
    }
    ctx->pc = 0x219440u;
    SET_GPR_U32(ctx, 31, 0x219448u);
    ctx->pc = 0x219444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219440u;
    // 0x219444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x219440u, 0x219448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219448u;
label_219448:
    // 0x219448: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x219448u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
label_21944c:
    // 0x21944c: 0x0  nop
    ctx->pc = 0x21944cu;
    // NOP
label_219450:
    // 0x219450: 0x10000026  b           . + 4 + (0x26 << 2)
label_219454:
    if (ctx->pc == 0x219454u) {
        ctx->pc = 0x219454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219450u;
        // 0x219454: 0x3c140046  lui         $s4, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219458u;
        goto label_219458;
    }
    ctx->pc = 0x219450u;
    {
        const bool branch_taken_0x219450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219450u;
        // 0x219454: 0x3c140046  lui         $s4, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219450) {
            ctx->pc = 0x2194ECu;
            goto label_2194ec;
        }
    }
    ctx->pc = 0x219458u;
label_219458:
    // 0x219458: 0xc0d73cc  jal         func_35CF30
label_21945c:
    if (ctx->pc == 0x21945Cu) {
        ctx->pc = 0x21945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219458u;
        // 0x21945c: 0x26a516a0  addiu       $a1, $s5, 0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219460u;
        goto label_219460;
    }
    ctx->pc = 0x219458u;
    SET_GPR_U32(ctx, 31, 0x219460u);
    ctx->pc = 0x21945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219458u;
    // 0x21945c: 0x26a516a0  addiu       $a1, $s5, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219458u, 0x219460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219460u;
label_219460:
    // 0x219460: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_219464:
    // 0x219464: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_219468:
    if (ctx->pc == 0x219468u) {
        ctx->pc = 0x219468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219464u;
        // 0x219468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21946Cu;
        goto label_21946c;
    }
    ctx->pc = 0x219464u;
    {
        const bool branch_taken_0x219464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219464u;
        // 0x219468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219464) {
            ctx->pc = 0x2194F0u;
            goto label_2194f0;
        }
    }
    ctx->pc = 0x21946Cu;
label_21946c:
    // 0x21946c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219470:
    // 0x219470: 0xc0d73cc  jal         func_35CF30
label_219474:
    if (ctx->pc == 0x219474u) {
        ctx->pc = 0x219474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219470u;
        // 0x219474: 0x268516a8  addiu       $a1, $s4, 0x16A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 5800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219478u;
        goto label_219478;
    }
    ctx->pc = 0x219470u;
    SET_GPR_U32(ctx, 31, 0x219478u);
    ctx->pc = 0x219474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219470u;
    // 0x219474: 0x268516a8  addiu       $a1, $s4, 0x16A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 5800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219470u, 0x219478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219478u;
label_219478:
    // 0x219478: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21947c:
    // 0x21947c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_219480:
    if (ctx->pc == 0x219480u) {
        ctx->pc = 0x219480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21947Cu;
        // 0x219480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219484u;
        goto label_219484;
    }
    ctx->pc = 0x21947Cu;
    {
        const bool branch_taken_0x21947c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21947c) {
            ctx->pc = 0x219480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21947Cu;
            // 0x219480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2194F0u;
            goto label_2194f0;
        }
    }
    ctx->pc = 0x219484u;
label_219484:
    // 0x219484: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x219484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_219488:
    // 0x219488: 0xc085d2a  jal         func_2174A8
label_21948c:
    if (ctx->pc == 0x21948Cu) {
        ctx->pc = 0x21948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219488u;
        // 0x21948c: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219490u;
        goto label_219490;
    }
    ctx->pc = 0x219488u;
    SET_GPR_U32(ctx, 31, 0x219490u);
    ctx->pc = 0x21948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219488u;
    // 0x21948c: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x219488u, 0x219490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219490u;
label_219490:
    // 0x219490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219494:
    // 0x219494: 0x8e030190  lw          $v1, 0x190($s0)
    ctx->pc = 0x219494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_219498:
    // 0x219498: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x219498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_21949c:
    // 0x21949c: 0x40f809  jalr        $v0
label_2194a0:
    if (ctx->pc == 0x2194A0u) {
        ctx->pc = 0x2194A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21949Cu;
        // 0x2194a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194A4u;
        goto label_2194a4;
    }
    ctx->pc = 0x21949Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2194A4u);
        ctx->pc = 0x2194A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21949Cu;
        // 0x2194a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21949Cu, 0x2194A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2194A4u;
label_2194a4:
    // 0x2194a4: 0x1000000d  b           . + 4 + (0xD << 2)
label_2194a8:
    if (ctx->pc == 0x2194A8u) {
        ctx->pc = 0x2194A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194A4u;
        // 0x2194a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194ACu;
        goto label_2194ac;
    }
    ctx->pc = 0x2194A4u;
    {
        const bool branch_taken_0x2194a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2194A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194A4u;
        // 0x2194a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194a4) {
            ctx->pc = 0x2194DCu;
            goto label_2194dc;
        }
    }
    ctx->pc = 0x2194ACu;
label_2194ac:
    // 0x2194ac: 0x0  nop
    ctx->pc = 0x2194acu;
    // NOP
label_2194b0:
    // 0x2194b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2194b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2194b4:
    // 0x2194b4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2194b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2194b8:
    // 0x2194b8: 0x40f809  jalr        $v0
label_2194bc:
    if (ctx->pc == 0x2194BCu) {
        ctx->pc = 0x2194BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194B8u;
        // 0x2194bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194C0u;
        goto label_2194c0;
    }
    ctx->pc = 0x2194B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2194C0u);
        ctx->pc = 0x2194BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194B8u;
        // 0x2194bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2194B8u, 0x2194C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2194C0u;
label_2194c0:
    // 0x2194c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2194c4:
    if (ctx->pc == 0x2194C4u) {
        ctx->pc = 0x2194C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194C0u;
        // 0x2194c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194C8u;
        goto label_2194c8;
    }
    ctx->pc = 0x2194C0u;
    {
        const bool branch_taken_0x2194c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2194C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194C0u;
        // 0x2194c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194c0) {
            ctx->pc = 0x2194DCu;
            goto label_2194dc;
        }
    }
    ctx->pc = 0x2194C8u;
label_2194c8:
    // 0x2194c8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2194c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2194cc:
    // 0x2194cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2194ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2194d0:
    // 0x2194d0: 0xc0efefa  jal         func_3BFBE8
label_2194d4:
    if (ctx->pc == 0x2194D4u) {
        ctx->pc = 0x2194D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194D0u;
        // 0x2194d4: 0x262516b8  addiu       $a1, $s1, 0x16B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194D8u;
        goto label_2194d8;
    }
    ctx->pc = 0x2194D0u;
    SET_GPR_U32(ctx, 31, 0x2194D8u);
    ctx->pc = 0x2194D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194D0u;
    // 0x2194d4: 0x262516b8  addiu       $a1, $s1, 0x16B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2194D0u, 0x2194D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194D8u;
label_2194d8:
    // 0x2194d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2194d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2194dc:
    // 0x2194dc: 0xc09de68  jal         func_2779A0
label_2194e0:
    if (ctx->pc == 0x2194E0u) {
        ctx->pc = 0x2194E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194DCu;
        // 0x2194e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194E4u;
        goto label_2194e4;
    }
    ctx->pc = 0x2194DCu;
    SET_GPR_U32(ctx, 31, 0x2194E4u);
    ctx->pc = 0x2194E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194DCu;
    // 0x2194e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2194DCu, 0x2194E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194E4u;
label_2194e4:
    // 0x2194e4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_2194e8:
    if (ctx->pc == 0x2194E8u) {
        ctx->pc = 0x2194E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194E4u;
        // 0x2194e8: 0x8e030190  lw          $v1, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194ECu;
        goto label_2194ec;
    }
    ctx->pc = 0x2194E4u;
    {
        const bool branch_taken_0x2194e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2194e4) {
            ctx->pc = 0x2194E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2194E4u;
            // 0x2194e8: 0x8e030190  lw          $v1, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2194B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2194b0;
        }
    }
    ctx->pc = 0x2194ECu;
label_2194ec:
    // 0x2194ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2194ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2194f0:
    // 0x2194f0: 0xc09de3a  jal         func_2778E8
label_2194f4:
    if (ctx->pc == 0x2194F4u) {
        ctx->pc = 0x2194F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194F0u;
        // 0x2194f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194F8u;
        goto label_2194f8;
    }
    ctx->pc = 0x2194F0u;
    SET_GPR_U32(ctx, 31, 0x2194F8u);
    ctx->pc = 0x2194F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194F0u;
    // 0x2194f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x2194F0u, 0x2194F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194F8u;
label_2194f8:
    // 0x2194f8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_2194fc:
    if (ctx->pc == 0x2194FCu) {
        ctx->pc = 0x2194FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194F8u;
        // 0x2194fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219500u;
        goto label_219500;
    }
    ctx->pc = 0x2194F8u;
    {
        const bool branch_taken_0x2194f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2194FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194F8u;
        // 0x2194fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194f8) {
            ctx->pc = 0x219458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219458;
        }
    }
    ctx->pc = 0x219500u;
label_219500:
    // 0x219500: 0xc09ddec  jal         func_2777B0
label_219504:
    if (ctx->pc == 0x219504u) {
        ctx->pc = 0x219504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219500u;
        // 0x219504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219508u;
        goto label_219508;
    }
    ctx->pc = 0x219500u;
    SET_GPR_U32(ctx, 31, 0x219508u);
    ctx->pc = 0x219504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219500u;
    // 0x219504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x219500u, 0x219508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219508u;
label_219508:
    // 0x219508: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x219508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21950c:
    // 0x21950c: 0xc0d7412  jal         func_35D048
label_219510:
    if (ctx->pc == 0x219510u) {
        ctx->pc = 0x219510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21950Cu;
        // 0x219510: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219514u;
        goto label_219514;
    }
    ctx->pc = 0x21950Cu;
    SET_GPR_U32(ctx, 31, 0x219514u);
    ctx->pc = 0x219510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21950Cu;
    // 0x219510: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21950Cu, 0x219514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219514u;
label_219514:
    // 0x219514: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219518:
    // 0x219518: 0xc0d7412  jal         func_35D048
label_21951c:
    if (ctx->pc == 0x21951Cu) {
        ctx->pc = 0x21951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219518u;
        // 0x21951c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219520u;
        goto label_219520;
    }
    ctx->pc = 0x219518u;
    SET_GPR_U32(ctx, 31, 0x219520u);
    ctx->pc = 0x21951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219518u;
    // 0x21951c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219518u, 0x219520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219520u;
label_219520:
    // 0x219520: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x219520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_219524:
    // 0x219524: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x219524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_219528:
    // 0x219528: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x219528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_21952c:
    // 0x21952c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x21952cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_219530:
    // 0x219530: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x219530u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_219534:
    // 0x219534: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x219534u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_219538:
    // 0x219538: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x219538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21953c:
    // 0x21953c: 0x3e00008  jr          $ra
label_219540:
    if (ctx->pc == 0x219540u) {
        ctx->pc = 0x219540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21953Cu;
        // 0x219540: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219544u;
        goto label_219544;
    }
    ctx->pc = 0x21953Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21953Cu;
        // 0x219540: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21953Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219544u;
label_219544:
    // 0x219544: 0x0  nop
    ctx->pc = 0x219544u;
    // NOP
    ctx->pc = 0x219548u;
}
