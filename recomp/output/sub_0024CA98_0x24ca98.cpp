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

// Function: sub_0024CA98
// Address: 0x24ca98 - 0x24cb78
void sub_0024CA98_0x24ca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CA98_0x24ca98");
#endif

    switch (ctx->pc) {
        case 0x24caacu: goto label_24caac;
        case 0x24cac0u: goto label_24cac0;
        default: break;
    }

    ctx->pc = 0x24ca98u;

    // 0x24ca98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ca98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ca9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ca9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24caa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24caa4: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x24CAA4u;
    SET_GPR_U32(ctx, 31, 0x24CAACu);
    ctx->pc = 0x24CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAA4u;
    // 0x24caa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x24CAA4u, 0x24CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAACu;
label_24caac:
    // 0x24caac: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24caacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24cab0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x24cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x24cab4: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x24cab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x24cab8: 0xc07a4ce  jal         func_1E9338
    ctx->pc = 0x24CAB8u;
    SET_GPR_U32(ctx, 31, 0x24CAC0u);
    ctx->pc = 0x24CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAB8u;
    // 0x24cabc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9338u, 0x24CAB8u, 0x24CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAC0u;
label_24cac0:
    // 0x24cac0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24CAC0u;
    {
        const bool branch_taken_0x24cac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAC0u;
        // 0x24cac4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cac0) {
            ctx->pc = 0x24CAD0u;
            goto label_24cad0;
        }
    }
    ctx->pc = 0x24CAC8u;
    // 0x24cac8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x24CAC8u;
    {
        const bool branch_taken_0x24cac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAC8u;
        // 0x24cacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cac8) {
            ctx->pc = 0x24CB54u;
            goto label_24cb54;
        }
    }
    ctx->pc = 0x24CAD0u;
label_24cad0:
    // 0x24cad0: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x24cad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24cad4: 0x8c622b20  lw          $v0, 0x2B20($v1)
    ctx->pc = 0x24cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11040)));
    // 0x24cad8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cadc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x24cadcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24cae0: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x24cae0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24cae4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x24cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x24cae8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24cae8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24caec: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x24caecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24caf0: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x24caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x24caf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24caf8: 0xacc40024  sw          $a0, 0x24($a2)
    ctx->pc = 0x24caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 4));
    // 0x24cafc: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x24cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x24cb00: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x24cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x24cb04: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x24cb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x24cb08: 0xacc4002c  sw          $a0, 0x2C($a2)
    ctx->pc = 0x24cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 4));
    // 0x24cb0c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x24cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x24cb10: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x24cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x24cb14: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x24cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x24cb18: 0xacc40034  sw          $a0, 0x34($a2)
    ctx->pc = 0x24cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 4));
    // 0x24cb1c: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x24cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x24cb20: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x24cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x24cb24: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x24cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cb28: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x24cb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x24cb2c: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x24cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x24cb30: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x24cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x24cb34: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x24cb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x24cb38: 0xacc40040  sw          $a0, 0x40($a2)
    ctx->pc = 0x24cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 4));
    // 0x24cb3c: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x24cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x24cb40: 0xacc30044  sw          $v1, 0x44($a2)
    ctx->pc = 0x24cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 3));
    // 0x24cb44: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x24cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x24cb48: 0xacc40050  sw          $a0, 0x50($a2)
    ctx->pc = 0x24cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 4));
    // 0x24cb4c: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x24cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x24cb50: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x24cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
label_24cb54:
    // 0x24cb54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cb54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cb58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24cb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24cb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x24CB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB5Cu;
        // 0x24cb60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CB64u;
    // 0x24cb64: 0x0  nop
    ctx->pc = 0x24cb64u;
    // NOP
    // 0x24cb68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x24cb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24cb6c: 0x0  nop
    ctx->pc = 0x24cb6cu;
    // NOP
    // 0x24cb70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x24cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24cb74: 0x0  nop
    ctx->pc = 0x24cb74u;
    // NOP
    ctx->pc = 0x24cb78u;
}
