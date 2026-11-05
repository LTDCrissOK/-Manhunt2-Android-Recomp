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

// Function: sub_00398D00
// Address: 0x398d00 - 0x398da8
void sub_00398D00_0x398d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398D00_0x398d00");
#endif

    switch (ctx->pc) {
        case 0x398d24u: goto label_398d24;
        case 0x398d2cu: goto label_398d2c;
        case 0x398d34u: goto label_398d34;
        case 0x398d4cu: goto label_398d4c;
        case 0x398d68u: goto label_398d68;
        case 0x398d7cu: goto label_398d7c;
        case 0x398d84u: goto label_398d84;
        default: break;
    }

    ctx->pc = 0x398d00u;

    // 0x398d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x398d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x398d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x398d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398d0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x398d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x398d10: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x398d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x398d14: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x398D14u;
    {
        const bool branch_taken_0x398d14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x398d14) {
            ctx->pc = 0x398D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398D14u;
            // 0x398d18: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398D38u;
            goto label_398d38;
        }
    }
    ctx->pc = 0x398D1Cu;
    // 0x398d1c: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x398D1Cu;
    SET_GPR_U32(ctx, 31, 0x398D24u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x398D1Cu, 0x398D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D24u;
label_398d24:
    // 0x398d24: 0xc0e636a  jal         func_398DA8
    ctx->pc = 0x398D24u;
    SET_GPR_U32(ctx, 31, 0x398D2Cu);
    ctx->pc = 0x398D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D24u;
    // 0x398d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA8u, 0x398D24u, 0x398D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D2Cu;
label_398d2c:
    // 0x398d2c: 0xc0ebe56  jal         func_3AF958
    ctx->pc = 0x398D2Cu;
    SET_GPR_U32(ctx, 31, 0x398D34u);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x398D2Cu, 0x398D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D34u;
label_398d34:
    // 0x398d34: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x398d34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_398d38:
    // 0x398d38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x398d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x398d3c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x398D3Cu;
    {
        const bool branch_taken_0x398d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x398d3c) {
            ctx->pc = 0x398D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398D3Cu;
            // 0x398d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398D58u;
            goto label_398d58;
        }
    }
    ctx->pc = 0x398D44u;
    // 0x398d44: 0xc0e6314  jal         func_398C50
    ctx->pc = 0x398D44u;
    SET_GPR_U32(ctx, 31, 0x398D4Cu);
    ctx->pc = 0x398D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D44u;
    // 0x398d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398C50u, 0x398D44u, 0x398D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D4Cu;
label_398d4c:
    // 0x398d4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x398D4Cu;
    {
        const bool branch_taken_0x398d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D4Cu;
        // 0x398d50: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d4c) {
            ctx->pc = 0x398D6Cu;
            goto label_398d6c;
        }
    }
    ctx->pc = 0x398D54u;
    // 0x398d54: 0x0  nop
    ctx->pc = 0x398d54u;
    // NOP
label_398d58:
    // 0x398d58: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x398D58u;
    {
        const bool branch_taken_0x398d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x398d58) {
            ctx->pc = 0x398D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398D58u;
            // 0x398d5c: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398D6Cu;
            goto label_398d6c;
        }
    }
    ctx->pc = 0x398D60u;
    // 0x398d60: 0xc0e6078  jal         func_3981E0
    ctx->pc = 0x398D60u;
    SET_GPR_U32(ctx, 31, 0x398D68u);
    ctx->pc = 0x398D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D60u;
    // 0x398d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3981E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3981E0u, 0x398D60u, 0x398D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D68u;
label_398d68:
    // 0x398d68: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x398d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_398d6c:
    // 0x398d6c: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x398D6Cu;
    {
        const bool branch_taken_0x398d6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x398d6c) {
            ctx->pc = 0x398D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398D6Cu;
            // 0x398d70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398D98u;
            goto label_398d98;
        }
    }
    ctx->pc = 0x398D74u;
    // 0x398d74: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x398D74u;
    SET_GPR_U32(ctx, 31, 0x398D7Cu);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x398D74u, 0x398D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D7Cu;
label_398d7c:
    // 0x398d7c: 0xc0e63be  jal         func_398EF8
    ctx->pc = 0x398D7Cu;
    SET_GPR_U32(ctx, 31, 0x398D84u);
    ctx->pc = 0x398D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D7Cu;
    // 0x398d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398EF8u, 0x398D7Cu, 0x398D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D84u;
label_398d84:
    // 0x398d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398d88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x398d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x398d8c: 0x80ebe56  j           func_3AF958
    ctx->pc = 0x398D8Cu;
    ctx->pc = 0x398D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D8Cu;
    // 0x398d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    sub_003AF958_0x3af958(rdram, ctx, runtime); return;
    ctx->pc = 0x398D94u;
    // 0x398d94: 0x0  nop
    ctx->pc = 0x398d94u;
    // NOP
label_398d98:
    // 0x398d98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x398d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x398d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x398D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D9Cu;
        // 0x398da0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398DA4u;
    // 0x398da4: 0x0  nop
    ctx->pc = 0x398da4u;
    // NOP
    ctx->pc = 0x398da8u;
}
