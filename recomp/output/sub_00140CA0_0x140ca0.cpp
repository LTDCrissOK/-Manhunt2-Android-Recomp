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

// Function: sub_00140CA0
// Address: 0x140ca0 - 0x140d28
void sub_00140CA0_0x140ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140CA0_0x140ca0");
#endif

    switch (ctx->pc) {
        case 0x140cb4u: goto label_140cb4;
        case 0x140cc4u: goto label_140cc4;
        case 0x140cd4u: goto label_140cd4;
        case 0x140ce4u: goto label_140ce4;
        case 0x140cf4u: goto label_140cf4;
        case 0x140d18u: goto label_140d18;
        default: break;
    }

    ctx->pc = 0x140ca0u;

    // 0x140ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140ca8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x140ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x140cac: 0xc05034a  jal         func_140D28
    ctx->pc = 0x140CACu;
    SET_GPR_U32(ctx, 31, 0x140CB4u);
    ctx->pc = 0x140CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CACu;
    // 0x140cb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D28u, 0x140CACu, 0x140CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CB4u;
label_140cb4:
    // 0x140cb4: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x140CB4u;
    {
        const bool branch_taken_0x140cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140cb4) {
            ctx->pc = 0x140CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140CB4u;
            // 0x140cb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140D1Cu;
            goto label_140d1c;
        }
    }
    ctx->pc = 0x140CBCu;
    // 0x140cbc: 0xc050352  jal         func_140D48
    ctx->pc = 0x140CBCu;
    SET_GPR_U32(ctx, 31, 0x140CC4u);
    ctx->pc = 0x140CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CBCu;
    // 0x140cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D48u, 0x140CBCu, 0x140CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CC4u;
label_140cc4:
    // 0x140cc4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x140CC4u;
    {
        const bool branch_taken_0x140cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140cc4) {
            ctx->pc = 0x140CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140CC4u;
            // 0x140cc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140D1Cu;
            goto label_140d1c;
        }
    }
    ctx->pc = 0x140CCCu;
    // 0x140ccc: 0xc050362  jal         func_140D88
    ctx->pc = 0x140CCCu;
    SET_GPR_U32(ctx, 31, 0x140CD4u);
    ctx->pc = 0x140CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CCCu;
    // 0x140cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D88u, 0x140CCCu, 0x140CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CD4u;
label_140cd4:
    // 0x140cd4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x140CD4u;
    {
        const bool branch_taken_0x140cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140cd4) {
            ctx->pc = 0x140CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140CD4u;
            // 0x140cd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140D1Cu;
            goto label_140d1c;
        }
    }
    ctx->pc = 0x140CDCu;
    // 0x140cdc: 0xc050374  jal         func_140DD0
    ctx->pc = 0x140CDCu;
    SET_GPR_U32(ctx, 31, 0x140CE4u);
    ctx->pc = 0x140CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CDCu;
    // 0x140ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140DD0u, 0x140CDCu, 0x140CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CE4u;
label_140ce4:
    // 0x140ce4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x140CE4u;
    {
        const bool branch_taken_0x140ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140ce4) {
            ctx->pc = 0x140CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140CE4u;
            // 0x140ce8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140D1Cu;
            goto label_140d1c;
        }
    }
    ctx->pc = 0x140CECu;
    // 0x140cec: 0xc050386  jal         func_140E18
    ctx->pc = 0x140CECu;
    SET_GPR_U32(ctx, 31, 0x140CF4u);
    ctx->pc = 0x140CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CECu;
    // 0x140cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140E18u, 0x140CECu, 0x140CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CF4u;
label_140cf4:
    // 0x140cf4: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x140cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x140cf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140CF8u;
    {
        const bool branch_taken_0x140cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CF8u;
        // 0x140cfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140cf8) {
            ctx->pc = 0x140D18u;
            goto label_140d18;
        }
    }
    ctx->pc = 0x140D00u;
    // 0x140d00: 0x8e030520  lw          $v1, 0x520($s0)
    ctx->pc = 0x140d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x140d04: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140D04u;
    {
        const bool branch_taken_0x140d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x140d04) {
            ctx->pc = 0x140D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140D04u;
            // 0x140d08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140D1Cu;
            goto label_140d1c;
        }
    }
    ctx->pc = 0x140D0Cu;
    // 0x140d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d10: 0xc0503d0  jal         func_140F40
    ctx->pc = 0x140D10u;
    SET_GPR_U32(ctx, 31, 0x140D18u);
    ctx->pc = 0x140D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D10u;
    // 0x140d14: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F40u, 0x140D10u, 0x140D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D18u;
label_140d18:
    // 0x140d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140d1c:
    // 0x140d1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x140d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140d20: 0x3e00008  jr          $ra
    ctx->pc = 0x140D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D20u;
        // 0x140d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140D28u;
}
