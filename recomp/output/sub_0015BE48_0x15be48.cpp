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

// Function: sub_0015BE48
// Address: 0x15be48 - 0x15c0a0
void sub_0015BE48_0x15be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BE48_0x15be48");
#endif

    switch (ctx->pc) {
        case 0x15bed0u: goto label_15bed0;
        case 0x15bf30u: goto label_15bf30;
        case 0x15c030u: goto label_15c030;
        case 0x15c040u: goto label_15c040;
        default: break;
    }

    ctx->pc = 0x15be48u;

    // 0x15be48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15be48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15be4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15be4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15be50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15be50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x15be54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15be54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be58: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x15be5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15be5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15be60: 0x30b500ff  andi        $s5, $a1, 0xFF
    ctx->pc = 0x15be60u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15be64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15be64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15be68: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15be68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x15be6c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15be6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x15be70: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x15be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x15be74: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x15be74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15be78: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x15be78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15be7c: 0x92020a20  lbu         $v0, 0xA20($s0)
    ctx->pc = 0x15be7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2592)));
    // 0x15be80: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x15be80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15be84: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x15BE84u;
    {
        const bool branch_taken_0x15be84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE84u;
        // 0x15be88: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be84) {
            ctx->pc = 0x15C06Cu;
            goto label_15c06c;
        }
    }
    ctx->pc = 0x15BE8Cu;
    // 0x15be8c: 0x12600077  beqz        $s3, . + 4 + (0x77 << 2)
    ctx->pc = 0x15BE8Cu;
    {
        const bool branch_taken_0x15be8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE8Cu;
        // 0x15be90: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be8c) {
            ctx->pc = 0x15C06Cu;
            goto label_15c06c;
        }
    }
    ctx->pc = 0x15BE94u;
    // 0x15be94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15be94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15be98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15be98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15be9c: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x15be9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15bea0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15bea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bea4: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x15bea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x15bea8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15bea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15beac: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x15beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15beb0: 0xe4400380  swc1        $f0, 0x380($v0)
    ctx->pc = 0x15beb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 896), bits); }
    // 0x15beb4: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x15beb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x15beb8: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x15BEB8u;
    {
        const bool branch_taken_0x15beb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEB8u;
        // 0x15bebc: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15beb8) {
            ctx->pc = 0x15BF78u;
            goto label_15bf78;
        }
    }
    ctx->pc = 0x15BEC0u;
    // 0x15bec0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15bec4: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x15bec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x15bec8: 0x2696fefc  addiu       $s6, $s4, -0x104
    ctx->pc = 0x15bec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967036));
    // 0x15becc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15beccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15bed0:
    // 0x15bed0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15bed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bed8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bedc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x15BEDCu;
    {
        const bool branch_taken_0x15bedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEDCu;
        // 0x15bee0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bedc) {
            ctx->pc = 0x15BF58u;
            goto label_15bf58;
        }
    }
    ctx->pc = 0x15BEE4u;
    // 0x15bee4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x15bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15bee8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15beec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bef0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15BEF0u;
    {
        const bool branch_taken_0x15bef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEF0u;
        // 0x15bef4: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bef0) {
            ctx->pc = 0x15BF58u;
            goto label_15bf58;
        }
    }
    ctx->pc = 0x15BEF8u;
    // 0x15bef8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15befc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15befcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15bf00: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x15bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x15bf04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bf08: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BF08u;
    {
        const bool branch_taken_0x15bf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bf08) {
            ctx->pc = 0x15BF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BF08u;
            // 0x15bf0c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BF18u;
            goto label_15bf18;
        }
    }
    ctx->pc = 0x15BF10u;
    // 0x15bf10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BF10u;
    {
        const bool branch_taken_0x15bf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF10u;
        // 0x15bf14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf10) {
            ctx->pc = 0x15BF20u;
            goto label_15bf20;
        }
    }
    ctx->pc = 0x15BF18u;
label_15bf18:
    // 0x15bf18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bf1c: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x15bf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15bf20:
    // 0x15bf20: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x15BF20u;
    {
        const bool branch_taken_0x15bf20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF20u;
        // 0x15bf24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf20) {
            ctx->pc = 0x15BF58u;
            goto label_15bf58;
        }
    }
    ctx->pc = 0x15BF28u;
    // 0x15bf28: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15BF28u;
    SET_GPR_U32(ctx, 31, 0x15BF30u);
    ctx->pc = 0x15BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BF28u;
    // 0x15bf2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15BF28u, 0x15BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BF30u;
label_15bf30:
    // 0x15bf30: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15bf34: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15bf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15bf38: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15bf3c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15bf3cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15bf40: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15bf40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15bf44: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15bf44u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15bf48: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15bf48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bf4c: 0x0  nop
    ctx->pc = 0x15bf4cu;
    // NOP
    // 0x15bf50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15BF50u;
    {
        const bool branch_taken_0x15bf50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bf50) {
            ctx->pc = 0x15BF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BF50u;
            // 0x15bf54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BF58u;
            goto label_15bf58;
        }
    }
    ctx->pc = 0x15BF58u;
label_15bf58:
    // 0x15bf58: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15bf5c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x15bf5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15bf60: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x15bf60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15bf64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BF64u;
    {
        const bool branch_taken_0x15bf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bf64) {
            ctx->pc = 0x15BF78u;
            goto label_15bf78;
        }
    }
    ctx->pc = 0x15BF6Cu;
    // 0x15bf6c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x15bf6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x15bf70: 0x5642ffd7  bnel        $s2, $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x15BF70u;
    {
        const bool branch_taken_0x15bf70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x15bf70) {
            ctx->pc = 0x15BF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BF70u;
            // 0x15bf74: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bed0;
        }
    }
    ctx->pc = 0x15BF78u;
label_15bf78:
    // 0x15bf78: 0x3c014410  lui         $at, 0x4410
    ctx->pc = 0x15bf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17424 << 16));
    // 0x15bf7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15bf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bf80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15bf80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15bf84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15bf84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15bf88: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15bf88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bf8c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x15bf8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15bf90: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15BF90u;
    {
        const bool branch_taken_0x15bf90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bf90) {
            ctx->pc = 0x15BFB8u;
            goto label_15bfb8;
        }
    }
    ctx->pc = 0x15BF98u;
    // 0x15bf98: 0x3c01408c  lui         $at, 0x408C
    ctx->pc = 0x15bf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16524 << 16));
    // 0x15bf9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15bf9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x15bfa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15bfa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15bfa4: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x15bfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x15bfa8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x15bfa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x15bfac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15bfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15bfb0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15BFB0u;
    {
        const bool branch_taken_0x15bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bfb0) {
            ctx->pc = 0x15C028u;
            goto label_15c028;
        }
    }
    ctx->pc = 0x15BFB8u;
label_15bfb8:
    // 0x15bfb8: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x15bfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
    // 0x15bfbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15bfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bfc0: 0x0  nop
    ctx->pc = 0x15bfc0u;
    // NOP
    // 0x15bfc4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15bfc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bfc8: 0x0  nop
    ctx->pc = 0x15bfc8u;
    // NOP
    // 0x15bfcc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15BFCCu;
    {
        const bool branch_taken_0x15bfcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bfcc) {
            ctx->pc = 0x15BFF4u;
            goto label_15bff4;
        }
    }
    ctx->pc = 0x15BFD4u;
    // 0x15bfd4: 0x3c014039  lui         $at, 0x4039
    ctx->pc = 0x15bfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16441 << 16));
    // 0x15bfd8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x15bfd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x15bfdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15bfdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15bfe0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x15bfe4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15bfe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x15bfe8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15bfe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15bfec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15BFECu;
    {
        const bool branch_taken_0x15bfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bfec) {
            ctx->pc = 0x15C028u;
            goto label_15c028;
        }
    }
    ctx->pc = 0x15BFF4u;
label_15bff4:
    // 0x15bff4: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x15bff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x15bff8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15bff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bffc: 0x0  nop
    ctx->pc = 0x15bffcu;
    // NOP
    // 0x15c000: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15c000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c004: 0x0  nop
    ctx->pc = 0x15c004u;
    // NOP
    // 0x15c008: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15C008u;
    {
        const bool branch_taken_0x15c008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c008) {
            ctx->pc = 0x15C028u;
            goto label_15c028;
        }
    }
    ctx->pc = 0x15C010u;
    // 0x15c010: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x15c010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x15c014: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15c014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x15c018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15c018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15c01c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x15c01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x15c020: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x15c020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x15c024: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15c024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_15c028:
    // 0x15c028: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x15C028u;
    SET_GPR_U32(ctx, 31, 0x15C030u);
    ctx->pc = 0x15C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C028u;
    // 0x15c02c: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x15C028u, 0x15C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C030u;
label_15c030:
    // 0x15c030: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x15c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15c034: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C034u;
    {
        const bool branch_taken_0x15c034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c034) {
            ctx->pc = 0x15C038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C034u;
            // 0x15c038: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C05Cu;
            goto label_15c05c;
        }
    }
    ctx->pc = 0x15C03Cu;
    // 0x15c03c: 0x0  nop
    ctx->pc = 0x15c03cu;
    // NOP
label_15c040:
    // 0x15c040: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15c044: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c048: 0x0  nop
    ctx->pc = 0x15c048u;
    // NOP
    // 0x15c04c: 0x0  nop
    ctx->pc = 0x15c04cu;
    // NOP
    // 0x15c050: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15C050u;
    {
        const bool branch_taken_0x15c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C050u;
        // 0x15c054: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c050) {
            ctx->pc = 0x15C040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c040;
        }
    }
    ctx->pc = 0x15C058u;
    // 0x15c058: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15c05c:
    // 0x15c05c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x15c05cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x15c060: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x15c060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15c064: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x15c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15c068: 0xe4400380  swc1        $f0, 0x380($v0)
    ctx->pc = 0x15c068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 896), bits); }
label_15c06c:
    // 0x15c06c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15c06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c070: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15c070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c074: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15c074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c078: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15c078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15c07c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15c07cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c080: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15c080u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15c084: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15c084u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c088: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15c088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c08c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x15c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15c090: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x15c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15c094: 0x3e00008  jr          $ra
    ctx->pc = 0x15C094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C094u;
        // 0x15c098: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C09Cu;
    // 0x15c09c: 0x0  nop
    ctx->pc = 0x15c09cu;
    // NOP
    ctx->pc = 0x15c0a0u;
}
