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

// Function: sub_0029D750
// Address: 0x29d750 - 0x29d888
void sub_0029D750_0x29d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D750_0x29d750");
#endif

    switch (ctx->pc) {
        case 0x29d78cu: goto label_29d78c;
        case 0x29d7a4u: goto label_29d7a4;
        case 0x29d7acu: goto label_29d7ac;
        case 0x29d7b0u: goto label_29d7b0;
        case 0x29d7bcu: goto label_29d7bc;
        case 0x29d7e0u: goto label_29d7e0;
        case 0x29d820u: goto label_29d820;
        case 0x29d830u: goto label_29d830;
        default: break;
    }

    ctx->pc = 0x29d750u;

    // 0x29d750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29d754: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x29d754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x29d758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d75c: 0x24423490  addiu       $v0, $v0, 0x3490
    ctx->pc = 0x29d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
    // 0x29d760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29d768: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29d768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29d76c: 0x26040214  addiu       $a0, $s0, 0x214
    ctx->pc = 0x29d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 532));
    // 0x29d770: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29d770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29d774: 0x26110240  addiu       $s1, $s0, 0x240
    ctx->pc = 0x29d774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x29d778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29d77c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x29d77cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d780: 0xae020278  sw          $v0, 0x278($s0)
    ctx->pc = 0x29d780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
    // 0x29d784: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29D784u;
    SET_GPR_U32(ctx, 31, 0x29D78Cu);
    ctx->pc = 0x29D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D784u;
    // 0x29d788: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29D784u, 0x29D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D78Cu;
label_29d78c:
    // 0x29d78c: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x29d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x29d790: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x29d790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x29d794: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x29d794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x29d798: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x29d798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x29d79c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29D79Cu;
    SET_GPR_U32(ctx, 31, 0x29D7A4u);
    ctx->pc = 0x29D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D79Cu;
    // 0x29d7a0: 0xae00022c  sw          $zero, 0x22C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29D79Cu, 0x29D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7A4u;
label_29d7a4:
    // 0x29d7a4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29D7A4u;
    SET_GPR_U32(ctx, 31, 0x29D7ACu);
    ctx->pc = 0x29D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7A4u;
    // 0x29d7a8: 0x26040238  addiu       $a0, $s0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29D7A4u, 0x29D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7ACu;
label_29d7ac:
    // 0x29d7ac: 0x0  nop
    ctx->pc = 0x29d7acu;
    // NOP
label_29d7b0:
    // 0x29d7b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7b4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29D7B4u;
    SET_GPR_U32(ctx, 31, 0x29D7BCu);
    ctx->pc = 0x29D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7B4u;
    // 0x29d7b8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29D7B4u, 0x29D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7BCu;
label_29d7bc:
    // 0x29d7bc: 0x0  nop
    ctx->pc = 0x29d7bcu;
    // NOP
    // 0x29d7c0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29D7C0u;
    {
        const bool branch_taken_0x29d7c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x29D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7C0u;
        // 0x29d7c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7c0) {
            ctx->pc = 0x29D7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d7b0;
        }
    }
    ctx->pc = 0x29D7C8u;
    // 0x29d7c8: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x29d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x29d7cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29d7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29d7d0: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x29d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x29d7d4: 0x24a5c3a8  addiu       $a1, $a1, -0x3C58
    ctx->pc = 0x29d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951848));
    // 0x29d7d8: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x29D7D8u;
    SET_GPR_U32(ctx, 31, 0x29D7E0u);
    ctx->pc = 0x29D7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7D8u;
    // 0x29d7dc: 0x26040214  addiu       $a0, $s0, 0x214 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x29D7D8u, 0x29D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7E0u;
label_29d7e0:
    // 0x29d7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d7e4: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x29d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x29d7e8: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x29d7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x29d7ec: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x29d7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29d7f0: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x29d7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x29d7f4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x29d7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29d7f8: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x29d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x29d7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d800: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x29d800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
    // 0x29d804: 0xa2000210  sb          $zero, 0x210($s0)
    ctx->pc = 0x29d804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d808: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x29d808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d80c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29d810: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x29d810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x29d814: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x29d814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x29d818: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x29d818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29d81c: 0x0  nop
    ctx->pc = 0x29d81cu;
    // NOP
label_29d820:
    // 0x29d820: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29d820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d824: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29d824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29d828: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x29d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29d82c: 0x0  nop
    ctx->pc = 0x29d82cu;
    // NOP
label_29d830:
    // 0x29d830: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29d830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x29d834: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29d834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29d838: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x29d838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29d83c: 0x0  nop
    ctx->pc = 0x29d83cu;
    // NOP
    // 0x29d840: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29D840u;
    {
        const bool branch_taken_0x29d840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D840u;
        // 0x29d844: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d840) {
            ctx->pc = 0x29D830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d830;
        }
    }
    ctx->pc = 0x29D848u;
    // 0x29d848: 0x2ca20019  sltiu       $v0, $a1, 0x19
    ctx->pc = 0x29d848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29d84c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29D84Cu;
    {
        const bool branch_taken_0x29d84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D84Cu;
        // 0x29d850: 0xa61018  mult        $v0, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d84c) {
            ctx->pc = 0x29D820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d820;
        }
    }
    ctx->pc = 0x29D854u;
    // 0x29d854: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29d854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29d858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d85c: 0xae030270  sw          $v1, 0x270($s0)
    ctx->pc = 0x29d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
    // 0x29d860: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x29d860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x29d864: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x29d864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x29d868: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x29d868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x29d86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29d870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29d874: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29d874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d878: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29d878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29d87c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d880: 0x3e00008  jr          $ra
    ctx->pc = 0x29D880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D880u;
        // 0x29d884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D888u;
}
