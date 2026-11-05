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

// Function: sub_002A07F0
// Address: 0x2a07f0 - 0x2a0968
void sub_002A07F0_0x2a07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A07F0_0x2a07f0");
#endif

    switch (ctx->pc) {
        case 0x2a0814u: goto label_2a0814;
        case 0x2a081cu: goto label_2a081c;
        case 0x2a0848u: goto label_2a0848;
        case 0x2a0854u: goto label_2a0854;
        case 0x2a085cu: goto label_2a085c;
        case 0x2a0864u: goto label_2a0864;
        case 0x2a0874u: goto label_2a0874;
        case 0x2a0880u: goto label_2a0880;
        case 0x2a0890u: goto label_2a0890;
        case 0x2a08a4u: goto label_2a08a4;
        case 0x2a08d8u: goto label_2a08d8;
        case 0x2a08e0u: goto label_2a08e0;
        case 0x2a08ecu: goto label_2a08ec;
        case 0x2a090cu: goto label_2a090c;
        default: break;
    }

    ctx->pc = 0x2a07f0u;

    // 0x2a07f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a07f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a07f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a07f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a07f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a07f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a07fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a07fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a0800: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a0800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a0804: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a0804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a0808: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2a0808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2a080c: 0xc0a7adc  jal         func_29EB70
    ctx->pc = 0x2A080Cu;
    SET_GPR_U32(ctx, 31, 0x2A0814u);
    ctx->pc = 0x2A0810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A080Cu;
    // 0x2a0810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB70u, 0x2A080Cu, 0x2A0814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0814u;
label_2a0814:
    // 0x2a0814: 0xc0a1f7a  jal         func_287DE8
    ctx->pc = 0x2A0814u;
    SET_GPR_U32(ctx, 31, 0x2A081Cu);
    ctx->pc = 0x287DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DE8u, 0x2A0814u, 0x2A081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A081Cu;
label_2a081c:
    // 0x2a081c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A081Cu;
    {
        const bool branch_taken_0x2a081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A081Cu;
        // 0x2a0820: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a081c) {
            ctx->pc = 0x2A0890u;
            goto label_2a0890;
        }
    }
    ctx->pc = 0x2A0824u;
    // 0x2a0824: 0x8e03027c  lw          $v1, 0x27C($s0)
    ctx->pc = 0x2a0824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x2a0828: 0x10710005  beq         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0828u;
    {
        const bool branch_taken_0x2a0828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2A082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0828u;
        // 0x2a082c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0828) {
            ctx->pc = 0x2A0840u;
            goto label_2a0840;
        }
    }
    ctx->pc = 0x2A0830u;
    // 0x2a0830: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A0830u;
    {
        const bool branch_taken_0x2a0830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0830u;
        // 0x2a0834: 0x3c05004c  lui         $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0830) {
            ctx->pc = 0x2A086Cu;
            goto label_2a086c;
        }
    }
    ctx->pc = 0x2A0838u;
    // 0x2a0838: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2A0838u;
    {
        const bool branch_taken_0x2a0838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0838u;
        // 0x2a083c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0838) {
            ctx->pc = 0x2A0898u;
            goto label_2a0898;
        }
    }
    ctx->pc = 0x2A0840u;
label_2a0840:
    // 0x2a0840: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2A0840u;
    SET_GPR_U32(ctx, 31, 0x2A0848u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2A0840u, 0x2A0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0848u;
label_2a0848:
    // 0x2a0848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a084c: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x2A084Cu;
    SET_GPR_U32(ctx, 31, 0x2A0854u);
    ctx->pc = 0x2A0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A084Cu;
    // 0x2a0850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x2A084Cu, 0x2A0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0854u;
label_2a0854:
    // 0x2a0854: 0xc0a1a80  jal         func_286A00
    ctx->pc = 0x2A0854u;
    SET_GPR_U32(ctx, 31, 0x2A085Cu);
    ctx->pc = 0x286A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A00u, 0x2A0854u, 0x2A085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A085Cu;
label_2a085c:
    // 0x2a085c: 0xc0a1988  jal         func_286620
    ctx->pc = 0x2A085Cu;
    SET_GPR_U32(ctx, 31, 0x2A0864u);
    ctx->pc = 0x286620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286620u, 0x2A085Cu, 0x2A0864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0864u;
label_2a0864:
    // 0x2a0864: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2A0864u;
    {
        const bool branch_taken_0x2a0864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0864u;
        // 0x2a0868: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0864) {
            ctx->pc = 0x2A094Cu;
            goto label_2a094c;
        }
    }
    ctx->pc = 0x2A086Cu;
label_2a086c:
    // 0x2a086c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2A086Cu;
    SET_GPR_U32(ctx, 31, 0x2A0874u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2A086Cu, 0x2A0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0874u;
label_2a0874:
    // 0x2a0874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0878: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x2A0878u;
    SET_GPR_U32(ctx, 31, 0x2A0880u);
    ctx->pc = 0x2A087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0878u;
    // 0x2a087c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x2A0878u, 0x2A0880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0880u;
label_2a0880:
    // 0x2a0880: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a0880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a0884: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a0884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0888: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x2A0888u;
    SET_GPR_U32(ctx, 31, 0x2A0890u);
    ctx->pc = 0x2A088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0888u;
    // 0x2a088c: 0xac51a438  sw          $s1, -0x5BC8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943800), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x2A0888u, 0x2A0890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0890u;
label_2a0890:
    // 0x2a0890: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2a0890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2a0894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0898:
    // 0x2a0898: 0x24a51850  addiu       $a1, $a1, 0x1850
    ctx->pc = 0x2a0898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6224));
    // 0x2a089c: 0xc0a7ab0  jal         func_29EAC0
    ctx->pc = 0x2A089Cu;
    SET_GPR_U32(ctx, 31, 0x2A08A4u);
    ctx->pc = 0x2A08A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A089Cu;
    // 0x2a08a0: 0x24140110  addiu       $s4, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAC0u, 0x2A089Cu, 0x2A08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A08A4u;
label_2a08a4:
    // 0x2a08a4: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x2a08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x2a08a8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2a08a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a08ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a08acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08b0: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x2a08b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x2a08b4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2a08b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a08b8: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x2a08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x2a08bc: 0x24b2ac80  addiu       $s2, $a1, -0x5380
    ctx->pc = 0x2a08bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945920));
    // 0x2a08c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a08c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a08c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a08cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a08d0: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2A08D0u;
    SET_GPR_U32(ctx, 31, 0x2A08D8u);
    ctx->pc = 0x2A08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A08D0u;
    // 0x2a08d4: 0x8c510014  lw          $s1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2A08D0u, 0x2A08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A08D8u;
label_2a08d8:
    // 0x2a08d8: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2A08D8u;
    SET_GPR_U32(ctx, 31, 0x2A08E0u);
    ctx->pc = 0x2A08DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A08D8u;
    // 0x2a08dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2A08D8u, 0x2A08E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A08E0u;
label_2a08e0:
    // 0x2a08e0: 0x8e300078  lw          $s0, 0x78($s1)
    ctx->pc = 0x2a08e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2a08e4: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2A08E4u;
    SET_GPR_U32(ctx, 31, 0x2A08ECu);
    ctx->pc = 0x2A08E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A08E4u;
    // 0x2a08e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2A08E4u, 0x2A08ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A08ECu;
label_2a08ec:
    // 0x2a08ec: 0x2148018  mult        $s0, $s0, $s4
    ctx->pc = 0x2a08ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2a08f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a08f4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2a08f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2a08f8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2a08f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2a08fc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A08FCu;
    {
        const bool branch_taken_0x2a08fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08FCu;
        // 0x2a0900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08fc) {
            ctx->pc = 0x2A092Cu;
            goto label_2a092c;
        }
    }
    ctx->pc = 0x2A0904u;
    // 0x2a0904: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2A0904u;
    SET_GPR_U32(ctx, 31, 0x2A090Cu);
    ctx->pc = 0x2A0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0904u;
    // 0x2a0908: 0x8e300078  lw          $s0, 0x78($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2A0904u, 0x2A090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A090Cu;
label_2a090c:
    // 0x2a090c: 0x2148018  mult        $s0, $s0, $s4
    ctx->pc = 0x2a090cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2a0910: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a0910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a0914: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a0914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a0918: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2a0918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2a091c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A091Cu;
    {
        const bool branch_taken_0x2a091c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A091Cu;
        // 0x2a0920: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a091c) {
            ctx->pc = 0x2A0930u;
            goto label_2a0930;
        }
    }
    ctx->pc = 0x2A0924u;
    // 0x2a0924: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0924u;
    {
        const bool branch_taken_0x2a0924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0924u;
        // 0x2a0928: 0x8e220078  lw          $v0, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0924) {
            ctx->pc = 0x2A0930u;
            goto label_2a0930;
        }
    }
    ctx->pc = 0x2A092Cu;
label_2a092c:
    // 0x2a092c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a092cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a0930:
    // 0x2a0930: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x2a0930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
    // 0x2a0934: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a0934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a0938: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2a0938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a093c: 0xc441a958  lwc1        $f1, -0x56A8($v0)
    ctx->pc = 0x2a093cu;
    { uint32_t bits = FAST_READ32(0x3FA958u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a0940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a0944: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x2a0944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x2a0948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a094c:
    // 0x2a094c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a094cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a0950: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a0950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0954: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a0954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a0958: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a0958u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a095c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a095cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a0960: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0960u;
        // 0x2a0964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0968u;
}
