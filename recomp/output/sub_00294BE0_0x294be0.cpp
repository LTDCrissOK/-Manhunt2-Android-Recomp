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

// Function: sub_00294BE0
// Address: 0x294be0 - 0x294c68
void sub_00294BE0_0x294be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294BE0_0x294be0");
#endif

    switch (ctx->pc) {
        case 0x294bf4u: goto label_294bf4;
        case 0x294bfcu: goto label_294bfc;
        case 0x294c50u: goto label_294c50;
        default: break;
    }

    ctx->pc = 0x294be0u;

    // 0x294be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x294be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x294bec: 0xc0a7adc  jal         func_29EB70
    ctx->pc = 0x294BECu;
    SET_GPR_U32(ctx, 31, 0x294BF4u);
    ctx->pc = 0x294BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294BECu;
    // 0x294bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB70u, 0x294BECu, 0x294BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294BF4u;
label_294bf4:
    // 0x294bf4: 0xc0a1f92  jal         func_287E48
    ctx->pc = 0x294BF4u;
    SET_GPR_U32(ctx, 31, 0x294BFCu);
    ctx->pc = 0x287E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287E48u, 0x294BF4u, 0x294BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294BFCu;
label_294bfc:
    // 0x294bfc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x294BFCu;
    {
        const bool branch_taken_0x294bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BFCu;
        // 0x294c00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bfc) {
            ctx->pc = 0x294C08u;
            goto label_294c08;
        }
    }
    ctx->pc = 0x294C04u;
    // 0x294c04: 0xa202027c  sb          $v0, 0x27C($s0)
    ctx->pc = 0x294c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 636), (uint8_t)GPR_U32(ctx, 2));
label_294c08:
    // 0x294c08: 0x9202027c  lbu         $v0, 0x27C($s0)
    ctx->pc = 0x294c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x294c0c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x294C0Cu;
    {
        const bool branch_taken_0x294c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C0Cu;
        // 0x294c10: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c0c) {
            ctx->pc = 0x294C54u;
            goto label_294c54;
        }
    }
    ctx->pc = 0x294C14u;
    // 0x294c14: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x294c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
    // 0x294c18: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x294C18u;
    {
        const bool branch_taken_0x294c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C18u;
        // 0x294c1c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c18) {
            ctx->pc = 0x294C34u;
            goto label_294c34;
        }
    }
    ctx->pc = 0x294C20u;
    // 0x294c20: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x294c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x294c24: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x294c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x294c28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x294c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x294c2c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x294C2Cu;
    {
        const bool branch_taken_0x294c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294c2c) {
            ctx->pc = 0x294C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294C2Cu;
            // 0x294c30: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294C3Cu;
            goto label_294c3c;
        }
    }
    ctx->pc = 0x294C34u;
label_294c34:
    // 0x294c34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294C34u;
    {
        const bool branch_taken_0x294c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C34u;
        // 0x294c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c34) {
            ctx->pc = 0x294C40u;
            goto label_294c40;
        }
    }
    ctx->pc = 0x294C3Cu;
label_294c3c:
    // 0x294c3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x294c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_294c40:
    // 0x294c40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x294C40u;
    {
        const bool branch_taken_0x294c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294c40) {
            ctx->pc = 0x294C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294C40u;
            // 0x294c44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294C58u;
            goto label_294c58;
        }
    }
    ctx->pc = 0x294C48u;
    // 0x294c48: 0xc0c6762  jal         func_319D88
    ctx->pc = 0x294C48u;
    SET_GPR_U32(ctx, 31, 0x294C50u);
    ctx->pc = 0x319D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319D88u, 0x294C48u, 0x294C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C50u;
label_294c50:
    // 0x294c50: 0xa200027c  sb          $zero, 0x27C($s0)
    ctx->pc = 0x294c50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 636), (uint8_t)GPR_U32(ctx, 0));
label_294c54:
    // 0x294c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294c58:
    // 0x294c58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x294c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x294C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C5Cu;
        // 0x294c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294C64u;
    // 0x294c64: 0x0  nop
    ctx->pc = 0x294c64u;
    // NOP
    ctx->pc = 0x294c68u;
}
