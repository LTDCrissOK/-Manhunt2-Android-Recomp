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

// Function: sub_003DD990
// Address: 0x3dd990 - 0x3dd9c0
void sub_003DD990_0x3dd990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD990_0x3dd990");
#endif

    switch (ctx->pc) {
        case 0x3dd9b4u: goto label_3dd9b4;
        default: break;
    }

    ctx->pc = 0x3dd990u;

    // 0x3dd990: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dd990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dd994: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dd994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dd998: 0x244215d8  addiu       $v0, $v0, 0x15D8
    ctx->pc = 0x3dd998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5592));
    // 0x3dd99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dd99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dd9a0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dd9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dd9a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD9A4u;
    {
        const bool branch_taken_0x3dd9a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9A4u;
        // 0x3dd9a8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd9a4) {
            ctx->pc = 0x3DD9B4u;
            goto label_3dd9b4;
        }
    }
    ctx->pc = 0x3DD9ACu;
    // 0x3dd9ac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DD9ACu;
    SET_GPR_U32(ctx, 31, 0x3DD9B4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DD9ACu, 0x3DD9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD9B4u;
label_3dd9b4:
    // 0x3dd9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dd9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dd9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9B8u;
        // 0x3dd9bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD9C0u;
}
