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

// Function: sub_00130078
// Address: 0x130078 - 0x1300c8
void sub_00130078_0x130078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130078_0x130078");
#endif

    switch (ctx->pc) {
        case 0x13009cu: goto label_13009c;
        case 0x1300a4u: goto label_1300a4;
        case 0x1300acu: goto label_1300ac;
        case 0x1300b4u: goto label_1300b4;
        default: break;
    }

    ctx->pc = 0x130078u;

    // 0x130078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13007c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13007cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130080: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x130080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x130084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130088: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x130088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13008c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13008Cu;
    {
        const bool branch_taken_0x13008c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13008c) {
            ctx->pc = 0x130090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13008Cu;
            // 0x130090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1300BCu;
            goto label_1300bc;
        }
    }
    ctx->pc = 0x130094u;
    // 0x130094: 0xc04c4dc  jal         func_131370
    ctx->pc = 0x130094u;
    SET_GPR_U32(ctx, 31, 0x13009Cu);
    ctx->pc = 0x131370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131370u, 0x130094u, 0x13009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13009Cu;
label_13009c:
    // 0x13009c: 0xc04c4dc  jal         func_131370
    ctx->pc = 0x13009Cu;
    SET_GPR_U32(ctx, 31, 0x1300A4u);
    ctx->pc = 0x1300A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13009Cu;
    // 0x1300a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131370u, 0x13009Cu, 0x1300A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300A4u;
label_1300a4:
    // 0x1300a4: 0xc04c58a  jal         func_131628
    ctx->pc = 0x1300A4u;
    SET_GPR_U32(ctx, 31, 0x1300ACu);
    ctx->pc = 0x1300A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300A4u;
    // 0x1300a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131628u, 0x1300A4u, 0x1300ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300ACu;
label_1300ac:
    // 0x1300ac: 0xc04c5b8  jal         func_1316E0
    ctx->pc = 0x1300ACu;
    SET_GPR_U32(ctx, 31, 0x1300B4u);
    ctx->pc = 0x1300B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300ACu;
    // 0x1300b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316E0u, 0x1300ACu, 0x1300B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300B4u;
label_1300b4:
    // 0x1300b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1300b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1300b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1300b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1300bc:
    // 0x1300bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1300bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1300c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1300C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1300C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300C0u;
        // 0x1300c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1300C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1300C8u;
}
