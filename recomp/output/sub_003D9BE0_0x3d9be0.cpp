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

// Function: sub_003D9BE0
// Address: 0x3d9be0 - 0x3d9c08
void sub_003D9BE0_0x3d9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9BE0_0x3d9be0");
#endif

    ctx->pc = 0x3d9be0u;

    // 0x3d9be0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d9be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9be4: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x3d9be4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3d9be8: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x3d9be8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d9bec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9bf0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3d9bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d9bf4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9BF4u;
    {
        const bool branch_taken_0x3d9bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BF4u;
        // 0x3d9bf8: 0xa4a2000c  sh          $v0, 0xC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bf4) {
            ctx->pc = 0x3D9C00u;
            goto label_3d9c00;
        }
    }
    ctx->pc = 0x3D9BFCu;
    // 0x3d9bfc: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x3d9bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_3d9c00:
    // 0x3d9c00: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9C08u;
}
