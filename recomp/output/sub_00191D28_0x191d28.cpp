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

// Function: sub_00191D28
// Address: 0x191d28 - 0x191d88
void sub_00191D28_0x191d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191D28_0x191d28");
#endif

    switch (ctx->pc) {
        case 0x191d28u: goto label_191d28;
        case 0x191d2cu: goto label_191d2c;
        case 0x191d30u: goto label_191d30;
        case 0x191d34u: goto label_191d34;
        case 0x191d38u: goto label_191d38;
        case 0x191d3cu: goto label_191d3c;
        case 0x191d40u: goto label_191d40;
        case 0x191d44u: goto label_191d44;
        case 0x191d48u: goto label_191d48;
        case 0x191d4cu: goto label_191d4c;
        case 0x191d50u: goto label_191d50;
        case 0x191d54u: goto label_191d54;
        case 0x191d58u: goto label_191d58;
        case 0x191d5cu: goto label_191d5c;
        case 0x191d60u: goto label_191d60;
        case 0x191d64u: goto label_191d64;
        case 0x191d68u: goto label_191d68;
        case 0x191d6cu: goto label_191d6c;
        case 0x191d70u: goto label_191d70;
        case 0x191d74u: goto label_191d74;
        case 0x191d78u: goto label_191d78;
        case 0x191d7cu: goto label_191d7c;
        case 0x191d80u: goto label_191d80;
        case 0x191d84u: goto label_191d84;
        default: break;
    }

    ctx->pc = 0x191d28u;

label_191d28:
    // 0x191d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_191d2c:
    // 0x191d2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x191d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191d30:
    // 0x191d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x191d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_191d34:
    // 0x191d34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x191d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_191d38:
    // 0x191d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x191d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191d3c:
    // 0x191d3c: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x191d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_191d40:
    // 0x191d40: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
label_191d44:
    if (ctx->pc == 0x191D44u) {
        ctx->pc = 0x191D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D40u;
        // 0x191d44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D48u;
        goto label_191d48;
    }
    ctx->pc = 0x191D40u;
    {
        const bool branch_taken_0x191d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191d40) {
            ctx->pc = 0x191D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191D40u;
            // 0x191d44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191D78u;
            goto label_191d78;
        }
    }
    ctx->pc = 0x191D48u;
label_191d48:
    // 0x191d48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x191d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_191d4c:
    // 0x191d4c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_191d50:
    if (ctx->pc == 0x191D50u) {
        ctx->pc = 0x191D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D4Cu;
        // 0x191d50: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D54u;
        goto label_191d54;
    }
    ctx->pc = 0x191D4Cu;
    {
        const bool branch_taken_0x191d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D4Cu;
        // 0x191d50: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d4c) {
            ctx->pc = 0x191D64u;
            goto label_191d64;
        }
    }
    ctx->pc = 0x191D54u;
label_191d54:
    // 0x191d54: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x191d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_191d58:
    // 0x191d58: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x191d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_191d5c:
    // 0x191d5c: 0x40f809  jalr        $v0
label_191d60:
    if (ctx->pc == 0x191D60u) {
        ctx->pc = 0x191D64u;
        goto label_191d64;
    }
    ctx->pc = 0x191D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191D64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191D5Cu, 0x191D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191D64u;
label_191d64:
    // 0x191d64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x191d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_191d68:
    // 0x191d68: 0xc061a16  jal         func_186858
label_191d6c:
    if (ctx->pc == 0x191D6Cu) {
        ctx->pc = 0x191D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D68u;
        // 0x191d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D70u;
        goto label_191d70;
    }
    ctx->pc = 0x191D68u;
    SET_GPR_U32(ctx, 31, 0x191D70u);
    ctx->pc = 0x191D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D68u;
    // 0x191d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x191D68u, 0x191D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D70u;
label_191d70:
    // 0x191d70: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x191d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_191d74:
    // 0x191d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191d78:
    // 0x191d78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x191d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_191d7c:
    // 0x191d7c: 0x3e00008  jr          $ra
label_191d80:
    if (ctx->pc == 0x191D80u) {
        ctx->pc = 0x191D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D7Cu;
        // 0x191d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D84u;
        goto label_191d84;
    }
    ctx->pc = 0x191D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D7Cu;
        // 0x191d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191D84u;
label_191d84:
    // 0x191d84: 0x0  nop
    ctx->pc = 0x191d84u;
    // NOP
    ctx->pc = 0x191d88u;
}
