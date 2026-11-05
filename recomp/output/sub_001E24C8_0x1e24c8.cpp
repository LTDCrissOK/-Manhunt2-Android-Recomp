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

// Function: sub_001E24C8
// Address: 0x1e24c8 - 0x1e25a0
void sub_001E24C8_0x1e24c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E24C8_0x1e24c8");
#endif

    ctx->pc = 0x1e24c8u;

    // 0x1e24c8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1e24c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e24cc: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1e24ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e24d0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e24d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e24d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e24d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e24d8: 0x0  nop
    ctx->pc = 0x1e24d8u;
    // NOP
    // 0x1e24dc: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1E24DCu;
    {
        const bool branch_taken_0x1e24dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e24dc) {
            ctx->pc = 0x1E24E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E24DCu;
            // 0x1e24e0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E24FCu;
            goto label_1e24fc;
        }
    }
    ctx->pc = 0x1E24E4u;
    // 0x1e24e4: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1e24e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e24e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e24e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e24ec: 0x0  nop
    ctx->pc = 0x1e24ecu;
    // NOP
    // 0x1e24f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E24F0u;
    {
        const bool branch_taken_0x1e24f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24F0u;
        // 0x1e24f4: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24f0) {
            ctx->pc = 0x1E2504u;
            goto label_1e2504;
        }
    }
    ctx->pc = 0x1E24F8u;
    // 0x1e24f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e24f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e24fc:
    // 0x1e24fc: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1e24fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e2500: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e2500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2504:
    // 0x1e2504: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1e2504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1e2508: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e2508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e250c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e250cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2510: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1e2510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2514: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2518: 0x0  nop
    ctx->pc = 0x1e2518u;
    // NOP
    // 0x1e251c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E251Cu;
    {
        const bool branch_taken_0x1e251c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E251Cu;
        // 0x1e2520: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e251c) {
            ctx->pc = 0x1E2538u;
            goto label_1e2538;
        }
    }
    ctx->pc = 0x1E2524u;
    // 0x1e2524: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x1e2524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2528: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e252c: 0x0  nop
    ctx->pc = 0x1e252cu;
    // NOP
    // 0x1e2530: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2530u;
    {
        const bool branch_taken_0x1e2530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2530) {
            ctx->pc = 0x1E2534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2530u;
            // 0x1e2534: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2548u;
            goto label_1e2548;
        }
    }
    ctx->pc = 0x1E2538u;
label_1e2538:
    // 0x1e2538: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e253c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e253cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e2540: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e2540u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e2544: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1e2544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2548:
    // 0x1e2548: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x1e2548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e254c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e254cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2550: 0x0  nop
    ctx->pc = 0x1e2550u;
    // NOP
    // 0x1e2554: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2554u;
    {
        const bool branch_taken_0x1e2554 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2554) {
            ctx->pc = 0x1E2558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2554u;
            // 0x1e2558: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2574u;
            goto label_1e2574;
        }
    }
    ctx->pc = 0x1E255Cu;
    // 0x1e255c: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x1e255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2560: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2564: 0x0  nop
    ctx->pc = 0x1e2564u;
    // NOP
    // 0x1e2568: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2568u;
    {
        const bool branch_taken_0x1e2568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2568) {
            ctx->pc = 0x1E256Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2568u;
            // 0x1e256c: 0xc4800020  lwc1        $f0, 0x20($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2580u;
            goto label_1e2580;
        }
    }
    ctx->pc = 0x1E2570u;
    // 0x1e2570: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e2574:
    // 0x1e2574: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e2574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e2578: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e2578u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e257c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1e257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2580:
    // 0x1e2580: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e2580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e2584: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e2584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2588: 0x0  nop
    ctx->pc = 0x1e2588u;
    // NOP
    // 0x1e258c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E258Cu;
    {
        const bool branch_taken_0x1e258c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E258Cu;
        // 0x1e2590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e258c) {
            ctx->pc = 0x1E2598u;
            goto label_1e2598;
        }
    }
    ctx->pc = 0x1E2594u;
    // 0x1e2594: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2598:
    // 0x1e2598: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E25A0u;
}
