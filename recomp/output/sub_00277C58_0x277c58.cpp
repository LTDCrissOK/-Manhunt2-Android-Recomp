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

// Function: sub_00277C58
// Address: 0x277c58 - 0x277d08
void sub_00277C58_0x277c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277C58_0x277c58");
#endif

    switch (ctx->pc) {
        case 0x277c8cu: goto label_277c8c;
        case 0x277ca8u: goto label_277ca8;
        case 0x277cb8u: goto label_277cb8;
        case 0x277cd4u: goto label_277cd4;
        default: break;
    }

    ctx->pc = 0x277c58u;

    // 0x277c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277c5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x277c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x277c60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x277c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x277c68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x277c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x277c70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x277c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c74: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277c78: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x277c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x277c7c: 0x24a582d8  addiu       $a1, $a1, -0x7D28
    ctx->pc = 0x277c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935256));
    // 0x277c80: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x277c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x277c84: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277C84u;
    SET_GPR_U32(ctx, 31, 0x277C8Cu);
    ctx->pc = 0x277C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C84u;
    // 0x277c88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277C84u, 0x277C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C8Cu;
label_277c8c:
    // 0x277c8c: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x277c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x277c90: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277c94: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x277c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x277c98: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x277c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
    // 0x277c9c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x277c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x277ca0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277CA0u;
    SET_GPR_U32(ctx, 31, 0x277CA8u);
    ctx->pc = 0x277CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CA0u;
    // 0x277ca4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277CA0u, 0x277CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CA8u;
label_277ca8:
    // 0x277ca8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277cac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x277cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x277cb0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x277CB0u;
    SET_GPR_U32(ctx, 31, 0x277CB8u);
    ctx->pc = 0x277CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CB0u;
    // 0x277cb4: 0x24a582e8  addiu       $a1, $a1, -0x7D18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x277CB0u, 0x277CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CB8u;
label_277cb8:
    // 0x277cb8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x277CB8u;
    {
        const bool branch_taken_0x277cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277cb8) {
            ctx->pc = 0x277CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277CB8u;
            // 0x277cbc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277CC8u;
            goto label_277cc8;
        }
    }
    ctx->pc = 0x277CC0u;
    // 0x277cc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x277CC0u;
    {
        const bool branch_taken_0x277cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CC0u;
        // 0x277cc4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277cc0) {
            ctx->pc = 0x277CE4u;
            goto label_277ce4;
        }
    }
    ctx->pc = 0x277CC8u;
label_277cc8:
    // 0x277cc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x277cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x277ccc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x277CCCu;
    SET_GPR_U32(ctx, 31, 0x277CD4u);
    ctx->pc = 0x277CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CCCu;
    // 0x277cd0: 0x24a582f0  addiu       $a1, $a1, -0x7D10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x277CCCu, 0x277CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CD4u;
label_277cd4:
    // 0x277cd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277CD4u;
    {
        const bool branch_taken_0x277cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CD4u;
        // 0x277cd8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277cd4) {
            ctx->pc = 0x277CE8u;
            goto label_277ce8;
        }
    }
    ctx->pc = 0x277CDCu;
    // 0x277cdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277ce0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x277ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_277ce4:
    // 0x277ce4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x277ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_277ce8:
    // 0x277ce8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x277ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277cec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x277cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x277cf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x277cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277cf4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x277cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x277cf8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x277cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x277CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CFCu;
        // 0x277d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277D04u;
    // 0x277d04: 0x0  nop
    ctx->pc = 0x277d04u;
    // NOP
    ctx->pc = 0x277d08u;
}
