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

// Function: sub_00131D00
// Address: 0x131d00 - 0x131d58
void sub_00131D00_0x131d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131D00_0x131d00");
#endif

    switch (ctx->pc) {
        case 0x131d18u: goto label_131d18;
        case 0x131d34u: goto label_131d34;
        default: break;
    }

    ctx->pc = 0x131d00u;

    // 0x131d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131d08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131d0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131d10: 0xc04c9cc  jal         func_132730
    ctx->pc = 0x131D10u;
    SET_GPR_U32(ctx, 31, 0x131D18u);
    ctx->pc = 0x131D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131D10u;
    // 0x131d14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132730u, 0x131D10u, 0x131D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D18u;
label_131d18:
    // 0x131d18: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x131d18u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x131d1c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x131d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x131d20: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x131d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x131d24: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x131D24u;
    {
        const bool branch_taken_0x131d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D24u;
        // 0x131d28: 0x2111821  addu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d24) {
            ctx->pc = 0x131D38u;
            goto label_131d38;
        }
    }
    ctx->pc = 0x131D2Cu;
    // 0x131d2c: 0xc04b3f0  jal         func_12CFC0
    ctx->pc = 0x131D2Cu;
    SET_GPR_U32(ctx, 31, 0x131D34u);
    ctx->pc = 0x131D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131D2Cu;
    // 0x131d30: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CFC0u, 0x131D2Cu, 0x131D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D34u;
label_131d34:
    // 0x131d34: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x131d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_131d38:
    // 0x131d38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x131d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x131d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x131d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131d48: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x131d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x131d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x131D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D4Cu;
        // 0x131d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131D54u;
    // 0x131d54: 0x0  nop
    ctx->pc = 0x131d54u;
    // NOP
    ctx->pc = 0x131d58u;
}
