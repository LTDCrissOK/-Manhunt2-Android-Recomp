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

// Function: sub_001F71C0
// Address: 0x1f71c0 - 0x1f7258
void sub_001F71C0_0x1f71c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F71C0_0x1f71c0");
#endif

    ctx->pc = 0x1f71c0u;

    // 0x1f71c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f71c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f71c4: 0x0  nop
    ctx->pc = 0x1f71c4u;
    // NOP
    // 0x1f71c8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1f71c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f71cc: 0x0  nop
    ctx->pc = 0x1f71ccu;
    // NOP
    // 0x1f71d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F71D0u;
    {
        const bool branch_taken_0x1f71d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F71D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71D0u;
        // 0x1f71d4: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71d0) {
            ctx->pc = 0x1F71E0u;
            goto label_1f71e0;
        }
    }
    ctx->pc = 0x1F71D8u;
    // 0x1f71d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F71D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71D8u;
        // 0x1f71dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F71D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F71E0u;
label_1f71e0:
    // 0x1f71e0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1f71e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1f71e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f71e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f71e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f71e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f71ec: 0x0  nop
    ctx->pc = 0x1f71ecu;
    // NOP
    // 0x1f71f0: 0x46006082  mul.s       $f2, $f12, $f0
    ctx->pc = 0x1f71f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1f71f4: 0x46026836  c.le.s      $f13, $f2
    ctx->pc = 0x1f71f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f71f8: 0x0  nop
    ctx->pc = 0x1f71f8u;
    // NOP
    // 0x1f71fc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1F71FCu;
    {
        const bool branch_taken_0x1f71fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f71fc) {
            ctx->pc = 0x1F7248u;
            goto label_1f7248;
        }
    }
    ctx->pc = 0x1F7204u;
    // 0x1f7204: 0x46026841  sub.s       $f1, $f13, $f2
    ctx->pc = 0x1f7204u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x1f7208: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f7208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f720c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f720cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7210: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x1f7210u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x1f7214: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1f7214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f7218: 0x0  nop
    ctx->pc = 0x1f7218u;
    // NOP
    // 0x1f721c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1f721cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1f7220: 0x0  nop
    ctx->pc = 0x1f7220u;
    // NOP
    // 0x1f7224: 0x0  nop
    ctx->pc = 0x1f7224u;
    // NOP
    // 0x1f7228: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1f7228u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1f722c: 0x46010069  min.s       $f1, $f0, $f1
    ctx->pc = 0x1f722cu;
    ctx->f[1] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1f7230: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f7230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f7234: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1f7234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1f7238: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f7238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f723c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f723cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f7240: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7240u;
        // 0x1f7244: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7248u;
label_1f7248:
    // 0x1f7248: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7250u;
    // 0x1f7250: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f7250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7254: 0x0  nop
    ctx->pc = 0x1f7254u;
    // NOP
    ctx->pc = 0x1f7258u;
}
