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

// Function: sub_00291068
// Address: 0x291068 - 0x291110
void sub_00291068_0x291068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291068_0x291068");
#endif

    switch (ctx->pc) {
        case 0x291094u: goto label_291094;
        case 0x2910c0u: goto label_2910c0;
        default: break;
    }

    ctx->pc = 0x291068u;

    // 0x291068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29106c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29106cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x291070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x291074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291078: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x291078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29107c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29107cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291080: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x291080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x291084: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x291084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291088: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x291088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29108c: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x29108Cu;
    SET_GPR_U32(ctx, 31, 0x291094u);
    ctx->pc = 0x291090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29108Cu;
    // 0x291090: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x29108Cu, 0x291094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291094u;
label_291094:
    // 0x291094: 0x8e0301d8  lw          $v1, 0x1D8($s0)
    ctx->pc = 0x291094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
    // 0x291098: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x291098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29109c: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29109Cu;
    {
        const bool branch_taken_0x29109c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2910A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29109Cu;
        // 0x2910a0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29109c) {
            ctx->pc = 0x2910F4u;
            goto label_2910f4;
        }
    }
    ctx->pc = 0x2910A4u;
    // 0x2910a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2910a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2910a8: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x2910a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2910ac: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2910ACu;
    {
        const bool branch_taken_0x2910ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2910B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910ACu;
        // 0x2910b0: 0xc603007c  lwc1        $f3, 0x7C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910ac) {
            ctx->pc = 0x2910E0u;
            goto label_2910e0;
        }
    }
    ctx->pc = 0x2910B4u;
    // 0x2910b4: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x2910b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2910b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2910b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2910bc: 0x0  nop
    ctx->pc = 0x2910bcu;
    // NOP
label_2910c0:
    // 0x2910c0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2910c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2910c4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2910C4u;
    {
        const bool branch_taken_0x2910c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2910c4) {
            ctx->pc = 0x2910C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2910C4u;
            // 0x2910c8: 0xc60001e0  lwc1        $f0, 0x1E0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2910D0u;
            goto label_2910d0;
        }
    }
    ctx->pc = 0x2910CCu;
    // 0x2910cc: 0xc60001e4  lwc1        $f0, 0x1E4($s0)
    ctx->pc = 0x2910ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2910d0:
    // 0x2910d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2910d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2910d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2910d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2910d8: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2910D8u;
    {
        const bool branch_taken_0x2910d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2910DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910D8u;
        // 0x2910dc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910d8) {
            ctx->pc = 0x2910C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2910c0;
        }
    }
    ctx->pc = 0x2910E0u;
label_2910e0:
    // 0x2910e0: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x2910e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2910e4: 0x0  nop
    ctx->pc = 0x2910e4u;
    // NOP
    // 0x2910e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2910e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2910ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2910ECu;
    {
        const bool branch_taken_0x2910ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2910F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910ECu;
        // 0x2910f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910ec) {
            ctx->pc = 0x2910FCu;
            goto label_2910fc;
        }
    }
    ctx->pc = 0x2910F4u;
label_2910f4:
    // 0x2910f4: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2910f4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x2910f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2910f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2910fc:
    // 0x2910fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2910fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291100: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x291100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291104: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x291104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291108: 0x3e00008  jr          $ra
    ctx->pc = 0x291108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291108u;
        // 0x29110c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291110u;
}
