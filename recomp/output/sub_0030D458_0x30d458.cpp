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

// Function: sub_0030D458
// Address: 0x30d458 - 0x30d478
void sub_0030D458_0x30d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D458_0x30d458");
#endif

    ctx->pc = 0x30d458u;

    // 0x30d458: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x30d458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d45c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x30d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x30d460: 0x24422f08  addiu       $v0, $v0, 0x2F08
    ctx->pc = 0x30d460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12040));
    // 0x30d464: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d468: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d46c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D46Cu;
        // 0x30d470: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D474u;
    // 0x30d474: 0x0  nop
    ctx->pc = 0x30d474u;
    // NOP
    ctx->pc = 0x30d478u;
}
