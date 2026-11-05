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

// Function: sub_001DEC80
// Address: 0x1dec80 - 0x1deca8
void sub_001DEC80_0x1dec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEC80_0x1dec80");
#endif

    switch (ctx->pc) {
        case 0x1dec9cu: goto label_1dec9c;
        default: break;
    }

    ctx->pc = 0x1dec80u;

    // 0x1dec80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dec80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dec84: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1dec84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dec8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dec8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dec90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dec94: 0xc077b46  jal         func_1DED18
    ctx->pc = 0x1DEC94u;
    SET_GPR_U32(ctx, 31, 0x1DEC9Cu);
    ctx->pc = 0x1DEC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEC94u;
    // 0x1dec98: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED18u, 0x1DEC94u, 0x1DEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC9Cu;
label_1dec9c:
    // 0x1dec9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DECA0u;
        // 0x1deca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DECA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DECA8u;
}
