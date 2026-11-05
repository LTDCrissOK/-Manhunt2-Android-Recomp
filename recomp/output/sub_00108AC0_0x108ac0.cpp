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

// Function: sub_00108AC0
// Address: 0x108ac0 - 0x108ae0
void sub_00108AC0_0x108ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108AC0_0x108ac0");
#endif

    switch (ctx->pc) {
        case 0x108ad4u: goto label_108ad4;
        default: break;
    }

    ctx->pc = 0x108ac0u;

    // 0x108ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108ac4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x108ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x108ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108acc: 0xc041ea4  jal         func_107A90
    ctx->pc = 0x108ACCu;
    SET_GPR_U32(ctx, 31, 0x108AD4u);
    ctx->pc = 0x108AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108ACCu;
    // 0x108ad0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A90u, 0x108ACCu, 0x108AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AD4u;
label_108ad4:
    // 0x108ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x108AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AD8u;
        // 0x108adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108AE0u;
}
