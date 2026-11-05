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

// Function: sub_00196608
// Address: 0x196608 - 0x1966c0
void sub_00196608_0x196608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196608_0x196608");
#endif

    switch (ctx->pc) {
        case 0x196608u: goto label_196608;
        case 0x19660cu: goto label_19660c;
        case 0x196610u: goto label_196610;
        case 0x196614u: goto label_196614;
        case 0x196618u: goto label_196618;
        case 0x19661cu: goto label_19661c;
        case 0x196620u: goto label_196620;
        case 0x196624u: goto label_196624;
        case 0x196628u: goto label_196628;
        case 0x19662cu: goto label_19662c;
        case 0x196630u: goto label_196630;
        case 0x196634u: goto label_196634;
        case 0x196638u: goto label_196638;
        case 0x19663cu: goto label_19663c;
        case 0x196640u: goto label_196640;
        case 0x196644u: goto label_196644;
        case 0x196648u: goto label_196648;
        case 0x19664cu: goto label_19664c;
        case 0x196650u: goto label_196650;
        case 0x196654u: goto label_196654;
        case 0x196658u: goto label_196658;
        case 0x19665cu: goto label_19665c;
        case 0x196660u: goto label_196660;
        case 0x196664u: goto label_196664;
        case 0x196668u: goto label_196668;
        case 0x19666cu: goto label_19666c;
        case 0x196670u: goto label_196670;
        case 0x196674u: goto label_196674;
        case 0x196678u: goto label_196678;
        case 0x19667cu: goto label_19667c;
        case 0x196680u: goto label_196680;
        case 0x196684u: goto label_196684;
        case 0x196688u: goto label_196688;
        case 0x19668cu: goto label_19668c;
        case 0x196690u: goto label_196690;
        case 0x196694u: goto label_196694;
        case 0x196698u: goto label_196698;
        case 0x19669cu: goto label_19669c;
        case 0x1966a0u: goto label_1966a0;
        case 0x1966a4u: goto label_1966a4;
        case 0x1966a8u: goto label_1966a8;
        case 0x1966acu: goto label_1966ac;
        case 0x1966b0u: goto label_1966b0;
        case 0x1966b4u: goto label_1966b4;
        case 0x1966b8u: goto label_1966b8;
        case 0x1966bcu: goto label_1966bc;
        default: break;
    }

    ctx->pc = 0x196608u;

label_196608:
    // 0x196608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19660c:
    // 0x19660c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_196610:
    // 0x196610: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x196610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_196614:
    // 0x196614: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x196614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_196618:
    // 0x196618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19661c:
    // 0x19661c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x19661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_196620:
    // 0x196620: 0x50430024  beql        $v0, $v1, . + 4 + (0x24 << 2)
label_196624:
    if (ctx->pc == 0x196624u) {
        ctx->pc = 0x196624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196620u;
        // 0x196624: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196628u;
        goto label_196628;
    }
    ctx->pc = 0x196620u;
    {
        const bool branch_taken_0x196620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196620) {
            ctx->pc = 0x196624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196620u;
            // 0x196624: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1966B4u;
            goto label_1966b4;
        }
    }
    ctx->pc = 0x196628u;
label_196628:
    // 0x196628: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x196628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19662c:
    // 0x19662c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_196630:
    if (ctx->pc == 0x196630u) {
        ctx->pc = 0x196630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19662Cu;
        // 0x196630: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196634u;
        goto label_196634;
    }
    ctx->pc = 0x19662Cu;
    {
        const bool branch_taken_0x19662c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x196630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19662Cu;
        // 0x196630: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19662c) {
            ctx->pc = 0x196644u;
            goto label_196644;
        }
    }
    ctx->pc = 0x196634u;
label_196634:
    // 0x196634: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x196634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_196638:
    // 0x196638: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x196638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19663c:
    // 0x19663c: 0x40f809  jalr        $v0
label_196640:
    if (ctx->pc == 0x196640u) {
        ctx->pc = 0x196644u;
        goto label_196644;
    }
    ctx->pc = 0x19663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196644u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19663Cu, 0x196644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196644u;
label_196644:
    // 0x196644: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x196644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_196648:
    // 0x196648: 0xc061a12  jal         func_186848
label_19664c:
    if (ctx->pc == 0x19664Cu) {
        ctx->pc = 0x19664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196648u;
        // 0x19664c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196650u;
        goto label_196650;
    }
    ctx->pc = 0x196648u;
    SET_GPR_U32(ctx, 31, 0x196650u);
    ctx->pc = 0x19664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196648u;
    // 0x19664c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196648u, 0x196650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196650u;
label_196650:
    // 0x196650: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x196650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_196654:
    // 0x196654: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x196654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196658:
    // 0x196658: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x196658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19665c:
    // 0x19665c: 0x0  nop
    ctx->pc = 0x19665cu;
    // NOP
label_196660:
    // 0x196660: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_196664:
    if (ctx->pc == 0x196664u) {
        ctx->pc = 0x196664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196660u;
        // 0x196664: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196668u;
        goto label_196668;
    }
    ctx->pc = 0x196660u;
    {
        const bool branch_taken_0x196660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196660u;
        // 0x196664: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196660) {
            ctx->pc = 0x19666Cu;
            goto label_19666c;
        }
    }
    ctx->pc = 0x196668u;
label_196668:
    // 0x196668: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x196668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_19666c:
    // 0x19666c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x19666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_196670:
    // 0x196670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196674:
    // 0x196674: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x196674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196678:
    // 0x196678: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x196678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19667c:
    // 0x19667c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x19667cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_196680:
    // 0x196680: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x196680u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_196684:
    // 0x196684: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x196684u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_196688:
    // 0x196688: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x196688u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_19668c:
    // 0x19668c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19668cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_196690:
    // 0x196690: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x196690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_196694:
    // 0x196694: 0xc061a12  jal         func_186848
label_196698:
    if (ctx->pc == 0x196698u) {
        ctx->pc = 0x196698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196694u;
        // 0x196698: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19669Cu;
        goto label_19669c;
    }
    ctx->pc = 0x196694u;
    SET_GPR_U32(ctx, 31, 0x19669Cu);
    ctx->pc = 0x196698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196694u;
    // 0x196698: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196694u, 0x19669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19669Cu;
label_19669c:
    // 0x19669c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1966a0:
    // 0x1966a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1966a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1966a4:
    // 0x1966a4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1966a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1966a8:
    // 0x1966a8: 0x40f809  jalr        $v0
label_1966ac:
    if (ctx->pc == 0x1966ACu) {
        ctx->pc = 0x1966ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966A8u;
        // 0x1966ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966B0u;
        goto label_1966b0;
    }
    ctx->pc = 0x1966A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1966B0u);
        ctx->pc = 0x1966ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966A8u;
        // 0x1966ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966A8u, 0x1966B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1966B0u;
label_1966b0:
    // 0x1966b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1966b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1966b4:
    // 0x1966b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1966b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1966b8:
    // 0x1966b8: 0x3e00008  jr          $ra
label_1966bc:
    if (ctx->pc == 0x1966BCu) {
        ctx->pc = 0x1966BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B8u;
        // 0x1966bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966C0u;
        goto label_fallthrough_0x1966b8;
    }
    ctx->pc = 0x1966B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1966BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B8u;
        // 0x1966bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1966b8:
    ctx->pc = 0x1966C0u;
}
