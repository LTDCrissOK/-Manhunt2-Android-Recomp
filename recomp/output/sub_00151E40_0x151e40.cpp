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

// Function: sub_00151E40
// Address: 0x151e40 - 0x152008
void sub_00151E40_0x151e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151E40_0x151e40");
#endif

    switch (ctx->pc) {
        case 0x151f10u: goto label_151f10;
        case 0x151f34u: goto label_151f34;
        case 0x151fa8u: goto label_151fa8;
        case 0x151fbcu: goto label_151fbc;
        case 0x151fc8u: goto label_151fc8;
        default: break;
    }

    ctx->pc = 0x151e40u;

label_151e40:
    // 0x151e40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x151e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x151e44: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x151e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x151e48: 0x34214fff  ori         $at, $at, 0x4FFF
    ctx->pc = 0x151e48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20479);
    // 0x151e4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151e50: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x151e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x151e54: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x151e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x151e58: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x151e58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e5c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x151e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x151e60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x151e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e64: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x151e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x151e68: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x151e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x151e6c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x151e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x151e70: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x151e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x151e74: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x151e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x151e78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x151e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x151e7c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x151e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x151e80: 0x9222095c  lbu         $v0, 0x95C($s1)
    ctx->pc = 0x151e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2396)));
    // 0x151e84: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x151E84u;
    {
        const bool branch_taken_0x151e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151e84) {
            ctx->pc = 0x151E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151E84u;
            // 0x151e88: 0x9223046c  lbu         $v1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151E94u;
            goto label_151e94;
        }
    }
    ctx->pc = 0x151E8Cu;
    // 0x151e8c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x151E8Cu;
    {
        const bool branch_taken_0x151e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E8Cu;
        // 0x151e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e8c) {
            ctx->pc = 0x151FD8u;
            goto label_151fd8;
        }
    }
    ctx->pc = 0x151E94u;
label_151e94:
    // 0x151e94: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x151e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x151e98: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x151e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x151e9c: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x151e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x151ea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151ea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x151ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151ea8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151eac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151eb0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x151eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x151eb4: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x151eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x151eb8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x151eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x151ebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151ec0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x151ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x151ec4: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x151ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x151ec8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x151EC8u;
    {
        const bool branch_taken_0x151ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ec8) {
            ctx->pc = 0x151ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151EC8u;
            // 0x151ecc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151ED8u;
            goto label_151ed8;
        }
    }
    ctx->pc = 0x151ED0u;
    // 0x151ed0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151ED0u;
    {
        const bool branch_taken_0x151ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151ED0u;
        // 0x151ed4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ed0) {
            ctx->pc = 0x151EE0u;
            goto label_151ee0;
        }
    }
    ctx->pc = 0x151ED8u;
label_151ed8:
    // 0x151ed8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151edc: 0x24760070  addiu       $s6, $v1, 0x70
    ctx->pc = 0x151edcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_151ee0:
    // 0x151ee0: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x151ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x151ee4: 0x34214fff  ori         $at, $at, 0x4FFF
    ctx->pc = 0x151ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20479);
    // 0x151ee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151eec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x151eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ef0: 0x9222095c  lbu         $v0, 0x95C($s1)
    ctx->pc = 0x151ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2396)));
    // 0x151ef4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x151ef4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ef8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x151ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x151efc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x151EFCu;
    {
        const bool branch_taken_0x151efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EFCu;
        // 0x151f00: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151efc) {
            ctx->pc = 0x151F9Cu;
            goto label_151f9c;
        }
    }
    ctx->pc = 0x151F04u;
    // 0x151f04: 0x2635093c  addiu       $s5, $s1, 0x93C
    ctx->pc = 0x151f04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 2364));
    // 0x151f08: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x151f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x151f0c: 0x0  nop
    ctx->pc = 0x151f0cu;
    // NOP
label_151f10:
    // 0x151f10: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x151f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x151f14: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x151f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151f18: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x151F18u;
    {
        const bool branch_taken_0x151f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F18u;
        // 0x151f1c: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f18) {
            ctx->pc = 0x151F7Cu;
            goto label_151f7c;
        }
    }
    ctx->pc = 0x151F20u;
    // 0x151f20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x151f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f24: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x151f24u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151f28: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x151f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f2c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x151F2Cu;
    SET_GPR_U32(ctx, 31, 0x151F34u);
    ctx->pc = 0x151F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F2Cu;
    // 0x151f30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x151F2Cu, 0x151F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F34u;
label_151f34:
    // 0x151f34: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x151f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151f38: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x151f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151f3c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x151f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x151f40: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x151f40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x151f44: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x151f44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x151f48: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x151f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x151f4c: 0x2e620001  sltiu       $v0, $s3, 0x1
    ctx->pc = 0x151f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x151f50: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x151F50u;
    {
        const bool branch_taken_0x151f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f50) {
            ctx->pc = 0x151F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151F50u;
            // 0x151f54: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x151F78u;
            goto label_151f78;
        }
    }
    ctx->pc = 0x151F58u;
    // 0x151f58: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x151f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151f5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x151f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151f60: 0x0  nop
    ctx->pc = 0x151f60u;
    // NOP
    // 0x151f64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x151F64u;
    {
        const bool branch_taken_0x151f64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x151f64) {
            ctx->pc = 0x151F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151F64u;
            // 0x151f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151F6Cu;
            goto label_151f6c;
        }
    }
    ctx->pc = 0x151F6Cu;
label_151f6c:
    // 0x151f6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151F6Cu;
    {
        const bool branch_taken_0x151f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F6Cu;
        // 0x151f70: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f6c) {
            ctx->pc = 0x151F80u;
            goto label_151f80;
        }
    }
    ctx->pc = 0x151F74u;
    // 0x151f74: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x151f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_151f78:
    // 0x151f78: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x151f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151f7c:
    // 0x151f7c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x151f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_151f80:
    // 0x151f80: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x151f80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151f84: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x151f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x151f88: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x151F88u;
    {
        const bool branch_taken_0x151f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f88) {
            ctx->pc = 0x151F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151F88u;
            // 0x151f8c: 0x8e240468  lw          $a0, 0x468($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151FA0u;
            goto label_151fa0;
        }
    }
    ctx->pc = 0x151F90u;
    // 0x151f90: 0x9222095c  lbu         $v0, 0x95C($s1)
    ctx->pc = 0x151f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2396)));
    // 0x151f94: 0x1682ffde  bne         $s4, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x151F94u;
    {
        const bool branch_taken_0x151f94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x151F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F94u;
        // 0x151f98: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f94) {
            ctx->pc = 0x151F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151f10;
        }
    }
    ctx->pc = 0x151F9Cu;
label_151f9c:
    // 0x151f9c: 0x8e240468  lw          $a0, 0x468($s1)
    ctx->pc = 0x151f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1128)));
label_151fa0:
    // 0x151fa0: 0xc058242  jal         func_160908
    ctx->pc = 0x151FA0u;
    SET_GPR_U32(ctx, 31, 0x151FA8u);
    ctx->pc = 0x151FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FA0u;
    // 0x151fa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160908u, 0x151FA0u, 0x151FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FA8u;
label_151fa8:
    // 0x151fa8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151FA8u;
    {
        const bool branch_taken_0x151fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151FA8u;
        // 0x151fac: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fa8) {
            ctx->pc = 0x151FD0u;
            goto label_151fd0;
        }
    }
    ctx->pc = 0x151FB0u;
    // 0x151fb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x151fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fb4: 0xc054802  jal         func_152008
    ctx->pc = 0x151FB4u;
    SET_GPR_U32(ctx, 31, 0x151FBCu);
    ctx->pc = 0x151FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FB4u;
    // 0x151fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152008u, 0x151FB4u, 0x151FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FBCu;
label_151fbc:
    // 0x151fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fc0: 0xc054790  jal         func_151E40
    ctx->pc = 0x151FC0u;
    SET_GPR_U32(ctx, 31, 0x151FC8u);
    ctx->pc = 0x151FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FC0u;
    // 0x151fc4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151E40u;
    goto label_151e40;
    ctx->pc = 0x151FC8u;
label_151fc8:
    // 0x151fc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x151fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fcc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x151fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151fd0:
    // 0x151fd0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x151fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fd4: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x151fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_151fd8:
    // 0x151fd8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x151fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151fdc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x151fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x151fe0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x151fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151fe4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x151fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x151fe8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x151fe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151fec: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x151fecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x151ff0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x151ff0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151ff4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x151ff4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151ff8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x151ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x151FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151FFCu;
        // 0x152000: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152004u;
    // 0x152004: 0x0  nop
    ctx->pc = 0x152004u;
    // NOP
    ctx->pc = 0x152008u;
}
