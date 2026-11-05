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

// Function: sub_001938D0
// Address: 0x1938d0 - 0x193910
void sub_001938D0_0x1938d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001938D0_0x1938d0");
#endif

    ctx->pc = 0x1938d0u;

    // 0x1938d0: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x1938d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1938d4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1938d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1938d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1938d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1938dc: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x1938dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1938e0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1938e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1938e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1938e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1938e8: 0x0  nop
    ctx->pc = 0x1938e8u;
    // NOP
    // 0x1938ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1938ECu;
    {
        const bool branch_taken_0x1938ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1938F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938ECu;
        // 0x1938f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938ec) {
            ctx->pc = 0x1938F8u;
            goto label_1938f8;
        }
    }
    ctx->pc = 0x1938F4u;
    // 0x1938f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1938f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1938f8:
    // 0x1938f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1938F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1938F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193900u;
    // 0x193900: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x193900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193904: 0x0  nop
    ctx->pc = 0x193904u;
    // NOP
    // 0x193908: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x193908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19390c: 0x0  nop
    ctx->pc = 0x19390cu;
    // NOP
    ctx->pc = 0x193910u;
}
