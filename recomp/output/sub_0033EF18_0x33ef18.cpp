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

// Function: sub_0033EF18
// Address: 0x33ef18 - 0x33ef80
void sub_0033EF18_0x33ef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EF18_0x33ef18");
#endif

    switch (ctx->pc) {
        case 0x33ef40u: goto label_33ef40;
        case 0x33ef50u: goto label_33ef50;
        case 0x33ef60u: goto label_33ef60;
        default: break;
    }

    ctx->pc = 0x33ef18u;

    // 0x33ef18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33ef1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33ef20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33ef20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33ef24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ef24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33ef2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33ef2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33ef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33ef34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33ef34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef38: 0xc0c49d2  jal         func_312748
    ctx->pc = 0x33EF38u;
    SET_GPR_U32(ctx, 31, 0x33EF40u);
    ctx->pc = 0x33EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EF38u;
    // 0x33ef3c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x33EF38u, 0x33EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF40u;
label_33ef40:
    // 0x33ef40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33ef40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef44: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x33ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33ef48: 0xc0c51f8  jal         func_3147E0
    ctx->pc = 0x33EF48u;
    SET_GPR_U32(ctx, 31, 0x33EF50u);
    ctx->pc = 0x33EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EF48u;
    // 0x33ef4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3147E0u, 0x33EF48u, 0x33EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF50u;
label_33ef50:
    // 0x33ef50: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x33ef50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33ef54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33ef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef58: 0xc0c52a4  jal         func_314A90
    ctx->pc = 0x33EF58u;
    SET_GPR_U32(ctx, 31, 0x33EF60u);
    ctx->pc = 0x33EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EF58u;
    // 0x33ef5c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314A90u, 0x33EF58u, 0x33EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF60u;
label_33ef60:
    // 0x33ef60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33ef60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33ef64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ef68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ef68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ef6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ef6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ef70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33ef70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ef74: 0x3e00008  jr          $ra
    ctx->pc = 0x33EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF74u;
        // 0x33ef78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EF7Cu;
    // 0x33ef7c: 0x0  nop
    ctx->pc = 0x33ef7cu;
    // NOP
    ctx->pc = 0x33ef80u;
}
