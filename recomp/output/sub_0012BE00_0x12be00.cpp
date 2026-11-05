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

// Function: sub_0012BE00
// Address: 0x12be00 - 0x12be48
void sub_0012BE00_0x12be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BE00_0x12be00");
#endif

    switch (ctx->pc) {
        case 0x12be1cu: goto label_12be1c;
        case 0x12be2cu: goto label_12be2c;
        default: break;
    }

    ctx->pc = 0x12be00u;

    // 0x12be00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12be04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12be08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12be08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12be10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12be10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12be14: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x12BE14u;
    SET_GPR_U32(ctx, 31, 0x12BE1Cu);
    ctx->pc = 0x12BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE14u;
    // 0x12be18: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x12BE14u, 0x12BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE1Cu;
label_12be1c:
    // 0x12be1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12be1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12be20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be24: 0xc04b130  jal         func_12C4C0
    ctx->pc = 0x12BE24u;
    SET_GPR_U32(ctx, 31, 0x12BE2Cu);
    ctx->pc = 0x12BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE24u;
    // 0x12be28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C4C0u, 0x12BE24u, 0x12BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE2Cu;
label_12be2c:
    // 0x12be2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12be2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12be30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12be34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12be34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12be38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12be38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12be3c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE3Cu;
        // 0x12be40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BE44u;
    // 0x12be44: 0x0  nop
    ctx->pc = 0x12be44u;
    // NOP
    ctx->pc = 0x12be48u;
}
