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

// Function: sub_001D6AF8
// Address: 0x1d6af8 - 0x1d6b90
void sub_001D6AF8_0x1d6af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6AF8_0x1d6af8");
#endif

    switch (ctx->pc) {
        case 0x1d6b08u: goto label_1d6b08;
        case 0x1d6b50u: goto label_1d6b50;
        case 0x1d6b68u: goto label_1d6b68;
        case 0x1d6b78u: goto label_1d6b78;
        case 0x1d6b80u: goto label_1d6b80;
        default: break;
    }

    ctx->pc = 0x1d6af8u;

    // 0x1d6af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6b00: 0xc0db256  jal         func_36C958
    ctx->pc = 0x1D6B00u;
    SET_GPR_U32(ctx, 31, 0x1D6B08u);
    ctx->pc = 0x1D6B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B00u;
    // 0x1d6b04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C958u, 0x1D6B00u, 0x1D6B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B08u;
label_1d6b08:
    // 0x1d6b08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d6b0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6b10: 0x8c448ec8  lw          $a0, -0x7138($v0)
    ctx->pc = 0x1d6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F8EC8u));
    // 0x1d6b14: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D6B14u;
    {
        const bool branch_taken_0x1d6b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B14u;
        // 0x1d6b18: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b14) {
            ctx->pc = 0x1D6B58u;
            goto label_1d6b58;
        }
    }
    ctx->pc = 0x1D6B1Cu;
    // 0x1d6b1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6B1Cu;
    {
        const bool branch_taken_0x1d6b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B1Cu;
        // 0x1d6b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b1c) {
            ctx->pc = 0x1D6B34u;
            goto label_1d6b34;
        }
    }
    ctx->pc = 0x1D6B24u;
    // 0x1d6b24: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6B24u;
    {
        const bool branch_taken_0x1d6b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d6b24) {
            ctx->pc = 0x1D6B48u;
            goto label_1d6b48;
        }
    }
    ctx->pc = 0x1D6B2Cu;
    // 0x1d6b2c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D6B2Cu;
    {
        const bool branch_taken_0x1d6b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b2c) {
            ctx->pc = 0x1D6B78u;
            goto label_1d6b78;
        }
    }
    ctx->pc = 0x1D6B34u;
label_1d6b34:
    // 0x1d6b34: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d6b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d6b38: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6B38u;
    {
        const bool branch_taken_0x1d6b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d6b38) {
            ctx->pc = 0x1D6B70u;
            goto label_1d6b70;
        }
    }
    ctx->pc = 0x1D6B40u;
    // 0x1d6b40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D6B40u;
    {
        const bool branch_taken_0x1d6b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b40) {
            ctx->pc = 0x1D6B78u;
            goto label_1d6b78;
        }
    }
    ctx->pc = 0x1D6B48u;
label_1d6b48:
    // 0x1d6b48: 0xc09f48e  jal         func_27D238
    ctx->pc = 0x1D6B48u;
    SET_GPR_U32(ctx, 31, 0x1D6B50u);
    ctx->pc = 0x27D238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D238u, 0x1D6B48u, 0x1D6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B50u;
label_1d6b50:
    // 0x1d6b50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6B50u;
    {
        const bool branch_taken_0x1d6b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b50) {
            ctx->pc = 0x1D6B78u;
            goto label_1d6b78;
        }
    }
    ctx->pc = 0x1D6B58u;
label_1d6b58:
    // 0x1d6b58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d6b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b60: 0xc0c624a  jal         func_318928
    ctx->pc = 0x1D6B60u;
    SET_GPR_U32(ctx, 31, 0x1D6B68u);
    ctx->pc = 0x1D6B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B60u;
    // 0x1d6b64: 0x8c44bd48  lw          $a0, -0x42B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318928u, 0x1D6B60u, 0x1D6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B68u;
label_1d6b68:
    // 0x1d6b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6B68u;
    {
        const bool branch_taken_0x1d6b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b68) {
            ctx->pc = 0x1D6B78u;
            goto label_1d6b78;
        }
    }
    ctx->pc = 0x1D6B70u;
label_1d6b70:
    // 0x1d6b70: 0xc09f48e  jal         func_27D238
    ctx->pc = 0x1D6B70u;
    SET_GPR_U32(ctx, 31, 0x1D6B78u);
    ctx->pc = 0x27D238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D238u, 0x1D6B70u, 0x1D6B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B78u;
label_1d6b78:
    // 0x1d6b78: 0xc0db2b6  jal         func_36CAD8
    ctx->pc = 0x1D6B78u;
    SET_GPR_U32(ctx, 31, 0x1D6B80u);
    ctx->pc = 0x1D6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B78u;
    // 0x1d6b7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAD8u, 0x1D6B78u, 0x1D6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B80u;
label_1d6b80:
    // 0x1d6b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6b84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B84u;
        // 0x1d6b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6B8Cu;
    // 0x1d6b8c: 0x0  nop
    ctx->pc = 0x1d6b8cu;
    // NOP
    ctx->pc = 0x1d6b90u;
}
