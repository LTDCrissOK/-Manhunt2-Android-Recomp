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

// Function: sub_00207520
// Address: 0x207520 - 0x207828
void sub_00207520_0x207520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207520_0x207520");
#endif

    switch (ctx->pc) {
        case 0x207560u: goto label_207560;
        case 0x20756cu: goto label_20756c;
        case 0x207584u: goto label_207584;
        case 0x2075c0u: goto label_2075c0;
        case 0x2075d0u: goto label_2075d0;
        case 0x2075f0u: goto label_2075f0;
        case 0x207600u: goto label_207600;
        case 0x207620u: goto label_207620;
        case 0x207660u: goto label_207660;
        case 0x207678u: goto label_207678;
        case 0x2076b0u: goto label_2076b0;
        case 0x207718u: goto label_207718;
        case 0x207744u: goto label_207744;
        case 0x207768u: goto label_207768;
        case 0x20777cu: goto label_20777c;
        default: break;
    }

    ctx->pc = 0x207520u;

    // 0x207520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x207520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x207524: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x207524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x207528: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x207528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20752c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20752cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207530: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x207530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x207534: 0x26b0001c  addiu       $s0, $s5, 0x1C
    ctx->pc = 0x207534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x207538: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x207538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20753c: 0x24110017  addiu       $s1, $zero, 0x17
    ctx->pc = 0x20753cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x207540: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x207540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x207544: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x207544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207548: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x207548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20754c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x20754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x207550: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x207550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x207554: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x207554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x207558: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x207558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20755c: 0x0  nop
    ctx->pc = 0x20755cu;
    // NOP
label_207560:
    // 0x207560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207564: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x207564u;
    SET_GPR_U32(ctx, 31, 0x20756Cu);
    ctx->pc = 0x207568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207564u;
    // 0x207568: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x207564u, 0x20756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20756Cu;
label_20756c:
    // 0x20756c: 0x0  nop
    ctx->pc = 0x20756cu;
    // NOP
    // 0x207570: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x207570u;
    {
        const bool branch_taken_0x207570 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x207574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207570u;
        // 0x207574: 0x261000f8  addiu       $s0, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207570) {
            ctx->pc = 0x207560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207560;
        }
    }
    ctx->pc = 0x207578u;
    // 0x207578: 0x26a433b0  addiu       $a0, $s5, 0x33B0
    ctx->pc = 0x207578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 13232));
    // 0x20757c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20757Cu;
    SET_GPR_U32(ctx, 31, 0x207584u);
    ctx->pc = 0x207580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20757Cu;
    // 0x207580: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20757Cu, 0x207584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207584u;
label_207584:
    // 0x207584: 0x26b20018  addiu       $s2, $s5, 0x18
    ctx->pc = 0x207584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x207588: 0x26a23343  addiu       $v0, $s5, 0x3343
    ctx->pc = 0x207588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 13123));
    // 0x20758c: 0x26a3338c  addiu       $v1, $s5, 0x338C
    ctx->pc = 0x20758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 13196));
    // 0x207590: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x207590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x207594: 0x26b41760  addiu       $s4, $s5, 0x1760
    ctx->pc = 0x207594u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 5984));
    // 0x207598: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x207598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x20759c: 0x26a23384  addiu       $v0, $s5, 0x3384
    ctx->pc = 0x20759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 13188));
    // 0x2075a0: 0x26a33380  addiu       $v1, $s5, 0x3380
    ctx->pc = 0x2075a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 13184));
    // 0x2075a4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2075a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2075a8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2075a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2075ac: 0x26b32d80  addiu       $s3, $s5, 0x2D80
    ctx->pc = 0x2075acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 11648));
    // 0x2075b0: 0x26b73308  addiu       $s7, $s5, 0x3308
    ctx->pc = 0x2075b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 13064));
    // 0x2075b4: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x2075b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2075b8: 0x26b00008  addiu       $s0, $s5, 0x8
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2075bc: 0x0  nop
    ctx->pc = 0x2075bcu;
    // NOP
label_2075c0:
    // 0x2075c0: 0x1636000d  bne         $s1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x2075C0u;
    {
        const bool branch_taken_0x2075c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        if (branch_taken_0x2075c0) {
            ctx->pc = 0x2075F8u;
            goto label_2075f8;
        }
    }
    ctx->pc = 0x2075C8u;
    // 0x2075c8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2075C8u;
    SET_GPR_U32(ctx, 31, 0x2075D0u);
    ctx->pc = 0x2075CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2075C8u;
    // 0x2075cc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2075C8u, 0x2075D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2075D0u;
label_2075d0:
    // 0x2075d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2075d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2075d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2075d8: 0x24065dc0  addiu       $a2, $zero, 0x5DC0
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
    // 0x2075dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2075dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2075e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2075e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2075e8: 0xc081368  jal         func_204DA0
    ctx->pc = 0x2075E8u;
    SET_GPR_U32(ctx, 31, 0x2075F0u);
    ctx->pc = 0x2075ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2075E8u;
    // 0x2075ec: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204DA0u, 0x2075E8u, 0x2075F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2075F0u;
label_2075f0:
    // 0x2075f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2075F0u;
    {
        const bool branch_taken_0x2075f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2075F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075F0u;
        // 0x2075f4: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075f0) {
            ctx->pc = 0x207624u;
            goto label_207624;
        }
    }
    ctx->pc = 0x2075F8u;
label_2075f8:
    // 0x2075f8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2075F8u;
    SET_GPR_U32(ctx, 31, 0x207600u);
    ctx->pc = 0x2075FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2075F8u;
    // 0x2075fc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2075F8u, 0x207600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207600u;
label_207600:
    // 0x207600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207608: 0x24065dc0  addiu       $a2, $zero, 0x5DC0
    ctx->pc = 0x207608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
    // 0x20760c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20760cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x207610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207614: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x207614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207618: 0xc081368  jal         func_204DA0
    ctx->pc = 0x207618u;
    SET_GPR_U32(ctx, 31, 0x207620u);
    ctx->pc = 0x20761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207618u;
    // 0x20761c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204DA0u, 0x207618u, 0x207620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207620u;
label_207620:
    // 0x207620: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x207620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_207624:
    // 0x207624: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x207624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x207628: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x207628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x20762c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20762cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x207630: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x207630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x207634: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x207634u;
    {
        const bool branch_taken_0x207634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207634u;
        // 0x207638: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207634) {
            ctx->pc = 0x2075C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2075c0;
        }
    }
    ctx->pc = 0x20763Cu;
    // 0x20763c: 0xaea0175c  sw          $zero, 0x175C($s5)
    ctx->pc = 0x20763cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 5980), GPR_U32(ctx, 0));
    // 0x207640: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x207640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207644: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x207644u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20764c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20764cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207650: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x207650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x207654: 0x240800ec  addiu       $t0, $zero, 0xEC
    ctx->pc = 0x207654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x207658: 0xa81018  mult        $v0, $a1, $t0
    ctx->pc = 0x207658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20765c: 0x0  nop
    ctx->pc = 0x20765cu;
    // NOP
label_207660:
    // 0x207660: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x207660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x207664: 0xa91018  mult        $v0, $a1, $t1
    ctx->pc = 0x207664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x207668: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x207668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20766c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x20766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x207670: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x207670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x207674: 0x0  nop
    ctx->pc = 0x207674u;
    // NOP
label_207678:
    // 0x207678: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x207678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x20767c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x20767cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x207680: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x207680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x207684: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x207684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x207688: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x207688u;
    {
        const bool branch_taken_0x207688 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x20768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207688u;
        // 0x20768c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207688) {
            ctx->pc = 0x207678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207678;
        }
    }
    ctx->pc = 0x207690u;
    // 0x207690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207694: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x207694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x207698: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x207698u;
    {
        const bool branch_taken_0x207698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207698u;
        // 0x20769c: 0xa81018  mult        $v0, $a1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207698) {
            ctx->pc = 0x207660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207660;
        }
    }
    ctx->pc = 0x2076A0u;
    // 0x2076a0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2076a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2076a4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2076a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2076a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076ac: 0x0  nop
    ctx->pc = 0x2076acu;
    // NOP
label_2076b0:
    // 0x2076b0: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2076b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2076b4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2076b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2076b8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2076b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2076bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2076bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2076c0: 0x2882003b  slti        $v0, $a0, 0x3B
    ctx->pc = 0x2076c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)59) ? 1 : 0);
    // 0x2076c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2076C4u;
    {
        const bool branch_taken_0x2076c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2076C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076C4u;
        // 0x2076c8: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076c4) {
            ctx->pc = 0x2076B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2076b0;
        }
    }
    ctx->pc = 0x2076CCu;
    // 0x2076cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2076ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2076d0: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2076d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2076d4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2076d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2076d8: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2076d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2076dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2076dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2076e0: 0xaea23390  sw          $v0, 0x3390($s5)
    ctx->pc = 0x2076e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13200), GPR_U32(ctx, 2));
    // 0x2076e4: 0xaea63394  sw          $a2, 0x3394($s5)
    ctx->pc = 0x2076e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13204), GPR_U32(ctx, 6));
    // 0x2076e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2076e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076ec: 0xaea533a0  sw          $a1, 0x33A0($s5)
    ctx->pc = 0x2076ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13216), GPR_U32(ctx, 5));
    // 0x2076f0: 0xaea433a4  sw          $a0, 0x33A4($s5)
    ctx->pc = 0x2076f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13220), GPR_U32(ctx, 4));
    // 0x2076f4: 0xa2a333a8  sb          $v1, 0x33A8($s5)
    ctx->pc = 0x2076f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13224), (uint8_t)GPR_U32(ctx, 3));
    // 0x2076f8: 0xa2a33330  sb          $v1, 0x3330($s5)
    ctx->pc = 0x2076f8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13104), (uint8_t)GPR_U32(ctx, 3));
    // 0x2076fc: 0xa2a3332d  sb          $v1, 0x332D($s5)
    ctx->pc = 0x2076fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13101), (uint8_t)GPR_U32(ctx, 3));
    // 0x207700: 0xa2a33329  sb          $v1, 0x3329($s5)
    ctx->pc = 0x207700u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13097), (uint8_t)GPR_U32(ctx, 3));
    // 0x207704: 0xa2a3332b  sb          $v1, 0x332B($s5)
    ctx->pc = 0x207704u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13099), (uint8_t)GPR_U32(ctx, 3));
    // 0x207708: 0xaea53380  sw          $a1, 0x3380($s5)
    ctx->pc = 0x207708u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13184), GPR_U32(ctx, 5));
    // 0x20770c: 0xaea63384  sw          $a2, 0x3384($s5)
    ctx->pc = 0x20770cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13188), GPR_U32(ctx, 6));
    // 0x207710: 0xa2a03388  sb          $zero, 0x3388($s5)
    ctx->pc = 0x207710u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13192), (uint8_t)GPR_U32(ctx, 0));
    // 0x207714: 0xa2a03398  sb          $zero, 0x3398($s5)
    ctx->pc = 0x207714u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13208), (uint8_t)GPR_U32(ctx, 0));
label_207718:
    // 0x207718: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x20771c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x20771cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x207720: 0x261e0001  addiu       $fp, $s0, 0x1
    ctx->pc = 0x207720u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x207724: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x207724u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207728: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x207728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20772c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20772cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207730: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x207730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207734: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x207734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207738: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x207738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20773c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x20773Cu;
    SET_GPR_U32(ctx, 31, 0x207744u);
    ctx->pc = 0x207740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20773Cu;
    // 0x207740: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x20773Cu, 0x207744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207744u;
label_207744:
    // 0x207744: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x207744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x207748: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20774c: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20774Cu;
    {
        const bool branch_taken_0x20774c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x207750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20774Cu;
        // 0x207750: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20774c) {
            ctx->pc = 0x2077ACu;
            goto label_2077ac;
        }
    }
    ctx->pc = 0x207754u;
    // 0x207754: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x207754u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x207758: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x207758u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20775c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x20775cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207760: 0x3673ffc0  ori         $s3, $s3, 0xFFC0
    ctx->pc = 0x207760u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65472);
    // 0x207764: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x207764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_207768:
    // 0x207768: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x207768u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x20776c: 0x2404283f  addiu       $a0, $zero, 0x283F
    ctx->pc = 0x20776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10303));
    // 0x207770: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x207774: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x207774u;
    SET_GPR_U32(ctx, 31, 0x20777Cu);
    ctx->pc = 0x207778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207774u;
    // 0x207778: 0x2118821  addu        $s1, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x207774u, 0x20777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20777Cu;
label_20777c:
    // 0x20777c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20777cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x207780: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x207780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x207784: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x207784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x207788: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20778c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x20778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x207790: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x207790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x207794: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x207794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x207798: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x207798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x20779c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x20779cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2077a0: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2077A0u;
    {
        const bool branch_taken_0x2077a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2077a0) {
            ctx->pc = 0x2077A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2077A0u;
            // 0x2077a4: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207768;
        }
    }
    ctx->pc = 0x2077A8u;
    // 0x2077a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2077a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2077ac:
    // 0x2077ac: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x2077acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077b0: 0x2a040003  slti        $a0, $s0, 0x3
    ctx->pc = 0x2077b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2077b4: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2077b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2077b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2077b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2077bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2077bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2077c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2077c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2077c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2077c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2077c8: 0x1480ffd3  bnez        $a0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2077C8u;
    {
        const bool branch_taken_0x2077c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2077CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077C8u;
        // 0x2077cc: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077c8) {
            ctx->pc = 0x207718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207718;
        }
    }
    ctx->pc = 0x2077D0u;
    // 0x2077d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2077d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2077d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2077d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2077d8: 0xaea233bc  sw          $v0, 0x33BC($s5)
    ctx->pc = 0x2077d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13244), GPR_U32(ctx, 2));
    // 0x2077dc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2077dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077e0: 0xaea333c0  sw          $v1, 0x33C0($s5)
    ctx->pc = 0x2077e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13248), GPR_U32(ctx, 3));
    // 0x2077e4: 0xaea033b8  sw          $zero, 0x33B8($s5)
    ctx->pc = 0x2077e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13240), GPR_U32(ctx, 0));
    // 0x2077e8: 0xaea033c4  sw          $zero, 0x33C4($s5)
    ctx->pc = 0x2077e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13252), GPR_U32(ctx, 0));
    // 0x2077ec: 0xaea033c8  sw          $zero, 0x33C8($s5)
    ctx->pc = 0x2077ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13256), GPR_U32(ctx, 0));
    // 0x2077f0: 0xaea033cc  sw          $zero, 0x33CC($s5)
    ctx->pc = 0x2077f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13260), GPR_U32(ctx, 0));
    // 0x2077f4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2077f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x2077f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2077f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2077fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2077fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207800: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x207800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207804: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x207804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x207808: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x207808u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20780c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20780cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x207810: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x207810u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207814: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x207814u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x207818: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x207818u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20781c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20781cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x207820: 0x3e00008  jr          $ra
    ctx->pc = 0x207820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207820u;
        // 0x207824: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207828u;
}
