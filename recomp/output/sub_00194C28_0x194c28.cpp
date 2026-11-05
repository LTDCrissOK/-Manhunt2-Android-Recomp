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

// Function: sub_00194C28
// Address: 0x194c28 - 0x194cf8
void sub_00194C28_0x194c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194C28_0x194c28");
#endif

    switch (ctx->pc) {
        case 0x194c3cu: goto label_194c3c;
        case 0x194c64u: goto label_194c64;
        case 0x194c84u: goto label_194c84;
        case 0x194c94u: goto label_194c94;
        case 0x194cbcu: goto label_194cbc;
        case 0x194cdcu: goto label_194cdc;
        case 0x194ce4u: goto label_194ce4;
        default: break;
    }

    ctx->pc = 0x194c28u;

    // 0x194c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x194c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x194c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194c30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x194c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x194c34: 0xc061a12  jal         func_186848
    ctx->pc = 0x194C34u;
    SET_GPR_U32(ctx, 31, 0x194C3Cu);
    ctx->pc = 0x194C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C34u;
    // 0x194c38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194C34u, 0x194C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C3Cu;
label_194c3c:
    // 0x194c3c: 0x24430170  addiu       $v1, $v0, 0x170
    ctx->pc = 0x194c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x194c40: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x194c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x194c44: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x194c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x194c48: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x194C48u;
    {
        const bool branch_taken_0x194c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C48u;
        // 0x194c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c48) {
            ctx->pc = 0x194C54u;
            goto label_194c54;
        }
    }
    ctx->pc = 0x194C50u;
    // 0x194c50: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x194c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_194c54:
    // 0x194c54: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x194C54u;
    {
        const bool branch_taken_0x194c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c54) {
            ctx->pc = 0x194CDCu;
            goto label_194cdc;
        }
    }
    ctx->pc = 0x194C5Cu;
    // 0x194c5c: 0xc061a12  jal         func_186848
    ctx->pc = 0x194C5Cu;
    SET_GPR_U32(ctx, 31, 0x194C64u);
    ctx->pc = 0x194C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C5Cu;
    // 0x194c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194C5Cu, 0x194C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C64u;
label_194c64:
    // 0x194c64: 0x24440170  addiu       $a0, $v0, 0x170
    ctx->pc = 0x194c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x194c68: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x194c6c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x194c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x194c70: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x194C70u;
    {
        const bool branch_taken_0x194c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c70) {
            ctx->pc = 0x194C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194C70u;
            // 0x194c74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194C7Cu;
            goto label_194c7c;
        }
    }
    ctx->pc = 0x194C78u;
    // 0x194c78: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x194c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_194c7c:
    // 0x194c7c: 0xc0414a2  jal         func_105288
    ctx->pc = 0x194C7Cu;
    SET_GPR_U32(ctx, 31, 0x194C84u);
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x194C7Cu, 0x194C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C84u;
label_194c84:
    // 0x194c84: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x194C84u;
    {
        const bool branch_taken_0x194c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c84) {
            ctx->pc = 0x194CDCu;
            goto label_194cdc;
        }
    }
    ctx->pc = 0x194C8Cu;
    // 0x194c8c: 0xc061a12  jal         func_186848
    ctx->pc = 0x194C8Cu;
    SET_GPR_U32(ctx, 31, 0x194C94u);
    ctx->pc = 0x194C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C8Cu;
    // 0x194c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194C8Cu, 0x194C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C94u;
label_194c94:
    // 0x194c94: 0x24430170  addiu       $v1, $v0, 0x170
    ctx->pc = 0x194c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x194c98: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x194c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x194c9c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x194c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x194ca0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x194CA0u;
    {
        const bool branch_taken_0x194ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CA0u;
        // 0x194ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ca0) {
            ctx->pc = 0x194CACu;
            goto label_194cac;
        }
    }
    ctx->pc = 0x194CA8u;
    // 0x194ca8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x194ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_194cac:
    // 0x194cac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x194CACu;
    {
        const bool branch_taken_0x194cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194cac) {
            ctx->pc = 0x194CDCu;
            goto label_194cdc;
        }
    }
    ctx->pc = 0x194CB4u;
    // 0x194cb4: 0xc061a12  jal         func_186848
    ctx->pc = 0x194CB4u;
    SET_GPR_U32(ctx, 31, 0x194CBCu);
    ctx->pc = 0x194CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CB4u;
    // 0x194cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194CB4u, 0x194CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CBCu;
label_194cbc:
    // 0x194cbc: 0x24450170  addiu       $a1, $v0, 0x170
    ctx->pc = 0x194cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x194cc0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x194cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x194cc4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x194cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x194cc8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x194CC8u;
    {
        const bool branch_taken_0x194cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194cc8) {
            ctx->pc = 0x194CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194CC8u;
            // 0x194ccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194CD4u;
            goto label_194cd4;
        }
    }
    ctx->pc = 0x194CD0u;
    // 0x194cd0: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x194cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_194cd4:
    // 0x194cd4: 0xc0655f6  jal         func_1957D8
    ctx->pc = 0x194CD4u;
    SET_GPR_U32(ctx, 31, 0x194CDCu);
    ctx->pc = 0x194CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CD4u;
    // 0x194cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1957D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1957D8u, 0x194CD4u, 0x194CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CDCu;
label_194cdc:
    // 0x194cdc: 0xc0651b2  jal         func_1946C8
    ctx->pc = 0x194CDCu;
    SET_GPR_U32(ctx, 31, 0x194CE4u);
    ctx->pc = 0x194CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CDCu;
    // 0x194ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1946C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1946C8u, 0x194CDCu, 0x194CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CE4u;
label_194ce4:
    // 0x194ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x194ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194ce8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x194ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x194cec: 0x3e00008  jr          $ra
    ctx->pc = 0x194CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CECu;
        // 0x194cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194CF4u;
    // 0x194cf4: 0x0  nop
    ctx->pc = 0x194cf4u;
    // NOP
    ctx->pc = 0x194cf8u;
}
