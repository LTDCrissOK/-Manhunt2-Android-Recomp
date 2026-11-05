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

// Function: sub_002FC988
// Address: 0x2fc988 - 0x2fca00
void sub_002FC988_0x2fc988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC988_0x2fc988");
#endif

    ctx->pc = 0x2fc988u;

    // 0x2fc988: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fc988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2fc98c: 0x9062b820  lbu         $v0, -0x47E0($v1)
    ctx->pc = 0x2fc98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FB820u));
    // 0x2fc990: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC990u;
    {
        const bool branch_taken_0x2fc990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC990u;
        // 0x2fc994: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc990) {
            ctx->pc = 0x2FC9F8u;
            goto label_2fc9f8;
        }
    }
    ctx->pc = 0x2FC998u;
    // 0x2fc998: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2fc998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x2fc99c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC99Cu;
    {
        const bool branch_taken_0x2fc99c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC99Cu;
        // 0x2fc9a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc99c) {
            ctx->pc = 0x2FC9B8u;
            goto label_2fc9b8;
        }
    }
    ctx->pc = 0x2FC9A4u;
    // 0x2fc9a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fc9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fc9a8: 0x0  nop
    ctx->pc = 0x2fc9a8u;
    // NOP
    // 0x2fc9ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fc9acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fc9b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC9B0u;
    {
        const bool branch_taken_0x2fc9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc9b0) {
            ctx->pc = 0x2FC9D0u;
            goto label_2fc9d0;
        }
    }
    ctx->pc = 0x2FC9B8u;
label_2fc9b8:
    // 0x2fc9b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fc9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fc9bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fc9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fc9c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fc9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fc9c4: 0x0  nop
    ctx->pc = 0x2fc9c4u;
    // NOP
    // 0x2fc9c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fc9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fc9cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2fc9ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2fc9d0:
    // 0x2fc9d0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2fc9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2fc9d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2fc9d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2fc9d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc9dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fc9e0: 0xc441b818  lwc1        $f1, -0x47E8($v0)
    ctx->pc = 0x2fc9e0u;
    { uint32_t bits = FAST_READ32(0x3FB818u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc9e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2fc9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2fc9e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc9ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fc9ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fc9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9F0u;
        // 0x2fc9f4: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC9F8u;
label_2fc9f8:
    // 0x2fc9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9F8u;
        // 0x2fc9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCA00u;
}
