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

// Function: sub_002821C0
// Address: 0x2821c0 - 0x282248
void sub_002821C0_0x2821c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002821C0_0x2821c0");
#endif

    ctx->pc = 0x2821c0u;

    // 0x2821c0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2821c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2821c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2821c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2821c8: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x2821c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x2821cc: 0x8c43016c  lw          $v1, 0x16C($v0)
    ctx->pc = 0x2821ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66CC94u));
    // 0x2821d0: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2821D0u;
    {
        const bool branch_taken_0x2821d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2821D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821D0u;
        // 0x2821d4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821d0) {
            ctx->pc = 0x282240u;
            goto label_282240;
        }
    }
    ctx->pc = 0x2821D8u;
    // 0x2821d8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2821d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x2821dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2821DCu;
    {
        const bool branch_taken_0x2821dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2821E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821DCu;
        // 0x2821e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821dc) {
            ctx->pc = 0x2821F8u;
            goto label_2821f8;
        }
    }
    ctx->pc = 0x2821E4u;
    // 0x2821e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2821e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2821e8: 0x0  nop
    ctx->pc = 0x2821e8u;
    // NOP
    // 0x2821ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2821ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2821f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2821F0u;
    {
        const bool branch_taken_0x2821f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821f0) {
            ctx->pc = 0x282210u;
            goto label_282210;
        }
    }
    ctx->pc = 0x2821F8u;
label_2821f8:
    // 0x2821f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2821f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2821fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2821fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x282200: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282204: 0x0  nop
    ctx->pc = 0x282204u;
    // NOP
    // 0x282208: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x282208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28220c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28220cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_282210:
    // 0x282210: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x282210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x282214: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x282214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x282218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28221c: 0x24a3cb28  addiu       $v1, $a1, -0x34D8
    ctx->pc = 0x28221cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953768));
    // 0x282220: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x282220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282224: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282224u;
    {
        const bool branch_taken_0x282224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x282228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282224u;
        // 0x282228: 0xe4600170  swc1        $f0, 0x170($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282224) {
            ctx->pc = 0x28223Cu;
            goto label_28223c;
        }
    }
    ctx->pc = 0x28222Cu;
    // 0x28222c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282230: 0xac64016c  sw          $a0, 0x16C($v1)
    ctx->pc = 0x282230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 364), GPR_U32(ctx, 4));
    // 0x282234: 0x3e00008  jr          $ra
    ctx->pc = 0x282234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282234u;
        // 0x282238: 0xa0620174  sb          $v0, 0x174($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 372), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28223Cu;
label_28223c:
    // 0x28223c: 0xa0600174  sb          $zero, 0x174($v1)
    ctx->pc = 0x28223cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 372), (uint8_t)GPR_U32(ctx, 0));
label_282240:
    // 0x282240: 0x3e00008  jr          $ra
    ctx->pc = 0x282240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282248u;
}
