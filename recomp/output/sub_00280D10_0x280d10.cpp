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

// Function: sub_00280D10
// Address: 0x280d10 - 0x280d48
void sub_00280D10_0x280d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280D10_0x280d10");
#endif

    ctx->pc = 0x280d10u;

    // 0x280d10: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x280d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x280d14: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x280d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x280d18: 0x9043027c  lbu         $v1, 0x27C($v0)
    ctx->pc = 0x280d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x595AECu));
    // 0x280d1c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280D1Cu;
    {
        const bool branch_taken_0x280d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280d1c) {
            ctx->pc = 0x280D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280D1Cu;
            // 0x280d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280D34u;
            goto label_280d34;
        }
    }
    ctx->pc = 0x280D24u;
    // 0x280d24: 0x904303d8  lbu         $v1, 0x3D8($v0)
    ctx->pc = 0x280d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 984)));
    // 0x280d28: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x280D28u;
    {
        const bool branch_taken_0x280d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D28u;
        // 0x280d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d28) {
            ctx->pc = 0x280D34u;
            goto label_280d34;
        }
    }
    ctx->pc = 0x280D30u;
    // 0x280d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280d34:
    // 0x280d34: 0x3e00008  jr          $ra
    ctx->pc = 0x280D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280D3Cu;
    // 0x280d3c: 0x0  nop
    ctx->pc = 0x280d3cu;
    // NOP
    // 0x280d40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x280d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x280d44: 0x0  nop
    ctx->pc = 0x280d44u;
    // NOP
    ctx->pc = 0x280d48u;
}
