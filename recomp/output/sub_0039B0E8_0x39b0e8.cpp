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

// Function: sub_0039B0E8
// Address: 0x39b0e8 - 0x39b130
void sub_0039B0E8_0x39b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B0E8_0x39b0e8");
#endif

    switch (ctx->pc) {
        case 0x39b104u: goto label_39b104;
        case 0x39b110u: goto label_39b110;
        case 0x39b118u: goto label_39b118;
        default: break;
    }

    ctx->pc = 0x39b0e8u;

    // 0x39b0e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39b0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b0f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b0f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39b0f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39b0fc: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39B0FCu;
    SET_GPR_U32(ctx, 31, 0x39B104u);
    ctx->pc = 0x39B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B0FCu;
    // 0x39b100: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39B0FCu, 0x39B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B104u;
label_39b104:
    // 0x39b104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b108: 0xc0e6c4c  jal         func_39B130
    ctx->pc = 0x39B108u;
    SET_GPR_U32(ctx, 31, 0x39B110u);
    ctx->pc = 0x39B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B108u;
    // 0x39b10c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B130u, 0x39B108u, 0x39B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B110u;
label_39b110:
    // 0x39b110: 0xc0ebe5e  jal         func_3AF978
    ctx->pc = 0x39B110u;
    SET_GPR_U32(ctx, 31, 0x39B118u);
    ctx->pc = 0x39B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B110u;
    // 0x39b114: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF978u, 0x39B110u, 0x39B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B118u;
label_39b118:
    // 0x39b118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b11c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39b11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b128: 0x3e00008  jr          $ra
    ctx->pc = 0x39B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B128u;
        // 0x39b12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B130u;
}
