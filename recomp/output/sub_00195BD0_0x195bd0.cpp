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

// Function: sub_00195BD0
// Address: 0x195bd0 - 0x195c50
void sub_00195BD0_0x195bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195BD0_0x195bd0");
#endif

    switch (ctx->pc) {
        case 0x195bd0u: goto label_195bd0;
        case 0x195bd4u: goto label_195bd4;
        case 0x195bd8u: goto label_195bd8;
        case 0x195bdcu: goto label_195bdc;
        case 0x195be0u: goto label_195be0;
        case 0x195be4u: goto label_195be4;
        case 0x195be8u: goto label_195be8;
        case 0x195becu: goto label_195bec;
        case 0x195bf0u: goto label_195bf0;
        case 0x195bf4u: goto label_195bf4;
        case 0x195bf8u: goto label_195bf8;
        case 0x195bfcu: goto label_195bfc;
        case 0x195c00u: goto label_195c00;
        case 0x195c04u: goto label_195c04;
        case 0x195c08u: goto label_195c08;
        case 0x195c0cu: goto label_195c0c;
        case 0x195c10u: goto label_195c10;
        case 0x195c14u: goto label_195c14;
        case 0x195c18u: goto label_195c18;
        case 0x195c1cu: goto label_195c1c;
        case 0x195c20u: goto label_195c20;
        case 0x195c24u: goto label_195c24;
        case 0x195c28u: goto label_195c28;
        case 0x195c2cu: goto label_195c2c;
        case 0x195c30u: goto label_195c30;
        case 0x195c34u: goto label_195c34;
        case 0x195c38u: goto label_195c38;
        case 0x195c3cu: goto label_195c3c;
        case 0x195c40u: goto label_195c40;
        case 0x195c44u: goto label_195c44;
        case 0x195c48u: goto label_195c48;
        case 0x195c4cu: goto label_195c4c;
        default: break;
    }

    ctx->pc = 0x195bd0u;

label_195bd0:
    // 0x195bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_195bd4:
    // 0x195bd4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x195bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_195bd8:
    // 0x195bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_195bdc:
    // 0x195bdc: 0x24421220  addiu       $v0, $v0, 0x1220
    ctx->pc = 0x195bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4640));
label_195be0:
    // 0x195be0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x195be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_195be4:
    // 0x195be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195be8:
    // 0x195be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_195bec:
    // 0x195bec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x195becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_195bf0:
    // 0x195bf0: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x195bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_195bf4:
    // 0x195bf4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_195bf8:
    if (ctx->pc == 0x195BF8u) {
        ctx->pc = 0x195BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BF4u;
        // 0x195bf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BFCu;
        goto label_195bfc;
    }
    ctx->pc = 0x195BF4u;
    {
        const bool branch_taken_0x195bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BF4u;
        // 0x195bf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195bf4) {
            ctx->pc = 0x195C0Cu;
            goto label_195c0c;
        }
    }
    ctx->pc = 0x195BFCu;
label_195bfc:
    // 0x195bfc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x195bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_195c00:
    // 0x195c00: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x195c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_195c04:
    // 0x195c04: 0x40f809  jalr        $v0
label_195c08:
    if (ctx->pc == 0x195C08u) {
        ctx->pc = 0x195C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C04u;
        // 0x195c08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C0Cu;
        goto label_195c0c;
    }
    ctx->pc = 0x195C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195C0Cu);
        ctx->pc = 0x195C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C04u;
        // 0x195c08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195C04u, 0x195C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195C0Cu;
label_195c0c:
    // 0x195c0c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x195c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_195c10:
    // 0x195c10: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x195c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_195c14:
    // 0x195c14: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x195c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_195c18:
    // 0x195c18: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x195c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_195c1c:
    // 0x195c1c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x195c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_195c20:
    // 0x195c20: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x195c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_195c24:
    // 0x195c24: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x195c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_195c28:
    // 0x195c28: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x195c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_195c2c:
    // 0x195c2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_195c30:
    if (ctx->pc == 0x195C30u) {
        ctx->pc = 0x195C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C2Cu;
        // 0x195c30: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C34u;
        goto label_195c34;
    }
    ctx->pc = 0x195C2Cu;
    {
        const bool branch_taken_0x195c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C2Cu;
        // 0x195c30: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c2c) {
            ctx->pc = 0x195C3Cu;
            goto label_195c3c;
        }
    }
    ctx->pc = 0x195C34u;
label_195c34:
    // 0x195c34: 0xc0f5222  jal         func_3D4888
label_195c38:
    if (ctx->pc == 0x195C38u) {
        ctx->pc = 0x195C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C34u;
        // 0x195c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C3Cu;
        goto label_195c3c;
    }
    ctx->pc = 0x195C34u;
    SET_GPR_U32(ctx, 31, 0x195C3Cu);
    ctx->pc = 0x195C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C34u;
    // 0x195c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x195C34u, 0x195C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C3Cu;
label_195c3c:
    // 0x195c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195c40:
    // 0x195c40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195c40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_195c44:
    // 0x195c44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195c48:
    // 0x195c48: 0x3e00008  jr          $ra
label_195c4c:
    if (ctx->pc == 0x195C4Cu) {
        ctx->pc = 0x195C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C48u;
        // 0x195c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C50u;
        goto label_fallthrough_0x195c48;
    }
    ctx->pc = 0x195C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C48u;
        // 0x195c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x195c48:
    ctx->pc = 0x195C50u;
}
