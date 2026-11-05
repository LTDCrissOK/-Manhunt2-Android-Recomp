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

// Function: sub_00283728
// Address: 0x283728 - 0x283840
void sub_00283728_0x283728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283728_0x283728");
#endif

    switch (ctx->pc) {
        case 0x283760u: goto label_283760;
        default: break;
    }

    ctx->pc = 0x283728u;

    // 0x283728: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x283728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28372c: 0x240603fc  addiu       $a2, $zero, 0x3FC
    ctx->pc = 0x28372cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x283730: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x283730u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x283734: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283734u;
    {
        const bool branch_taken_0x283734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283734u;
        // 0x283738: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283734) {
            ctx->pc = 0x283748u;
            goto label_283748;
        }
    }
    ctx->pc = 0x28373Cu;
    // 0x28373c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28373cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283740: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283740u;
    {
        const bool branch_taken_0x283740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283740u;
        // 0x283744: 0x3c07006c  lui         $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283740) {
            ctx->pc = 0x283784u;
            goto label_283784;
        }
    }
    ctx->pc = 0x283748u;
label_283748:
    // 0x283748: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x283748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28374c: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x28374cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x283750: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x283750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x283754: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x283754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x283758: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x283758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x28375c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28375cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2480u));
label_283760:
    // 0x283760: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x283760u;
    {
        const bool branch_taken_0x283760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x283760) {
            ctx->pc = 0x283764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283760u;
            // 0x283764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283784u;
            goto label_283784;
        }
    }
    ctx->pc = 0x283768u;
    // 0x283768: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283768u;
    {
        const bool branch_taken_0x283768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x28376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283768u;
        // 0x28376c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283768) {
            ctx->pc = 0x283784u;
            goto label_283784;
        }
    }
    ctx->pc = 0x283770u;
    // 0x283770: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x283770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x283774: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x283774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x283778: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x283778u;
    {
        const bool branch_taken_0x283778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283778) {
            ctx->pc = 0x28377Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283778u;
            // 0x28377c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283760;
        }
    }
    ctx->pc = 0x283780u;
    // 0x283780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283784:
    // 0x283784: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x283784u;
    {
        const bool branch_taken_0x283784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283784) {
            ctx->pc = 0x283788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283784u;
            // 0x283788: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2837E4u;
            goto label_2837e4;
        }
    }
    ctx->pc = 0x28378Cu;
    // 0x28378c: 0x8d02aa88  lw          $v0, -0x5578($t0)
    ctx->pc = 0x28378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945416)));
    // 0x283790: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283790u;
    {
        const bool branch_taken_0x283790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283790u;
        // 0x283794: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283790) {
            ctx->pc = 0x2837ACu;
            goto label_2837ac;
        }
    }
    ctx->pc = 0x283798u;
    // 0x283798: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x283798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x28379c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x28379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2837a0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2837a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2837a4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2837A4u;
    {
        const bool branch_taken_0x2837a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2837a4) {
            ctx->pc = 0x2837A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2837A4u;
            // 0x2837a8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2837B4u;
            goto label_2837b4;
        }
    }
    ctx->pc = 0x2837ACu;
label_2837ac:
    // 0x2837ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2837ACu;
    {
        const bool branch_taken_0x2837ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837ACu;
        // 0x2837b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837ac) {
            ctx->pc = 0x2837B8u;
            goto label_2837b8;
        }
    }
    ctx->pc = 0x2837B4u;
label_2837b4:
    // 0x2837b4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2837b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_2837b8:
    // 0x2837b8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2837B8u;
    {
        const bool branch_taken_0x2837b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2837BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837B8u;
        // 0x2837bc: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837b8) {
            ctx->pc = 0x2837E4u;
            goto label_2837e4;
        }
    }
    ctx->pc = 0x2837C0u;
    // 0x2837c0: 0x8d02aa88  lw          $v0, -0x5578($t0)
    ctx->pc = 0x2837c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945416)));
    // 0x2837c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2837C4u;
    {
        const bool branch_taken_0x2837c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837C4u;
        // 0x2837c8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837c4) {
            ctx->pc = 0x2837D8u;
            goto label_2837d8;
        }
    }
    ctx->pc = 0x2837CCu;
    // 0x2837cc: 0x8c432478  lw          $v1, 0x2478($v0)
    ctx->pc = 0x2837ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9336)));
    // 0x2837d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2837D0u;
    {
        const bool branch_taken_0x2837d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837D0u;
        // 0x2837d4: 0x30631000  andi        $v1, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837d0) {
            ctx->pc = 0x2837DCu;
            goto label_2837dc;
        }
    }
    ctx->pc = 0x2837D8u;
label_2837d8:
    // 0x2837d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2837d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2837dc:
    // 0x2837dc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2837DCu;
    {
        const bool branch_taken_0x2837dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837DCu;
        // 0x2837e0: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837dc) {
            ctx->pc = 0x283828u;
            goto label_283828;
        }
    }
    ctx->pc = 0x2837E4u;
label_2837e4:
    // 0x2837e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2837e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2837e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2837e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2837ec: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2837ECu;
    {
        const bool branch_taken_0x2837ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2837F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837ECu;
        // 0x2837f0: 0xac820054  sw          $v0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837ec) {
            ctx->pc = 0x283804u;
            goto label_283804;
        }
    }
    ctx->pc = 0x2837F4u;
    // 0x2837f4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2837f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2837f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2837f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2837fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2837FCu;
    {
        const bool branch_taken_0x2837fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2837fc) {
            ctx->pc = 0x283800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2837FCu;
            // 0x283800: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283804u;
            goto label_283804;
        }
    }
    ctx->pc = 0x283804u;
label_283804:
    // 0x283804: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x283804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x283808: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x283808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x28380c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28380Cu;
    {
        const bool branch_taken_0x28380c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28380Cu;
        // 0x283810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28380c) {
            ctx->pc = 0x283820u;
            goto label_283820;
        }
    }
    ctx->pc = 0x283814u;
    // 0x283814: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x283814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x283818: 0x3e00008  jr          $ra
    ctx->pc = 0x283818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283818u;
        // 0x28381c: 0xac62003c  sw          $v0, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283820u;
label_283820:
    // 0x283820: 0x3e00008  jr          $ra
    ctx->pc = 0x283820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283820u;
        // 0x283824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283828u;
label_283828:
    // 0x283828: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x283828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x28382c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28382cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283830: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x283830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x283834: 0x3e00008  jr          $ra
    ctx->pc = 0x283834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283834u;
        // 0x283838: 0xac600054  sw          $zero, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28383Cu;
    // 0x28383c: 0x0  nop
    ctx->pc = 0x28383cu;
    // NOP
    ctx->pc = 0x283840u;
}
