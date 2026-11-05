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

// Function: sub_00244510
// Address: 0x244510 - 0x2446b0
void sub_00244510_0x244510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244510_0x244510");
#endif

    switch (ctx->pc) {
        case 0x244534u: goto label_244534;
        case 0x244548u: goto label_244548;
        case 0x244558u: goto label_244558;
        case 0x2445c8u: goto label_2445c8;
        case 0x244610u: goto label_244610;
        case 0x244620u: goto label_244620;
        case 0x24462cu: goto label_24462c;
        case 0x244664u: goto label_244664;
        case 0x244674u: goto label_244674;
        case 0x24468cu: goto label_24468c;
        default: break;
    }

    ctx->pc = 0x244510u;

    // 0x244510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x244510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x244514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x244514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x244518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x244518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24451c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x244520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x244524: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x244524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x244528: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x244528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24452c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x24452Cu;
    SET_GPR_U32(ctx, 31, 0x244534u);
    ctx->pc = 0x244530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24452Cu;
    // 0x244530: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x24452Cu, 0x244534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244534u;
label_244534:
    // 0x244534: 0x8c500274  lw          $s0, 0x274($v0)
    ctx->pc = 0x244534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x244538: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x244538u;
    {
        const bool branch_taken_0x244538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244538u;
        // 0x24453c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244538) {
            ctx->pc = 0x24468Cu;
            goto label_24468c;
        }
    }
    ctx->pc = 0x244540u;
    // 0x244540: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x244540u;
    SET_GPR_U32(ctx, 31, 0x244548u);
    ctx->pc = 0x244544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244540u;
    // 0x244544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x244540u, 0x244548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244548u;
label_244548:
    // 0x244548: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x244548u;
    {
        const bool branch_taken_0x244548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244548) {
            ctx->pc = 0x24454Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244548u;
            // 0x24454c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244564u;
            goto label_244564;
        }
    }
    ctx->pc = 0x244550u;
    // 0x244550: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x244550u;
    SET_GPR_U32(ctx, 31, 0x244558u);
    ctx->pc = 0x244554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244550u;
    // 0x244554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x244550u, 0x244558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244558u;
label_244558:
    // 0x244558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24455c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x24455Cu;
    {
        const bool branch_taken_0x24455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24455c) {
            ctx->pc = 0x244560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24455Cu;
            // 0x244560: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244564u;
            goto label_244564;
        }
    }
    ctx->pc = 0x244564u;
label_244564:
    // 0x244564: 0x12400049  beqz        $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x244564u;
    {
        const bool branch_taken_0x244564 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x244568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244564u;
        // 0x244568: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244564) {
            ctx->pc = 0x24468Cu;
            goto label_24468c;
        }
    }
    ctx->pc = 0x24456Cu;
    // 0x24456c: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x24456cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x244570: 0x8e320334  lw          $s2, 0x334($s1)
    ctx->pc = 0x244570u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x244574: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x244574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x244578: 0x8e450150  lw          $a1, 0x150($s2)
    ctx->pc = 0x244578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x24457c: 0xc474001c  lwc1        $f20, 0x1C($v1)
    ctx->pc = 0x24457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244580: 0x10a4002a  beq         $a1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x244580u;
    {
        const bool branch_taken_0x244580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x244584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244580u;
        // 0x244584: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244580) {
            ctx->pc = 0x24462Cu;
            goto label_24462c;
        }
    }
    ctx->pc = 0x244588u;
    // 0x244588: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x244588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x24458c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24458cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x244590: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244594: 0x0  nop
    ctx->pc = 0x244594u;
    // NOP
    // 0x244598: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x244598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24459c: 0x0  nop
    ctx->pc = 0x24459cu;
    // NOP
    // 0x2445a0: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2445A0u;
    {
        const bool branch_taken_0x2445a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2445A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445A0u;
        // 0x2445a4: 0x24a2fffa  addiu       $v0, $a1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445a0) {
            ctx->pc = 0x24462Cu;
            goto label_24462c;
        }
    }
    ctx->pc = 0x2445A8u;
    // 0x2445a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2445a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2445ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2445ACu;
    {
        const bool branch_taken_0x2445ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2445B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445ACu;
        // 0x2445b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445ac) {
            ctx->pc = 0x2445E8u;
            goto label_2445e8;
        }
    }
    ctx->pc = 0x2445B4u;
    // 0x2445b4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2445b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2445b8: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2445B8u;
    {
        const bool branch_taken_0x2445b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2445b8) {
            ctx->pc = 0x2445BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2445B8u;
            // 0x2445bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2445ECu;
            goto label_2445ec;
        }
    }
    ctx->pc = 0x2445C0u;
    // 0x2445c0: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2445C0u;
    SET_GPR_U32(ctx, 31, 0x2445C8u);
    ctx->pc = 0x2445C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2445C0u;
    // 0x2445c4: 0x8e440148  lw          $a0, 0x148($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2445C0u, 0x2445C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2445C8u;
label_2445c8:
    // 0x2445c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2445C8u;
    {
        const bool branch_taken_0x2445c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2445c8) {
            ctx->pc = 0x2445CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2445C8u;
            // 0x2445cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2445ECu;
            goto label_2445ec;
        }
    }
    ctx->pc = 0x2445D0u;
    // 0x2445d0: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x2445d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x2445d4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2445d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2445d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2445D8u;
    {
        const bool branch_taken_0x2445d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2445DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445D8u;
        // 0x2445dc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445d8) {
            ctx->pc = 0x2445E8u;
            goto label_2445e8;
        }
    }
    ctx->pc = 0x2445E0u;
    // 0x2445e0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2445E0u;
    {
        const bool branch_taken_0x2445e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2445e0) {
            ctx->pc = 0x2445ECu;
            goto label_2445ec;
        }
    }
    ctx->pc = 0x2445E8u;
label_2445e8:
    // 0x2445e8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2445e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2445ec:
    // 0x2445ec: 0x56000010  bnel        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2445ECu;
    {
        const bool branch_taken_0x2445ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2445ec) {
            ctx->pc = 0x2445F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2445ECu;
            // 0x2445f0: 0x8e24036c  lw          $a0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244630u;
            goto label_244630;
        }
    }
    ctx->pc = 0x2445F4u;
    // 0x2445f4: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x2445f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x2445f8: 0x240400a2  addiu       $a0, $zero, 0xA2
    ctx->pc = 0x2445f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x2445fc: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2445fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x244600: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x244600u;
    {
        const bool branch_taken_0x244600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x244604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244600u;
        // 0x244604: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244600) {
            ctx->pc = 0x244618u;
            goto label_244618;
        }
    }
    ctx->pc = 0x244608u;
    // 0x244608: 0xc069a58  jal         func_1A6960
    ctx->pc = 0x244608u;
    SET_GPR_U32(ctx, 31, 0x244610u);
    ctx->pc = 0x24460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244608u;
    // 0x24460c: 0x240504e5  addiu       $a1, $zero, 0x4E5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1253));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6960u, 0x244608u, 0x244610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244610u;
label_244610:
    // 0x244610: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x244610u;
    {
        const bool branch_taken_0x244610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244610u;
        // 0x244614: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244610) {
            ctx->pc = 0x244624u;
            goto label_244624;
        }
    }
    ctx->pc = 0x244618u;
label_244618:
    // 0x244618: 0xc069a58  jal         func_1A6960
    ctx->pc = 0x244618u;
    SET_GPR_U32(ctx, 31, 0x244620u);
    ctx->pc = 0x24461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244618u;
    // 0x24461c: 0x240504e6  addiu       $a1, $zero, 0x4E6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6960u, 0x244618u, 0x244620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244620u;
label_244620:
    // 0x244620: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x244620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_244624:
    // 0x244624: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x244624u;
    SET_GPR_U32(ctx, 31, 0x24462Cu);
    ctx->pc = 0x244628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244624u;
    // 0x244628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x244624u, 0x24462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24462Cu;
label_24462c:
    // 0x24462c: 0x8e24036c  lw          $a0, 0x36C($s1)
    ctx->pc = 0x24462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_244630:
    // 0x244630: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x244630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x244634: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x244634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x244638: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x244638u;
    {
        const bool branch_taken_0x244638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244638u;
        // 0x24463c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244638) {
            ctx->pc = 0x244690u;
            goto label_244690;
        }
    }
    ctx->pc = 0x244640u;
    // 0x244640: 0xc66000b0  lwc1        $f0, 0xB0($s3)
    ctx->pc = 0x244640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244644: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x244644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244648: 0x0  nop
    ctx->pc = 0x244648u;
    // NOP
    // 0x24464c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x24464Cu;
    {
        const bool branch_taken_0x24464c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24464Cu;
        // 0x244650: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24464c) {
            ctx->pc = 0x24467Cu;
            goto label_24467c;
        }
    }
    ctx->pc = 0x244654u;
    // 0x244654: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x244654u;
    {
        const bool branch_taken_0x244654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244654) {
            ctx->pc = 0x244658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244654u;
            // 0x244658: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244694u;
            goto label_244694;
        }
    }
    ctx->pc = 0x24465Cu;
    // 0x24465c: 0xc08f26e  jal         func_23C9B8
    ctx->pc = 0x24465Cu;
    SET_GPR_U32(ctx, 31, 0x244664u);
    ctx->pc = 0x244660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24465Cu;
    // 0x244660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C9B8u, 0x24465Cu, 0x244664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244664u;
label_244664:
    // 0x244664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244668: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24466c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x24466Cu;
    SET_GPR_U32(ctx, 31, 0x244674u);
    ctx->pc = 0x244670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24466Cu;
    // 0x244670: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x24466Cu, 0x244674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244674u;
label_244674:
    // 0x244674: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x244674u;
    {
        const bool branch_taken_0x244674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244674u;
        // 0x244678: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244674) {
            ctx->pc = 0x244690u;
            goto label_244690;
        }
    }
    ctx->pc = 0x24467Cu;
label_24467c:
    // 0x24467c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24467cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244680: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244684: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x244684u;
    SET_GPR_U32(ctx, 31, 0x24468Cu);
    ctx->pc = 0x244688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244684u;
    // 0x244688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244684u, 0x24468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24468Cu;
label_24468c:
    // 0x24468c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24468cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244690:
    // 0x244690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x244690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_244694:
    // 0x244694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x244694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244698: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x244698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24469c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24469cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2446a0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2446a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2446a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2446A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2446A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446A4u;
        // 0x2446a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2446A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2446ACu;
    // 0x2446ac: 0x0  nop
    ctx->pc = 0x2446acu;
    // NOP
    ctx->pc = 0x2446b0u;
}
