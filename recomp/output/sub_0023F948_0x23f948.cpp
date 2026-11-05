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

// Function: sub_0023F948
// Address: 0x23f948 - 0x23f9a0
void sub_0023F948_0x23f948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F948_0x23f948");
#endif

    ctx->pc = 0x23f948u;

    // 0x23f948: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x23f948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x23f94c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x23f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x23f950: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F950u;
    {
        const bool branch_taken_0x23f950 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F950u;
        // 0x23f954: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f950) {
            ctx->pc = 0x23F96Cu;
            goto label_23f96c;
        }
    }
    ctx->pc = 0x23F958u;
    // 0x23f958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23f958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23f95c: 0x0  nop
    ctx->pc = 0x23f95cu;
    // NOP
    // 0x23f960: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23f960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23f964: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23F964u;
    {
        const bool branch_taken_0x23f964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f964) {
            ctx->pc = 0x23F984u;
            goto label_23f984;
        }
    }
    ctx->pc = 0x23F96Cu;
label_23f96c:
    // 0x23f96c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f970: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23f970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23f974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23f974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23f978: 0x0  nop
    ctx->pc = 0x23f978u;
    // NOP
    // 0x23f97c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23f97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23f980: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23f980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23f984:
    // 0x23f984: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x23f984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x23f988: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x23f988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x23f98c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f990: 0x0  nop
    ctx->pc = 0x23f990u;
    // NOP
    // 0x23f994: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23f994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23f998: 0x3e00008  jr          $ra
    ctx->pc = 0x23F998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F998u;
        // 0x23f99c: 0xe4800fc0  swc1        $f0, 0xFC0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4032), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F9A0u;
}
