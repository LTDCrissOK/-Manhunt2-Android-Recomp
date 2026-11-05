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

// Function: sub_00116F10
// Address: 0x116f10 - 0x116f60
void sub_00116F10_0x116f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116F10_0x116f10");
#endif

    switch (ctx->pc) {
        case 0x116f34u: goto label_116f34;
        case 0x116f3cu: goto label_116f3c;
        case 0x116f44u: goto label_116f44;
        case 0x116f4cu: goto label_116f4c;
        default: break;
    }

    ctx->pc = 0x116f10u;

    // 0x116f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116f1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x116f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x116f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f24: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x116f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x116f28: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x116f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x116f2c: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x116F2Cu;
    SET_GPR_U32(ctx, 31, 0x116F34u);
    ctx->pc = 0x116F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F2Cu;
    // 0x116f30: 0xa2020021  sb          $v0, 0x21($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x116F2Cu, 0x116F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F34u;
label_116f34:
    // 0x116f34: 0xc0821de  jal         func_208778
    ctx->pc = 0x116F34u;
    SET_GPR_U32(ctx, 31, 0x116F3Cu);
    ctx->pc = 0x116F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F34u;
    // 0x116f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208778u, 0x116F34u, 0x116F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F3Cu;
label_116f3c:
    // 0x116f3c: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x116F3Cu;
    SET_GPR_U32(ctx, 31, 0x116F44u);
    ctx->pc = 0x116F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F3Cu;
    // 0x116f40: 0xa2020020  sb          $v0, 0x20($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x116F3Cu, 0x116F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F44u;
label_116f44:
    // 0x116f44: 0xc0821e2  jal         func_208788
    ctx->pc = 0x116F44u;
    SET_GPR_U32(ctx, 31, 0x116F4Cu);
    ctx->pc = 0x116F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F44u;
    // 0x116f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208788u, 0x116F44u, 0x116F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F4Cu;
label_116f4c:
    // 0x116f4c: 0xa2020023  sb          $v0, 0x23($s0)
    ctx->pc = 0x116f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x116f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116f54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x116f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116f58: 0x3e00008  jr          $ra
    ctx->pc = 0x116F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F58u;
        // 0x116f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116F60u;
}
