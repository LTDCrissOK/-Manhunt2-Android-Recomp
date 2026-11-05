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

// Function: sub_00254DF0
// Address: 0x254df0 - 0x254e30
void sub_00254DF0_0x254df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254DF0_0x254df0");
#endif

    ctx->pc = 0x254df0u;

    // 0x254df0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x254df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254df4: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x254df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x254df8: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x254df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x254dfc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x254dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x254e00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x254E00u;
    {
        const bool branch_taken_0x254e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254e00) {
            ctx->pc = 0x254E28u;
            goto label_254e28;
        }
    }
    ctx->pc = 0x254E08u;
    // 0x254e08: 0xdca21020  ld          $v0, 0x1020($a1)
    ctx->pc = 0x254e08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
    // 0x254e0c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x254e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x254e10: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x254e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x254e14: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x254e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x254e18: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x254e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x254e1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x254e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x254e20: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x254e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x254e24: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x254e24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
label_254e28:
    // 0x254e28: 0x3e00008  jr          $ra
    ctx->pc = 0x254E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254E30u;
}
