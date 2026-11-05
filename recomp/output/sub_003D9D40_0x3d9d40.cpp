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

// Function: sub_003D9D40
// Address: 0x3d9d40 - 0x3d9d68
void sub_003D9D40_0x3d9d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9D40_0x3d9d40");
#endif

    ctx->pc = 0x3d9d40u;

    // 0x3d9d40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d9d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9d44: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x3d9d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3d9d48: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x3d9d48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d9d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9d50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3d9d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d9d54: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9D54u;
    {
        const bool branch_taken_0x3d9d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D9D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D54u;
        // 0x3d9d58: 0xa4a2000c  sh          $v0, 0xC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9d54) {
            ctx->pc = 0x3D9D60u;
            goto label_3d9d60;
        }
    }
    ctx->pc = 0x3D9D5Cu;
    // 0x3d9d5c: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x3d9d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_3d9d60:
    // 0x3d9d60: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9D68u;
}
