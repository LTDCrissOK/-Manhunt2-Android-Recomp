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

// Function: sub_002ACF18
// Address: 0x2acf18 - 0x2acf50
void sub_002ACF18_0x2acf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACF18_0x2acf18");
#endif

    switch (ctx->pc) {
        case 0x2acf3cu: goto label_2acf3c;
        default: break;
    }

    ctx->pc = 0x2acf18u;

    // 0x2acf18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2acf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2acf1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2acf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2acf20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2acf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2acf24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2acf24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf28: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2acf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2acf2c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACF2Cu;
    {
        const bool branch_taken_0x2acf2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acf2c) {
            ctx->pc = 0x2ACF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACF2Cu;
            // 0x2acf30: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACF40u;
            goto label_2acf40;
        }
    }
    ctx->pc = 0x2ACF34u;
    // 0x2acf34: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2ACF34u;
    SET_GPR_U32(ctx, 31, 0x2ACF3Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2ACF34u, 0x2ACF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF3Cu;
label_2acf3c:
    // 0x2acf3c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2acf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2acf40:
    // 0x2acf40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2acf40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acf44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2acf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2acf48: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF48u;
        // 0x2acf4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACF50u;
}
