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

// Function: sub_0011DCB8
// Address: 0x11dcb8 - 0x11dd18
void sub_0011DCB8_0x11dcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DCB8_0x11dcb8");
#endif

    switch (ctx->pc) {
        case 0x11dce4u: goto label_11dce4;
        default: break;
    }

    ctx->pc = 0x11dcb8u;

    // 0x11dcb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11dcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11dcbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11dcc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11dcc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11dcc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11dccc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11dcccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11dcd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11dcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11dcd8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x11dcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11dcdc: 0xc047f20  jal         func_11FC80
    ctx->pc = 0x11DCDCu;
    SET_GPR_U32(ctx, 31, 0x11DCE4u);
    ctx->pc = 0x11DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCDCu;
    // 0x11dce0: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FC80u, 0x11DCDCu, 0x11DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCE4u;
label_11dce4:
    // 0x11dce4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11dce4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dce8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11dce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11dcec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x11dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11dcf0: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x11dcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x11dcf4: 0xacb10108  sw          $s1, 0x108($a1)
    ctx->pc = 0x11dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 17));
    // 0x11dcf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11dcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcfc: 0xae12020c  sw          $s2, 0x20C($s0)
    ctx->pc = 0x11dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 18));
    // 0x11dd00: 0xae2301d4  sw          $v1, 0x1D4($s1)
    ctx->pc = 0x11dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 3));
    // 0x11dd04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11dd04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dd08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11dd08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11dd0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11dd0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dd10: 0x3e00008  jr          $ra
    ctx->pc = 0x11DD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD10u;
        // 0x11dd14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DD18u;
}
