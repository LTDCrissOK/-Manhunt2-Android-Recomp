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

// Function: sub_0017DD70
// Address: 0x17dd70 - 0x17de18
void sub_0017DD70_0x17dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DD70_0x17dd70");
#endif

    switch (ctx->pc) {
        case 0x17dd98u: goto label_17dd98;
        case 0x17ddbcu: goto label_17ddbc;
        case 0x17ddccu: goto label_17ddcc;
        case 0x17ddd8u: goto label_17ddd8;
        case 0x17dde8u: goto label_17dde8;
        case 0x17ddf8u: goto label_17ddf8;
        case 0x17de04u: goto label_17de04;
        default: break;
    }

    ctx->pc = 0x17dd70u;

    // 0x17dd70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17dd74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17dd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17dd78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17dd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17dd7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17dd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd80: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x17dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x17dd84: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17DD84u;
    {
        const bool branch_taken_0x17dd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD84u;
        // 0x17dd88: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd84) {
            ctx->pc = 0x17DE04u;
            goto label_17de04;
        }
    }
    ctx->pc = 0x17DD8Cu;
    // 0x17dd8c: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x17dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x17dd90: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x17DD90u;
    SET_GPR_U32(ctx, 31, 0x17DD98u);
    ctx->pc = 0x17DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD90u;
    // 0x17dd94: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x17DD90u, 0x17DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD98u;
label_17dd98:
    // 0x17dd98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17DD98u;
    {
        const bool branch_taken_0x17dd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD98u;
        // 0x17dd9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd98) {
            ctx->pc = 0x17DDC4u;
            goto label_17ddc4;
        }
    }
    ctx->pc = 0x17DDA0u;
    // 0x17dda0: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x17dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x17dda4: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x17dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x17dda8: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x17dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17ddac: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x17ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    // 0x17ddb0: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x17ddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x17ddb4: 0xc05f620  jal         func_17D880
    ctx->pc = 0x17DDB4u;
    SET_GPR_U32(ctx, 31, 0x17DDBCu);
    ctx->pc = 0x17DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDB4u;
    // 0x17ddb8: 0xae0500d4  sw          $a1, 0xD4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D880u, 0x17DDB4u, 0x17DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDBCu;
label_17ddbc:
    // 0x17ddbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17DDBCu;
    {
        const bool branch_taken_0x17ddbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDBCu;
        // 0x17ddc0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddbc) {
            ctx->pc = 0x17DE08u;
            goto label_17de08;
        }
    }
    ctx->pc = 0x17DDC4u;
label_17ddc4:
    // 0x17ddc4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17DDC4u;
    SET_GPR_U32(ctx, 31, 0x17DDCCu);
    ctx->pc = 0x17DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDC4u;
    // 0x17ddc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17DDC4u, 0x17DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDCCu;
label_17ddcc:
    // 0x17ddcc: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x17ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x17ddd0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17DDD0u;
    SET_GPR_U32(ctx, 31, 0x17DDD8u);
    ctx->pc = 0x17DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDD0u;
    // 0x17ddd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17DDD0u, 0x17DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDD8u;
label_17ddd8:
    // 0x17ddd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DDD8u;
    {
        const bool branch_taken_0x17ddd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDD8u;
        // 0x17dddc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddd8) {
            ctx->pc = 0x17DDF0u;
            goto label_17ddf0;
        }
    }
    ctx->pc = 0x17DDE0u;
    // 0x17dde0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17DDE0u;
    SET_GPR_U32(ctx, 31, 0x17DDE8u);
    ctx->pc = 0x17DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDE0u;
    // 0x17dde4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17DDE0u, 0x17DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDE8u;
label_17dde8:
    // 0x17dde8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17DDE8u;
    {
        const bool branch_taken_0x17dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDE8u;
        // 0x17ddec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dde8) {
            ctx->pc = 0x17DE08u;
            goto label_17de08;
        }
    }
    ctx->pc = 0x17DDF0u;
label_17ddf0:
    // 0x17ddf0: 0xc05f620  jal         func_17D880
    ctx->pc = 0x17DDF0u;
    SET_GPR_U32(ctx, 31, 0x17DDF8u);
    ctx->pc = 0x17DDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDF0u;
    // 0x17ddf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D880u, 0x17DDF0u, 0x17DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDF8u;
label_17ddf8:
    // 0x17ddf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17ddf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddfc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17DDFCu;
    SET_GPR_U32(ctx, 31, 0x17DE04u);
    ctx->pc = 0x17DE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDFCu;
    // 0x17de00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17DDFCu, 0x17DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE04u;
label_17de04:
    // 0x17de04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17de04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17de08:
    // 0x17de08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17de08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17de0c: 0x3e00008  jr          $ra
    ctx->pc = 0x17DE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE0Cu;
        // 0x17de10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DE14u;
    // 0x17de14: 0x0  nop
    ctx->pc = 0x17de14u;
    // NOP
    ctx->pc = 0x17de18u;
}
