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

// Function: sub_0010AEA8
// Address: 0x10aea8 - 0x10aef0
void sub_0010AEA8_0x10aea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AEA8_0x10aea8");
#endif

    switch (ctx->pc) {
        case 0x10aec4u: goto label_10aec4;
        case 0x10aedcu: goto label_10aedc;
        default: break;
    }

    ctx->pc = 0x10aea8u;

    // 0x10aea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10aea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10aeac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10aeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aeb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10aeb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10aeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aeb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10aeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10aebc: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AEBCu;
    SET_GPR_U32(ctx, 31, 0x10AEC4u);
    ctx->pc = 0x10AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEBCu;
    // 0x10aec0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AEBCu, 0x10AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEC4u;
label_10aec4:
    // 0x10aec4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10aec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10aec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aecc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10aeccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10aed0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10aed4: 0xc04426e  jal         func_1109B8
    ctx->pc = 0x10AED4u;
    SET_GPR_U32(ctx, 31, 0x10AEDCu);
    ctx->pc = 0x10AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AED4u;
    // 0x10aed8: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1109B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1109B8u, 0x10AED4u, 0x10AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEDCu;
label_10aedc:
    // 0x10aedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10aedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10aee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10aee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10aee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aee8: 0x3e00008  jr          $ra
    ctx->pc = 0x10AEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEE8u;
        // 0x10aeec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AEF0u;
}
