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

// Function: sub_00326B08
// Address: 0x326b08 - 0x326b40
void sub_00326B08_0x326b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326B08_0x326b08");
#endif

    switch (ctx->pc) {
        case 0x326b2cu: goto label_326b2c;
        default: break;
    }

    ctx->pc = 0x326b08u;

    // 0x326b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x326b10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x326b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x326b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326b18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x326b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x326b1c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x326B1Cu;
    {
        const bool branch_taken_0x326b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x326b1c) {
            ctx->pc = 0x326B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326B1Cu;
            // 0x326b20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326B34u;
            goto label_326b34;
        }
    }
    ctx->pc = 0x326B24u;
    // 0x326b24: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x326B24u;
    SET_GPR_U32(ctx, 31, 0x326B2Cu);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x326B24u, 0x326B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B2Cu;
label_326b2c:
    // 0x326b2c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x326b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x326b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326b34:
    // 0x326b34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x326b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326b38: 0x3e00008  jr          $ra
    ctx->pc = 0x326B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B38u;
        // 0x326b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326B40u;
}
