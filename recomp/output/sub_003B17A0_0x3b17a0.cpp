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

// Function: sub_003B17A0
// Address: 0x3b17a0 - 0x3b1868
void sub_003B17A0_0x3b17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B17A0_0x3b17a0");
#endif

    switch (ctx->pc) {
        case 0x3b17ccu: goto label_3b17cc;
        case 0x3b17e4u: goto label_3b17e4;
        case 0x3b17f4u: goto label_3b17f4;
        case 0x3b1808u: goto label_3b1808;
        case 0x3b1820u: goto label_3b1820;
        case 0x3b182cu: goto label_3b182c;
        default: break;
    }

    ctx->pc = 0x3b17a0u;

    // 0x3b17a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b17a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b17a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3b17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3b17a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b17a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b17ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b17acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b17b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b17b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b17b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b17b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b17b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b17b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b17bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3b17bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3b17c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3b17c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3b17c4: 0xc0ec5ce  jal         func_3B1738
    ctx->pc = 0x3B17C4u;
    SET_GPR_U32(ctx, 31, 0x3B17CCu);
    ctx->pc = 0x3B17C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B17C4u;
    // 0x3b17c8: 0x8c53fee8  lw          $s3, -0x118($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967016)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1738u, 0x3B17C4u, 0x3B17CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B17CCu;
label_3b17cc:
    // 0x3b17cc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3b17ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3b17d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B17D0u;
    {
        const bool branch_taken_0x3b17d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17D0u;
        // 0x3b17d4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b17d0) {
            ctx->pc = 0x3B17E4u;
            goto label_3b17e4;
        }
    }
    ctx->pc = 0x3B17D8u;
    // 0x3b17d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b17d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b17dc: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B17DCu;
    SET_GPR_U32(ctx, 31, 0x3B17E4u);
    ctx->pc = 0x3B17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B17DCu;
    // 0x3b17e0: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B17DCu, 0x3B17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B17E4u;
label_3b17e4:
    // 0x3b17e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b17e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b17e8: 0x3c128001  lui         $s2, 0x8001
    ctx->pc = 0x3b17e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32769 << 16));
    // 0x3b17ec: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B17ECu;
    SET_GPR_U32(ctx, 31, 0x3B17F4u);
    ctx->pc = 0x3B17F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B17ECu;
    // 0x3b17f0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B17ECu, 0x3B17F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B17F4u;
label_3b17f4:
    // 0x3b17f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b17f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b17f8: 0x24140fff  addiu       $s4, $zero, 0xFFF
    ctx->pc = 0x3b17f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x3b17fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B17FCu;
    {
        const bool branch_taken_0x3b17fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17FCu;
        // 0x3b1800: 0x3652000c  ori         $s2, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b17fc) {
            ctx->pc = 0x3B1824u;
            goto label_3b1824;
        }
    }
    ctx->pc = 0x3B1804u;
    // 0x3b1804: 0x0  nop
    ctx->pc = 0x3b1804u;
    // NOP
label_3b1808:
    // 0x3b1808: 0x1074000d  beq         $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x3B1808u;
    {
        const bool branch_taken_0x3b1808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x3B180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1808u;
        // 0x3b180c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1808) {
            ctx->pc = 0x3B1840u;
            goto label_3b1840;
        }
    }
    ctx->pc = 0x3B1810u;
    // 0x3b1810: 0x1212000b  beq         $s0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x3B1810u;
    {
        const bool branch_taken_0x3b1810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x3B1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1810u;
        // 0x3b1814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1810) {
            ctx->pc = 0x3B1840u;
            goto label_3b1840;
        }
    }
    ctx->pc = 0x3B1818u;
    // 0x3b1818: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B1818u;
    SET_GPR_U32(ctx, 31, 0x3B1820u);
    ctx->pc = 0x3B181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1818u;
    // 0x3b181c: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B1818u, 0x3B1820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1820u;
label_3b1820:
    // 0x3b1820: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3b1820u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_3b1824:
    // 0x3b1824: 0xc0ec5d0  jal         func_3B1740
    ctx->pc = 0x3B1824u;
    SET_GPR_U32(ctx, 31, 0x3B182Cu);
    ctx->pc = 0x3B1828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1824u;
    // 0x3b1828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1740u, 0x3B1824u, 0x3B182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B182Cu;
label_3b182c:
    // 0x3b182c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b182cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1830: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b1830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b1834: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3B1834u;
    {
        const bool branch_taken_0x3b1834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1834u;
        // 0x3b1838: 0x2131824  and         $v1, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1834) {
            ctx->pc = 0x3B1808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1808;
        }
    }
    ctx->pc = 0x3B183Cu;
    // 0x3b183c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b1840:
    // 0x3b1840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1844: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b1844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1848: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b1848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b184c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b184cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b1850: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3b1850u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1854: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3b1854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b1858: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1858u;
        // 0x3b185c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1860u;
    // 0x3b1860: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3b1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b1864: 0x0  nop
    ctx->pc = 0x3b1864u;
    // NOP
    ctx->pc = 0x3b1868u;
}
