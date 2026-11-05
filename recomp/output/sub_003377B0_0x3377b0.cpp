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

// Function: sub_003377B0
// Address: 0x3377b0 - 0x3378c8
void sub_003377B0_0x3377b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003377B0_0x3377b0");
#endif

    switch (ctx->pc) {
        case 0x3377ecu: goto label_3377ec;
        case 0x337808u: goto label_337808;
        case 0x337820u: goto label_337820;
        case 0x337838u: goto label_337838;
        case 0x337850u: goto label_337850;
        case 0x337868u: goto label_337868;
        case 0x337880u: goto label_337880;
        case 0x337898u: goto label_337898;
        case 0x3378a8u: goto label_3378a8;
        default: break;
    }

    ctx->pc = 0x3377b0u;

    // 0x3377b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3377b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3377b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3377b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3377b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3377b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3377bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3377bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3377c0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3377c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3377c4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3377c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3377c8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x3377c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3377cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3377ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3377d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3377d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3377d4: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x3377d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x3377d8: 0x28620047  slti        $v0, $v1, 0x47
    ctx->pc = 0x3377d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)71) ? 1 : 0);
    // 0x3377dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3377DCu;
    {
        const bool branch_taken_0x3377dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3377E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377DCu;
        // 0x3377e0: 0xae030484  sw          $v1, 0x484($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3377dc) {
            ctx->pc = 0x3377F4u;
            goto label_3377f4;
        }
    }
    ctx->pc = 0x3377E4u;
    // 0x3377e4: 0xc0ccc2c  jal         func_3330B0
    ctx->pc = 0x3377E4u;
    SET_GPR_U32(ctx, 31, 0x3377ECu);
    ctx->pc = 0x3377E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377E4u;
    // 0x3377e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3330B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3330B0u, 0x3377E4u, 0x3377ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377ECu;
label_3377ec:
    // 0x3377ec: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3377ECu;
    {
        const bool branch_taken_0x3377ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3377F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377ECu;
        // 0x3377f0: 0x8e020488  lw          $v0, 0x488($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3377ec) {
            ctx->pc = 0x3378ACu;
            goto label_3378ac;
        }
    }
    ctx->pc = 0x3377F4u;
label_3377f4:
    // 0x3377f4: 0x2862004b  slti        $v0, $v1, 0x4B
    ctx->pc = 0x3377f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
    // 0x3377f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3377F8u;
    {
        const bool branch_taken_0x3377f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3377FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377F8u;
        // 0x3377fc: 0x28620055  slti        $v0, $v1, 0x55 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)85) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3377f8) {
            ctx->pc = 0x337810u;
            goto label_337810;
        }
    }
    ctx->pc = 0x337800u;
    // 0x337800: 0xc0ccfc2  jal         func_333F08
    ctx->pc = 0x337800u;
    SET_GPR_U32(ctx, 31, 0x337808u);
    ctx->pc = 0x337804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337800u;
    // 0x337804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333F08u, 0x337800u, 0x337808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337808u;
label_337808:
    // 0x337808: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x337808u;
    {
        const bool branch_taken_0x337808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337808u;
        // 0x33780c: 0x8e020488  lw          $v0, 0x488($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337808) {
            ctx->pc = 0x3378ACu;
            goto label_3378ac;
        }
    }
    ctx->pc = 0x337810u;
label_337810:
    // 0x337810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337810u;
    {
        const bool branch_taken_0x337810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337810u;
        // 0x337814: 0x28620076  slti        $v0, $v1, 0x76 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)118) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337810) {
            ctx->pc = 0x337828u;
            goto label_337828;
        }
    }
    ctx->pc = 0x337818u;
    // 0x337818: 0xc0c9d4e  jal         func_327538
    ctx->pc = 0x337818u;
    SET_GPR_U32(ctx, 31, 0x337820u);
    ctx->pc = 0x33781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337818u;
    // 0x33781c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327538u, 0x337818u, 0x337820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337820u;
label_337820:
    // 0x337820: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x337820u;
    {
        const bool branch_taken_0x337820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337820u;
        // 0x337824: 0x8e020488  lw          $v0, 0x488($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337820) {
            ctx->pc = 0x3378ACu;
            goto label_3378ac;
        }
    }
    ctx->pc = 0x337828u;
label_337828:
    // 0x337828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337828u;
    {
        const bool branch_taken_0x337828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337828u;
        // 0x33782c: 0x2862014d  slti        $v0, $v1, 0x14D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)333) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337828) {
            ctx->pc = 0x337840u;
            goto label_337840;
        }
    }
    ctx->pc = 0x337830u;
    // 0x337830: 0xc0ccef6  jal         func_333BD8
    ctx->pc = 0x337830u;
    SET_GPR_U32(ctx, 31, 0x337838u);
    ctx->pc = 0x337834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337830u;
    // 0x337834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333BD8u, 0x337830u, 0x337838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337838u;
label_337838:
    // 0x337838: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x337838u;
    {
        const bool branch_taken_0x337838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337838u;
        // 0x33783c: 0x8e020488  lw          $v0, 0x488($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337838) {
            ctx->pc = 0x3378ACu;
            goto label_3378ac;
        }
    }
    ctx->pc = 0x337840u;
label_337840:
    // 0x337840: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337840u;
    {
        const bool branch_taken_0x337840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337840u;
        // 0x337844: 0x286201da  slti        $v0, $v1, 0x1DA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)474) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337840) {
            ctx->pc = 0x337858u;
            goto label_337858;
        }
    }
    ctx->pc = 0x337848u;
    // 0x337848: 0xc0c9dc2  jal         func_327708
    ctx->pc = 0x337848u;
    SET_GPR_U32(ctx, 31, 0x337850u);
    ctx->pc = 0x33784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337848u;
    // 0x33784c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327708u, 0x337848u, 0x337850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337850u;
label_337850:
    // 0x337850: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x337850u;
    {
        const bool branch_taken_0x337850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337850u;
        // 0x337854: 0x8e020488  lw          $v0, 0x488($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337850) {
            ctx->pc = 0x3378ACu;
            goto label_3378ac;
        }
    }
    ctx->pc = 0x337858u;
label_337858:
    // 0x337858: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337858u;
    {
        const bool branch_taken_0x337858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337858u;
        // 0x33785c: 0x28620307  slti        $v0, $v1, 0x307 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)775) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337858) {
            ctx->pc = 0x337870u;
            goto label_337870;
        }
    }
    ctx->pc = 0x337860u;
    // 0x337860: 0xc0ca6dc  jal         func_329B70
    ctx->pc = 0x337860u;
    SET_GPR_U32(ctx, 31, 0x337868u);
    ctx->pc = 0x337864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337860u;
    // 0x337864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329B70u, 0x337860u, 0x337868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337868u;
label_337868:
    // 0x337868: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x337868u;
    {
        const bool branch_taken_0x337868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337868u;
        // 0x33786c: 0x8e020488  lw          $v0, 0x488($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337868) {
            ctx->pc = 0x3378ACu;
            goto label_3378ac;
        }
    }
    ctx->pc = 0x337870u;
label_337870:
    // 0x337870: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337870u;
    {
        const bool branch_taken_0x337870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337870u;
        // 0x337874: 0x286203da  slti        $v0, $v1, 0x3DA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)986) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337870) {
            ctx->pc = 0x337888u;
            goto label_337888;
        }
    }
    ctx->pc = 0x337878u;
    // 0x337878: 0xc0cafaa  jal         func_32BEA8
    ctx->pc = 0x337878u;
    SET_GPR_U32(ctx, 31, 0x337880u);
    ctx->pc = 0x33787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337878u;
    // 0x33787c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BEA8u, 0x337878u, 0x337880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337880u;
label_337880:
    // 0x337880: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x337880u;
    {
        const bool branch_taken_0x337880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337880u;
        // 0x337884: 0x8e020488  lw          $v0, 0x488($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337880) {
            ctx->pc = 0x3378ACu;
            goto label_3378ac;
        }
    }
    ctx->pc = 0x337888u;
label_337888:
    // 0x337888: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337888u;
    {
        const bool branch_taken_0x337888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337888u;
        // 0x33788c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337888) {
            ctx->pc = 0x3378A0u;
            goto label_3378a0;
        }
    }
    ctx->pc = 0x337890u;
    // 0x337890: 0xc0cbd14  jal         func_32F450
    ctx->pc = 0x337890u;
    SET_GPR_U32(ctx, 31, 0x337898u);
    ctx->pc = 0x337894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337890u;
    // 0x337894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F450u, 0x337890u, 0x337898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337898u;
label_337898:
    // 0x337898: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x337898u;
    {
        const bool branch_taken_0x337898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337898u;
        // 0x33789c: 0x8e020488  lw          $v0, 0x488($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337898) {
            ctx->pc = 0x3378ACu;
            goto label_3378ac;
        }
    }
    ctx->pc = 0x3378A0u;
label_3378a0:
    // 0x3378a0: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x3378A0u;
    SET_GPR_U32(ctx, 31, 0x3378A8u);
    ctx->pc = 0x3378A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3378A0u;
    // 0x3378a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3378A0u, 0x3378A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3378A8u;
label_3378a8:
    // 0x3378a8: 0x8e020488  lw          $v0, 0x488($s0)
    ctx->pc = 0x3378a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
label_3378ac:
    // 0x3378ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3378acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3378b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3378b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3378b4: 0xae020488  sw          $v0, 0x488($s0)
    ctx->pc = 0x3378b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1160), GPR_U32(ctx, 2));
    // 0x3378b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3378b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3378bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3378BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3378C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3378BCu;
        // 0x3378c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3378BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3378C4u;
    // 0x3378c4: 0x0  nop
    ctx->pc = 0x3378c4u;
    // NOP
    ctx->pc = 0x3378c8u;
}
