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

// Function: sub_0011A140
// Address: 0x11a140 - 0x11a170
void sub_0011A140_0x11a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A140_0x11a140");
#endif

    ctx->pc = 0x11a140u;

    // 0x11a140: 0x8c821220  lw          $v0, 0x1220($a0)
    ctx->pc = 0x11a140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4640)));
    // 0x11a144: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11a144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x11a148: 0x8c831224  lw          $v1, 0x1224($a0)
    ctx->pc = 0x11a148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4644)));
    // 0x11a14c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x11a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x11a150: 0x8c821228  lw          $v0, 0x1228($a0)
    ctx->pc = 0x11a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4648)));
    // 0x11a154: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x11a154u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x11a158: 0xc480122c  lwc1        $f0, 0x122C($a0)
    ctx->pc = 0x11a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a15c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x11a15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x11a160: 0x8c821238  lw          $v0, 0x1238($a0)
    ctx->pc = 0x11a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4664)));
    // 0x11a164: 0x3e00008  jr          $ra
    ctx->pc = 0x11A164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A164u;
        // 0x11a168: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A16Cu;
    // 0x11a16c: 0x0  nop
    ctx->pc = 0x11a16cu;
    // NOP
    ctx->pc = 0x11a170u;
}
