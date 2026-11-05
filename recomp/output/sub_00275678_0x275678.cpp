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

// Function: sub_00275678
// Address: 0x275678 - 0x275690
void sub_00275678_0x275678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275678_0x275678");
#endif

    ctx->pc = 0x275678u;

    // 0x275678: 0xc4810330  lwc1        $f1, 0x330($a0)
    ctx->pc = 0x275678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27567c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x27567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x275680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275684: 0x3e00008  jr          $ra
    ctx->pc = 0x275684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275684u;
        // 0x275688: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27568Cu;
    // 0x27568c: 0x0  nop
    ctx->pc = 0x27568cu;
    // NOP
    ctx->pc = 0x275690u;
}
