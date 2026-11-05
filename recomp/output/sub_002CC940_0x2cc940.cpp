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

// Function: sub_002CC940
// Address: 0x2cc940 - 0x2cc978
void sub_002CC940_0x2cc940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC940_0x2cc940");
#endif

    switch (ctx->pc) {
        case 0x2cc968u: goto label_2cc968;
        default: break;
    }

    ctx->pc = 0x2cc940u;

    // 0x2cc940: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2cc940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2cc944: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2cc944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2cc948: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2cc948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2cc94c: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x2cc94cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x2cc950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc954: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2cc954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2cc958: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x2cc958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2cc95c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc960: 0xc0e3d48  jal         func_38F520
    ctx->pc = 0x2CC960u;
    SET_GPR_U32(ctx, 31, 0x2CC968u);
    ctx->pc = 0x2CC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC960u;
    // 0x2cc964: 0x2444a608  addiu       $a0, $v0, -0x59F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F520u, 0x2CC960u, 0x2CC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC968u;
label_2cc968:
    // 0x2cc968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc96c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC96Cu;
        // 0x2cc970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC974u;
    // 0x2cc974: 0x0  nop
    ctx->pc = 0x2cc974u;
    // NOP
    ctx->pc = 0x2cc978u;
}
