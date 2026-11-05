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

// Function: sub_001DFC10
// Address: 0x1dfc10 - 0x1dfcd8
void sub_001DFC10_0x1dfc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFC10_0x1dfc10");
#endif

    switch (ctx->pc) {
        case 0x1dfc78u: goto label_1dfc78;
        default: break;
    }

    ctx->pc = 0x1dfc10u;

    // 0x1dfc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dfc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dfc14: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1dfc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1dfc18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfc1c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1dfc1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc20: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x1dfc20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x1dfc24: 0x8c62d9a4  lw          $v0, -0x265C($v1)
    ctx->pc = 0x1dfc24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x45D9A4u));
    // 0x1dfc28: 0x8e042b1c  lw          $a0, 0x2B1C($s0)
    ctx->pc = 0x1dfc28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1dfc2c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFC2Cu;
    {
        const bool branch_taken_0x1dfc2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC2Cu;
        // 0x1dfc30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc2c) {
            ctx->pc = 0x1DFC3Cu;
            goto label_1dfc3c;
        }
    }
    ctx->pc = 0x1DFC34u;
    // 0x1dfc34: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1DFC34u;
    {
        const bool branch_taken_0x1dfc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC34u;
        // 0x1dfc38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc34) {
            ctx->pc = 0x1DFCC8u;
            goto label_1dfcc8;
        }
    }
    ctx->pc = 0x1DFC3Cu;
label_1dfc3c:
    // 0x1dfc3c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dfc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dfc40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1dfc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dfc44: 0x8c652b20  lw          $a1, 0x2B20($v1)
    ctx->pc = 0x1dfc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11040)));
    // 0x1dfc48: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1dfc48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1dfc4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dfc50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dfc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfc54: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x1dfc54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x1dfc58: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dfc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dfc5c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1dfc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x1dfc60: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1dfc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1dfc64: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x1dfc64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x1dfc68: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1dfc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1dfc6c: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x1dfc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x1dfc70: 0xc0c34f6  jal         func_30D3D8
    ctx->pc = 0x1DFC70u;
    SET_GPR_U32(ctx, 31, 0x1DFC78u);
    ctx->pc = 0x1DFC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC70u;
    // 0x1dfc74: 0x8ce4000c  lw          $a0, 0xC($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D3D8u, 0x1DFC70u, 0x1DFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC78u;
label_1dfc78:
    // 0x1dfc78: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1dfc78u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1dfc7c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1dfc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1dfc80: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1dfc80u;
    { uint32_t bits = FAST_READ32(0x490104u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfc84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfc88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dfc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dfc8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1dfc8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1dfc90: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1dfc90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfc94: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1dfc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x490104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490104u, _value); } while (0); }
    // 0x1dfc98: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1DFC98u;
    {
        const bool branch_taken_0x1dfc98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC98u;
        // 0x1dfc9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc98) {
            ctx->pc = 0x1DFCC8u;
            goto label_1dfcc8;
        }
    }
    ctx->pc = 0x1DFCA0u;
    // 0x1dfca0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1dfca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1dfca4: 0xc4400108  lwc1        $f0, 0x108($v0)
    ctx->pc = 0x1dfca4u;
    { uint32_t bits = FAST_READ32(0x490108u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfca8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1dfca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfcac: 0x0  nop
    ctx->pc = 0x1dfcacu;
    // NOP
    // 0x1dfcb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DFCB0u;
    {
        const bool branch_taken_0x1dfcb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dfcb0) {
            ctx->pc = 0x1DFCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFCB0u;
            // 0x1dfcb4: 0xe4420108  swc1        $f2, 0x108($v0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFCB8u;
            goto label_1dfcb8;
        }
    }
    ctx->pc = 0x1DFCB8u;
label_1dfcb8:
    // 0x1dfcb8: 0x8e032b1c  lw          $v1, 0x2B1C($s0)
    ctx->pc = 0x1dfcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11036)));
    // 0x1dfcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfcc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dfcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dfcc4: 0xae032b1c  sw          $v1, 0x2B1C($s0)
    ctx->pc = 0x1dfcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11036), GPR_U32(ctx, 3));
label_1dfcc8:
    // 0x1dfcc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfccc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dfcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCD0u;
        // 0x1dfcd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFCD8u;
}
