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

// Function: sub_001D4758
// Address: 0x1d4758 - 0x1d4920
void sub_001D4758_0x1d4758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4758_0x1d4758");
#endif

    switch (ctx->pc) {
        case 0x1d47b8u: goto label_1d47b8;
        case 0x1d47d8u: goto label_1d47d8;
        case 0x1d4800u: goto label_1d4800;
        case 0x1d4808u: goto label_1d4808;
        case 0x1d484cu: goto label_1d484c;
        case 0x1d4874u: goto label_1d4874;
        case 0x1d48b8u: goto label_1d48b8;
        case 0x1d48c4u: goto label_1d48c4;
        case 0x1d48dcu: goto label_1d48dc;
        default: break;
    }

    ctx->pc = 0x1d4758u;

    // 0x1d4758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d4758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d475c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d4760: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d4760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d4764: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1d4764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1d4768: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d4768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d476c: 0x8c438eb0  lw          $v1, -0x7150($v0)
    ctx->pc = 0x1d476cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8EB0u));
    // 0x1d4770: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x1d4770u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x1d4774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d4778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d4778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d477c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d4780: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d4780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d4784: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d4784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d4788: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d4788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d478c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1d4790: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D4790u;
    {
        const bool branch_taken_0x1d4790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4790u;
        // 0x1d4794: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4790) {
            ctx->pc = 0x1D48DCu;
            goto label_1d48dc;
        }
    }
    ctx->pc = 0x1D4798u;
    // 0x1d4798: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d4798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d479c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d479cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47a0: 0x8c438eb4  lw          $v1, -0x714C($v0)
    ctx->pc = 0x1d47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8EB4u));
    // 0x1d47a4: 0x1860003b  blez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1D47A4u;
    {
        const bool branch_taken_0x1d47a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A4u;
        // 0x1d47a8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47a4) {
            ctx->pc = 0x1D4894u;
            goto label_1d4894;
        }
    }
    ctx->pc = 0x1D47ACu;
    // 0x1d47ac: 0x24160818  addiu       $s6, $zero, 0x818
    ctx->pc = 0x1d47acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2072));
    // 0x1d47b0: 0x2562018  mult        $a0, $s2, $s6
    ctx->pc = 0x1d47b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d47b4: 0x0  nop
    ctx->pc = 0x1d47b4u;
    // NOP
label_1d47b8:
    // 0x1d47b8: 0x8e838eb0  lw          $v1, -0x7150($s4)
    ctx->pc = 0x1d47b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
    // 0x1d47bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47c0: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1d47c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d47c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d47c8: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D47C8u;
    {
        const bool branch_taken_0x1d47c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47C8u;
        // 0x1d47cc: 0x26550001  addiu       $s5, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47c8) {
            ctx->pc = 0x1D482Cu;
            goto label_1d482c;
        }
    }
    ctx->pc = 0x1D47D0u;
    // 0x1d47d0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1d47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d47d4: 0x0  nop
    ctx->pc = 0x1d47d4u;
    // NOP
label_1d47d8:
    // 0x1d47d8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d47dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d47e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d47e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d47e4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D47E4u;
    {
        const bool branch_taken_0x1d47e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47E4u;
        // 0x1d47e8: 0x24b30001  addiu       $s3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47e4) {
            ctx->pc = 0x1D4818u;
            goto label_1d4818;
        }
    }
    ctx->pc = 0x1D47ECu;
    // 0x1d47ec: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x1d47ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1d47f0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D47F0u;
    {
        const bool branch_taken_0x1d47f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47f0) {
            ctx->pc = 0x1D47F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D47F0u;
            // 0x1d47f4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D481Cu;
            goto label_1d481c;
        }
    }
    ctx->pc = 0x1D47F8u;
    // 0x1d47f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D47F8u;
    {
        const bool branch_taken_0x1d47f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47f8) {
            ctx->pc = 0x1D47FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D47F8u;
            // 0x1d47fc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D481Cu;
            goto label_1d481c;
        }
    }
    ctx->pc = 0x1D4800u;
label_1d4800:
    // 0x1d4800: 0xc07493a  jal         func_1D24E8
    ctx->pc = 0x1D4800u;
    SET_GPR_U32(ctx, 31, 0x1D4808u);
    ctx->pc = 0x1D4804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4800u;
    // 0x1d4804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D24E8u, 0x1D4800u, 0x1D4808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4808u;
label_1d4808:
    // 0x1d4808: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x1d4808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1d480c: 0x0  nop
    ctx->pc = 0x1d480cu;
    // NOP
    // 0x1d4810: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4810u;
    {
        const bool branch_taken_0x1d4810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4810) {
            ctx->pc = 0x1D4800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4800;
        }
    }
    ctx->pc = 0x1D4818u;
label_1d4818:
    // 0x1d4818: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d4818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d481c:
    // 0x1d481c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4820: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d4820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4824: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D4824u;
    {
        const bool branch_taken_0x1d4824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4824) {
            ctx->pc = 0x1D4828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4824u;
            // 0x1d4828: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47d8;
        }
    }
    ctx->pc = 0x1D482Cu;
label_1d482c:
    // 0x1d482c: 0x2568018  mult        $s0, $s2, $s6
    ctx->pc = 0x1d482cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d4830: 0x8e828eb0  lw          $v0, -0x7150($s4)
    ctx->pc = 0x1d4830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
    // 0x1d4834: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d4834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d4838: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1d4838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d483c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D483Cu;
    {
        const bool branch_taken_0x1d483c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D483Cu;
        // 0x1d4840: 0x8e828eb0  lw          $v0, -0x7150($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d483c) {
            ctx->pc = 0x1D485Cu;
            goto label_1d485c;
        }
    }
    ctx->pc = 0x1D4844u;
    // 0x1d4844: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D4844u;
    SET_GPR_U32(ctx, 31, 0x1D484Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D4844u, 0x1D484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D484Cu;
label_1d484c:
    // 0x1d484c: 0x8e828eb0  lw          $v0, -0x7150($s4)
    ctx->pc = 0x1d484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
    // 0x1d4850: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d4854: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d4854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d4858: 0x8e828eb0  lw          $v0, -0x7150($s4)
    ctx->pc = 0x1d4858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
label_1d485c:
    // 0x1d485c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d4860: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1d4860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d4864: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4864u;
    {
        const bool branch_taken_0x1d4864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4864u;
        // 0x1d4868: 0x8ee28eb4  lw          $v0, -0x714C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294938292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4864) {
            ctx->pc = 0x1D4884u;
            goto label_1d4884;
        }
    }
    ctx->pc = 0x1D486Cu;
    // 0x1d486c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D486Cu;
    SET_GPR_U32(ctx, 31, 0x1D4874u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D486Cu, 0x1D4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4874u;
label_1d4874:
    // 0x1d4874: 0x8e828eb0  lw          $v0, -0x7150($s4)
    ctx->pc = 0x1d4874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
    // 0x1d4878: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d4878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d487c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1d487cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1d4880: 0x8ee28eb4  lw          $v0, -0x714C($s7)
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294938292)));
label_1d4884:
    // 0x1d4884: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1d4884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4888: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d4888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d488c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1D488Cu;
    {
        const bool branch_taken_0x1d488c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D488Cu;
        // 0x1d4890: 0x2562018  mult        $a0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d488c) {
            ctx->pc = 0x1D47B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47b8;
        }
    }
    ctx->pc = 0x1D4894u;
label_1d4894:
    // 0x1d4894: 0x8e858eb0  lw          $a1, -0x7150($s4)
    ctx->pc = 0x1d4894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
    // 0x1d4898: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D4898u;
    {
        const bool branch_taken_0x1d4898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4898u;
        // 0x1d489c: 0x24020818  addiu       $v0, $zero, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4898) {
            ctx->pc = 0x1D48DCu;
            goto label_1d48dc;
        }
    }
    ctx->pc = 0x1D48A0u;
    // 0x1d48a0: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1d48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1d48a4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1d48a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d48a8: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1d48a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d48ac: 0x10b00009  beq         $a1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D48ACu;
    {
        const bool branch_taken_0x1d48ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x1D48B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48ACu;
        // 0x1d48b0: 0x8e848eb0  lw          $a0, -0x7150($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48ac) {
            ctx->pc = 0x1D48D4u;
            goto label_1d48d4;
        }
    }
    ctx->pc = 0x1D48B4u;
    // 0x1d48b4: 0x2610f7e8  addiu       $s0, $s0, -0x818
    ctx->pc = 0x1d48b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965224));
label_1d48b8:
    // 0x1d48b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d48b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48bc: 0xc075156  jal         func_1D4558
    ctx->pc = 0x1D48BCu;
    SET_GPR_U32(ctx, 31, 0x1D48C4u);
    ctx->pc = 0x1D48C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48BCu;
    // 0x1d48c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4558u, 0x1D48BCu, 0x1D48C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48C4u;
label_1d48c4:
    // 0x1d48c4: 0x8e828eb0  lw          $v0, -0x7150($s4)
    ctx->pc = 0x1d48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
    // 0x1d48c8: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D48C8u;
    {
        const bool branch_taken_0x1d48c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48C8u;
        // 0x1d48cc: 0x2610f7e8  addiu       $s0, $s0, -0x818 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48c8) {
            ctx->pc = 0x1D48B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d48b8;
        }
    }
    ctx->pc = 0x1D48D0u;
    // 0x1d48d0: 0x8e848eb0  lw          $a0, -0x7150($s4)
    ctx->pc = 0x1d48d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
label_1d48d4:
    // 0x1d48d4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D48D4u;
    SET_GPR_U32(ctx, 31, 0x1D48DCu);
    ctx->pc = 0x1D48D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48D4u;
    // 0x1d48d8: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D48D4u, 0x1D48DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48DCu;
label_1d48dc:
    // 0x1d48dc: 0xae808eb0  sw          $zero, -0x7150($s4)
    ctx->pc = 0x1d48dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294938288), GPR_U32(ctx, 0));
    // 0x1d48e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d48e4: 0xafc08ebc  sw          $zero, -0x7144($fp)
    ctx->pc = 0x1d48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294938300), GPR_U32(ctx, 0));
    // 0x1d48e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d48e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d48ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d48ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d48f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d48f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d48f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d48f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d48f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d48f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d48fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d48fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d4900: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d4900u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4904: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d4904u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d4908: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1d4908u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d490c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d490cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d4910: 0xac408eb8  sw          $zero, -0x7148($v0)
    ctx->pc = 0x1d4910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F8EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8EB8u, _value); } while (0);
    // 0x1d4914: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4914u;
        // 0x1d4918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D491Cu;
    // 0x1d491c: 0x0  nop
    ctx->pc = 0x1d491cu;
    // NOP
    ctx->pc = 0x1d4920u;
}
