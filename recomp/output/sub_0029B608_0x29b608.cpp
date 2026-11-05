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

// Function: sub_0029B608
// Address: 0x29b608 - 0x29b650
void sub_0029B608_0x29b608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B608_0x29b608");
#endif

    switch (ctx->pc) {
        case 0x29b634u: goto label_29b634;
        default: break;
    }

    ctx->pc = 0x29b608u;

    // 0x29b608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b614: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29b618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b61c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b620: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29b620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b624: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x29b624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x29b628: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x29b628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b62c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x29B62Cu;
    SET_GPR_U32(ctx, 31, 0x29B634u);
    ctx->pc = 0x29B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B62Cu;
    // 0x29b630: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29B62Cu, 0x29B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B634u;
label_29b634:
    // 0x29b634: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x29b634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x29b638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b63c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29b63cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b644: 0x3e00008  jr          $ra
    ctx->pc = 0x29B644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B644u;
        // 0x29b648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B64Cu;
    // 0x29b64c: 0x0  nop
    ctx->pc = 0x29b64cu;
    // NOP
    ctx->pc = 0x29b650u;
}
