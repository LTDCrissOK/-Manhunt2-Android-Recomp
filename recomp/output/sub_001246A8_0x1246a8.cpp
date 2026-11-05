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

// Function: sub_001246A8
// Address: 0x1246a8 - 0x124710
void sub_001246A8_0x1246a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001246A8_0x1246a8");
#endif

    switch (ctx->pc) {
        case 0x1246d0u: goto label_1246d0;
        case 0x1246e4u: goto label_1246e4;
        default: break;
    }

    ctx->pc = 0x1246a8u;

    // 0x1246a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1246a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1246ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1246acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1246b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1246b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1246b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1246b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1246b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1246bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1246bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1246c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1246c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1246c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246c8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1246C8u;
    SET_GPR_U32(ctx, 31, 0x1246D0u);
    ctx->pc = 0x1246CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246C8u;
    // 0x1246cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1246C8u, 0x1246D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246D0u;
label_1246d0:
    // 0x1246d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1246D0u;
    {
        const bool branch_taken_0x1246d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246D0u;
        // 0x1246d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246d0) {
            ctx->pc = 0x1246ECu;
            goto label_1246ec;
        }
    }
    ctx->pc = 0x1246D8u;
    // 0x1246d8: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1246d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1246dc: 0xc0430ba  jal         func_10C2E8
    ctx->pc = 0x1246DCu;
    SET_GPR_U32(ctx, 31, 0x1246E4u);
    ctx->pc = 0x1246E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246DCu;
    // 0x1246e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C2E8u, 0x1246DCu, 0x1246E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246E4u;
label_1246e4:
    // 0x1246e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1246E4u;
    {
        const bool branch_taken_0x1246e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246E4u;
        // 0x1246e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246e4) {
            ctx->pc = 0x1246F4u;
            goto label_1246f4;
        }
    }
    ctx->pc = 0x1246ECu;
label_1246ec:
    // 0x1246ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1246ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1246f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1246f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1246f4:
    // 0x1246f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1246f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1246f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1246f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1246fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1246fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124700: 0x3e00008  jr          $ra
    ctx->pc = 0x124700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124700u;
        // 0x124704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124708u;
    // 0x124708: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x124708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12470c: 0x0  nop
    ctx->pc = 0x12470cu;
    // NOP
    ctx->pc = 0x124710u;
}
