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

// Function: sub_0020A608
// Address: 0x20a608 - 0x20a730
void sub_0020A608_0x20a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A608_0x20a608");
#endif

    switch (ctx->pc) {
        case 0x20a658u: goto label_20a658;
        case 0x20a66cu: goto label_20a66c;
        case 0x20a698u: goto label_20a698;
        case 0x20a704u: goto label_20a704;
        default: break;
    }

    ctx->pc = 0x20a608u;

    // 0x20a608: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20a608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20a60c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20a610: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20a614: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20a614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a618: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20a618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20a61c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20a61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20a620: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20a620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20a624: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20a628: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x20a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x20a62c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x20a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x20a630: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20a634: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x20a634u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x20a638: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x20A638u;
    {
        const bool branch_taken_0x20a638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A638u;
        // 0x20a63c: 0x3c13004a  lui         $s3, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a638) {
            ctx->pc = 0x20A704u;
            goto label_20a704;
        }
    }
    ctx->pc = 0x20A640u;
    // 0x20a640: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20a640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a644: 0x2676e268  addiu       $s6, $s3, -0x1D98
    ctx->pc = 0x20a644u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959720));
    // 0x20a648: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20a648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a64c: 0x24150214  addiu       $s5, $zero, 0x214
    ctx->pc = 0x20a64cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x20a650: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x20a650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a654: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x20a654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20a658:
    // 0x20a658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20a658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a65c: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x20a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x20a660: 0x2666e268  addiu       $a2, $s3, -0x1D98
    ctx->pc = 0x20a660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959720));
    // 0x20a664: 0xc0e1110  jal         func_384440
    ctx->pc = 0x20A664u;
    SET_GPR_U32(ctx, 31, 0x20A66Cu);
    ctx->pc = 0x20A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A664u;
    // 0x20a668: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384440u, 0x20A664u, 0x20A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A66Cu;
label_20a66c:
    // 0x20a66c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20A66Cu;
    {
        const bool branch_taken_0x20a66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A66Cu;
        // 0x20a670: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a66c) {
            ctx->pc = 0x20A6C0u;
            goto label_20a6c0;
        }
    }
    ctx->pc = 0x20A674u;
    // 0x20a674: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20A674u;
    {
        const bool branch_taken_0x20a674 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A674u;
        // 0x20a678: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a674) {
            ctx->pc = 0x20A6C0u;
            goto label_20a6c0;
        }
    }
    ctx->pc = 0x20A67Cu;
    // 0x20a67c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20a680: 0x5074fff5  beql        $v1, $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x20A680u;
    {
        const bool branch_taken_0x20a680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x20a680) {
            ctx->pc = 0x20A684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A680u;
            // 0x20a684: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a658;
        }
    }
    ctx->pc = 0x20A688u;
    // 0x20a688: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20a688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20a68c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a690: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x20a690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20a694: 0x0  nop
    ctx->pc = 0x20a694u;
    // NOP
label_20a698:
    // 0x20a698: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x20a698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a69c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20a69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a6a0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x20a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x20a6a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20a6a8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A6A8u;
    {
        const bool branch_taken_0x20a6a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20a6a8) {
            ctx->pc = 0x20A6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A6A8u;
            // 0x20a6ac: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A6B0u;
            goto label_20a6b0;
        }
    }
    ctx->pc = 0x20A6B0u;
label_20a6b0:
    // 0x20a6b0: 0x1465fff9  bne         $v1, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20A6B0u;
    {
        const bool branch_taken_0x20a6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x20A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6B0u;
        // 0x20a6b4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6b0) {
            ctx->pc = 0x20A698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a698;
        }
    }
    ctx->pc = 0x20A6B8u;
    // 0x20a6b8: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x20A6B8u;
    {
        const bool branch_taken_0x20a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6B8u;
        // 0x20a6bc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6b8) {
            ctx->pc = 0x20A658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a658;
        }
    }
    ctx->pc = 0x20A6C0u;
label_20a6c0:
    // 0x20a6c0: 0x5a000011  blezl       $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20A6C0u;
    {
        const bool branch_taken_0x20a6c0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x20a6c0) {
            ctx->pc = 0x20A6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A6C0u;
            // 0x20a6c4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A708u;
            goto label_20a708;
        }
    }
    ctx->pc = 0x20A6C8u;
    // 0x20a6c8: 0x230001a  div         $zero, $s1, $s0
    ctx->pc = 0x20a6c8u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20a6cc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A6CCu;
    {
        const bool branch_taken_0x20a6cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6cc) {
            ctx->pc = 0x20A6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A6CCu;
            // 0x20a6d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A6D4u;
            goto label_20a6d4;
        }
    }
    ctx->pc = 0x20A6D4u;
label_20a6d4:
    // 0x20a6d4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x20a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x20a6d8: 0x2812  mflo        $a1
    ctx->pc = 0x20a6d8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x20a6dc: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x20a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
    // 0x20a6e0: 0x90625aec  lbu         $v0, 0x5AEC($v1)
    ctx->pc = 0x20a6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23276)));
    // 0x20a6e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A6E4u;
    {
        const bool branch_taken_0x20a6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6E4u;
        // 0x20a6e8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6e4) {
            ctx->pc = 0x20A704u;
            goto label_20a704;
        }
    }
    ctx->pc = 0x20A6ECu;
    // 0x20a6ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a6f0: 0x8c43a4fc  lw          $v1, -0x5B04($v0)
    ctx->pc = 0x20a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943996)));
    // 0x20a6f4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A6F4u;
    {
        const bool branch_taken_0x20a6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6F4u;
        // 0x20a6f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6f4) {
            ctx->pc = 0x20A708u;
            goto label_20a708;
        }
    }
    ctx->pc = 0x20A6FCu;
    // 0x20a6fc: 0xc082a36  jal         func_20A8D8
    ctx->pc = 0x20A6FCu;
    SET_GPR_U32(ctx, 31, 0x20A704u);
    ctx->pc = 0x20A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A6FCu;
    // 0x20a700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A8D8u, 0x20A6FCu, 0x20A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A704u;
label_20a704:
    // 0x20a704: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20a704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20a708:
    // 0x20a708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a70c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20a70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a710: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20a710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a714: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20a714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20a718: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20a718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a71c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20a71cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20a720: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20a720u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a724: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x20a724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20a728: 0x3e00008  jr          $ra
    ctx->pc = 0x20A728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A728u;
        // 0x20a72c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A730u;
}
