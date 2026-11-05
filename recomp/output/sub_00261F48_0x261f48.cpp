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

// Function: sub_00261F48
// Address: 0x261f48 - 0x261fe0
void sub_00261F48_0x261f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261F48_0x261f48");
#endif

    switch (ctx->pc) {
        case 0x261f58u: goto label_261f58;
        default: break;
    }

    ctx->pc = 0x261f48u;

    // 0x261f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x261f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261f50: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x261F50u;
    SET_GPR_U32(ctx, 31, 0x261F58u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x261F50u, 0x261F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F58u;
label_261f58:
    // 0x261f58: 0x2443ffd8  addiu       $v1, $v0, -0x28
    ctx->pc = 0x261f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x261f5c: 0x2c62005c  sltiu       $v0, $v1, 0x5C
    ctx->pc = 0x261f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
    // 0x261f60: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x261F60u;
    {
        const bool branch_taken_0x261f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F60u;
        // 0x261f64: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f60) {
            ctx->pc = 0x261FF0u;
            return;
        }
    }
    ctx->pc = 0x261F68u;
    // 0x261f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x261f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x261f6c: 0x24427670  addiu       $v0, $v0, 0x7670
    ctx->pc = 0x261f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30320));
    // 0x261f70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x261f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261f74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x261f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261f78: 0x800008  jr          $a0
    ctx->pc = 0x261F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261F80u: goto label_261f80;
            case 0x261F88u: goto label_261f88;
            case 0x261F90u: goto label_261f90;
            case 0x261F98u: goto label_261f98;
            case 0x261FA0u: goto label_261fa0;
            case 0x261FA8u: goto label_261fa8;
            case 0x261FB0u: goto label_261fb0;
            case 0x261FB8u: goto label_261fb8;
            case 0x261FC0u: goto label_261fc0;
            case 0x261FC8u: goto label_261fc8;
            case 0x261FD0u: goto label_261fd0;
            case 0x261FD8u: goto label_261fd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261F78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x261F80u;
label_261f80:
    // 0x261f80: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x261F80u;
    {
        const bool branch_taken_0x261f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F80u;
        // 0x261f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f80) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261F88u;
label_261f88:
    // 0x261f88: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x261F88u;
    {
        const bool branch_taken_0x261f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F88u;
        // 0x261f8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f88) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261F90u;
label_261f90:
    // 0x261f90: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x261F90u;
    {
        const bool branch_taken_0x261f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F90u;
        // 0x261f94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f90) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261F98u;
label_261f98:
    // 0x261f98: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x261F98u;
    {
        const bool branch_taken_0x261f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F98u;
        // 0x261f9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f98) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261FA0u;
label_261fa0:
    // 0x261fa0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x261FA0u;
    {
        const bool branch_taken_0x261fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FA0u;
        // 0x261fa4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fa0) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261FA8u;
label_261fa8:
    // 0x261fa8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x261FA8u;
    {
        const bool branch_taken_0x261fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FA8u;
        // 0x261fac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fa8) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261FB0u;
label_261fb0:
    // 0x261fb0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x261FB0u;
    {
        const bool branch_taken_0x261fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FB0u;
        // 0x261fb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fb0) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261FB8u;
label_261fb8:
    // 0x261fb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x261FB8u;
    {
        const bool branch_taken_0x261fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FB8u;
        // 0x261fbc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fb8) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261FC0u;
label_261fc0:
    // 0x261fc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x261FC0u;
    {
        const bool branch_taken_0x261fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FC0u;
        // 0x261fc4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fc0) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261FC8u;
label_261fc8:
    // 0x261fc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x261FC8u;
    {
        const bool branch_taken_0x261fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FC8u;
        // 0x261fcc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fc8) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261FD0u;
label_261fd0:
    // 0x261fd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x261FD0u;
    {
        const bool branch_taken_0x261fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FD0u;
        // 0x261fd4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fd0) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261FD8u;
label_261fd8:
    // 0x261fd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x261FD8u;
    {
        const bool branch_taken_0x261fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FD8u;
        // 0x261fdc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fd8) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261FE0u;
}
