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

// Function: sub_00160698
// Address: 0x160698 - 0x1606e8
void sub_00160698_0x160698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160698_0x160698");
#endif

    switch (ctx->pc) {
        case 0x1606bcu: goto label_1606bc;
        case 0x1606c4u: goto label_1606c4;
        case 0x1606ccu: goto label_1606cc;
        case 0x1606d4u: goto label_1606d4;
        default: break;
    }

    ctx->pc = 0x160698u;

    // 0x160698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16069c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1606a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1606a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1606a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1606a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606a8: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1606a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1606ac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1606ACu;
    {
        const bool branch_taken_0x1606ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1606ac) {
            ctx->pc = 0x1606B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1606ACu;
            // 0x1606b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1606D8u;
            goto label_1606d8;
        }
    }
    ctx->pc = 0x1606B4u;
    // 0x1606b4: 0xc058452  jal         func_161148
    ctx->pc = 0x1606B4u;
    SET_GPR_U32(ctx, 31, 0x1606BCu);
    ctx->pc = 0x161148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161148u, 0x1606B4u, 0x1606BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606BCu;
label_1606bc:
    // 0x1606bc: 0xc0582be  jal         func_160AF8
    ctx->pc = 0x1606BCu;
    SET_GPR_U32(ctx, 31, 0x1606C4u);
    ctx->pc = 0x1606C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606BCu;
    // 0x1606c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160AF8u, 0x1606BCu, 0x1606C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606C4u;
label_1606c4:
    // 0x1606c4: 0xc04f04c  jal         func_13C130
    ctx->pc = 0x1606C4u;
    SET_GPR_U32(ctx, 31, 0x1606CCu);
    ctx->pc = 0x1606C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606C4u;
    // 0x1606c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C130u, 0x1606C4u, 0x1606CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606CCu;
label_1606cc:
    // 0x1606cc: 0xc04f06e  jal         func_13C1B8
    ctx->pc = 0x1606CCu;
    SET_GPR_U32(ctx, 31, 0x1606D4u);
    ctx->pc = 0x1606D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606CCu;
    // 0x1606d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1B8u, 0x1606CCu, 0x1606D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606D4u;
label_1606d4:
    // 0x1606d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1606d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1606d8:
    // 0x1606d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1606d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1606dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1606DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1606E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606DCu;
        // 0x1606e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1606DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1606E4u;
    // 0x1606e4: 0x0  nop
    ctx->pc = 0x1606e4u;
    // NOP
    ctx->pc = 0x1606e8u;
}
