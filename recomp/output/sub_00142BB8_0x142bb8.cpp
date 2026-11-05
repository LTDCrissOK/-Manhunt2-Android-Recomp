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

// Function: sub_00142BB8
// Address: 0x142bb8 - 0x142c30
void sub_00142BB8_0x142bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142BB8_0x142bb8");
#endif

    switch (ctx->pc) {
        case 0x142bc8u: goto label_142bc8;
        case 0x142be0u: goto label_142be0;
        default: break;
    }

    ctx->pc = 0x142bb8u;

    // 0x142bb8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x142bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142bbc: 0x90c20009  lbu         $v0, 0x9($a2)
    ctx->pc = 0x142bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x142bc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142BC0u;
    {
        const bool branch_taken_0x142bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BC0u;
        // 0x142bc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142bc0) {
            ctx->pc = 0x142BD0u;
            goto label_142bd0;
        }
    }
    ctx->pc = 0x142BC8u;
label_142bc8:
    // 0x142bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x142BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BC8u;
        // 0x142bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142BD0u;
label_142bd0:
    // 0x142bd0: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x142bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x142bd4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x142bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142bd8: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x142bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x142bdc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x142bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_142be0:
    // 0x142be0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x142be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x142be4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x142be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142be8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x142BE8u;
    {
        const bool branch_taken_0x142be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BE8u;
        // 0x142bec: 0xa91818  mult        $v1, $a1, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142be8) {
            ctx->pc = 0x142C04u;
            goto label_142c04;
        }
    }
    ctx->pc = 0x142BF0u;
    // 0x142bf0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x142bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x142bf4: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x142bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x142bf8: 0x8c440b10  lw          $a0, 0xB10($v0)
    ctx->pc = 0x142bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2832)));
    // 0x142bfc: 0x1080fff2  beqz        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x142BFCu;
    {
        const bool branch_taken_0x142bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BFCu;
        // 0x142c00: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142bfc) {
            ctx->pc = 0x142BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142bc8;
        }
    }
    ctx->pc = 0x142C04u;
label_142c04:
    // 0x142c04: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x142c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x142c08: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x142c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x142c0c: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x142c0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x142c10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x142C10u;
    {
        const bool branch_taken_0x142c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c10) {
            ctx->pc = 0x142C24u;
            goto label_142c24;
        }
    }
    ctx->pc = 0x142C18u;
    // 0x142c18: 0x90c20009  lbu         $v0, 0x9($a2)
    ctx->pc = 0x142c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x142c1c: 0x14e2fff0  bne         $a3, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x142C1Cu;
    {
        const bool branch_taken_0x142c1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x142C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C1Cu;
        // 0x142c20: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c1c) {
            ctx->pc = 0x142BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142be0;
        }
    }
    ctx->pc = 0x142C24u;
label_142c24:
    // 0x142c24: 0x3e00008  jr          $ra
    ctx->pc = 0x142C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C24u;
        // 0x142c28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142C2Cu;
    // 0x142c2c: 0x0  nop
    ctx->pc = 0x142c2cu;
    // NOP
    ctx->pc = 0x142c30u;
}
