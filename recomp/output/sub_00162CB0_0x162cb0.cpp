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

// Function: sub_00162CB0
// Address: 0x162cb0 - 0x162d48
void sub_00162CB0_0x162cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162CB0_0x162cb0");
#endif

    switch (ctx->pc) {
        case 0x162d14u: goto label_162d14;
        case 0x162d2cu: goto label_162d2c;
        default: break;
    }

    ctx->pc = 0x162cb0u;

    // 0x162cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162cb4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x162cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x162cb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162cbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x162cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162cc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x162cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x162cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x162ccc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x162cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x162cd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162cd4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x162cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cd8: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x162CD8u;
    {
        const bool branch_taken_0x162cd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x162CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CD8u;
        // 0x162cdc: 0x8c510364  lw          $s1, 0x364($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162cd8) {
            ctx->pc = 0x162D04u;
            goto label_162d04;
        }
    }
    ctx->pc = 0x162CE0u;
    // 0x162ce0: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x162ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x162ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x162ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162ce8: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x162ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x162cec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162CECu;
    {
        const bool branch_taken_0x162cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x162cec) {
            ctx->pc = 0x162CFCu;
            goto label_162cfc;
        }
    }
    ctx->pc = 0x162CF4u;
    // 0x162cf4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x162CF4u;
    {
        const bool branch_taken_0x162cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CF4u;
        // 0x162cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162cf4) {
            ctx->pc = 0x162D30u;
            goto label_162d30;
        }
    }
    ctx->pc = 0x162CFCu;
label_162cfc:
    // 0x162cfc: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x162CFCu;
    {
        const bool branch_taken_0x162cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x162cfc) {
            ctx->pc = 0x162D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162CFCu;
            // 0x162d00: 0x8e110368  lw          $s1, 0x368($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162D04u;
            goto label_162d04;
        }
    }
    ctx->pc = 0x162D04u;
label_162d04:
    // 0x162d04: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x162d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d0c: 0xc058b52  jal         func_162D48
    ctx->pc = 0x162D0Cu;
    SET_GPR_U32(ctx, 31, 0x162D14u);
    ctx->pc = 0x162D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D0Cu;
    // 0x162d10: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162D48u, 0x162D0Cu, 0x162D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D14u;
label_162d14:
    // 0x162d14: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x162D14u;
    {
        const bool branch_taken_0x162d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162d14) {
            ctx->pc = 0x162D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162D14u;
            // 0x162d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162D30u;
            goto label_162d30;
        }
    }
    ctx->pc = 0x162D1Cu;
    // 0x162d1c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x162d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x162d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d24: 0xc058b52  jal         func_162D48
    ctx->pc = 0x162D24u;
    SET_GPR_U32(ctx, 31, 0x162D2Cu);
    ctx->pc = 0x162D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D24u;
    // 0x162d28: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162D48u, 0x162D24u, 0x162D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D2Cu;
label_162d2c:
    // 0x162d2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x162d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_162d30:
    // 0x162d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162d38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162d3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x162d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162d40: 0x3e00008  jr          $ra
    ctx->pc = 0x162D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D40u;
        // 0x162d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162D48u;
}
