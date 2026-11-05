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

// Function: sub_00280E08
// Address: 0x280e08 - 0x280e50
void sub_00280E08_0x280e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280E08_0x280e08");
#endif

    switch (ctx->pc) {
        case 0x280e24u: goto label_280e24;
        case 0x280e38u: goto label_280e38;
        default: break;
    }

    ctx->pc = 0x280e08u;

    // 0x280e08: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x280e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x280e0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x280e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x280e10: 0x8c44eff8  lw          $a0, -0x1008($v0)
    ctx->pc = 0x280e10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BEFF8u));
    // 0x280e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280e1c: 0xc0a0352  jal         func_280D48
    ctx->pc = 0x280E1Cu;
    SET_GPR_U32(ctx, 31, 0x280E24u);
    ctx->pc = 0x280E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280E1Cu;
    // 0x280e20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D48u, 0x280E1Cu, 0x280E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E24u;
label_280e24:
    // 0x280e24: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x280e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x280e28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280E28u;
    {
        const bool branch_taken_0x280e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E28u;
        // 0x280e2c: 0xac62f254  sw          $v0, -0xDAC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e28) {
            ctx->pc = 0x280E40u;
            goto label_280e40;
        }
    }
    ctx->pc = 0x280E30u;
    // 0x280e30: 0xc0a035a  jal         func_280D68
    ctx->pc = 0x280E30u;
    SET_GPR_U32(ctx, 31, 0x280E38u);
    ctx->pc = 0x280D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D68u, 0x280E30u, 0x280E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E38u;
label_280e38:
    // 0x280e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280E38u;
    {
        const bool branch_taken_0x280e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E38u;
        // 0x280e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e38) {
            ctx->pc = 0x280E44u;
            goto label_280e44;
        }
    }
    ctx->pc = 0x280E40u;
label_280e40:
    // 0x280e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280e44:
    // 0x280e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280e48: 0x3e00008  jr          $ra
    ctx->pc = 0x280E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E48u;
        // 0x280e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280E50u;
}
