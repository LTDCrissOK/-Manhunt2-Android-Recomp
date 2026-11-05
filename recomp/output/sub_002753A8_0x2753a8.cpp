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

// Function: sub_002753A8
// Address: 0x2753a8 - 0x2753f0
void sub_002753A8_0x2753a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002753A8_0x2753a8");
#endif

    switch (ctx->pc) {
        case 0x2753ccu: goto label_2753cc;
        case 0x2753d8u: goto label_2753d8;
        default: break;
    }

    ctx->pc = 0x2753a8u;

    // 0x2753a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2753a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2753ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2753acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2753b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2753b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2753b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2753b8: 0x24900230  addiu       $s0, $a0, 0x230
    ctx->pc = 0x2753b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
    // 0x2753bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2753bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2753c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2753c4: 0xc09cb60  jal         func_272D80
    ctx->pc = 0x2753C4u;
    SET_GPR_U32(ctx, 31, 0x2753CCu);
    ctx->pc = 0x2753C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2753C4u;
    // 0x2753c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272D80u, 0x2753C4u, 0x2753CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753CCu;
label_2753cc:
    // 0x2753cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2753ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753d0: 0xc09ca70  jal         func_2729C0
    ctx->pc = 0x2753D0u;
    SET_GPR_U32(ctx, 31, 0x2753D8u);
    ctx->pc = 0x2753D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2753D0u;
    // 0x2753d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2729C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2729C0u, 0x2753D0u, 0x2753D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753D8u;
label_2753d8:
    // 0x2753d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2753d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2753dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2753dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2753e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2753e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2753e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2753E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2753E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753E4u;
        // 0x2753e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2753E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2753ECu;
    // 0x2753ec: 0x0  nop
    ctx->pc = 0x2753ecu;
    // NOP
    ctx->pc = 0x2753f0u;
}
