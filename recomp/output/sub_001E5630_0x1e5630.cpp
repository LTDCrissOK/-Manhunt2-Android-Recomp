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

// Function: sub_001E5630
// Address: 0x1e5630 - 0x1e5718
void sub_001E5630_0x1e5630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5630_0x1e5630");
#endif

    switch (ctx->pc) {
        case 0x1e5680u: goto label_1e5680;
        case 0x1e568cu: goto label_1e568c;
        case 0x1e56acu: goto label_1e56ac;
        default: break;
    }

    ctx->pc = 0x1e5630u;

    // 0x1e5630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e5630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e5634: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e5634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e5638: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e5638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e563c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e563cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e5640: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e5640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5644: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e5644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e5648: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e5648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e564c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e5650: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e5650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5654: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e5654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e5658: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e5658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e565c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1e565cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e5660: 0xc440d918  lwc1        $f0, -0x26E8($v0)
    ctx->pc = 0x1e5660u;
    { uint32_t bits = FAST_READ32(0x45D918u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5664: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e5668: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E5668u;
    {
        const bool branch_taken_0x1e5668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5668u;
        // 0x1e566c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5668) {
            ctx->pc = 0x1E56F0u;
            goto label_1e56f0;
        }
    }
    ctx->pc = 0x1E5670u;
    // 0x1e5670: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e5670u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e5674: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1e5674u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1e5678: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1e5678u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1e567c: 0x0  nop
    ctx->pc = 0x1e567cu;
    // NOP
label_1e5680:
    // 0x1e5680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5684: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E5684u;
    SET_GPR_U32(ctx, 31, 0x1E568Cu);
    ctx->pc = 0x1E5688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5684u;
    // 0x1e5688: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1E5684u, 0x1E568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E568Cu;
label_1e568c:
    // 0x1e568c: 0x8e0391d8  lw          $v1, -0x6E28($s0)
    ctx->pc = 0x1e568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939096)));
    // 0x1e5690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5694: 0x8e8291d4  lw          $v0, -0x6E2C($s4)
    ctx->pc = 0x1e5694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939092)));
    // 0x1e5698: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e5698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e569c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e569cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e56a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e56a4: 0xc077824  jal         func_1DE090
    ctx->pc = 0x1E56A4u;
    SET_GPR_U32(ctx, 31, 0x1E56ACu);
    ctx->pc = 0x1E56A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E56A4u;
    // 0x1e56a8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x1E56A4u, 0x1E56ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E56ACu;
label_1e56ac:
    // 0x1e56ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E56ACu;
    {
        const bool branch_taken_0x1e56ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56ACu;
        // 0x1e56b0: 0x8e0291d8  lw          $v0, -0x6E28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56ac) {
            ctx->pc = 0x1E56DCu;
            goto label_1e56dc;
        }
    }
    ctx->pc = 0x1E56B4u;
    // 0x1e56b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1e56b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e56b8: 0x8e8491d4  lw          $a0, -0x6E2C($s4)
    ctx->pc = 0x1e56b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939092)));
    // 0x1e56bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e56c0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e56c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e56c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e56c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e56cc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1e56ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1e56d0: 0x8e0291d8  lw          $v0, -0x6E28($s0)
    ctx->pc = 0x1e56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939096)));
    // 0x1e56d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e56d8: 0xae0291d8  sw          $v0, -0x6E28($s0)
    ctx->pc = 0x1e56d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939096), GPR_U32(ctx, 2));
label_1e56dc:
    // 0x1e56dc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e56e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e56e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e56e4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e56e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e56e8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1E56E8u;
    {
        const bool branch_taken_0x1e56e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56E8u;
        // 0x1e56ec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56e8) {
            ctx->pc = 0x1E5680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5680;
        }
    }
    ctx->pc = 0x1E56F0u;
label_1e56f0:
    // 0x1e56f0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e56f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e56f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e56f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e56f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e56fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e56fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5700: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e5700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e5704: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e5704u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5708: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e5708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e570c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1e570cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e5710: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5710u;
        // 0x1e5714: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5718u;
}
