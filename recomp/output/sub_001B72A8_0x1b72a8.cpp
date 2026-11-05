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

// Function: sub_001B72A8
// Address: 0x1b72a8 - 0x1b7318
void sub_001B72A8_0x1b72a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B72A8_0x1b72a8");
#endif

    ctx->pc = 0x1b72a8u;

    // 0x1b72a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b72ac: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b72acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b72b0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B72B0u;
    {
        const bool branch_taken_0x1b72b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72B0u;
        // 0x1b72b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72b0) {
            ctx->pc = 0x1B72CCu;
            goto label_1b72cc;
        }
    }
    ctx->pc = 0x1B72B8u;
    // 0x1b72b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b72b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b72bc: 0x0  nop
    ctx->pc = 0x1b72bcu;
    // NOP
    // 0x1b72c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b72c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b72c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B72C4u;
    {
        const bool branch_taken_0x1b72c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b72c4) {
            ctx->pc = 0x1B72E4u;
            goto label_1b72e4;
        }
    }
    ctx->pc = 0x1B72CCu;
label_1b72cc:
    // 0x1b72cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b72ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b72d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b72d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b72d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b72d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b72d8: 0x0  nop
    ctx->pc = 0x1b72d8u;
    // NOP
    // 0x1b72dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b72dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b72e0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b72e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b72e4:
    // 0x1b72e4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b72e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b72e8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b72e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b72ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b72ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b72f0: 0xc481020c  lwc1        $f1, 0x20C($a0)
    ctx->pc = 0x1b72f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b72f4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b72f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b72f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b72f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b72fc: 0x0  nop
    ctx->pc = 0x1b72fcu;
    // NOP
    // 0x1b7300: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7300u;
    {
        const bool branch_taken_0x1b7300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7300u;
        // 0x1b7304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7300) {
            ctx->pc = 0x1B7310u;
            goto label_1b7310;
        }
    }
    ctx->pc = 0x1B7308u;
    // 0x1b7308: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7308u;
        // 0x1b730c: 0x8c8200cc  lw          $v0, 0xCC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7310u;
label_1b7310:
    // 0x1b7310: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7318u;
}
