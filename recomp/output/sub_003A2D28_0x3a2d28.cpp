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

// Function: sub_003A2D28
// Address: 0x3a2d28 - 0x3a2d90
void sub_003A2D28_0x3a2d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2D28_0x3a2d28");
#endif

    switch (ctx->pc) {
        case 0x3a2d3cu: goto label_3a2d3c;
        case 0x3a2d54u: goto label_3a2d54;
        case 0x3a2d78u: goto label_3a2d78;
        default: break;
    }

    ctx->pc = 0x3a2d28u;

    // 0x3a2d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a2d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a2d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a2d30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a2d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a2d34: 0xc0eb27a  jal         func_3AC9E8
    ctx->pc = 0x3A2D34u;
    SET_GPR_U32(ctx, 31, 0x3A2D3Cu);
    ctx->pc = 0x3A2D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2D34u;
    // 0x3a2d38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9E8u, 0x3A2D34u, 0x3A2D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2D3Cu;
label_3a2d3c:
    // 0x3a2d3c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a2d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2d44: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2D44u;
    {
        const bool branch_taken_0x3a2d44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D44u;
        // 0x3a2d48: 0x2484d320  addiu       $a0, $a0, -0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d44) {
            ctx->pc = 0x3A2D60u;
            goto label_3a2d60;
        }
    }
    ctx->pc = 0x3A2D4Cu;
    // 0x3a2d4c: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A2D4Cu;
    SET_GPR_U32(ctx, 31, 0x3A2D54u);
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A2D4Cu, 0x3A2D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2D54u;
label_3a2d54:
    // 0x3a2d54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A2D54u;
    {
        const bool branch_taken_0x3a2d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D54u;
        // 0x3a2d58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d54) {
            ctx->pc = 0x3A2D84u;
            goto label_3a2d84;
        }
    }
    ctx->pc = 0x3A2D5Cu;
    // 0x3a2d5c: 0x0  nop
    ctx->pc = 0x3a2d5cu;
    // NOP
label_3a2d60:
    // 0x3a2d60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a2d64: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2D64u;
    {
        const bool branch_taken_0x3a2d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a2d64) {
            ctx->pc = 0x3A2D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2D64u;
            // 0x3a2d68: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2D80u;
            goto label_3a2d80;
        }
    }
    ctx->pc = 0x3A2D6Cu;
    // 0x3a2d6c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a2d70: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A2D70u;
    SET_GPR_U32(ctx, 31, 0x3A2D78u);
    ctx->pc = 0x3A2D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2D70u;
    // 0x3a2d74: 0x2484d340  addiu       $a0, $a0, -0x2CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A2D70u, 0x3A2D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2D78u;
label_3a2d78:
    // 0x3a2d78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A2D78u;
    {
        const bool branch_taken_0x3a2d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D78u;
        // 0x3a2d7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d78) {
            ctx->pc = 0x3A2D84u;
            goto label_3a2d84;
        }
    }
    ctx->pc = 0x3A2D80u;
label_3a2d80:
    // 0x3a2d80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2d84:
    // 0x3a2d84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a2d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a2d88: 0x80eb286  j           func_3ACA18
    ctx->pc = 0x3A2D88u;
    ctx->pc = 0x3A2D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2D88u;
    // 0x3a2d8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA18u;
    sub_003ACA18_0x3aca18(rdram, ctx, runtime); return;
    ctx->pc = 0x3A2D90u;
}
