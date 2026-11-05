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

// Function: sub_00304AE0
// Address: 0x304ae0 - 0x304b50
void sub_00304AE0_0x304ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304AE0_0x304ae0");
#endif

    switch (ctx->pc) {
        case 0x304b28u: goto label_304b28;
        case 0x304b38u: goto label_304b38;
        default: break;
    }

    ctx->pc = 0x304ae0u;

    // 0x304ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304ae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304ae8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x304ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x304aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304af0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x304af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x304af4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x304af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x304af8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x304af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x304afc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x304afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x304b00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x304b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x304b04: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x304b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x304b08: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x304b08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x304b0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304B0Cu;
    {
        const bool branch_taken_0x304b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x304B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B0Cu;
        // 0x304b10: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b0c) {
            ctx->pc = 0x304B1Cu;
            goto label_304b1c;
        }
    }
    ctx->pc = 0x304B14u;
    // 0x304b14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x304B14u;
    {
        const bool branch_taken_0x304b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B14u;
        // 0x304b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b14) {
            ctx->pc = 0x304B3Cu;
            goto label_304b3c;
        }
    }
    ctx->pc = 0x304B1Cu;
label_304b1c:
    // 0x304b1c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x304b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x304b20: 0xc0cda26  jal         func_336898
    ctx->pc = 0x304B20u;
    SET_GPR_U32(ctx, 31, 0x304B28u);
    ctx->pc = 0x304B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B20u;
    // 0x304b24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x304B20u, 0x304B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B28u;
label_304b28:
    // 0x304b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b2c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x304b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x304b30: 0xc0c1282  jal         func_304A08
    ctx->pc = 0x304B30u;
    SET_GPR_U32(ctx, 31, 0x304B38u);
    ctx->pc = 0x304B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B30u;
    // 0x304b34: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A08u, 0x304B30u, 0x304B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B38u;
label_304b38:
    // 0x304b38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304b3c:
    // 0x304b3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304b40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304b44: 0x3e00008  jr          $ra
    ctx->pc = 0x304B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B44u;
        // 0x304b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304B4Cu;
    // 0x304b4c: 0x0  nop
    ctx->pc = 0x304b4cu;
    // NOP
    ctx->pc = 0x304b50u;
}
