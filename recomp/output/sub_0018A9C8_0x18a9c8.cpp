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

// Function: sub_0018A9C8
// Address: 0x18a9c8 - 0x18aa38
void sub_0018A9C8_0x18a9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A9C8_0x18a9c8");
#endif

    ctx->pc = 0x18a9c8u;

    // 0x18a9c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18a9cc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x18a9d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A9D0u;
    {
        const bool branch_taken_0x18a9d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9D0u;
        // 0x18a9d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9d0) {
            ctx->pc = 0x18A9ECu;
            goto label_18a9ec;
        }
    }
    ctx->pc = 0x18A9D8u;
    // 0x18a9d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18a9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18a9dc: 0x0  nop
    ctx->pc = 0x18a9dcu;
    // NOP
    // 0x18a9e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18a9e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18a9e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A9E4u;
    {
        const bool branch_taken_0x18a9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a9e4) {
            ctx->pc = 0x18AA04u;
            goto label_18aa04;
        }
    }
    ctx->pc = 0x18A9ECu;
label_18a9ec:
    // 0x18a9ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18a9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18a9f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a9f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18a9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18a9f8: 0x0  nop
    ctx->pc = 0x18a9f8u;
    // NOP
    // 0x18a9fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18a9fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18aa00: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18aa00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18aa04:
    // 0x18aa04: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18aa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18aa08: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18aa08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18aa0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18aa0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18aa10: 0xc4810094  lwc1        $f1, 0x94($a0)
    ctx->pc = 0x18aa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aa14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18aa14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18aa18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18aa18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18aa1c: 0x0  nop
    ctx->pc = 0x18aa1cu;
    // NOP
    // 0x18aa20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18AA20u;
    {
        const bool branch_taken_0x18aa20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA20u;
        // 0x18aa24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa20) {
            ctx->pc = 0x18AA2Cu;
            goto label_18aa2c;
        }
    }
    ctx->pc = 0x18AA28u;
    // 0x18aa28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18aa28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18aa2c:
    // 0x18aa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x18AA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AA34u;
    // 0x18aa34: 0x0  nop
    ctx->pc = 0x18aa34u;
    // NOP
    ctx->pc = 0x18aa38u;
}
