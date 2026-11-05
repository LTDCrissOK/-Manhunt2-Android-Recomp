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

// Function: sub_00116488
// Address: 0x116488 - 0x1164b0
void sub_00116488_0x116488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116488_0x116488");
#endif

    ctx->pc = 0x116488u;

    // 0x116488: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x116488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11648c: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x11648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x116490: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x116490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x116494: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116494u;
    {
        const bool branch_taken_0x116494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116494u;
        // 0x116498: 0x30420020  andi        $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116494) {
            ctx->pc = 0x1164A4u;
            goto label_1164a4;
        }
    }
    ctx->pc = 0x11649Cu;
    // 0x11649c: 0x3e00008  jr          $ra
    ctx->pc = 0x11649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1164A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11649Cu;
        // 0x1164a0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11649Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1164A4u;
label_1164a4:
    // 0x1164a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1164A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1164A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164A4u;
        // 0x1164a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1164A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1164ACu;
    // 0x1164ac: 0x0  nop
    ctx->pc = 0x1164acu;
    // NOP
    ctx->pc = 0x1164b0u;
}
