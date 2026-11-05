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

// Function: sub_00296090
// Address: 0x296090 - 0x296100
void sub_00296090_0x296090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296090_0x296090");
#endif

    switch (ctx->pc) {
        case 0x2960b8u: goto label_2960b8;
        case 0x2960c4u: goto label_2960c4;
        default: break;
    }

    ctx->pc = 0x296090u;

    // 0x296090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296094: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x296094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x296098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29609c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29609cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2960a0: 0x2450a8e8  addiu       $s0, $v0, -0x5718
    ctx->pc = 0x2960a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945000));
    // 0x2960a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2960a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2960a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2960a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2960acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2960b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2960b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960b4: 0x0  nop
    ctx->pc = 0x2960b4u;
    // NOP
label_2960b8:
    // 0x2960b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2960b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2960bc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2960BCu;
    SET_GPR_U32(ctx, 31, 0x2960C4u);
    ctx->pc = 0x2960C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2960BCu;
    // 0x2960c0: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2960BCu, 0x2960C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960C4u;
label_2960c4:
    // 0x2960c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2960C4u;
    {
        const bool branch_taken_0x2960c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2960C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960C4u;
        // 0x2960c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960c4) {
            ctx->pc = 0x2960D4u;
            goto label_2960d4;
        }
    }
    ctx->pc = 0x2960CCu;
    // 0x2960cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2960CCu;
    {
        const bool branch_taken_0x2960cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2960D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960CCu;
        // 0x2960d0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960cc) {
            ctx->pc = 0x2960E4u;
            goto label_2960e4;
        }
    }
    ctx->pc = 0x2960D4u;
label_2960d4:
    // 0x2960d4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2960d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2960d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2960D8u;
    {
        const bool branch_taken_0x2960d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2960DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960D8u;
        // 0x2960dc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960d8) {
            ctx->pc = 0x2960B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2960b8;
        }
    }
    ctx->pc = 0x2960E0u;
    // 0x2960e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2960e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2960e4:
    // 0x2960e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2960e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2960e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2960e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2960ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2960ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2960f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2960f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2960f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2960F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2960F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960F4u;
        // 0x2960f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2960F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2960FCu;
    // 0x2960fc: 0x0  nop
    ctx->pc = 0x2960fcu;
    // NOP
    ctx->pc = 0x296100u;
}
