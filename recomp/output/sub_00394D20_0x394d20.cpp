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

// Function: sub_00394D20
// Address: 0x394d20 - 0x394dd8
void sub_00394D20_0x394d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394D20_0x394d20");
#endif

    switch (ctx->pc) {
        case 0x394d58u: goto label_394d58;
        case 0x394d80u: goto label_394d80;
        case 0x394da0u: goto label_394da0;
        case 0x394da8u: goto label_394da8;
        case 0x394dbcu: goto label_394dbc;
        default: break;
    }

    ctx->pc = 0x394d20u;

    // 0x394d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x394d24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x394d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x394d28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x394d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x394d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x394d30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x394d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d34: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x394d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x394d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d40: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x394d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d44: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x394d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x394d48: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x394d48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x394d4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x394d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x394d50: 0xc0e5702  jal         func_395C08
    ctx->pc = 0x394D50u;
    SET_GPR_U32(ctx, 31, 0x394D58u);
    ctx->pc = 0x394D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394D50u;
    // 0x394d54: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395C08u, 0x394D50u, 0x394D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394D58u;
label_394d58:
    // 0x394d58: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394D58u;
    {
        const bool branch_taken_0x394d58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x394D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D58u;
        // 0x394d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d58) {
            ctx->pc = 0x394D68u;
            goto label_394d68;
        }
    }
    ctx->pc = 0x394D60u;
    // 0x394d60: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x394D60u;
    {
        const bool branch_taken_0x394d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D60u;
        // 0x394d64: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d60) {
            ctx->pc = 0x394DC0u;
            goto label_394dc0;
        }
    }
    ctx->pc = 0x394D68u;
label_394d68:
    // 0x394d68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x394d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394d6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x394d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x394d70: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x394d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x394d74: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x394d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x394d78: 0xc0e5778  jal         func_395DE0
    ctx->pc = 0x394D78u;
    SET_GPR_U32(ctx, 31, 0x394D80u);
    ctx->pc = 0x394D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394D78u;
    // 0x394d7c: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395DE0u, 0x394D78u, 0x394D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394D80u;
label_394d80:
    // 0x394d80: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x394d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x394d84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x394d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x394d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x394d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d8c: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x394d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x394d90: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x394d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x394d94: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x394d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x394d98: 0xc0e6636  jal         func_3998D8
    ctx->pc = 0x394D98u;
    SET_GPR_U32(ctx, 31, 0x394DA0u);
    ctx->pc = 0x394D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394D98u;
    // 0x394d9c: 0x8fa8000c  lw          $t0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3998D8u, 0x394D98u, 0x394DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394DA0u;
label_394da0:
    // 0x394da0: 0xc0e66ac  jal         func_399AB0
    ctx->pc = 0x394DA0u;
    SET_GPR_U32(ctx, 31, 0x394DA8u);
    ctx->pc = 0x394DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394DA0u;
    // 0x394da4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x394DA0u, 0x394DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394DA8u;
label_394da8:
    // 0x394da8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x394da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x394dac: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x394DACu;
    {
        const bool branch_taken_0x394dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x394dac) {
            ctx->pc = 0x394DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394DACu;
            // 0x394db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DC0u;
            goto label_394dc0;
        }
    }
    ctx->pc = 0x394DB4u;
    // 0x394db4: 0xc0e667c  jal         func_3999F0
    ctx->pc = 0x394DB4u;
    SET_GPR_U32(ctx, 31, 0x394DBCu);
    ctx->pc = 0x394DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394DB4u;
    // 0x394db8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3999F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3999F0u, 0x394DB4u, 0x394DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394DBCu;
label_394dbc:
    // 0x394dbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x394dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_394dc0:
    // 0x394dc0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x394dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394dc4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x394dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x394dc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x394dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x394DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DCCu;
        // 0x394dd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394DD4u;
    // 0x394dd4: 0x0  nop
    ctx->pc = 0x394dd4u;
    // NOP
    ctx->pc = 0x394dd8u;
}
