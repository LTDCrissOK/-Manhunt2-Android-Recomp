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

// Function: sub_0012F330
// Address: 0x12f330 - 0x12f3d8
void sub_0012F330_0x12f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F330_0x12f330");
#endif

    switch (ctx->pc) {
        case 0x12f354u: goto label_12f354;
        case 0x12f364u: goto label_12f364;
        case 0x12f36cu: goto label_12f36c;
        case 0x12f3a0u: goto label_12f3a0;
        case 0x12f3acu: goto label_12f3ac;
        case 0x12f3c0u: goto label_12f3c0;
        default: break;
    }

    ctx->pc = 0x12f330u;

    // 0x12f330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f334: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12f338: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12f338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f33c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x12f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x12f340: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12f340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f348: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f34c: 0xc04bcf6  jal         func_12F3D8
    ctx->pc = 0x12F34Cu;
    SET_GPR_U32(ctx, 31, 0x12F354u);
    ctx->pc = 0x12F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F34Cu;
    // 0x12f350: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F3D8u, 0x12F34Cu, 0x12F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F354u;
label_12f354:
    // 0x12f354: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x12F354u;
    {
        const bool branch_taken_0x12f354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f354) {
            ctx->pc = 0x12F358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F354u;
            // 0x12f358: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F3C4u;
            goto label_12f3c4;
        }
    }
    ctx->pc = 0x12F35Cu;
    // 0x12f35c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x12F35Cu;
    SET_GPR_U32(ctx, 31, 0x12F364u);
    ctx->pc = 0x12F360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F35Cu;
    // 0x12f360: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x12F35Cu, 0x12F364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F364u;
label_12f364:
    // 0x12f364: 0xc046356  jal         func_118D58
    ctx->pc = 0x12F364u;
    SET_GPR_U32(ctx, 31, 0x12F36Cu);
    ctx->pc = 0x12F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F364u;
    // 0x12f368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D58u, 0x12F364u, 0x12F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F36Cu;
label_12f36c:
    // 0x12f36c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12f36cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f370: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x12f370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12f374: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F374u;
    {
        const bool branch_taken_0x12f374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F374u;
        // 0x12f378: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f374) {
            ctx->pc = 0x12F384u;
            goto label_12f384;
        }
    }
    ctx->pc = 0x12F37Cu;
    // 0x12f37c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12F37Cu;
    {
        const bool branch_taken_0x12f37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F37Cu;
        // 0x12f380: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f37c) {
            ctx->pc = 0x12F394u;
            goto label_12f394;
        }
    }
    ctx->pc = 0x12F384u;
label_12f384:
    // 0x12f384: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x12f384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x12f388: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f38c: 0x0  nop
    ctx->pc = 0x12f38cu;
    // NOP
    // 0x12f390: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12f394:
    // 0x12f394: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12f394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12f398: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x12F398u;
    SET_GPR_U32(ctx, 31, 0x12F3A0u);
    ctx->pc = 0x12F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F398u;
    // 0x12f39c: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x12F398u, 0x12F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3A0u;
label_12f3a0:
    // 0x12f3a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3a4: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x12F3A4u;
    SET_GPR_U32(ctx, 31, 0x12F3ACu);
    ctx->pc = 0x12F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F3A4u;
    // 0x12f3a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x12F3A4u, 0x12F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3ACu;
label_12f3ac:
    // 0x12f3ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12f3b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12f3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3b4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x12f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x12f3b8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12F3B8u;
    SET_GPR_U32(ctx, 31, 0x12F3C0u);
    ctx->pc = 0x12F3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F3B8u;
    // 0x12f3bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12F3B8u, 0x12F3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3C0u;
label_12f3c0:
    // 0x12f3c0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x12f3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12f3c4:
    // 0x12f3c4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x12f3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f3c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12F3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3CCu;
        // 0x12f3d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F3D4u;
    // 0x12f3d4: 0x0  nop
    ctx->pc = 0x12f3d4u;
    // NOP
    ctx->pc = 0x12f3d8u;
}
