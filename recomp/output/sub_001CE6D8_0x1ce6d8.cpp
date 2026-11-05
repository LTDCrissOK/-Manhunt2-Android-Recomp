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

// Function: sub_001CE6D8
// Address: 0x1ce6d8 - 0x1ce7a8
void sub_001CE6D8_0x1ce6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE6D8_0x1ce6d8");
#endif

    switch (ctx->pc) {
        case 0x1ce714u: goto label_1ce714;
        case 0x1ce74cu: goto label_1ce74c;
        case 0x1ce768u: goto label_1ce768;
        case 0x1ce788u: goto label_1ce788;
        default: break;
    }

    ctx->pc = 0x1ce6d8u;

    // 0x1ce6d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce6dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ce6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ce6e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce6e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ce6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ce6ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ce6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ce6f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1ce6f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ce6f4: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x1ce6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1ce6f8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CE6F8u;
    {
        const bool branch_taken_0x1ce6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6F8u;
        // 0x1ce6fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6f8) {
            ctx->pc = 0x1CE78Cu;
            goto label_1ce78c;
        }
    }
    ctx->pc = 0x1CE700u;
    // 0x1ce700: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x1ce700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1ce704: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE704u;
    {
        const bool branch_taken_0x1ce704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE704u;
        // 0x1ce708: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce704) {
            ctx->pc = 0x1CE718u;
            goto label_1ce718;
        }
    }
    ctx->pc = 0x1CE70Cu;
    // 0x1ce70c: 0xc076e7c  jal         func_1DB9F0
    ctx->pc = 0x1CE70Cu;
    SET_GPR_U32(ctx, 31, 0x1CE714u);
    ctx->pc = 0x1CE710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE70Cu;
    // 0x1ce710: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB9F0u, 0x1CE70Cu, 0x1CE714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE714u;
label_1ce714:
    // 0x1ce714: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ce714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1ce718:
    // 0x1ce718: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1ce718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1ce71c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE71Cu;
    {
        const bool branch_taken_0x1ce71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE71Cu;
        // 0x1ce720: 0xc4548a34  lwc1        $f20, -0x75CC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce71c) {
            ctx->pc = 0x1CE740u;
            goto label_1ce740;
        }
    }
    ctx->pc = 0x1CE724u;
    // 0x1ce724: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1ce724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1ce728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE728u;
    {
        const bool branch_taken_0x1ce728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE728u;
        // 0x1ce72c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce728) {
            ctx->pc = 0x1CE738u;
            goto label_1ce738;
        }
    }
    ctx->pc = 0x1CE730u;
    // 0x1ce730: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE730u;
    {
        const bool branch_taken_0x1ce730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE730u;
        // 0x1ce734: 0xc4548a38  lwc1        $f20, -0x75C8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce730) {
            ctx->pc = 0x1CE740u;
            goto label_1ce740;
        }
    }
    ctx->pc = 0x1CE738u;
label_1ce738:
    // 0x1ce738: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ce738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ce73c: 0xc4548a3c  lwc1        $f20, -0x75C4($v0)
    ctx->pc = 0x1ce73cu;
    { uint32_t bits = FAST_READ32(0x3F8A3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ce740:
    // 0x1ce740: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1ce740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1ce744: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1CE744u;
    SET_GPR_U32(ctx, 31, 0x1CE74Cu);
    ctx->pc = 0x1CE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE744u;
    // 0x1ce748: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1CE744u, 0x1CE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE74Cu;
label_1ce74c:
    // 0x1ce74c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1ce74cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1ce750: 0xc60d8a40  lwc1        $f13, -0x75C0($s0)
    ctx->pc = 0x1ce750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294937152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce758: 0xc62e89c4  lwc1        $f14, -0x763C($s1)
    ctx->pc = 0x1ce758u;
    { uint32_t bits = FAST_READ32(0x3F89C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce75c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ce75cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ce760: 0xc076e4a  jal         func_1DB928
    ctx->pc = 0x1CE760u;
    SET_GPR_U32(ctx, 31, 0x1CE768u);
    ctx->pc = 0x1CE764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE760u;
    // 0x1ce764: 0x8e450058  lw          $a1, 0x58($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB928u, 0x1CE760u, 0x1CE768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE768u;
label_1ce768:
    // 0x1ce768: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x1ce768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x1ce76c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce770: 0xe6540038  swc1        $f20, 0x38($s2)
    ctx->pc = 0x1ce770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x1ce774: 0xc6008a40  lwc1        $f0, -0x75C0($s0)
    ctx->pc = 0x1ce774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294937152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce778: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x1ce778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x1ce77c: 0xc62189c4  lwc1        $f1, -0x763C($s1)
    ctx->pc = 0x1ce77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce780: 0xc073512  jal         func_1CD448
    ctx->pc = 0x1CE780u;
    SET_GPR_U32(ctx, 31, 0x1CE788u);
    ctx->pc = 0x1CE784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE780u;
    // 0x1ce784: 0xe6410040  swc1        $f1, 0x40($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD448u, 0x1CE780u, 0x1CE788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE788u;
label_1ce788:
    // 0x1ce788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce78c:
    // 0x1ce78c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce78cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce790: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce794: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ce794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce798: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ce798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce79c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE79Cu;
        // 0x1ce7a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE7A4u;
    // 0x1ce7a4: 0x0  nop
    ctx->pc = 0x1ce7a4u;
    // NOP
    ctx->pc = 0x1ce7a8u;
}
