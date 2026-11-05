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

// Function: sub_001B7238
// Address: 0x1b7238 - 0x1b72a8
void sub_001B7238_0x1b7238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7238_0x1b7238");
#endif

    ctx->pc = 0x1b7238u;

    // 0x1b7238: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b7238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b723c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b723cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b7240: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7240u;
    {
        const bool branch_taken_0x1b7240 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7240u;
        // 0x1b7244: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7240) {
            ctx->pc = 0x1B725Cu;
            goto label_1b725c;
        }
    }
    ctx->pc = 0x1B7248u;
    // 0x1b7248: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b724c: 0x0  nop
    ctx->pc = 0x1b724cu;
    // NOP
    // 0x1b7250: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7254: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7254u;
    {
        const bool branch_taken_0x1b7254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7254) {
            ctx->pc = 0x1B7274u;
            goto label_1b7274;
        }
    }
    ctx->pc = 0x1B725Cu;
label_1b725c:
    // 0x1b725c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b725cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7260: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7264: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7268: 0x0  nop
    ctx->pc = 0x1b7268u;
    // NOP
    // 0x1b726c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b726cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7270: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b7270u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b7274:
    // 0x1b7274: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b7274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b7278: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b7278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b727c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b727cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7280: 0xc4810208  lwc1        $f1, 0x208($a0)
    ctx->pc = 0x1b7280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7284: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7288: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b728c: 0x0  nop
    ctx->pc = 0x1b728cu;
    // NOP
    // 0x1b7290: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7290u;
    {
        const bool branch_taken_0x1b7290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7290u;
        // 0x1b7294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7290) {
            ctx->pc = 0x1B72A0u;
            goto label_1b72a0;
        }
    }
    ctx->pc = 0x1B7298u;
    // 0x1b7298: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7298u;
        // 0x1b729c: 0x8c8200c8  lw          $v0, 0xC8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B72A0u;
label_1b72a0:
    // 0x1b72a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B72A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B72A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B72A8u;
}
