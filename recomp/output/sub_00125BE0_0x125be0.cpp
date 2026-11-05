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

// Function: sub_00125BE0
// Address: 0x125be0 - 0x125c38
void sub_00125BE0_0x125be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125BE0_0x125be0");
#endif

    switch (ctx->pc) {
        case 0x125bf4u: goto label_125bf4;
        default: break;
    }

    ctx->pc = 0x125be0u;

    // 0x125be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x125be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125bec: 0xc049f1a  jal         func_127C68
    ctx->pc = 0x125BECu;
    SET_GPR_U32(ctx, 31, 0x125BF4u);
    ctx->pc = 0x125BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125BECu;
    // 0x125bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C68u, 0x125BECu, 0x125BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125BF4u;
label_125bf4:
    // 0x125bf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x125bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125bf8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x125bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125bfc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x125BFCu;
    {
        const bool branch_taken_0x125bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BFCu;
        // 0x125c00: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bfc) {
            ctx->pc = 0x125C24u;
            goto label_125c24;
        }
    }
    ctx->pc = 0x125C04u;
    // 0x125c04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x125c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125c08: 0x24420870  addiu       $v0, $v0, 0x870
    ctx->pc = 0x125c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x125c0c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x125c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x125c10: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x125c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x125c14: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125C14u;
    {
        const bool branch_taken_0x125c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x125C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C14u;
        // 0x125c18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c14) {
            ctx->pc = 0x125C28u;
            goto label_125c28;
        }
    }
    ctx->pc = 0x125C1Cu;
    // 0x125c1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125c20: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x125c20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_125c24:
    // 0x125c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125c28:
    // 0x125c28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x125c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x125C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C2Cu;
        // 0x125c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125C34u;
    // 0x125c34: 0x0  nop
    ctx->pc = 0x125c34u;
    // NOP
    ctx->pc = 0x125c38u;
}
