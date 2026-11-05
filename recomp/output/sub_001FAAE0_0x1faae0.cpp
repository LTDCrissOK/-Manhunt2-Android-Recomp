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

// Function: sub_001FAAE0
// Address: 0x1faae0 - 0x1fab18
void sub_001FAAE0_0x1faae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAAE0_0x1faae0");
#endif

    ctx->pc = 0x1faae0u;

    // 0x1faae0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1faae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1faae4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1faae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1faae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1faae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faaec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1faaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1faaf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1faaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faaf4: 0x8c431340  lw          $v1, 0x1340($v0)
    ctx->pc = 0x1faaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4928)));
    // 0x1faaf8: 0xe4800118  swc1        $f0, 0x118($a0)
    ctx->pc = 0x1faaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 280), bits); }
    // 0x1faafc: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1faafcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1fab00: 0xac850140  sw          $a1, 0x140($a0)
    ctx->pc = 0x1fab00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 5));
    // 0x1fab04: 0xa0800148  sb          $zero, 0x148($a0)
    ctx->pc = 0x1fab04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fab08: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x1fab08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x1fab0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB0Cu;
        // 0x1fab10: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAB14u;
    // 0x1fab14: 0x0  nop
    ctx->pc = 0x1fab14u;
    // NOP
    ctx->pc = 0x1fab18u;
}
