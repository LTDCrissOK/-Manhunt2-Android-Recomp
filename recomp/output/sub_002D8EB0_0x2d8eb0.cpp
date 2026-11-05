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

// Function: sub_002D8EB0
// Address: 0x2d8eb0 - 0x2d8f50
void sub_002D8EB0_0x2d8eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8EB0_0x2d8eb0");
#endif

    switch (ctx->pc) {
        case 0x2d8ee8u: goto label_2d8ee8;
        case 0x2d8ef4u: goto label_2d8ef4;
        case 0x2d8f18u: goto label_2d8f18;
        default: break;
    }

    ctx->pc = 0x2d8eb0u;

    // 0x2d8eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d8eb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d8eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d8eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d8eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d8ebc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d8ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ec0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d8ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d8ec4: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x2d8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2d8ec8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d8ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d8ecc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8ed0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x2d8ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2d8ed4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d8ed8: 0x12220016  beq         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D8ED8u;
    {
        const bool branch_taken_0x2d8ed8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8ED8u;
        // 0x2d8edc: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ed8) {
            ctx->pc = 0x2D8F34u;
            goto label_2d8f34;
        }
    }
    ctx->pc = 0x2D8EE0u;
    // 0x2d8ee0: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x2d8ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2d8ee4: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2d8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2d8ee8:
    // 0x2d8ee8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d8ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8eec: 0xc0f6296  jal         func_3D8A58
    ctx->pc = 0x2D8EECu;
    SET_GPR_U32(ctx, 31, 0x2D8EF4u);
    ctx->pc = 0x2D8EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8EECu;
    // 0x2d8ef0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8A58u, 0x2D8EECu, 0x2D8EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8EF4u;
label_2d8ef4:
    // 0x2d8ef4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2d8ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d8ef8: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8EF8u;
    {
        const bool branch_taken_0x2d8ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2D8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EF8u;
        // 0x2d8efc: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ef8) {
            ctx->pc = 0x2D8F24u;
            goto label_2d8f24;
        }
    }
    ctx->pc = 0x2D8F00u;
    // 0x2d8f00: 0x50a60006  beql        $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8F00u;
    {
        const bool branch_taken_0x2d8f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2d8f00) {
            ctx->pc = 0x2D8F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8F00u;
            // 0x2d8f04: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8F1Cu;
            goto label_2d8f1c;
        }
    }
    ctx->pc = 0x2D8F08u;
    // 0x2d8f08: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8F08u;
    {
        const bool branch_taken_0x2d8f08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F08u;
        // 0x2d8f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f08) {
            ctx->pc = 0x2D8F18u;
            goto label_2d8f18;
        }
    }
    ctx->pc = 0x2D8F10u;
    // 0x2d8f10: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D8F10u;
    SET_GPR_U32(ctx, 31, 0x2D8F18u);
    ctx->pc = 0x2D8F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F10u;
    // 0x2d8f14: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D8F10u, 0x2D8F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F18u;
label_2d8f18:
    // 0x2d8f18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8f1c:
    // 0x2d8f1c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2d8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2d8f20: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d8f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2d8f24:
    // 0x2d8f24: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d8f28: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d8f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2d8f2c: 0x5622ffee  bnel        $s1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D8F2Cu;
    {
        const bool branch_taken_0x2d8f2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8f2c) {
            ctx->pc = 0x2D8F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8F2Cu;
            // 0x2d8f30: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8ee8;
        }
    }
    ctx->pc = 0x2D8F34u;
label_2d8f34:
    // 0x2d8f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d8f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d8f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d8f3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d8f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8f40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d8f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d8f44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8f48: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F48u;
        // 0x2d8f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8F50u;
}
