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

// Function: sub_0013DC70
// Address: 0x13dc70 - 0x13dcb0
void sub_0013DC70_0x13dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DC70_0x13dc70");
#endif

    switch (ctx->pc) {
        case 0x13dc94u: goto label_13dc94;
        default: break;
    }

    ctx->pc = 0x13dc70u;

    // 0x13dc70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13dc74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13dc78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13dc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13dc7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13dc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x13dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13dc84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DC84u;
    {
        const bool branch_taken_0x13dc84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc84) {
            ctx->pc = 0x13DC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DC84u;
            // 0x13dc88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DC98u;
            goto label_13dc98;
        }
    }
    ctx->pc = 0x13DC8Cu;
    // 0x13dc8c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x13DC8Cu;
    SET_GPR_U32(ctx, 31, 0x13DC94u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x13DC8Cu, 0x13DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC94u;
label_13dc94:
    // 0x13dc94: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_13dc98:
    // 0x13dc98: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x13dc98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x13dc9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13dc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dca0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13dca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13dca4: 0x3e00008  jr          $ra
    ctx->pc = 0x13DCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCA4u;
        // 0x13dca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DCACu;
    // 0x13dcac: 0x0  nop
    ctx->pc = 0x13dcacu;
    // NOP
    ctx->pc = 0x13dcb0u;
}
