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

// Function: sub_003C7448
// Address: 0x3c7448 - 0x3c74f0
void sub_003C7448_0x3c7448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7448_0x3c7448");
#endif

    switch (ctx->pc) {
        case 0x3c7474u: goto label_3c7474;
        case 0x3c74b8u: goto label_3c74b8;
        default: break;
    }

    ctx->pc = 0x3c7448u;

    // 0x3c7448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c7448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c744c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c7450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c7450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c7454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c7454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c745c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c7460: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C7460u;
    {
        const bool branch_taken_0x3c7460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7460u;
        // 0x3c7464: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7460) {
            ctx->pc = 0x3C747Cu;
            goto label_3c747c;
        }
    }
    ctx->pc = 0x3C7468u;
    // 0x3c7468: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3c7468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c746c: 0xc0f247a  jal         func_3C91E8
    ctx->pc = 0x3C746Cu;
    SET_GPR_U32(ctx, 31, 0x3C7474u);
    ctx->pc = 0x3C7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C746Cu;
    // 0x3c7470: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C91E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C91E8u, 0x3C746Cu, 0x3C7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7474u;
label_3c7474:
    // 0x3c7474: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C7474u;
    {
        const bool branch_taken_0x3c7474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7474u;
        // 0x3c7478: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7474) {
            ctx->pc = 0x3C74C4u;
            goto label_3c74c4;
        }
    }
    ctx->pc = 0x3C747Cu;
label_3c747c:
    // 0x3c747c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3c747cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c7480: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3c7480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3c7484: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3c7484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c7488: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c7488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c748c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C748Cu;
    {
        const bool branch_taken_0x3c748c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C748Cu;
        // 0x3c7490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c748c) {
            ctx->pc = 0x3C74A0u;
            goto label_3c74a0;
        }
    }
    ctx->pc = 0x3C7494u;
    // 0x3c7494: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3c7494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c7498: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3C7498u;
    {
        const bool branch_taken_0x3c7498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7498u;
        // 0x3c749c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7498) {
            ctx->pc = 0x3C74D0u;
            goto label_3c74d0;
        }
    }
    ctx->pc = 0x3C74A0u;
label_3c74a0:
    // 0x3c74a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c74a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c74a4: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x3c74a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x3c74a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c74a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c74ac: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x3c74acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3c74b0: 0xc0f247a  jal         func_3C91E8
    ctx->pc = 0x3C74B0u;
    SET_GPR_U32(ctx, 31, 0x3C74B8u);
    ctx->pc = 0x3C74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C74B0u;
    // 0x3c74b4: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C91E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C91E8u, 0x3C74B0u, 0x3C74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C74B8u;
label_3c74b8:
    // 0x3c74b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c74b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c74bc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C74BCu;
    {
        const bool branch_taken_0x3c74bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c74bc) {
            ctx->pc = 0x3C74C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C74BCu;
            // 0x3c74c0: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C74CCu;
            goto label_3c74cc;
        }
    }
    ctx->pc = 0x3C74C4u;
label_3c74c4:
    // 0x3c74c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C74C4u;
    {
        const bool branch_taken_0x3c74c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C74C4u;
        // 0x3c74c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c74c4) {
            ctx->pc = 0x3C74DCu;
            goto label_3c74dc;
        }
    }
    ctx->pc = 0x3C74CCu;
label_3c74cc:
    // 0x3c74cc: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x3c74ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_3c74d0:
    // 0x3c74d0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3c74d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x3c74d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c74d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c74d8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3c74d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_3c74dc:
    // 0x3c74dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c74dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c74e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c74e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c74e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c74e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c74e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C74E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C74E8u;
        // 0x3c74ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C74E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C74F0u;
}
