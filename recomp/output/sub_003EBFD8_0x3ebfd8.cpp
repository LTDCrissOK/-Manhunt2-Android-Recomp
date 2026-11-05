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

// Function: sub_003EBFD8
// Address: 0x3ebfd8 - 0x3ec000
void sub_003EBFD8_0x3ebfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBFD8_0x3ebfd8");
#endif

    switch (ctx->pc) {
        case 0x3ebff4u: goto label_3ebff4;
        default: break;
    }

    ctx->pc = 0x3ebfd8u;

    // 0x3ebfd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ebfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ebfdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ebfdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebfe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ebfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ebfe4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3ebfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3ebfe8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3ebfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3ebfec: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3EBFECu;
    SET_GPR_U32(ctx, 31, 0x3EBFF4u);
    ctx->pc = 0x3EBFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBFECu;
    // 0x3ebff0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3EBFECu, 0x3EBFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBFF4u;
label_3ebff4:
    // 0x3ebff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ebff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebff8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EBFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFF8u;
        // 0x3ebffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC000u;
}
