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

// Function: sub_0021A658
// Address: 0x21a658 - 0x21a7c0
void sub_0021A658_0x21a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A658_0x21a658");
#endif

    switch (ctx->pc) {
        case 0x21a698u: goto label_21a698;
        case 0x21a6acu: goto label_21a6ac;
        case 0x21a6c0u: goto label_21a6c0;
        case 0x21a6ccu: goto label_21a6cc;
        case 0x21a6e8u: goto label_21a6e8;
        case 0x21a704u: goto label_21a704;
        case 0x21a718u: goto label_21a718;
        case 0x21a728u: goto label_21a728;
        case 0x21a744u: goto label_21a744;
        case 0x21a768u: goto label_21a768;
        case 0x21a794u: goto label_21a794;
        default: break;
    }

    ctx->pc = 0x21a658u;

    // 0x21a658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21a65c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x21a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x21a660: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21a664: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21a668: 0x2454fc40  addiu       $s4, $v0, -0x3C0
    ctx->pc = 0x21a668u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966336));
    // 0x21a66c: 0x8c53fc40  lw          $s3, -0x3C0($v0)
    ctx->pc = 0x21a66cu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x66FC40u));
    // 0x21a670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a674: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x21a674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x21a678: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a67c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a680: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21a680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21a684: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21a688: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A688u;
    {
        const bool branch_taken_0x21a688 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A688u;
        // 0x21a68c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a688) {
            ctx->pc = 0x21A698u;
            goto label_21a698;
        }
    }
    ctx->pc = 0x21A690u;
    // 0x21a690: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x21A690u;
    SET_GPR_U32(ctx, 31, 0x21A698u);
    ctx->pc = 0x21A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A690u;
    // 0x21a694: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x21A690u, 0x21A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A698u;
label_21a698:
    // 0x21a698: 0x2a621400  slti        $v0, $s3, 0x1400
    ctx->pc = 0x21a698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5120) ? 1 : 0);
    // 0x21a69c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A69Cu;
    {
        const bool branch_taken_0x21a69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A69Cu;
        // 0x21a6a0: 0x138080  sll         $s0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a69c) {
            ctx->pc = 0x21A6B0u;
            goto label_21a6b0;
        }
    }
    ctx->pc = 0x21A6A4u;
    // 0x21a6a4: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x21A6A4u;
    SET_GPR_U32(ctx, 31, 0x21A6ACu);
    ctx->pc = 0x21A6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6A4u;
    // 0x21a6a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x21A6A4u, 0x21A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A6ACu;
label_21a6ac:
    // 0x21a6ac: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x21a6acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_21a6b0:
    // 0x21a6b0: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x21a6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x21a6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6b8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x21A6B8u;
    SET_GPR_U32(ctx, 31, 0x21A6C0u);
    ctx->pc = 0x21A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6B8u;
    // 0x21a6bc: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x21A6B8u, 0x21A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A6C0u;
label_21a6c0:
    // 0x21a6c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x21a6c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6c4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x21A6C4u;
    SET_GPR_U32(ctx, 31, 0x21A6CCu);
    ctx->pc = 0x21A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6C4u;
    // 0x21a6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x21A6C4u, 0x21A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A6CCu;
label_21a6cc:
    // 0x21a6cc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x21a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x21a6d0: 0xae2295a8  sw          $v0, -0x6A58($s1)
    ctx->pc = 0x21a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294940072), GPR_U32(ctx, 2));
    // 0x21a6d4: 0x1a60000e  blez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x21A6D4u;
    {
        const bool branch_taken_0x21a6d4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x21A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6D4u;
        // 0x21a6d8: 0xac7395ac  sw          $s3, -0x6A54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294940076), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6d4) {
            ctx->pc = 0x21A710u;
            goto label_21a710;
        }
    }
    ctx->pc = 0x21A6DCu;
    // 0x21a6dc: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x21a6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6e0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x21a6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6e4: 0x0  nop
    ctx->pc = 0x21a6e4u;
    // NOP
label_21a6e8:
    // 0x21a6e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21a6ec: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x21a6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x21a6f0: 0x28430201  slti        $v1, $v0, 0x201
    ctx->pc = 0x21a6f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x21a6f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A6F4u;
    {
        const bool branch_taken_0x21a6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6F4u;
        // 0x21a6f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6f4) {
            ctx->pc = 0x21A704u;
            goto label_21a704;
        }
    }
    ctx->pc = 0x21A6FCu;
    // 0x21a6fc: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x21A6FCu;
    SET_GPR_U32(ctx, 31, 0x21A704u);
    ctx->pc = 0x21A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6FCu;
    // 0x21a700: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x21A6FCu, 0x21A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A704u;
label_21a704:
    // 0x21a704: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21a704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x21a708: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21A708u;
    {
        const bool branch_taken_0x21a708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A708u;
        // 0x21a70c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a708) {
            ctx->pc = 0x21A6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a6e8;
        }
    }
    ctx->pc = 0x21A710u;
label_21a710:
    // 0x21a710: 0xc0971a4  jal         func_25C690
    ctx->pc = 0x21A710u;
    SET_GPR_U32(ctx, 31, 0x21A718u);
    ctx->pc = 0x21A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A710u;
    // 0x21a714: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C690u, 0x21A710u, 0x21A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A718u;
label_21a718:
    // 0x21a718: 0x1a60001a  blez        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x21A718u;
    {
        const bool branch_taken_0x21a718 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x21A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A718u;
        // 0x21a71c: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a718) {
            ctx->pc = 0x21A784u;
            goto label_21a784;
        }
    }
    ctx->pc = 0x21A720u;
    // 0x21a720: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21a720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a724: 0x0  nop
    ctx->pc = 0x21a724u;
    // NOP
label_21a728:
    // 0x21a728: 0x8ec295a8  lw          $v0, -0x6A58($s6)
    ctx->pc = 0x21a728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940072)));
    // 0x21a72c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21a72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a730: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21a730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a734: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x21a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21a738: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x21a738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x21a73c: 0xc086824  jal         func_21A090
    ctx->pc = 0x21A73Cu;
    SET_GPR_U32(ctx, 31, 0x21A744u);
    ctx->pc = 0x21A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A73Cu;
    // 0x21a740: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A090u, 0x21A73Cu, 0x21A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A744u;
label_21a744:
    // 0x21a744: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a748: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A748u;
    {
        const bool branch_taken_0x21a748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A748u;
        // 0x21a74c: 0x8ec295a8  lw          $v0, -0x6A58($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a748) {
            ctx->pc = 0x21A760u;
            goto label_21a760;
        }
    }
    ctx->pc = 0x21A750u;
    // 0x21a750: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x21a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21a754: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21a754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21a758: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21A758u;
    {
        const bool branch_taken_0x21a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A758u;
        // 0x21a75c: 0xac700190  sw          $s0, 0x190($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 400), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a758) {
            ctx->pc = 0x21A768u;
            goto label_21a768;
        }
    }
    ctx->pc = 0x21A760u;
label_21a760:
    // 0x21a760: 0xc0971e2  jal         func_25C788
    ctx->pc = 0x21A760u;
    SET_GPR_U32(ctx, 31, 0x21A768u);
    ctx->pc = 0x21A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A760u;
    // 0x21a764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C788u, 0x21A760u, 0x21A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A768u;
label_21a768:
    // 0x21a768: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21a768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a76c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21a770: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21a770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21a774: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x21a774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x21a778: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x21a778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21a77c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x21A77Cu;
    {
        const bool branch_taken_0x21a77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A77Cu;
        // 0x21a780: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a77c) {
            ctx->pc = 0x21A728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a728;
        }
    }
    ctx->pc = 0x21A784u;
label_21a784:
    // 0x21a784: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A784u;
    {
        const bool branch_taken_0x21a784 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A784u;
        // 0x21a788: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a784) {
            ctx->pc = 0x21A798u;
            goto label_21a798;
        }
    }
    ctx->pc = 0x21A78Cu;
    // 0x21a78c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x21A78Cu;
    SET_GPR_U32(ctx, 31, 0x21A794u);
    ctx->pc = 0x21A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A78Cu;
    // 0x21a790: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x21A78Cu, 0x21A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A794u;
label_21a794:
    // 0x21a794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21a798:
    // 0x21a798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a79c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a79cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a7a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21a7a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a7a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21a7a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a7a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21a7a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21a7ac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21a7acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a7b0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x21a7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7B4u;
        // 0x21a7b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A7BCu;
    // 0x21a7bc: 0x0  nop
    ctx->pc = 0x21a7bcu;
    // NOP
    ctx->pc = 0x21a7c0u;
}
