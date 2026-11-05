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

// Function: sub_0020A570
// Address: 0x20a570 - 0x20a5b8
void sub_0020A570_0x20a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A570_0x20a570");
#endif

    switch (ctx->pc) {
        case 0x20a598u: goto label_20a598;
        case 0x20a5a8u: goto label_20a5a8;
        default: break;
    }

    ctx->pc = 0x20a570u;

    // 0x20a570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20a578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20a57c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a580: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20a584: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x20a584u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x20a588: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A588u;
    {
        const bool branch_taken_0x20a588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a588) {
            ctx->pc = 0x20A5A0u;
            goto label_20a5a0;
        }
    }
    ctx->pc = 0x20A590u;
    // 0x20a590: 0xc0e1294  jal         func_384A50
    ctx->pc = 0x20A590u;
    SET_GPR_U32(ctx, 31, 0x20A598u);
    ctx->pc = 0x384A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A50u, 0x20A590u, 0x20A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A598u;
label_20a598:
    // 0x20a598: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20a598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a59c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_20a5a0:
    // 0x20a5a0: 0xc0e11d0  jal         func_384740
    ctx->pc = 0x20A5A0u;
    SET_GPR_U32(ctx, 31, 0x20A5A8u);
    ctx->pc = 0x384740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384740u, 0x20A5A0u, 0x20A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5A8u;
label_20a5a8:
    // 0x20a5a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a5ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20a5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x20A5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5B0u;
        // 0x20a5b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A5B8u;
}
