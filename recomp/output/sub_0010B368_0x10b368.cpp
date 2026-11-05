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

// Function: sub_0010B368
// Address: 0x10b368 - 0x10b3c0
void sub_0010B368_0x10b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B368_0x10b368");
#endif

    switch (ctx->pc) {
        case 0x10b384u: goto label_10b384;
        case 0x10b3a0u: goto label_10b3a0;
        default: break;
    }

    ctx->pc = 0x10b368u;

    // 0x10b368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b37c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B37Cu;
    SET_GPR_U32(ctx, 31, 0x10B384u);
    ctx->pc = 0x10B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B37Cu;
    // 0x10b380: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B37Cu, 0x10B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B384u;
label_10b384:
    // 0x10b384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10b384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10b388: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b38c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10b38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b390: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10b390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b394: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10b398: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x10B398u;
    SET_GPR_U32(ctx, 31, 0x10B3A0u);
    ctx->pc = 0x10B39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B398u;
    // 0x10b39c: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x10B398u, 0x10B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3A0u;
label_10b3a0:
    // 0x10b3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b3a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b3a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b3a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10B3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3ACu;
        // 0x10b3b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B3B4u;
    // 0x10b3b4: 0x0  nop
    ctx->pc = 0x10b3b4u;
    // NOP
    // 0x10b3b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10b3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10b3bc: 0x0  nop
    ctx->pc = 0x10b3bcu;
    // NOP
    ctx->pc = 0x10b3c0u;
}
