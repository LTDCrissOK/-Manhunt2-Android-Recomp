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

// Function: sub_00180AB8
// Address: 0x180ab8 - 0x180b10
void sub_00180AB8_0x180ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180AB8_0x180ab8");
#endif

    ctx->pc = 0x180ab8u;

    // 0x180ab8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180abc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x180abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x180ac0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180AC0u;
    {
        const bool branch_taken_0x180ac0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x180AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AC0u;
        // 0x180ac4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ac0) {
            ctx->pc = 0x180ADCu;
            goto label_180adc;
        }
    }
    ctx->pc = 0x180AC8u;
    // 0x180ac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180acc: 0x0  nop
    ctx->pc = 0x180accu;
    // NOP
    // 0x180ad0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x180ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x180ad4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x180AD4u;
    {
        const bool branch_taken_0x180ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180ad4) {
            ctx->pc = 0x180AF4u;
            goto label_180af4;
        }
    }
    ctx->pc = 0x180ADCu;
label_180adc:
    // 0x180adc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x180adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x180ae0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x180ae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180ae8: 0x0  nop
    ctx->pc = 0x180ae8u;
    // NOP
    // 0x180aec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x180aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x180af0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x180af0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_180af4:
    // 0x180af4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x180af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x180af8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x180af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x180afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180b00: 0x0  nop
    ctx->pc = 0x180b00u;
    // NOP
    // 0x180b04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x180b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x180b08: 0x3e00008  jr          $ra
    ctx->pc = 0x180B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B08u;
        // 0x180b0c: 0xe4800064  swc1        $f0, 0x64($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180B10u;
}
