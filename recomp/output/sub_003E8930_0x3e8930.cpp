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

// Function: sub_003E8930
// Address: 0x3e8930 - 0x3e8978
void sub_003E8930_0x3e8930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8930_0x3e8930");
#endif

    switch (ctx->pc) {
        case 0x3e8954u: goto label_3e8954;
        case 0x3e8960u: goto label_3e8960;
        default: break;
    }

    ctx->pc = 0x3e8930u;

    // 0x3e8930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e8934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e8934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e8938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e8938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e893c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e893cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8940: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e8940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e8944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e8948: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e8948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e894c: 0xc0b005e  jal         func_2C0178
    ctx->pc = 0x3E894Cu;
    SET_GPR_U32(ctx, 31, 0x3E8954u);
    ctx->pc = 0x3E8950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E894Cu;
    // 0x3e8950: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0178u, 0x3E894Cu, 0x3E8954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8954u;
label_3e8954:
    // 0x3e8954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8958: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E8958u;
    SET_GPR_U32(ctx, 31, 0x3E8960u);
    ctx->pc = 0x3E895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8958u;
    // 0x3e895c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E8958u, 0x3E8960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8960u;
label_3e8960:
    // 0x3e8960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e8960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e8964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e8968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e896c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E896Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E896Cu;
        // 0x3e8970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E896Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8974u;
    // 0x3e8974: 0x0  nop
    ctx->pc = 0x3e8974u;
    // NOP
    ctx->pc = 0x3e8978u;
}
