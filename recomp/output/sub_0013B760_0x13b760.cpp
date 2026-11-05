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

// Function: sub_0013B760
// Address: 0x13b760 - 0x13b810
void sub_0013B760_0x13b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B760_0x13b760");
#endif

    switch (ctx->pc) {
        case 0x13b7a8u: goto label_13b7a8;
        case 0x13b7f0u: goto label_13b7f0;
        default: break;
    }

    ctx->pc = 0x13b760u;

    // 0x13b760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b764: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13b764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13b768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b76c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13b76cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13b770: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13b770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13b774: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x13b774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x13b778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b77c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13b77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b780: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13b784: 0x24719a08  addiu       $s1, $v1, -0x65F8
    ctx->pc = 0x13b784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x13b788: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x13b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13b78c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13b790: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b794: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b798: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13b79c: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x13b79cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x13b7a0: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x13B7A0u;
    SET_GPR_U32(ctx, 31, 0x13B7A8u);
    ctx->pc = 0x13B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7A0u;
    // 0x13b7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x13B7A0u, 0x13B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7A8u;
label_13b7a8:
    // 0x13b7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13b7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7ac: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13B7ACu;
    {
        const bool branch_taken_0x13b7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7ACu;
        // 0x13b7b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7ac) {
            ctx->pc = 0x13B7F8u;
            goto label_13b7f8;
        }
    }
    ctx->pc = 0x13B7B4u;
    // 0x13b7b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13b7b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b7bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13b7c0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x13b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13b7c4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B7C4u;
    {
        const bool branch_taken_0x13b7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b7c4) {
            ctx->pc = 0x13B7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B7C4u;
            // 0x13b7c8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B7D4u;
            goto label_13b7d4;
        }
    }
    ctx->pc = 0x13B7CCu;
    // 0x13b7cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B7CCu;
    {
        const bool branch_taken_0x13b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7CCu;
        // 0x13b7d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7cc) {
            ctx->pc = 0x13B7DCu;
            goto label_13b7dc;
        }
    }
    ctx->pc = 0x13B7D4u;
label_13b7d4:
    // 0x13b7d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b7d8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x13b7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13b7dc:
    // 0x13b7dc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B7DCu;
    {
        const bool branch_taken_0x13b7dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7DCu;
        // 0x13b7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7dc) {
            ctx->pc = 0x13B7F8u;
            goto label_13b7f8;
        }
    }
    ctx->pc = 0x13B7E4u;
    // 0x13b7e4: 0x8e460ab4  lw          $a2, 0xAB4($s2)
    ctx->pc = 0x13b7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2740)));
    // 0x13b7e8: 0xc040b34  jal         func_102CD0
    ctx->pc = 0x13B7E8u;
    SET_GPR_U32(ctx, 31, 0x13B7F0u);
    ctx->pc = 0x13B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7E8u;
    // 0x13b7ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102CD0u, 0x13B7E8u, 0x13B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7F0u;
label_13b7f0:
    // 0x13b7f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13B7F0u;
    {
        const bool branch_taken_0x13b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7F0u;
        // 0x13b7f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7f0) {
            ctx->pc = 0x13B7FCu;
            goto label_13b7fc;
        }
    }
    ctx->pc = 0x13B7F8u;
label_13b7f8:
    // 0x13b7f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b7fc:
    // 0x13b7fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b7fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b800: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b804: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13b804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b808: 0x3e00008  jr          $ra
    ctx->pc = 0x13B808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B808u;
        // 0x13b80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B810u;
}
