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

// Function: sub_00122650
// Address: 0x122650 - 0x122728
void sub_00122650_0x122650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122650_0x122650");
#endif

    switch (ctx->pc) {
        case 0x1226a0u: goto label_1226a0;
        case 0x1226b0u: goto label_1226b0;
        case 0x1226ecu: goto label_1226ec;
        default: break;
    }

    ctx->pc = 0x122650u;

    // 0x122650: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x122650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x122654: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x122654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x122658: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x122658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x12265c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12265cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122660: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x122660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x122664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122668: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x122668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x12266c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12266cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122670: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x122670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x122674: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x122674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122678: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x122678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x12267c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x12267cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122680: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x122680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x122684: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x122684u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122688: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x122688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x12268c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x12268cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122690: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x122690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x122694: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x122694u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122698: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122698u;
    SET_GPR_U32(ctx, 31, 0x1226A0u);
    ctx->pc = 0x12269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122698u;
    // 0x12269c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122698u, 0x1226A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226A0u;
label_1226a0:
    // 0x1226a0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1226A0u;
    {
        const bool branch_taken_0x1226a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226A0u;
        // 0x1226a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226a0) {
            ctx->pc = 0x1226F8u;
            goto label_1226f8;
        }
    }
    ctx->pc = 0x1226A8u;
    // 0x1226a8: 0xc040a7a  jal         func_1029E8
    ctx->pc = 0x1226A8u;
    SET_GPR_U32(ctx, 31, 0x1226B0u);
    ctx->pc = 0x1226ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226A8u;
    // 0x1226ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E8u, 0x1226A8u, 0x1226B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226B0u;
label_1226b0:
    // 0x1226b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1226b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226b4: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1226B4u;
    {
        const bool branch_taken_0x1226b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226B4u;
        // 0x1226b8: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226b4) {
            ctx->pc = 0x1226F4u;
            goto label_1226f4;
        }
    }
    ctx->pc = 0x1226BCu;
    // 0x1226bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1226bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1226c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1226c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1226c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1226cc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1226ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1226d4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1226d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226d8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1226d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226dc: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x1226dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226e0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1226e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1226e4: 0xc0489ca  jal         func_122728
    ctx->pc = 0x1226E4u;
    SET_GPR_U32(ctx, 31, 0x1226ECu);
    ctx->pc = 0x1226E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226E4u;
    // 0x1226e8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122728u, 0x1226E4u, 0x1226ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226ECu;
label_1226ec:
    // 0x1226ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1226ECu;
    {
        const bool branch_taken_0x1226ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226ECu;
        // 0x1226f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226ec) {
            ctx->pc = 0x1226FCu;
            goto label_1226fc;
        }
    }
    ctx->pc = 0x1226F4u;
label_1226f4:
    // 0x1226f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1226f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1226f8:
    // 0x1226f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1226f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1226fc:
    // 0x1226fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1226fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122700: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x122700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122704: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x122704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122708: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x122708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12270c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x12270cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x122710: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x122710u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x122714: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x122714u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x122718: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x122718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12271c: 0x3e00008  jr          $ra
    ctx->pc = 0x12271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12271Cu;
        // 0x122720: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12271Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122724u;
    // 0x122724: 0x0  nop
    ctx->pc = 0x122724u;
    // NOP
    ctx->pc = 0x122728u;
}
