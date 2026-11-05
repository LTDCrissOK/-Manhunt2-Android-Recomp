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

// Function: sub_0039F730
// Address: 0x39f730 - 0x39f770
void sub_0039F730_0x39f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F730_0x39f730");
#endif

    switch (ctx->pc) {
        case 0x39f748u: goto label_39f748;
        default: break;
    }

    ctx->pc = 0x39f730u;

    // 0x39f730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39f730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39f734: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39F734u;
    {
        const bool branch_taken_0x39f734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F734u;
        // 0x39f738: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f734) {
            ctx->pc = 0x39F750u;
            goto label_39f750;
        }
    }
    ctx->pc = 0x39F73Cu;
    // 0x39f73c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39f740: 0xc0ecbf4  jal         func_3B2FD0
    ctx->pc = 0x39F740u;
    SET_GPR_U32(ctx, 31, 0x39F748u);
    ctx->pc = 0x39F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F740u;
    // 0x39f744: 0x2484bf48  addiu       $a0, $a0, -0x40B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FD0u, 0x39F740u, 0x39F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F748u;
label_39f748:
    // 0x39f748: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39F748u;
    {
        const bool branch_taken_0x39f748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F748u;
        // 0x39f74c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f748) {
            ctx->pc = 0x39F754u;
            goto label_39f754;
        }
    }
    ctx->pc = 0x39F750u;
label_39f750:
    // 0x39f750: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x39f750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_39f754:
    // 0x39f754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39f754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f758: 0x3e00008  jr          $ra
    ctx->pc = 0x39F758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F758u;
        // 0x39f75c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F760u;
    // 0x39f760: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f764: 0x0  nop
    ctx->pc = 0x39f764u;
    // NOP
    // 0x39f768: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x39f768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39f76c: 0x0  nop
    ctx->pc = 0x39f76cu;
    // NOP
    ctx->pc = 0x39f770u;
}
