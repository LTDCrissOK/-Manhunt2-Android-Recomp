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

// Function: sub_0021C4F8
// Address: 0x21c4f8 - 0x21c788
void sub_0021C4F8_0x21c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C4F8_0x21c4f8");
#endif

    switch (ctx->pc) {
        case 0x21c540u: goto label_21c540;
        case 0x21c568u: goto label_21c568;
        case 0x21c570u: goto label_21c570;
        case 0x21c5b0u: goto label_21c5b0;
        case 0x21c64cu: goto label_21c64c;
        case 0x21c678u: goto label_21c678;
        case 0x21c6d8u: goto label_21c6d8;
        case 0x21c718u: goto label_21c718;
        case 0x21c740u: goto label_21c740;
        default: break;
    }

    ctx->pc = 0x21c4f8u;

    // 0x21c4f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21c4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21c4fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x21c4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x21c500: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x21c500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x21c504: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x21c504u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x21c508: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x21c508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x21c50c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x21c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x21c510: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x21c510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21c514: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21c518: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21c518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c51c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x21c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x21c520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c524: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x21c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x21c528: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x21c528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c52c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21c52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x21c530: 0x26103598  addiu       $s0, $s0, 0x3598
    ctx->pc = 0x21c530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13720));
    // 0x21c534: 0x8e6200f8  lw          $v0, 0xF8($s3)
    ctx->pc = 0x21c534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x21c538: 0xc085a12  jal         func_216848
    ctx->pc = 0x21C538u;
    SET_GPR_U32(ctx, 31, 0x21C540u);
    ctx->pc = 0x21C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C538u;
    // 0x21c53c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216848u, 0x21C538u, 0x21C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C540u;
label_21c540:
    // 0x21c540: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21C540u;
    {
        const bool branch_taken_0x21c540 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x21c540) {
            ctx->pc = 0x21C544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C540u;
            // 0x21c544: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C548u;
            goto label_21c548;
        }
    }
    ctx->pc = 0x21C548u;
label_21c548:
    // 0x21c548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c54c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21c550: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21c554: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x21c554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21c558: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21c558u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c55c: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x21C55Cu;
    {
        const bool branch_taken_0x21c55c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x21C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C55Cu;
        // 0x21c560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c55c) {
            ctx->pc = 0x21C588u;
            goto label_21c588;
        }
    }
    ctx->pc = 0x21C564u;
    // 0x21c564: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21c568:
    // 0x21c568: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x21C568u;
    SET_GPR_U32(ctx, 31, 0x21C570u);
    ctx->pc = 0x21C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C568u;
    // 0x21c56c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x21C568u, 0x21C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C570u;
label_21c570:
    // 0x21c570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C570u;
    {
        const bool branch_taken_0x21c570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C570u;
        // 0x21c574: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c570) {
            ctx->pc = 0x21C588u;
            goto label_21c588;
        }
    }
    ctx->pc = 0x21C578u;
    // 0x21c578: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21c578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21c57c: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21C57Cu;
    {
        const bool branch_taken_0x21c57c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x21c57c) {
            ctx->pc = 0x21C580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C57Cu;
            // 0x21c580: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c568;
        }
    }
    ctx->pc = 0x21C584u;
    // 0x21c584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c588:
    // 0x21c588: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C588u;
    {
        const bool branch_taken_0x21c588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c588) {
            ctx->pc = 0x21C58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C588u;
            // 0x21c58c: 0x8e6200f8  lw          $v0, 0xF8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C5A0u;
            goto label_21c5a0;
        }
    }
    ctx->pc = 0x21C590u;
    // 0x21c590: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c594: 0x10530072  beq         $v0, $s3, . + 4 + (0x72 << 2)
    ctx->pc = 0x21C594u;
    {
        const bool branch_taken_0x21c594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x21C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C594u;
        // 0x21c598: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c594) {
            ctx->pc = 0x21C760u;
            goto label_21c760;
        }
    }
    ctx->pc = 0x21C59Cu;
    // 0x21c59c: 0x8e6200f8  lw          $v0, 0xF8($s3)
    ctx->pc = 0x21c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
label_21c5a0:
    // 0x21c5a0: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x21c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x21c5a4: 0x26903598  addiu       $s0, $s4, 0x3598
    ctx->pc = 0x21c5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 13720));
    // 0x21c5a8: 0xc085a12  jal         func_216848
    ctx->pc = 0x21C5A8u;
    SET_GPR_U32(ctx, 31, 0x21C5B0u);
    ctx->pc = 0x21C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C5A8u;
    // 0x21c5ac: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216848u, 0x21C5A8u, 0x21C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5B0u;
label_21c5b0:
    // 0x21c5b0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21C5B0u;
    {
        const bool branch_taken_0x21c5b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x21c5b0) {
            ctx->pc = 0x21C5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C5B0u;
            // 0x21c5b4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C5B8u;
            goto label_21c5b8;
        }
    }
    ctx->pc = 0x21C5B8u;
label_21c5b8:
    // 0x21c5b8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x21c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21c5bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c5c0: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x21c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x21c5c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21c5c8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x21c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x21c5cc: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x21c5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21c5d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x21c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21c5d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21c5d8: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21C5D8u;
    {
        const bool branch_taken_0x21c5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5D8u;
        // 0x21c5dc: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5d8) {
            ctx->pc = 0x21C608u;
            goto label_21c608;
        }
    }
    ctx->pc = 0x21C5E0u;
    // 0x21c5e0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C5E0u;
    {
        const bool branch_taken_0x21c5e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c5e0) {
            ctx->pc = 0x21C5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C5E0u;
            // 0x21c5e4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C5F8u;
            goto label_21c5f8;
        }
    }
    ctx->pc = 0x21C5E8u;
    // 0x21c5e8: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x21c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x21c5ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21c5f0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x21c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x21c5f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x21c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_21c5f8:
    // 0x21c5f8: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x21c5f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x21c5fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x21c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x21c600: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x21C600u;
    {
        const bool branch_taken_0x21c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C600u;
        // 0x21c604: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c600) {
            ctx->pc = 0x21C750u;
            goto label_21c750;
        }
    }
    ctx->pc = 0x21C608u;
label_21c608:
    // 0x21c608: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c60c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21c60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c614: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x21c614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x21c618: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x21c618u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x21c61c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x21c61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x21c620: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x21c620u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x21c624: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x21c624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x21c628: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x21c628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x21c62c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x21c62cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21c630: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21c630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c634: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x21c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21c638: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C638u;
    {
        const bool branch_taken_0x21c638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C638u;
        // 0x21c63c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c638) {
            ctx->pc = 0x21C654u;
            goto label_21c654;
        }
    }
    ctx->pc = 0x21C640u;
    // 0x21c640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21c640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c644: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x21C644u;
    SET_GPR_U32(ctx, 31, 0x21C64Cu);
    ctx->pc = 0x21C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C644u;
    // 0x21c648: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x21C644u, 0x21C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C64Cu;
label_21c64c:
    // 0x21c64c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21C64Cu;
    {
        const bool branch_taken_0x21c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C64Cu;
        // 0x21c650: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c64c) {
            ctx->pc = 0x21C660u;
            goto label_21c660;
        }
    }
    ctx->pc = 0x21C654u;
label_21c654:
    // 0x21c654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c658: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21c658u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c65c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21c65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c660:
    // 0x21c660: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x21c660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c664: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x21c664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c668: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x21c668u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x21c66c: 0x10b2000b  beq         $a1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x21C66Cu;
    {
        const bool branch_taken_0x21c66c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x21C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C66Cu;
        // 0x21c670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c66c) {
            ctx->pc = 0x21C69Cu;
            goto label_21c69c;
        }
    }
    ctx->pc = 0x21C674u;
    // 0x21c674: 0x0  nop
    ctx->pc = 0x21c674u;
    // NOP
label_21c678:
    // 0x21c678: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C678u;
    {
        const bool branch_taken_0x21c678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c678) {
            ctx->pc = 0x21C67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C678u;
            // 0x21c67c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C694u;
            goto label_21c694;
        }
    }
    ctx->pc = 0x21C680u;
    // 0x21c680: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c684: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21c684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21c688: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x21c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21c68c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x21c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x21c690: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x21c690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_21c694:
    // 0x21c694: 0x14b2fff8  bne         $a1, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21C694u;
    {
        const bool branch_taken_0x21c694 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        ctx->pc = 0x21C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C694u;
        // 0x21c698: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c694) {
            ctx->pc = 0x21C678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c678;
        }
    }
    ctx->pc = 0x21C69Cu;
label_21c69c:
    // 0x21c69c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x21c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x21c6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c6a4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C6A4u;
    {
        const bool branch_taken_0x21c6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6A4u;
        // 0x21c6a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6a4) {
            ctx->pc = 0x21C6CCu;
            goto label_21c6cc;
        }
    }
    ctx->pc = 0x21C6ACu;
    // 0x21c6ac: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x21C6ACu;
    {
        const bool branch_taken_0x21c6ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c6ac) {
            ctx->pc = 0x21C6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C6ACu;
            // 0x21c6b0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C700u;
            goto label_21c700;
        }
    }
    ctx->pc = 0x21C6B4u;
    // 0x21c6b4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21c6b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21c6bc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x21c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x21c6c0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x21c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x21c6c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21C6C4u;
    {
        const bool branch_taken_0x21c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6C4u;
        // 0x21c6c8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6c4) {
            ctx->pc = 0x21C700u;
            goto label_21c700;
        }
    }
    ctx->pc = 0x21C6CCu;
label_21c6cc:
    // 0x21c6cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21c6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6d0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C6D0u;
    {
        const bool branch_taken_0x21c6d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6D0u;
        // 0x21c6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6d0) {
            ctx->pc = 0x21C6F8u;
            goto label_21c6f8;
        }
    }
    ctx->pc = 0x21C6D8u;
label_21c6d8:
    // 0x21c6d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C6D8u;
    {
        const bool branch_taken_0x21c6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6D8u;
        // 0x21c6dc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6d8) {
            ctx->pc = 0x21C6F0u;
            goto label_21c6f0;
        }
    }
    ctx->pc = 0x21C6E0u;
    // 0x21c6e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21c6e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21c6e8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x21c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x21c6ec: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x21c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_21c6f0:
    // 0x21c6f0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21C6F0u;
    {
        const bool branch_taken_0x21c6f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6F0u;
        // 0x21c6f4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6f0) {
            ctx->pc = 0x21C6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c6d8;
        }
    }
    ctx->pc = 0x21C6F8u;
label_21c6f8:
    // 0x21c6f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c6f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6fc: 0x0  nop
    ctx->pc = 0x21c6fcu;
    // NOP
label_21c700:
    // 0x21c700: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21c700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c704: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21c704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21c708: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C708u;
    {
        const bool branch_taken_0x21c708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C708u;
        // 0x21c70c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c708) {
            ctx->pc = 0x21C730u;
            goto label_21c730;
        }
    }
    ctx->pc = 0x21C710u;
    // 0x21c710: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x21c710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x21c714: 0x0  nop
    ctx->pc = 0x21c714u;
    // NOP
label_21c718:
    // 0x21c718: 0x0  nop
    ctx->pc = 0x21c718u;
    // NOP
    // 0x21c71c: 0x0  nop
    ctx->pc = 0x21c71cu;
    // NOP
    // 0x21c720: 0x0  nop
    ctx->pc = 0x21c720u;
    // NOP
    // 0x21c724: 0x0  nop
    ctx->pc = 0x21c724u;
    // NOP
    // 0x21c728: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21C728u;
    {
        const bool branch_taken_0x21c728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C728u;
        // 0x21c72c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c728) {
            ctx->pc = 0x21C718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c718;
        }
    }
    ctx->pc = 0x21C730u;
label_21c730:
    // 0x21c730: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C730u;
    {
        const bool branch_taken_0x21c730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C730u;
        // 0x21c734: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c730) {
            ctx->pc = 0x21C744u;
            goto label_21c744;
        }
    }
    ctx->pc = 0x21C738u;
    // 0x21c738: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x21C738u;
    SET_GPR_U32(ctx, 31, 0x21C740u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x21C738u, 0x21C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C740u;
label_21c740:
    // 0x21c740: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x21c740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_21c744:
    // 0x21c744: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x21c744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x21c748: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21c748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x21c74c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x21c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_21c750:
    // 0x21c750: 0xdec295e0  ld          $v0, -0x6A20($s6)
    ctx->pc = 0x21c750u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 4294940128)));
    // 0x21c754: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x21c754u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x21c758: 0xfec295e0  sd          $v0, -0x6A20($s6)
    ctx->pc = 0x21c758u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294940128), GPR_U64(ctx, 2));
    // 0x21c75c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x21c75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21c760:
    // 0x21c760: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x21c760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21c764: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x21c764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c768: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x21c768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c76c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21c76cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c770: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x21c770u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21c774: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x21c774u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21c778: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x21c778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21c77c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C77Cu;
        // 0x21c780: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C784u;
    // 0x21c784: 0x0  nop
    ctx->pc = 0x21c784u;
    // NOP
    ctx->pc = 0x21c788u;
}
