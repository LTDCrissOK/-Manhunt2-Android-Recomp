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

// Function: sub_0013AC60
// Address: 0x13ac60 - 0x13ade8
void sub_0013AC60_0x13ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AC60_0x13ac60");
#endif

    switch (ctx->pc) {
        case 0x13acd8u: goto label_13acd8;
        default: break;
    }

    ctx->pc = 0x13ac60u;

    // 0x13ac60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ac64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13ac68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13ac6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ac6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13ac74: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x13ac74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ac78: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13ac7c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13ac80: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x13ac80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x13ac84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ac88: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x13ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x13ac8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ac90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ac94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ac98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x13ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13ac9c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x13ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x13aca0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x13aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13aca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13aca8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x13aca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13acac: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x13acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x13acb0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13ACB0u;
    {
        const bool branch_taken_0x13acb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13acb0) {
            ctx->pc = 0x13ACB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13ACB0u;
            // 0x13acb4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ACC0u;
            goto label_13acc0;
        }
    }
    ctx->pc = 0x13ACB8u;
    // 0x13acb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13ACB8u;
    {
        const bool branch_taken_0x13acb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACB8u;
        // 0x13acbc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13acb8) {
            ctx->pc = 0x13ACC8u;
            goto label_13acc8;
        }
    }
    ctx->pc = 0x13ACC0u;
label_13acc0:
    // 0x13acc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13acc4: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x13acc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13acc8:
    // 0x13acc8: 0x8e250ab4  lw          $a1, 0xAB4($s1)
    ctx->pc = 0x13acc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2740)));
    // 0x13accc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13acccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13acd0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x13ACD0u;
    SET_GPR_U32(ctx, 31, 0x13ACD8u);
    ctx->pc = 0x13ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ACD0u;
    // 0x13acd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x13ACD0u, 0x13ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACD8u;
label_13acd8:
    // 0x13acd8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x13acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13acdc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x13acdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ace0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x13ace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ace4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x13ace4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x13ace8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x13ace8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x13acec: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x13acecu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x13acf0: 0x8e220ab4  lw          $v0, 0xAB4($s1)
    ctx->pc = 0x13acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2740)));
    // 0x13acf4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x13acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13acf8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13acfc: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x13acfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x13ad00: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x13ad00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x13ad04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13ad04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ad08: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13ad08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13ad0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ad0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ad10: 0x0  nop
    ctx->pc = 0x13ad10u;
    // NOP
    // 0x13ad14: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x13AD14u;
    {
        const bool branch_taken_0x13ad14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD14u;
        // 0x13ad18: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad14) {
            ctx->pc = 0x13ADCCu;
            goto label_13adcc;
        }
    }
    ctx->pc = 0x13AD1Cu;
    // 0x13ad1c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x13ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13ad20: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x13ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x13ad24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ad24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ad28: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x13ad28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13ad2c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x13ad2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ad30: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x13ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13ad34: 0xac600540  sw          $zero, 0x540($v1)
    ctx->pc = 0x13ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1344), GPR_U32(ctx, 0));
    // 0x13ad38: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13ad38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad3c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13ad3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad40: 0xac800544  sw          $zero, 0x544($a0)
    ctx->pc = 0x13ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1348), GPR_U32(ctx, 0));
    // 0x13ad44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13AD44u;
    {
        const bool branch_taken_0x13ad44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD44u;
        // 0x13ad48: 0xac400548  sw          $zero, 0x548($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad44) {
            ctx->pc = 0x13AD54u;
            goto label_13ad54;
        }
    }
    ctx->pc = 0x13AD4Cu;
    // 0x13ad4c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13AD4Cu;
    {
        const bool branch_taken_0x13ad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD4Cu;
        // 0x13ad50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad4c) {
            ctx->pc = 0x13ADCCu;
            goto label_13adcc;
        }
    }
    ctx->pc = 0x13AD54u;
label_13ad54:
    // 0x13ad54: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x13ad54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x13ad58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ad58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ad5c: 0x0  nop
    ctx->pc = 0x13ad5cu;
    // NOP
    // 0x13ad60: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x13ad60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ad64: 0x0  nop
    ctx->pc = 0x13ad64u;
    // NOP
    // 0x13ad68: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x13AD68u;
    {
        const bool branch_taken_0x13ad68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD68u;
        // 0x13ad6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad68) {
            ctx->pc = 0x13ADCCu;
            goto label_13adcc;
        }
    }
    ctx->pc = 0x13AD70u;
    // 0x13ad70: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x13ad70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x13ad74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ad74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ad78: 0x0  nop
    ctx->pc = 0x13ad78u;
    // NOP
    // 0x13ad7c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x13ad7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ad80: 0x0  nop
    ctx->pc = 0x13ad80u;
    // NOP
    // 0x13ad84: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x13AD84u;
    {
        const bool branch_taken_0x13ad84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD84u;
        // 0x13ad88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad84) {
            ctx->pc = 0x13ADCCu;
            goto label_13adcc;
        }
    }
    ctx->pc = 0x13AD8Cu;
    // 0x13ad8c: 0x3c01441c  lui         $at, 0x441C
    ctx->pc = 0x13ad8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17436 << 16));
    // 0x13ad90: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x13ad90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x13ad94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ad94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ad98: 0x0  nop
    ctx->pc = 0x13ad98u;
    // NOP
    // 0x13ad9c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x13ad9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ada0: 0x0  nop
    ctx->pc = 0x13ada0u;
    // NOP
    // 0x13ada4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x13ADA4u;
    {
        const bool branch_taken_0x13ada4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADA4u;
        // 0x13ada8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ada4) {
            ctx->pc = 0x13ADCCu;
            goto label_13adcc;
        }
    }
    ctx->pc = 0x13ADACu;
    // 0x13adac: 0x3c0144a2  lui         $at, 0x44A2
    ctx->pc = 0x13adacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17570 << 16));
    // 0x13adb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13adb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13adb4: 0x0  nop
    ctx->pc = 0x13adb4u;
    // NOP
    // 0x13adb8: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x13adb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13adbc: 0x0  nop
    ctx->pc = 0x13adbcu;
    // NOP
    // 0x13adc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13ADC0u;
    {
        const bool branch_taken_0x13adc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADC0u;
        // 0x13adc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adc0) {
            ctx->pc = 0x13ADCCu;
            goto label_13adcc;
        }
    }
    ctx->pc = 0x13ADC8u;
    // 0x13adc8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x13adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_13adcc:
    // 0x13adcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13adccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13add0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13add0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13add4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13add4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13add8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13add8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13addc: 0x3e00008  jr          $ra
    ctx->pc = 0x13ADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADDCu;
        // 0x13ade0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ADDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ADE4u;
    // 0x13ade4: 0x0  nop
    ctx->pc = 0x13ade4u;
    // NOP
    ctx->pc = 0x13ade8u;
}
