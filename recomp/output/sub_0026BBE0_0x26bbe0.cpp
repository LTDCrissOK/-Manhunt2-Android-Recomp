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

// Function: sub_0026BBE0
// Address: 0x26bbe0 - 0x26bc30
void sub_0026BBE0_0x26bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BBE0_0x26bbe0");
#endif

    switch (ctx->pc) {
        case 0x26bbf4u: goto label_26bbf4;
        case 0x26bc20u: goto label_26bc20;
        default: break;
    }

    ctx->pc = 0x26bbe0u;

    // 0x26bbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26bbe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26bbe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26bbec: 0xc09bef8  jal         func_26FBE0
    ctx->pc = 0x26BBECu;
    SET_GPR_U32(ctx, 31, 0x26BBF4u);
    ctx->pc = 0x26BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BBECu;
    // 0x26bbf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FBE0u, 0x26BBECu, 0x26BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBF4u;
label_26bbf4:
    // 0x26bbf4: 0x92020245  lbu         $v0, 0x245($s0)
    ctx->pc = 0x26bbf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 581)));
    // 0x26bbf8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x26BBF8u;
    {
        const bool branch_taken_0x26bbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bbf8) {
            ctx->pc = 0x26BBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BBF8u;
            // 0x26bbfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BC24u;
            goto label_26bc24;
        }
    }
    ctx->pc = 0x26BC00u;
    // 0x26bc00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26bc04: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x26bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x26bc08: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x26bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x26bc0c: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BC0Cu;
    {
        const bool branch_taken_0x26bc0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x26bc0c) {
            ctx->pc = 0x26BC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BC0Cu;
            // 0x26bc10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BC24u;
            goto label_26bc24;
        }
    }
    ctx->pc = 0x26BC14u;
    // 0x26bc14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bc18: 0xc0cda26  jal         func_336898
    ctx->pc = 0x26BC18u;
    SET_GPR_U32(ctx, 31, 0x26BC20u);
    ctx->pc = 0x26BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC18u;
    // 0x26bc1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x26BC18u, 0x26BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC20u;
label_26bc20:
    // 0x26bc20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26bc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26bc24:
    // 0x26bc24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26bc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26bc28: 0x3e00008  jr          $ra
    ctx->pc = 0x26BC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC28u;
        // 0x26bc2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BC30u;
}
