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

// Function: sub_0039BDC8
// Address: 0x39bdc8 - 0x39be00
void sub_0039BDC8_0x39bdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BDC8_0x39bdc8");
#endif

    switch (ctx->pc) {
        case 0x39bddcu: goto label_39bddc;
        case 0x39bde4u: goto label_39bde4;
        case 0x39bdecu: goto label_39bdec;
        default: break;
    }

    ctx->pc = 0x39bdc8u;

    // 0x39bdc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39bdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39bdcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39bdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39bdd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39bdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39bdd4: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39BDD4u;
    SET_GPR_U32(ctx, 31, 0x39BDDCu);
    ctx->pc = 0x39BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BDD4u;
    // 0x39bdd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39BDD4u, 0x39BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BDDCu;
label_39bddc:
    // 0x39bddc: 0xc0e6f80  jal         func_39BE00
    ctx->pc = 0x39BDDCu;
    SET_GPR_U32(ctx, 31, 0x39BDE4u);
    ctx->pc = 0x39BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BDDCu;
    // 0x39bde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE00u, 0x39BDDCu, 0x39BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BDE4u;
label_39bde4:
    // 0x39bde4: 0xc0ebe5e  jal         func_3AF978
    ctx->pc = 0x39BDE4u;
    SET_GPR_U32(ctx, 31, 0x39BDECu);
    ctx->pc = 0x39BDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BDE4u;
    // 0x39bde8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF978u, 0x39BDE4u, 0x39BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BDECu;
label_39bdec:
    // 0x39bdec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39bdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39bdf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39bdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bdf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39bdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x39BDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDF8u;
        // 0x39bdfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BE00u;
}
