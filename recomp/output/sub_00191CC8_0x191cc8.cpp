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

// Function: sub_00191CC8
// Address: 0x191cc8 - 0x191d28
void sub_00191CC8_0x191cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191CC8_0x191cc8");
#endif

    switch (ctx->pc) {
        case 0x191cc8u: goto label_191cc8;
        case 0x191cccu: goto label_191ccc;
        case 0x191cd0u: goto label_191cd0;
        case 0x191cd4u: goto label_191cd4;
        case 0x191cd8u: goto label_191cd8;
        case 0x191cdcu: goto label_191cdc;
        case 0x191ce0u: goto label_191ce0;
        case 0x191ce4u: goto label_191ce4;
        case 0x191ce8u: goto label_191ce8;
        case 0x191cecu: goto label_191cec;
        case 0x191cf0u: goto label_191cf0;
        case 0x191cf4u: goto label_191cf4;
        case 0x191cf8u: goto label_191cf8;
        case 0x191cfcu: goto label_191cfc;
        case 0x191d00u: goto label_191d00;
        case 0x191d04u: goto label_191d04;
        case 0x191d08u: goto label_191d08;
        case 0x191d0cu: goto label_191d0c;
        case 0x191d10u: goto label_191d10;
        case 0x191d14u: goto label_191d14;
        case 0x191d18u: goto label_191d18;
        case 0x191d1cu: goto label_191d1c;
        case 0x191d20u: goto label_191d20;
        case 0x191d24u: goto label_191d24;
        default: break;
    }

    ctx->pc = 0x191cc8u;

label_191cc8:
    // 0x191cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_191ccc:
    // 0x191ccc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191cd0:
    // 0x191cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x191cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_191cd4:
    // 0x191cd4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x191cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_191cd8:
    // 0x191cd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x191cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191cdc:
    // 0x191cdc: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x191cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_191ce0:
    // 0x191ce0: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
label_191ce4:
    if (ctx->pc == 0x191CE4u) {
        ctx->pc = 0x191CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CE0u;
        // 0x191ce4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191CE8u;
        goto label_191ce8;
    }
    ctx->pc = 0x191CE0u;
    {
        const bool branch_taken_0x191ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191ce0) {
            ctx->pc = 0x191CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191CE0u;
            // 0x191ce4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191D18u;
            goto label_191d18;
        }
    }
    ctx->pc = 0x191CE8u;
label_191ce8:
    // 0x191ce8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x191ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_191cec:
    // 0x191cec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_191cf0:
    if (ctx->pc == 0x191CF0u) {
        ctx->pc = 0x191CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CECu;
        // 0x191cf0: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191CF4u;
        goto label_191cf4;
    }
    ctx->pc = 0x191CECu;
    {
        const bool branch_taken_0x191cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CECu;
        // 0x191cf0: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cec) {
            ctx->pc = 0x191D04u;
            goto label_191d04;
        }
    }
    ctx->pc = 0x191CF4u;
label_191cf4:
    // 0x191cf4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x191cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_191cf8:
    // 0x191cf8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x191cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_191cfc:
    // 0x191cfc: 0x40f809  jalr        $v0
label_191d00:
    if (ctx->pc == 0x191D00u) {
        ctx->pc = 0x191D04u;
        goto label_191d04;
    }
    ctx->pc = 0x191CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191D04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191CFCu, 0x191D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191D04u;
label_191d04:
    // 0x191d04: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x191d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_191d08:
    // 0x191d08: 0xc061a16  jal         func_186858
label_191d0c:
    if (ctx->pc == 0x191D0Cu) {
        ctx->pc = 0x191D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D08u;
        // 0x191d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D10u;
        goto label_191d10;
    }
    ctx->pc = 0x191D08u;
    SET_GPR_U32(ctx, 31, 0x191D10u);
    ctx->pc = 0x191D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D08u;
    // 0x191d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x191D08u, 0x191D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D10u;
label_191d10:
    // 0x191d10: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x191d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_191d14:
    // 0x191d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191d18:
    // 0x191d18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x191d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_191d1c:
    // 0x191d1c: 0x3e00008  jr          $ra
label_191d20:
    if (ctx->pc == 0x191D20u) {
        ctx->pc = 0x191D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D1Cu;
        // 0x191d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D24u;
        goto label_191d24;
    }
    ctx->pc = 0x191D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D1Cu;
        // 0x191d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191D24u;
label_191d24:
    // 0x191d24: 0x0  nop
    ctx->pc = 0x191d24u;
    // NOP
    ctx->pc = 0x191d28u;
}
