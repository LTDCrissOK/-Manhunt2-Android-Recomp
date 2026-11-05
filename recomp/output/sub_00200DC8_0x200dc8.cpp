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

// Function: sub_00200DC8
// Address: 0x200dc8 - 0x200de8
void sub_00200DC8_0x200dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200DC8_0x200dc8");
#endif

    switch (ctx->pc) {
        case 0x200dd8u: goto label_200dd8;
        default: break;
    }

    ctx->pc = 0x200dc8u;

    // 0x200dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200dcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200dd0: 0xc081a86  jal         func_206A18
    ctx->pc = 0x200DD0u;
    SET_GPR_U32(ctx, 31, 0x200DD8u);
    ctx->pc = 0x200DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DD0u;
    // 0x200dd4: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A18u, 0x200DD0u, 0x200DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DD8u;
label_200dd8:
    // 0x200dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x200DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DDCu;
        // 0x200de0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200DE4u;
    // 0x200de4: 0x0  nop
    ctx->pc = 0x200de4u;
    // NOP
    ctx->pc = 0x200de8u;
}
