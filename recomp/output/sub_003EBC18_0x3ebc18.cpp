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

// Function: sub_003EBC18
// Address: 0x3ebc18 - 0x3ebc40
void sub_003EBC18_0x3ebc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBC18_0x3ebc18");
#endif

    switch (ctx->pc) {
        case 0x3ebc34u: goto label_3ebc34;
        default: break;
    }

    ctx->pc = 0x3ebc18u;

    // 0x3ebc18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ebc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ebc1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ebc1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebc20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ebc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ebc24: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3ebc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3ebc28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3ebc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3ebc2c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3EBC2Cu;
    SET_GPR_U32(ctx, 31, 0x3EBC34u);
    ctx->pc = 0x3EBC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBC2Cu;
    // 0x3ebc30: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3EBC2Cu, 0x3EBC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBC34u;
label_3ebc34:
    // 0x3ebc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ebc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebc38: 0x3e00008  jr          $ra
    ctx->pc = 0x3EBC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC38u;
        // 0x3ebc3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EBC40u;
}
