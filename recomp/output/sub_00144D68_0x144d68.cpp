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

// Function: sub_00144D68
// Address: 0x144d68 - 0x144de8
void sub_00144D68_0x144d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144D68_0x144d68");
#endif

    switch (ctx->pc) {
        case 0x144d84u: goto label_144d84;
        case 0x144d90u: goto label_144d90;
        case 0x144da4u: goto label_144da4;
        case 0x144dc8u: goto label_144dc8;
        case 0x144dd8u: goto label_144dd8;
        default: break;
    }

    ctx->pc = 0x144d68u;

    // 0x144d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144d6c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x144d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144d70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144d74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x144d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x144d78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d7c: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x144D7Cu;
    SET_GPR_U32(ctx, 31, 0x144D84u);
    ctx->pc = 0x144D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D7Cu;
    // 0x144d80: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x144D7Cu, 0x144D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D84u;
label_144d84:
    // 0x144d84: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x144d84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x144d88: 0xc04e866  jal         func_13A198
    ctx->pc = 0x144D88u;
    SET_GPR_U32(ctx, 31, 0x144D90u);
    ctx->pc = 0x144D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D88u;
    // 0x144d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x144D88u, 0x144D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D90u;
label_144d90:
    // 0x144d90: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x144d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144d94: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x144D94u;
    {
        const bool branch_taken_0x144d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x144d94) {
            ctx->pc = 0x144D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144D94u;
            // 0x144d98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144DDCu;
            goto label_144ddc;
        }
    }
    ctx->pc = 0x144D9Cu;
    // 0x144d9c: 0xc04edba  jal         func_13B6E8
    ctx->pc = 0x144D9Cu;
    SET_GPR_U32(ctx, 31, 0x144DA4u);
    ctx->pc = 0x144DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D9Cu;
    // 0x144da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6E8u, 0x144D9Cu, 0x144DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DA4u;
label_144da4:
    // 0x144da4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x144DA4u;
    {
        const bool branch_taken_0x144da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144da4) {
            ctx->pc = 0x144DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144DA4u;
            // 0x144da8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144DDCu;
            goto label_144ddc;
        }
    }
    ctx->pc = 0x144DACu;
    // 0x144dac: 0x92020b11  lbu         $v0, 0xB11($s0)
    ctx->pc = 0x144dacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2833)));
    // 0x144db0: 0x92030b10  lbu         $v1, 0xB10($s0)
    ctx->pc = 0x144db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2832)));
    // 0x144db4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x144db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144db8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144DB8u;
    {
        const bool branch_taken_0x144db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144db8) {
            ctx->pc = 0x144DD0u;
            goto label_144dd0;
        }
    }
    ctx->pc = 0x144DC0u;
    // 0x144dc0: 0xc05139e  jal         func_144E78
    ctx->pc = 0x144DC0u;
    SET_GPR_U32(ctx, 31, 0x144DC8u);
    ctx->pc = 0x144DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DC0u;
    // 0x144dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144E78u, 0x144DC0u, 0x144DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DC8u;
label_144dc8:
    // 0x144dc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x144DC8u;
    {
        const bool branch_taken_0x144dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DC8u;
        // 0x144dcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144dc8) {
            ctx->pc = 0x144DDCu;
            goto label_144ddc;
        }
    }
    ctx->pc = 0x144DD0u;
label_144dd0:
    // 0x144dd0: 0xc04ec30  jal         func_13B0C0
    ctx->pc = 0x144DD0u;
    SET_GPR_U32(ctx, 31, 0x144DD8u);
    ctx->pc = 0x144DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DD0u;
    // 0x144dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B0C0u, 0x144DD0u, 0x144DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DD8u;
label_144dd8:
    // 0x144dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_144ddc:
    // 0x144ddc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x144ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144de0: 0x3e00008  jr          $ra
    ctx->pc = 0x144DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DE0u;
        // 0x144de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144DE8u;
}
