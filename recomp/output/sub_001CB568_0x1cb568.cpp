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

// Function: sub_001CB568
// Address: 0x1cb568 - 0x1cbb68
void sub_001CB568_0x1cb568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB568_0x1cb568");
#endif

    switch (ctx->pc) {
        case 0x1cb600u: goto label_1cb600;
        case 0x1cb678u: goto label_1cb678;
        case 0x1cb700u: goto label_1cb700;
        case 0x1cb798u: goto label_1cb798;
        case 0x1cbae4u: goto label_1cbae4;
        default: break;
    }

    ctx->pc = 0x1cb568u;

    // 0x1cb568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cb568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cb56c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb570: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb578: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb57c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cb580: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cb580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cb584: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cb584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cb588: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cb588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cb58c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1cb58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cb590: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x1cb590u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb594: 0x8c510334  lw          $s1, 0x334($v0)
    ctx->pc = 0x1cb594u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1cb598: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cb598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1cb59c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1cb59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb5a0: 0x2c620037  sltiu       $v0, $v1, 0x37
    ctx->pc = 0x1cb5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)55) ? 1 : 0);
    // 0x1cb5a4: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1CB5A4u;
    {
        const bool branch_taken_0x1cb5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5A4u;
        // 0x1cb5a8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5a4) {
            ctx->pc = 0x1CB858u;
            goto label_1cb858;
        }
    }
    ctx->pc = 0x1CB5ACu;
    // 0x1cb5ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb5b0: 0x2442cd70  addiu       $v0, $v0, -0x3290
    ctx->pc = 0x1cb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954352));
    // 0x1cb5b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cb5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cb5b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cb5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb5bc: 0x800008  jr          $a0
    ctx->pc = 0x1CB5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB5C4u: goto label_1cb5c4;
            case 0x1CB5D0u: goto label_1cb5d0;
            case 0x1CB7F4u: goto label_1cb7f4;
            case 0x1CB800u: goto label_1cb800;
            case 0x1CB80Cu: goto label_1cb80c;
            case 0x1CB818u: goto label_1cb818;
            case 0x1CB824u: goto label_1cb824;
            case 0x1CB830u: goto label_1cb830;
            case 0x1CB83Cu: goto label_1cb83c;
            case 0x1CB848u: goto label_1cb848;
            case 0x1CB858u: goto label_1cb858;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB5BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB5C4u;
label_1cb5c4:
    // 0x1cb5c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb5c8: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1CB5C8u;
    {
        const bool branch_taken_0x1cb5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5C8u;
        // 0x1cb5cc: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5c8) {
            ctx->pc = 0x1CB854u;
            goto label_1cb854;
        }
    }
    ctx->pc = 0x1CB5D0u;
label_1cb5d0:
    // 0x1cb5d0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb5d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cb5d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cb5d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5dc: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1cb5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1cb5e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1cb5e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cb5e4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CB5E4u;
    {
        const bool branch_taken_0x1cb5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5E4u;
        // 0x1cb5e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5e4) {
            ctx->pc = 0x1CB620u;
            goto label_1cb620;
        }
    }
    ctx->pc = 0x1CB5ECu;
    // 0x1cb5ec: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1cb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cb5f0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB5F0u;
    {
        const bool branch_taken_0x1cb5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb5f0) {
            ctx->pc = 0x1CB5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB5F0u;
            // 0x1cb5f4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB624u;
            goto label_1cb624;
        }
    }
    ctx->pc = 0x1CB5F8u;
    // 0x1cb5f8: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1CB5F8u;
    SET_GPR_U32(ctx, 31, 0x1CB600u);
    ctx->pc = 0x1CB5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5F8u;
    // 0x1cb5fc: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1CB5F8u, 0x1CB600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB600u;
label_1cb600:
    // 0x1cb600: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB600u;
    {
        const bool branch_taken_0x1cb600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb600) {
            ctx->pc = 0x1CB604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB600u;
            // 0x1cb604: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB624u;
            goto label_1cb624;
        }
    }
    ctx->pc = 0x1CB608u;
    // 0x1cb608: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1cb608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb60c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1cb60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1cb610: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB610u;
    {
        const bool branch_taken_0x1cb610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB610u;
        // 0x1cb614: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb610) {
            ctx->pc = 0x1CB620u;
            goto label_1cb620;
        }
    }
    ctx->pc = 0x1CB618u;
    // 0x1cb618: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB618u;
    {
        const bool branch_taken_0x1cb618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb618) {
            ctx->pc = 0x1CB624u;
            goto label_1cb624;
        }
    }
    ctx->pc = 0x1CB620u;
label_1cb620:
    // 0x1cb620: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1cb620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb624:
    // 0x1cb624: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB624u;
    {
        const bool branch_taken_0x1cb624 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb624) {
            ctx->pc = 0x1CB644u;
            goto label_1cb644;
        }
    }
    ctx->pc = 0x1CB62Cu;
    // 0x1cb62c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1cb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb634: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cb634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cb638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cb638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb63c: 0x38630045  xori        $v1, $v1, 0x45
    ctx->pc = 0x1cb63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)69);
    // 0x1cb640: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x1cb640u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cb644:
    // 0x1cb644: 0x5660001f  bnel        $s3, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CB644u;
    {
        const bool branch_taken_0x1cb644 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb644) {
            ctx->pc = 0x1CB648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB644u;
            // 0x1cb648: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB6C4u;
            goto label_1cb6c4;
        }
    }
    ctx->pc = 0x1CB64Cu;
    // 0x1cb64c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1cb64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb650: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cb650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb654: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1cb654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1cb658: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1cb658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cb65c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CB65Cu;
    {
        const bool branch_taken_0x1cb65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB65Cu;
        // 0x1cb660: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb65c) {
            ctx->pc = 0x1CB698u;
            goto label_1cb698;
        }
    }
    ctx->pc = 0x1CB664u;
    // 0x1cb664: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1cb664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cb668: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB668u;
    {
        const bool branch_taken_0x1cb668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb668) {
            ctx->pc = 0x1CB66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB668u;
            // 0x1cb66c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB69Cu;
            goto label_1cb69c;
        }
    }
    ctx->pc = 0x1CB670u;
    // 0x1cb670: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1CB670u;
    SET_GPR_U32(ctx, 31, 0x1CB678u);
    ctx->pc = 0x1CB674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB670u;
    // 0x1cb674: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1CB670u, 0x1CB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB678u;
label_1cb678:
    // 0x1cb678: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB678u;
    {
        const bool branch_taken_0x1cb678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb678) {
            ctx->pc = 0x1CB67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB678u;
            // 0x1cb67c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB69Cu;
            goto label_1cb69c;
        }
    }
    ctx->pc = 0x1CB680u;
    // 0x1cb680: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1cb680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb684: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1cb684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1cb688: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB688u;
    {
        const bool branch_taken_0x1cb688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB688u;
        // 0x1cb68c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb688) {
            ctx->pc = 0x1CB698u;
            goto label_1cb698;
        }
    }
    ctx->pc = 0x1CB690u;
    // 0x1cb690: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB690u;
    {
        const bool branch_taken_0x1cb690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb690) {
            ctx->pc = 0x1CB69Cu;
            goto label_1cb69c;
        }
    }
    ctx->pc = 0x1CB698u;
label_1cb698:
    // 0x1cb698: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1cb698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb69c:
    // 0x1cb69c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB69Cu;
    {
        const bool branch_taken_0x1cb69c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb69c) {
            ctx->pc = 0x1CB6BCu;
            goto label_1cb6bc;
        }
    }
    ctx->pc = 0x1CB6A4u;
    // 0x1cb6a4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1cb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb6a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb6ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cb6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cb6b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cb6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb6b4: 0x38630049  xori        $v1, $v1, 0x49
    ctx->pc = 0x1cb6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)73);
    // 0x1cb6b8: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x1cb6b8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cb6bc:
    // 0x1cb6bc: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB6BCu;
    {
        const bool branch_taken_0x1cb6bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6bc) {
            ctx->pc = 0x1CB6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB6BCu;
            // 0x1cb6c0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB6C4u;
            goto label_1cb6c4;
        }
    }
    ctx->pc = 0x1CB6C4u;
label_1cb6c4:
    // 0x1cb6c4: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB6C4u;
    {
        const bool branch_taken_0x1cb6c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6c4) {
            ctx->pc = 0x1CB6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB6C4u;
            // 0x1cb6c8: 0x8e230150  lw          $v1, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB6D8u;
            goto label_1cb6d8;
        }
    }
    ctx->pc = 0x1CB6CCu;
    // 0x1cb6cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb6d0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1CB6D0u;
    {
        const bool branch_taken_0x1cb6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6D0u;
        // 0x1cb6d4: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6d0) {
            ctx->pc = 0x1CB854u;
            goto label_1cb854;
        }
    }
    ctx->pc = 0x1CB6D8u;
label_1cb6d8:
    // 0x1cb6d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cb6d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6dc: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1cb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1cb6e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1cb6e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cb6e4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CB6E4u;
    {
        const bool branch_taken_0x1cb6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6E4u;
        // 0x1cb6e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6e4) {
            ctx->pc = 0x1CB720u;
            goto label_1cb720;
        }
    }
    ctx->pc = 0x1CB6ECu;
    // 0x1cb6ec: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1cb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cb6f0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB6F0u;
    {
        const bool branch_taken_0x1cb6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb6f0) {
            ctx->pc = 0x1CB6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB6F0u;
            // 0x1cb6f4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB724u;
            goto label_1cb724;
        }
    }
    ctx->pc = 0x1CB6F8u;
    // 0x1cb6f8: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1CB6F8u;
    SET_GPR_U32(ctx, 31, 0x1CB700u);
    ctx->pc = 0x1CB6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6F8u;
    // 0x1cb6fc: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1CB6F8u, 0x1CB700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB700u;
label_1cb700:
    // 0x1cb700: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB700u;
    {
        const bool branch_taken_0x1cb700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb700) {
            ctx->pc = 0x1CB704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB700u;
            // 0x1cb704: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB724u;
            goto label_1cb724;
        }
    }
    ctx->pc = 0x1CB708u;
    // 0x1cb708: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1cb708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb70c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1cb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1cb710: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB710u;
    {
        const bool branch_taken_0x1cb710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB710u;
        // 0x1cb714: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb710) {
            ctx->pc = 0x1CB720u;
            goto label_1cb720;
        }
    }
    ctx->pc = 0x1CB718u;
    // 0x1cb718: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB718u;
    {
        const bool branch_taken_0x1cb718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb718) {
            ctx->pc = 0x1CB724u;
            goto label_1cb724;
        }
    }
    ctx->pc = 0x1CB720u;
label_1cb720:
    // 0x1cb720: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1cb720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb724:
    // 0x1cb724: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB724u;
    {
        const bool branch_taken_0x1cb724 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb724) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB72Cu;
    // 0x1cb72c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1cb72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb734: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cb734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cb738: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cb738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb73c: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x1cb73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x1cb740: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x1cb740u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cb744:
    // 0x1cb744: 0x56600009  bnel        $s3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB744u;
    {
        const bool branch_taken_0x1cb744 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb744) {
            ctx->pc = 0x1CB748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB744u;
            // 0x1cb748: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB76Cu;
            goto label_1cb76c;
        }
    }
    ctx->pc = 0x1CB74Cu;
    // 0x1cb74c: 0x8e250150  lw          $a1, 0x150($s1)
    ctx->pc = 0x1cb74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb750: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x1cb750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1cb754: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cb754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb758: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1cb758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cb75c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cb75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb760: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB760u;
    {
        const bool branch_taken_0x1cb760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB760u;
        // 0x1cb764: 0x24a2fffa  addiu       $v0, $a1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb760) {
            ctx->pc = 0x1CB774u;
            goto label_1cb774;
        }
    }
    ctx->pc = 0x1CB768u;
    // 0x1cb768: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb76c:
    // 0x1cb76c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1CB76Cu;
    {
        const bool branch_taken_0x1cb76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB76Cu;
        // 0x1cb770: 0x34420200  ori         $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb76c) {
            ctx->pc = 0x1CB854u;
            goto label_1cb854;
        }
    }
    ctx->pc = 0x1CB774u;
label_1cb774:
    // 0x1cb774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cb774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb778: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1cb778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cb77c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CB77Cu;
    {
        const bool branch_taken_0x1cb77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB77Cu;
        // 0x1cb780: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb77c) {
            ctx->pc = 0x1CB7B8u;
            goto label_1cb7b8;
        }
    }
    ctx->pc = 0x1CB784u;
    // 0x1cb784: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1cb784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cb788: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB788u;
    {
        const bool branch_taken_0x1cb788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb788) {
            ctx->pc = 0x1CB78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB788u;
            // 0x1cb78c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB7BCu;
            goto label_1cb7bc;
        }
    }
    ctx->pc = 0x1CB790u;
    // 0x1cb790: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1CB790u;
    SET_GPR_U32(ctx, 31, 0x1CB798u);
    ctx->pc = 0x1CB794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB790u;
    // 0x1cb794: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1CB790u, 0x1CB798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB798u;
label_1cb798:
    // 0x1cb798: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB798u;
    {
        const bool branch_taken_0x1cb798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb798) {
            ctx->pc = 0x1CB79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB798u;
            // 0x1cb79c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB7BCu;
            goto label_1cb7bc;
        }
    }
    ctx->pc = 0x1CB7A0u;
    // 0x1cb7a0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1cb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb7a4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1cb7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1cb7a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB7A8u;
    {
        const bool branch_taken_0x1cb7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7A8u;
        // 0x1cb7ac: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7a8) {
            ctx->pc = 0x1CB7B8u;
            goto label_1cb7b8;
        }
    }
    ctx->pc = 0x1CB7B0u;
    // 0x1cb7b0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB7B0u;
    {
        const bool branch_taken_0x1cb7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb7b0) {
            ctx->pc = 0x1CB7BCu;
            goto label_1cb7bc;
        }
    }
    ctx->pc = 0x1CB7B8u;
label_1cb7b8:
    // 0x1cb7b8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1cb7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb7bc:
    // 0x1cb7bc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB7BCu;
    {
        const bool branch_taken_0x1cb7bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7bc) {
            ctx->pc = 0x1CB7DCu;
            goto label_1cb7dc;
        }
    }
    ctx->pc = 0x1CB7C4u;
    // 0x1cb7c4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1cb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1cb7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb7cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cb7d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cb7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb7d4: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x1cb7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x1cb7d8: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x1cb7d8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cb7dc:
    // 0x1cb7dc: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB7DCu;
    {
        const bool branch_taken_0x1cb7dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7DCu;
        // 0x1cb7e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7dc) {
            ctx->pc = 0x1CB7ECu;
            goto label_1cb7ec;
        }
    }
    ctx->pc = 0x1CB7E4u;
    // 0x1cb7e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CB7E4u;
    {
        const bool branch_taken_0x1cb7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7E4u;
        // 0x1cb7e8: 0x34420600  ori         $v0, $v0, 0x600 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7e4) {
            ctx->pc = 0x1CB854u;
            goto label_1cb854;
        }
    }
    ctx->pc = 0x1CB7ECu;
label_1cb7ec:
    // 0x1cb7ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CB7ECu;
    {
        const bool branch_taken_0x1cb7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7ECu;
        // 0x1cb7f0: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7ec) {
            ctx->pc = 0x1CB854u;
            goto label_1cb854;
        }
    }
    ctx->pc = 0x1CB7F4u;
label_1cb7f4:
    // 0x1cb7f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb7f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1CB7F8u;
    {
        const bool branch_taken_0x1cb7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7F8u;
        // 0x1cb7fc: 0x34420800  ori         $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7f8) {
            ctx->pc = 0x1CB854u;
            goto label_1cb854;
        }
    }
    ctx->pc = 0x1CB800u;
label_1cb800:
    // 0x1cb800: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb804: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CB804u;
    {
        const bool branch_taken_0x1cb804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB804u;
        // 0x1cb808: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb804) {
            ctx->pc = 0x1CB854u;
            goto label_1cb854;
        }
    }
    ctx->pc = 0x1CB80Cu;
label_1cb80c:
    // 0x1cb80c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb810: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB810u;
    {
        const bool branch_taken_0x1cb810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB810u;
        // 0x1cb814: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb810) {
            ctx->pc = 0x1CB854u;
            goto label_1cb854;
        }
    }
    ctx->pc = 0x1CB818u;
label_1cb818:
    // 0x1cb818: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb81c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CB81Cu;
    {
        const bool branch_taken_0x1cb81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB81Cu;
        // 0x1cb820: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb81c) {
            ctx->pc = 0x1CB850u;
            goto label_1cb850;
        }
    }
    ctx->pc = 0x1CB824u;
label_1cb824:
    // 0x1cb824: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb828: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1cb828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1cb82c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cb830:
    // 0x1cb830: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb834: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB834u;
    {
        const bool branch_taken_0x1cb834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB834u;
        // 0x1cb838: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb834) {
            ctx->pc = 0x1CB854u;
            goto label_1cb854;
        }
    }
    ctx->pc = 0x1CB83Cu;
label_1cb83c:
    // 0x1cb83c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB840u;
    {
        const bool branch_taken_0x1cb840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB840u;
        // 0x1cb844: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb840) {
            ctx->pc = 0x1CB854u;
            goto label_1cb854;
        }
    }
    ctx->pc = 0x1CB848u;
label_1cb848:
    // 0x1cb848: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb84c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1cb84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1cb850:
    // 0x1cb850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cb850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1cb854:
    // 0x1cb854: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cb858:
    // 0x1cb858: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1cb858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cb85c: 0x8c450334  lw          $a1, 0x334($v0)
    ctx->pc = 0x1cb85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1cb860: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x1cb860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x1cb864: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1cb864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cb868: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB868u;
    {
        const bool branch_taken_0x1cb868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB868u;
        // 0x1cb86c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb868) {
            ctx->pc = 0x1CB89Cu;
            goto label_1cb89c;
        }
    }
    ctx->pc = 0x1CB870u;
    // 0x1cb870: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cb874: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB874u;
    {
        const bool branch_taken_0x1cb874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB874u;
        // 0x1cb878: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb874) {
            ctx->pc = 0x1CB89Cu;
            goto label_1cb89c;
        }
    }
    ctx->pc = 0x1CB87Cu;
    // 0x1cb87c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB87Cu;
    {
        const bool branch_taken_0x1cb87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB87Cu;
        // 0x1cb880: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb87c) {
            ctx->pc = 0x1CB89Cu;
            goto label_1cb89c;
        }
    }
    ctx->pc = 0x1CB884u;
    // 0x1cb884: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB884u;
    {
        const bool branch_taken_0x1cb884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB884u;
        // 0x1cb888: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb884) {
            ctx->pc = 0x1CB89Cu;
            goto label_1cb89c;
        }
    }
    ctx->pc = 0x1CB88Cu;
    // 0x1cb88c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB88Cu;
    {
        const bool branch_taken_0x1cb88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB88Cu;
        // 0x1cb890: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb88c) {
            ctx->pc = 0x1CB89Cu;
            goto label_1cb89c;
        }
    }
    ctx->pc = 0x1CB894u;
    // 0x1cb894: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB894u;
    {
        const bool branch_taken_0x1cb894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb894) {
            ctx->pc = 0x1CB8A0u;
            goto label_1cb8a0;
        }
    }
    ctx->pc = 0x1CB89Cu;
label_1cb89c:
    // 0x1cb89c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb8a0:
    // 0x1cb8a0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB8A0u;
    {
        const bool branch_taken_0x1cb8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8A0u;
        // 0x1cb8a4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8a0) {
            ctx->pc = 0x1CB8C8u;
            goto label_1cb8c8;
        }
    }
    ctx->pc = 0x1CB8A8u;
    // 0x1cb8a8: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x1cb8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x1cb8ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb8b0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1cb8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cb8b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cb8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb8b8: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CB8B8u;
    {
        const bool branch_taken_0x1cb8b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8B8u;
        // 0x1cb8bc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8b8) {
            ctx->pc = 0x1CB918u;
            goto label_1cb918;
        }
    }
    ctx->pc = 0x1CB8C0u;
    // 0x1cb8c0: 0x50820016  beql        $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CB8C0u;
    {
        const bool branch_taken_0x1cb8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb8c0) {
            ctx->pc = 0x1CB8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB8C0u;
            // 0x1cb8c4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB91Cu;
            goto label_1cb91c;
        }
    }
    ctx->pc = 0x1CB8C8u;
label_1cb8c8:
    // 0x1cb8c8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1cb8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cb8cc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1cb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cb8d0: 0x8c820418  lw          $v0, 0x418($a0)
    ctx->pc = 0x1cb8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1048)));
    // 0x1cb8d4: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CB8D4u;
    {
        const bool branch_taken_0x1cb8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb8d4) {
            ctx->pc = 0x1CB8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB8D4u;
            // 0x1cb8d8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB928u;
            goto label_1cb928;
        }
    }
    ctx->pc = 0x1CB8DCu;
    // 0x1cb8dc: 0x8c840334  lw          $a0, 0x334($a0)
    ctx->pc = 0x1cb8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x1cb8e0: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1cb8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1cb8e4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1cb8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1cb8e8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB8E8u;
    {
        const bool branch_taken_0x1cb8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8E8u;
        // 0x1cb8ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8e8) {
            ctx->pc = 0x1CB910u;
            goto label_1cb910;
        }
    }
    ctx->pc = 0x1CB8F0u;
    // 0x1cb8f0: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x1cb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1cb8f4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1cb8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb8f8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1cb8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb8fc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1cb8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb900: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cb900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb904: 0x0  nop
    ctx->pc = 0x1cb904u;
    // NOP
    // 0x1cb908: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB908u;
    {
        const bool branch_taken_0x1cb908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb908) {
            ctx->pc = 0x1CB90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB908u;
            // 0x1cb90c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB910u;
            goto label_1cb910;
        }
    }
    ctx->pc = 0x1CB910u;
label_1cb910:
    // 0x1cb910: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB910u;
    {
        const bool branch_taken_0x1cb910 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb910) {
            ctx->pc = 0x1CB914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB910u;
            // 0x1cb914: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB928u;
            goto label_1cb928;
        }
    }
    ctx->pc = 0x1CB918u;
label_1cb918:
    // 0x1cb918: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb91c:
    // 0x1cb91c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1cb91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1cb920: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cb924: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1cb924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1cb928:
    // 0x1cb928: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cb928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cb92c: 0x8c440418  lw          $a0, 0x418($v0)
    ctx->pc = 0x1cb92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1048)));
    // 0x1cb930: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB930u;
    {
        const bool branch_taken_0x1cb930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB930u;
        // 0x1cb934: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb930) {
            ctx->pc = 0x1CB940u;
            goto label_1cb940;
        }
    }
    ctx->pc = 0x1CB938u;
    // 0x1cb938: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB938u;
    {
        const bool branch_taken_0x1cb938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb938) {
            ctx->pc = 0x1CB93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB938u;
            // 0x1cb93c: 0x8ca20150  lw          $v0, 0x150($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB950u;
            goto label_1cb950;
        }
    }
    ctx->pc = 0x1CB940u;
label_1cb940:
    // 0x1cb940: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb944: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1cb944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1cb948: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cb94c: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x1cb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_1cb950:
    // 0x1cb950: 0x24040366  addiu       $a0, $zero, 0x366
    ctx->pc = 0x1cb950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 870));
    // 0x1cb954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb958: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1cb958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cb95c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cb95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb960: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB960u;
    {
        const bool branch_taken_0x1cb960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cb960) {
            ctx->pc = 0x1CB964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB960u;
            // 0x1cb964: 0x8e220150  lw          $v0, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB97Cu;
            goto label_1cb97c;
        }
    }
    ctx->pc = 0x1CB968u;
    // 0x1cb968: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1cb968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cb96c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1cb96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1cb970: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cb970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cb974: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1cb974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1cb978: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1cb978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1cb97c:
    // 0x1cb97c: 0x2444fff3  addiu       $a0, $v0, -0xD
    ctx->pc = 0x1cb97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
    // 0x1cb980: 0x2c830023  sltiu       $v1, $a0, 0x23
    ctx->pc = 0x1cb980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x1cb984: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CB984u;
    {
        const bool branch_taken_0x1cb984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB984u;
        // 0x1cb988: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb984) {
            ctx->pc = 0x1CB9F4u;
            goto label_1cb9f4;
        }
    }
    ctx->pc = 0x1CB98Cu;
    // 0x1cb98c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cb98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb990: 0x2442ce50  addiu       $v0, $v0, -0x31B0
    ctx->pc = 0x1cb990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954576));
    // 0x1cb994: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cb994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cb998: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cb998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb99c: 0x800008  jr          $a0
    ctx->pc = 0x1CB99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB9A4u: goto label_1cb9a4;
            case 0x1CB9B0u: goto label_1cb9b0;
            case 0x1CB9C0u: goto label_1cb9c0;
            case 0x1CB9CCu: goto label_1cb9cc;
            case 0x1CB9E4u: goto label_1cb9e4;
            case 0x1CB9F4u: goto label_1cb9f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB99Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB9A4u;
label_1cb9a4:
    // 0x1cb9a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb9a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB9A8u;
    {
        const bool branch_taken_0x1cb9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9A8u;
        // 0x1cb9ac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9a8) {
            ctx->pc = 0x1CB9ECu;
            goto label_1cb9ec;
        }
    }
    ctx->pc = 0x1CB9B0u;
label_1cb9b0:
    // 0x1cb9b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb9b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cb9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cb9b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cb9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cb9bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cb9c0:
    // 0x1cb9c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1cb9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1cb9c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB9C4u;
    {
        const bool branch_taken_0x1cb9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9C4u;
        // 0x1cb9c8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9c4) {
            ctx->pc = 0x1CB9ECu;
            goto label_1cb9ec;
        }
    }
    ctx->pc = 0x1CB9CCu;
label_1cb9cc:
    // 0x1cb9cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb9d0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1cb9d4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1cb9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1cb9d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cb9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cb9dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB9DCu;
    {
        const bool branch_taken_0x1cb9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9DCu;
        // 0x1cb9e0: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9dc) {
            ctx->pc = 0x1CB9F0u;
            goto label_1cb9f0;
        }
    }
    ctx->pc = 0x1CB9E4u;
label_1cb9e4:
    // 0x1cb9e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb9e8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1cb9ec:
    // 0x1cb9ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cb9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1cb9f0:
    // 0x1cb9f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cb9f4:
    // 0x1cb9f4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1cb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cb9f8: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1cb9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1cb9fc: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x1cb9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1cba00: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1cba00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1cba04: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBA04u;
    {
        const bool branch_taken_0x1cba04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cba04) {
            ctx->pc = 0x1CBA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBA04u;
            // 0x1cba08: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBA20u;
            goto label_1cba20;
        }
    }
    ctx->pc = 0x1CBA0Cu;
    // 0x1cba0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cba10: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1cba10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1cba14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cba18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cba18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cba1c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1cba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1cba20:
    // 0x1cba20: 0x8c621060  lw          $v0, 0x1060($v1)
    ctx->pc = 0x1cba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4192)));
    // 0x1cba24: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x1cba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x1cba28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBA28u;
    {
        const bool branch_taken_0x1cba28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cba28) {
            ctx->pc = 0x1CBA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBA28u;
            // 0x1cba2c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBA44u;
            goto label_1cba44;
        }
    }
    ctx->pc = 0x1CBA30u;
    // 0x1cba30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cba34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1cba34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1cba38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cba3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cba40: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1cba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1cba44:
    // 0x1cba44: 0x8c450338  lw          $a1, 0x338($v0)
    ctx->pc = 0x1cba44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x1cba48: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x1cba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x1cba4c: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x1cba4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x1cba50: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1CBA50u;
    {
        const bool branch_taken_0x1cba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA50u;
        // 0x1cba54: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba50) {
            ctx->pc = 0x1CBB34u;
            goto label_1cbb34;
        }
    }
    ctx->pc = 0x1CBA58u;
    // 0x1cba58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cba58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cba5c: 0x2442cee0  addiu       $v0, $v0, -0x3120
    ctx->pc = 0x1cba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954720));
    // 0x1cba60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cba64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cba68: 0x800008  jr          $a0
    ctx->pc = 0x1CBA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBA70u: goto label_1cba70;
            case 0x1CBA7Cu: goto label_1cba7c;
            case 0x1CBA88u: goto label_1cba88;
            case 0x1CBA98u: goto label_1cba98;
            case 0x1CBAA8u: goto label_1cbaa8;
            case 0x1CBAB8u: goto label_1cbab8;
            case 0x1CBAC8u: goto label_1cbac8;
            case 0x1CBAFCu: goto label_1cbafc;
            case 0x1CBB0Cu: goto label_1cbb0c;
            case 0x1CBB1Cu: goto label_1cbb1c;
            case 0x1CBB28u: goto label_1cbb28;
            case 0x1CBB34u: goto label_1cbb34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBA68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CBA70u;
label_1cba70:
    // 0x1cba70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cba74: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1CBA74u;
    {
        const bool branch_taken_0x1cba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA74u;
        // 0x1cba78: 0x34424000  ori         $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba74) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBA7Cu;
label_1cba7c:
    // 0x1cba7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cba80: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1CBA80u;
    {
        const bool branch_taken_0x1cba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA80u;
        // 0x1cba84: 0x34422000  ori         $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba80) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBA88u;
label_1cba88:
    // 0x1cba88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cba88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cba8c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1cba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1cba90: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1CBA90u;
    {
        const bool branch_taken_0x1cba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA90u;
        // 0x1cba94: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba90) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBA98u;
label_1cba98:
    // 0x1cba98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cba9c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1cba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1cbaa0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1CBAA0u;
    {
        const bool branch_taken_0x1cbaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAA0u;
        // 0x1cbaa4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbaa0) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBAA8u;
label_1cbaa8:
    // 0x1cbaa8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbaac: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1cbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1cbab0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CBAB0u;
    {
        const bool branch_taken_0x1cbab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAB0u;
        // 0x1cbab4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbab0) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBAB8u;
label_1cbab8:
    // 0x1cbab8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbabc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1cbabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1cbac0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CBAC0u;
    {
        const bool branch_taken_0x1cbac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAC0u;
        // 0x1cbac4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbac0) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBAC8u;
label_1cbac8:
    // 0x1cbac8: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x1cbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x1cbacc: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x1cbaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x1cbad0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1cbad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cbad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBAD4u;
    {
        const bool branch_taken_0x1cbad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAD4u;
        // 0x1cbad8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbad4) {
            ctx->pc = 0x1CBAE8u;
            goto label_1cbae8;
        }
    }
    ctx->pc = 0x1CBADCu;
    // 0x1cbadc: 0xc0f753e  jal         func_3DD4F8
    ctx->pc = 0x1CBADCu;
    SET_GPR_U32(ctx, 31, 0x1CBAE4u);
    ctx->pc = 0x1CBAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBADCu;
    // 0x1cbae0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4F8u, 0x1CBADCu, 0x1CBAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBAE4u;
label_1cbae4:
    // 0x1cbae4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1cbae4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cbae8:
    // 0x1cbae8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CBAE8u;
    {
        const bool branch_taken_0x1cbae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAE8u;
        // 0x1cbaec: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbae8) {
            ctx->pc = 0x1CBB34u;
            goto label_1cbb34;
        }
    }
    ctx->pc = 0x1CBAF0u;
    // 0x1cbaf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbaf4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CBAF4u;
    {
        const bool branch_taken_0x1cbaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAF4u;
        // 0x1cbaf8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbaf4) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBAFCu;
label_1cbafc:
    // 0x1cbafc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbb00: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1cbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1cbb04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CBB04u;
    {
        const bool branch_taken_0x1cbb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB04u;
        // 0x1cbb08: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb04) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBB0Cu;
label_1cbb0c:
    // 0x1cbb0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cbb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbb10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1cbb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1cbb14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBB14u;
    {
        const bool branch_taken_0x1cbb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB14u;
        // 0x1cbb18: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb14) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBB1Cu;
label_1cbb1c:
    // 0x1cbb1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbb20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBB20u;
    {
        const bool branch_taken_0x1cbb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB20u;
        // 0x1cbb24: 0x34428000  ori         $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb20) {
            ctx->pc = 0x1CBB30u;
            goto label_1cbb30;
        }
    }
    ctx->pc = 0x1CBB28u;
label_1cbb28:
    // 0x1cbb28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbb2c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1cbb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_1cbb30:
    // 0x1cbb30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cbb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cbb34:
    // 0x1cbb34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbb38: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x1cbb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
    // 0x1cbb3c: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x1cbb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
    // 0x1cbb40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbb44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbb44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cbb48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1cbb48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cbb4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cbb4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbb50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cbb50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cbb54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cbb54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cbb58: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cbb58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cbb5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cbb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cbb60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB60u;
        // 0x1cbb64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBB68u;
}
