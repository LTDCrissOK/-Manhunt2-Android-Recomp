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

// Function: sub_0010A4C8
// Address: 0x10a4c8 - 0x10a510
void sub_0010A4C8_0x10a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A4C8_0x10a4c8");
#endif

    switch (ctx->pc) {
        case 0x10a4e8u: goto label_10a4e8;
        case 0x10a4fcu: goto label_10a4fc;
        default: break;
    }

    ctx->pc = 0x10a4c8u;

    // 0x10a4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a4cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a4d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a4d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a4dc: 0x8cb100f8  lw          $s1, 0xF8($a1)
    ctx->pc = 0x10a4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x10a4e0: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A4E0u;
    SET_GPR_U32(ctx, 31, 0x10A4E8u);
    ctx->pc = 0x10A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4E0u;
    // 0x10a4e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A4E0u, 0x10A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4E8u;
label_10a4e8:
    // 0x10a4e8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x10a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10a4ec: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A4ECu;
    {
        const bool branch_taken_0x10a4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4ECu;
        // 0x10a4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4ec) {
            ctx->pc = 0x10A4FCu;
            goto label_10a4fc;
        }
    }
    ctx->pc = 0x10A4F4u;
    // 0x10a4f4: 0xc042550  jal         func_109540
    ctx->pc = 0x10A4F4u;
    SET_GPR_U32(ctx, 31, 0x10A4FCu);
    ctx->pc = 0x10A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4F4u;
    // 0x10a4f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109540u, 0x10A4F4u, 0x10A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4FCu;
label_10a4fc:
    // 0x10a4fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a500: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a508: 0x3e00008  jr          $ra
    ctx->pc = 0x10A508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A508u;
        // 0x10a50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A510u;
}
