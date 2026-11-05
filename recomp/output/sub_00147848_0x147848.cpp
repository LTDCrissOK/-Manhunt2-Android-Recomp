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

// Function: sub_00147848
// Address: 0x147848 - 0x147930
void sub_00147848_0x147848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147848_0x147848");
#endif

    switch (ctx->pc) {
        case 0x147890u: goto label_147890;
        case 0x1478b8u: goto label_1478b8;
        case 0x1478c0u: goto label_1478c0;
        default: break;
    }

    ctx->pc = 0x147848u;

    // 0x147848: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14784c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14784cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x147850: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x147850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x147854: 0x2444bd48  addiu       $a0, $v0, -0x42B8
    ctx->pc = 0x147854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950216));
    // 0x147858: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x147858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14785c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14785cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147860: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x147860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48BD48u));
    // 0x147864: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147868: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x147868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14786c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x14786Cu;
    {
        const bool branch_taken_0x14786c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14786Cu;
        // 0x147870: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14786c) {
            ctx->pc = 0x147910u;
            goto label_147910;
        }
    }
    ctx->pc = 0x147874u;
    // 0x147874: 0x52000027  beql        $s0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x147874u;
    {
        const bool branch_taken_0x147874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x147874) {
            ctx->pc = 0x147878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147874u;
            // 0x147878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147914u;
            goto label_147914;
        }
    }
    ctx->pc = 0x14787Cu;
    // 0x14787c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x14787cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147880: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x147880u;
    {
        const bool branch_taken_0x147880 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x147884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147880u;
        // 0x147884: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147880) {
            ctx->pc = 0x147898u;
            goto label_147898;
        }
    }
    ctx->pc = 0x147888u;
    // 0x147888: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x147888u;
    {
        const bool branch_taken_0x147888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147888u;
        // 0x14788c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147888) {
            ctx->pc = 0x14789Cu;
            goto label_14789c;
        }
    }
    ctx->pc = 0x147890u;
label_147890:
    // 0x147890: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x147890u;
    {
        const bool branch_taken_0x147890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147890u;
        // 0x147894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147890) {
            ctx->pc = 0x147914u;
            goto label_147914;
        }
    }
    ctx->pc = 0x147898u;
label_147898:
    // 0x147898: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x147898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14789c:
    // 0x14789c: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x14789Cu;
    {
        const bool branch_taken_0x14789c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14789Cu;
        // 0x1478a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14789c) {
            ctx->pc = 0x147914u;
            goto label_147914;
        }
    }
    ctx->pc = 0x1478A4u;
    // 0x1478a4: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x1478a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x1478a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1478a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1478ac: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1478ACu;
    {
        const bool branch_taken_0x1478ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478ACu;
        // 0x1478b0: 0x2623bd48  addiu       $v1, $s1, -0x42B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478ac) {
            ctx->pc = 0x1478E8u;
            goto label_1478e8;
        }
    }
    ctx->pc = 0x1478B4u;
    // 0x1478b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1478b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1478b8:
    // 0x1478b8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1478B8u;
    SET_GPR_U32(ctx, 31, 0x1478C0u);
    ctx->pc = 0x1478BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1478B8u;
    // 0x1478bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1478B8u, 0x1478C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1478C0u;
label_1478c0:
    // 0x1478c0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1478c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1478c4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1478c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1478c8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1478c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1478cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1478ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1478d0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1478d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1478d4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1478d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1478d8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1478d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1478dc: 0x0  nop
    ctx->pc = 0x1478dcu;
    // NOP
    // 0x1478e0: 0x4501ffeb  bc1t        . + 4 + (-0x15 << 2)
    ctx->pc = 0x1478E0u;
    {
        const bool branch_taken_0x1478e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1478E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478E0u;
        // 0x1478e4: 0x2623bd48  addiu       $v1, $s1, -0x42B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478e0) {
            ctx->pc = 0x147890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147890;
        }
    }
    ctx->pc = 0x1478E8u;
label_1478e8:
    // 0x1478e8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1478e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1478ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1478ECu;
    {
        const bool branch_taken_0x1478ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478ECu;
        // 0x1478f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478ec) {
            ctx->pc = 0x147908u;
            goto label_147908;
        }
    }
    ctx->pc = 0x1478F4u;
    // 0x1478f4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1478f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1478f8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1478f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1478fc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1478fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x147900: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x147900u;
    {
        const bool branch_taken_0x147900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147900) {
            ctx->pc = 0x147904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147900u;
            // 0x147904: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147908u;
            goto label_147908;
        }
    }
    ctx->pc = 0x147908u;
label_147908:
    // 0x147908: 0x14c0ffeb  bnez        $a2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x147908u;
    {
        const bool branch_taken_0x147908 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x14790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147908u;
        // 0x14790c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147908) {
            ctx->pc = 0x1478B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1478b8;
        }
    }
    ctx->pc = 0x147910u;
label_147910:
    // 0x147910: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x147910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_147914:
    // 0x147914: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x147914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147918: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x147918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14791c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14791cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147920: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x147920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x147924: 0x3e00008  jr          $ra
    ctx->pc = 0x147924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147924u;
        // 0x147928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14792Cu;
    // 0x14792c: 0x0  nop
    ctx->pc = 0x14792cu;
    // NOP
    ctx->pc = 0x147930u;
}
