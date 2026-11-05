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

// Function: sub_003D2538
// Address: 0x3d2538 - 0x3d2630
void sub_003D2538_0x3d2538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2538_0x3d2538");
#endif

    switch (ctx->pc) {
        case 0x3d2550u: goto label_3d2550;
        case 0x3d2560u: goto label_3d2560;
        case 0x3d2578u: goto label_3d2578;
        case 0x3d2580u: goto label_3d2580;
        case 0x3d2594u: goto label_3d2594;
        case 0x3d25a8u: goto label_3d25a8;
        case 0x3d25b4u: goto label_3d25b4;
        case 0x3d25c0u: goto label_3d25c0;
        case 0x3d25d4u: goto label_3d25d4;
        case 0x3d25e4u: goto label_3d25e4;
        case 0x3d25ecu: goto label_3d25ec;
        case 0x3d2604u: goto label_3d2604;
        default: break;
    }

    ctx->pc = 0x3d2538u;

    // 0x3d2538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d2538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d253c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d2540: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d2540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d2544: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d2544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d2548: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3D2548u;
    SET_GPR_U32(ctx, 31, 0x3D2550u);
    ctx->pc = 0x3D254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2548u;
    // 0x3d254c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3D2548u, 0x3D2550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2550u;
label_3d2550:
    // 0x3d2550: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d2550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d2554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2558: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3D2558u;
    SET_GPR_U32(ctx, 31, 0x3D2560u);
    ctx->pc = 0x3D255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2558u;
    // 0x3d255c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3D2558u, 0x3D2560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2560u;
label_3d2560:
    // 0x3d2560: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3D2560u;
    {
        const bool branch_taken_0x3d2560 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2560u;
        // 0x3d2564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2560) {
            ctx->pc = 0x3D2614u;
            goto label_3d2614;
        }
    }
    ctx->pc = 0x3D2568u;
    // 0x3d2568: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x3d2568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x3d256c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3d256cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3d2570: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3D2570u;
    SET_GPR_U32(ctx, 31, 0x3D2578u);
    ctx->pc = 0x3D2574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2570u;
    // 0x3d2574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3D2570u, 0x3D2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2578u;
label_3d2578:
    // 0x3d2578: 0xc0f5148  jal         func_3D4520
    ctx->pc = 0x3D2578u;
    SET_GPR_U32(ctx, 31, 0x3D2580u);
    ctx->pc = 0x3D257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2578u;
    // 0x3d257c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4520u, 0x3D2578u, 0x3D2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2580u;
label_3d2580:
    // 0x3d2580: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x3d2580u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d2584: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2584u;
    {
        const bool branch_taken_0x3d2584 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3D2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2584u;
        // 0x3d2588: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2584) {
            ctx->pc = 0x3D259Cu;
            goto label_3d259c;
        }
    }
    ctx->pc = 0x3D258Cu;
    // 0x3d258c: 0xc0f498c  jal         func_3D2630
    ctx->pc = 0x3D258Cu;
    SET_GPR_U32(ctx, 31, 0x3D2594u);
    ctx->pc = 0x3D2590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D258Cu;
    // 0x3d2590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2630u, 0x3D258Cu, 0x3D2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2594u;
label_3d2594:
    // 0x3d2594: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D2594u;
    {
        const bool branch_taken_0x3d2594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2594u;
        // 0x3d2598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2594) {
            ctx->pc = 0x3D25B8u;
            goto label_3d25b8;
        }
    }
    ctx->pc = 0x3D259Cu;
label_3d259c:
    // 0x3d259c: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x3d259cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x3d25a0: 0xc0f498c  jal         func_3D2630
    ctx->pc = 0x3D25A0u;
    SET_GPR_U32(ctx, 31, 0x3D25A8u);
    ctx->pc = 0x3D25A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D25A0u;
    // 0x3d25a4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2630u, 0x3D25A0u, 0x3D25A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D25A8u;
label_3d25a8:
    // 0x3d25a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d25a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d25ac: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3D25ACu;
    SET_GPR_U32(ctx, 31, 0x3D25B4u);
    ctx->pc = 0x3D25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D25ACu;
    // 0x3d25b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3D25ACu, 0x3D25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D25B4u;
label_3d25b4:
    // 0x3d25b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d25b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d25b8:
    // 0x3d25b8: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3D25B8u;
    SET_GPR_U32(ctx, 31, 0x3D25C0u);
    ctx->pc = 0x3D25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D25B8u;
    // 0x3d25bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3D25B8u, 0x3D25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D25C0u;
label_3d25c0:
    // 0x3d25c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d25c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d25c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d25c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d25c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d25c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d25cc: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3D25CCu;
    SET_GPR_U32(ctx, 31, 0x3D25D4u);
    ctx->pc = 0x3D25D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D25CCu;
    // 0x3d25d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3D25CCu, 0x3D25D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D25D4u;
label_3d25d4:
    // 0x3d25d4: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D25D4u;
    {
        const bool branch_taken_0x3d25d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3D25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D25D4u;
        // 0x3d25d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d25d4) {
            ctx->pc = 0x3D25FCu;
            goto label_3d25fc;
        }
    }
    ctx->pc = 0x3D25DCu;
    // 0x3d25dc: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3D25DCu;
    SET_GPR_U32(ctx, 31, 0x3D25E4u);
    ctx->pc = 0x3D25E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D25DCu;
    // 0x3d25e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3D25DCu, 0x3D25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D25E4u;
label_3d25e4:
    // 0x3d25e4: 0xc0f5148  jal         func_3D4520
    ctx->pc = 0x3D25E4u;
    SET_GPR_U32(ctx, 31, 0x3D25ECu);
    ctx->pc = 0x3D25E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D25E4u;
    // 0x3d25e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4520u, 0x3D25E4u, 0x3D25ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D25ECu;
label_3d25ec:
    // 0x3d25ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d25ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d25f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d25f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d25f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D25F4u;
    {
        const bool branch_taken_0x3d25f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D25F4u;
        // 0x3d25f8: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d25f4) {
            ctx->pc = 0x3D2610u;
            goto label_3d2610;
        }
    }
    ctx->pc = 0x3D25FCu;
label_3d25fc:
    // 0x3d25fc: 0xc0f5148  jal         func_3D4520
    ctx->pc = 0x3D25FCu;
    SET_GPR_U32(ctx, 31, 0x3D2604u);
    ctx->pc = 0x3D2600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D25FCu;
    // 0x3d2600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4520u, 0x3D25FCu, 0x3D2604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2604u;
label_3d2604:
    // 0x3d2604: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d2604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d2608: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d2608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d260c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3d260cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_3d2610:
    // 0x3d2610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d2610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2614:
    // 0x3d2614: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d2614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d2618: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d2618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d261c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d261cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d2620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d2620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d2624: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2624u;
        // 0x3d2628: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D262Cu;
    // 0x3d262c: 0x0  nop
    ctx->pc = 0x3d262cu;
    // NOP
    ctx->pc = 0x3d2630u;
}
