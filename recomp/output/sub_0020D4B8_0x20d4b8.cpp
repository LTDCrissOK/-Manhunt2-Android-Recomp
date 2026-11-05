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

// Function: sub_0020D4B8
// Address: 0x20d4b8 - 0x20d598
void sub_0020D4B8_0x20d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D4B8_0x20d4b8");
#endif

    switch (ctx->pc) {
        case 0x20d4d4u: goto label_20d4d4;
        case 0x20d4f0u: goto label_20d4f0;
        case 0x20d50cu: goto label_20d50c;
        case 0x20d528u: goto label_20d528;
        case 0x20d544u: goto label_20d544;
        case 0x20d560u: goto label_20d560;
        case 0x20d580u: goto label_20d580;
        default: break;
    }

    ctx->pc = 0x20d4b8u;

    // 0x20d4b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20d4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20d4bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d4c0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20d4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x20d4c4: 0x24a512a0  addiu       $a1, $a1, 0x12A0
    ctx->pc = 0x20d4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4768));
    // 0x20d4c8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20d4cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D4CCu;
    SET_GPR_U32(ctx, 31, 0x20D4D4u);
    ctx->pc = 0x20D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D4CCu;
    // 0x20d4d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D4CCu, 0x20D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4D4u;
label_20d4d4:
    // 0x20d4d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d4d8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x20D4D8u;
    {
        const bool branch_taken_0x20d4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4D8u;
        // 0x20d4dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4d8) {
            ctx->pc = 0x20D584u;
            goto label_20d584;
        }
    }
    ctx->pc = 0x20D4E0u;
    // 0x20d4e0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d4e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D4E8u;
    SET_GPR_U32(ctx, 31, 0x20D4F0u);
    ctx->pc = 0x20D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D4E8u;
    // 0x20d4ec: 0x24a512b0  addiu       $a1, $a1, 0x12B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D4E8u, 0x20D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4F0u;
label_20d4f0:
    // 0x20d4f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d4f4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x20D4F4u;
    {
        const bool branch_taken_0x20d4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4F4u;
        // 0x20d4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4f4) {
            ctx->pc = 0x20D584u;
            goto label_20d584;
        }
    }
    ctx->pc = 0x20D4FCu;
    // 0x20d4fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d504: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D504u;
    SET_GPR_U32(ctx, 31, 0x20D50Cu);
    ctx->pc = 0x20D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D504u;
    // 0x20d508: 0x24a512c0  addiu       $a1, $a1, 0x12C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D504u, 0x20D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D50Cu;
label_20d50c:
    // 0x20d50c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d510: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20D510u;
    {
        const bool branch_taken_0x20d510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D510u;
        // 0x20d514: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d510) {
            ctx->pc = 0x20D584u;
            goto label_20d584;
        }
    }
    ctx->pc = 0x20D518u;
    // 0x20d518: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d520: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D520u;
    SET_GPR_U32(ctx, 31, 0x20D528u);
    ctx->pc = 0x20D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D520u;
    // 0x20d524: 0x24a512d0  addiu       $a1, $a1, 0x12D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D520u, 0x20D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D528u;
label_20d528:
    // 0x20d528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d52c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20D52Cu;
    {
        const bool branch_taken_0x20d52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D52Cu;
        // 0x20d530: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d52c) {
            ctx->pc = 0x20D584u;
            goto label_20d584;
        }
    }
    ctx->pc = 0x20D534u;
    // 0x20d534: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d53c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D53Cu;
    SET_GPR_U32(ctx, 31, 0x20D544u);
    ctx->pc = 0x20D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D53Cu;
    // 0x20d540: 0x24a512e0  addiu       $a1, $a1, 0x12E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D53Cu, 0x20D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D544u;
label_20d544:
    // 0x20d544: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d548: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20D548u;
    {
        const bool branch_taken_0x20d548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D548u;
        // 0x20d54c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d548) {
            ctx->pc = 0x20D584u;
            goto label_20d584;
        }
    }
    ctx->pc = 0x20D550u;
    // 0x20d550: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d558: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D558u;
    SET_GPR_U32(ctx, 31, 0x20D560u);
    ctx->pc = 0x20D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D558u;
    // 0x20d55c: 0x24a512e8  addiu       $a1, $a1, 0x12E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D558u, 0x20D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D560u;
label_20d560:
    // 0x20d560: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d564: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D564u;
    {
        const bool branch_taken_0x20d564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D564u;
        // 0x20d568: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d564) {
            ctx->pc = 0x20D584u;
            goto label_20d584;
        }
    }
    ctx->pc = 0x20D56Cu;
    // 0x20d56c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x20d56cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d570: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d574: 0x24a513a0  addiu       $a1, $a1, 0x13A0
    ctx->pc = 0x20d574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5024));
    // 0x20d578: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x20D578u;
    SET_GPR_U32(ctx, 31, 0x20D580u);
    ctx->pc = 0x20D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D578u;
    // 0x20d57c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x20D578u, 0x20D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D580u;
label_20d580:
    // 0x20d580: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20d580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d584:
    // 0x20d584: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x20d584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d588: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20d588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20d58c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D58Cu;
        // 0x20d590: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D594u;
    // 0x20d594: 0x0  nop
    ctx->pc = 0x20d594u;
    // NOP
    ctx->pc = 0x20d598u;
}
