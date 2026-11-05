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

// Function: sub_003EE0B0
// Address: 0x3ee0b0 - 0x3ee140
void sub_003EE0B0_0x3ee0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE0B0_0x3ee0b0");
#endif

    switch (ctx->pc) {
        case 0x3ee134u: goto label_3ee134;
        default: break;
    }

    ctx->pc = 0x3ee0b0u;

    // 0x3ee0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ee0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ee0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ee0b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ee0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee0bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ee0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ee0c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ee0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ee0c4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE0C4u;
    {
        const bool branch_taken_0x3ee0c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0C4u;
        // 0x3ee0c8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee0c4) {
            ctx->pc = 0x3EE0D4u;
            goto label_3ee0d4;
        }
    }
    ctx->pc = 0x3EE0CCu;
    // 0x3ee0cc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee0d0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ee0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ee0d4:
    // 0x3ee0d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ee0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ee0d8: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE0D8u;
    {
        const bool branch_taken_0x3ee0d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee0d8) {
            ctx->pc = 0x3EE0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE0D8u;
            // 0x3ee0dc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE0ECu;
            goto label_3ee0ec;
        }
    }
    ctx->pc = 0x3EE0E0u;
    // 0x3ee0e0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee0e4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ee0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ee0e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ee0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ee0ec:
    // 0x3ee0ec: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE0ECu;
    {
        const bool branch_taken_0x3ee0ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee0ec) {
            ctx->pc = 0x3EE0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE0ECu;
            // 0x3ee0f0: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE100u;
            goto label_3ee100;
        }
    }
    ctx->pc = 0x3EE0F4u;
    // 0x3ee0f4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ee0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ee0f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ee0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ee0fc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ee0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ee100:
    // 0x3ee100: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE100u;
    {
        const bool branch_taken_0x3ee100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee100) {
            ctx->pc = 0x3EE104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE100u;
            // 0x3ee104: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE114u;
            goto label_3ee114;
        }
    }
    ctx->pc = 0x3EE108u;
    // 0x3ee108: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee10c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ee10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ee110: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ee110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ee114:
    // 0x3ee114: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE114u;
    {
        const bool branch_taken_0x3ee114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee114) {
            ctx->pc = 0x3EE124u;
            goto label_3ee124;
        }
    }
    ctx->pc = 0x3EE11Cu;
    // 0x3ee11c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ee11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ee120: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ee120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ee124:
    // 0x3ee124: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE124u;
    {
        const bool branch_taken_0x3ee124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE124u;
        // 0x3ee128: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee124) {
            ctx->pc = 0x3EE138u;
            goto label_3ee138;
        }
    }
    ctx->pc = 0x3EE12Cu;
    // 0x3ee12c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EE12Cu;
    SET_GPR_U32(ctx, 31, 0x3EE134u);
    ctx->pc = 0x3EE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE12Cu;
    // 0x3ee130: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EE12Cu, 0x3EE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE134u;
label_3ee134:
    // 0x3ee134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ee134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ee138:
    // 0x3ee138: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE138u;
        // 0x3ee13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE140u;
}
