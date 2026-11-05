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

// Function: sub_003DDFF8
// Address: 0x3ddff8 - 0x3de010
void sub_003DDFF8_0x3ddff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDFF8_0x3ddff8");
#endif

    ctx->pc = 0x3ddff8u;

    // 0x3ddff8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ddff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddffc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ddffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3de000: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3de000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3de004: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE004u;
        // 0x3de008: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE00Cu;
    // 0x3de00c: 0x0  nop
    ctx->pc = 0x3de00cu;
    // NOP
    ctx->pc = 0x3de010u;
}
