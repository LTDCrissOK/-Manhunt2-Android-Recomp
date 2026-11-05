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

// Function: sub_002DDC30
// Address: 0x2ddc30 - 0x2ddc90
void sub_002DDC30_0x2ddc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDC30_0x2ddc30");
#endif

    switch (ctx->pc) {
        case 0x2ddc5cu: goto label_2ddc5c;
        case 0x2ddc70u: goto label_2ddc70;
        default: break;
    }

    ctx->pc = 0x2ddc30u;

    // 0x2ddc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ddc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ddc34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddc38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ddc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ddc3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ddc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ddc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ddc44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ddc44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ddc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ddc4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ddc4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ddc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ddc54: 0xc0b71e0  jal         func_2DC780
    ctx->pc = 0x2DDC54u;
    SET_GPR_U32(ctx, 31, 0x2DDC5Cu);
    ctx->pc = 0x2DDC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC54u;
    // 0x2ddc58: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC780u, 0x2DDC54u, 0x2DDC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC5Cu;
label_2ddc5c:
    // 0x2ddc5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ddc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ddc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ddc64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc68: 0xc0b7724  jal         func_2DDC90
    ctx->pc = 0x2DDC68u;
    SET_GPR_U32(ctx, 31, 0x2DDC70u);
    ctx->pc = 0x2DDC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC68u;
    // 0x2ddc6c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC90u, 0x2DDC68u, 0x2DDC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC70u;
label_2ddc70:
    // 0x2ddc70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddc70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddc74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ddc74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddc78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ddc78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddc7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ddc7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ddc80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ddc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddc84: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC84u;
        // 0x2ddc88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDC8Cu;
    // 0x2ddc8c: 0x0  nop
    ctx->pc = 0x2ddc8cu;
    // NOP
    ctx->pc = 0x2ddc90u;
}
