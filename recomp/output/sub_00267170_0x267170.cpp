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

// Function: sub_00267170
// Address: 0x267170 - 0x267190
void sub_00267170_0x267170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267170_0x267170");
#endif

    ctx->pc = 0x267170u;

    // 0x267170: 0x8c840220  lw          $a0, 0x220($a0)
    ctx->pc = 0x267170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x267174: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267174u;
    {
        const bool branch_taken_0x267174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x267178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267174u;
        // 0x267178: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267174) {
            ctx->pc = 0x267188u;
            goto label_267188;
        }
    }
    ctx->pc = 0x26717Cu;
    // 0x26717c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267180: 0xac62bce4  sw          $v0, -0x431C($v1)
    ctx->pc = 0x267180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950116), GPR_U32(ctx, 2));
    // 0x267184: 0xe48c0024  swc1        $f12, 0x24($a0)
    ctx->pc = 0x267184u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_267188:
    // 0x267188: 0x3e00008  jr          $ra
    ctx->pc = 0x267188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267190u;
}
