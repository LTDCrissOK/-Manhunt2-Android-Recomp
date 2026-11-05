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

// Function: sub_00133BF0
// Address: 0x133bf0 - 0x133c48
void sub_00133BF0_0x133bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133BF0_0x133bf0");
#endif

    switch (ctx->pc) {
        case 0x133c1cu: goto label_133c1c;
        case 0x133c2cu: goto label_133c2c;
        default: break;
    }

    ctx->pc = 0x133bf0u;

    // 0x133bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x133bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x133bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133c04: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x133c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x133c08: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x133c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x133c0c: 0x10b10009  beq         $a1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x133C0Cu;
    {
        const bool branch_taken_0x133c0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x133C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C0Cu;
        // 0x133c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c0c) {
            ctx->pc = 0x133C34u;
            goto label_133c34;
        }
    }
    ctx->pc = 0x133C14u;
    // 0x133c14: 0xc04c3bc  jal         func_130EF0
    ctx->pc = 0x133C14u;
    SET_GPR_U32(ctx, 31, 0x133C1Cu);
    ctx->pc = 0x133C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C14u;
    // 0x133c18: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130EF0u, 0x133C14u, 0x133C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C1Cu;
label_133c1c:
    // 0x133c1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133C1Cu;
    {
        const bool branch_taken_0x133c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C1Cu;
        // 0x133c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c1c) {
            ctx->pc = 0x133C34u;
            goto label_133c34;
        }
    }
    ctx->pc = 0x133C24u;
    // 0x133c24: 0xc04b400  jal         func_12D000
    ctx->pc = 0x133C24u;
    SET_GPR_U32(ctx, 31, 0x133C2Cu);
    ctx->pc = 0x133C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C24u;
    // 0x133c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D000u, 0x133C24u, 0x133C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C2Cu;
label_133c2c:
    // 0x133c2c: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x133c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
    // 0x133c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133c34:
    // 0x133c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133c38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133c3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133c40: 0x3e00008  jr          $ra
    ctx->pc = 0x133C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C40u;
        // 0x133c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133C48u;
}
