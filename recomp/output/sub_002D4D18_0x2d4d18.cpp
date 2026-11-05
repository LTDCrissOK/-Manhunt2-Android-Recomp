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

// Function: sub_002D4D18
// Address: 0x2d4d18 - 0x2d4d48
void sub_002D4D18_0x2d4d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4D18_0x2d4d18");
#endif

    switch (ctx->pc) {
        case 0x2d4d3cu: goto label_2d4d3c;
        default: break;
    }

    ctx->pc = 0x2d4d18u;

    // 0x2d4d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4d1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d4d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4d24: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2d4d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2d4d28: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x2d4d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x2d4d2c: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x2d4d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
    // 0x2d4d30: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x2d4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x2d4d34: 0xc0c9ab0  jal         func_326AC0
    ctx->pc = 0x2D4D34u;
    SET_GPR_U32(ctx, 31, 0x2D4D3Cu);
    ctx->pc = 0x2D4D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D34u;
    // 0x2d4d38: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326AC0u, 0x2D4D34u, 0x2D4D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D3Cu;
label_2d4d3c:
    // 0x2d4d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4d40: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D40u;
        // 0x2d4d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4D48u;
}
