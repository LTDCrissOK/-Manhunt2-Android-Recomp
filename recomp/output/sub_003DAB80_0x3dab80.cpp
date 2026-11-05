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

// Function: sub_003DAB80
// Address: 0x3dab80 - 0x3daba8
void sub_003DAB80_0x3dab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAB80_0x3dab80");
#endif

    switch (ctx->pc) {
        case 0x3dab98u: goto label_3dab98;
        default: break;
    }

    ctx->pc = 0x3dab80u;

    // 0x3dab80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dab84: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dab84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dab88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DAB88u;
    {
        const bool branch_taken_0x3dab88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB88u;
        // 0x3dab8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dab88) {
            ctx->pc = 0x3DAB98u;
            goto label_3dab98;
        }
    }
    ctx->pc = 0x3DAB90u;
    // 0x3dab90: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DAB90u;
    SET_GPR_U32(ctx, 31, 0x3DAB98u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DAB90u, 0x3DAB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAB98u;
label_3dab98:
    // 0x3dab98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dab98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dab9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB9Cu;
        // 0x3daba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DABA4u;
    // 0x3daba4: 0x0  nop
    ctx->pc = 0x3daba4u;
    // NOP
    ctx->pc = 0x3daba8u;
}
