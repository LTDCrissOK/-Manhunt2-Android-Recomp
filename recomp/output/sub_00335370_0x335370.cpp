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

// Function: sub_00335370
// Address: 0x335370 - 0x335470
void sub_00335370_0x335370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335370_0x335370");
#endif

    switch (ctx->pc) {
        case 0x3353a0u: goto label_3353a0;
        case 0x3353acu: goto label_3353ac;
        case 0x3353c0u: goto label_3353c0;
        case 0x335404u: goto label_335404;
        case 0x335420u: goto label_335420;
        case 0x335428u: goto label_335428;
        case 0x33545cu: goto label_33545c;
        default: break;
    }

    ctx->pc = 0x335370u;

    // 0x335370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335374: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x335374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x335378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33537c: 0x24424470  addiu       $v0, $v0, 0x4470
    ctx->pc = 0x33537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17520));
    // 0x335380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33538c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33538cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335390: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x335390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x335394: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x335394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x335398: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x335398u;
    {
        const bool branch_taken_0x335398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335398u;
        // 0x33539c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335398) {
            ctx->pc = 0x3353C4u;
            goto label_3353c4;
        }
    }
    ctx->pc = 0x3353A0u;
label_3353a0:
    // 0x3353a0: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x3353a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3353a4: 0xc0fba90  jal         func_3EEA40
    ctx->pc = 0x3353A4u;
    SET_GPR_U32(ctx, 31, 0x3353ACu);
    ctx->pc = 0x3353A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353A4u;
    // 0x3353a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEA40u, 0x3353A4u, 0x3353ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353ACu;
label_3353ac:
    // 0x3353ac: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3353acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3353b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3353B0u;
    {
        const bool branch_taken_0x3353b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3353b0) {
            ctx->pc = 0x3353B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3353B0u;
            // 0x3353b4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3353C4u;
            goto label_3353c4;
        }
    }
    ctx->pc = 0x3353B8u;
    // 0x3353b8: 0xc0cdb7a  jal         func_336DE8
    ctx->pc = 0x3353B8u;
    SET_GPR_U32(ctx, 31, 0x3353C0u);
    ctx->pc = 0x3353BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353B8u;
    // 0x3353bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DE8u, 0x3353B8u, 0x3353C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353C0u;
label_3353c0:
    // 0x3353c0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3353c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3353c4:
    // 0x3353c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3353c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3353c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3353c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3353CCu;
    {
        const bool branch_taken_0x3353cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3353D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353CCu;
        // 0x3353d0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3353cc) {
            ctx->pc = 0x3353D8u;
            goto label_3353d8;
        }
    }
    ctx->pc = 0x3353D4u;
    // 0x3353d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3353d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3353d8:
    // 0x3353d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3353D8u;
    {
        const bool branch_taken_0x3353d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3353d8) {
            ctx->pc = 0x3353E8u;
            goto label_3353e8;
        }
    }
    ctx->pc = 0x3353E0u;
    // 0x3353e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3353e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3353e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3353e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_3353e8:
    // 0x3353e8: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3353E8u;
    {
        const bool branch_taken_0x3353e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3353ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353E8u;
        // 0x3353ec: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3353e8) {
            ctx->pc = 0x3353A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3353a0;
        }
    }
    ctx->pc = 0x3353F0u;
    // 0x3353f0: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x3353f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x3353f4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3353F4u;
    {
        const bool branch_taken_0x3353f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3353f4) {
            ctx->pc = 0x3353F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3353F4u;
            // 0x3353f8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33540Cu;
            goto label_33540c;
        }
    }
    ctx->pc = 0x3353FCu;
    // 0x3353fc: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3353FCu;
    SET_GPR_U32(ctx, 31, 0x335404u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3353FCu, 0x335404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335404u;
label_335404:
    // 0x335404: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x335404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x335408: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x335408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33540c:
    // 0x33540c: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x33540cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x335410: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x335410u;
    {
        const bool branch_taken_0x335410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335410u;
        // 0x335414: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335410) {
            ctx->pc = 0x335438u;
            goto label_335438;
        }
    }
    ctx->pc = 0x335418u;
    // 0x335418: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x335418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33541c: 0x0  nop
    ctx->pc = 0x33541cu;
    // NOP
label_335420:
    // 0x335420: 0xc0fba90  jal         func_3EEA40
    ctx->pc = 0x335420u;
    SET_GPR_U32(ctx, 31, 0x335428u);
    ctx->pc = 0x335424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335420u;
    // 0x335424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEA40u, 0x335420u, 0x335428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335428u;
label_335428:
    // 0x335428: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x335428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33542c: 0x0  nop
    ctx->pc = 0x33542cu;
    // NOP
    // 0x335430: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x335430u;
    {
        const bool branch_taken_0x335430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335430) {
            ctx->pc = 0x335434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335430u;
            // 0x335434: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335420;
        }
    }
    ctx->pc = 0x335438u;
label_335438:
    // 0x335438: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x335438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33543c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x335440: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x335440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x335444: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x335444u;
    {
        const bool branch_taken_0x335444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x335448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335444u;
        // 0x335448: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335444) {
            ctx->pc = 0x33545Cu;
            goto label_33545c;
        }
    }
    ctx->pc = 0x33544Cu;
    // 0x33544c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x33544cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x335450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x335450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335454: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x335454u;
    SET_GPR_U32(ctx, 31, 0x33545Cu);
    ctx->pc = 0x335458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335454u;
    // 0x335458: 0x24846e80  addiu       $a0, $a0, 0x6E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x335454u, 0x33545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33545Cu;
label_33545c:
    // 0x33545c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33545cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335468: 0x3e00008  jr          $ra
    ctx->pc = 0x335468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335468u;
        // 0x33546c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335470u;
}
