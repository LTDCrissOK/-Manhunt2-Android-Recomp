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

// Function: sub_00394EC8
// Address: 0x394ec8 - 0x394f38
void sub_00394EC8_0x394ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394EC8_0x394ec8");
#endif

    switch (ctx->pc) {
        case 0x394ec8u: goto label_394ec8;
        case 0x394eccu: goto label_394ecc;
        case 0x394ed0u: goto label_394ed0;
        case 0x394ed4u: goto label_394ed4;
        case 0x394ed8u: goto label_394ed8;
        case 0x394edcu: goto label_394edc;
        case 0x394ee0u: goto label_394ee0;
        case 0x394ee4u: goto label_394ee4;
        case 0x394ee8u: goto label_394ee8;
        case 0x394eecu: goto label_394eec;
        case 0x394ef0u: goto label_394ef0;
        case 0x394ef4u: goto label_394ef4;
        case 0x394ef8u: goto label_394ef8;
        case 0x394efcu: goto label_394efc;
        case 0x394f00u: goto label_394f00;
        case 0x394f04u: goto label_394f04;
        case 0x394f08u: goto label_394f08;
        case 0x394f0cu: goto label_394f0c;
        case 0x394f10u: goto label_394f10;
        case 0x394f14u: goto label_394f14;
        case 0x394f18u: goto label_394f18;
        case 0x394f1cu: goto label_394f1c;
        case 0x394f20u: goto label_394f20;
        case 0x394f24u: goto label_394f24;
        case 0x394f28u: goto label_394f28;
        case 0x394f2cu: goto label_394f2c;
        case 0x394f30u: goto label_394f30;
        case 0x394f34u: goto label_394f34;
        default: break;
    }

    ctx->pc = 0x394ec8u;

label_394ec8:
    // 0x394ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x394ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_394ecc:
    // 0x394ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x394eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_394ed0:
    // 0x394ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x394ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394ed4:
    // 0x394ed4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x394ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_394ed8:
    // 0x394ed8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x394ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_394edc:
    // 0x394edc: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
label_394ee0:
    if (ctx->pc == 0x394EE0u) {
        ctx->pc = 0x394EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EDCu;
        // 0x394ee0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394EE4u;
        goto label_394ee4;
    }
    ctx->pc = 0x394EDCu;
    {
        const bool branch_taken_0x394edc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x394edc) {
            ctx->pc = 0x394EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394EDCu;
            // 0x394ee0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394F2Cu;
            goto label_394f2c;
        }
    }
    ctx->pc = 0x394EE4u;
label_394ee4:
    // 0x394ee4: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x394ee4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_394ee8:
    // 0x394ee8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_394eec:
    if (ctx->pc == 0x394EECu) {
        ctx->pc = 0x394EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EE8u;
        // 0x394eec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394EF0u;
        goto label_394ef0;
    }
    ctx->pc = 0x394EE8u;
    {
        const bool branch_taken_0x394ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394ee8) {
            ctx->pc = 0x394EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394EE8u;
            // 0x394eec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394F2Cu;
            goto label_394f2c;
        }
    }
    ctx->pc = 0x394EF0u;
label_394ef0:
    // 0x394ef0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x394ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_394ef4:
    // 0x394ef4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x394ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394ef8:
    // 0x394ef8: 0x8c43e948  lw          $v1, -0x16B8($v0)
    ctx->pc = 0x394ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961480)));
label_394efc:
    // 0x394efc: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_394f00:
    if (ctx->pc == 0x394F00u) {
        ctx->pc = 0x394F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EFCu;
        // 0x394f00: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F04u;
        goto label_394f04;
    }
    ctx->pc = 0x394EFCu;
    {
        const bool branch_taken_0x394efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x394efc) {
            ctx->pc = 0x394F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394EFCu;
            // 0x394f00: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394F18u;
            goto label_394f18;
        }
    }
    ctx->pc = 0x394F04u;
label_394f04:
    // 0x394f04: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x394f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_394f08:
    // 0x394f08: 0xc0ec1a6  jal         func_3B0698
label_394f0c:
    if (ctx->pc == 0x394F0Cu) {
        ctx->pc = 0x394F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F08u;
        // 0x394f0c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F10u;
        goto label_394f10;
    }
    ctx->pc = 0x394F08u;
    SET_GPR_U32(ctx, 31, 0x394F10u);
    ctx->pc = 0x394F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394F08u;
    // 0x394f0c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0698u, 0x394F08u, 0x394F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394F10u;
label_394f10:
    // 0x394f10: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x394f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_394f14:
    // 0x394f14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x394f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_394f18:
    // 0x394f18: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x394f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_394f1c:
    // 0x394f1c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x394f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_394f20:
    // 0x394f20: 0x40f809  jalr        $v0
label_394f24:
    if (ctx->pc == 0x394F24u) {
        ctx->pc = 0x394F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F20u;
        // 0x394f24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F28u;
        goto label_394f28;
    }
    ctx->pc = 0x394F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394F28u);
        ctx->pc = 0x394F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F20u;
        // 0x394f24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394F20u, 0x394F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394F28u;
label_394f28:
    // 0x394f28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_394f2c:
    // 0x394f2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x394f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_394f30:
    // 0x394f30: 0x3e00008  jr          $ra
label_394f34:
    if (ctx->pc == 0x394F34u) {
        ctx->pc = 0x394F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F30u;
        // 0x394f34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F38u;
        goto label_fallthrough_0x394f30;
    }
    ctx->pc = 0x394F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F30u;
        // 0x394f34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x394f30:
    ctx->pc = 0x394F38u;
}
