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

// Function: sub_001E9FF0
// Address: 0x1e9ff0 - 0x1ea010
void sub_001E9FF0_0x1e9ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9FF0_0x1e9ff0");
#endif

    switch (ctx->pc) {
        case 0x1ea004u: goto label_1ea004;
        default: break;
    }

    ctx->pc = 0x1e9ff0u;

    // 0x1e9ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9ff4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e9ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9ff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9ffc: 0xc07a7ea  jal         func_1E9FA8
    ctx->pc = 0x1E9FFCu;
    SET_GPR_U32(ctx, 31, 0x1EA004u);
    ctx->pc = 0x1EA000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9FFCu;
    // 0x1ea000: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9FA8u, 0x1E9FFCu, 0x1EA004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA004u;
label_1ea004:
    // 0x1ea004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea008: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA008u;
        // 0x1ea00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA010u;
}
