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

// Function: sub_0012B880
// Address: 0x12b880 - 0x12b8e8
void sub_0012B880_0x12b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B880_0x12b880");
#endif

    switch (ctx->pc) {
        case 0x12b89cu: goto label_12b89c;
        case 0x12b8c0u: goto label_12b8c0;
        default: break;
    }

    ctx->pc = 0x12b880u;

    // 0x12b880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b888: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b88c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b890: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b894: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B894u;
    SET_GPR_U32(ctx, 31, 0x12B89Cu);
    ctx->pc = 0x12B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B894u;
    // 0x12b898: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B894u, 0x12B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B89Cu;
label_12b89c:
    // 0x12b89c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12b89cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12b8a4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B8A4u;
    {
        const bool branch_taken_0x12b8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8A4u;
        // 0x12b8a8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8a4) {
            ctx->pc = 0x12B8CCu;
            goto label_12b8cc;
        }
    }
    ctx->pc = 0x12B8ACu;
    // 0x12b8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12b8b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12b8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8b8: 0xc04b104  jal         func_12C410
    ctx->pc = 0x12B8B8u;
    SET_GPR_U32(ctx, 31, 0x12B8C0u);
    ctx->pc = 0x12B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B8B8u;
    // 0x12b8bc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C410u, 0x12B8B8u, 0x12B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B8C0u;
label_12b8c0:
    // 0x12b8c0: 0x38420020  xori        $v0, $v0, 0x20
    ctx->pc = 0x12b8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32);
    // 0x12b8c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B8C4u;
    {
        const bool branch_taken_0x12b8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8C4u;
        // 0x12b8c8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8c4) {
            ctx->pc = 0x12B8D0u;
            goto label_12b8d0;
        }
    }
    ctx->pc = 0x12B8CCu;
label_12b8cc:
    // 0x12b8cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12b8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b8d0:
    // 0x12b8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b8d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x12B8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8DCu;
        // 0x12b8e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B8E4u;
    // 0x12b8e4: 0x0  nop
    ctx->pc = 0x12b8e4u;
    // NOP
    ctx->pc = 0x12b8e8u;
}
