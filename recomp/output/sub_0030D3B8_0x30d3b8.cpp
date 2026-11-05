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

// Function: sub_0030D3B8
// Address: 0x30d3b8 - 0x30d3d8
void sub_0030D3B8_0x30d3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D3B8_0x30d3b8");
#endif

    ctx->pc = 0x30d3b8u;

    // 0x30d3b8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x30d3b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d3bc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x30d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x30d3c0: 0x24422a68  addiu       $v0, $v0, 0x2A68
    ctx->pc = 0x30d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10856));
    // 0x30d3c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x30d3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30d3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3CCu;
        // 0x30d3d0: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D3D4u;
    // 0x30d3d4: 0x0  nop
    ctx->pc = 0x30d3d4u;
    // NOP
    ctx->pc = 0x30d3d8u;
}
