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

// Function: sub_00305CD0
// Address: 0x305cd0 - 0x305d70
void sub_00305CD0_0x305cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305CD0_0x305cd0");
#endif

    switch (ctx->pc) {
        case 0x305cf8u: goto label_305cf8;
        case 0x305d3cu: goto label_305d3c;
        case 0x305d50u: goto label_305d50;
        case 0x305d5cu: goto label_305d5c;
        default: break;
    }

    ctx->pc = 0x305cd0u;

    // 0x305cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305cd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x305cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x305cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ce0: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x305ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x305ce4: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x305ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x305ce8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x305CE8u;
    {
        const bool branch_taken_0x305ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305ce8) {
            ctx->pc = 0x305CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305CE8u;
            // 0x305cec: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x305D18u;
            goto label_305d18;
        }
    }
    ctx->pc = 0x305CF0u;
    // 0x305cf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305cf4: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x305cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_305cf8:
    // 0x305cf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x305cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305cfc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305CFCu;
    {
        const bool branch_taken_0x305cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CFCu;
        // 0x305d00: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305cfc) {
            ctx->pc = 0x305D14u;
            goto label_305d14;
        }
    }
    ctx->pc = 0x305D04u;
    // 0x305d04: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x305d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x305d08: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x305D08u;
    {
        const bool branch_taken_0x305d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D08u;
        // 0x305d0c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d08) {
            ctx->pc = 0x305CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305cf8;
        }
    }
    ctx->pc = 0x305D10u;
    // 0x305d10: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x305d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_305d14:
    // 0x305d14: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x305d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_305d18:
    // 0x305d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x305d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305d1c: 0x0  nop
    ctx->pc = 0x305d1cu;
    // NOP
    // 0x305d20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x305d20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305d24: 0x0  nop
    ctx->pc = 0x305d24u;
    // NOP
    // 0x305d28: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x305D28u;
    {
        const bool branch_taken_0x305d28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x305D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D28u;
        // 0x305d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d28) {
            ctx->pc = 0x305D44u;
            goto label_305d44;
        }
    }
    ctx->pc = 0x305D30u;
    // 0x305d30: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x305d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x305d34: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x305D34u;
    SET_GPR_U32(ctx, 31, 0x305D3Cu);
    ctx->pc = 0x305D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D34u;
    // 0x305d38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x305D34u, 0x305D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D3Cu;
label_305d3c:
    // 0x305d3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x305D3Cu;
    {
        const bool branch_taken_0x305d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D3Cu;
        // 0x305d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d3c) {
            ctx->pc = 0x305D54u;
            goto label_305d54;
        }
    }
    ctx->pc = 0x305D44u;
label_305d44:
    // 0x305d44: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x305d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x305d48: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x305D48u;
    SET_GPR_U32(ctx, 31, 0x305D50u);
    ctx->pc = 0x305D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D48u;
    // 0x305d4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x305D48u, 0x305D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D50u;
label_305d50:
    // 0x305d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305d54:
    // 0x305d54: 0xc08dc16  jal         func_237058
    ctx->pc = 0x305D54u;
    SET_GPR_U32(ctx, 31, 0x305D5Cu);
    ctx->pc = 0x305D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D54u;
    // 0x305d58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x305D54u, 0x305D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D5Cu;
label_305d5c:
    // 0x305d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305d60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x305d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305d64: 0x3e00008  jr          $ra
    ctx->pc = 0x305D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D64u;
        // 0x305d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305D6Cu;
    // 0x305d6c: 0x0  nop
    ctx->pc = 0x305d6cu;
    // NOP
    ctx->pc = 0x305d70u;
}
