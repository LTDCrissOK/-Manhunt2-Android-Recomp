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

// Function: sub_003EBE98
// Address: 0x3ebe98 - 0x3ebec0
void sub_003EBE98_0x3ebe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBE98_0x3ebe98");
#endif

    switch (ctx->pc) {
        case 0x3ebeb4u: goto label_3ebeb4;
        default: break;
    }

    ctx->pc = 0x3ebe98u;

    // 0x3ebe98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ebe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ebe9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ebe9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ebea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ebea4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3ebea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3ebea8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3ebea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3ebeac: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3EBEACu;
    SET_GPR_U32(ctx, 31, 0x3EBEB4u);
    ctx->pc = 0x3EBEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBEACu;
    // 0x3ebeb0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3EBEACu, 0x3EBEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBEB4u;
label_3ebeb4:
    // 0x3ebeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ebeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EBEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBEB8u;
        // 0x3ebebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EBEC0u;
}
