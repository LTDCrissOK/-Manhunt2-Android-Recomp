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

// Function: sub_0015B688
// Address: 0x15b688 - 0x15b7c0
void sub_0015B688_0x15b688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B688_0x15b688");
#endif

    switch (ctx->pc) {
        case 0x15b688u: goto label_15b688;
        case 0x15b68cu: goto label_15b68c;
        case 0x15b690u: goto label_15b690;
        case 0x15b694u: goto label_15b694;
        case 0x15b698u: goto label_15b698;
        case 0x15b69cu: goto label_15b69c;
        case 0x15b6a0u: goto label_15b6a0;
        case 0x15b6a4u: goto label_15b6a4;
        case 0x15b6a8u: goto label_15b6a8;
        case 0x15b6acu: goto label_15b6ac;
        case 0x15b6b0u: goto label_15b6b0;
        case 0x15b6b4u: goto label_15b6b4;
        case 0x15b6b8u: goto label_15b6b8;
        case 0x15b6bcu: goto label_15b6bc;
        case 0x15b6c0u: goto label_15b6c0;
        case 0x15b6c4u: goto label_15b6c4;
        case 0x15b6c8u: goto label_15b6c8;
        case 0x15b6ccu: goto label_15b6cc;
        case 0x15b6d0u: goto label_15b6d0;
        case 0x15b6d4u: goto label_15b6d4;
        case 0x15b6d8u: goto label_15b6d8;
        case 0x15b6dcu: goto label_15b6dc;
        case 0x15b6e0u: goto label_15b6e0;
        case 0x15b6e4u: goto label_15b6e4;
        case 0x15b6e8u: goto label_15b6e8;
        case 0x15b6ecu: goto label_15b6ec;
        case 0x15b6f0u: goto label_15b6f0;
        case 0x15b6f4u: goto label_15b6f4;
        case 0x15b6f8u: goto label_15b6f8;
        case 0x15b6fcu: goto label_15b6fc;
        case 0x15b700u: goto label_15b700;
        case 0x15b704u: goto label_15b704;
        case 0x15b708u: goto label_15b708;
        case 0x15b70cu: goto label_15b70c;
        case 0x15b710u: goto label_15b710;
        case 0x15b714u: goto label_15b714;
        case 0x15b718u: goto label_15b718;
        case 0x15b71cu: goto label_15b71c;
        case 0x15b720u: goto label_15b720;
        case 0x15b724u: goto label_15b724;
        case 0x15b728u: goto label_15b728;
        case 0x15b72cu: goto label_15b72c;
        case 0x15b730u: goto label_15b730;
        case 0x15b734u: goto label_15b734;
        case 0x15b738u: goto label_15b738;
        case 0x15b73cu: goto label_15b73c;
        case 0x15b740u: goto label_15b740;
        case 0x15b744u: goto label_15b744;
        case 0x15b748u: goto label_15b748;
        case 0x15b74cu: goto label_15b74c;
        case 0x15b750u: goto label_15b750;
        case 0x15b754u: goto label_15b754;
        case 0x15b758u: goto label_15b758;
        case 0x15b75cu: goto label_15b75c;
        case 0x15b760u: goto label_15b760;
        case 0x15b764u: goto label_15b764;
        case 0x15b768u: goto label_15b768;
        case 0x15b76cu: goto label_15b76c;
        case 0x15b770u: goto label_15b770;
        case 0x15b774u: goto label_15b774;
        case 0x15b778u: goto label_15b778;
        case 0x15b77cu: goto label_15b77c;
        case 0x15b780u: goto label_15b780;
        case 0x15b784u: goto label_15b784;
        case 0x15b788u: goto label_15b788;
        case 0x15b78cu: goto label_15b78c;
        case 0x15b790u: goto label_15b790;
        case 0x15b794u: goto label_15b794;
        case 0x15b798u: goto label_15b798;
        case 0x15b79cu: goto label_15b79c;
        case 0x15b7a0u: goto label_15b7a0;
        case 0x15b7a4u: goto label_15b7a4;
        case 0x15b7a8u: goto label_15b7a8;
        case 0x15b7acu: goto label_15b7ac;
        case 0x15b7b0u: goto label_15b7b0;
        case 0x15b7b4u: goto label_15b7b4;
        case 0x15b7b8u: goto label_15b7b8;
        case 0x15b7bcu: goto label_15b7bc;
        default: break;
    }

    ctx->pc = 0x15b688u;

label_15b688:
    // 0x15b688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15b688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15b68c:
    // 0x15b68c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15b68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15b690:
    // 0x15b690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15b690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15b694:
    // 0x15b694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15b698:
    // 0x15b698: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15b698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15b69c:
    // 0x15b69c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15b69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_15b6a0:
    // 0x15b6a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15b6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_15b6a4:
    // 0x15b6a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15b6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_15b6a8:
    // 0x15b6a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15b6ac:
    // 0x15b6ac: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x15b6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_15b6b0:
    // 0x15b6b0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_15b6b4:
    if (ctx->pc == 0x15B6B4u) {
        ctx->pc = 0x15B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6B0u;
        // 0x15b6b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6B8u;
        goto label_15b6b8;
    }
    ctx->pc = 0x15B6B0u;
    {
        const bool branch_taken_0x15b6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6B0u;
        // 0x15b6b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6b0) {
            ctx->pc = 0x15B6F0u;
            goto label_15b6f0;
        }
    }
    ctx->pc = 0x15B6B8u;
label_15b6b8:
    // 0x15b6b8: 0x10000038  b           . + 4 + (0x38 << 2)
label_15b6bc:
    if (ctx->pc == 0x15B6BCu) {
        ctx->pc = 0x15B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6B8u;
        // 0x15b6bc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6C0u;
        goto label_15b6c0;
    }
    ctx->pc = 0x15B6B8u;
    {
        const bool branch_taken_0x15b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6B8u;
        // 0x15b6bc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6b8) {
            ctx->pc = 0x15B79Cu;
            goto label_15b79c;
        }
    }
    ctx->pc = 0x15B6C0u;
label_15b6c0:
    // 0x15b6c0: 0xc04f130  jal         func_13C4C0
label_15b6c4:
    if (ctx->pc == 0x15B6C4u) {
        ctx->pc = 0x15B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6C0u;
        // 0x15b6c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6C8u;
        goto label_15b6c8;
    }
    ctx->pc = 0x15B6C0u;
    SET_GPR_U32(ctx, 31, 0x15B6C8u);
    ctx->pc = 0x15B6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6C0u;
    // 0x15b6c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x15B6C0u, 0x15B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6C8u;
label_15b6c8:
    // 0x15b6c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15b6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b6cc:
    // 0x15b6cc: 0xc04d74a  jal         func_135D28
label_15b6d0:
    if (ctx->pc == 0x15B6D0u) {
        ctx->pc = 0x15B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6CCu;
        // 0x15b6d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6D4u;
        goto label_15b6d4;
    }
    ctx->pc = 0x15B6CCu;
    SET_GPR_U32(ctx, 31, 0x15B6D4u);
    ctx->pc = 0x15B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6CCu;
    // 0x15b6d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D28u, 0x15B6CCu, 0x15B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6D4u;
label_15b6d4:
    // 0x15b6d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b6d8:
    // 0x15b6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b6dc:
    // 0x15b6dc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x15b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_15b6e0:
    // 0x15b6e0: 0x40f809  jalr        $v0
label_15b6e4:
    if (ctx->pc == 0x15B6E4u) {
        ctx->pc = 0x15B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6E0u;
        // 0x15b6e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6E8u;
        goto label_15b6e8;
    }
    ctx->pc = 0x15B6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B6E8u);
        ctx->pc = 0x15B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6E0u;
        // 0x15b6e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B6E0u, 0x15B6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B6E8u;
label_15b6e8:
    // 0x15b6e8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_15b6ec:
    if (ctx->pc == 0x15B6ECu) {
        ctx->pc = 0x15B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6E8u;
        // 0x15b6ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6F0u;
        goto label_15b6f0;
    }
    ctx->pc = 0x15B6E8u;
    {
        const bool branch_taken_0x15b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6E8u;
        // 0x15b6ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6e8) {
            ctx->pc = 0x15B79Cu;
            goto label_15b79c;
        }
    }
    ctx->pc = 0x15B6F0u;
label_15b6f0:
    // 0x15b6f0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x15b6f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b6f4:
    // 0x15b6f4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x15b6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b6f8:
    // 0x15b6f8: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x15b6f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15b6fc:
    // 0x15b6fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15b700:
    // 0x15b700: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15b700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15b704:
    // 0x15b704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15b708:
    // 0x15b708: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x15b708u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15b70c:
    // 0x15b70c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_15b710:
    if (ctx->pc == 0x15B710u) {
        ctx->pc = 0x15B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B70Cu;
        // 0x15b710: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B714u;
        goto label_15b714;
    }
    ctx->pc = 0x15B70Cu;
    {
        const bool branch_taken_0x15b70c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B70Cu;
        // 0x15b710: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b70c) {
            ctx->pc = 0x15B778u;
            goto label_15b778;
        }
    }
    ctx->pc = 0x15B714u;
label_15b714:
    // 0x15b714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b718:
    // 0x15b718: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x15b718u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15b71c:
    // 0x15b71c: 0xc056b1e  jal         func_15AC78
label_15b720:
    if (ctx->pc == 0x15B720u) {
        ctx->pc = 0x15B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B71Cu;
        // 0x15b720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B724u;
        goto label_15b724;
    }
    ctx->pc = 0x15B71Cu;
    SET_GPR_U32(ctx, 31, 0x15B724u);
    ctx->pc = 0x15B720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B71Cu;
    // 0x15b720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC78u, 0x15B71Cu, 0x15B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B724u;
label_15b724:
    // 0x15b724: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15b728:
    if (ctx->pc == 0x15B728u) {
        ctx->pc = 0x15B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B724u;
        // 0x15b728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B72Cu;
        goto label_15b72c;
    }
    ctx->pc = 0x15B724u;
    {
        const bool branch_taken_0x15b724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B724u;
        // 0x15b728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b724) {
            ctx->pc = 0x15B744u;
            goto label_15b744;
        }
    }
    ctx->pc = 0x15B72Cu;
label_15b72c:
    // 0x15b72c: 0xc056afe  jal         func_15ABF8
label_15b730:
    if (ctx->pc == 0x15B730u) {
        ctx->pc = 0x15B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B72Cu;
        // 0x15b730: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B734u;
        goto label_15b734;
    }
    ctx->pc = 0x15B72Cu;
    SET_GPR_U32(ctx, 31, 0x15B734u);
    ctx->pc = 0x15B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B72Cu;
    // 0x15b730: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABF8u, 0x15B72Cu, 0x15B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B734u;
label_15b734:
    // 0x15b734: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_15b738:
    if (ctx->pc == 0x15B738u) {
        ctx->pc = 0x15B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B734u;
        // 0x15b738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B73Cu;
        goto label_15b73c;
    }
    ctx->pc = 0x15B734u;
    {
        const bool branch_taken_0x15b734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B734u;
        // 0x15b738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b734) {
            ctx->pc = 0x15B778u;
            goto label_15b778;
        }
    }
    ctx->pc = 0x15B73Cu;
label_15b73c:
    // 0x15b73c: 0xc05810e  jal         func_160438
label_15b740:
    if (ctx->pc == 0x15B740u) {
        ctx->pc = 0x15B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B73Cu;
        // 0x15b740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B744u;
        goto label_15b744;
    }
    ctx->pc = 0x15B73Cu;
    SET_GPR_U32(ctx, 31, 0x15B744u);
    ctx->pc = 0x15B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B73Cu;
    // 0x15b740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160438u, 0x15B73Cu, 0x15B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B744u;
label_15b744:
    // 0x15b744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b748:
    // 0x15b748: 0xc057bfa  jal         func_15EFE8
label_15b74c:
    if (ctx->pc == 0x15B74Cu) {
        ctx->pc = 0x15B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B748u;
        // 0x15b74c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B750u;
        goto label_15b750;
    }
    ctx->pc = 0x15B748u;
    SET_GPR_U32(ctx, 31, 0x15B750u);
    ctx->pc = 0x15B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B748u;
    // 0x15b74c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EFE8u, 0x15B748u, 0x15B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B750u;
label_15b750:
    // 0x15b750: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15b754:
    if (ctx->pc == 0x15B754u) {
        ctx->pc = 0x15B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B750u;
        // 0x15b754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B758u;
        goto label_15b758;
    }
    ctx->pc = 0x15B750u;
    {
        const bool branch_taken_0x15b750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B750u;
        // 0x15b754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b750) {
            ctx->pc = 0x15B778u;
            goto label_15b778;
        }
    }
    ctx->pc = 0x15B758u;
label_15b758:
    // 0x15b758: 0xc04f112  jal         func_13C448
label_15b75c:
    if (ctx->pc == 0x15B75Cu) {
        ctx->pc = 0x15B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B758u;
        // 0x15b75c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B760u;
        goto label_15b760;
    }
    ctx->pc = 0x15B758u;
    SET_GPR_U32(ctx, 31, 0x15B760u);
    ctx->pc = 0x15B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B758u;
    // 0x15b75c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x15B758u, 0x15B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B760u;
label_15b760:
    // 0x15b760: 0x1055ffe1  beq         $v0, $s5, . + 4 + (-0x1F << 2)
label_15b764:
    if (ctx->pc == 0x15B764u) {
        ctx->pc = 0x15B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B760u;
        // 0x15b764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B768u;
        goto label_15b768;
    }
    ctx->pc = 0x15B760u;
    {
        const bool branch_taken_0x15b760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x15B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B760u;
        // 0x15b764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b760) {
            ctx->pc = 0x15B6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b6e8;
        }
    }
    ctx->pc = 0x15B768u;
label_15b768:
    // 0x15b768: 0xc04f11e  jal         func_13C478
label_15b76c:
    if (ctx->pc == 0x15B76Cu) {
        ctx->pc = 0x15B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B768u;
        // 0x15b76c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B770u;
        goto label_15b770;
    }
    ctx->pc = 0x15B768u;
    SET_GPR_U32(ctx, 31, 0x15B770u);
    ctx->pc = 0x15B76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B768u;
    // 0x15b76c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x15B768u, 0x15B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B770u;
label_15b770:
    // 0x15b770: 0x1054ffd3  beq         $v0, $s4, . + 4 + (-0x2D << 2)
label_15b774:
    if (ctx->pc == 0x15B774u) {
        ctx->pc = 0x15B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B770u;
        // 0x15b774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B778u;
        goto label_15b778;
    }
    ctx->pc = 0x15B770u;
    {
        const bool branch_taken_0x15b770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x15B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B770u;
        // 0x15b774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b770) {
            ctx->pc = 0x15B6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b6c0;
        }
    }
    ctx->pc = 0x15B778u;
label_15b778:
    // 0x15b778: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15b77c:
    // 0x15b77c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x15b77cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15b780:
    // 0x15b780: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x15b780u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_15b784:
    // 0x15b784: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_15b788:
    if (ctx->pc == 0x15B788u) {
        ctx->pc = 0x15B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B784u;
        // 0x15b788: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B78Cu;
        goto label_15b78c;
    }
    ctx->pc = 0x15B784u;
    {
        const bool branch_taken_0x15b784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B784u;
        // 0x15b788: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b784) {
            ctx->pc = 0x15B79Cu;
            goto label_15b79c;
        }
    }
    ctx->pc = 0x15B78Cu;
label_15b78c:
    // 0x15b78c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x15b78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_15b790:
    // 0x15b790: 0x5662ffdb  bnel        $s3, $v0, . + 4 + (-0x25 << 2)
label_15b794:
    if (ctx->pc == 0x15B794u) {
        ctx->pc = 0x15B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B790u;
        // 0x15b794: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B798u;
        goto label_15b798;
    }
    ctx->pc = 0x15B790u;
    {
        const bool branch_taken_0x15b790 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b790) {
            ctx->pc = 0x15B794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B790u;
            // 0x15b794: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b700;
        }
    }
    ctx->pc = 0x15B798u;
label_15b798:
    // 0x15b798: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15b79c:
    // 0x15b79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15b79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b7a0:
    // 0x15b7a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15b7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15b7a4:
    // 0x15b7a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15b7a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15b7a8:
    // 0x15b7a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15b7a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15b7ac:
    // 0x15b7ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15b7acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15b7b0:
    // 0x15b7b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x15b7b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15b7b4:
    // 0x15b7b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15b7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15b7b8:
    // 0x15b7b8: 0x3e00008  jr          $ra
label_15b7bc:
    if (ctx->pc == 0x15B7BCu) {
        ctx->pc = 0x15B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7B8u;
        // 0x15b7bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B7C0u;
        goto label_fallthrough_0x15b7b8;
    }
    ctx->pc = 0x15B7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7B8u;
        // 0x15b7bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b7b8:
    ctx->pc = 0x15B7C0u;
}
