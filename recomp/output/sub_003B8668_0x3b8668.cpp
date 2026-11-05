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

// Function: sub_003B8668
// Address: 0x3b8668 - 0x3b87c0
void sub_003B8668_0x3b8668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8668_0x3b8668");
#endif

    switch (ctx->pc) {
        case 0x3b8688u: goto label_3b8688;
        case 0x3b8694u: goto label_3b8694;
        case 0x3b86c0u: goto label_3b86c0;
        case 0x3b86d8u: goto label_3b86d8;
        case 0x3b86ecu: goto label_3b86ec;
        case 0x3b86fcu: goto label_3b86fc;
        case 0x3b8710u: goto label_3b8710;
        case 0x3b8718u: goto label_3b8718;
        case 0x3b8738u: goto label_3b8738;
        case 0x3b874cu: goto label_3b874c;
        case 0x3b8770u: goto label_3b8770;
        case 0x3b8778u: goto label_3b8778;
        default: break;
    }

    ctx->pc = 0x3b8668u;

    // 0x3b8668: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b8668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b866c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b8670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b8670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b8674: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b8674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8678: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b8678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b867c: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3b867cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x3b8680: 0xc0edf7c  jal         func_3B7DF0
    ctx->pc = 0x3B8680u;
    SET_GPR_U32(ctx, 31, 0x3B8688u);
    ctx->pc = 0x3B8684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8680u;
    // 0x3b8684: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7DF0u, 0x3B8680u, 0x3B8688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8688u;
label_3b8688:
    // 0x3b8688: 0x8e04acac  lw          $a0, -0x5354($s0)
    ctx->pc = 0x3b8688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945964)));
    // 0x3b868c: 0xc0f267c  jal         func_3C99F0
    ctx->pc = 0x3B868Cu;
    SET_GPR_U32(ctx, 31, 0x3B8694u);
    ctx->pc = 0x3C99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99F0u, 0x3B868Cu, 0x3B8694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8694u;
label_3b8694:
    // 0x3b8694: 0x8e03acac  lw          $v1, -0x5354($s0)
    ctx->pc = 0x3b8694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945964)));
    // 0x3b8698: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B8698u;
    {
        const bool branch_taken_0x3b8698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8698u;
        // 0x3b869c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8698) {
            ctx->pc = 0x3B86C8u;
            goto label_3b86c8;
        }
    }
    ctx->pc = 0x3B86A0u;
    // 0x3b86a0: 0x8c43ac90  lw          $v1, -0x5370($v0)
    ctx->pc = 0x3b86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945936)));
    // 0x3b86a4: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B86A4u;
    {
        const bool branch_taken_0x3b86a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86A4u;
        // 0x3b86a8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b86a4) {
            ctx->pc = 0x3B86ECu;
            goto label_3b86ec;
        }
    }
    ctx->pc = 0x3B86ACu;
    // 0x3b86ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b86acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b86b0: 0x8c46ac98  lw          $a2, -0x5368($v0)
    ctx->pc = 0x3b86b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945944)));
    // 0x3b86b4: 0x248407b0  addiu       $a0, $a0, 0x7B0
    ctx->pc = 0x3b86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1968));
    // 0x3b86b8: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3B86B8u;
    SET_GPR_U32(ctx, 31, 0x3B86C0u);
    ctx->pc = 0x3B86BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B86B8u;
    // 0x3b86bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3B86B8u, 0x3B86C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B86C0u;
label_3b86c0:
    // 0x3b86c0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3B86C0u;
    {
        const bool branch_taken_0x3b86c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86C0u;
        // 0x3b86c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b86c0) {
            ctx->pc = 0x3B87A8u;
            goto label_3b87a8;
        }
    }
    ctx->pc = 0x3B86C8u;
label_3b86c8:
    // 0x3b86c8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3b86cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b86d0: 0xc0ee17e  jal         func_3B85F8
    ctx->pc = 0x3B86D0u;
    SET_GPR_U32(ctx, 31, 0x3B86D8u);
    ctx->pc = 0x3B86D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B86D0u;
    // 0x3b86d4: 0xac51ac98  sw          $s1, -0x5368($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945944), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B85F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B85F8u, 0x3B86D0u, 0x3B86D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B86D8u;
label_3b86d8:
    // 0x3b86d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B86D8u;
    {
        const bool branch_taken_0x3b86d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86D8u;
        // 0x3b86dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b86d8) {
            ctx->pc = 0x3B86F4u;
            goto label_3b86f4;
        }
    }
    ctx->pc = 0x3B86E0u;
    // 0x3b86e0: 0x8e04acac  lw          $a0, -0x5354($s0)
    ctx->pc = 0x3b86e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945964)));
    // 0x3b86e4: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3B86E4u;
    SET_GPR_U32(ctx, 31, 0x3B86ECu);
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3B86E4u, 0x3B86ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B86ECu;
label_3b86ec:
    // 0x3b86ec: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3B86ECu;
    {
        const bool branch_taken_0x3b86ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86ECu;
        // 0x3b86f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b86ec) {
            ctx->pc = 0x3B87A8u;
            goto label_3b87a8;
        }
    }
    ctx->pc = 0x3B86F4u;
label_3b86f4:
    // 0x3b86f4: 0xc0f3272  jal         func_3CC9C8
    ctx->pc = 0x3B86F4u;
    SET_GPR_U32(ctx, 31, 0x3B86FCu);
    ctx->pc = 0x3B86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B86F4u;
    // 0x3b86f8: 0x3c120043  lui         $s2, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC9C8u, 0x3B86F4u, 0x3B86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B86FCu;
label_3b86fc:
    // 0x3b86fc: 0x8e42acd4  lw          $v0, -0x532C($s2)
    ctx->pc = 0x3b86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946004)));
    // 0x3b8700: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3B8700u;
    {
        const bool branch_taken_0x3b8700 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3B8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8700u;
        // 0x3b8704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8700) {
            ctx->pc = 0x3B87A8u;
            goto label_3b87a8;
        }
    }
    ctx->pc = 0x3B8708u;
    // 0x3b8708: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B8708u;
    {
        const bool branch_taken_0x3b8708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8708u;
        // 0x3b870c: 0x3c110043  lui         $s1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8708) {
            ctx->pc = 0x3B8734u;
            goto label_3b8734;
        }
    }
    ctx->pc = 0x3B8710u;
label_3b8710:
    // 0x3b8710: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3b8710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3b8714: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b8714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b8718:
    // 0x3b8718: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b8718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b871c: 0x0  nop
    ctx->pc = 0x3b871cu;
    // NOP
    // 0x3b8720: 0x0  nop
    ctx->pc = 0x3b8720u;
    // NOP
    // 0x3b8724: 0x0  nop
    ctx->pc = 0x3b8724u;
    // NOP
    // 0x3b8728: 0x0  nop
    ctx->pc = 0x3b8728u;
    // NOP
    // 0x3b872c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B872Cu;
    {
        const bool branch_taken_0x3b872c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b872c) {
            ctx->pc = 0x3B8718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8718;
        }
    }
    ctx->pc = 0x3B8734u;
label_3b8734:
    // 0x3b8734: 0x2630c800  addiu       $s0, $s1, -0x3800
    ctx->pc = 0x3b8734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952960));
label_3b8738:
    // 0x3b8738: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3b8738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3b873c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b873cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8740: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x3b8740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x3b8744: 0xc0f3404  jal         func_3CD010
    ctx->pc = 0x3B8744u;
    SET_GPR_U32(ctx, 31, 0x3B874Cu);
    ctx->pc = 0x3B8748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8744u;
    // 0x3b8748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD010u, 0x3B8744u, 0x3B874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B874Cu;
label_3b874c:
    // 0x3b874c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B874Cu;
    {
        const bool branch_taken_0x3b874c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3b874c) {
            ctx->pc = 0x3B8750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B874Cu;
            // 0x3b8750: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B879Cu;
            goto label_3b879c;
        }
    }
    ctx->pc = 0x3B8754u;
    // 0x3b8754: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b8754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3b8758: 0x8c43ac90  lw          $v1, -0x5370($v0)
    ctx->pc = 0x3b8758u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42AC90u));
    // 0x3b875c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B875Cu;
    {
        const bool branch_taken_0x3b875c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B875Cu;
        // 0x3b8760: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b875c) {
            ctx->pc = 0x3B8774u;
            goto label_3b8774;
        }
    }
    ctx->pc = 0x3B8764u;
    // 0x3b8764: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b8764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b8768: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3B8768u;
    SET_GPR_U32(ctx, 31, 0x3B8770u);
    ctx->pc = 0x3B876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8768u;
    // 0x3b876c: 0x248407d8  addiu       $a0, $a0, 0x7D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3B8768u, 0x3B8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8770u;
label_3b8770:
    // 0x3b8770: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3b8770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_3b8774:
    // 0x3b8774: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b8774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b8778:
    // 0x3b8778: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b8778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b877c: 0x0  nop
    ctx->pc = 0x3b877cu;
    // NOP
    // 0x3b8780: 0x0  nop
    ctx->pc = 0x3b8780u;
    // NOP
    // 0x3b8784: 0x0  nop
    ctx->pc = 0x3b8784u;
    // NOP
    // 0x3b8788: 0x0  nop
    ctx->pc = 0x3b8788u;
    // NOP
    // 0x3b878c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B878Cu;
    {
        const bool branch_taken_0x3b878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b878c) {
            ctx->pc = 0x3B8778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8778;
        }
    }
    ctx->pc = 0x3B8794u;
    // 0x3b8794: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x3B8794u;
    {
        const bool branch_taken_0x3b8794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8794u;
        // 0x3b8798: 0x2630c800  addiu       $s0, $s1, -0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8794) {
            ctx->pc = 0x3B8738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8738;
        }
    }
    ctx->pc = 0x3B879Cu;
label_3b879c:
    // 0x3b879c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3B879Cu;
    {
        const bool branch_taken_0x3b879c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B879Cu;
        // 0x3b87a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b879c) {
            ctx->pc = 0x3B8710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8710;
        }
    }
    ctx->pc = 0x3B87A4u;
    // 0x3b87a4: 0xae40acd4  sw          $zero, -0x532C($s2)
    ctx->pc = 0x3b87a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294946004), GPR_U32(ctx, 0));
label_3b87a8:
    // 0x3b87a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b87a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b87ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b87acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b87b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b87b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b87b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b87b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b87b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B87B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B87B8u;
        // 0x3b87bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B87B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B87C0u;
}
