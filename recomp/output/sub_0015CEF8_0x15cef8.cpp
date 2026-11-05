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

// Function: sub_0015CEF8
// Address: 0x15cef8 - 0x15cf40
void sub_0015CEF8_0x15cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CEF8_0x15cef8");
#endif

    switch (ctx->pc) {
        case 0x15cf18u: goto label_15cf18;
        case 0x15cf24u: goto label_15cf24;
        default: break;
    }

    ctx->pc = 0x15cef8u;

    // 0x15cef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15cef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15cefc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15cefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15cf00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15cf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15cf04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15cf04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf08: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x15cf08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15cf0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15cf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15cf10: 0xc056f44  jal         func_15BD10
    ctx->pc = 0x15CF10u;
    SET_GPR_U32(ctx, 31, 0x15CF18u);
    ctx->pc = 0x15CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF10u;
    // 0x15cf14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BD10u, 0x15CF10u, 0x15CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF18u;
label_15cf18:
    // 0x15cf18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15cf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf1c: 0xc0573a2  jal         func_15CE88
    ctx->pc = 0x15CF1Cu;
    SET_GPR_U32(ctx, 31, 0x15CF24u);
    ctx->pc = 0x15CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF1Cu;
    // 0x15cf20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CE88u, 0x15CF1Cu, 0x15CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF24u;
label_15cf24:
    // 0x15cf24: 0xae000b70  sw          $zero, 0xB70($s0)
    ctx->pc = 0x15cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2928), GPR_U32(ctx, 0));
    // 0x15cf28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15cf28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cf2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15cf2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15cf30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15cf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cf34: 0x3e00008  jr          $ra
    ctx->pc = 0x15CF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF34u;
        // 0x15cf38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CF3Cu;
    // 0x15cf3c: 0x0  nop
    ctx->pc = 0x15cf3cu;
    // NOP
    ctx->pc = 0x15cf40u;
}
