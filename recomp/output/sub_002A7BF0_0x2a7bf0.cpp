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

// Function: sub_002A7BF0
// Address: 0x2a7bf0 - 0x2a7c78
void sub_002A7BF0_0x2a7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7BF0_0x2a7bf0");
#endif

    switch (ctx->pc) {
        case 0x2a7c40u: goto label_2a7c40;
        case 0x2a7c4cu: goto label_2a7c4c;
        default: break;
    }

    ctx->pc = 0x2a7bf0u;

    // 0x2a7bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a7bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a7bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a7bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a7bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a7c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a7c04: 0x26110034  addiu       $s1, $s0, 0x34
    ctx->pc = 0x2a7c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x2a7c08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a7c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a7c0c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2a7c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a7c10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a7c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a7c14: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2a7c14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a7c18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a7c1c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2a7c20: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2a7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2a7c24: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2a7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2a7c28: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2a7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2a7c2c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2a7c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2a7c30: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2a7c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2a7c34: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2a7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2a7c38: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2a7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2a7c3c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2a7c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2a7c40:
    // 0x2a7c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a7c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c44: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A7C44u;
    SET_GPR_U32(ctx, 31, 0x2A7C4Cu);
    ctx->pc = 0x2A7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7C44u;
    // 0x2a7c48: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A7C44u, 0x2A7C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C4Cu;
label_2a7c4c:
    // 0x2a7c4c: 0x0  nop
    ctx->pc = 0x2a7c4cu;
    // NOP
    // 0x2a7c50: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A7C50u;
    {
        const bool branch_taken_0x2a7c50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2A7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C50u;
        // 0x2a7c54: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c50) {
            ctx->pc = 0x2A7C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7c40;
        }
    }
    ctx->pc = 0x2A7C58u;
    // 0x2a7c58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a7c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a7c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7c64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a7c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7c68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a7c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a7c6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a7c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C70u;
        // 0x2a7c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7C78u;
}
