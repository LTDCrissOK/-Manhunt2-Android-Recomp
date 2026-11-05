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

// Function: sub_002CFE68
// Address: 0x2cfe68 - 0x2cfef8
void sub_002CFE68_0x2cfe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFE68_0x2cfe68");
#endif

    switch (ctx->pc) {
        case 0x2cfe84u: goto label_2cfe84;
        case 0x2cfe9cu: goto label_2cfe9c;
        case 0x2cfea4u: goto label_2cfea4;
        case 0x2cfec0u: goto label_2cfec0;
        case 0x2cfee4u: goto label_2cfee4;
        default: break;
    }

    ctx->pc = 0x2cfe68u;

    // 0x2cfe68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cfe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cfe6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cfe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cfe70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cfe70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cfe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfe78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cfe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cfe7c: 0xc0b3b42  jal         func_2CED08
    ctx->pc = 0x2CFE7Cu;
    SET_GPR_U32(ctx, 31, 0x2CFE84u);
    ctx->pc = 0x2CFE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE7Cu;
    // 0x2cfe80: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CED08u, 0x2CFE7Cu, 0x2CFE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE84u;
label_2cfe84:
    // 0x2cfe84: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2cfe84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2cfe88: 0x8e03b4a8  lw          $v1, -0x4B58($s0)
    ctx->pc = 0x2cfe88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cfe8c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cfe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cfe90: 0x34843094  ori         $a0, $a0, 0x3094
    ctx->pc = 0x2cfe90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12436);
    // 0x2cfe94: 0xc0b410e  jal         func_2D0438
    ctx->pc = 0x2CFE94u;
    SET_GPR_U32(ctx, 31, 0x2CFE9Cu);
    ctx->pc = 0x2CFE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE94u;
    // 0x2cfe98: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0438u, 0x2CFE94u, 0x2CFE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE9Cu;
label_2cfe9c:
    // 0x2cfe9c: 0xc0b3fbe  jal         func_2CFEF8
    ctx->pc = 0x2CFE9Cu;
    SET_GPR_U32(ctx, 31, 0x2CFEA4u);
    ctx->pc = 0x2CFEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE9Cu;
    // 0x2cfea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFEF8u, 0x2CFE9Cu, 0x2CFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFEA4u;
label_2cfea4:
    // 0x2cfea4: 0x8e04b4a8  lw          $a0, -0x4B58($s0)
    ctx->pc = 0x2cfea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948008)));
    // 0x2cfea8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2cfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2cfeac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cfeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cfeb0: 0x8c8330a0  lw          $v1, 0x30A0($a0)
    ctx->pc = 0x2cfeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12448)));
    // 0x2cfeb4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFEB4u;
    {
        const bool branch_taken_0x2cfeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfeb4) {
            ctx->pc = 0x2CFEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFEB4u;
            // 0x2cfeb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFEDCu;
            goto label_2cfedc;
        }
    }
    ctx->pc = 0x2CFEBCu;
    // 0x2cfebc: 0x0  nop
    ctx->pc = 0x2cfebcu;
    // NOP
label_2cfec0:
    // 0x2cfec0: 0x8c8230a0  lw          $v0, 0x30A0($a0)
    ctx->pc = 0x2cfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12448)));
    // 0x2cfec4: 0x0  nop
    ctx->pc = 0x2cfec4u;
    // NOP
    // 0x2cfec8: 0x0  nop
    ctx->pc = 0x2cfec8u;
    // NOP
    // 0x2cfecc: 0x0  nop
    ctx->pc = 0x2cfeccu;
    // NOP
    // 0x2cfed0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CFED0u;
    {
        const bool branch_taken_0x2cfed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfed0) {
            ctx->pc = 0x2CFEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cfec0;
        }
    }
    ctx->pc = 0x2CFED8u;
    // 0x2cfed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cfed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cfedc:
    // 0x2cfedc: 0xc0b3f32  jal         func_2CFCC8
    ctx->pc = 0x2CFEDCu;
    SET_GPR_U32(ctx, 31, 0x2CFEE4u);
    ctx->pc = 0x2CFEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFEDCu;
    // 0x2cfee0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCC8u, 0x2CFEDCu, 0x2CFEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFEE4u;
label_2cfee4:
    // 0x2cfee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cfeec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cfeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEF0u;
        // 0x2cfef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFEF8u;
}
