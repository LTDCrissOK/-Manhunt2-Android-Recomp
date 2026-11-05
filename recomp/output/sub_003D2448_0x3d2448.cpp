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

// Function: sub_003D2448
// Address: 0x3d2448 - 0x3d2538
void sub_003D2448_0x3d2448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2448_0x3d2448");
#endif

    switch (ctx->pc) {
        case 0x3d2468u: goto label_3d2468;
        case 0x3d2480u: goto label_3d2480;
        case 0x3d2488u: goto label_3d2488;
        case 0x3d249cu: goto label_3d249c;
        case 0x3d24b0u: goto label_3d24b0;
        case 0x3d24bcu: goto label_3d24bc;
        case 0x3d24c8u: goto label_3d24c8;
        case 0x3d24dcu: goto label_3d24dc;
        case 0x3d24ecu: goto label_3d24ec;
        case 0x3d24f4u: goto label_3d24f4;
        case 0x3d250cu: goto label_3d250c;
        default: break;
    }

    ctx->pc = 0x3d2448u;

    // 0x3d2448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d2448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d244c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d244cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2450: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d2450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d2454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d2454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2458: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d2458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d245c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d2460: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3D2460u;
    SET_GPR_U32(ctx, 31, 0x3D2468u);
    ctx->pc = 0x3D2464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2460u;
    // 0x3d2464: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3D2460u, 0x3D2468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2468u;
label_3d2468:
    // 0x3d2468: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3D2468u;
    {
        const bool branch_taken_0x3d2468 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2468u;
        // 0x3d246c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2468) {
            ctx->pc = 0x3D251Cu;
            goto label_3d251c;
        }
    }
    ctx->pc = 0x3D2470u;
    // 0x3d2470: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x3d2470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x3d2474: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3d2474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3d2478: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3D2478u;
    SET_GPR_U32(ctx, 31, 0x3D2480u);
    ctx->pc = 0x3D247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2478u;
    // 0x3d247c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3D2478u, 0x3D2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2480u;
label_3d2480:
    // 0x3d2480: 0xc0f5148  jal         func_3D4520
    ctx->pc = 0x3D2480u;
    SET_GPR_U32(ctx, 31, 0x3D2488u);
    ctx->pc = 0x3D2484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2480u;
    // 0x3d2484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4520u, 0x3D2480u, 0x3D2488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2488u;
label_3d2488:
    // 0x3d2488: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x3d2488u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d248c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D248Cu;
    {
        const bool branch_taken_0x3d248c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3D2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D248Cu;
        // 0x3d2490: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d248c) {
            ctx->pc = 0x3D24A4u;
            goto label_3d24a4;
        }
    }
    ctx->pc = 0x3D2494u;
    // 0x3d2494: 0xc0f498c  jal         func_3D2630
    ctx->pc = 0x3D2494u;
    SET_GPR_U32(ctx, 31, 0x3D249Cu);
    ctx->pc = 0x3D2498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2494u;
    // 0x3d2498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2630u, 0x3D2494u, 0x3D249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D249Cu;
label_3d249c:
    // 0x3d249c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D249Cu;
    {
        const bool branch_taken_0x3d249c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D249Cu;
        // 0x3d24a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d249c) {
            ctx->pc = 0x3D24C0u;
            goto label_3d24c0;
        }
    }
    ctx->pc = 0x3D24A4u;
label_3d24a4:
    // 0x3d24a4: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x3d24a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x3d24a8: 0xc0f498c  jal         func_3D2630
    ctx->pc = 0x3D24A8u;
    SET_GPR_U32(ctx, 31, 0x3D24B0u);
    ctx->pc = 0x3D24ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D24A8u;
    // 0x3d24ac: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2630u, 0x3D24A8u, 0x3D24B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D24B0u;
label_3d24b0:
    // 0x3d24b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d24b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d24b4: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3D24B4u;
    SET_GPR_U32(ctx, 31, 0x3D24BCu);
    ctx->pc = 0x3D24B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D24B4u;
    // 0x3d24b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3D24B4u, 0x3D24BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D24BCu;
label_3d24bc:
    // 0x3d24bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d24bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d24c0:
    // 0x3d24c0: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3D24C0u;
    SET_GPR_U32(ctx, 31, 0x3D24C8u);
    ctx->pc = 0x3D24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D24C0u;
    // 0x3d24c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3D24C0u, 0x3D24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D24C8u;
label_3d24c8:
    // 0x3d24c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d24c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d24cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d24ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d24d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d24d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d24d4: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3D24D4u;
    SET_GPR_U32(ctx, 31, 0x3D24DCu);
    ctx->pc = 0x3D24D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D24D4u;
    // 0x3d24d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3D24D4u, 0x3D24DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D24DCu;
label_3d24dc:
    // 0x3d24dc: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D24DCu;
    {
        const bool branch_taken_0x3d24dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3D24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D24DCu;
        // 0x3d24e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d24dc) {
            ctx->pc = 0x3D2504u;
            goto label_3d2504;
        }
    }
    ctx->pc = 0x3D24E4u;
    // 0x3d24e4: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3D24E4u;
    SET_GPR_U32(ctx, 31, 0x3D24ECu);
    ctx->pc = 0x3D24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D24E4u;
    // 0x3d24e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3D24E4u, 0x3D24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D24ECu;
label_3d24ec:
    // 0x3d24ec: 0xc0f5148  jal         func_3D4520
    ctx->pc = 0x3D24ECu;
    SET_GPR_U32(ctx, 31, 0x3D24F4u);
    ctx->pc = 0x3D24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D24ECu;
    // 0x3d24f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4520u, 0x3D24ECu, 0x3D24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D24F4u;
label_3d24f4:
    // 0x3d24f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d24f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d24f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d24f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d24fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D24FCu;
    {
        const bool branch_taken_0x3d24fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D24FCu;
        // 0x3d2500: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d24fc) {
            ctx->pc = 0x3D2518u;
            goto label_3d2518;
        }
    }
    ctx->pc = 0x3D2504u;
label_3d2504:
    // 0x3d2504: 0xc0f5148  jal         func_3D4520
    ctx->pc = 0x3D2504u;
    SET_GPR_U32(ctx, 31, 0x3D250Cu);
    ctx->pc = 0x3D2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2504u;
    // 0x3d2508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4520u, 0x3D2504u, 0x3D250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D250Cu;
label_3d250c:
    // 0x3d250c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d250cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d2510: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d2510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d2514: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3d2514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_3d2518:
    // 0x3d2518: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d2518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d251c:
    // 0x3d251c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d251cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d2520: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d2520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d2524: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d2524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d2528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d2528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d252c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D252Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D252Cu;
        // 0x3d2530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D252Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2534u;
    // 0x3d2534: 0x0  nop
    ctx->pc = 0x3d2534u;
    // NOP
    ctx->pc = 0x3d2538u;
}
