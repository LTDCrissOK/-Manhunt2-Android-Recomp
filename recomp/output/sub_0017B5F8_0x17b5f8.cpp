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

// Function: sub_0017B5F8
// Address: 0x17b5f8 - 0x17b640
void sub_0017B5F8_0x17b5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B5F8_0x17b5f8");
#endif

    switch (ctx->pc) {
        case 0x17b610u: goto label_17b610;
        case 0x17b620u: goto label_17b620;
        case 0x17b62cu: goto label_17b62c;
        default: break;
    }

    ctx->pc = 0x17b5f8u;

    // 0x17b5f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b5fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b608: 0xc05ee30  jal         func_17B8C0
    ctx->pc = 0x17B608u;
    SET_GPR_U32(ctx, 31, 0x17B610u);
    ctx->pc = 0x17B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B608u;
    // 0x17b60c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x17B608u, 0x17B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B610u;
label_17b610:
    // 0x17b610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b614: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x17b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17b618: 0xc05a600  jal         func_169800
    ctx->pc = 0x17B618u;
    SET_GPR_U32(ctx, 31, 0x17B620u);
    ctx->pc = 0x17B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B618u;
    // 0x17b61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169800u, 0x17B618u, 0x17B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B620u;
label_17b620:
    // 0x17b620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b624: 0xc05e372  jal         func_178DC8
    ctx->pc = 0x17B624u;
    SET_GPR_U32(ctx, 31, 0x17B62Cu);
    ctx->pc = 0x17B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B624u;
    // 0x17b628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178DC8u, 0x17B624u, 0x17B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B62Cu;
label_17b62c:
    // 0x17b62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b630: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b638: 0x3e00008  jr          $ra
    ctx->pc = 0x17B638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B638u;
        // 0x17b63c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B640u;
}
