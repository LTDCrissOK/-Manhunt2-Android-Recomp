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

// Function: sub_0033D840
// Address: 0x33d840 - 0x33db70
void sub_0033D840_0x33d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D840_0x33d840");
#endif

    switch (ctx->pc) {
        case 0x33d874u: goto label_33d874;
        case 0x33d880u: goto label_33d880;
        case 0x33d88cu: goto label_33d88c;
        case 0x33d898u: goto label_33d898;
        case 0x33d8a4u: goto label_33d8a4;
        case 0x33d8b0u: goto label_33d8b0;
        case 0x33d8bcu: goto label_33d8bc;
        case 0x33d8c8u: goto label_33d8c8;
        case 0x33d8d8u: goto label_33d8d8;
        case 0x33d8e0u: goto label_33d8e0;
        case 0x33d91cu: goto label_33d91c;
        case 0x33d930u: goto label_33d930;
        case 0x33d93cu: goto label_33d93c;
        case 0x33d950u: goto label_33d950;
        case 0x33d960u: goto label_33d960;
        case 0x33d9c8u: goto label_33d9c8;
        case 0x33da20u: goto label_33da20;
        case 0x33dae4u: goto label_33dae4;
        case 0x33db10u: goto label_33db10;
        case 0x33db2cu: goto label_33db2c;
        case 0x33db34u: goto label_33db34;
        case 0x33db3cu: goto label_33db3c;
        default: break;
    }

    ctx->pc = 0x33d840u;

    // 0x33d840: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x33d840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x33d844: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x33d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x33d848: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x33d848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x33d84c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x33d84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x33d850: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x33d850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x33d854: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x33d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x33d858: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x33d858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x33d85c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x33d85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x33d860: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x33d860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x33d864: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x33d864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x33d868: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x33d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x33d86c: 0xc0db198  jal         func_36C660
    ctx->pc = 0x33D86Cu;
    SET_GPR_U32(ctx, 31, 0x33D874u);
    ctx->pc = 0x33D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D86Cu;
    // 0x33d870: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x33D86Cu, 0x33D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D874u;
label_33d874:
    // 0x33d874: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x33d874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33d878: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x33D878u;
    SET_GPR_U32(ctx, 31, 0x33D880u);
    ctx->pc = 0x33D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D878u;
    // 0x33d87c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x33D878u, 0x33D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D880u;
label_33d880:
    // 0x33d880: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x33d880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33d884: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x33D884u;
    SET_GPR_U32(ctx, 31, 0x33D88Cu);
    ctx->pc = 0x33D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D884u;
    // 0x33d888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x33D884u, 0x33D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D88Cu;
label_33d88c:
    // 0x33d88c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x33d88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x33d890: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x33D890u;
    SET_GPR_U32(ctx, 31, 0x33D898u);
    ctx->pc = 0x33D894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D890u;
    // 0x33d894: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x33D890u, 0x33D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D898u;
label_33d898:
    // 0x33d898: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x33d898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33d89c: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x33D89Cu;
    SET_GPR_U32(ctx, 31, 0x33D8A4u);
    ctx->pc = 0x33D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D89Cu;
    // 0x33d8a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x33D89Cu, 0x33D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8A4u;
label_33d8a4:
    // 0x33d8a4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x33d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33d8a8: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x33D8A8u;
    SET_GPR_U32(ctx, 31, 0x33D8B0u);
    ctx->pc = 0x33D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D8A8u;
    // 0x33d8ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x33D8A8u, 0x33D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8B0u;
label_33d8b0:
    // 0x33d8b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33d8b4: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x33D8B4u;
    SET_GPR_U32(ctx, 31, 0x33D8BCu);
    ctx->pc = 0x33D8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D8B4u;
    // 0x33d8b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x33D8B4u, 0x33D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8BCu;
label_33d8bc:
    // 0x33d8bc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x33d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33d8c0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x33D8C0u;
    SET_GPR_U32(ctx, 31, 0x33D8C8u);
    ctx->pc = 0x33D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D8C0u;
    // 0x33d8c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x33D8C0u, 0x33D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8C8u;
label_33d8c8:
    // 0x33d8c8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x33d8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x33d8cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x33d8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33d8d0: 0xc0db390  jal         func_36CE40
    ctx->pc = 0x33D8D0u;
    SET_GPR_U32(ctx, 31, 0x33D8D8u);
    ctx->pc = 0x36CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE40u, 0x33D8D0u, 0x33D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8D8u;
label_33d8d8:
    // 0x33d8d8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x33d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x33d8dc: 0x0  nop
    ctx->pc = 0x33d8dcu;
    // NOP
label_33d8e0:
    // 0x33d8e0: 0x2a32018  mult        $a0, $s5, $v1
    ctx->pc = 0x33d8e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33d8e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x33d8e8: 0x2463d1e0  addiu       $v1, $v1, -0x2E20
    ctx->pc = 0x33d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955488));
    // 0x33d8ec: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x33d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33d8f0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x33d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x33d8f4: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x33D8F4u;
    {
        const bool branch_taken_0x33d8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8F4u;
        // 0x33d8f8: 0x26be0001  addiu       $fp, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d8f4) {
            ctx->pc = 0x33DB10u;
            goto label_33db10;
        }
    }
    ctx->pc = 0x33D8FCu;
    // 0x33d8fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x33d900: 0x2463d1e0  addiu       $v1, $v1, -0x2E20
    ctx->pc = 0x33d900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955488));
    // 0x33d904: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x33d904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33d908: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x33d908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x33d90c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D90Cu;
    {
        const bool branch_taken_0x33d90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D90Cu;
        // 0x33d910: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d90c) {
            ctx->pc = 0x33D924u;
            goto label_33d924;
        }
    }
    ctx->pc = 0x33D914u;
    // 0x33d914: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x33D914u;
    SET_GPR_U32(ctx, 31, 0x33D91Cu);
    ctx->pc = 0x33D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D914u;
    // 0x33d918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x33D914u, 0x33D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D91Cu;
label_33d91c:
    // 0x33d91c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33D91Cu;
    {
        const bool branch_taken_0x33d91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D91Cu;
        // 0x33d920: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d91c) {
            ctx->pc = 0x33D934u;
            goto label_33d934;
        }
    }
    ctx->pc = 0x33D924u;
label_33d924:
    // 0x33d924: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33d924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33d928: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x33D928u;
    SET_GPR_U32(ctx, 31, 0x33D930u);
    ctx->pc = 0x33D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D928u;
    // 0x33d92c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x33D928u, 0x33D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D930u;
label_33d930:
    // 0x33d930: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33d930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33d934:
    // 0x33d934: 0xc0cfb86  jal         func_33EE18
    ctx->pc = 0x33D934u;
    SET_GPR_U32(ctx, 31, 0x33D93Cu);
    ctx->pc = 0x33D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D934u;
    // 0x33d938: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE18u, 0x33D934u, 0x33D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D93Cu;
label_33d93c:
    // 0x33d93c: 0x26be0001  addiu       $fp, $s5, 0x1
    ctx->pc = 0x33d93cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x33d940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33d940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33d944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d948: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x33D948u;
    SET_GPR_U32(ctx, 31, 0x33D950u);
    ctx->pc = 0x33D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D948u;
    // 0x33d94c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x33D948u, 0x33D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D950u;
label_33d950:
    // 0x33d950: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33d950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d954: 0x24190028  addiu       $t9, $zero, 0x28
    ctx->pc = 0x33d954u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33d958: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x33d958u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33d95c: 0x993818  mult        $a3, $a0, $t9
    ctx->pc = 0x33d95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_33d960:
    // 0x33d960: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33d960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33d964: 0x8c43c34c  lw          $v1, -0x3CB4($v0)
    ctx->pc = 0x33d964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FC34Cu));
    // 0x33d968: 0xe38021  addu        $s0, $a3, $v1
    ctx->pc = 0x33d968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x33d96c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33d970: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x33D970u;
    {
        const bool branch_taken_0x33d970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D970u;
        // 0x33d974: 0x24960001  addiu       $s6, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d970) {
            ctx->pc = 0x33DAF8u;
            goto label_33daf8;
        }
    }
    ctx->pc = 0x33D978u;
    // 0x33d978: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33d97c: 0x5455005f  bnel        $v0, $s5, . + 4 + (0x5F << 2)
    ctx->pc = 0x33D97Cu;
    {
        const bool branch_taken_0x33d97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x33d97c) {
            ctx->pc = 0x33D980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D97Cu;
            // 0x33d980: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DAFCu;
            goto label_33dafc;
        }
    }
    ctx->pc = 0x33D984u;
    // 0x33d984: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33d984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33d988: 0x52a3005c  beql        $s5, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x33D988u;
    {
        const bool branch_taken_0x33d988 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d988) {
            ctx->pc = 0x33D98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D988u;
            // 0x33d98c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DAFCu;
            goto label_33dafc;
        }
    }
    ctx->pc = 0x33D990u;
    // 0x33d990: 0x56af001e  bnel        $s5, $t7, . + 4 + (0x1E << 2)
    ctx->pc = 0x33D990u;
    {
        const bool branch_taken_0x33d990 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 15));
        if (branch_taken_0x33d990) {
            ctx->pc = 0x33D994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D990u;
            // 0x33d994: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DA0Cu;
            goto label_33da0c;
        }
    }
    ctx->pc = 0x33D998u;
    // 0x33d998: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x33d998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33d99c: 0x90a2000b  lbu         $v0, 0xB($a1)
    ctx->pc = 0x33d99cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x33d9a0: 0x2444fffd  addiu       $a0, $v0, -0x3
    ctx->pc = 0x33d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x33d9a4: 0x58800019  blezl       $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x33D9A4u;
    {
        const bool branch_taken_0x33d9a4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x33d9a4) {
            ctx->pc = 0x33D9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D9A4u;
            // 0x33d9a8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DA0Cu;
            goto label_33da0c;
        }
    }
    ctx->pc = 0x33D9ACu;
    // 0x33d9ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33d9b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33d9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d9b8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33D9B8u;
    {
        const bool branch_taken_0x33d9b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D9B8u;
        // 0x33d9bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d9b8) {
            ctx->pc = 0x33DA08u;
            goto label_33da08;
        }
    }
    ctx->pc = 0x33D9C0u;
    // 0x33d9c0: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x33d9c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33d9c4: 0x0  nop
    ctx->pc = 0x33d9c4u;
    // NOP
label_33d9c8:
    // 0x33d9c8: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x33d9c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33d9cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33d9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33d9d0: 0x90a20009  lbu         $v0, 0x9($a1)
    ctx->pc = 0x33d9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x33d9d4: 0x90a3000a  lbu         $v1, 0xA($a1)
    ctx->pc = 0x33d9d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x33d9d8: 0xa0a40008  sb          $a0, 0x8($a1)
    ctx->pc = 0x33d9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x33d9dc: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x33d9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x33d9e0: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x33d9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x33d9e4: 0xa0a8000b  sb          $t0, 0xB($a1)
    ctx->pc = 0x33d9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 8));
    // 0x33d9e8: 0x8ee2c34c  lw          $v0, -0x3CB4($s7)
    ctx->pc = 0x33d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294951756)));
    // 0x33d9ec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x33d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33d9f0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x33d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33d9f4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33d9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33d9fc: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x33d9fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33da00: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x33DA00u;
    {
        const bool branch_taken_0x33da00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA00u;
        // 0x33da04: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da00) {
            ctx->pc = 0x33D9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d9c8;
        }
    }
    ctx->pc = 0x33DA08u;
label_33da08:
    // 0x33da08: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x33da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_33da0c:
    // 0x33da0c: 0x1840003a  blez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x33DA0Cu;
    {
        const bool branch_taken_0x33da0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA0Cu;
        // 0x33da10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da0c) {
            ctx->pc = 0x33DAF8u;
            goto label_33daf8;
        }
    }
    ctx->pc = 0x33DA14u;
    // 0x33da14: 0x24140030  addiu       $s4, $zero, 0x30
    ctx->pc = 0x33da14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33da18: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x33da18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33da1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33da1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33da20:
    // 0x33da20: 0x8e0c0010  lw          $t4, 0x10($s0)
    ctx->pc = 0x33da20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33da24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33da24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33da28: 0x1947021  addu        $t6, $t4, $s4
    ctx->pc = 0x33da28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 20)));
    // 0x33da2c: 0x1926821  addu        $t5, $t4, $s2
    ctx->pc = 0x33da2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 18)));
    // 0x33da30: 0xc5c00014  lwc1        $f0, 0x14($t6)
    ctx->pc = 0x33da30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33da34: 0x1936021  addu        $t4, $t4, $s3
    ctx->pc = 0x33da34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 19)));
    // 0x33da38: 0x91a40008  lbu         $a0, 0x8($t5)
    ctx->pc = 0x33da38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x33da3c: 0x26940048  addiu       $s4, $s4, 0x48
    ctx->pc = 0x33da3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    // 0x33da40: 0x91a50009  lbu         $a1, 0x9($t5)
    ctx->pc = 0x33da40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 9)));
    // 0x33da44: 0x26730048  addiu       $s3, $s3, 0x48
    ctx->pc = 0x33da44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x33da48: 0x91a6000a  lbu         $a2, 0xA($t5)
    ctx->pc = 0x33da48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x33da4c: 0x26520048  addiu       $s2, $s2, 0x48
    ctx->pc = 0x33da4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x33da50: 0x91a7000b  lbu         $a3, 0xB($t5)
    ctx->pc = 0x33da50u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 11)));
    // 0x33da54: 0x91880008  lbu         $t0, 0x8($t4)
    ctx->pc = 0x33da54u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x33da58: 0x91890009  lbu         $t1, 0x9($t4)
    ctx->pc = 0x33da58u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x33da5c: 0x918a000a  lbu         $t2, 0xA($t4)
    ctx->pc = 0x33da5cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x33da60: 0x918b000b  lbu         $t3, 0xB($t4)
    ctx->pc = 0x33da60u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 11)));
    // 0x33da64: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x33da64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33da68: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x33da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33da6c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x33da6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33da70: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x33da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33da74: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x33da74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x33da78: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x33da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33da7c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x33da7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x33da80: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x33da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33da84: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x33da84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33da88: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x33da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33da8c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x33da8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33da90: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x33da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33da94: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x33da94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33da98: 0x91c20008  lbu         $v0, 0x8($t6)
    ctx->pc = 0x33da98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x33da9c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x33da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x33daa0: 0x91c30009  lbu         $v1, 0x9($t6)
    ctx->pc = 0x33daa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 9)));
    // 0x33daa4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x33daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x33daa8: 0x91c2000a  lbu         $v0, 0xA($t6)
    ctx->pc = 0x33daa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 10)));
    // 0x33daac: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33daacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x33dab0: 0x91c3000b  lbu         $v1, 0xB($t6)
    ctx->pc = 0x33dab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 11)));
    // 0x33dab4: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x33dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x33dab8: 0xc5ae0014  lwc1        $f14, 0x14($t5)
    ctx->pc = 0x33dab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x33dabc: 0xc5910014  lwc1        $f17, 0x14($t4)
    ctx->pc = 0x33dabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x33dac0: 0xc5d30010  lwc1        $f19, 0x10($t6)
    ctx->pc = 0x33dac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x33dac4: 0xc5ac000c  lwc1        $f12, 0xC($t5)
    ctx->pc = 0x33dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33dac8: 0xc5ad0010  lwc1        $f13, 0x10($t5)
    ctx->pc = 0x33dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33dacc: 0xc58f000c  lwc1        $f15, 0xC($t4)
    ctx->pc = 0x33daccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x33dad0: 0xc5900010  lwc1        $f16, 0x10($t4)
    ctx->pc = 0x33dad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x33dad4: 0xc5d2000c  lwc1        $f18, 0xC($t6)
    ctx->pc = 0x33dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x33dad8: 0x7faf0060  sq          $t7, 0x60($sp)
    ctx->pc = 0x33dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 15));
    // 0x33dadc: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x33DADCu;
    SET_GPR_U32(ctx, 31, 0x33DAE4u);
    ctx->pc = 0x33DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DADCu;
    // 0x33dae0: 0x7fb90070  sq          $t9, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x33DADCu, 0x33DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DAE4u;
label_33dae4:
    // 0x33dae4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33dae8: 0x7baf0060  lq          $t7, 0x60($sp)
    ctx->pc = 0x33dae8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33daec: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x33daecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33daf0: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x33DAF0u;
    {
        const bool branch_taken_0x33daf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAF0u;
        // 0x33daf4: 0x7bb90070  lq          $t9, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33daf0) {
            ctx->pc = 0x33DA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33da20;
        }
    }
    ctx->pc = 0x33DAF8u;
label_33daf8:
    // 0x33daf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x33daf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_33dafc:
    // 0x33dafc: 0x28820082  slti        $v0, $a0, 0x82
    ctx->pc = 0x33dafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x33db00: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x33DB00u;
    {
        const bool branch_taken_0x33db00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB00u;
        // 0x33db04: 0x993818  mult        $a3, $a0, $t9 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db00) {
            ctx->pc = 0x33D960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d960;
        }
    }
    ctx->pc = 0x33DB08u;
    // 0x33db08: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x33DB08u;
    SET_GPR_U32(ctx, 31, 0x33DB10u);
    ctx->pc = 0x33DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DB08u;
    // 0x33db0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x33DB08u, 0x33DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB10u;
label_33db10:
    // 0x33db10: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x33db10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33db14: 0x2aa2001b  slti        $v0, $s5, 0x1B
    ctx->pc = 0x33db14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x33db18: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x33DB18u;
    {
        const bool branch_taken_0x33db18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB18u;
        // 0x33db1c: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db18) {
            ctx->pc = 0x33D8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d8e0;
        }
    }
    ctx->pc = 0x33DB20u;
    // 0x33db20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33db20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33db24: 0xc0db390  jal         func_36CE40
    ctx->pc = 0x33DB24u;
    SET_GPR_U32(ctx, 31, 0x33DB2Cu);
    ctx->pc = 0x36CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE40u, 0x33DB24u, 0x33DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB2Cu;
label_33db2c:
    // 0x33db2c: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x33DB2Cu;
    SET_GPR_U32(ctx, 31, 0x33DB34u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x33DB2Cu, 0x33DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB34u;
label_33db34:
    // 0x33db34: 0xc0db20a  jal         func_36C828
    ctx->pc = 0x33DB34u;
    SET_GPR_U32(ctx, 31, 0x33DB3Cu);
    ctx->pc = 0x36C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C828u, 0x33DB34u, 0x33DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB3Cu;
label_33db3c:
    // 0x33db3c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x33db3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33db40: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x33db40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33db44: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x33db44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33db48: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x33db48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x33db4c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x33db4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33db50: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x33db50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x33db54: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x33db54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33db58: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x33db58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33db5c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x33db5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33db60: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x33db60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x33db64: 0x3e00008  jr          $ra
    ctx->pc = 0x33DB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB64u;
        // 0x33db68: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DB6Cu;
    // 0x33db6c: 0x0  nop
    ctx->pc = 0x33db6cu;
    // NOP
    ctx->pc = 0x33db70u;
}
