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

// Function: sub_003E8048
// Address: 0x3e8048 - 0x3e8090
void sub_003E8048_0x3e8048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8048_0x3e8048");
#endif

    switch (ctx->pc) {
        case 0x3e806cu: goto label_3e806c;
        case 0x3e8078u: goto label_3e8078;
        default: break;
    }

    ctx->pc = 0x3e8048u;

    // 0x3e8048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e804c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e804cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e8050: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e8050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e8054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e8058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e805c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e8060: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e8060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e8064: 0xc0b0336  jal         func_2C0CD8
    ctx->pc = 0x3E8064u;
    SET_GPR_U32(ctx, 31, 0x3E806Cu);
    ctx->pc = 0x3E8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8064u;
    // 0x3e8068: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0CD8u, 0x3E8064u, 0x3E806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E806Cu;
label_3e806c:
    // 0x3e806c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e806cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8070: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E8070u;
    SET_GPR_U32(ctx, 31, 0x3E8078u);
    ctx->pc = 0x3E8074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8070u;
    // 0x3e8074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E8070u, 0x3E8078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8078u;
label_3e8078:
    // 0x3e8078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e8078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e807c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e807cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e8080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8084: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8084u;
        // 0x3e8088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E808Cu;
    // 0x3e808c: 0x0  nop
    ctx->pc = 0x3e808cu;
    // NOP
    ctx->pc = 0x3e8090u;
}
