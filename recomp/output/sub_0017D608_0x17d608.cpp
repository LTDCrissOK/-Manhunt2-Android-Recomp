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

// Function: sub_0017D608
// Address: 0x17d608 - 0x17d658
void sub_0017D608_0x17d608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D608_0x17d608");
#endif

    switch (ctx->pc) {
        case 0x17d628u: goto label_17d628;
        case 0x17d634u: goto label_17d634;
        case 0x17d644u: goto label_17d644;
        default: break;
    }

    ctx->pc = 0x17d608u;

    // 0x17d608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d610: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17d610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17d614: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17d618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d61c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d620: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17D620u;
    SET_GPR_U32(ctx, 31, 0x17D628u);
    ctx->pc = 0x17D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D620u;
    // 0x17d624: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17D620u, 0x17D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D628u;
label_17d628:
    // 0x17d628: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d62c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17D62Cu;
    SET_GPR_U32(ctx, 31, 0x17D634u);
    ctx->pc = 0x17D630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D62Cu;
    // 0x17d630: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17D62Cu, 0x17D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D634u;
label_17d634:
    // 0x17d634: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x17d634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x17d638: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d63c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17D63Cu;
    SET_GPR_U32(ctx, 31, 0x17D644u);
    ctx->pc = 0x17D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D63Cu;
    // 0x17d640: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17D63Cu, 0x17D644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D644u;
label_17d644:
    // 0x17d644: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17d644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d648: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17d648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d64c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D64Cu;
        // 0x17d650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D654u;
    // 0x17d654: 0x0  nop
    ctx->pc = 0x17d654u;
    // NOP
    ctx->pc = 0x17d658u;
}
