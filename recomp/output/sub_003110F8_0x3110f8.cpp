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

// Function: sub_003110F8
// Address: 0x3110f8 - 0x311110
void sub_003110F8_0x3110f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003110F8_0x3110f8");
#endif

    ctx->pc = 0x3110f8u;

    // 0x3110f8: 0xc4800560  lwc1        $f0, 0x560($a0)
    ctx->pc = 0x3110f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3110fc: 0xe4a000f0  swc1        $f0, 0xF0($a1)
    ctx->pc = 0x3110fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 240), bits); }
    // 0x311100: 0xc4810564  lwc1        $f1, 0x564($a0)
    ctx->pc = 0x311100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311104: 0x3e00008  jr          $ra
    ctx->pc = 0x311104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311104u;
        // 0x311108: 0xe4a100f4  swc1        $f1, 0xF4($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31110Cu;
    // 0x31110c: 0x0  nop
    ctx->pc = 0x31110cu;
    // NOP
    ctx->pc = 0x311110u;
}
