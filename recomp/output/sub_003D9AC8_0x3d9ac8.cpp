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

// Function: sub_003D9AC8
// Address: 0x3d9ac8 - 0x3d9af0
void sub_003D9AC8_0x3d9ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9AC8_0x3d9ac8");
#endif

    ctx->pc = 0x3d9ac8u;

    // 0x3d9ac8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d9ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9acc: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x3d9accu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3d9ad0: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x3d9ad0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d9ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9ad8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3d9ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d9adc: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9ADCu;
    {
        const bool branch_taken_0x3d9adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9ADCu;
        // 0x3d9ae0: 0xa4a2000c  sh          $v0, 0xC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9adc) {
            ctx->pc = 0x3D9AE8u;
            goto label_3d9ae8;
        }
    }
    ctx->pc = 0x3D9AE4u;
    // 0x3d9ae4: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x3d9ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_3d9ae8:
    // 0x3d9ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9AF0u;
}
