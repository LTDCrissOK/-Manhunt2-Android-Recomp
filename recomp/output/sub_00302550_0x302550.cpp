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

// Function: sub_00302550
// Address: 0x302550 - 0x302578
void sub_00302550_0x302550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302550_0x302550");
#endif

    switch (ctx->pc) {
        case 0x302568u: goto label_302568;
        default: break;
    }

    ctx->pc = 0x302550u;

    // 0x302550: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x302550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302554: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x302554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x302558: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x302558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x30255c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30255cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x302560: 0xc0b8de4  jal         func_2E3790
    ctx->pc = 0x302560u;
    SET_GPR_U32(ctx, 31, 0x302568u);
    ctx->pc = 0x302564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302560u;
    // 0x302564: 0x24845870  addiu       $a0, $a0, 0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3790u, 0x302560u, 0x302568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302568u;
label_302568:
    // 0x302568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x302568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30256c: 0x3e00008  jr          $ra
    ctx->pc = 0x30256Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30256Cu;
        // 0x302570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30256Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302574u;
    // 0x302574: 0x0  nop
    ctx->pc = 0x302574u;
    // NOP
    ctx->pc = 0x302578u;
}
