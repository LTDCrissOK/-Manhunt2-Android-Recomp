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

// Function: sub_00165520
// Address: 0x165520 - 0x165678
void sub_00165520_0x165520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165520_0x165520");
#endif

    switch (ctx->pc) {
        case 0x165550u: goto label_165550;
        case 0x16555cu: goto label_16555c;
        case 0x165578u: goto label_165578;
        case 0x165588u: goto label_165588;
        case 0x1655a0u: goto label_1655a0;
        case 0x1655b0u: goto label_1655b0;
        case 0x1655c8u: goto label_1655c8;
        case 0x1655d0u: goto label_1655d0;
        case 0x1655d8u: goto label_1655d8;
        case 0x1655e4u: goto label_1655e4;
        case 0x1655fcu: goto label_1655fc;
        case 0x16560cu: goto label_16560c;
        case 0x165614u: goto label_165614;
        case 0x16562cu: goto label_16562c;
        case 0x16563cu: goto label_16563c;
        case 0x165658u: goto label_165658;
        case 0x165664u: goto label_165664;
        default: break;
    }

    ctx->pc = 0x165520u;

    // 0x165520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16552c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165530: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x165530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165534: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x165534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165538: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x165538u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x16553c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16553cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165540: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x165540u;
    {
        const bool branch_taken_0x165540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165540u;
        // 0x165544: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165540) {
            ctx->pc = 0x165564u;
            goto label_165564;
        }
    }
    ctx->pc = 0x165548u;
    // 0x165548: 0xc059782  jal         func_165E08
    ctx->pc = 0x165548u;
    SET_GPR_U32(ctx, 31, 0x165550u);
    ctx->pc = 0x165E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165E08u, 0x165548u, 0x165550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165550u;
label_165550:
    // 0x165550: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x165550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x165554: 0xc059634  jal         func_1658D0
    ctx->pc = 0x165554u;
    SET_GPR_U32(ctx, 31, 0x16555Cu);
    ctx->pc = 0x165558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165554u;
    // 0x165558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1658D0u, 0x165554u, 0x16555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16555Cu;
label_16555c:
    // 0x16555c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x16555Cu;
    {
        const bool branch_taken_0x16555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16555Cu;
        // 0x165560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16555c) {
            ctx->pc = 0x165668u;
            goto label_165668;
        }
    }
    ctx->pc = 0x165564u;
label_165564:
    // 0x165564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165568: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x165568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16556c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16556cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165570: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x165570u;
    SET_GPR_U32(ctx, 31, 0x165578u);
    ctx->pc = 0x165574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165570u;
    // 0x165574: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x165570u, 0x165578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165578u;
label_165578:
    // 0x165578: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x165578u;
    {
        const bool branch_taken_0x165578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165578) {
            ctx->pc = 0x16557Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165578u;
            // 0x16557c: 0x8e0203b8  lw          $v0, 0x3B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165590u;
            goto label_165590;
        }
    }
    ctx->pc = 0x165580u;
    // 0x165580: 0xc059782  jal         func_165E08
    ctx->pc = 0x165580u;
    SET_GPR_U32(ctx, 31, 0x165588u);
    ctx->pc = 0x165584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165580u;
    // 0x165584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165E08u, 0x165580u, 0x165588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165588u;
label_165588:
    // 0x165588: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x165588u;
    {
        const bool branch_taken_0x165588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165588u;
        // 0x16558c: 0xae0003b8  sw          $zero, 0x3B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165588) {
            ctx->pc = 0x16560Cu;
            goto label_16560c;
        }
    }
    ctx->pc = 0x165590u;
label_165590:
    // 0x165590: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x165590u;
    {
        const bool branch_taken_0x165590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165590) {
            ctx->pc = 0x165594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165590u;
            // 0x165594: 0x8e0203b8  lw          $v0, 0x3B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1655B8u;
            goto label_1655b8;
        }
    }
    ctx->pc = 0x165598u;
    // 0x165598: 0xc059b1a  jal         func_166C68
    ctx->pc = 0x165598u;
    SET_GPR_U32(ctx, 31, 0x1655A0u);
    ctx->pc = 0x16559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165598u;
    // 0x16559c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C68u, 0x165598u, 0x1655A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655A0u;
label_1655a0:
    // 0x1655a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1655A0u;
    {
        const bool branch_taken_0x1655a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655a0) {
            ctx->pc = 0x1655A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1655A0u;
            // 0x1655a4: 0x8e0203b8  lw          $v0, 0x3B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1655B8u;
            goto label_1655b8;
        }
    }
    ctx->pc = 0x1655A8u;
    // 0x1655a8: 0xc059abe  jal         func_166AF8
    ctx->pc = 0x1655A8u;
    SET_GPR_U32(ctx, 31, 0x1655B0u);
    ctx->pc = 0x1655ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655A8u;
    // 0x1655ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166AF8u, 0x1655A8u, 0x1655B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655B0u;
label_1655b0:
    // 0x1655b0: 0xae0203b8  sw          $v0, 0x3B8($s0)
    ctx->pc = 0x1655b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 2));
    // 0x1655b4: 0x8e0203b8  lw          $v0, 0x3B8($s0)
    ctx->pc = 0x1655b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
label_1655b8:
    // 0x1655b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1655B8u;
    {
        const bool branch_taken_0x1655b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1655BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655B8u;
        // 0x1655bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655b8) {
            ctx->pc = 0x1655ECu;
            goto label_1655ec;
        }
    }
    ctx->pc = 0x1655C0u;
    // 0x1655c0: 0xc059782  jal         func_165E08
    ctx->pc = 0x1655C0u;
    SET_GPR_U32(ctx, 31, 0x1655C8u);
    ctx->pc = 0x1655C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655C0u;
    // 0x1655c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165E08u, 0x1655C0u, 0x1655C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655C8u;
label_1655c8:
    // 0x1655c8: 0xc059cbe  jal         func_1672F8
    ctx->pc = 0x1655C8u;
    SET_GPR_U32(ctx, 31, 0x1655D0u);
    ctx->pc = 0x1655CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655C8u;
    // 0x1655cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672F8u, 0x1655C8u, 0x1655D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655D0u;
label_1655d0:
    // 0x1655d0: 0xc059606  jal         func_165818
    ctx->pc = 0x1655D0u;
    SET_GPR_U32(ctx, 31, 0x1655D8u);
    ctx->pc = 0x1655D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655D0u;
    // 0x1655d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165818u, 0x1655D0u, 0x1655D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655D8u;
label_1655d8:
    // 0x1655d8: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x1655d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x1655dc: 0xc059ce4  jal         func_167390
    ctx->pc = 0x1655DCu;
    SET_GPR_U32(ctx, 31, 0x1655E4u);
    ctx->pc = 0x1655E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655DCu;
    // 0x1655e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167390u, 0x1655DCu, 0x1655E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655E4u;
label_1655e4:
    // 0x1655e4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1655E4u;
    {
        const bool branch_taken_0x1655e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1655E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655E4u;
        // 0x1655e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655e4) {
            ctx->pc = 0x165668u;
            goto label_165668;
        }
    }
    ctx->pc = 0x1655ECu;
label_1655ec:
    // 0x1655ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1655ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1655f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1655f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1655f4: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x1655F4u;
    SET_GPR_U32(ctx, 31, 0x1655FCu);
    ctx->pc = 0x1655F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655F4u;
    // 0x1655f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x1655F4u, 0x1655FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655FCu;
label_1655fc:
    // 0x1655fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1655FCu;
    {
        const bool branch_taken_0x1655fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655FCu;
        // 0x165600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655fc) {
            ctx->pc = 0x16561Cu;
            goto label_16561c;
        }
    }
    ctx->pc = 0x165604u;
    // 0x165604: 0xc059782  jal         func_165E08
    ctx->pc = 0x165604u;
    SET_GPR_U32(ctx, 31, 0x16560Cu);
    ctx->pc = 0x165608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165604u;
    // 0x165608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165E08u, 0x165604u, 0x16560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16560Cu;
label_16560c:
    // 0x16560c: 0xc059670  jal         func_1659C0
    ctx->pc = 0x16560Cu;
    SET_GPR_U32(ctx, 31, 0x165614u);
    ctx->pc = 0x165610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16560Cu;
    // 0x165610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659C0u, 0x16560Cu, 0x165614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165614u;
label_165614:
    // 0x165614: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x165614u;
    {
        const bool branch_taken_0x165614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165614u;
        // 0x165618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165614) {
            ctx->pc = 0x165668u;
            goto label_165668;
        }
    }
    ctx->pc = 0x16561Cu;
label_16561c:
    // 0x16561c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x165620: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x165620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x165624: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x165624u;
    SET_GPR_U32(ctx, 31, 0x16562Cu);
    ctx->pc = 0x165628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165624u;
    // 0x165628: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x165624u, 0x16562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16562Cu;
label_16562c:
    // 0x16562c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x16562Cu;
    {
        const bool branch_taken_0x16562c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16562c) {
            ctx->pc = 0x165630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16562Cu;
            // 0x165630: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165668u;
            goto label_165668;
        }
    }
    ctx->pc = 0x165634u;
    // 0x165634: 0xc059782  jal         func_165E08
    ctx->pc = 0x165634u;
    SET_GPR_U32(ctx, 31, 0x16563Cu);
    ctx->pc = 0x165638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165634u;
    // 0x165638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165E08u, 0x165634u, 0x16563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16563Cu;
label_16563c:
    // 0x16563c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165640: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x165640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x165644: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165648: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165648u;
    {
        const bool branch_taken_0x165648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165648u;
        // 0x16564c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165648) {
            ctx->pc = 0x16565Cu;
            goto label_16565c;
        }
    }
    ctx->pc = 0x165650u;
    // 0x165650: 0xc0f70d8  jal         func_3DC360
    ctx->pc = 0x165650u;
    SET_GPR_U32(ctx, 31, 0x165658u);
    ctx->pc = 0x165654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165650u;
    // 0x165654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC360u, 0x165650u, 0x165658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165658u;
label_165658:
    // 0x165658: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x165658u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16565c:
    // 0x16565c: 0xc0596f4  jal         func_165BD0
    ctx->pc = 0x16565Cu;
    SET_GPR_U32(ctx, 31, 0x165664u);
    ctx->pc = 0x165660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16565Cu;
    // 0x165660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165BD0u, 0x16565Cu, 0x165664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165664u;
label_165664:
    // 0x165664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165668:
    // 0x165668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16566c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16566cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165670: 0x3e00008  jr          $ra
    ctx->pc = 0x165670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165670u;
        // 0x165674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165678u;
}
