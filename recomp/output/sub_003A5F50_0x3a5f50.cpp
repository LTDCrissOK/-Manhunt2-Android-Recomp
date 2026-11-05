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

// Function: sub_003A5F50
// Address: 0x3a5f50 - 0x3a5fe8
void sub_003A5F50_0x3a5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5F50_0x3a5f50");
#endif

    switch (ctx->pc) {
        case 0x3a5f6cu: goto label_3a5f6c;
        default: break;
    }

    ctx->pc = 0x3a5f50u;

    // 0x3a5f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a5f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a5f54: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a5f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f58: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5F58u;
    {
        const bool branch_taken_0x3a5f58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F58u;
        // 0x3a5f5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f58) {
            ctx->pc = 0x3A5F78u;
            goto label_3a5f78;
        }
    }
    ctx->pc = 0x3A5F60u;
    // 0x3a5f60: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a5f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a5f64: 0xc0e960a  jal         func_3A5828
    ctx->pc = 0x3A5F64u;
    SET_GPR_U32(ctx, 31, 0x3A5F6Cu);
    ctx->pc = 0x3A5F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5F64u;
    // 0x3a5f68: 0x24a5ddd0  addiu       $a1, $a1, -0x2230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5828u, 0x3A5F64u, 0x3A5F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5F6Cu;
label_3a5f6c:
    // 0x3a5f6c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3A5F6Cu;
    {
        const bool branch_taken_0x3a5f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F6Cu;
        // 0x3a5f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f6c) {
            ctx->pc = 0x3A5FD8u;
            goto label_3a5fd8;
        }
    }
    ctx->pc = 0x3A5F74u;
    // 0x3a5f74: 0x0  nop
    ctx->pc = 0x3a5f74u;
    // NOP
label_3a5f78:
    // 0x3a5f78: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5F78u;
    {
        const bool branch_taken_0x3a5f78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F78u;
        // 0x3a5f7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f78) {
            ctx->pc = 0x3A5F88u;
            goto label_3a5f88;
        }
    }
    ctx->pc = 0x3A5F80u;
    // 0x3a5f80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A5F80u;
    {
        const bool branch_taken_0x3a5f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F80u;
        // 0x3a5f84: 0xace5001c  sw          $a1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f80) {
            ctx->pc = 0x3A5FB8u;
            goto label_3a5fb8;
        }
    }
    ctx->pc = 0x3A5F88u;
label_3a5f88:
    // 0x3a5f88: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5F88u;
    {
        const bool branch_taken_0x3a5f88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F88u;
        // 0x3a5f8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f88) {
            ctx->pc = 0x3A5FA0u;
            goto label_3a5fa0;
        }
    }
    ctx->pc = 0x3A5F90u;
    // 0x3a5f90: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x3a5f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3a5f94: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x3a5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a5f98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5F98u;
    {
        const bool branch_taken_0x3a5f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F98u;
        // 0x3a5f9c: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f98) {
            ctx->pc = 0x3A5FBCu;
            goto label_3a5fbc;
        }
    }
    ctx->pc = 0x3A5FA0u;
label_3a5fa0:
    // 0x3a5fa0: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5FA0u;
    {
        const bool branch_taken_0x3a5fa0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FA0u;
        // 0x3a5fa4: 0x8ce40010  lw          $a0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5fa0) {
            ctx->pc = 0x3A5FBCu;
            goto label_3a5fbc;
        }
    }
    ctx->pc = 0x3A5FA8u;
    // 0x3a5fa8: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3a5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3a5fac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3a5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a5fb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A5FB0u;
    {
        const bool branch_taken_0x3a5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FB0u;
        // 0x3a5fb4: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5fb0) {
            ctx->pc = 0x3A5FBCu;
            goto label_3a5fbc;
        }
    }
    ctx->pc = 0x3A5FB8u;
label_3a5fb8:
    // 0x3a5fb8: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x3a5fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_3a5fbc:
    // 0x3a5fbc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3a5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3a5fc0: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x3a5fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x3a5fc4: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x3a5fc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a5fc8: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3a5fc8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3a5fcc: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x3a5fccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a5fd0: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x3a5fd0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3a5fd4: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x3a5fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_3a5fd8:
    // 0x3a5fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FDCu;
        // 0x3a5fe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5FE4u;
    // 0x3a5fe4: 0x0  nop
    ctx->pc = 0x3a5fe4u;
    // NOP
    ctx->pc = 0x3a5fe8u;
}
