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

// Function: sub_00307CE0
// Address: 0x307ce0 - 0x307d88
void sub_00307CE0_0x307ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307CE0_0x307ce0");
#endif

    switch (ctx->pc) {
        case 0x307cf4u: goto label_307cf4;
        case 0x307d74u: goto label_307d74;
        default: break;
    }

    ctx->pc = 0x307ce0u;

    // 0x307ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x307ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307ce8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x307ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x307cec: 0xc091144  jal         func_244510
    ctx->pc = 0x307CECu;
    SET_GPR_U32(ctx, 31, 0x307CF4u);
    ctx->pc = 0x307CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CECu;
    // 0x307cf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244510u, 0x307CECu, 0x307CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CF4u;
label_307cf4:
    // 0x307cf4: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x307cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x307cf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x307cfc: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x307CFCu;
    {
        const bool branch_taken_0x307cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307cfc) {
            ctx->pc = 0x307D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307CFCu;
            // 0x307d00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D78u;
            goto label_307d78;
        }
    }
    ctx->pc = 0x307D04u;
    // 0x307d04: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x307d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x307d08: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x307d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x307d0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x307d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x307d10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x307d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307d14: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x307d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x307d18: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x307d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307d1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x307d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307d20: 0x0  nop
    ctx->pc = 0x307d20u;
    // NOP
    // 0x307d24: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x307D24u;
    {
        const bool branch_taken_0x307d24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x307D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D24u;
        // 0x307d28: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d24) {
            ctx->pc = 0x307D74u;
            goto label_307d74;
        }
    }
    ctx->pc = 0x307D2Cu;
    // 0x307d2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x307d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x307d30: 0xc4819708  lwc1        $f1, -0x68F8($a0)
    ctx->pc = 0x307d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294940424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307d34: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x307d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x307d38: 0xc4409700  lwc1        $f0, -0x6900($v0)
    ctx->pc = 0x307d38u;
    { uint32_t bits = FAST_READ32(0x3F9700u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307d3c: 0xc46eb788  lwc1        $f14, -0x4878($v1)
    ctx->pc = 0x307d3cu;
    { uint32_t bits = FAST_READ32(0x3FB788u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x307d40: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x307d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x307d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x307d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x307d48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x307d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d50: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x307d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x307d54: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x307d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x307d58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x307d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307d5c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x307d5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x307d60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x307d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x307d64: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x307d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x307d68: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x307d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x307d6c: 0xc0bd346  jal         func_2F4D18
    ctx->pc = 0x307D6Cu;
    SET_GPR_U32(ctx, 31, 0x307D74u);
    ctx->pc = 0x307D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307D6Cu;
    // 0x307d70: 0x460d0b40  add.s       $f13, $f1, $f13 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D18u, 0x307D6Cu, 0x307D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D74u;
label_307d74:
    // 0x307d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x307d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307d78:
    // 0x307d78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x307d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x307d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x307D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D7Cu;
        // 0x307d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307D84u;
    // 0x307d84: 0x0  nop
    ctx->pc = 0x307d84u;
    // NOP
    ctx->pc = 0x307d88u;
}
