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

// Function: sub_001866C8
// Address: 0x1866c8 - 0x186740
void sub_001866C8_0x1866c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001866C8_0x1866c8");
#endif

    ctx->pc = 0x1866c8u;

    // 0x1866c8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1866c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1866cc: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x1866ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x1866d0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1866d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1866d4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1866D4u;
    {
        const bool branch_taken_0x1866d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1866D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866D4u;
        // 0x1866d8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866d4) {
            ctx->pc = 0x186734u;
            goto label_186734;
        }
    }
    ctx->pc = 0x1866DCu;
    // 0x1866dc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1866dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1866e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1866E0u;
    {
        const bool branch_taken_0x1866e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1866E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866E0u;
        // 0x1866e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866e0) {
            ctx->pc = 0x1866FCu;
            goto label_1866fc;
        }
    }
    ctx->pc = 0x1866E8u;
    // 0x1866e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1866e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1866ec: 0x0  nop
    ctx->pc = 0x1866ecu;
    // NOP
    // 0x1866f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1866f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1866f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1866F4u;
    {
        const bool branch_taken_0x1866f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1866f4) {
            ctx->pc = 0x186714u;
            goto label_186714;
        }
    }
    ctx->pc = 0x1866FCu;
label_1866fc:
    // 0x1866fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1866fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x186700: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x186700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x186704: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x186704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186708: 0x0  nop
    ctx->pc = 0x186708u;
    // NOP
    // 0x18670c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18670cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x186710: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x186710u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_186714:
    // 0x186714: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x186714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x186718: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x186718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18671c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18671cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186720: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x186720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x186724: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x186724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186728: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x186728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18672c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18672cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x186730: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x186730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_186734:
    // 0x186734: 0x3e00008  jr          $ra
    ctx->pc = 0x186734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18673Cu;
    // 0x18673c: 0x0  nop
    ctx->pc = 0x18673cu;
    // NOP
    ctx->pc = 0x186740u;
}
