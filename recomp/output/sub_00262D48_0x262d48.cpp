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

// Function: sub_00262D48
// Address: 0x262d48 - 0x262d98
void sub_00262D48_0x262d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262D48_0x262d48");
#endif

    switch (ctx->pc) {
        case 0x262d48u: goto label_262d48;
        case 0x262d4cu: goto label_262d4c;
        case 0x262d50u: goto label_262d50;
        case 0x262d54u: goto label_262d54;
        case 0x262d58u: goto label_262d58;
        case 0x262d5cu: goto label_262d5c;
        case 0x262d60u: goto label_262d60;
        case 0x262d64u: goto label_262d64;
        case 0x262d68u: goto label_262d68;
        case 0x262d6cu: goto label_262d6c;
        case 0x262d70u: goto label_262d70;
        case 0x262d74u: goto label_262d74;
        case 0x262d78u: goto label_262d78;
        case 0x262d7cu: goto label_262d7c;
        case 0x262d80u: goto label_262d80;
        case 0x262d84u: goto label_262d84;
        case 0x262d88u: goto label_262d88;
        case 0x262d8cu: goto label_262d8c;
        case 0x262d90u: goto label_262d90;
        case 0x262d94u: goto label_262d94;
        default: break;
    }

    ctx->pc = 0x262d48u;

label_262d48:
    // 0x262d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_262d4c:
    // 0x262d4c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_262d50:
    if (ctx->pc == 0x262D50u) {
        ctx->pc = 0x262D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D4Cu;
        // 0x262d50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D54u;
        goto label_262d54;
    }
    ctx->pc = 0x262D4Cu;
    {
        const bool branch_taken_0x262d4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x262D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D4Cu;
        // 0x262d50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d4c) {
            ctx->pc = 0x262D60u;
            goto label_262d60;
        }
    }
    ctx->pc = 0x262D54u;
label_262d54:
    // 0x262d54: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x262d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_262d58:
    // 0x262d58: 0x10000006  b           . + 4 + (0x6 << 2)
label_262d5c:
    if (ctx->pc == 0x262D5Cu) {
        ctx->pc = 0x262D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D58u;
        // 0x262d5c: 0xac820280  sw          $v0, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D60u;
        goto label_262d60;
    }
    ctx->pc = 0x262D58u;
    {
        const bool branch_taken_0x262d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D58u;
        // 0x262d5c: 0xac820280  sw          $v0, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d58) {
            ctx->pc = 0x262D74u;
            goto label_262d74;
        }
    }
    ctx->pc = 0x262D60u;
label_262d60:
    // 0x262d60: 0x8c840278  lw          $a0, 0x278($a0)
    ctx->pc = 0x262d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_262d64:
    // 0x262d64: 0xc0d8e98  jal         func_363A60
label_262d68:
    if (ctx->pc == 0x262D68u) {
        ctx->pc = 0x262D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D64u;
        // 0x262d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D6Cu;
        goto label_262d6c;
    }
    ctx->pc = 0x262D64u;
    SET_GPR_U32(ctx, 31, 0x262D6Cu);
    ctx->pc = 0x262D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D64u;
    // 0x262d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x262D64u, 0x262D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D6Cu;
label_262d6c:
    // 0x262d6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_262d70:
    if (ctx->pc == 0x262D70u) {
        ctx->pc = 0x262D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D6Cu;
        // 0x262d70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D74u;
        goto label_262d74;
    }
    ctx->pc = 0x262D6Cu;
    {
        const bool branch_taken_0x262d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D6Cu;
        // 0x262d70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d6c) {
            ctx->pc = 0x262D8Cu;
            goto label_262d8c;
        }
    }
    ctx->pc = 0x262D74u;
label_262d74:
    // 0x262d74: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x262d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_262d78:
    // 0x262d78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x262d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262d7c:
    // 0x262d7c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x262d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_262d80:
    // 0x262d80: 0x40f809  jalr        $v0
label_262d84:
    if (ctx->pc == 0x262D84u) {
        ctx->pc = 0x262D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D80u;
        // 0x262d84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D88u;
        goto label_262d88;
    }
    ctx->pc = 0x262D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262D88u);
        ctx->pc = 0x262D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D80u;
        // 0x262d84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262D80u, 0x262D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262D88u;
label_262d88:
    // 0x262d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_262d8c:
    // 0x262d8c: 0x3e00008  jr          $ra
label_262d90:
    if (ctx->pc == 0x262D90u) {
        ctx->pc = 0x262D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D8Cu;
        // 0x262d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D94u;
        goto label_262d94;
    }
    ctx->pc = 0x262D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D8Cu;
        // 0x262d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262D94u;
label_262d94:
    // 0x262d94: 0x0  nop
    ctx->pc = 0x262d94u;
    // NOP
    ctx->pc = 0x262d98u;
}
