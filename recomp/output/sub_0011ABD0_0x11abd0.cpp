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

// Function: sub_0011ABD0
// Address: 0x11abd0 - 0x11ac30
void sub_0011ABD0_0x11abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ABD0_0x11abd0");
#endif

    switch (ctx->pc) {
        case 0x11abf8u: goto label_11abf8;
        case 0x11ac04u: goto label_11ac04;
        default: break;
    }

    ctx->pc = 0x11abd0u;

    // 0x11abd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11abd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11abd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11abd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11abdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11abdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11abe4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x11abe4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11abe8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11abe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11abec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11abecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11abf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abf4: 0x0  nop
    ctx->pc = 0x11abf4u;
    // NOP
label_11abf8:
    // 0x11abf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abfc: 0xc046b0c  jal         func_11AC30
    ctx->pc = 0x11ABFCu;
    SET_GPR_U32(ctx, 31, 0x11AC04u);
    ctx->pc = 0x11AC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABFCu;
    // 0x11ac00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AC30u, 0x11ABFCu, 0x11AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC04u;
label_11ac04:
    // 0x11ac04: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x11ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ac08: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11ac08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11ac0c: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x11ac0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x11ac10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11AC10u;
    {
        const bool branch_taken_0x11ac10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC10u;
        // 0x11ac14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac10) {
            ctx->pc = 0x11ABF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11abf8;
        }
    }
    ctx->pc = 0x11AC18u;
    // 0x11ac18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ac18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ac1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11ac1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ac20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11ac20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ac24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11ac24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11ac28: 0x3e00008  jr          $ra
    ctx->pc = 0x11AC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC28u;
        // 0x11ac2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AC30u;
}
