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

// Function: sub_001C65F0
// Address: 0x1c65f0 - 0x1c67b8
void sub_001C65F0_0x1c65f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C65F0_0x1c65f0");
#endif

    switch (ctx->pc) {
        case 0x1c66c8u: goto label_1c66c8;
        case 0x1c66d0u: goto label_1c66d0;
        case 0x1c66e8u: goto label_1c66e8;
        case 0x1c6784u: goto label_1c6784;
        default: break;
    }

    ctx->pc = 0x1c65f0u;

    // 0x1c65f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c65f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c65f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1c65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1c65f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c65f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c65fc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c65fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c6600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6604: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1c6604u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1c6608: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c6608u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c660c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c6610: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c6610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c6614: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c6618: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c6618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c661c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1c661cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c6620: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6620u;
    {
        const bool branch_taken_0x1c6620 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6620u;
        // 0x1c6624: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6620) {
            ctx->pc = 0x1C663Cu;
            goto label_1c663c;
        }
    }
    ctx->pc = 0x1C6628u;
    // 0x1c6628: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c6628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c662c: 0x0  nop
    ctx->pc = 0x1c662cu;
    // NOP
    // 0x1c6630: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c6630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c6634: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6634u;
    {
        const bool branch_taken_0x1c6634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6634) {
            ctx->pc = 0x1C6658u;
            goto label_1c6658;
        }
    }
    ctx->pc = 0x1C663Cu;
label_1c663c:
    // 0x1c663c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c663cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c6640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c6640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c6644: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c6644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c6648: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c6648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c664c: 0x0  nop
    ctx->pc = 0x1c664cu;
    // NOP
    // 0x1c6650: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c6650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c6654: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c6654u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c6658:
    // 0x1c6658: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c6658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c665c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c665cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c6660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6664: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x1c6664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6668: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1c6668u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c666c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1c666cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6670: 0x0  nop
    ctx->pc = 0x1c6670u;
    // NOP
    // 0x1c6674: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
    ctx->pc = 0x1C6674u;
    {
        const bool branch_taken_0x1c6674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6674) {
            ctx->pc = 0x1C6678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6674u;
            // 0x1c6678: 0x8e25005c  lw          $a1, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6774u;
            goto label_1c6774;
        }
    }
    ctx->pc = 0x1C667Cu;
    // 0x1c667c: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C667Cu;
    {
        const bool branch_taken_0x1c667c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C667Cu;
        // 0x1c6680: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c667c) {
            ctx->pc = 0x1C6770u;
            goto label_1c6770;
        }
    }
    ctx->pc = 0x1C6684u;
    // 0x1c6684: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c6684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c6688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c668c: 0x24532d80  addiu       $s3, $v0, 0x2D80
    ctx->pc = 0x1c668cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11648));
    // 0x1c6690: 0x460c6542  mul.s       $f21, $f12, $f12
    ctx->pc = 0x1c6690u;
    ctx->f[21] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1c6694: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c6694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c6698: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c6698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c669c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c669cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c66a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c66a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66a4: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x1c66a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x1c66a8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c66a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c66ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C66ACu;
    {
        const bool branch_taken_0x1c66ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66ACu;
        // 0x1c66b0: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66ac) {
            ctx->pc = 0x1C66B8u;
            goto label_1c66b8;
        }
    }
    ctx->pc = 0x1C66B4u;
    // 0x1c66b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c66b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c66b8:
    // 0x1c66b8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C66B8u;
    {
        const bool branch_taken_0x1c66b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66B8u;
        // 0x1c66bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66b8) {
            ctx->pc = 0x1C6758u;
            goto label_1c6758;
        }
    }
    ctx->pc = 0x1C66C0u;
    // 0x1c66c0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C66C0u;
    {
        const bool branch_taken_0x1c66c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66C0u;
        // 0x1c66c4: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66c0) {
            ctx->pc = 0x1C6750u;
            goto label_1c6750;
        }
    }
    ctx->pc = 0x1C66C8u;
label_1c66c8:
    // 0x1c66c8: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x1C66C8u;
    SET_GPR_U32(ctx, 31, 0x1C66D0u);
    ctx->pc = 0x1C66CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66C8u;
    // 0x1c66cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x1C66C8u, 0x1C66D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66D0u;
label_1c66d0:
    // 0x1c66d0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C66D0u;
    {
        const bool branch_taken_0x1c66d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c66d0) {
            ctx->pc = 0x1C66D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C66D0u;
            // 0x1c66d4: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6734u;
            goto label_1c6734;
        }
    }
    ctx->pc = 0x1C66D8u;
    // 0x1c66d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c66d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c66dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66e0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1C66E0u;
    SET_GPR_U32(ctx, 31, 0x1C66E8u);
    ctx->pc = 0x1C66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66E0u;
    // 0x1c66e4: 0x26260330  addiu       $a2, $s1, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1C66E0u, 0x1C66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66E8u;
label_1c66e8:
    // 0x1c66e8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c66e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c66ec: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c66ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c66f0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c66f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c66f4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c66f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c66f8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c66f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c66fc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c66fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c6700: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c6700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6704: 0x0  nop
    ctx->pc = 0x1c6704u;
    // NOP
    // 0x1c6708: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x1C6708u;
    {
        const bool branch_taken_0x1c6708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6708) {
            ctx->pc = 0x1C670Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6708u;
            // 0x1c670c: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6734u;
            goto label_1c6734;
        }
    }
    ctx->pc = 0x1C6710u;
    // 0x1c6710: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6710u;
    {
        const bool branch_taken_0x1c6710 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6710) {
            ctx->pc = 0x1C6714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6710u;
            // 0x1c6714: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C672Cu;
            goto label_1c672c;
        }
    }
    ctx->pc = 0x1C6718u;
    // 0x1c6718: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c6718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c671c: 0x0  nop
    ctx->pc = 0x1c671cu;
    // NOP
    // 0x1c6720: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6720u;
    {
        const bool branch_taken_0x1c6720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6720) {
            ctx->pc = 0x1C6724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6720u;
            // 0x1c6724: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6734u;
            goto label_1c6734;
        }
    }
    ctx->pc = 0x1C6728u;
    // 0x1c6728: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1c6728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c672c:
    // 0x1c672c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c672cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c6730: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1c6730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1c6734:
    // 0x1c6734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6738: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6738u;
    {
        const bool branch_taken_0x1c6738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6738u;
        // 0x1c673c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6738) {
            ctx->pc = 0x1C6744u;
            goto label_1c6744;
        }
    }
    ctx->pc = 0x1C6740u;
    // 0x1c6740: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c6740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c6744:
    // 0x1c6744: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6744u;
    {
        const bool branch_taken_0x1c6744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6744u;
        // 0x1c6748: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6744) {
            ctx->pc = 0x1C6758u;
            goto label_1c6758;
        }
    }
    ctx->pc = 0x1C674Cu;
    // 0x1c674c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c6750:
    // 0x1c6750: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1c6750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1c6754: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c6754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c6758:
    // 0x1c6758: 0x1600ffdb  bnez        $s0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1C6758u;
    {
        const bool branch_taken_0x1c6758 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6758u;
        // 0x1c675c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6758) {
            ctx->pc = 0x1C66C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c66c8;
        }
    }
    ctx->pc = 0x1C6760u;
    // 0x1c6760: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6760u;
    {
        const bool branch_taken_0x1c6760 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6760u;
        // 0x1c6764: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6760) {
            ctx->pc = 0x1C6770u;
            goto label_1c6770;
        }
    }
    ctx->pc = 0x1C6768u;
    // 0x1c6768: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6768u;
    {
        const bool branch_taken_0x1c6768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6768u;
        // 0x1c676c: 0xae32005c  sw          $s2, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6768) {
            ctx->pc = 0x1C6790u;
            goto label_1c6790;
        }
    }
    ctx->pc = 0x1C6770u;
label_1c6770:
    // 0x1c6770: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x1c6770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_1c6774:
    // 0x1c6774: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6774u;
    {
        const bool branch_taken_0x1c6774 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6774) {
            ctx->pc = 0x1C6778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6774u;
            // 0x1c6778: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6790u;
            goto label_1c6790;
        }
    }
    ctx->pc = 0x1C677Cu;
    // 0x1c677c: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x1C677Cu;
    SET_GPR_U32(ctx, 31, 0x1C6784u);
    ctx->pc = 0x1C6780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C677Cu;
    // 0x1c6780: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x1C677Cu, 0x1C6784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6784u;
label_1c6784:
    // 0x1c6784: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C6784u;
    {
        const bool branch_taken_0x1c6784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6784) {
            ctx->pc = 0x1C6788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6784u;
            // 0x1c6788: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C678Cu;
            goto label_1c678c;
        }
    }
    ctx->pc = 0x1C678Cu;
label_1c678c:
    // 0x1c678c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x1c678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_1c6790:
    // 0x1c6790: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c6790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6794: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c6794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6798: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c6798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c679c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c679cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c67a0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c67a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c67a4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c67a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c67a8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1c67a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c67ac: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1c67acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c67b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C67B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67B0u;
        // 0x1c67b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C67B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C67B8u;
}
