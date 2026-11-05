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

// Function: sub_00285F78
// Address: 0x285f78 - 0x285fa8
void sub_00285F78_0x285f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285F78_0x285f78");
#endif

    ctx->pc = 0x285f78u;

    // 0x285f78: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x285f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x285f7c: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x285f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x285f80: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x285f80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BB010u));
    // 0x285f84: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x285f84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BB014u));
    // 0x285f88: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x285f88u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BB018u));
    // 0x285f8c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x285f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BB01Cu));
    // 0x285f90: 0xac44008c  sw          $a0, 0x8C($v0)
    ctx->pc = 0x285f90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BB07Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB07Cu, _value); } while (0);
    // 0x285f94: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x285f94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BB088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB088u, _value); } while (0);
    // 0x285f98: 0xac450090  sw          $a1, 0x90($v0)
    ctx->pc = 0x285f98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BB080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB080u, _value); } while (0);
    // 0x285f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x285F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F9Cu;
        // 0x285fa0: 0xac460094  sw          $a2, 0x94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285FA4u;
    // 0x285fa4: 0x0  nop
    ctx->pc = 0x285fa4u;
    // NOP
    ctx->pc = 0x285fa8u;
}
