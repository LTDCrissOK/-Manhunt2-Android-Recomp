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

// Function: sub_00124108
// Address: 0x124108 - 0x1241e0
void sub_00124108_0x124108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124108_0x124108");
#endif

    switch (ctx->pc) {
        case 0x124150u: goto label_124150;
        case 0x124168u: goto label_124168;
        case 0x1241b0u: goto label_1241b0;
        default: break;
    }

    ctx->pc = 0x124108u;

    // 0x124108: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x124108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12410c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124110: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x124110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x124114: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x124114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12411c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12411cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124120: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124124: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x124124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124128: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12412c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12412cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124130: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124134: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x124134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124138: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x124138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12413c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x12413cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124140: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x124140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x124144: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x124144u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x124148: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124148u;
    SET_GPR_U32(ctx, 31, 0x124150u);
    ctx->pc = 0x12414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124148u;
    // 0x12414c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124148u, 0x124150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124150u;
label_124150:
    // 0x124150: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x124150u;
    {
        const bool branch_taken_0x124150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124150u;
        // 0x124154: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124150) {
            ctx->pc = 0x1241B4u;
            goto label_1241b4;
        }
    }
    ctx->pc = 0x124158u;
    // 0x124158: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x124158u;
    {
        const bool branch_taken_0x124158 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124158u;
        // 0x12415c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124158) {
            ctx->pc = 0x1241B4u;
            goto label_1241b4;
        }
    }
    ctx->pc = 0x124160u;
    // 0x124160: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x124160u;
    SET_GPR_U32(ctx, 31, 0x124168u);
    ctx->pc = 0x124164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124160u;
    // 0x124164: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x124160u, 0x124168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124168u;
label_124168:
    // 0x124168: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x124168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12416c: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x12416cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x124170: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x124170u;
    {
        const bool branch_taken_0x124170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124170u;
        // 0x124174: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124170) {
            ctx->pc = 0x1241B4u;
            goto label_1241b4;
        }
    }
    ctx->pc = 0x124178u;
    // 0x124178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x124178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12417c: 0x0  nop
    ctx->pc = 0x12417cu;
    // NOP
    // 0x124180: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x124180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124184: 0x0  nop
    ctx->pc = 0x124184u;
    // NOP
    // 0x124188: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x124188u;
    {
        const bool branch_taken_0x124188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124188u;
        // 0x12418c: 0x8e840078  lw          $a0, 0x78($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124188) {
            ctx->pc = 0x124198u;
            goto label_124198;
        }
    }
    ctx->pc = 0x124190u;
    // 0x124190: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x124190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x124194: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x124194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_124198:
    // 0x124198: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x124198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12419c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x12419cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241a0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1241a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1241a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1241a8: 0xc042c2a  jal         func_10B0A8
    ctx->pc = 0x1241A8u;
    SET_GPR_U32(ctx, 31, 0x1241B0u);
    ctx->pc = 0x1241ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1241A8u;
    // 0x1241ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B0A8u, 0x1241A8u, 0x1241B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1241B0u;
label_1241b0:
    // 0x1241b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1241b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1241b4:
    // 0x1241b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1241b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1241b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1241b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1241bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1241bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1241c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1241c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1241c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1241c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1241c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1241c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1241cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1241ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1241d0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1241d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1241d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1241D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1241D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241D4u;
        // 0x1241d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1241D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1241DCu;
    // 0x1241dc: 0x0  nop
    ctx->pc = 0x1241dcu;
    // NOP
    ctx->pc = 0x1241e0u;
}
