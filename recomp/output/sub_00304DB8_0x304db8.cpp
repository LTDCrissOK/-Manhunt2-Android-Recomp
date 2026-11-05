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

// Function: sub_00304DB8
// Address: 0x304db8 - 0x304e10
void sub_00304DB8_0x304db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304DB8_0x304db8");
#endif

    ctx->pc = 0x304db8u;

    // 0x304db8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x304db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x304dbc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x304dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x304dc0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x304DC0u;
    {
        const bool branch_taken_0x304dc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DC0u;
        // 0x304dc4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304dc0) {
            ctx->pc = 0x304DDCu;
            goto label_304ddc;
        }
    }
    ctx->pc = 0x304DC8u;
    // 0x304dc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x304dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304dcc: 0x0  nop
    ctx->pc = 0x304dccu;
    // NOP
    // 0x304dd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x304dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x304dd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x304DD4u;
    {
        const bool branch_taken_0x304dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304dd4) {
            ctx->pc = 0x304DF4u;
            goto label_304df4;
        }
    }
    ctx->pc = 0x304DDCu;
label_304ddc:
    // 0x304ddc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x304ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x304de0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x304de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x304de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x304de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304de8: 0x0  nop
    ctx->pc = 0x304de8u;
    // NOP
    // 0x304dec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x304decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x304df0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x304df0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_304df4:
    // 0x304df4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x304df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x304df8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x304df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x304dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x304dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304e00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x304e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x304e04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x304e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x304e08: 0x3e00008  jr          $ra
    ctx->pc = 0x304E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E08u;
        // 0x304e0c: 0xe440bb48  swc1        $f0, -0x44B8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949704), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304E10u;
}
