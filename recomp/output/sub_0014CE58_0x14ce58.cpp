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

// Function: sub_0014CE58
// Address: 0x14ce58 - 0x14cf90
void sub_0014CE58_0x14ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CE58_0x14ce58");
#endif

    switch (ctx->pc) {
        case 0x14cf14u: goto label_14cf14;
        case 0x14cf64u: goto label_14cf64;
        case 0x14cf78u: goto label_14cf78;
        default: break;
    }

    ctx->pc = 0x14ce58u;

    // 0x14ce58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ce5c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x14ce5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x14ce60: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x14ce60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x14ce64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ce64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14ce68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14ce6c: 0x8e020680  lw          $v0, 0x680($s0)
    ctx->pc = 0x14ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x14ce70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CE70u;
    {
        const bool branch_taken_0x14ce70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE70u;
        // 0x14ce74: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce70) {
            ctx->pc = 0x14CE84u;
            goto label_14ce84;
        }
    }
    ctx->pc = 0x14CE78u;
    // 0x14ce78: 0x8e020684  lw          $v0, 0x684($s0)
    ctx->pc = 0x14ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
    // 0x14ce7c: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x14CE7Cu;
    {
        const bool branch_taken_0x14ce7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce7c) {
            ctx->pc = 0x14CE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CE7Cu;
            // 0x14ce80: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CF7Cu;
            goto label_14cf7c;
        }
    }
    ctx->pc = 0x14CE84u;
label_14ce84:
    // 0x14ce84: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14ce88: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14ce8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ce90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ce94: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x14CE94u;
    {
        const bool branch_taken_0x14ce94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE94u;
        // 0x14ce98: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce94) {
            ctx->pc = 0x14CF78u;
            goto label_14cf78;
        }
    }
    ctx->pc = 0x14CE9Cu;
    // 0x14ce9c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14cea0: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x14cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x14cea4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14cea8: 0x8c71020c  lw          $s1, 0x20C($v1)
    ctx->pc = 0x14cea8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x14ceac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ceb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14ceb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ceb8: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x14ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x14cebc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CEBCu;
    {
        const bool branch_taken_0x14cebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cebc) {
            ctx->pc = 0x14CEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CEBCu;
            // 0x14cec0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CECCu;
            goto label_14cecc;
        }
    }
    ctx->pc = 0x14CEC4u;
    // 0x14cec4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14CEC4u;
    {
        const bool branch_taken_0x14cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEC4u;
        // 0x14cec8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cec4) {
            ctx->pc = 0x14CED4u;
            goto label_14ced4;
        }
    }
    ctx->pc = 0x14CECCu;
label_14cecc:
    // 0x14cecc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ced0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x14ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14ced4:
    // 0x14ced4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14ced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ced8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14cedc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14cedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14cee0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14cee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14cee4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x14cee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cee8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x14cee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14ceec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14cef0: 0x8e050664  lw          $a1, 0x664($s0)
    ctx->pc = 0x14cef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x14cef4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14cef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14cef8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14cef8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14cefc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14cefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cf00: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x14cf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14cf04: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x14cf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14cf08: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14cf08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14cf0c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14CF0Cu;
    SET_GPR_U32(ctx, 31, 0x14CF14u);
    ctx->pc = 0x14CF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF0Cu;
    // 0x14cf10: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14CF0Cu, 0x14CF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF14u;
label_14cf14:
    // 0x14cf14: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x14cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14cf18: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x14cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14cf1c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x14cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14cf20: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x14cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14cf24: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14cf24u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x14cf28: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x14cf28u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x14cf2c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x14cf2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x14cf30: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x14cf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x14cf34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14cf34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cf38: 0x0  nop
    ctx->pc = 0x14cf38u;
    // NOP
    // 0x14cf3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14cf3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14cf40: 0x0  nop
    ctx->pc = 0x14cf40u;
    // NOP
    // 0x14cf44: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x14CF44u;
    {
        const bool branch_taken_0x14cf44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14cf44) {
            ctx->pc = 0x14CF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CF44u;
            // 0x14cf48: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CF7Cu;
            goto label_14cf7c;
        }
    }
    ctx->pc = 0x14CF4Cu;
    // 0x14cf4c: 0x8e020680  lw          $v0, 0x680($s0)
    ctx->pc = 0x14cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x14cf50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CF50u;
    {
        const bool branch_taken_0x14cf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF50u;
        // 0x14cf54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf50) {
            ctx->pc = 0x14CF6Cu;
            goto label_14cf6c;
        }
    }
    ctx->pc = 0x14CF58u;
    // 0x14cf58: 0x26050670  addiu       $a1, $s0, 0x670
    ctx->pc = 0x14cf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x14cf5c: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x14CF5Cu;
    SET_GPR_U32(ctx, 31, 0x14CF64u);
    ctx->pc = 0x14CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF5Cu;
    // 0x14cf60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x14CF5Cu, 0x14CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF64u;
label_14cf64:
    // 0x14cf64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14CF64u;
    {
        const bool branch_taken_0x14cf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF64u;
        // 0x14cf68: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf64) {
            ctx->pc = 0x14CF7Cu;
            goto label_14cf7c;
        }
    }
    ctx->pc = 0x14CF6Cu;
label_14cf6c:
    // 0x14cf6c: 0x8e050684  lw          $a1, 0x684($s0)
    ctx->pc = 0x14cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
    // 0x14cf70: 0xc043b30  jal         func_10ECC0
    ctx->pc = 0x14CF70u;
    SET_GPR_U32(ctx, 31, 0x14CF78u);
    ctx->pc = 0x14CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF70u;
    // 0x14cf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ECC0u, 0x14CF70u, 0x14CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF78u;
label_14cf78:
    // 0x14cf78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x14cf78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14cf7c:
    // 0x14cf7c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x14cf7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cf80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14cf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14cf84: 0x3e00008  jr          $ra
    ctx->pc = 0x14CF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF84u;
        // 0x14cf88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CF8Cu;
    // 0x14cf8c: 0x0  nop
    ctx->pc = 0x14cf8cu;
    // NOP
    ctx->pc = 0x14cf90u;
}
