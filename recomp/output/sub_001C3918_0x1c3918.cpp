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

// Function: sub_001C3918
// Address: 0x1c3918 - 0x1c3ab8
void sub_001C3918_0x1c3918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3918_0x1c3918");
#endif

    switch (ctx->pc) {
        case 0x1c3958u: goto label_1c3958;
        case 0x1c3964u: goto label_1c3964;
        case 0x1c3998u: goto label_1c3998;
        case 0x1c39a8u: goto label_1c39a8;
        case 0x1c39d4u: goto label_1c39d4;
        case 0x1c3a54u: goto label_1c3a54;
        default: break;
    }

    ctx->pc = 0x1c3918u;

    // 0x1c3918: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c3918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c391c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c3920: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c3920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c3924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3928: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c3928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1c392c: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x1c392cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c3930: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c3930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c3934: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c3934u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3938: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c3938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c393c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c3940: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c3940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c3944: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1c3944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1c3948: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1c3948u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c394c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1c394cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c3950: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x1c3950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c3954: 0x0  nop
    ctx->pc = 0x1c3954u;
    // NOP
label_1c3958:
    // 0x1c3958: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c395c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1C395Cu;
    SET_GPR_U32(ctx, 31, 0x1C3964u);
    ctx->pc = 0x1C3960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C395Cu;
    // 0x1c3960: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1C395Cu, 0x1C3964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3964u;
label_1c3964:
    // 0x1c3964: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c3964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3968: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c3968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c396c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c3970: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c3970u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c3974: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c3974u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c3978: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x1c3978u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c397c: 0x8e330030  lw          $s3, 0x30($s1)
    ctx->pc = 0x1c397cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c3980: 0x92620022  lbu         $v0, 0x22($s3)
    ctx->pc = 0x1c3980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x1c3984: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C3984u;
    {
        const bool branch_taken_0x1c3984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3984u;
        // 0x1c3988: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3984) {
            ctx->pc = 0x1C3A28u;
            goto label_1c3a28;
        }
    }
    ctx->pc = 0x1C398Cu;
    // 0x1c398c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1c398cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1c3990: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c3990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c3994: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1c3994u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3998:
    // 0x1c3998: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x1c3998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c399c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1c399cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c39a0: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1C39A0u;
    SET_GPR_U32(ctx, 31, 0x1C39A8u);
    ctx->pc = 0x1C39A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39A0u;
    // 0x1c39a4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1C39A0u, 0x1C39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39A8u;
label_1c39a8:
    // 0x1c39a8: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C39A8u;
    {
        const bool branch_taken_0x1c39a8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39A8u;
        // 0x1c39ac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39a8) {
            ctx->pc = 0x1C39C0u;
            goto label_1c39c0;
        }
    }
    ctx->pc = 0x1C39B0u;
    // 0x1c39b0: 0x90c20014  lbu         $v0, 0x14($a2)
    ctx->pc = 0x1c39b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1c39b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c39b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c39b8: 0x50550016  beql        $v0, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C39B8u;
    {
        const bool branch_taken_0x1c39b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1c39b8) {
            ctx->pc = 0x1C39BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C39B8u;
            // 0x1c39bc: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3A14u;
            goto label_1c3a14;
        }
    }
    ctx->pc = 0x1C39C0u;
label_1c39c0:
    // 0x1c39c0: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x1c39c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c39c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c39c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c39c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39cc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1C39CCu;
    SET_GPR_U32(ctx, 31, 0x1C39D4u);
    ctx->pc = 0x1C39D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39CCu;
    // 0x1c39d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1C39CCu, 0x1C39D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39D4u;
label_1c39d4:
    // 0x1c39d4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c39d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c39d8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c39d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c39dc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c39dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c39e0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c39e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c39e4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c39e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c39e8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c39e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c39ec: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1c39ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c39f0: 0x0  nop
    ctx->pc = 0x1c39f0u;
    // NOP
    // 0x1c39f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C39F4u;
    {
        const bool branch_taken_0x1c39f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39F4u;
        // 0x1c39f8: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39f4) {
            ctx->pc = 0x1C3A14u;
            goto label_1c3a14;
        }
    }
    ctx->pc = 0x1C39FCu;
    // 0x1c39fc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c39fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3a00: 0x0  nop
    ctx->pc = 0x1c3a00u;
    // NOP
    // 0x1c3a04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3A04u;
    {
        const bool branch_taken_0x1c3a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3a04) {
            ctx->pc = 0x1C3A14u;
            goto label_1c3a14;
        }
    }
    ctx->pc = 0x1C3A0Cu;
    // 0x1c3a0c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1c3a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c3a10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1c3a14:
    // 0x1c3a14: 0x66520001  daddiu      $s2, $s2, 0x1
    ctx->pc = 0x1c3a14u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    // 0x1c3a18: 0x90620022  lbu         $v0, 0x22($v1)
    ctx->pc = 0x1c3a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x1c3a1c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1c3a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3a20: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1C3A20u;
    {
        const bool branch_taken_0x1c3a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a20) {
            ctx->pc = 0x1C3998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3998;
        }
    }
    ctx->pc = 0x1C3A28u;
label_1c3a28:
    // 0x1c3a28: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1c3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c3a2c: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3A2Cu;
    {
        const bool branch_taken_0x1c3a2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A2Cu;
        // 0x1c3a30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a2c) {
            ctx->pc = 0x1C3A3Cu;
            goto label_1c3a3c;
        }
    }
    ctx->pc = 0x1C3A34u;
    // 0x1c3a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3A34u;
    {
        const bool branch_taken_0x1c3a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A34u;
        // 0x1c3a38: 0xae330030  sw          $s3, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a34) {
            ctx->pc = 0x1C3A40u;
            goto label_1c3a40;
        }
    }
    ctx->pc = 0x1C3A3Cu;
label_1c3a3c:
    // 0x1c3a3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a40:
    // 0x1c3a40: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1C3A40u;
    {
        const bool branch_taken_0x1c3a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A40u;
        // 0x1c3a44: 0x8e260030  lw          $a2, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a40) {
            ctx->pc = 0x1C3958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3958;
        }
    }
    ctx->pc = 0x1C3A48u;
    // 0x1c3a48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c3a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a4c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1C3A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C3A54u);
    ctx->pc = 0x1C3A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A4Cu;
    // 0x1c3a50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1C3A4Cu, 0x1C3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A54u;
label_1c3a54:
    // 0x1c3a54: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c3a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3a58: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c3a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c3a5c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c3a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c3a60: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c3a60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c3a64: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c3a64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c3a68: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c3a68u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c3a6c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1c3a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1c3a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3a74: 0x0  nop
    ctx->pc = 0x1c3a74u;
    // NOP
    // 0x1c3a78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3a7c: 0x0  nop
    ctx->pc = 0x1c3a7cu;
    // NOP
    // 0x1c3a80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3A80u;
    {
        const bool branch_taken_0x1c3a80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3a80) {
            ctx->pc = 0x1C3A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3A80u;
            // 0x1c3a84: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3A88u;
            goto label_1c3a88;
        }
    }
    ctx->pc = 0x1C3A88u;
label_1c3a88:
    // 0x1c3a88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c3a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c3a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3a90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c3a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3a94: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c3a94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3a98: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c3a98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3a9c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c3a9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3aa0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c3aa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3aa4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1c3aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c3aa8: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1c3aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c3aac: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1c3aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AB0u;
        // 0x1c3ab4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3AB8u;
}
