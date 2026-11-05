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

// Function: sub_003453E8
// Address: 0x3453e8 - 0x3454d0
void sub_003453E8_0x3453e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003453E8_0x3453e8");
#endif

    switch (ctx->pc) {
        case 0x345430u: goto label_345430;
        case 0x34544cu: goto label_34544c;
        case 0x345474u: goto label_345474;
        case 0x345488u: goto label_345488;
        case 0x3454a0u: goto label_3454a0;
        case 0x3454b4u: goto label_3454b4;
        default: break;
    }

    ctx->pc = 0x3453e8u;

    // 0x3453e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3453e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3453ec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3453ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3453f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3453f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3453f4: 0x24424480  addiu       $v0, $v0, 0x4480
    ctx->pc = 0x3453f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17536));
    // 0x3453f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3453f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3453fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3453fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345400: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x345400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x345404: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x345404u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x345408: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34540c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x345410: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x345410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x345414: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x345414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x345418: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x345418u;
    {
        const bool branch_taken_0x345418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345418u;
        // 0x34541c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345418) {
            ctx->pc = 0x345474u;
            goto label_345474;
        }
    }
    ctx->pc = 0x345420u;
    // 0x345420: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x345420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x345424: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x345424u;
    {
        const bool branch_taken_0x345424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345424u;
        // 0x345428: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345424) {
            ctx->pc = 0x345460u;
            goto label_345460;
        }
    }
    ctx->pc = 0x34542Cu;
    // 0x34542c: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x34542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_345430:
    // 0x345430: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x345430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x345434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x345434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345438: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x345438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34543c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x34543Cu;
    {
        const bool branch_taken_0x34543c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34543c) {
            ctx->pc = 0x345440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34543Cu;
            // 0x345440: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345450u;
            goto label_345450;
        }
    }
    ctx->pc = 0x345444u;
    // 0x345444: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x345444u;
    SET_GPR_U32(ctx, 31, 0x34544Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x345444u, 0x34544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34544Cu;
label_34544c:
    // 0x34544c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x34544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_345450:
    // 0x345450: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x345450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x345454: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x345454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x345458: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x345458u;
    {
        const bool branch_taken_0x345458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345458) {
            ctx->pc = 0x34545Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345458u;
            // 0x34545c: 0x8e230118  lw          $v1, 0x118($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345430;
        }
    }
    ctx->pc = 0x345460u;
label_345460:
    // 0x345460: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x345460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x345464: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x345464u;
    {
        const bool branch_taken_0x345464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345464) {
            ctx->pc = 0x345468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345464u;
            // 0x345468: 0x8e240124  lw          $a0, 0x124($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345478u;
            goto label_345478;
        }
    }
    ctx->pc = 0x34546Cu;
    // 0x34546c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x34546Cu;
    SET_GPR_U32(ctx, 31, 0x345474u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x34546Cu, 0x345474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345474u;
label_345474:
    // 0x345474: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x345474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_345478:
    // 0x345478: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x345478u;
    {
        const bool branch_taken_0x345478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345478u;
        // 0x34547c: 0x264244b0  addiu       $v0, $s2, 0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 17584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345478) {
            ctx->pc = 0x345490u;
            goto label_345490;
        }
    }
    ctx->pc = 0x345480u;
    // 0x345480: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x345480u;
    SET_GPR_U32(ctx, 31, 0x345488u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x345480u, 0x345488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345488u;
label_345488:
    // 0x345488: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x345488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
    // 0x34548c: 0x264244b0  addiu       $v0, $s2, 0x44B0
    ctx->pc = 0x34548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 17584));
label_345490:
    // 0x345490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345494: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x345494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x345498: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x345498u;
    SET_GPR_U32(ctx, 31, 0x3454A0u);
    ctx->pc = 0x34549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345498u;
    // 0x34549c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x345498u, 0x3454A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454A0u;
label_3454a0:
    // 0x3454a0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3454a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x3454a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3454A4u;
    {
        const bool branch_taken_0x3454a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3454A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454A4u;
        // 0x3454a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3454a4) {
            ctx->pc = 0x3454B8u;
            goto label_3454b8;
        }
    }
    ctx->pc = 0x3454ACu;
    // 0x3454ac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3454ACu;
    SET_GPR_U32(ctx, 31, 0x3454B4u);
    ctx->pc = 0x3454B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454ACu;
    // 0x3454b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3454ACu, 0x3454B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454B4u;
label_3454b4:
    // 0x3454b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3454b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3454b8:
    // 0x3454b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3454b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3454bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3454bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3454c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3454c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3454c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3454c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3454c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3454C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3454CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454C8u;
        // 0x3454cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3454C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3454D0u;
}
