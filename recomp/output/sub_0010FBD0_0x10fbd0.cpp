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

// Function: sub_0010FBD0
// Address: 0x10fbd0 - 0x10fc30
void sub_0010FBD0_0x10fbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FBD0_0x10fbd0");
#endif

    switch (ctx->pc) {
        case 0x10fbfcu: goto label_10fbfc;
        default: break;
    }

    ctx->pc = 0x10fbd0u;

    // 0x10fbd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fbd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fbd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10fbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10fbdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10fbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbe0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x10fbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10fbe4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FBE4u;
    {
        const bool branch_taken_0x10fbe4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBE4u;
        // 0x10fbe8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbe4) {
            ctx->pc = 0x10FBF4u;
            goto label_10fbf4;
        }
    }
    ctx->pc = 0x10FBECu;
    // 0x10fbec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10FBECu;
    {
        const bool branch_taken_0x10fbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBECu;
        // 0x10fbf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbec) {
            ctx->pc = 0x10FBFCu;
            goto label_10fbfc;
        }
    }
    ctx->pc = 0x10FBF4u;
label_10fbf4:
    // 0x10fbf4: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x10FBF4u;
    SET_GPR_U32(ctx, 31, 0x10FBFCu);
    ctx->pc = 0x10FBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FBF4u;
    // 0x10fbf8: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x10FBF4u, 0x10FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBFCu;
label_10fbfc:
    // 0x10fbfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FBFCu;
    {
        const bool branch_taken_0x10fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBFCu;
        // 0x10fc00: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbfc) {
            ctx->pc = 0x10FC18u;
            goto label_10fc18;
        }
    }
    ctx->pc = 0x10FC04u;
    // 0x10fc04: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x10fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x10fc08: 0x8c64a9d4  lw          $a0, -0x562C($v1)
    ctx->pc = 0x10fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945236)));
    // 0x10fc0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10fc10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10FC10u;
    {
        const bool branch_taken_0x10fc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC10u;
        // 0x10fc14: 0x82102b  sltu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc10) {
            ctx->pc = 0x10FC1Cu;
            goto label_10fc1c;
        }
    }
    ctx->pc = 0x10FC18u;
label_10fc18:
    // 0x10fc18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10fc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fc1c:
    // 0x10fc1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fc20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10fc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10fc24: 0x3e00008  jr          $ra
    ctx->pc = 0x10FC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC24u;
        // 0x10fc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FC2Cu;
    // 0x10fc2c: 0x0  nop
    ctx->pc = 0x10fc2cu;
    // NOP
    ctx->pc = 0x10fc30u;
}
