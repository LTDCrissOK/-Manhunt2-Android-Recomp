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

// Function: sub_002CAD50
// Address: 0x2cad50 - 0x2cada8
void sub_002CAD50_0x2cad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAD50_0x2cad50");
#endif

    switch (ctx->pc) {
        case 0x2cad80u: goto label_2cad80;
        case 0x2cad88u: goto label_2cad88;
        case 0x2cad90u: goto label_2cad90;
        default: break;
    }

    ctx->pc = 0x2cad50u;

    // 0x2cad50: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cad50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cad54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cad54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cad58: 0x8c62b4a8  lw          $v0, -0x4B58($v1)
    ctx->pc = 0x2cad58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cad5c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2cad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2cad60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cad64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cad68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cad6c: 0x8c4330ac  lw          $v1, 0x30AC($v0)
    ctx->pc = 0x2cad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
    // 0x2cad70: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CAD70u;
    {
        const bool branch_taken_0x2cad70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD70u;
        // 0x2cad74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad70) {
            ctx->pc = 0x2CAD90u;
            goto label_2cad90;
        }
    }
    ctx->pc = 0x2CAD78u;
    // 0x2cad78: 0xc0f3e3a  jal         func_3CF8E8
    ctx->pc = 0x2CAD78u;
    SET_GPR_U32(ctx, 31, 0x2CAD80u);
    ctx->pc = 0x2CAD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD78u;
    // 0x2cad7c: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF8E8u, 0x2CAD78u, 0x2CAD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD80u;
label_2cad80:
    // 0x2cad80: 0xc0f3e3a  jal         func_3CF8E8
    ctx->pc = 0x2CAD80u;
    SET_GPR_U32(ctx, 31, 0x2CAD88u);
    ctx->pc = 0x2CAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD80u;
    // 0x2cad84: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF8E8u, 0x2CAD80u, 0x2CAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD88u;
label_2cad88:
    // 0x2cad88: 0xc0b2bc4  jal         func_2CAF10
    ctx->pc = 0x2CAD88u;
    SET_GPR_U32(ctx, 31, 0x2CAD90u);
    ctx->pc = 0x2CAD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD88u;
    // 0x2cad8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF10u, 0x2CAD88u, 0x2CAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD90u;
label_2cad90:
    // 0x2cad90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cad94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cad94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cad98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cad9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD9Cu;
        // 0x2cada0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CADA4u;
    // 0x2cada4: 0x0  nop
    ctx->pc = 0x2cada4u;
    // NOP
    ctx->pc = 0x2cada8u;
}
