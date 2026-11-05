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

// Function: sub_0030D4B8
// Address: 0x30d4b8 - 0x30d4d8
void sub_0030D4B8_0x30d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D4B8_0x30d4b8");
#endif

    ctx->pc = 0x30d4b8u;

    // 0x30d4b8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x30d4b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d4bc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x30d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x30d4c0: 0x24422da8  addiu       $v0, $v0, 0x2DA8
    ctx->pc = 0x30d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11688));
    // 0x30d4c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d4c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4CCu;
        // 0x30d4d0: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D4D4u;
    // 0x30d4d4: 0x0  nop
    ctx->pc = 0x30d4d4u;
    // NOP
    ctx->pc = 0x30d4d8u;
}
