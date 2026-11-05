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

// Function: sub_0012B658
// Address: 0x12b658 - 0x12b6a8
void sub_0012B658_0x12b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B658_0x12b658");
#endif

    switch (ctx->pc) {
        case 0x12b67cu: goto label_12b67c;
        case 0x12b68cu: goto label_12b68c;
        default: break;
    }

    ctx->pc = 0x12b658u;

    // 0x12b658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b65c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b668: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12b66c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12b66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b670: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12b674: 0xc04b228  jal         func_12C8A0
    ctx->pc = 0x12B674u;
    SET_GPR_U32(ctx, 31, 0x12B67Cu);
    ctx->pc = 0x12B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B674u;
    // 0x12b678: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C8A0u, 0x12B674u, 0x12B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B67Cu;
label_12b67c:
    // 0x12b67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b680: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b684: 0xc04b1ce  jal         func_12C738
    ctx->pc = 0x12B684u;
    SET_GPR_U32(ctx, 31, 0x12B68Cu);
    ctx->pc = 0x12B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B684u;
    // 0x12b688: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C738u, 0x12B684u, 0x12B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B68Cu;
label_12b68c:
    // 0x12b68c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12b694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b698: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12b698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b69c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B69Cu;
        // 0x12b6a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B6A4u;
    // 0x12b6a4: 0x0  nop
    ctx->pc = 0x12b6a4u;
    // NOP
    ctx->pc = 0x12b6a8u;
}
