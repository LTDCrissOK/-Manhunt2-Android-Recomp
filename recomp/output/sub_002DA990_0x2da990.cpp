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

// Function: sub_002DA990
// Address: 0x2da990 - 0x2da9c8
void sub_002DA990_0x2da990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA990_0x2da990");
#endif

    switch (ctx->pc) {
        case 0x2da9b0u: goto label_2da9b0;
        default: break;
    }

    ctx->pc = 0x2da990u;

    // 0x2da990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2da990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da994: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2da994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2da998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da99c: 0x244214e0  addiu       $v0, $v0, 0x14E0
    ctx->pc = 0x2da99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x2da9a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da9a8: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2DA9A8u;
    SET_GPR_U32(ctx, 31, 0x2DA9B0u);
    ctx->pc = 0x2DA9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA9A8u;
    // 0x2da9ac: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2DA9A8u, 0x2DA9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9B0u;
label_2da9b0:
    // 0x2da9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9B4u;
        // 0x2da9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA9BCu;
    // 0x2da9bc: 0x0  nop
    ctx->pc = 0x2da9bcu;
    // NOP
    // 0x2da9c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2da9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2da9c4: 0x0  nop
    ctx->pc = 0x2da9c4u;
    // NOP
    ctx->pc = 0x2da9c8u;
}
