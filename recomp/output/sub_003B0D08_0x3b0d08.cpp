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

// Function: sub_003B0D08
// Address: 0x3b0d08 - 0x3b0da0
void sub_003B0D08_0x3b0d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0D08_0x3b0d08");
#endif

    switch (ctx->pc) {
        case 0x3b0d20u: goto label_3b0d20;
        case 0x3b0d60u: goto label_3b0d60;
        case 0x3b0d70u: goto label_3b0d70;
        case 0x3b0d78u: goto label_3b0d78;
        case 0x3b0d80u: goto label_3b0d80;
        case 0x3b0d88u: goto label_3b0d88;
        case 0x3b0d90u: goto label_3b0d90;
        default: break;
    }

    ctx->pc = 0x3b0d08u;

    // 0x3b0d08: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b0d0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b0d10: 0x8c444880  lw          $a0, 0x4880($v0)
    ctx->pc = 0x3b0d10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x424880u));
    // 0x3b0d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b0d18: 0xc0ec38e  jal         func_3B0E38
    ctx->pc = 0x3B0D18u;
    SET_GPR_U32(ctx, 31, 0x3B0D20u);
    ctx->pc = 0x3B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0E38u, 0x3B0D18u, 0x3B0D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D20u;
label_3b0d20:
    // 0x3b0d20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b0d20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0d28: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B0D28u;
    {
        const bool branch_taken_0x3b0d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D28u;
        // 0x3b0d2c: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d28) {
            ctx->pc = 0x3B0D90u;
            goto label_3b0d90;
        }
    }
    ctx->pc = 0x3B0D30u;
    // 0x3b0d30: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B0D30u;
    {
        const bool branch_taken_0x3b0d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D30u;
        // 0x3b0d34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d30) {
            ctx->pc = 0x3B0D94u;
            goto label_3b0d94;
        }
    }
    ctx->pc = 0x3B0D38u;
    // 0x3b0d38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b0d3c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B0D3Cu;
    {
        const bool branch_taken_0x3b0d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D3Cu;
        // 0x3b0d40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d3c) {
            ctx->pc = 0x3B0D58u;
            goto label_3b0d58;
        }
    }
    ctx->pc = 0x3B0D44u;
    // 0x3b0d44: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B0D44u;
    {
        const bool branch_taken_0x3b0d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D44u;
        // 0x3b0d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d44) {
            ctx->pc = 0x3B0D68u;
            goto label_3b0d68;
        }
    }
    ctx->pc = 0x3B0D4Cu;
    // 0x3b0d4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3B0D4Cu;
    {
        const bool branch_taken_0x3b0d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0d4c) {
            ctx->pc = 0x3B0D98u;
            goto label_3b0d98;
        }
    }
    ctx->pc = 0x3B0D54u;
    // 0x3b0d54: 0x0  nop
    ctx->pc = 0x3b0d54u;
    // NOP
label_3b0d58:
    // 0x3b0d58: 0xc0eb420  jal         func_3AD080
    ctx->pc = 0x3B0D58u;
    SET_GPR_U32(ctx, 31, 0x3B0D60u);
    ctx->pc = 0x3AD080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD080u, 0x3B0D58u, 0x3B0D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D60u;
label_3b0d60:
    // 0x3b0d60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B0D60u;
    {
        const bool branch_taken_0x3b0d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D60u;
        // 0x3b0d64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d60) {
            ctx->pc = 0x3B0D94u;
            goto label_3b0d94;
        }
    }
    ctx->pc = 0x3B0D68u;
label_3b0d68:
    // 0x3b0d68: 0xc0eb420  jal         func_3AD080
    ctx->pc = 0x3B0D68u;
    SET_GPR_U32(ctx, 31, 0x3B0D70u);
    ctx->pc = 0x3AD080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD080u, 0x3B0D68u, 0x3B0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D70u;
label_3b0d70:
    // 0x3b0d70: 0xc0eb426  jal         func_3AD098
    ctx->pc = 0x3B0D70u;
    SET_GPR_U32(ctx, 31, 0x3B0D78u);
    ctx->pc = 0x3AD098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD098u, 0x3B0D70u, 0x3B0D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D78u;
label_3b0d78:
    // 0x3b0d78: 0xc0eb42c  jal         func_3AD0B0
    ctx->pc = 0x3B0D78u;
    SET_GPR_U32(ctx, 31, 0x3B0D80u);
    ctx->pc = 0x3AD0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0B0u, 0x3B0D78u, 0x3B0D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D80u;
label_3b0d80:
    // 0x3b0d80: 0xc0eb432  jal         func_3AD0C8
    ctx->pc = 0x3B0D80u;
    SET_GPR_U32(ctx, 31, 0x3B0D88u);
    ctx->pc = 0x3AD0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0C8u, 0x3B0D80u, 0x3B0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D88u;
label_3b0d88:
    // 0x3b0d88: 0xc0eb43e  jal         func_3AD0F8
    ctx->pc = 0x3B0D88u;
    SET_GPR_U32(ctx, 31, 0x3B0D90u);
    ctx->pc = 0x3AD0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0F8u, 0x3B0D88u, 0x3B0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D90u;
label_3b0d90:
    // 0x3b0d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0d94:
    // 0x3b0d94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d98:
    // 0x3b0d98: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D98u;
        // 0x3b0d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0DA0u;
}
