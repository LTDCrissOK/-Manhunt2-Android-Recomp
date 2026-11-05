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

// Function: sub_0035D578
// Address: 0x35d578 - 0x35d5b0
void sub_0035D578_0x35d578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D578_0x35d578");
#endif

    switch (ctx->pc) {
        case 0x35d598u: goto label_35d598;
        default: break;
    }

    ctx->pc = 0x35d578u;

    // 0x35d578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d57c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35d57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35d580: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x35d580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d588: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x35d588u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x35d58c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35d58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35d590: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x35D590u;
    SET_GPR_U32(ctx, 31, 0x35D598u);
    ctx->pc = 0x35D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D590u;
    // 0x35d594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x35D590u, 0x35D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D598u;
label_35d598:
    // 0x35d598: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35d598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d59c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35d59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d5a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35d5a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x35D5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D5A4u;
        // 0x35d5a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D5ACu;
    // 0x35d5ac: 0x0  nop
    ctx->pc = 0x35d5acu;
    // NOP
    ctx->pc = 0x35d5b0u;
}
