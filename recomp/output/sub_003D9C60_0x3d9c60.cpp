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

// Function: sub_003D9C60
// Address: 0x3d9c60 - 0x3d9c98
void sub_003D9C60_0x3d9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9C60_0x3d9c60");
#endif

    switch (ctx->pc) {
        case 0x3d9c84u: goto label_3d9c84;
        default: break;
    }

    ctx->pc = 0x3d9c60u;

    // 0x3d9c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d9c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d9c68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3d9c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3d9c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9c70: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3d9c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d9c74: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9C74u;
    {
        const bool branch_taken_0x3d9c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c74) {
            ctx->pc = 0x3D9C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9C74u;
            // 0x3d9c78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9C8Cu;
            goto label_3d9c8c;
        }
    }
    ctx->pc = 0x3D9C7Cu;
    // 0x3d9c7c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3D9C7Cu;
    SET_GPR_U32(ctx, 31, 0x3D9C84u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3D9C7Cu, 0x3D9C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9C84u;
label_3d9c84:
    // 0x3d9c84: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3d9c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3d9c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d9c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9c8c:
    // 0x3d9c8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3d9c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d9c90: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C90u;
        // 0x3d9c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9C98u;
}
