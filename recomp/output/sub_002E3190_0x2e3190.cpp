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

// Function: sub_002E3190
// Address: 0x2e3190 - 0x2e3230
void sub_002E3190_0x2e3190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3190_0x2e3190");
#endif

    ctx->pc = 0x2e3190u;

    // 0x2e3190: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e3190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e3194: 0xc482004c  lwc1        $f2, 0x4C($a0)
    ctx->pc = 0x2e3194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3198: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x2e3198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e319c: 0x0  nop
    ctx->pc = 0x2e319cu;
    // NOP
    // 0x2e31a0: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x2E31A0u;
    {
        const bool branch_taken_0x2e31a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e31a0) {
            ctx->pc = 0x2E3224u;
            goto label_2e3224;
        }
    }
    ctx->pc = 0x2E31A8u;
    // 0x2e31a8: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x2e31a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e31ac: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x2e31acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x2e31b0: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x2e31b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x2e31b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e31b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e31b8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2e31b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2e31bc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2e31bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e31c0: 0x0  nop
    ctx->pc = 0x2e31c0u;
    // NOP
    // 0x2e31c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E31C4u;
    {
        const bool branch_taken_0x2e31c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E31C4u;
        // 0x2e31c8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e31c4) {
            ctx->pc = 0x2E31D8u;
            goto label_2e31d8;
        }
    }
    ctx->pc = 0x2E31CCu;
    // 0x2e31cc: 0x0  nop
    ctx->pc = 0x2e31ccu;
    // NOP
    // 0x2e31d0: 0x0  nop
    ctx->pc = 0x2e31d0u;
    // NOP
    // 0x2e31d4: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x2e31d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
label_2e31d8:
    // 0x2e31d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e31d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e31dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e31dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e31e0: 0x0  nop
    ctx->pc = 0x2e31e0u;
    // NOP
    // 0x2e31e4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2e31e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e31e8: 0x0  nop
    ctx->pc = 0x2e31e8u;
    // NOP
    // 0x2e31ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E31ECu;
    {
        const bool branch_taken_0x2e31ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e31ec) {
            ctx->pc = 0x2E31FCu;
            goto label_2e31fc;
        }
    }
    ctx->pc = 0x2E31F4u;
    // 0x2e31f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E31F4u;
    {
        const bool branch_taken_0x2e31f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E31F4u;
        // 0x2e31f8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e31f4) {
            ctx->pc = 0x2E320Cu;
            goto label_2e320c;
        }
    }
    ctx->pc = 0x2E31FCu;
label_2e31fc:
    // 0x2e31fc: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x2e31fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3200: 0x0  nop
    ctx->pc = 0x2e3200u;
    // NOP
    // 0x2e3204: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E3204u;
    {
        const bool branch_taken_0x2e3204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3204) {
            ctx->pc = 0x2E3208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3204u;
            // 0x2e3208: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E320Cu;
            goto label_2e320c;
        }
    }
    ctx->pc = 0x2E320Cu;
label_2e320c:
    // 0x2e320c: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x2e320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3210: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2e3210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3214: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e3214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e3218: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2e3218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2e321c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e321cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e3220: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2e3220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_2e3224:
    // 0x2e3224: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E322Cu;
    // 0x2e322c: 0x0  nop
    ctx->pc = 0x2e322cu;
    // NOP
    ctx->pc = 0x2e3230u;
}
