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

// Function: sub_002BE5A8
// Address: 0x2be5a8 - 0x2be650
void sub_002BE5A8_0x2be5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE5A8_0x2be5a8");
#endif

    switch (ctx->pc) {
        case 0x2be5a8u: goto label_2be5a8;
        case 0x2be5acu: goto label_2be5ac;
        case 0x2be5b0u: goto label_2be5b0;
        case 0x2be5b4u: goto label_2be5b4;
        case 0x2be5b8u: goto label_2be5b8;
        case 0x2be5bcu: goto label_2be5bc;
        case 0x2be5c0u: goto label_2be5c0;
        case 0x2be5c4u: goto label_2be5c4;
        case 0x2be5c8u: goto label_2be5c8;
        case 0x2be5ccu: goto label_2be5cc;
        case 0x2be5d0u: goto label_2be5d0;
        case 0x2be5d4u: goto label_2be5d4;
        case 0x2be5d8u: goto label_2be5d8;
        case 0x2be5dcu: goto label_2be5dc;
        case 0x2be5e0u: goto label_2be5e0;
        case 0x2be5e4u: goto label_2be5e4;
        case 0x2be5e8u: goto label_2be5e8;
        case 0x2be5ecu: goto label_2be5ec;
        case 0x2be5f0u: goto label_2be5f0;
        case 0x2be5f4u: goto label_2be5f4;
        case 0x2be5f8u: goto label_2be5f8;
        case 0x2be5fcu: goto label_2be5fc;
        case 0x2be600u: goto label_2be600;
        case 0x2be604u: goto label_2be604;
        case 0x2be608u: goto label_2be608;
        case 0x2be60cu: goto label_2be60c;
        case 0x2be610u: goto label_2be610;
        case 0x2be614u: goto label_2be614;
        case 0x2be618u: goto label_2be618;
        case 0x2be61cu: goto label_2be61c;
        case 0x2be620u: goto label_2be620;
        case 0x2be624u: goto label_2be624;
        case 0x2be628u: goto label_2be628;
        case 0x2be62cu: goto label_2be62c;
        case 0x2be630u: goto label_2be630;
        case 0x2be634u: goto label_2be634;
        case 0x2be638u: goto label_2be638;
        case 0x2be63cu: goto label_2be63c;
        case 0x2be640u: goto label_2be640;
        case 0x2be644u: goto label_2be644;
        case 0x2be648u: goto label_2be648;
        case 0x2be64cu: goto label_2be64c;
        default: break;
    }

    ctx->pc = 0x2be5a8u;

label_2be5a8:
    // 0x2be5a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2be5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2be5ac:
    // 0x2be5ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2be5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2be5b0:
    // 0x2be5b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2be5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2be5b4:
    // 0x2be5b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2be5b8:
    // 0x2be5b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2be5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2be5bc:
    // 0x2be5bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2be5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2be5c0:
    // 0x2be5c0: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2be5c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2be5c4:
    // 0x2be5c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2be5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2be5c8:
    // 0x2be5c8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2be5c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2be5cc:
    // 0x2be5cc: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2be5ccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_2be5d0:
    // 0x2be5d0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2be5d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2be5d4:
    // 0x2be5d4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2be5d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_2be5d8:
    // 0x2be5d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2be5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2be5dc:
    // 0x2be5dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2be5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2be5e0:
    // 0x2be5e0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2be5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2be5e4:
    // 0x2be5e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2be5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2be5e8:
    // 0x2be5e8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_2be5ec:
    if (ctx->pc == 0x2BE5ECu) {
        ctx->pc = 0x2BE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5E8u;
        // 0x2be5ec: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE5F0u;
        goto label_2be5f0;
    }
    ctx->pc = 0x2BE5E8u;
    {
        const bool branch_taken_0x2be5e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5E8u;
        // 0x2be5ec: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5e8) {
            ctx->pc = 0x2BE628u;
            goto label_2be628;
        }
    }
    ctx->pc = 0x2BE5F0u;
label_2be5f0:
    // 0x2be5f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2be5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2be5f4:
    // 0x2be5f4: 0x0  nop
    ctx->pc = 0x2be5f4u;
    // NOP
label_2be5f8:
    // 0x2be5f8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2be5f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2be5fc:
    // 0x2be5fc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2be5fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2be600:
    // 0x2be600: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2be600u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2be604:
    // 0x2be604: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2be604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2be608:
    // 0x2be608: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2be608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2be60c:
    // 0x2be60c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2be60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2be610:
    // 0x2be610: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2be610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2be614:
    // 0x2be614: 0x60f809  jalr        $v1
label_2be618:
    if (ctx->pc == 0x2BE618u) {
        ctx->pc = 0x2BE618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE614u;
        // 0x2be618: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE61Cu;
        goto label_2be61c;
    }
    ctx->pc = 0x2BE614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BE61Cu);
        ctx->pc = 0x2BE618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE614u;
        // 0x2be618: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE614u, 0x2BE61Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE61Cu;
label_2be61c:
    // 0x2be61c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2be61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2be620:
    // 0x2be620: 0x5602fff5  bnel        $s0, $v0, . + 4 + (-0xB << 2)
label_2be624:
    if (ctx->pc == 0x2BE624u) {
        ctx->pc = 0x2BE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE620u;
        // 0x2be624: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE628u;
        goto label_2be628;
    }
    ctx->pc = 0x2BE620u;
    {
        const bool branch_taken_0x2be620 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be620) {
            ctx->pc = 0x2BE624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE620u;
            // 0x2be624: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be5f8;
        }
    }
    ctx->pc = 0x2BE628u;
label_2be628:
    // 0x2be628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2be628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2be62c:
    // 0x2be62c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2be62cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2be630:
    // 0x2be630: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2be630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2be634:
    // 0x2be634: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2be634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2be638:
    // 0x2be638: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2be638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2be63c:
    // 0x2be63c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2be63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2be640:
    // 0x2be640: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2be640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2be644:
    // 0x2be644: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2be644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2be648:
    // 0x2be648: 0x3e00008  jr          $ra
label_2be64c:
    if (ctx->pc == 0x2BE64Cu) {
        ctx->pc = 0x2BE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE648u;
        // 0x2be64c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE650u;
        goto label_fallthrough_0x2be648;
    }
    ctx->pc = 0x2BE648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE648u;
        // 0x2be64c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2be648:
    ctx->pc = 0x2BE650u;
}
