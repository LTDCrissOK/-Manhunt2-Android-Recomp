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

// Function: sub_00130558
// Address: 0x130558 - 0x130630
void sub_00130558_0x130558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130558_0x130558");
#endif

    switch (ctx->pc) {
        case 0x1305a0u: goto label_1305a0;
        case 0x1305acu: goto label_1305ac;
        case 0x1305b8u: goto label_1305b8;
        case 0x1305ccu: goto label_1305cc;
        case 0x1305e4u: goto label_1305e4;
        case 0x1305f8u: goto label_1305f8;
        case 0x130600u: goto label_130600;
        default: break;
    }

    ctx->pc = 0x130558u;

    // 0x130558: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13055c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13055cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130560: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130564: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130568: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13056c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130570: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130574: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x130574u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x130578: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x130578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13057c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130580: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130584: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130584u;
    {
        const bool branch_taken_0x130584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130584u;
        // 0x130588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130584) {
            ctx->pc = 0x130594u;
            goto label_130594;
        }
    }
    ctx->pc = 0x13058Cu;
    // 0x13058c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x13058Cu;
    {
        const bool branch_taken_0x13058c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13058Cu;
        // 0x130590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13058c) {
            ctx->pc = 0x130608u;
            goto label_130608;
        }
    }
    ctx->pc = 0x130594u;
label_130594:
    // 0x130594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130598: 0xc046044  jal         func_118110
    ctx->pc = 0x130598u;
    SET_GPR_U32(ctx, 31, 0x1305A0u);
    ctx->pc = 0x13059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130598u;
    // 0x13059c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x130598u, 0x1305A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305A0u;
label_1305a0:
    // 0x1305a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1305a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305a4: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x1305A4u;
    SET_GPR_U32(ctx, 31, 0x1305ACu);
    ctx->pc = 0x1305A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305A4u;
    // 0x1305a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x1305A4u, 0x1305ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305ACu;
label_1305ac:
    // 0x1305ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1305acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305b0: 0xc046272  jal         func_1189C8
    ctx->pc = 0x1305B0u;
    SET_GPR_U32(ctx, 31, 0x1305B8u);
    ctx->pc = 0x1305B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305B0u;
    // 0x1305b4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x1305B0u, 0x1305B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305B8u;
label_1305b8:
    // 0x1305b8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1305b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1305bc: 0x0  nop
    ctx->pc = 0x1305bcu;
    // NOP
    // 0x1305c0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1305c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1305c4: 0xc043920  jal         func_10E480
    ctx->pc = 0x1305C4u;
    SET_GPR_U32(ctx, 31, 0x1305CCu);
    ctx->pc = 0x1305C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305C4u;
    // 0x1305c8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x1305C4u, 0x1305CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305CCu;
label_1305cc:
    // 0x1305cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1305ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305d0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1305D0u;
    {
        const bool branch_taken_0x1305d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1305D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305D0u;
        // 0x1305d4: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305d0) {
            ctx->pc = 0x130608u;
            goto label_130608;
        }
    }
    ctx->pc = 0x1305D8u;
    // 0x1305d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1305d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305dc: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x1305DCu;
    SET_GPR_U32(ctx, 31, 0x1305E4u);
    ctx->pc = 0x1305E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305DCu;
    // 0x1305e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x1305DCu, 0x1305E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305E4u;
label_1305e4:
    // 0x1305e4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1305e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1305e8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1305e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1305ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1305ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305f0: 0xc0951c2  jal         func_254708
    ctx->pc = 0x1305F0u;
    SET_GPR_U32(ctx, 31, 0x1305F8u);
    ctx->pc = 0x1305F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305F0u;
    // 0x1305f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254708u, 0x1305F0u, 0x1305F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305F8u;
label_1305f8:
    // 0x1305f8: 0xc095216  jal         func_254858
    ctx->pc = 0x1305F8u;
    SET_GPR_U32(ctx, 31, 0x130600u);
    ctx->pc = 0x1305FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305F8u;
    // 0x1305fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x1305F8u, 0x130600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130600u;
label_130600:
    // 0x130600: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x130600u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x130604: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x130604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_130608:
    // 0x130608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13060c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13060cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130610: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130614: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130614u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130618: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13061c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x13061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x130620: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x130620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130624: 0x3e00008  jr          $ra
    ctx->pc = 0x130624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130624u;
        // 0x130628: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13062Cu;
    // 0x13062c: 0x0  nop
    ctx->pc = 0x13062cu;
    // NOP
    ctx->pc = 0x130630u;
}
