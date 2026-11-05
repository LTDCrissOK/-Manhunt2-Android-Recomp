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

// Function: sub_00127BD8
// Address: 0x127bd8 - 0x127c10
void sub_00127BD8_0x127bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127BD8_0x127bd8");
#endif

    ctx->pc = 0x127bd8u;

    // 0x127bd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x127bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127bdc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x127bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x127be0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x127be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x127be4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x127be4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x127be8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x127be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x127bec: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x127becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x127bf0: 0x7ca00010  sq          $zero, 0x10($a1)
    ctx->pc = 0x127bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 0));
    // 0x127bf4: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x127bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x127bf8: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x127bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x127bfc: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x127bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x127c00: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x127c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x127c04: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x127c04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x127c08: 0x3e00008  jr          $ra
    ctx->pc = 0x127C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C08u;
        // 0x127c0c: 0xaca00030  sw          $zero, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127C10u;
}
