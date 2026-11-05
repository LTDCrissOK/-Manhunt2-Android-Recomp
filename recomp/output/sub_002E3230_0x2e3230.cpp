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

// Function: sub_002E3230
// Address: 0x2e3230 - 0x2e32a8
void sub_002E3230_0x2e3230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3230_0x2e3230");
#endif

    ctx->pc = 0x2e3230u;

    // 0x2e3230: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e3230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3234: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x2e3234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3238: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2e3238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e323c: 0x0  nop
    ctx->pc = 0x2e323cu;
    // NOP
    // 0x2e3240: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x2E3240u;
    {
        const bool branch_taken_0x2e3240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3240) {
            ctx->pc = 0x2E32A0u;
            goto label_2e32a0;
        }
    }
    ctx->pc = 0x2E3248u;
    // 0x2e3248: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x2e3248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e324c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e324cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3250: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e3250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e3254: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e3254u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e3258: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x2e3258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2e325c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2e325cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2e3260: 0x460c1834  c.lt.s      $f3, $f12
    ctx->pc = 0x2e3260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3264: 0x0  nop
    ctx->pc = 0x2e3264u;
    // NOP
    // 0x2e3268: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3268u;
    {
        const bool branch_taken_0x2e3268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3268) {
            ctx->pc = 0x2E3278u;
            goto label_2e3278;
        }
    }
    ctx->pc = 0x2E3270u;
    // 0x2e3270: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3270u;
    {
        const bool branch_taken_0x2e3270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3270u;
        // 0x2e3274: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3270) {
            ctx->pc = 0x2E3288u;
            goto label_2e3288;
        }
    }
    ctx->pc = 0x2E3278u;
label_2e3278:
    // 0x2e3278: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x2e3278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e327c: 0x0  nop
    ctx->pc = 0x2e327cu;
    // NOP
    // 0x2e3280: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E3280u;
    {
        const bool branch_taken_0x2e3280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3280) {
            ctx->pc = 0x2E3284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3280u;
            // 0x2e3284: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3288u;
            goto label_2e3288;
        }
    }
    ctx->pc = 0x2E3288u;
label_2e3288:
    // 0x2e3288: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x2e3288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e328c: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x2e328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3290: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e3290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e3294: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2e3294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2e3298: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e3298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e329c: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x2e329cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_2e32a0:
    // 0x2e32a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E32A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E32A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E32A8u;
}
