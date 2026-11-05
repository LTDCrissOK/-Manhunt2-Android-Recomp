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

// Function: sub_003384F0
// Address: 0x3384f0 - 0x338530
void sub_003384F0_0x3384f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003384F0_0x3384f0");
#endif

    switch (ctx->pc) {
        case 0x338520u: goto label_338520;
        default: break;
    }

    ctx->pc = 0x3384f0u;

    // 0x3384f0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3384f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3384f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3384f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3384f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3384fc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x3384fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338500: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x338500u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338504: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x338504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x338508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33850c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33850cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338510: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x338510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x338514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x338514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338518: 0xc0ce14c  jal         func_338530
    ctx->pc = 0x338518u;
    SET_GPR_U32(ctx, 31, 0x338520u);
    ctx->pc = 0x33851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338518u;
    // 0x33851c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338530u, 0x338518u, 0x338520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338520u;
label_338520:
    // 0x338520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338524: 0x3e00008  jr          $ra
    ctx->pc = 0x338524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338524u;
        // 0x338528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33852Cu;
    // 0x33852c: 0x0  nop
    ctx->pc = 0x33852cu;
    // NOP
    ctx->pc = 0x338530u;
}
