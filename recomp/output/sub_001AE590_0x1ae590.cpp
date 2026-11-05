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

// Function: sub_001AE590
// Address: 0x1ae590 - 0x1ae700
void sub_001AE590_0x1ae590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE590_0x1ae590");
#endif

    switch (ctx->pc) {
        case 0x1ae5b4u: goto label_1ae5b4;
        case 0x1ae62cu: goto label_1ae62c;
        case 0x1ae6dcu: goto label_1ae6dc;
        default: break;
    }

    ctx->pc = 0x1ae590u;

    // 0x1ae590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae598: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae59c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ae5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ae5a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ae5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ae5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ae5ac: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AE5ACu;
    SET_GPR_U32(ctx, 31, 0x1AE5B4u);
    ctx->pc = 0x1AE5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE5ACu;
    // 0x1ae5b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AE5ACu, 0x1AE5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5B4u;
label_1ae5b4:
    // 0x1ae5b4: 0x8e06009c  lw          $a2, 0x9C($s0)
    ctx->pc = 0x1ae5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1ae5b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5bc: 0x8cc70334  lw          $a3, 0x334($a2)
    ctx->pc = 0x1ae5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
    // 0x1ae5c0: 0x8ce30150  lw          $v1, 0x150($a3)
    ctx->pc = 0x1ae5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x1ae5c4: 0x2462ffd9  addiu       $v0, $v1, -0x27
    ctx->pc = 0x1ae5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967257));
    // 0x1ae5c8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x1ae5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ae5cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE5CCu;
    {
        const bool branch_taken_0x1ae5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5CCu;
        // 0x1ae5d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5cc) {
            ctx->pc = 0x1AE5E0u;
            goto label_1ae5e0;
        }
    }
    ctx->pc = 0x1AE5D4u;
    // 0x1ae5d4: 0x38620027  xori        $v0, $v1, 0x27
    ctx->pc = 0x1ae5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)39);
    // 0x1ae5d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE5D8u;
    {
        const bool branch_taken_0x1ae5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae5d8) {
            ctx->pc = 0x1AE5E8u;
            goto label_1ae5e8;
        }
    }
    ctx->pc = 0x1AE5E0u;
label_1ae5e0:
    // 0x1ae5e0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1AE5E0u;
    {
        const bool branch_taken_0x1ae5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E0u;
        // 0x1ae5e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5e0) {
            ctx->pc = 0x1AE6E4u;
            goto label_1ae6e4;
        }
    }
    ctx->pc = 0x1AE5E8u;
label_1ae5e8:
    // 0x1ae5e8: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AE5E8u;
    {
        const bool branch_taken_0x1ae5e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E8u;
        // 0x1ae5ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5e8) {
            ctx->pc = 0x1AE634u;
            goto label_1ae634;
        }
    }
    ctx->pc = 0x1AE5F0u;
    // 0x1ae5f0: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE5F0u;
    {
        const bool branch_taken_0x1ae5f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F0u;
        // 0x1ae5f4: 0x28a20008  slti        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5f0) {
            ctx->pc = 0x1AE618u;
            goto label_1ae618;
        }
    }
    ctx->pc = 0x1AE5F8u;
    // 0x1ae5f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE5F8u;
    {
        const bool branch_taken_0x1ae5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F8u;
        // 0x1ae5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5f8) {
            ctx->pc = 0x1AE60Cu;
            goto label_1ae60c;
        }
    }
    ctx->pc = 0x1AE600u;
    // 0x1ae600: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ae600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ae604: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE604u;
    {
        const bool branch_taken_0x1ae604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE604u;
        // 0x1ae608: 0x240600ae  addiu       $a2, $zero, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae604) {
            ctx->pc = 0x1AE624u;
            goto label_1ae624;
        }
    }
    ctx->pc = 0x1AE60Cu;
label_1ae60c:
    // 0x1ae60c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ae60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ae610: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE610u;
    {
        const bool branch_taken_0x1ae610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE610u;
        // 0x1ae614: 0x240600ad  addiu       $a2, $zero, 0xAD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae610) {
            ctx->pc = 0x1AE624u;
            goto label_1ae624;
        }
    }
    ctx->pc = 0x1AE618u;
label_1ae618:
    // 0x1ae618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae61c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ae61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ae620: 0x240600ac  addiu       $a2, $zero, 0xAC
    ctx->pc = 0x1ae620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_1ae624:
    // 0x1ae624: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE624u;
    SET_GPR_U32(ctx, 31, 0x1AE62Cu);
    ctx->pc = 0x1AE628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE624u;
    // 0x1ae628: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE624u, 0x1AE62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE62Cu;
label_1ae62c:
    // 0x1ae62c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1AE62Cu;
    {
        const bool branch_taken_0x1ae62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE62Cu;
        // 0x1ae630: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae62c) {
            ctx->pc = 0x1AE6E8u;
            goto label_1ae6e8;
        }
    }
    ctx->pc = 0x1AE634u;
label_1ae634:
    // 0x1ae634: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x1ae634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x1ae638: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1ae638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1ae63c: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1AE63Cu;
    {
        const bool branch_taken_0x1ae63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae63c) {
            ctx->pc = 0x1AE640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE63Cu;
            // 0x1ae640: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE6E4u;
            goto label_1ae6e4;
        }
    }
    ctx->pc = 0x1AE644u;
    // 0x1ae644: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ae644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ae648: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1ae648u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ae64c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1ae64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1ae650: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ae650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae654: 0x386307a1  xori        $v1, $v1, 0x7A1
    ctx->pc = 0x1ae654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1953);
    // 0x1ae658: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AE658u;
    {
        const bool branch_taken_0x1ae658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE658u;
        // 0x1ae65c: 0x2c620001  sltiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae658) {
            ctx->pc = 0x1AE690u;
            goto label_1ae690;
        }
    }
    ctx->pc = 0x1AE660u;
    // 0x1ae660: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE660u;
    {
        const bool branch_taken_0x1ae660 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE660u;
        // 0x1ae664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae660) {
            ctx->pc = 0x1AE684u;
            goto label_1ae684;
        }
    }
    ctx->pc = 0x1AE668u;
    // 0x1ae668: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE668u;
    {
        const bool branch_taken_0x1ae668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE668u;
        // 0x1ae66c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae668) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE670u;
    // 0x1ae670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae674: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1AE674u;
    {
        const bool branch_taken_0x1ae674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE674u;
        // 0x1ae678: 0x240600a7  addiu       $a2, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae674) {
            ctx->pc = 0x1AE6D4u;
            goto label_1ae6d4;
        }
    }
    ctx->pc = 0x1AE67Cu;
label_1ae67c:
    // 0x1ae67c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AE67Cu;
    {
        const bool branch_taken_0x1ae67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE67Cu;
        // 0x1ae680: 0x240600ab  addiu       $a2, $zero, 0xAB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae67c) {
            ctx->pc = 0x1AE6D4u;
            goto label_1ae6d4;
        }
    }
    ctx->pc = 0x1AE684u;
label_1ae684:
    // 0x1ae684: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ae684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ae688: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AE688u;
    {
        const bool branch_taken_0x1ae688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x240600a5  addiu       $a2, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae688) {
            ctx->pc = 0x1AE6D4u;
            goto label_1ae6d4;
        }
    }
    ctx->pc = 0x1AE690u;
label_1ae690:
    // 0x1ae690: 0x52400009  beql        $s2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE690u;
    {
        const bool branch_taken_0x1ae690 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae690) {
            ctx->pc = 0x1AE694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE690u;
            // 0x1ae694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE6B8u;
            goto label_1ae6b8;
        }
    }
    ctx->pc = 0x1AE698u;
    // 0x1ae698: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE698u;
    {
        const bool branch_taken_0x1ae698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE698u;
        // 0x1ae69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae698) {
            ctx->pc = 0x1AE6ACu;
            goto label_1ae6ac;
        }
    }
    ctx->pc = 0x1AE6A0u;
    // 0x1ae6a0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ae6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ae6a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AE6A4u;
    {
        const bool branch_taken_0x1ae6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6A4u;
        // 0x1ae6a8: 0x240600a6  addiu       $a2, $zero, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6a4) {
            ctx->pc = 0x1AE6D4u;
            goto label_1ae6d4;
        }
    }
    ctx->pc = 0x1AE6ACu;
label_1ae6ac:
    // 0x1ae6ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ae6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ae6b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE6B0u;
    {
        const bool branch_taken_0x1ae6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6B0u;
        // 0x1ae6b4: 0x240600aa  addiu       $a2, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6b0) {
            ctx->pc = 0x1AE6D4u;
            goto label_1ae6d4;
        }
    }
    ctx->pc = 0x1AE6B8u;
label_1ae6b8:
    // 0x1ae6b8: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE6B8u;
    {
        const bool branch_taken_0x1ae6b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6B8u;
        // 0x1ae6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6b8) {
            ctx->pc = 0x1AE6CCu;
            goto label_1ae6cc;
        }
    }
    ctx->pc = 0x1AE6C0u;
    // 0x1ae6c0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ae6c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE6C4u;
    {
        const bool branch_taken_0x1ae6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6C4u;
        // 0x1ae6c8: 0x240600a4  addiu       $a2, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6c4) {
            ctx->pc = 0x1AE6D4u;
            goto label_1ae6d4;
        }
    }
    ctx->pc = 0x1AE6CCu;
label_1ae6cc:
    // 0x1ae6cc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ae6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ae6d0: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x1ae6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ae6d4:
    // 0x1ae6d4: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE6D4u;
    SET_GPR_U32(ctx, 31, 0x1AE6DCu);
    ctx->pc = 0x1AE6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6D4u;
    // 0x1ae6d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE6D4u, 0x1AE6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6DCu;
label_1ae6dc:
    // 0x1ae6dc: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x1ae6dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae6e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ae6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6e4:
    // 0x1ae6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae6e8:
    // 0x1ae6e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae6e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae6ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ae6ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae6f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ae6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6F4u;
        // 0x1ae6f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE6FCu;
    // 0x1ae6fc: 0x0  nop
    ctx->pc = 0x1ae6fcu;
    // NOP
    ctx->pc = 0x1ae700u;
}
