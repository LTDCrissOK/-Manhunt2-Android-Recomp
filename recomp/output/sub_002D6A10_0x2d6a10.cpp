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

// Function: sub_002D6A10
// Address: 0x2d6a10 - 0x2d6a70
void sub_002D6A10_0x2d6a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6A10_0x2d6a10");
#endif

    switch (ctx->pc) {
        case 0x2d6a38u: goto label_2d6a38;
        case 0x2d6a44u: goto label_2d6a44;
        default: break;
    }

    ctx->pc = 0x2d6a10u;

    // 0x2d6a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6a14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d6a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d6a18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6a1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d6a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6a24: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2d6a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d6a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d6a2c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2d6a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6a30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d6a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6a34: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2d6a34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d6a38:
    // 0x2d6a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a3c: 0xc0b5a80  jal         func_2D6A00
    ctx->pc = 0x2D6A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D6A44u);
    ctx->pc = 0x2D6A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A3Cu;
    // 0x2d6a40: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6A00u, 0x2D6A3Cu, 0x2D6A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A44u;
label_2d6a44:
    // 0x2d6a44: 0x0  nop
    ctx->pc = 0x2d6a44u;
    // NOP
    // 0x2d6a48: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6A48u;
    {
        const bool branch_taken_0x2d6a48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A48u;
        // 0x2d6a4c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6a48) {
            ctx->pc = 0x2D6A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6a38;
        }
    }
    ctx->pc = 0x2D6A50u;
    // 0x2d6a50: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d6a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6a58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6a5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d6a5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6a60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d6a60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d6a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6a68: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A68u;
        // 0x2d6a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6A70u;
}
