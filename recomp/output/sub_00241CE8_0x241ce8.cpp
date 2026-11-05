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

// Function: sub_00241CE8
// Address: 0x241ce8 - 0x241d70
void sub_00241CE8_0x241ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241CE8_0x241ce8");
#endif

    switch (ctx->pc) {
        case 0x241ce8u: goto label_241ce8;
        case 0x241cecu: goto label_241cec;
        case 0x241cf0u: goto label_241cf0;
        case 0x241cf4u: goto label_241cf4;
        case 0x241cf8u: goto label_241cf8;
        case 0x241cfcu: goto label_241cfc;
        case 0x241d00u: goto label_241d00;
        case 0x241d04u: goto label_241d04;
        case 0x241d08u: goto label_241d08;
        case 0x241d0cu: goto label_241d0c;
        case 0x241d10u: goto label_241d10;
        case 0x241d14u: goto label_241d14;
        case 0x241d18u: goto label_241d18;
        case 0x241d1cu: goto label_241d1c;
        case 0x241d20u: goto label_241d20;
        case 0x241d24u: goto label_241d24;
        case 0x241d28u: goto label_241d28;
        case 0x241d2cu: goto label_241d2c;
        case 0x241d30u: goto label_241d30;
        case 0x241d34u: goto label_241d34;
        case 0x241d38u: goto label_241d38;
        case 0x241d3cu: goto label_241d3c;
        case 0x241d40u: goto label_241d40;
        case 0x241d44u: goto label_241d44;
        case 0x241d48u: goto label_241d48;
        case 0x241d4cu: goto label_241d4c;
        case 0x241d50u: goto label_241d50;
        case 0x241d54u: goto label_241d54;
        case 0x241d58u: goto label_241d58;
        case 0x241d5cu: goto label_241d5c;
        case 0x241d60u: goto label_241d60;
        case 0x241d64u: goto label_241d64;
        case 0x241d68u: goto label_241d68;
        case 0x241d6cu: goto label_241d6c;
        default: break;
    }

    ctx->pc = 0x241ce8u;

label_241ce8:
    // 0x241ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_241cec:
    // 0x241cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_241cf0:
    // 0x241cf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x241cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_241cf4:
    // 0x241cf4: 0xc08dada  jal         func_236B68
label_241cf8:
    if (ctx->pc == 0x241CF8u) {
        ctx->pc = 0x241CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CF4u;
        // 0x241cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241CFCu;
        goto label_241cfc;
    }
    ctx->pc = 0x241CF4u;
    SET_GPR_U32(ctx, 31, 0x241CFCu);
    ctx->pc = 0x241CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241CF4u;
    // 0x241cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x241CF4u, 0x241CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CFCu;
label_241cfc:
    // 0x241cfc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_241d00:
    if (ctx->pc == 0x241D00u) {
        ctx->pc = 0x241D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CFCu;
        // 0x241d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D04u;
        goto label_241d04;
    }
    ctx->pc = 0x241CFCu;
    {
        const bool branch_taken_0x241cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CFCu;
        // 0x241d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cfc) {
            ctx->pc = 0x241D24u;
            goto label_241d24;
        }
    }
    ctx->pc = 0x241D04u;
label_241d04:
    // 0x241d04: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x241d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_241d08:
    // 0x241d08: 0x24050571  addiu       $a1, $zero, 0x571
    ctx->pc = 0x241d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1393));
label_241d0c:
    // 0x241d0c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x241d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_241d10:
    // 0x241d10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241d14:
    // 0x241d14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_241d18:
    // 0x241d18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_241d1c:
    // 0x241d1c: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
label_241d20:
    if (ctx->pc == 0x241D20u) {
        ctx->pc = 0x241D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D1Cu;
        // 0x241d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D24u;
        goto label_241d24;
    }
    ctx->pc = 0x241D1Cu;
    {
        const bool branch_taken_0x241d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x241D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D1Cu;
        // 0x241d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d1c) {
            ctx->pc = 0x241D34u;
            goto label_241d34;
        }
    }
    ctx->pc = 0x241D24u;
label_241d24:
    // 0x241d24: 0xc08dc16  jal         func_237058
label_241d28:
    if (ctx->pc == 0x241D28u) {
        ctx->pc = 0x241D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D24u;
        // 0x241d28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D2Cu;
        goto label_241d2c;
    }
    ctx->pc = 0x241D24u;
    SET_GPR_U32(ctx, 31, 0x241D2Cu);
    ctx->pc = 0x241D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D24u;
    // 0x241d28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x241D24u, 0x241D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D2Cu;
label_241d2c:
    // 0x241d2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_241d30:
    if (ctx->pc == 0x241D30u) {
        ctx->pc = 0x241D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D2Cu;
        // 0x241d30: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D34u;
        goto label_241d34;
    }
    ctx->pc = 0x241D2Cu;
    {
        const bool branch_taken_0x241d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D2Cu;
        // 0x241d30: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d2c) {
            ctx->pc = 0x241D48u;
            goto label_241d48;
        }
    }
    ctx->pc = 0x241D34u;
label_241d34:
    // 0x241d34: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x241d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_241d38:
    // 0x241d38: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x241d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_241d3c:
    // 0x241d3c: 0x40f809  jalr        $v0
label_241d40:
    if (ctx->pc == 0x241D40u) {
        ctx->pc = 0x241D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D3Cu;
        // 0x241d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D44u;
        goto label_241d44;
    }
    ctx->pc = 0x241D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x241D44u);
        ctx->pc = 0x241D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D3Cu;
        // 0x241d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241D3Cu, 0x241D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241D44u;
label_241d44:
    // 0x241d44: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x241d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_241d48:
    // 0x241d48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241d4c:
    // 0x241d4c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x241d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_241d50:
    // 0x241d50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x241d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_241d54:
    // 0x241d54: 0xac8300d4  sw          $v1, 0xD4($a0)
    ctx->pc = 0x241d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
label_241d58:
    // 0x241d58: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x241d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_241d5c:
    // 0x241d5c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x241d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_241d60:
    // 0x241d60: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x241d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_241d64:
    // 0x241d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_241d68:
    // 0x241d68: 0x3e00008  jr          $ra
label_241d6c:
    if (ctx->pc == 0x241D6Cu) {
        ctx->pc = 0x241D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D68u;
        // 0x241d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D70u;
        goto label_fallthrough_0x241d68;
    }
    ctx->pc = 0x241D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D68u;
        // 0x241d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x241d68:
    ctx->pc = 0x241D70u;
}
