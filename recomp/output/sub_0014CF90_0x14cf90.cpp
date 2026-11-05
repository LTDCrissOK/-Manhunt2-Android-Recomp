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

// Function: sub_0014CF90
// Address: 0x14cf90 - 0x14d080
void sub_0014CF90_0x14cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CF90_0x14cf90");
#endif

    switch (ctx->pc) {
        case 0x14cfbcu: goto label_14cfbc;
        case 0x14d038u: goto label_14d038;
        default: break;
    }

    ctx->pc = 0x14cf90u;

    // 0x14cf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14cf94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14cf98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14cf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14cf9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14cf9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cfa0: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x14cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x14cfa4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x14cfa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14cfa8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x14CFA8u;
    {
        const bool branch_taken_0x14cfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFA8u;
        // 0x14cfac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cfa8) {
            ctx->pc = 0x14D070u;
            goto label_14d070;
        }
    }
    ctx->pc = 0x14CFB0u;
    // 0x14cfb0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14cfb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14cfb4: 0xc053420  jal         func_14D080
    ctx->pc = 0x14CFB4u;
    SET_GPR_U32(ctx, 31, 0x14CFBCu);
    ctx->pc = 0x14CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CFB4u;
    // 0x14cfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D080u, 0x14CFB4u, 0x14CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFBCu;
label_14cfbc:
    // 0x14cfbc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14CFBCu;
    {
        const bool branch_taken_0x14cfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFBCu;
        // 0x14cfc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cfbc) {
            ctx->pc = 0x14D070u;
            goto label_14d070;
        }
    }
    ctx->pc = 0x14CFC4u;
    // 0x14cfc4: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x14cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x14cfc8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x14cfc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14cfcc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x14CFCCu;
    {
        const bool branch_taken_0x14cfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFCCu;
        // 0x14cfd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cfcc) {
            ctx->pc = 0x14D070u;
            goto label_14d070;
        }
    }
    ctx->pc = 0x14CFD4u;
    // 0x14cfd4: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14cfd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14cfd8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14cfdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14cfe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cfe4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14cfe8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14CFE8u;
    {
        const bool branch_taken_0x14cfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFE8u;
        // 0x14cfec: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cfe8) {
            ctx->pc = 0x14D06Cu;
            goto label_14d06c;
        }
    }
    ctx->pc = 0x14CFF0u;
    // 0x14cff0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14cff4: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x14cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x14cff8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14cffc: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x14cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x14d000: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x14d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14d004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d008: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14d008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14d00c: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x14d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x14d010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D010u;
    {
        const bool branch_taken_0x14d010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D010u;
        // 0x14d014: 0x8e070660  lw          $a3, 0x660($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d010) {
            ctx->pc = 0x14D020u;
            goto label_14d020;
        }
    }
    ctx->pc = 0x14D018u;
    // 0x14d018: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14D018u;
    {
        const bool branch_taken_0x14d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D018u;
        // 0x14d01c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d018) {
            ctx->pc = 0x14D02Cu;
            goto label_14d02c;
        }
    }
    ctx->pc = 0x14D020u;
label_14d020:
    // 0x14d020: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x14d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x14d024: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14d024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d028: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x14d028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14d02c:
    // 0x14d02c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x14d02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d030: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14D030u;
    SET_GPR_U32(ctx, 31, 0x14D038u);
    ctx->pc = 0x14D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D030u;
    // 0x14d034: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14D030u, 0x14D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D038u;
label_14d038:
    // 0x14d038: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x14d038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d03c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x14d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14d040: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x14d040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14d044: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14d044u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x14d048: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x14d048u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x14d04c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x14d04cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x14d050: 0x3c0144c8  lui         $at, 0x44C8
    ctx->pc = 0x14d050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17608 << 16));
    // 0x14d054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d058: 0x0  nop
    ctx->pc = 0x14d058u;
    // NOP
    // 0x14d05c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d060: 0x0  nop
    ctx->pc = 0x14d060u;
    // NOP
    // 0x14d064: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14D064u;
    {
        const bool branch_taken_0x14d064 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D064u;
        // 0x14d068: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d064) {
            ctx->pc = 0x14D070u;
            goto label_14d070;
        }
    }
    ctx->pc = 0x14D06Cu;
label_14d06c:
    // 0x14d06c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14d06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d070:
    // 0x14d070: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14d070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d074: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14d074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d078: 0x3e00008  jr          $ra
    ctx->pc = 0x14D078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D078u;
        // 0x14d07c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D080u;
}
