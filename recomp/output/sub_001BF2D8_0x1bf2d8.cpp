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

// Function: sub_001BF2D8
// Address: 0x1bf2d8 - 0x1bf320
void sub_001BF2D8_0x1bf2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF2D8_0x1bf2d8");
#endif

    ctx->pc = 0x1bf2d8u;

    // 0x1bf2d8: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x1bf2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf2dc: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1bf2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x1bf2e0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bf2e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1bf2e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf2e8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bf2e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bf2ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bf2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf2f0: 0x0  nop
    ctx->pc = 0x1bf2f0u;
    // NOP
    // 0x1bf2f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF2F4u;
    {
        const bool branch_taken_0x1bf2f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2F4u;
        // 0x1bf2f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2f4) {
            ctx->pc = 0x1BF314u;
            goto label_1bf314;
        }
    }
    ctx->pc = 0x1BF2FCu;
    // 0x1bf2fc: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1bf2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf300: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1bf300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf304: 0x0  nop
    ctx->pc = 0x1bf304u;
    // NOP
    // 0x1bf308: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF308u;
    {
        const bool branch_taken_0x1bf308 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF308u;
        // 0x1bf30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf308) {
            ctx->pc = 0x1BF314u;
            goto label_1bf314;
        }
    }
    ctx->pc = 0x1BF310u;
    // 0x1bf310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf314:
    // 0x1bf314: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF31Cu;
    // 0x1bf31c: 0x0  nop
    ctx->pc = 0x1bf31cu;
    // NOP
    ctx->pc = 0x1bf320u;
}
