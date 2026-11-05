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

// Function: sub_001D26A8
// Address: 0x1d26a8 - 0x1d2798
void sub_001D26A8_0x1d26a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D26A8_0x1d26a8");
#endif

    switch (ctx->pc) {
        case 0x1d26d8u: goto label_1d26d8;
        case 0x1d26e0u: goto label_1d26e0;
        case 0x1d270cu: goto label_1d270c;
        case 0x1d2718u: goto label_1d2718;
        case 0x1d2724u: goto label_1d2724;
        case 0x1d272cu: goto label_1d272c;
        case 0x1d273cu: goto label_1d273c;
        case 0x1d276cu: goto label_1d276c;
        default: break;
    }

    ctx->pc = 0x1d26a8u;

    // 0x1d26a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d26a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d26ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d26acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d26b0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d26b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1d26b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d26b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26b8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d26b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1d26bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d26bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d26c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d26c4: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x1d26c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x1d26c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d26c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1d26cc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D26CCu;
    {
        const bool branch_taken_0x1d26cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26CCu;
        // 0x1d26d0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26cc) {
            ctx->pc = 0x1D2764u;
            goto label_1d2764;
        }
    }
    ctx->pc = 0x1D26D4u;
    // 0x1d26d4: 0x0  nop
    ctx->pc = 0x1d26d4u;
    // NOP
label_1d26d8:
    // 0x1d26d8: 0xc0749ee  jal         func_1D27B8
    ctx->pc = 0x1D26D8u;
    SET_GPR_U32(ctx, 31, 0x1D26E0u);
    ctx->pc = 0x1D26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26D8u;
    // 0x1d26dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27B8u, 0x1D26D8u, 0x1D26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26E0u;
label_1d26e0:
    // 0x1d26e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d26e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26e4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1d26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1d26e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d26ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d26ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d26f0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D26F0u;
    {
        const bool branch_taken_0x1d26f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26F0u;
        // 0x1d26f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26f0) {
            ctx->pc = 0x1D2760u;
            goto label_1d2760;
        }
    }
    ctx->pc = 0x1D26F8u;
    // 0x1d26f8: 0xc62c0068  lwc1        $f12, 0x68($s1)
    ctx->pc = 0x1d26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d26fc: 0xc62d006c  lwc1        $f13, 0x6C($s1)
    ctx->pc = 0x1d26fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d2700: 0xc62e0070  lwc1        $f14, 0x70($s1)
    ctx->pc = 0x1d2700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d2704: 0xc0b187c  jal         func_2C61F0
    ctx->pc = 0x1D2704u;
    SET_GPR_U32(ctx, 31, 0x1D270Cu);
    ctx->pc = 0x1D2708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2704u;
    // 0x1d2708: 0xc62f0074  lwc1        $f15, 0x74($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C61F0u, 0x1D2704u, 0x1D270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D270Cu;
label_1d270c:
    // 0x1d270c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d270cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d2710: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x1D2710u;
    SET_GPR_U32(ctx, 31, 0x1D2718u);
    ctx->pc = 0x1D2714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2710u;
    // 0x1d2714: 0x26845ad0  addiu       $a0, $s4, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x1D2710u, 0x1D2718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2718u;
label_1d2718:
    // 0x1d2718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d2718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d271c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1D271Cu;
    SET_GPR_U32(ctx, 31, 0x1D2724u);
    ctx->pc = 0x1D2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D271Cu;
    // 0x1d2720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1D271Cu, 0x1D2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2724u;
label_1d2724:
    // 0x1d2724: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1D2724u;
    SET_GPR_U32(ctx, 31, 0x1D272Cu);
    ctx->pc = 0x1D2728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2724u;
    // 0x1d2728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1D2724u, 0x1D272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D272Cu;
label_1d272c:
    // 0x1d272c: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x1d272cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x1d2730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2734: 0xc0b1972  jal         func_2C65C8
    ctx->pc = 0x1D2734u;
    SET_GPR_U32(ctx, 31, 0x1D273Cu);
    ctx->pc = 0x1D2738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2734u;
    // 0x1d2738: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x1D2734u, 0x1D273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D273Cu;
label_1d273c:
    // 0x1d273c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x1d273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1d2740: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x1d2740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2744: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1d2744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1d2748: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x1d2748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1d274c: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x1d274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2750: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x1d2750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x1d2754: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x1d2754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d2758: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x1d2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1d275c: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x1d275cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1d2760:
    // 0x1d2760: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d2764:
    // 0x1d2764: 0xc0749e6  jal         func_1D2798
    ctx->pc = 0x1D2764u;
    SET_GPR_U32(ctx, 31, 0x1D276Cu);
    ctx->pc = 0x1D2768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2764u;
    // 0x1d2768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2798u, 0x1D2764u, 0x1D276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D276Cu;
label_1d276c:
    // 0x1d276c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d276cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d2770: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1D2770u;
    {
        const bool branch_taken_0x1d2770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2770) {
            ctx->pc = 0x1D2774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2770u;
            // 0x1d2774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D26D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d26d8;
        }
    }
    ctx->pc = 0x1D2778u;
    // 0x1d2778: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d2778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d277c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d277cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2780: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d2780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2784: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d2784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d2788: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d2788u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d278c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1d278cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2790: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2790u;
        // 0x1d2794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2798u;
}
