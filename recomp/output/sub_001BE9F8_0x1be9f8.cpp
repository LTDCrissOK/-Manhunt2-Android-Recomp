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

// Function: sub_001BE9F8
// Address: 0x1be9f8 - 0x1bea58
void sub_001BE9F8_0x1be9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE9F8_0x1be9f8");
#endif

    ctx->pc = 0x1be9f8u;

    // 0x1be9f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1be9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1be9fc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1be9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1bea00: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEA00u;
    {
        const bool branch_taken_0x1bea00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA00u;
        // 0x1bea04: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea00) {
            ctx->pc = 0x1BEA1Cu;
            goto label_1bea1c;
        }
    }
    ctx->pc = 0x1BEA08u;
    // 0x1bea08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bea08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bea0c: 0x0  nop
    ctx->pc = 0x1bea0cu;
    // NOP
    // 0x1bea10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bea10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bea14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BEA14u;
    {
        const bool branch_taken_0x1bea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea14) {
            ctx->pc = 0x1BEA34u;
            goto label_1bea34;
        }
    }
    ctx->pc = 0x1BEA1Cu;
label_1bea1c:
    // 0x1bea1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bea1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bea20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bea24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bea24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bea28: 0x0  nop
    ctx->pc = 0x1bea28u;
    // NOP
    // 0x1bea2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bea2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bea30: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bea30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bea34:
    // 0x1bea34: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bea34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bea38: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bea38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bea3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bea3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bea40: 0x0  nop
    ctx->pc = 0x1bea40u;
    // NOP
    // 0x1bea44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bea44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bea48: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1bea48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1bea4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA4Cu;
        // 0x1bea50: 0xe4800364  swc1        $f0, 0x364($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 868), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEA54u;
    // 0x1bea54: 0x0  nop
    ctx->pc = 0x1bea54u;
    // NOP
    ctx->pc = 0x1bea58u;
}
