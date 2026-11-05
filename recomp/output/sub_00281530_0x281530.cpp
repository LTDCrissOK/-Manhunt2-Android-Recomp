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

// Function: sub_00281530
// Address: 0x281530 - 0x281600
void sub_00281530_0x281530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281530_0x281530");
#endif

    switch (ctx->pc) {
        case 0x281554u: goto label_281554;
        case 0x281564u: goto label_281564;
        case 0x281578u: goto label_281578;
        case 0x281588u: goto label_281588;
        case 0x2815acu: goto label_2815ac;
        case 0x2815b8u: goto label_2815b8;
        case 0x2815c4u: goto label_2815c4;
        case 0x2815d4u: goto label_2815d4;
        case 0x2815dcu: goto label_2815dc;
        case 0x2815ecu: goto label_2815ec;
        default: break;
    }

    ctx->pc = 0x281530u;

    // 0x281530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x281538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28153c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28153cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281540: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281544: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281544u;
    {
        const bool branch_taken_0x281544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x281548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281544u;
        // 0x281548: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281544) {
            ctx->pc = 0x28155Cu;
            goto label_28155c;
        }
    }
    ctx->pc = 0x28154Cu;
    // 0x28154c: 0xc0a033c  jal         func_280CF0
    ctx->pc = 0x28154Cu;
    SET_GPR_U32(ctx, 31, 0x281554u);
    ctx->pc = 0x281550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28154Cu;
    // 0x281550: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CF0u, 0x28154Cu, 0x281554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281554u;
label_281554:
    // 0x281554: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x281554u;
    {
        const bool branch_taken_0x281554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281554u;
        // 0x281558: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281554) {
            ctx->pc = 0x28157Cu;
            goto label_28157c;
        }
    }
    ctx->pc = 0x28155Cu;
label_28155c:
    // 0x28155c: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x28155Cu;
    SET_GPR_U32(ctx, 31, 0x281564u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x28155Cu, 0x281564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281564u;
label_281564:
    // 0x281564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281568: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x281568u;
    {
        const bool branch_taken_0x281568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x281568) {
            ctx->pc = 0x28156Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281568u;
            // 0x28156c: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28157Cu;
            goto label_28157c;
        }
    }
    ctx->pc = 0x281570u;
    // 0x281570: 0xc0a033c  jal         func_280CF0
    ctx->pc = 0x281570u;
    SET_GPR_U32(ctx, 31, 0x281578u);
    ctx->pc = 0x281574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281570u;
    // 0x281574: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CF0u, 0x281570u, 0x281578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281578u;
label_281578:
    // 0x281578: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x281578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_28157c:
    // 0x28157c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28157cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281580: 0xc0a8746  jal         func_2A1D18
    ctx->pc = 0x281580u;
    SET_GPR_U32(ctx, 31, 0x281588u);
    ctx->pc = 0x281584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281580u;
    // 0x281584: 0x2484ac50  addiu       $a0, $a0, -0x53B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D18u, 0x281580u, 0x281588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281588u;
label_281588:
    // 0x281588: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x281588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28158c: 0x8c432b9c  lw          $v1, 0x2B9C($v0)
    ctx->pc = 0x28158cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B9Cu));
    // 0x281590: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x281590u;
    {
        const bool branch_taken_0x281590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281590) {
            ctx->pc = 0x281594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281590u;
            // 0x281594: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2815F0u;
            goto label_2815f0;
        }
    }
    ctx->pc = 0x281598u;
    // 0x281598: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281598u;
    {
        const bool branch_taken_0x281598 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281598u;
        // 0x28159c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281598) {
            ctx->pc = 0x2815B0u;
            goto label_2815b0;
        }
    }
    ctx->pc = 0x2815A0u;
    // 0x2815a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2815a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815a4: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x2815A4u;
    SET_GPR_U32(ctx, 31, 0x2815ACu);
    ctx->pc = 0x2815A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2815A4u;
    // 0x2815a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x2815A4u, 0x2815ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815ACu;
label_2815ac:
    // 0x2815ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2815acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2815b0:
    // 0x2815b0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x2815B0u;
    SET_GPR_U32(ctx, 31, 0x2815B8u);
    ctx->pc = 0x2815B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2815B0u;
    // 0x2815b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2815B0u, 0x2815B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815B8u;
label_2815b8:
    // 0x2815b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2815b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815bc: 0xc0a0580  jal         func_281600
    ctx->pc = 0x2815BCu;
    SET_GPR_U32(ctx, 31, 0x2815C4u);
    ctx->pc = 0x2815C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2815BCu;
    // 0x2815c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281600u, 0x2815BCu, 0x2815C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815C4u;
label_2815c4:
    // 0x2815c4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2815C4u;
    {
        const bool branch_taken_0x2815c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2815C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815C4u;
        // 0x2815c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815c4) {
            ctx->pc = 0x2815F0u;
            goto label_2815f0;
        }
    }
    ctx->pc = 0x2815CCu;
    // 0x2815cc: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x2815CCu;
    SET_GPR_U32(ctx, 31, 0x2815D4u);
    ctx->pc = 0x2815D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2815CCu;
    // 0x2815d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x2815CCu, 0x2815D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815D4u;
label_2815d4:
    // 0x2815d4: 0xc0a1764  jal         func_285D90
    ctx->pc = 0x2815D4u;
    SET_GPR_U32(ctx, 31, 0x2815DCu);
    ctx->pc = 0x285D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285D90u, 0x2815D4u, 0x2815DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815DCu;
label_2815dc:
    // 0x2815dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2815DCu;
    {
        const bool branch_taken_0x2815dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815DCu;
        // 0x2815e0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815dc) {
            ctx->pc = 0x2815ECu;
            goto label_2815ec;
        }
    }
    ctx->pc = 0x2815E4u;
    // 0x2815e4: 0xc0b6a2a  jal         func_2DA8A8
    ctx->pc = 0x2815E4u;
    SET_GPR_U32(ctx, 31, 0x2815ECu);
    ctx->pc = 0x2815E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2815E4u;
    // 0x2815e8: 0x8c44a300  lw          $a0, -0x5D00($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8A8u, 0x2815E4u, 0x2815ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815ECu;
label_2815ec:
    // 0x2815ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2815ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2815f0:
    // 0x2815f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2815f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2815f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2815f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2815f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2815F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2815FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815F8u;
        // 0x2815fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2815F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281600u;
}
