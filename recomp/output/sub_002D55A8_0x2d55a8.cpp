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

// Function: sub_002D55A8
// Address: 0x2d55a8 - 0x2d56d0
void sub_002D55A8_0x2d55a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D55A8_0x2d55a8");
#endif

    switch (ctx->pc) {
        case 0x2d55e4u: goto label_2d55e4;
        case 0x2d5620u: goto label_2d5620;
        case 0x2d5660u: goto label_2d5660;
        case 0x2d5674u: goto label_2d5674;
        default: break;
    }

    ctx->pc = 0x2d55a8u;

    // 0x2d55a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d55a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d55ac: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d55acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d55b0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d55b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2d55b4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d55b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55b8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2d55b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2d55bc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2d55bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d55c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d55c4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2d55c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d55c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d55cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d55ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d55d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d55d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d55d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d55d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d55d8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d55d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d55dc: 0x16b70003  bne         $s5, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D55DCu;
    {
        const bool branch_taken_0x2d55dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 23));
        ctx->pc = 0x2D55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55DCu;
        // 0x2d55e0: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d55dc) {
            ctx->pc = 0x2D55ECu;
            goto label_2d55ec;
        }
    }
    ctx->pc = 0x2D55E4u;
label_2d55e4:
    // 0x2d55e4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2D55E4u;
    {
        const bool branch_taken_0x2d55e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55E4u;
        // 0x2d55e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d55e4) {
            ctx->pc = 0x2D56A0u;
            goto label_2d56a0;
        }
    }
    ctx->pc = 0x2D55ECu;
label_2d55ec:
    // 0x2d55ec: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x2d55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d55f0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x2d55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d55f4: 0x2e31818  mult        $v1, $s7, $v1
    ctx->pc = 0x2d55f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d55f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d55f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d55fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d55fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5604: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2d5604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d5608: 0x24760001  addiu       $s6, $v1, 0x1
    ctx->pc = 0x2d5608u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d560c: 0x1ac00023  blez        $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D560Cu;
    {
        const bool branch_taken_0x2d560c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2D5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D560Cu;
        // 0x2d5610: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d560c) {
            ctx->pc = 0x2D569Cu;
            goto label_2d569c;
        }
    }
    ctx->pc = 0x2D5614u;
    // 0x2d5614: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d5614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d5618: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d5618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d561c: 0x0  nop
    ctx->pc = 0x2d561cu;
    // NOP
label_2d5620:
    // 0x2d5620: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d5620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5624: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x2d5624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d5628: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5628u;
    {
        const bool branch_taken_0x2d5628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5628u;
        // 0x2d562c: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5628) {
            ctx->pc = 0x2D5634u;
            goto label_2d5634;
        }
    }
    ctx->pc = 0x2D5630u;
    // 0x2d5630: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2d5630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2d5634:
    // 0x2d5634: 0x50750016  beql        $v1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D5634u;
    {
        const bool branch_taken_0x2d5634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d5634) {
            ctx->pc = 0x2D5638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5634u;
            // 0x2d5638: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5690u;
            goto label_2d5690;
        }
    }
    ctx->pc = 0x2D563Cu;
    // 0x2d563c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2d563cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d5640: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d5640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5644: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x2d5644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d5648: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x2d5648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2d564c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5650: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2d5650u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5654: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2D5654u;
    {
        const bool branch_taken_0x2d5654 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2D5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5654u;
        // 0x2d5658: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5654) {
            ctx->pc = 0x2D568Cu;
            goto label_2d568c;
        }
    }
    ctx->pc = 0x2D565Cu;
    // 0x2d565c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d565cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5660:
    // 0x2d5660: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2d5660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2d5664: 0x54550006  bnel        $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5664u;
    {
        const bool branch_taken_0x2d5664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2d5664) {
            ctx->pc = 0x2D5668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5664u;
            // 0x2d5668: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5680u;
            goto label_2d5680;
        }
    }
    ctx->pc = 0x2D566Cu;
    // 0x2d566c: 0xc0b4f70  jal         func_2D3DC0
    ctx->pc = 0x2D566Cu;
    SET_GPR_U32(ctx, 31, 0x2D5674u);
    ctx->pc = 0x2D5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D566Cu;
    // 0x2d5670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3DC0u, 0x2D566Cu, 0x2D5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5674u;
label_2d5674:
    // 0x2d5674: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2D5674u;
    {
        const bool branch_taken_0x2d5674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5674u;
        // 0x2d5678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5674) {
            ctx->pc = 0x2D55E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d55e4;
        }
    }
    ctx->pc = 0x2D567Cu;
    // 0x2d567c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d567cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d5680:
    // 0x2d5680: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2d5680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d5684: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D5684u;
    {
        const bool branch_taken_0x2d5684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5684u;
        // 0x2d5688: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5684) {
            ctx->pc = 0x2D5660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5660;
        }
    }
    ctx->pc = 0x2D568Cu;
label_2d568c:
    // 0x2d568c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d568cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d5690:
    // 0x2d5690: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x2d5690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2d5694: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2D5694u;
    {
        const bool branch_taken_0x2d5694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5694u;
        // 0x2d5698: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5694) {
            ctx->pc = 0x2D5620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5620;
        }
    }
    ctx->pc = 0x2D569Cu;
label_2d569c:
    // 0x2d569c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d569cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d56a0:
    // 0x2d56a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d56a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d56a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d56a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d56a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d56a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d56ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d56acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d56b0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d56b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d56b4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d56b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d56b8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d56b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d56bc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d56bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d56c0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2d56c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d56c4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d56c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d56c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D56C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56C8u;
        // 0x2d56cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D56C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D56D0u;
}
