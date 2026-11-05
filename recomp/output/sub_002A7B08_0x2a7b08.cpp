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

// Function: sub_002A7B08
// Address: 0x2a7b08 - 0x2a7b40
void sub_002A7B08_0x2a7b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7B08_0x2a7b08");
#endif

    switch (ctx->pc) {
        case 0x2a7b28u: goto label_2a7b28;
        default: break;
    }

    ctx->pc = 0x2a7b08u;

    // 0x2a7b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a7b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a7b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7b14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a7b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a7b18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a7b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b1c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2a7b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a7b20: 0xc0f8d4c  jal         func_3E3530
    ctx->pc = 0x2A7B20u;
    SET_GPR_U32(ctx, 31, 0x2A7B28u);
    ctx->pc = 0x2A7B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7B20u;
    // 0x2a7b24: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3530u, 0x2A7B20u, 0x2A7B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B28u;
label_2a7b28:
    // 0x2a7b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7b2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a7b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7b30: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2a7b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a7b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B38u;
        // 0x2a7b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7B40u;
}
