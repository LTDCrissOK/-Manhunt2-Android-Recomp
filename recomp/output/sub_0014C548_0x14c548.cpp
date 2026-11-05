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

// Function: sub_0014C548
// Address: 0x14c548 - 0x14c648
void sub_0014C548_0x14c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C548_0x14c548");
#endif

    switch (ctx->pc) {
        case 0x14c604u: goto label_14c604;
        default: break;
    }

    ctx->pc = 0x14c548u;

    // 0x14c548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14c548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14c54c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14c54cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c550: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c554: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14c554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c558: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x14c558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14c55c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14c560: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x14c560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x14c564: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x14c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14c568: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x14c568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x14c56c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14c570: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c578: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x14c578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14c57c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x14c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14c580: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x14c580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14c584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c588: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x14c588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14c58c: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x14c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    // 0x14c590: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C590u;
    {
        const bool branch_taken_0x14c590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c590) {
            ctx->pc = 0x14C594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C590u;
            // 0x14c594: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C5A0u;
            goto label_14c5a0;
        }
    }
    ctx->pc = 0x14C598u;
    // 0x14c598: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C598u;
    {
        const bool branch_taken_0x14c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C598u;
        // 0x14c59c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c598) {
            ctx->pc = 0x14C5A8u;
            goto label_14c5a8;
        }
    }
    ctx->pc = 0x14C5A0u;
label_14c5a0:
    // 0x14c5a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c5a4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x14c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14c5a8:
    // 0x14c5a8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x14c5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x14c5ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14c5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14c5b0: 0xc4e00668  lwc1        $f0, 0x668($a3)
    ctx->pc = 0x14c5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c5b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14c5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c5b8: 0x0  nop
    ctx->pc = 0x14c5b8u;
    // NOP
    // 0x14c5bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14C5BCu;
    {
        const bool branch_taken_0x14c5bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c5bc) {
            ctx->pc = 0x14C5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C5BCu;
            // 0x14c5c0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C5C4u;
            goto label_14c5c4;
        }
    }
    ctx->pc = 0x14C5C4u;
label_14c5c4:
    // 0x14c5c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14c5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c5c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14c5cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14c5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14c5d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14c5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14c5d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x14c5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x14c5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14c5dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c5e0: 0x8ce50664  lw          $a1, 0x664($a3)
    ctx->pc = 0x14c5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1636)));
    // 0x14c5e4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14c5e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14c5e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14c5e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14c5ec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14c5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c5f0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x14c5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14c5f4: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x14c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14c5f8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14c5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14c5fc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14C5FCu;
    SET_GPR_U32(ctx, 31, 0x14C604u);
    ctx->pc = 0x14C600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5FCu;
    // 0x14c600: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14C5FCu, 0x14C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C604u;
label_14c604:
    // 0x14c604: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x14c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14c608: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x14c608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14c60c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x14c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14c610: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x14c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14c614: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14c614u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x14c618: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x14c618u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x14c61c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x14c61cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x14c620: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14c620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c624: 0x0  nop
    ctx->pc = 0x14c624u;
    // NOP
    // 0x14c628: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14C628u;
    {
        const bool branch_taken_0x14c628 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C628u;
        // 0x14c62c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c628) {
            ctx->pc = 0x14C634u;
            goto label_14c634;
        }
    }
    ctx->pc = 0x14C630u;
    // 0x14c630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14c630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c634:
    // 0x14c634: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14c634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c638: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x14c638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14c63c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C63Cu;
        // 0x14c640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C644u;
    // 0x14c644: 0x0  nop
    ctx->pc = 0x14c644u;
    // NOP
    ctx->pc = 0x14c648u;
}
