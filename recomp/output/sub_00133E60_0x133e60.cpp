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

// Function: sub_00133E60
// Address: 0x133e60 - 0x133ea8
void sub_00133E60_0x133e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133E60_0x133e60");
#endif

    switch (ctx->pc) {
        case 0x133e84u: goto label_133e84;
        default: break;
    }

    ctx->pc = 0x133e60u;

    // 0x133e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133e68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x133e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x133e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133e74: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x133E74u;
    {
        const bool branch_taken_0x133e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133e74) {
            ctx->pc = 0x133E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133E74u;
            // 0x133e78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133E98u;
            goto label_133e98;
        }
    }
    ctx->pc = 0x133E7Cu;
    // 0x133e7c: 0xc04b408  jal         func_12D020
    ctx->pc = 0x133E7Cu;
    SET_GPR_U32(ctx, 31, 0x133E84u);
    ctx->pc = 0x12D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D020u, 0x133E7Cu, 0x133E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E84u;
label_133e84:
    // 0x133e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133e88: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x133e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x133e8c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x133e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x133e90: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x133e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x133e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133e98:
    // 0x133e98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x133E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E9Cu;
        // 0x133ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133EA4u;
    // 0x133ea4: 0x0  nop
    ctx->pc = 0x133ea4u;
    // NOP
    ctx->pc = 0x133ea8u;
}
