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

// Function: sub_001D7A78
// Address: 0x1d7a78 - 0x1d7ab8
void sub_001D7A78_0x1d7a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7A78_0x1d7a78");
#endif

    switch (ctx->pc) {
        case 0x1d7a94u: goto label_1d7a94;
        case 0x1d7aa0u: goto label_1d7aa0;
        case 0x1d7aa8u: goto label_1d7aa8;
        default: break;
    }

    ctx->pc = 0x1d7a78u;

    // 0x1d7a78: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1d7a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1d7a7c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d7a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a80: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d7a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a88: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x1d7a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x1d7a8c: 0xc075e68  jal         func_1D79A0
    ctx->pc = 0x1D7A8Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A94u);
    ctx->pc = 0x1D7A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A8Cu;
    // 0x1d7a90: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D79A0u, 0x1D7A8Cu, 0x1D7A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A94u;
label_1d7a94:
    // 0x1d7a94: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1d7a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x1d7a98: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1D7A98u;
    SET_GPR_U32(ctx, 31, 0x1D7AA0u);
    ctx->pc = 0x1D7A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A98u;
    // 0x1d7a9c: 0x2484ec20  addiu       $a0, $a0, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1D7A98u, 0x1D7AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AA0u;
label_1d7aa0:
    // 0x1d7aa0: 0xc09dc80  jal         func_277200
    ctx->pc = 0x1D7AA0u;
    SET_GPR_U32(ctx, 31, 0x1D7AA8u);
    ctx->pc = 0x1D7AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AA0u;
    // 0x1d7aa4: 0x3a22021  addu        $a0, $sp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277200u, 0x1D7AA0u, 0x1D7AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AA8u;
label_1d7aa8:
    // 0x1d7aa8: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x1d7aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1d7aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AACu;
        // 0x1d7ab0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7AB4u;
    // 0x1d7ab4: 0x0  nop
    ctx->pc = 0x1d7ab4u;
    // NOP
    ctx->pc = 0x1d7ab8u;
}
