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

// Function: sub_00395AF8
// Address: 0x395af8 - 0x395b78
void sub_00395AF8_0x395af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395AF8_0x395af8");
#endif

    switch (ctx->pc) {
        case 0x395b60u: goto label_395b60;
        default: break;
    }

    ctx->pc = 0x395af8u;

    // 0x395af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395afc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x395afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x395b00: 0x2c840100  sltiu       $a0, $a0, 0x100
    ctx->pc = 0x395b00u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x395b04: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x395B04u;
    {
        const bool branch_taken_0x395b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x395B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B04u;
        // 0x395b08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b04) {
            ctx->pc = 0x395B18u;
            goto label_395b18;
        }
    }
    ctx->pc = 0x395B0Cu;
    // 0x395b0c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x395b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x395b10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x395B10u;
    {
        const bool branch_taken_0x395b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B10u;
        // 0x395b14: 0x2484ac68  addiu       $a0, $a0, -0x5398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b10) {
            ctx->pc = 0x395B58u;
            goto label_395b58;
        }
    }
    ctx->pc = 0x395B18u;
label_395b18:
    // 0x395b18: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x395b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x395b1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x395b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x395b20: 0x8c84e548  lw          $a0, -0x1AB8($a0)
    ctx->pc = 0x395b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960456)));
    // 0x395b24: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x395B24u;
    {
        const bool branch_taken_0x395b24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x395b24) {
            ctx->pc = 0x395B38u;
            goto label_395b38;
        }
    }
    ctx->pc = 0x395B2Cu;
    // 0x395b2c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x395b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x395b30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x395B30u;
    {
        const bool branch_taken_0x395b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B30u;
        // 0x395b34: 0x2484ac68  addiu       $a0, $a0, -0x5398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b30) {
            ctx->pc = 0x395B58u;
            goto label_395b58;
        }
    }
    ctx->pc = 0x395B38u;
label_395b38:
    // 0x395b38: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x395B38u;
    {
        const bool branch_taken_0x395b38 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x395b38) {
            ctx->pc = 0x395B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395B38u;
            // 0x395b3c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395B54u;
            goto label_395b54;
        }
    }
    ctx->pc = 0x395B40u;
    // 0x395b40: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x395b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x395b44: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x395b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x395b48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x395B48u;
    {
        const bool branch_taken_0x395b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B48u;
        // 0x395b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b48) {
            ctx->pc = 0x395B64u;
            goto label_395b64;
        }
    }
    ctx->pc = 0x395B50u;
    // 0x395b50: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x395b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_395b54:
    // 0x395b54: 0x2484ac90  addiu       $a0, $a0, -0x5370
    ctx->pc = 0x395b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945936));
label_395b58:
    // 0x395b58: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x395B58u;
    SET_GPR_U32(ctx, 31, 0x395B60u);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x395B58u, 0x395B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395B60u;
label_395b60:
    // 0x395b60: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x395b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_395b64:
    // 0x395b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395b68: 0x3e00008  jr          $ra
    ctx->pc = 0x395B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B68u;
        // 0x395b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395B70u;
    // 0x395b70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x395b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x395b74: 0x0  nop
    ctx->pc = 0x395b74u;
    // NOP
    ctx->pc = 0x395b78u;
}
