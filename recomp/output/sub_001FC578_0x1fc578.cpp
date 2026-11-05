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

// Function: sub_001FC578
// Address: 0x1fc578 - 0x1fc758
void sub_001FC578_0x1fc578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC578_0x1fc578");
#endif

    switch (ctx->pc) {
        case 0x1fc5f0u: goto label_1fc5f0;
        case 0x1fc614u: goto label_1fc614;
        case 0x1fc648u: goto label_1fc648;
        case 0x1fc66cu: goto label_1fc66c;
        case 0x1fc698u: goto label_1fc698;
        case 0x1fc6b4u: goto label_1fc6b4;
        case 0x1fc70cu: goto label_1fc70c;
        default: break;
    }

    ctx->pc = 0x1fc578u;

    // 0x1fc578: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc57c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fc57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fc580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc584: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fc584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc588: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc58c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fc58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fc590: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fc590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fc594: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fc594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fc598: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fc598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fc59c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1fc59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1fc5a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fc5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fc5a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fc5a8: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1FC5A8u;
    {
        const bool branch_taken_0x1fc5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5A8u;
        // 0x1fc5ac: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5a8) {
            ctx->pc = 0x1FC72Cu;
            goto label_1fc72c;
        }
    }
    ctx->pc = 0x1FC5B0u;
    // 0x1fc5b0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1fc5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fc5b4: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x1fc5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x1fc5b8: 0x460005d  bltz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x1FC5B8u;
    {
        const bool branch_taken_0x1fc5b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FC5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5B8u;
        // 0x1fc5bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5b8) {
            ctx->pc = 0x1FC730u;
            goto label_1fc730;
        }
    }
    ctx->pc = 0x1FC5C0u;
    // 0x1fc5c0: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1FC5C0u;
    {
        const bool branch_taken_0x1fc5c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5C0u;
        // 0x1fc5c4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5c0) {
            ctx->pc = 0x1FC734u;
            goto label_1fc734;
        }
    }
    ctx->pc = 0x1FC5C8u;
    // 0x1fc5c8: 0x90830370  lbu         $v1, 0x370($a0)
    ctx->pc = 0x1fc5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x1fc5cc: 0x90820371  lbu         $v0, 0x371($a0)
    ctx->pc = 0x1fc5ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 881)));
    // 0x1fc5d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc5d4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1fc5d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc5d8: 0x52600057  beql        $s3, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x1FC5D8u;
    {
        const bool branch_taken_0x1fc5d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc5d8) {
            ctx->pc = 0x1FC5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC5D8u;
            // 0x1fc5dc: 0xdfb20010  ld          $s2, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC738u;
            goto label_1fc738;
        }
    }
    ctx->pc = 0x1FC5E0u;
    // 0x1fc5e0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC5E0u;
    {
        const bool branch_taken_0x1fc5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5E0u;
        // 0x1fc5e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5e0) {
            ctx->pc = 0x1FC630u;
            goto label_1fc630;
        }
    }
    ctx->pc = 0x1FC5E8u;
    // 0x1fc5e8: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1fc5e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc5ec: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1fc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_1fc5f0:
    // 0x1fc5f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fc5f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc5f8: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x1fc5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1fc5fc: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC5FCu;
    {
        const bool branch_taken_0x1fc5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5FCu;
        // 0x1fc600: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5fc) {
            ctx->pc = 0x1FC61Cu;
            goto label_1fc61c;
        }
    }
    ctx->pc = 0x1FC604u;
    // 0x1fc604: 0x8c4500f4  lw          $a1, 0xF4($v0)
    ctx->pc = 0x1fc604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1fc608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc60c: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1FC60Cu;
    SET_GPR_U32(ctx, 31, 0x1FC614u);
    ctx->pc = 0x1FC610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC60Cu;
    // 0x1fc610: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1FC60Cu, 0x1FC614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC614u;
label_1fc614:
    // 0x1fc614: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1FC614u;
    {
        const bool branch_taken_0x1fc614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC614u;
        // 0x1fc618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc614) {
            ctx->pc = 0x1FC730u;
            goto label_1fc730;
        }
    }
    ctx->pc = 0x1FC61Cu;
label_1fc61c:
    // 0x1fc61c: 0x90820370  lbu         $v0, 0x370($a0)
    ctx->pc = 0x1fc61cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x1fc620: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fc620u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc624: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fc624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fc628: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FC628u;
    {
        const bool branch_taken_0x1fc628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC628u;
        // 0x1fc62c: 0x101180  sll         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc628) {
            ctx->pc = 0x1FC5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc5f0;
        }
    }
    ctx->pc = 0x1FC630u;
label_1fc630:
    // 0x1fc630: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1fc630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1fc634: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1FC634u;
    {
        const bool branch_taken_0x1fc634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC634u;
        // 0x1fc638: 0x341780f0  ori         $s7, $zero, 0x80F0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc634) {
            ctx->pc = 0x1FC72Cu;
            goto label_1fc72c;
        }
    }
    ctx->pc = 0x1FC63Cu;
    // 0x1fc63c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1fc63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc640: 0x244b021  addu        $s6, $s2, $a0
    ctx->pc = 0x1fc640u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1fc644: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1fc644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_1fc648:
    // 0x1fc648: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1fc648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fc64c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1fc64cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc650: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x1fc650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1fc654: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x1fc654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x1fc658: 0x14450030  bne         $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1FC658u;
    {
        const bool branch_taken_0x1fc658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC658u;
        // 0x1fc65c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc658) {
            ctx->pc = 0x1FC71Cu;
            goto label_1fc71c;
        }
    }
    ctx->pc = 0x1FC660u;
    // 0x1fc660: 0x2972021  addu        $a0, $s4, $s7
    ctx->pc = 0x1fc660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x1fc664: 0xc07ed06  jal         func_1FB418
    ctx->pc = 0x1FC664u;
    SET_GPR_U32(ctx, 31, 0x1FC66Cu);
    ctx->pc = 0x1FC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC664u;
    // 0x1fc668: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB418u, 0x1FC664u, 0x1FC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC66Cu;
label_1fc66c:
    // 0x1fc66c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1fc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc670: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc674: 0x53182b  sltu        $v1, $v0, $s3
    ctx->pc = 0x1fc674u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1fc678: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FC678u;
    {
        const bool branch_taken_0x1fc678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC678u;
        // 0x1fc67c: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc678) {
            ctx->pc = 0x1FC700u;
            goto label_1fc700;
        }
    }
    ctx->pc = 0x1FC680u;
    // 0x1fc680: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1fc680u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc684: 0x340280f0  ori         $v0, $zero, 0x80F0
    ctx->pc = 0x1fc684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fc688: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x1fc688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1fc68c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1fc68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fc690: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1fc690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fc694: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x1fc694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1fc698:
    // 0x1fc698: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1fc698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc69c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1fc69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1fc6a0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1fc6a4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1fc6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fc6a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fc6ac: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x1FC6ACu;
    SET_GPR_U32(ctx, 31, 0x1FC6B4u);
    ctx->pc = 0x1FC6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC6ACu;
    // 0x1fc6b0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x1FC6ACu, 0x1FC6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC6B4u;
label_1fc6b4:
    // 0x1fc6b4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1fc6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fc6b8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1fc6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1fc6bc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1fc6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1fc6c0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1fc6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1fc6c4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1fc6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1fc6c8: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x1fc6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x1fc6cc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1fc6ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fc6d0: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x1fc6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc6d4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1fc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1fc6d8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1fc6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1fc6dc: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1fc6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc6e0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1fc6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1fc6e4: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x1fc6e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1fc6e8: 0xa2220038  sb          $v0, 0x38($s1)
    ctx->pc = 0x1fc6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fc6ec: 0x9603003a  lhu         $v1, 0x3A($s0)
    ctx->pc = 0x1fc6ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x1fc6f0: 0xa623003a  sh          $v1, 0x3A($s1)
    ctx->pc = 0x1fc6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fc6f4: 0x9202003c  lbu         $v0, 0x3C($s0)
    ctx->pc = 0x1fc6f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fc6f8: 0x16a0ffe7  bnez        $s5, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1FC6F8u;
    {
        const bool branch_taken_0x1fc6f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6F8u;
        // 0x1fc6fc: 0xa222003c  sb          $v0, 0x3C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6f8) {
            ctx->pc = 0x1FC698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc698;
        }
    }
    ctx->pc = 0x1FC700u;
label_1fc700:
    // 0x1fc700: 0x2922021  addu        $a0, $s4, $s2
    ctx->pc = 0x1fc700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1fc704: 0xc07ecb0  jal         func_1FB2C0
    ctx->pc = 0x1FC704u;
    SET_GPR_U32(ctx, 31, 0x1FC70Cu);
    ctx->pc = 0x1FC708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC704u;
    // 0x1fc708: 0x972021  addu        $a0, $a0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2C0u, 0x1FC704u, 0x1FC70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC70Cu;
label_1fc70c:
    // 0x1fc70c: 0x92c20371  lbu         $v0, 0x371($s6)
    ctx->pc = 0x1fc70cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 881)));
    // 0x1fc710: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fc710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fc714: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC714u;
    {
        const bool branch_taken_0x1fc714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC714u;
        // 0x1fc718: 0xa2c20371  sb          $v0, 0x371($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 881), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc714) {
            ctx->pc = 0x1FC72Cu;
            goto label_1fc72c;
        }
    }
    ctx->pc = 0x1FC71Cu;
label_1fc71c:
    // 0x1fc71c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1fc71cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc720: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x1fc720u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1fc724: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1FC724u;
    {
        const bool branch_taken_0x1fc724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC724u;
        // 0x1fc728: 0x101180  sll         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc724) {
            ctx->pc = 0x1FC648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc648;
        }
    }
    ctx->pc = 0x1FC72Cu;
label_1fc72c:
    // 0x1fc72c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc72cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc730:
    // 0x1fc730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fc734:
    // 0x1fc734: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc738:
    // 0x1fc738: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fc738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc73c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fc73cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc740: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fc740u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fc744: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fc744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc748: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1fc748u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fc74c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fc74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc750: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC750u;
        // 0x1fc754: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC758u;
}
