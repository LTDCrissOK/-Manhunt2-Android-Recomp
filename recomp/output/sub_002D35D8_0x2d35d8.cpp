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

// Function: sub_002D35D8
// Address: 0x2d35d8 - 0x2d36d0
void sub_002D35D8_0x2d35d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D35D8_0x2d35d8");
#endif

    switch (ctx->pc) {
        case 0x2d35d8u: goto label_2d35d8;
        case 0x2d35dcu: goto label_2d35dc;
        case 0x2d35e0u: goto label_2d35e0;
        case 0x2d35e4u: goto label_2d35e4;
        case 0x2d35e8u: goto label_2d35e8;
        case 0x2d35ecu: goto label_2d35ec;
        case 0x2d35f0u: goto label_2d35f0;
        case 0x2d35f4u: goto label_2d35f4;
        case 0x2d35f8u: goto label_2d35f8;
        case 0x2d35fcu: goto label_2d35fc;
        case 0x2d3600u: goto label_2d3600;
        case 0x2d3604u: goto label_2d3604;
        case 0x2d3608u: goto label_2d3608;
        case 0x2d360cu: goto label_2d360c;
        case 0x2d3610u: goto label_2d3610;
        case 0x2d3614u: goto label_2d3614;
        case 0x2d3618u: goto label_2d3618;
        case 0x2d361cu: goto label_2d361c;
        case 0x2d3620u: goto label_2d3620;
        case 0x2d3624u: goto label_2d3624;
        case 0x2d3628u: goto label_2d3628;
        case 0x2d362cu: goto label_2d362c;
        case 0x2d3630u: goto label_2d3630;
        case 0x2d3634u: goto label_2d3634;
        case 0x2d3638u: goto label_2d3638;
        case 0x2d363cu: goto label_2d363c;
        case 0x2d3640u: goto label_2d3640;
        case 0x2d3644u: goto label_2d3644;
        case 0x2d3648u: goto label_2d3648;
        case 0x2d364cu: goto label_2d364c;
        case 0x2d3650u: goto label_2d3650;
        case 0x2d3654u: goto label_2d3654;
        case 0x2d3658u: goto label_2d3658;
        case 0x2d365cu: goto label_2d365c;
        case 0x2d3660u: goto label_2d3660;
        case 0x2d3664u: goto label_2d3664;
        case 0x2d3668u: goto label_2d3668;
        case 0x2d366cu: goto label_2d366c;
        case 0x2d3670u: goto label_2d3670;
        case 0x2d3674u: goto label_2d3674;
        case 0x2d3678u: goto label_2d3678;
        case 0x2d367cu: goto label_2d367c;
        case 0x2d3680u: goto label_2d3680;
        case 0x2d3684u: goto label_2d3684;
        case 0x2d3688u: goto label_2d3688;
        case 0x2d368cu: goto label_2d368c;
        case 0x2d3690u: goto label_2d3690;
        case 0x2d3694u: goto label_2d3694;
        case 0x2d3698u: goto label_2d3698;
        case 0x2d369cu: goto label_2d369c;
        case 0x2d36a0u: goto label_2d36a0;
        case 0x2d36a4u: goto label_2d36a4;
        case 0x2d36a8u: goto label_2d36a8;
        case 0x2d36acu: goto label_2d36ac;
        case 0x2d36b0u: goto label_2d36b0;
        case 0x2d36b4u: goto label_2d36b4;
        case 0x2d36b8u: goto label_2d36b8;
        case 0x2d36bcu: goto label_2d36bc;
        case 0x2d36c0u: goto label_2d36c0;
        case 0x2d36c4u: goto label_2d36c4;
        case 0x2d36c8u: goto label_2d36c8;
        case 0x2d36ccu: goto label_2d36cc;
        default: break;
    }

    ctx->pc = 0x2d35d8u;

label_2d35d8:
    // 0x2d35d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d35d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d35dc:
    // 0x2d35dc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2d35e0:
    // 0x2d35e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d35e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d35e4:
    // 0x2d35e4: 0x24423db8  addiu       $v0, $v0, 0x3DB8
    ctx->pc = 0x2d35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15800));
label_2d35e8:
    // 0x2d35e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d35e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d35ec:
    // 0x2d35ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d35ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d35f0:
    // 0x2d35f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d35f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d35f4:
    // 0x2d35f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d35f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d35f8:
    // 0x2d35f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d35f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d35fc:
    // 0x2d35fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d35fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d3600:
    // 0x2d3600: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d3600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d3604:
    // 0x2d3604: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d3604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2d3608:
    // 0x2d3608: 0x26540064  addiu       $s4, $s2, 0x64
    ctx->pc = 0x2d3608u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
label_2d360c:
    // 0x2d360c: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x2d360cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
label_2d3610:
    // 0x2d3610: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2d3610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d3614:
    // 0x2d3614: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2d3614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2d3618:
    // 0x2d3618: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d3618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2d361c:
    // 0x2d361c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2d3620:
    if (ctx->pc == 0x2D3620u) {
        ctx->pc = 0x2D3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D361Cu;
        // 0x2d3620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3624u;
        goto label_2d3624;
    }
    ctx->pc = 0x2D361Cu;
    {
        const bool branch_taken_0x2d361c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D361Cu;
        // 0x2d3620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d361c) {
            ctx->pc = 0x2D362Cu;
            goto label_2d362c;
        }
    }
    ctx->pc = 0x2D3624u;
label_2d3624:
    // 0x2d3624: 0xc0b4e10  jal         func_2D3840
label_2d3628:
    if (ctx->pc == 0x2D3628u) {
        ctx->pc = 0x2D3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3624u;
        // 0x2d3628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D362Cu;
        goto label_2d362c;
    }
    ctx->pc = 0x2D3624u;
    SET_GPR_U32(ctx, 31, 0x2D362Cu);
    ctx->pc = 0x2D3628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3624u;
    // 0x2d3628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3840u, 0x2D3624u, 0x2D362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D362Cu;
label_2d362c:
    // 0x2d362c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d362cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d3630:
    // 0x2d3630: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2d3630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_2d3634:
    // 0x2d3634: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2d3638:
    if (ctx->pc == 0x2D3638u) {
        ctx->pc = 0x2D3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3634u;
        // 0x2d3638: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D363Cu;
        goto label_2d363c;
    }
    ctx->pc = 0x2D3634u;
    {
        const bool branch_taken_0x2d3634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3634u;
        // 0x2d3638: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3634) {
            ctx->pc = 0x2D3618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3618;
        }
    }
    ctx->pc = 0x2D363Cu;
label_2d363c:
    // 0x2d363c: 0xc0fb576  jal         func_3ED5D8
label_2d3640:
    if (ctx->pc == 0x2D3640u) {
        ctx->pc = 0x2D3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D363Cu;
        // 0x2d3640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3644u;
        goto label_2d3644;
    }
    ctx->pc = 0x2D363Cu;
    SET_GPR_U32(ctx, 31, 0x2D3644u);
    ctx->pc = 0x2D3640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D363Cu;
    // 0x2d3640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED5D8u, 0x2D363Cu, 0x2D3644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3644u;
label_2d3644:
    // 0x2d3644: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x2d3644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_2d3648:
    // 0x2d3648: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2d364c:
    if (ctx->pc == 0x2D364Cu) {
        ctx->pc = 0x2D364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3648u;
        // 0x2d364c: 0x32730001  andi        $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3650u;
        goto label_2d3650;
    }
    ctx->pc = 0x2D3648u;
    {
        const bool branch_taken_0x2d3648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3648u;
        // 0x2d364c: 0x32730001  andi        $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3648) {
            ctx->pc = 0x2D3658u;
            goto label_2d3658;
        }
    }
    ctx->pc = 0x2D3650u;
label_2d3650:
    // 0x2d3650: 0xc0f528a  jal         func_3D4A28
label_2d3654:
    if (ctx->pc == 0x2D3654u) {
        ctx->pc = 0x2D3658u;
        goto label_2d3658;
    }
    ctx->pc = 0x2D3650u;
    SET_GPR_U32(ctx, 31, 0x2D3658u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2D3650u, 0x2D3658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3658u;
label_2d3658:
    // 0x2d3658: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x2d3658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_2d365c:
    // 0x2d365c: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x2d365cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_2d3660:
    // 0x2d3660: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2d3664:
    if (ctx->pc == 0x2D3664u) {
        ctx->pc = 0x2D3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3660u;
        // 0x2d3664: 0xae4000a0  sw          $zero, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3668u;
        goto label_2d3668;
    }
    ctx->pc = 0x2D3660u;
    {
        const bool branch_taken_0x2d3660 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3660u;
        // 0x2d3664: 0xae4000a0  sw          $zero, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3660) {
            ctx->pc = 0x2D3694u;
            goto label_2d3694;
        }
    }
    ctx->pc = 0x2D3668u;
label_2d3668:
    // 0x2d3668: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2d3668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d366c:
    // 0x2d366c: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
label_2d3670:
    if (ctx->pc == 0x2D3670u) {
        ctx->pc = 0x2D3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D366Cu;
        // 0x2d3670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3674u;
        goto label_2d3674;
    }
    ctx->pc = 0x2D366Cu;
    {
        const bool branch_taken_0x2d366c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D366Cu;
        // 0x2d3670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d366c) {
            ctx->pc = 0x2D3698u;
            goto label_2d3698;
        }
    }
    ctx->pc = 0x2D3674u;
label_2d3674:
    // 0x2d3674: 0x2610ffec  addiu       $s0, $s0, -0x14
    ctx->pc = 0x2d3674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_2d3678:
    // 0x2d3678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d367c:
    // 0x2d367c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2d367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d3680:
    // 0x2d3680: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d3680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d3684:
    // 0x2d3684: 0x40f809  jalr        $v0
label_2d3688:
    if (ctx->pc == 0x2D3688u) {
        ctx->pc = 0x2D3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3684u;
        // 0x2d3688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D368Cu;
        goto label_2d368c;
    }
    ctx->pc = 0x2D3684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D368Cu);
        ctx->pc = 0x2D3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3684u;
        // 0x2d3688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3684u, 0x2D368Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D368Cu;
label_2d368c:
    // 0x2d368c: 0x1630fffa  bne         $s1, $s0, . + 4 + (-0x6 << 2)
label_2d3690:
    if (ctx->pc == 0x2D3690u) {
        ctx->pc = 0x2D3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D368Cu;
        // 0x2d3690: 0x2610ffec  addiu       $s0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3694u;
        goto label_2d3694;
    }
    ctx->pc = 0x2D368Cu;
    {
        const bool branch_taken_0x2d368c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D368Cu;
        // 0x2d3690: 0x2610ffec  addiu       $s0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d368c) {
            ctx->pc = 0x2D3678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3678;
        }
    }
    ctx->pc = 0x2D3694u;
label_2d3694:
    // 0x2d3694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d3698:
    // 0x2d3698: 0xc0f6ae0  jal         func_3DAB80
label_2d369c:
    if (ctx->pc == 0x2D369Cu) {
        ctx->pc = 0x2D369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3698u;
        // 0x2d369c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D36A0u;
        goto label_2d36a0;
    }
    ctx->pc = 0x2D3698u;
    SET_GPR_U32(ctx, 31, 0x2D36A0u);
    ctx->pc = 0x2D369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3698u;
    // 0x2d369c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAB80u, 0x2D3698u, 0x2D36A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36A0u;
label_2d36a0:
    // 0x2d36a0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2d36a4:
    if (ctx->pc == 0x2D36A4u) {
        ctx->pc = 0x2D36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36A0u;
        // 0x2d36a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D36A8u;
        goto label_2d36a8;
    }
    ctx->pc = 0x2D36A0u;
    {
        const bool branch_taken_0x2d36a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36A0u;
        // 0x2d36a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36a0) {
            ctx->pc = 0x2D36B4u;
            goto label_2d36b4;
        }
    }
    ctx->pc = 0x2D36A8u;
label_2d36a8:
    // 0x2d36a8: 0xc0f5222  jal         func_3D4888
label_2d36ac:
    if (ctx->pc == 0x2D36ACu) {
        ctx->pc = 0x2D36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36A8u;
        // 0x2d36ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D36B0u;
        goto label_2d36b0;
    }
    ctx->pc = 0x2D36A8u;
    SET_GPR_U32(ctx, 31, 0x2D36B0u);
    ctx->pc = 0x2D36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D36A8u;
    // 0x2d36ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D36A8u, 0x2D36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36B0u;
label_2d36b0:
    // 0x2d36b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d36b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d36b4:
    // 0x2d36b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d36b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d36b8:
    // 0x2d36b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d36b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d36bc:
    // 0x2d36bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d36bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d36c0:
    // 0x2d36c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d36c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d36c4:
    // 0x2d36c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d36c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d36c8:
    // 0x2d36c8: 0x3e00008  jr          $ra
label_2d36cc:
    if (ctx->pc == 0x2D36CCu) {
        ctx->pc = 0x2D36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36C8u;
        // 0x2d36cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D36D0u;
        goto label_fallthrough_0x2d36c8;
    }
    ctx->pc = 0x2D36C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36C8u;
        // 0x2d36cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D36C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d36c8:
    ctx->pc = 0x2D36D0u;
}
