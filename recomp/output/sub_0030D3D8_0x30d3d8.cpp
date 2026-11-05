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

// Function: sub_0030D3D8
// Address: 0x30d3d8 - 0x30d3f8
void sub_0030D3D8_0x30d3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D3D8_0x30d3d8");
#endif

    ctx->pc = 0x30d3d8u;

    // 0x30d3d8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x30d3d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d3dc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x30d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x30d3e0: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x30d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x30d3e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d3e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x30D3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3ECu;
        // 0x30d3f0: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D3F4u;
    // 0x30d3f4: 0x0  nop
    ctx->pc = 0x30d3f4u;
    // NOP
    ctx->pc = 0x30d3f8u;
}
