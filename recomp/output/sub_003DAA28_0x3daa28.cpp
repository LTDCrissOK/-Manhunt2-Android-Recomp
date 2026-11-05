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

// Function: sub_003DAA28
// Address: 0x3daa28 - 0x3daa58
void sub_003DAA28_0x3daa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAA28_0x3daa28");
#endif

    switch (ctx->pc) {
        case 0x3daa44u: goto label_3daa44;
        default: break;
    }

    ctx->pc = 0x3daa28u;

    // 0x3daa28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3daa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3daa2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3daa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3daa30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3daa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3daa34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3daa34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daa38: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3daa38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3daa3c: 0xc0f63bc  jal         func_3D8EF0
    ctx->pc = 0x3DAA3Cu;
    SET_GPR_U32(ctx, 31, 0x3DAA44u);
    ctx->pc = 0x3DAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAA3Cu;
    // 0x3daa40: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8EF0u, 0x3DAA3Cu, 0x3DAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAA44u;
label_3daa44:
    // 0x3daa44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3daa44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daa48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3daa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3daa4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3daa4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daa50: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA50u;
        // 0x3daa54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAA58u;
}
