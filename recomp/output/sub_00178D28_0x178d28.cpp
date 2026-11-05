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

// Function: sub_00178D28
// Address: 0x178d28 - 0x178dc8
void sub_00178D28_0x178d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178D28_0x178d28");
#endif

    switch (ctx->pc) {
        case 0x178da8u: goto label_178da8;
        case 0x178db0u: goto label_178db0;
        case 0x178db8u: goto label_178db8;
        default: break;
    }

    ctx->pc = 0x178d28u;

    // 0x178d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178d30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x178d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d38: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x178d3c: 0x5045001f  beql        $v0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x178D3Cu;
    {
        const bool branch_taken_0x178d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x178d3c) {
            ctx->pc = 0x178D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D3Cu;
            // 0x178d40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178DBCu;
            goto label_178dbc;
        }
    }
    ctx->pc = 0x178D44u;
    // 0x178d44: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178D44u;
    {
        const bool branch_taken_0x178d44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D44u;
        // 0x178d48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d44) {
            ctx->pc = 0x178D58u;
            goto label_178d58;
        }
    }
    ctx->pc = 0x178D4Cu;
    // 0x178d4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x178d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x178d50: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178D50u;
    {
        const bool branch_taken_0x178d50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x178d50) {
            ctx->pc = 0x178D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D50u;
            // 0x178d54: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D60u;
            goto label_178d60;
        }
    }
    ctx->pc = 0x178D58u;
label_178d58:
    // 0x178d58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x178d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178d5c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x178d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_178d60:
    // 0x178d60: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x178d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x178d64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x178D64u;
    {
        const bool branch_taken_0x178d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D64u;
        // 0x178d68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d64) {
            ctx->pc = 0x178D84u;
            goto label_178d84;
        }
    }
    ctx->pc = 0x178D6Cu;
    // 0x178d6c: 0x5c600009  bgtzl       $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x178D6Cu;
    {
        const bool branch_taken_0x178d6c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x178d6c) {
            ctx->pc = 0x178D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D6Cu;
            // 0x178d70: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D94u;
            goto label_178d94;
        }
    }
    ctx->pc = 0x178D74u;
    // 0x178d74: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x178D74u;
    {
        const bool branch_taken_0x178d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d74) {
            ctx->pc = 0x178D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D74u;
            // 0x178d78: 0x38c40001  xori        $a0, $a2, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D94u;
            goto label_178d94;
        }
    }
    ctx->pc = 0x178D7Cu;
    // 0x178d7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178D7Cu;
    {
        const bool branch_taken_0x178d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D7Cu;
        // 0x178d80: 0xae050020  sw          $a1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d7c) {
            ctx->pc = 0x178D98u;
            goto label_178d98;
        }
    }
    ctx->pc = 0x178D84u;
label_178d84:
    // 0x178d84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x178d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x178d88: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178D88u;
    {
        const bool branch_taken_0x178d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x178d88) {
            ctx->pc = 0x178D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D88u;
            // 0x178d8c: 0xae050020  sw          $a1, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D98u;
            goto label_178d98;
        }
    }
    ctx->pc = 0x178D90u;
    // 0x178d90: 0x38c40001  xori        $a0, $a2, 0x1
    ctx->pc = 0x178d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_178d94:
    // 0x178d94: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x178d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
label_178d98:
    // 0x178d98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178D98u;
    {
        const bool branch_taken_0x178d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D98u;
        // 0x178d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d98) {
            ctx->pc = 0x178DB0u;
            goto label_178db0;
        }
    }
    ctx->pc = 0x178DA0u;
    // 0x178da0: 0xc05ef40  jal         func_17BD00
    ctx->pc = 0x178DA0u;
    SET_GPR_U32(ctx, 31, 0x178DA8u);
    ctx->pc = 0x178DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DA0u;
    // 0x178da4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD00u, 0x178DA0u, 0x178DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DA8u;
label_178da8:
    // 0x178da8: 0xc05ee88  jal         func_17BA20
    ctx->pc = 0x178DA8u;
    SET_GPR_U32(ctx, 31, 0x178DB0u);
    ctx->pc = 0x178DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DA8u;
    // 0x178dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA20u, 0x178DA8u, 0x178DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DB0u;
label_178db0:
    // 0x178db0: 0xc05eec8  jal         func_17BB20
    ctx->pc = 0x178DB0u;
    SET_GPR_U32(ctx, 31, 0x178DB8u);
    ctx->pc = 0x178DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DB0u;
    // 0x178db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB20u, 0x178DB0u, 0x178DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DB8u;
label_178db8:
    // 0x178db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178dbc:
    // 0x178dbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x178DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DC0u;
        // 0x178dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178DC8u;
}
