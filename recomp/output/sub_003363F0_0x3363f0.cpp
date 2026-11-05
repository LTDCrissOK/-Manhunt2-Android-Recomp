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

// Function: sub_003363F0
// Address: 0x3363f0 - 0x336548
void sub_003363F0_0x3363f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003363F0_0x3363f0");
#endif

    switch (ctx->pc) {
        case 0x3363f0u: goto label_3363f0;
        case 0x3363f4u: goto label_3363f4;
        case 0x3363f8u: goto label_3363f8;
        case 0x3363fcu: goto label_3363fc;
        case 0x336400u: goto label_336400;
        case 0x336404u: goto label_336404;
        case 0x336408u: goto label_336408;
        case 0x33640cu: goto label_33640c;
        case 0x336410u: goto label_336410;
        case 0x336414u: goto label_336414;
        case 0x336418u: goto label_336418;
        case 0x33641cu: goto label_33641c;
        case 0x336420u: goto label_336420;
        case 0x336424u: goto label_336424;
        case 0x336428u: goto label_336428;
        case 0x33642cu: goto label_33642c;
        case 0x336430u: goto label_336430;
        case 0x336434u: goto label_336434;
        case 0x336438u: goto label_336438;
        case 0x33643cu: goto label_33643c;
        case 0x336440u: goto label_336440;
        case 0x336444u: goto label_336444;
        case 0x336448u: goto label_336448;
        case 0x33644cu: goto label_33644c;
        case 0x336450u: goto label_336450;
        case 0x336454u: goto label_336454;
        case 0x336458u: goto label_336458;
        case 0x33645cu: goto label_33645c;
        case 0x336460u: goto label_336460;
        case 0x336464u: goto label_336464;
        case 0x336468u: goto label_336468;
        case 0x33646cu: goto label_33646c;
        case 0x336470u: goto label_336470;
        case 0x336474u: goto label_336474;
        case 0x336478u: goto label_336478;
        case 0x33647cu: goto label_33647c;
        case 0x336480u: goto label_336480;
        case 0x336484u: goto label_336484;
        case 0x336488u: goto label_336488;
        case 0x33648cu: goto label_33648c;
        case 0x336490u: goto label_336490;
        case 0x336494u: goto label_336494;
        case 0x336498u: goto label_336498;
        case 0x33649cu: goto label_33649c;
        case 0x3364a0u: goto label_3364a0;
        case 0x3364a4u: goto label_3364a4;
        case 0x3364a8u: goto label_3364a8;
        case 0x3364acu: goto label_3364ac;
        case 0x3364b0u: goto label_3364b0;
        case 0x3364b4u: goto label_3364b4;
        case 0x3364b8u: goto label_3364b8;
        case 0x3364bcu: goto label_3364bc;
        case 0x3364c0u: goto label_3364c0;
        case 0x3364c4u: goto label_3364c4;
        case 0x3364c8u: goto label_3364c8;
        case 0x3364ccu: goto label_3364cc;
        case 0x3364d0u: goto label_3364d0;
        case 0x3364d4u: goto label_3364d4;
        case 0x3364d8u: goto label_3364d8;
        case 0x3364dcu: goto label_3364dc;
        case 0x3364e0u: goto label_3364e0;
        case 0x3364e4u: goto label_3364e4;
        case 0x3364e8u: goto label_3364e8;
        case 0x3364ecu: goto label_3364ec;
        case 0x3364f0u: goto label_3364f0;
        case 0x3364f4u: goto label_3364f4;
        case 0x3364f8u: goto label_3364f8;
        case 0x3364fcu: goto label_3364fc;
        case 0x336500u: goto label_336500;
        case 0x336504u: goto label_336504;
        case 0x336508u: goto label_336508;
        case 0x33650cu: goto label_33650c;
        case 0x336510u: goto label_336510;
        case 0x336514u: goto label_336514;
        case 0x336518u: goto label_336518;
        case 0x33651cu: goto label_33651c;
        case 0x336520u: goto label_336520;
        case 0x336524u: goto label_336524;
        case 0x336528u: goto label_336528;
        case 0x33652cu: goto label_33652c;
        case 0x336530u: goto label_336530;
        case 0x336534u: goto label_336534;
        case 0x336538u: goto label_336538;
        case 0x33653cu: goto label_33653c;
        case 0x336540u: goto label_336540;
        case 0x336544u: goto label_336544;
        default: break;
    }

    ctx->pc = 0x3363f0u;

label_3363f0:
    // 0x3363f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3363f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3363f4:
    // 0x3363f4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3363f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_3363f8:
    // 0x3363f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3363f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3363fc:
    // 0x3363fc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3363fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_336400:
    // 0x336400: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x336400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_336404:
    // 0x336404: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x336404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336408:
    // 0x336408: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x336408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_33640c:
    // 0x33640c: 0x24426ea0  addiu       $v0, $v0, 0x6EA0
    ctx->pc = 0x33640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28320));
label_336410:
    // 0x336410: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x336410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_336414:
    // 0x336414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336418:
    // 0x336418: 0x8c652c7c  lw          $a1, 0x2C7C($v1)
    ctx->pc = 0x336418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_33641c:
    // 0x33641c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_336420:
    // 0x336420: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x336420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_336424:
    // 0x336424: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_336428:
    if (ctx->pc == 0x336428u) {
        ctx->pc = 0x336428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336424u;
        // 0x336428: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33642Cu;
        goto label_33642c;
    }
    ctx->pc = 0x336424u;
    {
        const bool branch_taken_0x336424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x336428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336424u;
        // 0x336428: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336424) {
            ctx->pc = 0x336444u;
            goto label_336444;
        }
    }
    ctx->pc = 0x33642Cu;
label_33642c:
    // 0x33642c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x33642cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_336430:
    // 0x336430: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_336434:
    if (ctx->pc == 0x336434u) {
        ctx->pc = 0x336434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336430u;
        // 0x336434: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336438u;
        goto label_336438;
    }
    ctx->pc = 0x336430u;
    {
        const bool branch_taken_0x336430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336430u;
        // 0x336434: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336430) {
            ctx->pc = 0x336444u;
            goto label_336444;
        }
    }
    ctx->pc = 0x336438u;
label_336438:
    // 0x336438: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x336438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33643c:
    // 0x33643c: 0xc0cd696  jal         func_335A58
label_336440:
    if (ctx->pc == 0x336440u) {
        ctx->pc = 0x336440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33643Cu;
        // 0x336440: 0x8c452c88  lw          $a1, 0x2C88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336444u;
        goto label_336444;
    }
    ctx->pc = 0x33643Cu;
    SET_GPR_U32(ctx, 31, 0x336444u);
    ctx->pc = 0x336440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33643Cu;
    // 0x336440: 0x8c452c88  lw          $a1, 0x2C88($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335A58u, 0x33643Cu, 0x336444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336444u;
label_336444:
    // 0x336444: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_336448:
    if (ctx->pc == 0x336448u) {
        ctx->pc = 0x336448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336444u;
        // 0x336448: 0x3c11005b  lui         $s1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33644Cu;
        goto label_33644c;
    }
    ctx->pc = 0x336444u;
    {
        const bool branch_taken_0x336444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336444u;
        // 0x336448: 0x3c11005b  lui         $s1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336444) {
            ctx->pc = 0x3364A4u;
            goto label_3364a4;
        }
    }
    ctx->pc = 0x33644Cu;
label_33644c:
    // 0x33644c: 0x1000000b  b           . + 4 + (0xB << 2)
label_336450:
    if (ctx->pc == 0x336450u) {
        ctx->pc = 0x336450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33644Cu;
        // 0x336450: 0x26436ea0  addiu       $v1, $s2, 0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336454u;
        goto label_336454;
    }
    ctx->pc = 0x33644Cu;
    {
        const bool branch_taken_0x33644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33644Cu;
        // 0x336450: 0x26436ea0  addiu       $v1, $s2, 0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33644c) {
            ctx->pc = 0x33647Cu;
            goto label_33647c;
        }
    }
    ctx->pc = 0x336454u;
label_336454:
    // 0x336454: 0x0  nop
    ctx->pc = 0x336454u;
    // NOP
label_336458:
    // 0x336458: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x336458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33645c:
    // 0x33645c: 0xc0cd696  jal         func_335A58
label_336460:
    if (ctx->pc == 0x336460u) {
        ctx->pc = 0x336460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33645Cu;
        // 0x336460: 0x8c452c88  lw          $a1, 0x2C88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336464u;
        goto label_336464;
    }
    ctx->pc = 0x33645Cu;
    SET_GPR_U32(ctx, 31, 0x336464u);
    ctx->pc = 0x336460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33645Cu;
    // 0x336460: 0x8c452c88  lw          $a1, 0x2C88($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335A58u, 0x33645Cu, 0x336464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336464u;
label_336464:
    // 0x336464: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x336464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_336468:
    // 0x336468: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_33646c:
    if (ctx->pc == 0x33646Cu) {
        ctx->pc = 0x33646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336468u;
        // 0x33646c: 0x26436ea0  addiu       $v1, $s2, 0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336470u;
        goto label_336470;
    }
    ctx->pc = 0x336468u;
    {
        const bool branch_taken_0x336468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336468u;
        // 0x33646c: 0x26436ea0  addiu       $v1, $s2, 0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336468) {
            ctx->pc = 0x33647Cu;
            goto label_33647c;
        }
    }
    ctx->pc = 0x336470u;
label_336470:
    // 0x336470: 0xc0cd96e  jal         func_3365B8
label_336474:
    if (ctx->pc == 0x336474u) {
        ctx->pc = 0x336474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336470u;
        // 0x336474: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336478u;
        goto label_336478;
    }
    ctx->pc = 0x336470u;
    SET_GPR_U32(ctx, 31, 0x336478u);
    ctx->pc = 0x336474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336470u;
    // 0x336474: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365B8u, 0x336470u, 0x336478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336478u;
label_336478:
    // 0x336478: 0x26436ea0  addiu       $v1, $s2, 0x6EA0
    ctx->pc = 0x336478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28320));
label_33647c:
    // 0x33647c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_336480:
    // 0x336480: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_336484:
    if (ctx->pc == 0x336484u) {
        ctx->pc = 0x336484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336480u;
        // 0x336484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336488u;
        goto label_336488;
    }
    ctx->pc = 0x336480u;
    {
        const bool branch_taken_0x336480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336480u;
        // 0x336484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336480) {
            ctx->pc = 0x33648Cu;
            goto label_33648c;
        }
    }
    ctx->pc = 0x336488u;
label_336488:
    // 0x336488: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x336488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33648c:
    // 0x33648c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_336490:
    if (ctx->pc == 0x336490u) {
        ctx->pc = 0x336494u;
        goto label_336494;
    }
    ctx->pc = 0x33648Cu;
    {
        const bool branch_taken_0x33648c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33648c) {
            ctx->pc = 0x33649Cu;
            goto label_33649c;
        }
    }
    ctx->pc = 0x336494u;
label_336494:
    // 0x336494: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x336494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_336498:
    // 0x336498: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x336498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_33649c:
    // 0x33649c: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
label_3364a0:
    if (ctx->pc == 0x3364A0u) {
        ctx->pc = 0x3364A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33649Cu;
        // 0x3364a0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3364A4u;
        goto label_3364a4;
    }
    ctx->pc = 0x33649Cu;
    {
        const bool branch_taken_0x33649c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3364A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33649Cu;
        // 0x3364a0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33649c) {
            ctx->pc = 0x336458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336458;
        }
    }
    ctx->pc = 0x3364A4u;
label_3364a4:
    // 0x3364a4: 0x26226eb0  addiu       $v0, $s1, 0x6EB0
    ctx->pc = 0x3364a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28336));
label_3364a8:
    // 0x3364a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3364a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3364ac:
    // 0x3364ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3364acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3364b0:
    // 0x3364b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3364b4:
    if (ctx->pc == 0x3364B4u) {
        ctx->pc = 0x3364B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364B0u;
        // 0x3364b4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3364B8u;
        goto label_3364b8;
    }
    ctx->pc = 0x3364B0u;
    {
        const bool branch_taken_0x3364b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3364B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364B0u;
        // 0x3364b4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3364b0) {
            ctx->pc = 0x3364C8u;
            goto label_3364c8;
        }
    }
    ctx->pc = 0x3364B8u;
label_3364b8:
    // 0x3364b8: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x3364b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_3364bc:
    // 0x3364bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3364bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3364c0:
    // 0x3364c0: 0x40f809  jalr        $v0
label_3364c4:
    if (ctx->pc == 0x3364C4u) {
        ctx->pc = 0x3364C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364C0u;
        // 0x3364c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3364C8u;
        goto label_3364c8;
    }
    ctx->pc = 0x3364C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3364C8u);
        ctx->pc = 0x3364C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364C0u;
        // 0x3364c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3364C0u, 0x3364C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3364C8u;
label_3364c8:
    // 0x3364c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3364c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3364cc:
    // 0x3364cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3364d0:
    if (ctx->pc == 0x3364D0u) {
        ctx->pc = 0x3364D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364CCu;
        // 0x3364d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3364D4u;
        goto label_3364d4;
    }
    ctx->pc = 0x3364CCu;
    {
        const bool branch_taken_0x3364cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3364D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364CCu;
        // 0x3364d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3364cc) {
            ctx->pc = 0x3364D8u;
            goto label_3364d8;
        }
    }
    ctx->pc = 0x3364D4u;
label_3364d4:
    // 0x3364d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3364d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3364d8:
    // 0x3364d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3364dc:
    if (ctx->pc == 0x3364DCu) {
        ctx->pc = 0x3364E0u;
        goto label_3364e0;
    }
    ctx->pc = 0x3364D8u;
    {
        const bool branch_taken_0x3364d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3364d8) {
            ctx->pc = 0x3364E8u;
            goto label_3364e8;
        }
    }
    ctx->pc = 0x3364E0u;
label_3364e0:
    // 0x3364e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3364e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3364e4:
    // 0x3364e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3364e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_3364e8:
    // 0x3364e8: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_3364ec:
    if (ctx->pc == 0x3364ECu) {
        ctx->pc = 0x3364ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364E8u;
        // 0x3364ec: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3364F0u;
        goto label_3364f0;
    }
    ctx->pc = 0x3364E8u;
    {
        const bool branch_taken_0x3364e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3364ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364E8u;
        // 0x3364ec: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3364e8) {
            ctx->pc = 0x3364B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3364b8;
        }
    }
    ctx->pc = 0x3364F0u;
label_3364f0:
    // 0x3364f0: 0x26306eb0  addiu       $s0, $s1, 0x6EB0
    ctx->pc = 0x3364f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28336));
label_3364f4:
    // 0x3364f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3364f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3364f8:
    // 0x3364f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3364fc:
    if (ctx->pc == 0x3364FCu) {
        ctx->pc = 0x3364FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364F8u;
        // 0x3364fc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336500u;
        goto label_336500;
    }
    ctx->pc = 0x3364F8u;
    {
        const bool branch_taken_0x3364f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3364FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364F8u;
        // 0x3364fc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3364f8) {
            ctx->pc = 0x336520u;
            goto label_336520;
        }
    }
    ctx->pc = 0x336500u;
label_336500:
    // 0x336500: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x336500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_336504:
    // 0x336504: 0x0  nop
    ctx->pc = 0x336504u;
    // NOP
label_336508:
    // 0x336508: 0xc0fbab6  jal         func_3EEAD8
label_33650c:
    if (ctx->pc == 0x33650Cu) {
        ctx->pc = 0x33650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336508u;
        // 0x33650c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336510u;
        goto label_336510;
    }
    ctx->pc = 0x336508u;
    SET_GPR_U32(ctx, 31, 0x336510u);
    ctx->pc = 0x33650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336508u;
    // 0x33650c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEAD8u, 0x336508u, 0x336510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336510u;
label_336510:
    // 0x336510: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x336510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_336514:
    // 0x336514: 0x0  nop
    ctx->pc = 0x336514u;
    // NOP
label_336518:
    // 0x336518: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_33651c:
    if (ctx->pc == 0x33651Cu) {
        ctx->pc = 0x33651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336518u;
        // 0x33651c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336520u;
        goto label_336520;
    }
    ctx->pc = 0x336518u;
    {
        const bool branch_taken_0x336518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336518) {
            ctx->pc = 0x33651Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336518u;
            // 0x33651c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336508;
        }
    }
    ctx->pc = 0x336520u;
label_336520:
    // 0x336520: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x336520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_336524:
    // 0x336524: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x336524u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_336528:
    // 0x336528: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x336528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_33652c:
    // 0x33652c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x33652cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_336530:
    // 0x336530: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x336530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_336534:
    // 0x336534: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x336534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_336538:
    // 0x336538: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x336538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33653c:
    // 0x33653c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33653cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_336540:
    // 0x336540: 0x3e00008  jr          $ra
label_336544:
    if (ctx->pc == 0x336544u) {
        ctx->pc = 0x336544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336540u;
        // 0x336544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336548u;
        goto label_fallthrough_0x336540;
    }
    ctx->pc = 0x336540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336540u;
        // 0x336544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x336540:
    ctx->pc = 0x336548u;
}
