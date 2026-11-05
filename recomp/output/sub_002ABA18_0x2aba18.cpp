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

// Function: sub_002ABA18
// Address: 0x2aba18 - 0x2aba68
void sub_002ABA18_0x2aba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABA18_0x2aba18");
#endif

    switch (ctx->pc) {
        case 0x2aba38u: goto label_2aba38;
        case 0x2aba48u: goto label_2aba48;
        default: break;
    }

    ctx->pc = 0x2aba18u;

    // 0x2aba18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aba18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aba1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aba20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aba20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2aba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2aba28: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x2aba28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2aba2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aba30: 0xc0ab348  jal         func_2ACD20
    ctx->pc = 0x2ABA30u;
    SET_GPR_U32(ctx, 31, 0x2ABA38u);
    ctx->pc = 0x2ABA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA30u;
    // 0x2aba34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD20u, 0x2ABA30u, 0x2ABA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA38u;
label_2aba38:
    // 0x2aba38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABA38u;
    {
        const bool branch_taken_0x2aba38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aba38) {
            ctx->pc = 0x2ABA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABA38u;
            // 0x2aba3c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABA4Cu;
            goto label_2aba4c;
        }
    }
    ctx->pc = 0x2ABA40u;
    // 0x2aba40: 0xc0ab39e  jal         func_2ACE78
    ctx->pc = 0x2ABA40u;
    SET_GPR_U32(ctx, 31, 0x2ABA48u);
    ctx->pc = 0x2ABA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA40u;
    // 0x2aba44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE78u, 0x2ABA40u, 0x2ABA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA48u;
label_2aba48:
    // 0x2aba48: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2aba48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2aba4c:
    // 0x2aba4c: 0xa6000048  sh          $zero, 0x48($s0)
    ctx->pc = 0x2aba4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aba50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aba50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aba54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2aba54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aba58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aba58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aba5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA5Cu;
        // 0x2aba60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABA64u;
    // 0x2aba64: 0x0  nop
    ctx->pc = 0x2aba64u;
    // NOP
    ctx->pc = 0x2aba68u;
}
