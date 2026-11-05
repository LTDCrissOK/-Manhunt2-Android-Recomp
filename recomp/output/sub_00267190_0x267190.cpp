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

// Function: sub_00267190
// Address: 0x267190 - 0x2671c0
void sub_00267190_0x267190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267190_0x267190");
#endif

    ctx->pc = 0x267190u;

    // 0x267190: 0x8c840220  lw          $a0, 0x220($a0)
    ctx->pc = 0x267190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x267194: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x267194u;
    {
        const bool branch_taken_0x267194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x267198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267194u;
        // 0x267198: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267194) {
            ctx->pc = 0x2671B8u;
            goto label_2671b8;
        }
    }
    ctx->pc = 0x26719Cu;
    // 0x26719c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x26719cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2671a0: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2671a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2671a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2671a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2671a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2671a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2671ac: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2671acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2671b0: 0xac62bce4  sw          $v0, -0x431C($v1)
    ctx->pc = 0x2671b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950116), GPR_U32(ctx, 2));
    // 0x2671b4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2671b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2671b8:
    // 0x2671b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2671B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2671B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2671C0u;
}
