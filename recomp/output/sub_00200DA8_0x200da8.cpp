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

// Function: sub_00200DA8
// Address: 0x200da8 - 0x200dc8
void sub_00200DA8_0x200da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200DA8_0x200da8");
#endif

    switch (ctx->pc) {
        case 0x200db8u: goto label_200db8;
        default: break;
    }

    ctx->pc = 0x200da8u;

    // 0x200da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200db0: 0xc0819e8  jal         func_2067A0
    ctx->pc = 0x200DB0u;
    SET_GPR_U32(ctx, 31, 0x200DB8u);
    ctx->pc = 0x200DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DB0u;
    // 0x200db4: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2067A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067A0u, 0x200DB0u, 0x200DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DB8u;
label_200db8:
    // 0x200db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x200DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DBCu;
        // 0x200dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200DC4u;
    // 0x200dc4: 0x0  nop
    ctx->pc = 0x200dc4u;
    // NOP
    ctx->pc = 0x200dc8u;
}
