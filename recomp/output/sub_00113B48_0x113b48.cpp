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

// Function: sub_00113B48
// Address: 0x113b48 - 0x113bc0
void sub_00113B48_0x113b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113B48_0x113b48");
#endif

    switch (ctx->pc) {
        case 0x113b6cu: goto label_113b6c;
        case 0x113b94u: goto label_113b94;
        default: break;
    }

    ctx->pc = 0x113b48u;

    // 0x113b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113b50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x113b54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x113b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x113b5c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x113B5Cu;
    {
        const bool branch_taken_0x113b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B5Cu;
        // 0x113b60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b5c) {
            ctx->pc = 0x113BA4u;
            goto label_113ba4;
        }
    }
    ctx->pc = 0x113B64u;
    // 0x113b64: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x113B64u;
    SET_GPR_U32(ctx, 31, 0x113B6Cu);
    ctx->pc = 0x113B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B64u;
    // 0x113b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x113B64u, 0x113B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B6Cu;
label_113b6c:
    // 0x113b6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x113B6Cu;
    {
        const bool branch_taken_0x113b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B6Cu;
        // 0x113b70: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b6c) {
            ctx->pc = 0x113BA4u;
            goto label_113ba4;
        }
    }
    ctx->pc = 0x113B74u;
    // 0x113b74: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x113b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x113b78: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x113b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x113b7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x113b80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x113b84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x113b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x113b88: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x113b8c: 0xc06bf66  jal         func_1AFD98
    ctx->pc = 0x113B8Cu;
    SET_GPR_U32(ctx, 31, 0x113B94u);
    ctx->pc = 0x113B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B8Cu;
    // 0x113b90: 0x8c640338  lw          $a0, 0x338($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD98u, 0x113B8Cu, 0x113B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B94u;
label_113b94:
    // 0x113b94: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x113b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113b98: 0x384301ba  xori        $v1, $v0, 0x1BA
    ctx->pc = 0x113b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)442);
    // 0x113b9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113B9Cu;
    {
        const bool branch_taken_0x113b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B9Cu;
        // 0x113ba0: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b9c) {
            ctx->pc = 0x113BA8u;
            goto label_113ba8;
        }
    }
    ctx->pc = 0x113BA4u;
label_113ba4:
    // 0x113ba4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x113ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_113ba8:
    // 0x113ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x113BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BB4u;
        // 0x113bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113BBCu;
    // 0x113bbc: 0x0  nop
    ctx->pc = 0x113bbcu;
    // NOP
    ctx->pc = 0x113bc0u;
}
