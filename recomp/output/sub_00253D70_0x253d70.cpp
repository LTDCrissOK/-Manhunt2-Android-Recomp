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

// Function: sub_00253D70
// Address: 0x253d70 - 0x253de8
void sub_00253D70_0x253d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253D70_0x253d70");
#endif

    switch (ctx->pc) {
        case 0x253db0u: goto label_253db0;
        case 0x253dbcu: goto label_253dbc;
        case 0x253dc4u: goto label_253dc4;
        default: break;
    }

    ctx->pc = 0x253d70u;

    // 0x253d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253d78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x253d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253d84: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x253d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x253d88: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253d8c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x253D8Cu;
    {
        const bool branch_taken_0x253d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D8Cu;
        // 0x253d90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d8c) {
            ctx->pc = 0x253DCCu;
            goto label_253dcc;
        }
    }
    ctx->pc = 0x253D94u;
    // 0x253d94: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x253d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x253d98: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x253d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253d9c: 0xae031060  sw          $v1, 0x1060($s0)
    ctx->pc = 0x253d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 3));
    // 0x253da0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253da4: 0xac44035c  sw          $a0, 0x35C($v0)
    ctx->pc = 0x253da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    // 0x253da8: 0xc0944da  jal         func_251368
    ctx->pc = 0x253DA8u;
    SET_GPR_U32(ctx, 31, 0x253DB0u);
    ctx->pc = 0x253DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DA8u;
    // 0x253dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x253DA8u, 0x253DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DB0u;
label_253db0:
    // 0x253db0: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x253db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x253db4: 0xc061e80  jal         func_187A00
    ctx->pc = 0x253DB4u;
    SET_GPR_U32(ctx, 31, 0x253DBCu);
    ctx->pc = 0x253DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DB4u;
    // 0x253db8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187A00u, 0x253DB4u, 0x253DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DBCu;
label_253dbc:
    // 0x253dbc: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x253DBCu;
    SET_GPR_U32(ctx, 31, 0x253DC4u);
    ctx->pc = 0x253DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DBCu;
    // 0x253dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x253DBCu, 0x253DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DC4u;
label_253dc4:
    // 0x253dc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x253DC4u;
    {
        const bool branch_taken_0x253dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DC4u;
        // 0x253dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253dc4) {
            ctx->pc = 0x253DD0u;
            goto label_253dd0;
        }
    }
    ctx->pc = 0x253DCCu;
label_253dcc:
    // 0x253dcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x253dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253dd0:
    // 0x253dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x253DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DDCu;
        // 0x253de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253DE4u;
    // 0x253de4: 0x0  nop
    ctx->pc = 0x253de4u;
    // NOP
    ctx->pc = 0x253de8u;
}
