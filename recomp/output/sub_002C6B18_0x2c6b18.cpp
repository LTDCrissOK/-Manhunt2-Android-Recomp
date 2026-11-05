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

// Function: sub_002C6B18
// Address: 0x2c6b18 - 0x2c6b38
void sub_002C6B18_0x2c6b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6B18_0x2c6b18");
#endif

    ctx->pc = 0x2c6b18u;

    // 0x2c6b18: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2c6b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b1c: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x2c6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2c6b20: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2c6b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c6b24: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2c6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b28: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2c6b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c6b2c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2c6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b30: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B30u;
        // 0x2c6b34: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6B38u;
}
