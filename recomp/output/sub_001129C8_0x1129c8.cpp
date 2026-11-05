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

// Function: sub_001129C8
// Address: 0x1129c8 - 0x112a08
void sub_001129C8_0x1129c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001129C8_0x1129c8");
#endif

    switch (ctx->pc) {
        case 0x1129e4u: goto label_1129e4;
        case 0x1129f4u: goto label_1129f4;
        default: break;
    }

    ctx->pc = 0x1129c8u;

    // 0x1129c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1129c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1129cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1129ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1129d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1129d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1129d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1129d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1129d8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1129d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1129dc: 0xc041e1c  jal         func_107870
    ctx->pc = 0x1129DCu;
    SET_GPR_U32(ctx, 31, 0x1129E4u);
    ctx->pc = 0x1129E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129DCu;
    // 0x1129e0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107870u, 0x1129DCu, 0x1129E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129E4u;
label_1129e4:
    // 0x1129e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1129e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1129e8: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x1129e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x1129ec: 0xc05a7fa  jal         func_169FE8
    ctx->pc = 0x1129ECu;
    SET_GPR_U32(ctx, 31, 0x1129F4u);
    ctx->pc = 0x1129F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129ECu;
    // 0x1129f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169FE8u, 0x1129ECu, 0x1129F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129F4u;
label_1129f4:
    // 0x1129f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1129f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1129f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1129f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1129fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1129FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129FCu;
        // 0x112a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1129FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112A04u;
    // 0x112a04: 0x0  nop
    ctx->pc = 0x112a04u;
    // NOP
    ctx->pc = 0x112a08u;
}
