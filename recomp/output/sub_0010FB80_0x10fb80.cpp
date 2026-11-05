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

// Function: sub_0010FB80
// Address: 0x10fb80 - 0x10fbd0
void sub_0010FB80_0x10fb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FB80_0x10fb80");
#endif

    switch (ctx->pc) {
        case 0x10fbacu: goto label_10fbac;
        default: break;
    }

    ctx->pc = 0x10fb80u;

    // 0x10fb80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fb84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fb88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10fb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10fb8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10fb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb90: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x10fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10fb94: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FB94u;
    {
        const bool branch_taken_0x10fb94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB94u;
        // 0x10fb98: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb94) {
            ctx->pc = 0x10FBA4u;
            goto label_10fba4;
        }
    }
    ctx->pc = 0x10FB9Cu;
    // 0x10fb9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10FB9Cu;
    {
        const bool branch_taken_0x10fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB9Cu;
        // 0x10fba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb9c) {
            ctx->pc = 0x10FBACu;
            goto label_10fbac;
        }
    }
    ctx->pc = 0x10FBA4u;
label_10fba4:
    // 0x10fba4: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x10FBA4u;
    SET_GPR_U32(ctx, 31, 0x10FBACu);
    ctx->pc = 0x10FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FBA4u;
    // 0x10fba8: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x10FBA4u, 0x10FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBACu;
label_10fbac:
    // 0x10fbac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FBACu;
    {
        const bool branch_taken_0x10fbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBACu;
        // 0x10fbb0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbac) {
            ctx->pc = 0x10FBBCu;
            goto label_10fbbc;
        }
    }
    ctx->pc = 0x10FBB4u;
    // 0x10fbb4: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x10fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945236)));
    // 0x10fbb8: 0xae03025c  sw          $v1, 0x25C($s0)
    ctx->pc = 0x10fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 3));
label_10fbbc:
    // 0x10fbbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fbc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10fbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10fbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x10FBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBC4u;
        // 0x10fbc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FBCCu;
    // 0x10fbcc: 0x0  nop
    ctx->pc = 0x10fbccu;
    // NOP
    ctx->pc = 0x10fbd0u;
}
