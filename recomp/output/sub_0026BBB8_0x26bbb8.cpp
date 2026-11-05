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

// Function: sub_0026BBB8
// Address: 0x26bbb8 - 0x26bbe0
void sub_0026BBB8_0x26bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BBB8_0x26bbb8");
#endif

    switch (ctx->pc) {
        case 0x26bbd4u: goto label_26bbd4;
        default: break;
    }

    ctx->pc = 0x26bbb8u;

    // 0x26bbb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26bbbc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x26bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x26bbc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bbc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26bbc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbc8: 0x24422848  addiu       $v0, $v0, 0x2848
    ctx->pc = 0x26bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10312));
    // 0x26bbcc: 0xc09bb06  jal         func_26EC18
    ctx->pc = 0x26BBCCu;
    SET_GPR_U32(ctx, 31, 0x26BBD4u);
    ctx->pc = 0x26BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BBCCu;
    // 0x26bbd0: 0xac620218  sw          $v0, 0x218($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EC18u, 0x26BBCCu, 0x26BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBD4u;
label_26bbd4:
    // 0x26bbd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x26BBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBD8u;
        // 0x26bbdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BBE0u;
}
