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

// Function: sub_0012F748
// Address: 0x12f748 - 0x12f818
void sub_0012F748_0x12f748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F748_0x12f748");
#endif

    switch (ctx->pc) {
        case 0x12f76cu: goto label_12f76c;
        case 0x12f77cu: goto label_12f77c;
        case 0x12f784u: goto label_12f784;
        case 0x12f7b8u: goto label_12f7b8;
        case 0x12f7c4u: goto label_12f7c4;
        case 0x12f800u: goto label_12f800;
        default: break;
    }

    ctx->pc = 0x12f748u;

    // 0x12f748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f74c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12f750: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12f750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f754: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x12f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x12f758: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12f758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f75c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f760: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f764: 0xc04be06  jal         func_12F818
    ctx->pc = 0x12F764u;
    SET_GPR_U32(ctx, 31, 0x12F76Cu);
    ctx->pc = 0x12F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F764u;
    // 0x12f768: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F818u, 0x12F764u, 0x12F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F76Cu;
label_12f76c:
    // 0x12f76c: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x12F76Cu;
    {
        const bool branch_taken_0x12f76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f76c) {
            ctx->pc = 0x12F770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F76Cu;
            // 0x12f770: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F804u;
            goto label_12f804;
        }
    }
    ctx->pc = 0x12F774u;
    // 0x12f774: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x12F774u;
    SET_GPR_U32(ctx, 31, 0x12F77Cu);
    ctx->pc = 0x12F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F774u;
    // 0x12f778: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x12F774u, 0x12F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F77Cu;
label_12f77c:
    // 0x12f77c: 0xc046356  jal         func_118D58
    ctx->pc = 0x12F77Cu;
    SET_GPR_U32(ctx, 31, 0x12F784u);
    ctx->pc = 0x12F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F77Cu;
    // 0x12f780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D58u, 0x12F77Cu, 0x12F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F784u;
label_12f784:
    // 0x12f784: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12f784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f788: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x12f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12f78c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F78Cu;
    {
        const bool branch_taken_0x12f78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F78Cu;
        // 0x12f790: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f78c) {
            ctx->pc = 0x12F79Cu;
            goto label_12f79c;
        }
    }
    ctx->pc = 0x12F794u;
    // 0x12f794: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12F794u;
    {
        const bool branch_taken_0x12f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F794u;
        // 0x12f798: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f794) {
            ctx->pc = 0x12F7ACu;
            goto label_12f7ac;
        }
    }
    ctx->pc = 0x12F79Cu;
label_12f79c:
    // 0x12f79c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x12f79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x12f7a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f7a4: 0x0  nop
    ctx->pc = 0x12f7a4u;
    // NOP
    // 0x12f7a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12f7ac:
    // 0x12f7ac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12f7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12f7b0: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x12F7B0u;
    SET_GPR_U32(ctx, 31, 0x12F7B8u);
    ctx->pc = 0x12F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F7B0u;
    // 0x12f7b4: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x12F7B0u, 0x12F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7B8u;
label_12f7b8:
    // 0x12f7b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7bc: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x12F7BCu;
    SET_GPR_U32(ctx, 31, 0x12F7C4u);
    ctx->pc = 0x12F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F7BCu;
    // 0x12f7c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x12F7BCu, 0x12F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7C4u;
label_12f7c4:
    // 0x12f7c4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x12f7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f7c8: 0x3c014c3e  lui         $at, 0x4C3E
    ctx->pc = 0x12f7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19518 << 16));
    // 0x12f7cc: 0x3421bc20  ori         $at, $at, 0xBC20
    ctx->pc = 0x12f7ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48160);
    // 0x12f7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f7d4: 0x0  nop
    ctx->pc = 0x12f7d4u;
    // NOP
    // 0x12f7d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12f7d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f7dc: 0x0  nop
    ctx->pc = 0x12f7dcu;
    // NOP
    // 0x12f7e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12F7E0u;
    {
        const bool branch_taken_0x12f7e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F7E0u;
        // 0x12f7e4: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7e0) {
            ctx->pc = 0x12F7F0u;
            goto label_12f7f0;
        }
    }
    ctx->pc = 0x12F7E8u;
    // 0x12f7e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12f7ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12f7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_12f7f0:
    // 0x12f7f0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x12f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x12f7f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12f7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7f8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12F7F8u;
    SET_GPR_U32(ctx, 31, 0x12F800u);
    ctx->pc = 0x12F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F7F8u;
    // 0x12f7fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12F7F8u, 0x12F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F800u;
label_12f800:
    // 0x12f800: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x12f800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12f804:
    // 0x12f804: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x12f804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f808: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f80c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F80Cu;
        // 0x12f810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F814u;
    // 0x12f814: 0x0  nop
    ctx->pc = 0x12f814u;
    // NOP
    ctx->pc = 0x12f818u;
}
