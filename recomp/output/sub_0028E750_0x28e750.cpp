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

// Function: sub_0028E750
// Address: 0x28e750 - 0x28e828
void sub_0028E750_0x28e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E750_0x28e750");
#endif

    switch (ctx->pc) {
        case 0x28e798u: goto label_28e798;
        case 0x28e7a4u: goto label_28e7a4;
        case 0x28e7d0u: goto label_28e7d0;
        case 0x28e7ecu: goto label_28e7ec;
        default: break;
    }

    ctx->pc = 0x28e750u;

    // 0x28e750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28e754: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28e754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28e758: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28e758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28e75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28e760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e764: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28e768: 0x24641128  addiu       $a0, $v1, 0x1128
    ctx->pc = 0x28e768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4392));
    // 0x28e76c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28e76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28e770: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28e770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28e774: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x28e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x28e778: 0x8c701128  lw          $s0, 0x1128($v1)
    ctx->pc = 0x28e778u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x4C1128u));
    // 0x28e77c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C112Cu));
    // 0x28e780: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x28e780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28e784: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28E784u;
    {
        const bool branch_taken_0x28e784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E784u;
        // 0x28e788: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e784) {
            ctx->pc = 0x28E804u;
            goto label_28e804;
        }
    }
    ctx->pc = 0x28E78Cu;
    // 0x28e78c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28e78cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e790: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x28e790u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e794: 0x0  nop
    ctx->pc = 0x28e794u;
    // NOP
label_28e798:
    // 0x28e798: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28e798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e79c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x28E79Cu;
    SET_GPR_U32(ctx, 31, 0x28E7A4u);
    ctx->pc = 0x28E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E79Cu;
    // 0x28e7a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x28E79Cu, 0x28E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7A4u;
label_28e7a4:
    // 0x28e7a4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x28E7A4u;
    {
        const bool branch_taken_0x28e7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e7a4) {
            ctx->pc = 0x28E7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E7A4u;
            // 0x28e7a8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E7F4u;
            goto label_28e7f4;
        }
    }
    ctx->pc = 0x28E7ACu;
    // 0x28e7ac: 0x26921128  addiu       $s2, $s4, 0x1128
    ctx->pc = 0x28e7acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4392));
    // 0x28e7b0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x28e7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x28e7b4: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x28e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28e7b8: 0x50a60006  beql        $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E7B8u;
    {
        const bool branch_taken_0x28e7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x28e7b8) {
            ctx->pc = 0x28E7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E7B8u;
            // 0x28e7bc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E7D4u;
            goto label_28e7d4;
        }
    }
    ctx->pc = 0x28E7C0u;
    // 0x28e7c0: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E7C0u;
    {
        const bool branch_taken_0x28e7c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x28E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7C0u;
        // 0x28e7c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7c0) {
            ctx->pc = 0x28E7D0u;
            goto label_28e7d0;
        }
    }
    ctx->pc = 0x28E7C8u;
    // 0x28e7c8: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x28E7C8u;
    SET_GPR_U32(ctx, 31, 0x28E7D0u);
    ctx->pc = 0x28E7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E7C8u;
    // 0x28e7cc: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x28E7C8u, 0x28E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7D0u;
label_28e7d0:
    // 0x28e7d0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28e7d4:
    // 0x28e7d4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x28e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x28e7d8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x28E7D8u;
    {
        const bool branch_taken_0x28e7d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7D8u;
        // 0x28e7dc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7d8) {
            ctx->pc = 0x28E804u;
            goto label_28e804;
        }
    }
    ctx->pc = 0x28E7E0u;
    // 0x28e7e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e7e4: 0xc0a3754  jal         func_28DD50
    ctx->pc = 0x28E7E4u;
    SET_GPR_U32(ctx, 31, 0x28E7ECu);
    ctx->pc = 0x28E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E7E4u;
    // 0x28e7e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DD50u, 0x28E7E4u, 0x28E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7ECu;
label_28e7ec:
    // 0x28e7ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E7ECu;
    {
        const bool branch_taken_0x28e7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7ECu;
        // 0x28e7f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7ec) {
            ctx->pc = 0x28E808u;
            goto label_28e808;
        }
    }
    ctx->pc = 0x28E7F4u;
label_28e7f4:
    // 0x28e7f4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x28e7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x28e7f8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x28e7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28e7fc: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x28E7FCu;
    {
        const bool branch_taken_0x28e7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e7fc) {
            ctx->pc = 0x28E800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E7FCu;
            // 0x28e800: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e798;
        }
    }
    ctx->pc = 0x28E804u;
label_28e804:
    // 0x28e804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28e804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e808:
    // 0x28e808: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28e808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e80c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28e80cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e810: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28e810u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28e814: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28e814u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e818: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x28e818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28e81c: 0x3e00008  jr          $ra
    ctx->pc = 0x28E81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E81Cu;
        // 0x28e820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E824u;
    // 0x28e824: 0x0  nop
    ctx->pc = 0x28e824u;
    // NOP
    ctx->pc = 0x28e828u;
}
