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

// Function: sub_001CFBE0
// Address: 0x1cfbe0 - 0x1cfc18
void sub_001CFBE0_0x1cfbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFBE0_0x1cfbe0");
#endif

    switch (ctx->pc) {
        case 0x1cfbfcu: goto label_1cfbfc;
        default: break;
    }

    ctx->pc = 0x1cfbe0u;

    // 0x1cfbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfbe4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cfbe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfbe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfbec: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1cfbecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1cfbf0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1cfbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1cfbf4: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1CFBF4u;
    SET_GPR_U32(ctx, 31, 0x1CFBFCu);
    ctx->pc = 0x1CFBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBF4u;
    // 0x1cfbf8: 0xa462002a  sh          $v0, 0x2A($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1CFBF4u, 0x1CFBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBFCu;
label_1cfbfc:
    // 0x1cfbfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfc00: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC00u;
        // 0x1cfc04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFC08u;
    // 0x1cfc08: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x1cfc08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1cfc0c: 0x0  nop
    ctx->pc = 0x1cfc0cu;
    // NOP
    // 0x1cfc10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1cfc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cfc14: 0x0  nop
    ctx->pc = 0x1cfc14u;
    // NOP
    ctx->pc = 0x1cfc18u;
}
