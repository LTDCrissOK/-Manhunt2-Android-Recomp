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

// Function: sub_001EEF50
// Address: 0x1eef50 - 0x1eefc0
void sub_001EEF50_0x1eef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEF50_0x1eef50");
#endif

    switch (ctx->pc) {
        case 0x1eef64u: goto label_1eef64;
        case 0x1eef8cu: goto label_1eef8c;
        case 0x1eef9cu: goto label_1eef9c;
        case 0x1eefb0u: goto label_1eefb0;
        default: break;
    }

    ctx->pc = 0x1eef50u;

    // 0x1eef50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eef54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eef58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1eef58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1eef5c: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x1EEF5Cu;
    SET_GPR_U32(ctx, 31, 0x1EEF64u);
    ctx->pc = 0x1EEF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF5Cu;
    // 0x1eef60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x1EEF5Cu, 0x1EEF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF64u;
label_1eef64:
    // 0x1eef64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eef64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eef68: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EEF68u;
    {
        const bool branch_taken_0x1eef68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF68u;
        // 0x1eef6c: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef68) {
            ctx->pc = 0x1EEFA4u;
            goto label_1eefa4;
        }
    }
    ctx->pc = 0x1EEF70u;
    // 0x1eef70: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1eef70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1eef74: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1eef74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1eef78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1eef78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1eef7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EEF7Cu;
    {
        const bool branch_taken_0x1eef7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF7Cu;
        // 0x1eef80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef7c) {
            ctx->pc = 0x1EEFA8u;
            goto label_1eefa8;
        }
    }
    ctx->pc = 0x1EEF84u;
    // 0x1eef84: 0xc07bbf0  jal         func_1EEFC0
    ctx->pc = 0x1EEF84u;
    SET_GPR_U32(ctx, 31, 0x1EEF8Cu);
    ctx->pc = 0x1EEF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF84u;
    // 0x1eef88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEFC0u, 0x1EEF84u, 0x1EEF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF8Cu;
label_1eef8c:
    // 0x1eef8c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1eef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1eef90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eef90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef94: 0xc080a76  jal         func_2029D8
    ctx->pc = 0x1EEF94u;
    SET_GPR_U32(ctx, 31, 0x1EEF9Cu);
    ctx->pc = 0x1EEF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF94u;
    // 0x1eef98: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2029D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2029D8u, 0x1EEF94u, 0x1EEF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF9Cu;
label_1eef9c:
    // 0x1eef9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEF9Cu;
    {
        const bool branch_taken_0x1eef9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF9Cu;
        // 0x1eefa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef9c) {
            ctx->pc = 0x1EEFB4u;
            goto label_1eefb4;
        }
    }
    ctx->pc = 0x1EEFA4u;
label_1eefa4:
    // 0x1eefa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eefa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eefa8:
    // 0x1eefa8: 0xc080a76  jal         func_2029D8
    ctx->pc = 0x1EEFA8u;
    SET_GPR_U32(ctx, 31, 0x1EEFB0u);
    ctx->pc = 0x1EEFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFA8u;
    // 0x1eefac: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2029D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2029D8u, 0x1EEFA8u, 0x1EEFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFB0u;
label_1eefb0:
    // 0x1eefb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eefb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eefb4:
    // 0x1eefb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1eefb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eefb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFB8u;
        // 0x1eefbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEFC0u;
}
