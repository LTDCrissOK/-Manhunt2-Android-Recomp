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

// Function: sub_0010AFB0
// Address: 0x10afb0 - 0x10aff8
void sub_0010AFB0_0x10afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AFB0_0x10afb0");
#endif

    switch (ctx->pc) {
        case 0x10afccu: goto label_10afcc;
        case 0x10afe4u: goto label_10afe4;
        default: break;
    }

    ctx->pc = 0x10afb0u;

    // 0x10afb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10afb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10afb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10afb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10afbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10afbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10afc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10afc4: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AFC4u;
    SET_GPR_U32(ctx, 31, 0x10AFCCu);
    ctx->pc = 0x10AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AFC4u;
    // 0x10afc8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AFC4u, 0x10AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFCCu;
label_10afcc:
    // 0x10afcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10afccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10afd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10afd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10afd4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10afd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10afd8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10afdc: 0xc0442c0  jal         func_110B00
    ctx->pc = 0x10AFDCu;
    SET_GPR_U32(ctx, 31, 0x10AFE4u);
    ctx->pc = 0x10AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AFDCu;
    // 0x10afe0: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B00u, 0x10AFDCu, 0x10AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFE4u;
label_10afe4:
    // 0x10afe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10afe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10afe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10afe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10afec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10afecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aff0: 0x3e00008  jr          $ra
    ctx->pc = 0x10AFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFF0u;
        // 0x10aff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AFF8u;
}
