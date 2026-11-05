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

// Function: sub_002ABA68
// Address: 0x2aba68 - 0x2abac0
void sub_002ABA68_0x2aba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABA68_0x2aba68");
#endif

    switch (ctx->pc) {
        case 0x2aba88u: goto label_2aba88;
        case 0x2aba98u: goto label_2aba98;
        case 0x2abaa4u: goto label_2abaa4;
        default: break;
    }

    ctx->pc = 0x2aba68u;

    // 0x2aba68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aba68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aba6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aba70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aba70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2aba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2aba78: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x2aba78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2aba7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aba80: 0xc0ab348  jal         func_2ACD20
    ctx->pc = 0x2ABA80u;
    SET_GPR_U32(ctx, 31, 0x2ABA88u);
    ctx->pc = 0x2ABA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA80u;
    // 0x2aba84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD20u, 0x2ABA80u, 0x2ABA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA88u;
label_2aba88:
    // 0x2aba88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABA88u;
    {
        const bool branch_taken_0x2aba88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA88u;
        // 0x2aba8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba88) {
            ctx->pc = 0x2ABA9Cu;
            goto label_2aba9c;
        }
    }
    ctx->pc = 0x2ABA90u;
    // 0x2aba90: 0xc0ab39e  jal         func_2ACE78
    ctx->pc = 0x2ABA90u;
    SET_GPR_U32(ctx, 31, 0x2ABA98u);
    ctx->pc = 0x2ABA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA90u;
    // 0x2aba94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE78u, 0x2ABA90u, 0x2ABA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA98u;
label_2aba98:
    // 0x2aba98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aba98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aba9c:
    // 0x2aba9c: 0xc0f8d8e  jal         func_3E3638
    ctx->pc = 0x2ABA9Cu;
    SET_GPR_U32(ctx, 31, 0x2ABAA4u);
    ctx->pc = 0x2ABAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA9Cu;
    // 0x2abaa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3638u, 0x2ABA9Cu, 0x2ABAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABAA4u;
label_2abaa4:
    // 0x2abaa4: 0xa6000028  sh          $zero, 0x28($s0)
    ctx->pc = 0x2abaa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abaa8: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x2abaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abaac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2abaacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2abab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2abab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2abab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAB8u;
        // 0x2ababc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABAC0u;
}
