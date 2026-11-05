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

// Function: sub_00368E10
// Address: 0x368e10 - 0x368e48
void sub_00368E10_0x368e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368E10_0x368e10");
#endif

    switch (ctx->pc) {
        case 0x368e24u: goto label_368e24;
        case 0x368e2cu: goto label_368e2c;
        case 0x368e34u: goto label_368e34;
        default: break;
    }

    ctx->pc = 0x368e10u;

    // 0x368e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368e18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x368e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x368e1c: 0xc082eb2  jal         func_20BAC8
    ctx->pc = 0x368E1Cu;
    SET_GPR_U32(ctx, 31, 0x368E24u);
    ctx->pc = 0x368E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E1Cu;
    // 0x368e20: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAC8u, 0x368E1Cu, 0x368E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E24u;
label_368e24:
    // 0x368e24: 0xc082b78  jal         func_20ADE0
    ctx->pc = 0x368E24u;
    SET_GPR_U32(ctx, 31, 0x368E2Cu);
    ctx->pc = 0x368E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E24u;
    // 0x368e28: 0x8e04cba8  lw          $a0, -0x3458($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADE0u, 0x368E24u, 0x368E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E2Cu;
label_368e2c:
    // 0x368e2c: 0xc082bec  jal         func_20AFB0
    ctx->pc = 0x368E2Cu;
    SET_GPR_U32(ctx, 31, 0x368E34u);
    ctx->pc = 0x368E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E2Cu;
    // 0x368e30: 0x8e04cba8  lw          $a0, -0x3458($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AFB0u, 0x368E2Cu, 0x368E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E34u;
label_368e34:
    // 0x368e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368e38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x368e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x368E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E3Cu;
        // 0x368e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368E44u;
    // 0x368e44: 0x0  nop
    ctx->pc = 0x368e44u;
    // NOP
    ctx->pc = 0x368e48u;
}
