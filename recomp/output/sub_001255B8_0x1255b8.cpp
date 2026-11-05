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

// Function: sub_001255B8
// Address: 0x1255b8 - 0x1256b0
void sub_001255B8_0x1255b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001255B8_0x1255b8");
#endif

    switch (ctx->pc) {
        case 0x125628u: goto label_125628;
        case 0x125640u: goto label_125640;
        default: break;
    }

    ctx->pc = 0x1255b8u;

    // 0x1255b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1255b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1255bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1255bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1255c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1255c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1255c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1255c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1255c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1255c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1255cc: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1255CCu;
    {
        const bool branch_taken_0x1255cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1255D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255CCu;
        // 0x1255d0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255cc) {
            ctx->pc = 0x125694u;
            goto label_125694;
        }
    }
    ctx->pc = 0x1255D4u;
    // 0x1255d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1255d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1255d8: 0x0  nop
    ctx->pc = 0x1255d8u;
    // NOP
    // 0x1255dc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1255dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1255e0: 0x0  nop
    ctx->pc = 0x1255e0u;
    // NOP
    // 0x1255e4: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x1255E4u;
    {
        const bool branch_taken_0x1255e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1255E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255E4u;
        // 0x1255e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255e4) {
            ctx->pc = 0x125698u;
            goto label_125698;
        }
    }
    ctx->pc = 0x1255ECu;
    // 0x1255ec: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1255ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1255f0: 0x8c623d20  lw          $v0, 0x3D20($v1)
    ctx->pc = 0x1255f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B3D20u));
    // 0x1255f4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1255F4u;
    {
        const bool branch_taken_0x1255f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1255F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255F4u;
        // 0x1255f8: 0x24703d20  addiu       $s0, $v1, 0x3D20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255f4) {
            ctx->pc = 0x125694u;
            goto label_125694;
        }
    }
    ctx->pc = 0x1255FCu;
    // 0x1255fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1255fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x125600: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x125600u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x125604: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125604u;
    {
        const bool branch_taken_0x125604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125604u;
        // 0x125608: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125604) {
            ctx->pc = 0x125614u;
            goto label_125614;
        }
    }
    ctx->pc = 0x12560Cu;
    // 0x12560c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12560Cu;
    {
        const bool branch_taken_0x12560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12560Cu;
        // 0x125610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12560c) {
            ctx->pc = 0x125618u;
            goto label_125618;
        }
    }
    ctx->pc = 0x125614u;
label_125614:
    // 0x125614: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x125614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125618:
    // 0x125618: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x125618u;
    {
        const bool branch_taken_0x125618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125618) {
            ctx->pc = 0x12561Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125618u;
            // 0x12561c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125698u;
            goto label_125698;
        }
    }
    ctx->pc = 0x125620u;
    // 0x125620: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x125620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x125624: 0x0  nop
    ctx->pc = 0x125624u;
    // NOP
label_125628:
    // 0x125628: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x125628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12562c: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x12562cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x125630: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x125630u;
    {
        const bool branch_taken_0x125630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x125634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125630u;
        // 0x125634: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125630) {
            ctx->pc = 0x125668u;
            goto label_125668;
        }
    }
    ctx->pc = 0x125638u;
    // 0x125638: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x125638u;
    SET_GPR_U32(ctx, 31, 0x125640u);
    ctx->pc = 0x12563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125638u;
    // 0x12563c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x125638u, 0x125640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125640u;
label_125640:
    // 0x125640: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x125640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125644: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x125644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x125648: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x125648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12564c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x12564cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x125650: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x125650u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x125654: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x125654u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x125658: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x125658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12565c: 0x0  nop
    ctx->pc = 0x12565cu;
    // NOP
    // 0x125660: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x125660u;
    {
        const bool branch_taken_0x125660 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x125664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125660u;
        // 0x125664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125660) {
            ctx->pc = 0x125698u;
            goto label_125698;
        }
    }
    ctx->pc = 0x125668u;
label_125668:
    // 0x125668: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x125668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12566c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12566Cu;
    {
        const bool branch_taken_0x12566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12566c) {
            ctx->pc = 0x125670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12566Cu;
            // 0x125670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12568Cu;
            goto label_12568c;
        }
    }
    ctx->pc = 0x125674u;
    // 0x125674: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x125674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x125678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125678u;
    {
        const bool branch_taken_0x125678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125678u;
        // 0x12567c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125678) {
            ctx->pc = 0x125688u;
            goto label_125688;
        }
    }
    ctx->pc = 0x125680u;
    // 0x125680: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x125680u;
    {
        const bool branch_taken_0x125680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125680u;
        // 0x125684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125680) {
            ctx->pc = 0x12568Cu;
            goto label_12568c;
        }
    }
    ctx->pc = 0x125688u;
label_125688:
    // 0x125688: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x125688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12568c:
    // 0x12568c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x12568Cu;
    {
        const bool branch_taken_0x12568c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12568c) {
            ctx->pc = 0x125690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12568Cu;
            // 0x125690: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125628;
        }
    }
    ctx->pc = 0x125694u;
label_125694:
    // 0x125694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125698:
    // 0x125698: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x125698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12569c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12569cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1256a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1256a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1256a4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1256a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1256a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1256A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1256ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256A8u;
        // 0x1256ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1256A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1256B0u;
}
