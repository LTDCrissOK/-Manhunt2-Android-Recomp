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

// Function: sub_0012B7E0
// Address: 0x12b7e0 - 0x12b838
void sub_0012B7E0_0x12b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B7E0_0x12b7e0");
#endif

    switch (ctx->pc) {
        case 0x12b804u: goto label_12b804;
        case 0x12b820u: goto label_12b820;
        default: break;
    }

    ctx->pc = 0x12b7e0u;

    // 0x12b7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b7e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b7e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12b7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12b7f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12b7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12b7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12b7fc: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B7FCu;
    SET_GPR_U32(ctx, 31, 0x12B804u);
    ctx->pc = 0x12B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B7FCu;
    // 0x12b800: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B7FCu, 0x12B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B804u;
label_12b804:
    // 0x12b804: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12b804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12b808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b80c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12b80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12b810: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12b810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b814: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12b814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12b818: 0xc04b040  jal         func_12C100
    ctx->pc = 0x12B818u;
    SET_GPR_U32(ctx, 31, 0x12B820u);
    ctx->pc = 0x12B81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B818u;
    // 0x12b81c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C100u, 0x12B818u, 0x12B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B820u;
label_12b820:
    // 0x12b820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b828: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12b828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b82c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12b82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b830: 0x3e00008  jr          $ra
    ctx->pc = 0x12B830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B830u;
        // 0x12b834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B838u;
}
