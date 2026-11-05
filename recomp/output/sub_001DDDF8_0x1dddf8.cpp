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

// Function: sub_001DDDF8
// Address: 0x1dddf8 - 0x1ddee0
void sub_001DDDF8_0x1dddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDDF8_0x1dddf8");
#endif

    switch (ctx->pc) {
        case 0x1ddea0u: goto label_1ddea0;
        default: break;
    }

    ctx->pc = 0x1dddf8u;

    // 0x1dddf8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1dddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1dddfc: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1dddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dde00: 0xc44091b0  lwc1        $f0, -0x6E50($v0)
    ctx->pc = 0x1dde00u;
    { uint32_t bits = FAST_READ32(0x3F91B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dde04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dde08: 0x0  nop
    ctx->pc = 0x1dde08u;
    // NOP
    // 0x1dde0c: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x1DDE0Cu;
    {
        const bool branch_taken_0x1dde0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE0Cu;
        // 0x1dde10: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde0c) {
            ctx->pc = 0x1DDED8u;
            goto label_1dded8;
        }
    }
    ctx->pc = 0x1DDE14u;
    // 0x1dde14: 0x90c2004c  lbu         $v0, 0x4C($a2)
    ctx->pc = 0x1dde14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x1dde18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDE18u;
    {
        const bool branch_taken_0x1dde18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE18u;
        // 0x1dde1c: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde18) {
            ctx->pc = 0x1DDE38u;
            goto label_1dde38;
        }
    }
    ctx->pc = 0x1DDE20u;
    // 0x1dde20: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDE20u;
    {
        const bool branch_taken_0x1dde20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE20u;
        // 0x1dde24: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde20) {
            ctx->pc = 0x1DDE3Cu;
            goto label_1dde3c;
        }
    }
    ctx->pc = 0x1DDE28u;
    // 0x1dde28: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x1dde28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dde2c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x1dde2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x1dde30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DDE30u;
    {
        const bool branch_taken_0x1dde30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dde30) {
            ctx->pc = 0x1DDE68u;
            goto label_1dde68;
        }
    }
    ctx->pc = 0x1DDE38u;
label_1dde38:
    // 0x1dde38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1dde38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1dde3c:
    // 0x1dde3c: 0x8c4391b8  lw          $v1, -0x6E48($v0)
    ctx->pc = 0x1dde3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939064)));
    // 0x1dde40: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DDE40u;
    {
        const bool branch_taken_0x1dde40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE40u;
        // 0x1dde44: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde40) {
            ctx->pc = 0x1DDE70u;
            goto label_1dde70;
        }
    }
    ctx->pc = 0x1DDE48u;
    // 0x1dde48: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DDE48u;
    {
        const bool branch_taken_0x1dde48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE48u;
        // 0x1dde4c: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde48) {
            ctx->pc = 0x1DDE70u;
            goto label_1dde70;
        }
    }
    ctx->pc = 0x1DDE50u;
    // 0x1dde50: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x1dde50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dde54: 0x24632828  addiu       $v1, $v1, 0x2828
    ctx->pc = 0x1dde54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x1dde58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dde58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dde5c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1dde5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dde60: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDE60u;
    {
        const bool branch_taken_0x1dde60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE60u;
        // 0x1dde64: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde60) {
            ctx->pc = 0x1DDE70u;
            goto label_1dde70;
        }
    }
    ctx->pc = 0x1DDE68u;
label_1dde68:
    // 0x1dde68: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE68u;
        // 0x1dde6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDE70u;
label_1dde70:
    // 0x1dde70: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1dde70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1dde74: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1dde74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1dde78: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dde78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dde7c: 0xf84100b0  sqc2        $vf1, 0xB0($v0)
    ctx->pc = 0x1dde7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dde80: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1dde80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde84: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1dde84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dde88: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1dde88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dde8c: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x1dde8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1dde90: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1dde90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1dde94: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1dde94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dde98: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1dde98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1dde9c: 0x0  nop
    ctx->pc = 0x1dde9cu;
    // NOP
label_1ddea0:
    // 0x1ddea0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ddea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddea4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1ddea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1ddea8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1ddea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1ddeac: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1ddeacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1ddeb0: 0x14e9fffb  bne         $a3, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DDEB0u;
    {
        const bool branch_taken_0x1ddeb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x1DDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEB0u;
        // 0x1ddeb4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddeb0) {
            ctx->pc = 0x1DDEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddea0;
        }
    }
    ctx->pc = 0x1DDEB8u;
    // 0x1ddeb8: 0x254200b0  addiu       $v0, $t2, 0xB0
    ctx->pc = 0x1ddeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 176));
    // 0x1ddebc: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x1ddebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
    // 0x1ddec0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ddec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ddec4: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x1ddec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x1ddec8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ddec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ddecc: 0xacc20050  sw          $v0, 0x50($a2)
    ctx->pc = 0x1ddeccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 2));
    // 0x1dded0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1dded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dded4: 0xe56091b0  swc1        $f0, -0x6E50($t3)
    ctx->pc = 0x1dded4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294939056), bits); }
label_1dded8:
    // 0x1dded8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDED8u;
        // 0x1ddedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDEE0u;
}
