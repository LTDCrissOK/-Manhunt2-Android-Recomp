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

// Function: sub_0026AE50
// Address: 0x26ae50 - 0x26af10
void sub_0026AE50_0x26ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AE50_0x26ae50");
#endif

    switch (ctx->pc) {
        case 0x26ae6cu: goto label_26ae6c;
        case 0x26ae94u: goto label_26ae94;
        case 0x26aeb8u: goto label_26aeb8;
        case 0x26aec8u: goto label_26aec8;
        case 0x26aed8u: goto label_26aed8;
        case 0x26aee4u: goto label_26aee4;
        case 0x26aeecu: goto label_26aeec;
        case 0x26aef8u: goto label_26aef8;
        default: break;
    }

    ctx->pc = 0x26ae50u;

    // 0x26ae50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ae54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26ae58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26ae5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26ae5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ae64: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x26AE64u;
    SET_GPR_U32(ctx, 31, 0x26AE6Cu);
    ctx->pc = 0x26AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE64u;
    // 0x26ae68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x26AE64u, 0x26AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE6Cu;
label_26ae6c:
    // 0x26ae6c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x26ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x26ae70: 0x26220230  addiu       $v0, $s1, 0x230
    ctx->pc = 0x26ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x26ae74: 0x246327c8  addiu       $v1, $v1, 0x27C8
    ctx->pc = 0x26ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10184));
    // 0x26ae78: 0xae200230  sw          $zero, 0x230($s1)
    ctx->pc = 0x26ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
    // 0x26ae7c: 0xae230218  sw          $v1, 0x218($s1)
    ctx->pc = 0x26ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 3));
    // 0x26ae80: 0x26240240  addiu       $a0, $s1, 0x240
    ctx->pc = 0x26ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x26ae84: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x26ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x26ae88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x26ae8c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26AE8Cu;
    SET_GPR_U32(ctx, 31, 0x26AE94u);
    ctx->pc = 0x26AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE8Cu;
    // 0x26ae90: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26AE8Cu, 0x26AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE94u;
label_26ae94:
    // 0x26ae94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26ae94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26ae98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ae98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ae9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26aea0: 0xae200258  sw          $zero, 0x258($s1)
    ctx->pc = 0x26aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 0));
    // 0x26aea4: 0x26240270  addiu       $a0, $s1, 0x270
    ctx->pc = 0x26aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    // 0x26aea8: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x26aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x26aeac: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x26aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x26aeb0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26AEB0u;
    SET_GPR_U32(ctx, 31, 0x26AEB8u);
    ctx->pc = 0x26AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AEB0u;
    // 0x26aeb4: 0xe6200250  swc1        $f0, 0x250($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26AEB0u, 0x26AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEB8u;
label_26aeb8:
    // 0x26aeb8: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x26aeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26aebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aec0: 0xc09abdc  jal         func_26AF70
    ctx->pc = 0x26AEC0u;
    SET_GPR_U32(ctx, 31, 0x26AEC8u);
    ctx->pc = 0x26AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AEC0u;
    // 0x26aec4: 0xe620025c  swc1        $f0, 0x25C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 604), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF70u, 0x26AEC0u, 0x26AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEC8u;
label_26aec8:
    // 0x26aec8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26aec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x26aecc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x26aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26aed0: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x26AED0u;
    SET_GPR_U32(ctx, 31, 0x26AED8u);
    ctx->pc = 0x26AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AED0u;
    // 0x26aed4: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x26AED0u, 0x26AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AED8u;
label_26aed8:
    // 0x26aed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26aed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aedc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x26AEDCu;
    SET_GPR_U32(ctx, 31, 0x26AEE4u);
    ctx->pc = 0x26AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AEDCu;
    // 0x26aee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26AEDCu, 0x26AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEE4u;
label_26aee4:
    // 0x26aee4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x26AEE4u;
    SET_GPR_U32(ctx, 31, 0x26AEECu);
    ctx->pc = 0x26AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AEE4u;
    // 0x26aee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26AEE4u, 0x26AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEECu;
label_26aeec:
    // 0x26aeec: 0xae300280  sw          $s0, 0x280($s1)
    ctx->pc = 0x26aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 16));
    // 0x26aef0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x26AEF0u;
    SET_GPR_U32(ctx, 31, 0x26AEF8u);
    ctx->pc = 0x26AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AEF0u;
    // 0x26aef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26AEF0u, 0x26AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEF8u;
label_26aef8:
    // 0x26aef8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26aef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26aefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26af00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26af00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26af04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26af04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26af08: 0x3e00008  jr          $ra
    ctx->pc = 0x26AF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF08u;
        // 0x26af0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AF10u;
}
