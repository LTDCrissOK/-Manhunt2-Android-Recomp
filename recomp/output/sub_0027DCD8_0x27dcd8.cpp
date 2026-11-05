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

// Function: sub_0027DCD8
// Address: 0x27dcd8 - 0x27dd38
void sub_0027DCD8_0x27dcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DCD8_0x27dcd8");
#endif

    switch (ctx->pc) {
        case 0x27dd00u: goto label_27dd00;
        case 0x27dd0cu: goto label_27dd0c;
        default: break;
    }

    ctx->pc = 0x27dcd8u;

    // 0x27dcd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27dcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27dcdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27dcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27dce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27dce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27dce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27dce8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27dcec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x27dcecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27dcf0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27DCF0u;
    {
        const bool branch_taken_0x27dcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCF0u;
        // 0x27dcf4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcf0) {
            ctx->pc = 0x27DD1Cu;
            goto label_27dd1c;
        }
    }
    ctx->pc = 0x27DCF8u;
    // 0x27dcf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27dcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dcfc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x27dcfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dd00:
    // 0x27dd00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27dd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd04: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x27DD04u;
    SET_GPR_U32(ctx, 31, 0x27DD0Cu);
    ctx->pc = 0x27DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD04u;
    // 0x27dd08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x27DD04u, 0x27DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD0Cu;
label_27dd0c:
    // 0x27dd0c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x27dd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x27dd10: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x27dd10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27dd14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27DD14u;
    {
        const bool branch_taken_0x27dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD14u;
        // 0x27dd18: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd14) {
            ctx->pc = 0x27DD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dd00;
        }
    }
    ctx->pc = 0x27DD1Cu;
label_27dd1c:
    // 0x27dd1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27dd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dd20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27dd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27dd24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27dd24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dd28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27dd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27dd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x27DD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD2Cu;
        // 0x27dd30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DD34u;
    // 0x27dd34: 0x0  nop
    ctx->pc = 0x27dd34u;
    // NOP
    ctx->pc = 0x27dd38u;
}
