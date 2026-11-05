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

// Function: sub_003D78F8
// Address: 0x3d78f8 - 0x3d7920
void sub_003D78F8_0x3d78f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D78F8_0x3d78f8");
#endif

    switch (ctx->pc) {
        case 0x3d790cu: goto label_3d790c;
        default: break;
    }

    ctx->pc = 0x3d78f8u;

    // 0x3d78f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d78f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d78fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d78fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d7900: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3d7900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d7904: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3D7904u;
    SET_GPR_U32(ctx, 31, 0x3D790Cu);
    ctx->pc = 0x3D7908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7904u;
    // 0x3d7908: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3D7904u, 0x3D790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D790Cu;
label_3d790c:
    // 0x3d790c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d790cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7910: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x3d7910u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3d7914: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7914u;
        // 0x3d7918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D791Cu;
    // 0x3d791c: 0x0  nop
    ctx->pc = 0x3d791cu;
    // NOP
    ctx->pc = 0x3d7920u;
}
