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

// Function: sub_0014EF40
// Address: 0x14ef40 - 0x14efa0
void sub_0014EF40_0x14ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EF40_0x14ef40");
#endif

    switch (ctx->pc) {
        case 0x14ef60u: goto label_14ef60;
        case 0x14ef6cu: goto label_14ef6c;
        case 0x14ef88u: goto label_14ef88;
        default: break;
    }

    ctx->pc = 0x14ef40u;

    // 0x14ef40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ef44: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14ef48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14ef4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ef4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ef50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14ef54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef58: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14EF58u;
    SET_GPR_U32(ctx, 31, 0x14EF60u);
    ctx->pc = 0x14EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF58u;
    // 0x14ef5c: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14EF58u, 0x14EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF60u;
label_14ef60:
    // 0x14ef60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef64: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14EF64u;
    SET_GPR_U32(ctx, 31, 0x14EF6Cu);
    ctx->pc = 0x14EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF64u;
    // 0x14ef68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14EF64u, 0x14EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF6Cu;
label_14ef6c:
    // 0x14ef6c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14ef70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ef70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef74: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x14ef74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14ef78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14ef78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ef7c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14ef7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14ef80: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14EF80u;
    SET_GPR_U32(ctx, 31, 0x14EF88u);
    ctx->pc = 0x14EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF80u;
    // 0x14ef84: 0xae2204f0  sw          $v0, 0x4F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1264), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14EF80u, 0x14EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF88u;
label_14ef88:
    // 0x14ef88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14ef88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ef8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14ef8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ef90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ef94: 0x3e00008  jr          $ra
    ctx->pc = 0x14EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF94u;
        // 0x14ef98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EF9Cu;
    // 0x14ef9c: 0x0  nop
    ctx->pc = 0x14ef9cu;
    // NOP
    ctx->pc = 0x14efa0u;
}
