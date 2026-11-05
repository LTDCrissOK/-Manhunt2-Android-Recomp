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

// Function: sub_00181244
// Address: 0x181244 - 0x181260
void sub_00181244_0x181244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181244_0x181244");
#endif

    switch (ctx->pc) {
        case 0x181254u: goto label_181254;
        default: break;
    }

    ctx->pc = 0x181244u;

    // 0x181244: 0xe4d000ec  swc1        $f16, 0xEC($a2)
    ctx->pc = 0x181244u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 236), bits); }
    // 0x181248: 0xe4cc00e0  swc1        $f12, 0xE0($a2)
    ctx->pc = 0x181248u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 224), bits); }
    // 0x18124c: 0xe4cd00e4  swc1        $f13, 0xE4($a2)
    ctx->pc = 0x18124cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 228), bits); }
    // 0x181250: 0xe4ce00e8  swc1        $f14, 0xE8($a2)
    ctx->pc = 0x181250u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 232), bits); }
label_181254:
    // 0x181254: 0x3e00008  jr          $ra
    ctx->pc = 0x181254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18125Cu;
    // 0x18125c: 0x0  nop
    ctx->pc = 0x18125cu;
    // NOP
    ctx->pc = 0x181260u;
}
