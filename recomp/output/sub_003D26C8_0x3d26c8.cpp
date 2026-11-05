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

// Function: sub_003D26C8
// Address: 0x3d26c8 - 0x3d27a8
void sub_003D26C8_0x3d26c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D26C8_0x3d26c8");
#endif

    switch (ctx->pc) {
        case 0x3d272cu: goto label_3d272c;
        case 0x3d2738u: goto label_3d2738;
        case 0x3d2744u: goto label_3d2744;
        case 0x3d2764u: goto label_3d2764;
        case 0x3d277cu: goto label_3d277c;
        case 0x3d2788u: goto label_3d2788;
        case 0x3d2790u: goto label_3d2790;
        default: break;
    }

    ctx->pc = 0x3d26c8u;

    // 0x3d26c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d26c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d26cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d26d0: 0x31afa  dsrl        $v1, $v1, 11
    ctx->pc = 0x3d26d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 11);
    // 0x3d26d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d26d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d26d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d26dc: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x3d26dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x3d26e0: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x3d26e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x3d26e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d26e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d26e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d26e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d26ec: 0x223182d  daddu       $v1, $s1, $v1
    ctx->pc = 0x3d26ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3d26f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d26f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d26f4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3d26f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d26f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D26F8u;
    {
        const bool branch_taken_0x3d26f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26F8u;
        // 0x3d26fc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d26f8) {
            ctx->pc = 0x3D2718u;
            goto label_3d2718;
        }
    }
    ctx->pc = 0x3D2700u;
    // 0x3d2700: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3d2700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3d2704: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d2704u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d2708: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x3d2708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x3d270c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D270Cu;
    {
        const bool branch_taken_0x3d270c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D270Cu;
        // 0x3d2710: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d270c) {
            ctx->pc = 0x3D2718u;
            goto label_3d2718;
        }
    }
    ctx->pc = 0x3D2714u;
    // 0x3d2714: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3d2714u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_3d2718:
    // 0x3d2718: 0x341081e0  ori         $s0, $zero, 0x81E0
    ctx->pc = 0x3d2718u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3d271c: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x3d271cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x3d2720: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x3d2720u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3d2724: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3D2724u;
    SET_GPR_U32(ctx, 31, 0x3D272Cu);
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3D2724u, 0x3D272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D272Cu;
label_3d272c:
    // 0x3d272c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d272cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2730: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3D2730u;
    SET_GPR_U32(ctx, 31, 0x3D2738u);
    ctx->pc = 0x3D2734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2730u;
    // 0x3d2734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3D2730u, 0x3D2738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2738u;
label_3d2738:
    // 0x3d2738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d2738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d273c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3D273Cu;
    SET_GPR_U32(ctx, 31, 0x3D2744u);
    ctx->pc = 0x3D2740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D273Cu;
    // 0x3d2740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3D273Cu, 0x3D2744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2744u;
label_3d2744:
    // 0x3d2744: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x3d2744u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x3d2748: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x3d2748u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x3d274c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d274cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2750: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x3d2750u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x3d2754: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3d2754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3d2758: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3d2758u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3d275c: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3D275Cu;
    SET_GPR_U32(ctx, 31, 0x3D2764u);
    ctx->pc = 0x3D2760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D275Cu;
    // 0x3d2760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3D275Cu, 0x3D2764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2764u;
label_3d2764:
    // 0x3d2764: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D2764u;
    {
        const bool branch_taken_0x3d2764 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3d2764) {
            ctx->pc = 0x3D2768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2764u;
            // 0x3d2768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2780u;
            goto label_3d2780;
        }
    }
    ctx->pc = 0x3D276Cu;
    // 0x3d276c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3d276cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3d2770: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3d2770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3d2774: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3D2774u;
    SET_GPR_U32(ctx, 31, 0x3D277Cu);
    ctx->pc = 0x3D2778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2774u;
    // 0x3d2778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3D2774u, 0x3D277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D277Cu;
label_3d277c:
    // 0x3d277c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d2780:
    // 0x3d2780: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3D2780u;
    SET_GPR_U32(ctx, 31, 0x3D2788u);
    ctx->pc = 0x3D2784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2780u;
    // 0x3d2784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3D2780u, 0x3D2788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2788u;
label_3d2788:
    // 0x3d2788: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x3D2788u;
    SET_GPR_U32(ctx, 31, 0x3D2790u);
    ctx->pc = 0x3D278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2788u;
    // 0x3d278c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x3D2788u, 0x3D2790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2790u;
label_3d2790:
    // 0x3d2790: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d2790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d2794: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d2794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d2798: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d2798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d279c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d279cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d27a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D27A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27A0u;
        // 0x3d27a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D27A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D27A8u;
}
