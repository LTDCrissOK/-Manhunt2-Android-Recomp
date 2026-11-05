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

// Function: sub_0012B6A8
// Address: 0x12b6a8 - 0x12b6f8
void sub_0012B6A8_0x12b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B6A8_0x12b6a8");
#endif

    switch (ctx->pc) {
        case 0x12b6ccu: goto label_12b6cc;
        case 0x12b6dcu: goto label_12b6dc;
        default: break;
    }

    ctx->pc = 0x12b6a8u;

    // 0x12b6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b6ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b6b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b6b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12b6bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12b6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12b6c4: 0xc04b252  jal         func_12C948
    ctx->pc = 0x12B6C4u;
    SET_GPR_U32(ctx, 31, 0x12B6CCu);
    ctx->pc = 0x12B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B6C4u;
    // 0x12b6c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C948u, 0x12B6C4u, 0x12B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6CCu;
label_12b6cc:
    // 0x12b6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6d4: 0xc04b1f2  jal         func_12C7C8
    ctx->pc = 0x12B6D4u;
    SET_GPR_U32(ctx, 31, 0x12B6DCu);
    ctx->pc = 0x12B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B6D4u;
    // 0x12b6d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C7C8u, 0x12B6D4u, 0x12B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6DCu;
label_12b6dc:
    // 0x12b6dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b6e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b6e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b6e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12b6e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b6e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12b6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6ECu;
        // 0x12b6f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B6F4u;
    // 0x12b6f4: 0x0  nop
    ctx->pc = 0x12b6f4u;
    // NOP
    ctx->pc = 0x12b6f8u;
}
