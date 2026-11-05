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

// Function: sub_003E80E0
// Address: 0x3e80e0 - 0x3e8128
void sub_003E80E0_0x3e80e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E80E0_0x3e80e0");
#endif

    switch (ctx->pc) {
        case 0x3e8104u: goto label_3e8104;
        case 0x3e8110u: goto label_3e8110;
        default: break;
    }

    ctx->pc = 0x3e80e0u;

    // 0x3e80e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e80e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e80e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e80e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e80e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e80e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e80ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e80ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e80f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e80f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e80f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e80f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e80f8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e80fc: 0xc0b005e  jal         func_2C0178
    ctx->pc = 0x3E80FCu;
    SET_GPR_U32(ctx, 31, 0x3E8104u);
    ctx->pc = 0x3E8100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E80FCu;
    // 0x3e8100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0178u, 0x3E80FCu, 0x3E8104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8104u;
label_3e8104:
    // 0x3e8104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8108: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E8108u;
    SET_GPR_U32(ctx, 31, 0x3E8110u);
    ctx->pc = 0x3E810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8108u;
    // 0x3e810c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E8108u, 0x3E8110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8110u;
label_3e8110:
    // 0x3e8110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e8110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e8114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e8118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e811c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E811Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E811Cu;
        // 0x3e8120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E811Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8124u;
    // 0x3e8124: 0x0  nop
    ctx->pc = 0x3e8124u;
    // NOP
    ctx->pc = 0x3e8128u;
}
