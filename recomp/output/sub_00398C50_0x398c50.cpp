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

// Function: sub_00398C50
// Address: 0x398c50 - 0x398d00
void sub_00398C50_0x398c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398C50_0x398c50");
#endif

    switch (ctx->pc) {
        case 0x398c70u: goto label_398c70;
        case 0x398c80u: goto label_398c80;
        case 0x398c88u: goto label_398c88;
        case 0x398c90u: goto label_398c90;
        case 0x398ca4u: goto label_398ca4;
        default: break;
    }

    ctx->pc = 0x398c50u;

    // 0x398c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x398c54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x398c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x398c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x398c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x398c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x398c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x398c64: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x398c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x398c68: 0xc0eb90c  jal         func_3AE430
    ctx->pc = 0x398C68u;
    SET_GPR_U32(ctx, 31, 0x398C70u);
    ctx->pc = 0x398C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C68u;
    // 0x398c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE430u, 0x398C68u, 0x398C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C70u;
label_398c70:
    // 0x398c70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x398C70u;
    {
        const bool branch_taken_0x398c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398c70) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398C78u;
    // 0x398c78: 0xc0e6182  jal         func_398608
    ctx->pc = 0x398C78u;
    SET_GPR_U32(ctx, 31, 0x398C80u);
    ctx->pc = 0x398C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C78u;
    // 0x398c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398608u, 0x398C78u, 0x398C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C80u;
label_398c80:
    // 0x398c80: 0xc0ebac4  jal         func_3AEB10
    ctx->pc = 0x398C80u;
    SET_GPR_U32(ctx, 31, 0x398C88u);
    ctx->pc = 0x398C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C80u;
    // 0x398c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEB10u, 0x398C80u, 0x398C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C88u;
label_398c88:
    // 0x398c88: 0xc0eb90c  jal         func_3AE430
    ctx->pc = 0x398C88u;
    SET_GPR_U32(ctx, 31, 0x398C90u);
    ctx->pc = 0x398C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C88u;
    // 0x398c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE430u, 0x398C88u, 0x398C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C90u;
label_398c90:
    // 0x398c90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x398c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x398c94: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x398C94u;
    {
        const bool branch_taken_0x398c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x398c94) {
            ctx->pc = 0x398C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398C94u;
            // 0x398c98: 0x86040098  lh          $a0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398CA8u;
            goto label_398ca8;
        }
    }
    ctx->pc = 0x398C9Cu;
    // 0x398c9c: 0xc0e6276  jal         func_3989D8
    ctx->pc = 0x398C9Cu;
    SET_GPR_U32(ctx, 31, 0x398CA4u);
    ctx->pc = 0x398CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C9Cu;
    // 0x398ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3989D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3989D8u, 0x398C9Cu, 0x398CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398CA4u;
label_398ca4:
    // 0x398ca4: 0x86040098  lh          $a0, 0x98($s0)
    ctx->pc = 0x398ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_398ca8:
    // 0x398ca8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x398ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x398cac: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x398CACu;
    {
        const bool branch_taken_0x398cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x398CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CACu;
        // 0x398cb0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398cac) {
            ctx->pc = 0x398CD4u;
            goto label_398cd4;
        }
    }
    ctx->pc = 0x398CB4u;
    // 0x398cb4: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x398CB4u;
    {
        const bool branch_taken_0x398cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x398CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CB4u;
        // 0x398cb8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398cb4) {
            ctx->pc = 0x398CD4u;
            goto label_398cd4;
        }
    }
    ctx->pc = 0x398CBCu;
    // 0x398cbc: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x398CBCu;
    {
        const bool branch_taken_0x398cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x398CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CBCu;
        // 0x398cc0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398cbc) {
            ctx->pc = 0x398CD4u;
            goto label_398cd4;
        }
    }
    ctx->pc = 0x398CC4u;
    // 0x398cc4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x398CC4u;
    {
        const bool branch_taken_0x398cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x398CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CC4u;
        // 0x398cc8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398cc4) {
            ctx->pc = 0x398CD4u;
            goto label_398cd4;
        }
    }
    ctx->pc = 0x398CCCu;
    // 0x398ccc: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x398CCCu;
    {
        const bool branch_taken_0x398ccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x398CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CCCu;
        // 0x398cd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ccc) {
            ctx->pc = 0x398CF0u;
            goto label_398cf0;
        }
    }
    ctx->pc = 0x398CD4u;
label_398cd4:
    // 0x398cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398cd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x398cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x398cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398ce4: 0x80e62f0  j           func_398BC0
    ctx->pc = 0x398CE4u;
    ctx->pc = 0x398CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398CE4u;
    // 0x398ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398BC0u, 0x398CE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x398CECu;
    // 0x398cec: 0x0  nop
    ctx->pc = 0x398cecu;
    // NOP
label_398cf0:
    // 0x398cf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x398cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x398cf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x398CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CF8u;
        // 0x398cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398D00u;
}
