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

// Function: sub_002D2E38
// Address: 0x2d2e38 - 0x2d2e80
void sub_002D2E38_0x2d2e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2E38_0x2d2e38");
#endif

    switch (ctx->pc) {
        case 0x2d2e64u: goto label_2d2e64;
        default: break;
    }

    ctx->pc = 0x2d2e38u;

    // 0x2d2e38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d2e3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d2e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d2e40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d2e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d2e44: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2E44u;
    {
        const bool branch_taken_0x2d2e44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E44u;
        // 0x2d2e48: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e44) {
            ctx->pc = 0x2D2E70u;
            goto label_2d2e70;
        }
    }
    ctx->pc = 0x2D2E4Cu;
    // 0x2d2e4c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2E4Cu;
    {
        const bool branch_taken_0x2d2e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E4Cu;
        // 0x2d2e50: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e4c) {
            ctx->pc = 0x2D2E70u;
            goto label_2d2e70;
        }
    }
    ctx->pc = 0x2D2E54u;
    // 0x2d2e54: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2d2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d2e58: 0x2610b088  addiu       $s0, $s0, -0x4F78
    ctx->pc = 0x2d2e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946952));
    // 0x2d2e5c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D2E5Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E64u);
    ctx->pc = 0x2D2E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E5Cu;
    // 0x2d2e60: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D2E5Cu, 0x2D2E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E64u;
label_2d2e64:
    // 0x2d2e64: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d2e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d2e68: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x2d2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x2d2e6c: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x2d2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
label_2d2e70:
    // 0x2d2e70: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d2e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2e74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d2e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d2e78: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E78u;
        // 0x2d2e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2E80u;
}
