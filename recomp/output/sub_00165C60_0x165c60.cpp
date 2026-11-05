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

// Function: sub_00165C60
// Address: 0x165c60 - 0x165cf8
void sub_00165C60_0x165c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165C60_0x165c60");
#endif

    switch (ctx->pc) {
        case 0x165c90u: goto label_165c90;
        case 0x165cb4u: goto label_165cb4;
        case 0x165cc0u: goto label_165cc0;
        default: break;
    }

    ctx->pc = 0x165c60u;

    // 0x165c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165c64: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x165c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x165c68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165c74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165c78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x165c80: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x165c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x165c84: 0x2604022c  addiu       $a0, $s0, 0x22C
    ctx->pc = 0x165c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x165c88: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x165c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x165c8c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x165c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_165c90:
    // 0x165c90: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x165c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x165c94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165c98: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x165C98u;
    {
        const bool branch_taken_0x165c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C98u;
        // 0x165c9c: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c98) {
            ctx->pc = 0x165CC8u;
            goto label_165cc8;
        }
    }
    ctx->pc = 0x165CA0u;
    // 0x165ca0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x165ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165ca4: 0x14670009  bne         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x165CA4u;
    {
        const bool branch_taken_0x165ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x165CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CA4u;
        // 0x165ca8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ca4) {
            ctx->pc = 0x165CCCu;
            goto label_165ccc;
        }
    }
    ctx->pc = 0x165CACu;
    // 0x165cac: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x165CACu;
    SET_GPR_U32(ctx, 31, 0x165CB4u);
    ctx->pc = 0x165CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165CACu;
    // 0x165cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x165CACu, 0x165CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165CB4u;
label_165cb4:
    // 0x165cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165cb8: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x165CB8u;
    SET_GPR_U32(ctx, 31, 0x165CC0u);
    ctx->pc = 0x165CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165CB8u;
    // 0x165cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x165CB8u, 0x165CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165CC0u;
label_165cc0:
    // 0x165cc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165CC0u;
    {
        const bool branch_taken_0x165cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CC0u;
        // 0x165cc4: 0xae120304  sw          $s2, 0x304($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cc0) {
            ctx->pc = 0x165CDCu;
            goto label_165cdc;
        }
    }
    ctx->pc = 0x165CC8u;
label_165cc8:
    // 0x165cc8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x165cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_165ccc:
    // 0x165ccc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x165cccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165cd0: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x165cd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165cd4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x165CD4u;
    {
        const bool branch_taken_0x165cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CD4u;
        // 0x165cd8: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cd4) {
            ctx->pc = 0x165C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165c90;
        }
    }
    ctx->pc = 0x165CDCu;
label_165cdc:
    // 0x165cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165ce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ce8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x165ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165cec: 0x3e00008  jr          $ra
    ctx->pc = 0x165CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CECu;
        // 0x165cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165CF4u;
    // 0x165cf4: 0x0  nop
    ctx->pc = 0x165cf4u;
    // NOP
    ctx->pc = 0x165cf8u;
}
