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

// Function: sub_003666E8
// Address: 0x3666e8 - 0x366730
void sub_003666E8_0x3666e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003666E8_0x3666e8");
#endif

    switch (ctx->pc) {
        case 0x3666f8u: goto label_3666f8;
        default: break;
    }

    ctx->pc = 0x3666e8u;

    // 0x3666e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3666e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3666ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3666ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3666f0: 0xc0d9924  jal         func_366490
    ctx->pc = 0x3666F0u;
    SET_GPR_U32(ctx, 31, 0x3666F8u);
    ctx->pc = 0x366490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366490u, 0x3666F0u, 0x3666F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3666F8u;
label_3666f8:
    // 0x3666f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3666f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3666fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3666fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366700: 0x3e00008  jr          $ra
    ctx->pc = 0x366700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366700u;
        // 0x366704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366708u;
    // 0x366708: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36670c: 0x0  nop
    ctx->pc = 0x36670cu;
    // NOP
    // 0x366710: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366714: 0x0  nop
    ctx->pc = 0x366714u;
    // NOP
    // 0x366718: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36671c: 0x0  nop
    ctx->pc = 0x36671cu;
    // NOP
    // 0x366720: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366724: 0x0  nop
    ctx->pc = 0x366724u;
    // NOP
    // 0x366728: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36672c: 0x0  nop
    ctx->pc = 0x36672cu;
    // NOP
    ctx->pc = 0x366730u;
}
