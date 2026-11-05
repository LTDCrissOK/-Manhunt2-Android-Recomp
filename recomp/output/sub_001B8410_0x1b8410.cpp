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

// Function: sub_001B8410
// Address: 0x1b8410 - 0x1b8468
void sub_001B8410_0x1b8410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8410_0x1b8410");
#endif

    ctx->pc = 0x1b8410u;

    // 0x1b8410: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b8410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b8414: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b8414u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b8418: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8418u;
    {
        const bool branch_taken_0x1b8418 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8418u;
        // 0x1b841c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8418) {
            ctx->pc = 0x1B8434u;
            goto label_1b8434;
        }
    }
    ctx->pc = 0x1B8420u;
    // 0x1b8420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b8420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8424: 0x0  nop
    ctx->pc = 0x1b8424u;
    // NOP
    // 0x1b8428: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b8428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b842c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B842Cu;
    {
        const bool branch_taken_0x1b842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b842c) {
            ctx->pc = 0x1B844Cu;
            goto label_1b844c;
        }
    }
    ctx->pc = 0x1B8434u;
label_1b8434:
    // 0x1b8434: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b8438: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b8438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b843c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b843cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8440: 0x0  nop
    ctx->pc = 0x1b8440u;
    // NOP
    // 0x1b8444: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b8444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b8448: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b8448u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b844c:
    // 0x1b844c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b844cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b8450: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b8450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b8454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8458: 0x0  nop
    ctx->pc = 0x1b8458u;
    // NOP
    // 0x1b845c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b845cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b8460: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8460u;
        // 0x1b8464: 0xe480017c  swc1        $f0, 0x17C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 380), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8468u;
}
