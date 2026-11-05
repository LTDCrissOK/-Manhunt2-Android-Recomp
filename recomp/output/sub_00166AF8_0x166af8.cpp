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

// Function: sub_00166AF8
// Address: 0x166af8 - 0x166c68
void sub_00166AF8_0x166af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166AF8_0x166af8");
#endif

    switch (ctx->pc) {
        case 0x166b98u: goto label_166b98;
        case 0x166c00u: goto label_166c00;
        default: break;
    }

    ctx->pc = 0x166af8u;

    // 0x166af8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x166af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x166afc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x166afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x166b00: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x166b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x166b04: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x166b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x166b08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x166b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x166b0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x166b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x166b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x166b14: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x166b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x166b18: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x166b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x166b1c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x166b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x166b20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x166b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x166b24: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x166b24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x166b28: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x166b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x166b2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166b30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x166b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166b34: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x166b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x166b38: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x166B38u;
    {
        const bool branch_taken_0x166b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b38) {
            ctx->pc = 0x166B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166B38u;
            // 0x166b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166C40u;
            goto label_166c40;
        }
    }
    ctx->pc = 0x166B40u;
    // 0x166b40: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x166b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x166b44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166b48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x166b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166b4c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x166b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x166b50: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166B50u;
    {
        const bool branch_taken_0x166b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166b50) {
            ctx->pc = 0x166B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166B50u;
            // 0x166b54: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B60u;
            goto label_166b60;
        }
    }
    ctx->pc = 0x166B58u;
    // 0x166b58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166B58u;
    {
        const bool branch_taken_0x166b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B58u;
        // 0x166b5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b58) {
            ctx->pc = 0x166B68u;
            goto label_166b68;
        }
    }
    ctx->pc = 0x166B60u;
label_166b60:
    // 0x166b60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x166b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166b64: 0x24730070  addiu       $s3, $v1, 0x70
    ctx->pc = 0x166b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_166b68:
    // 0x166b68: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x166B68u;
    {
        const bool branch_taken_0x166b68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x166B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B68u;
        // 0x166b6c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b68) {
            ctx->pc = 0x166B78u;
            goto label_166b78;
        }
    }
    ctx->pc = 0x166B70u;
    // 0x166b70: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x166B70u;
    {
        const bool branch_taken_0x166b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B70u;
        // 0x166b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b70) {
            ctx->pc = 0x166C40u;
            goto label_166c40;
        }
    }
    ctx->pc = 0x166B78u;
label_166b78:
    // 0x166b78: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x166b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x166b7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x166b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x166b80: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x166b80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x166b84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x166b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b88: 0x2695fefc  addiu       $s5, $s4, -0x104
    ctx->pc = 0x166b88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967036));
    // 0x166b8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x166b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b90: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x166b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x166b94: 0x0  nop
    ctx->pc = 0x166b94u;
    // NOP
label_166b98:
    // 0x166b98: 0x12420028  beq         $s2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x166B98u;
    {
        const bool branch_taken_0x166b98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x166B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B98u;
        // 0x166b9c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b98) {
            ctx->pc = 0x166C3Cu;
            goto label_166c3c;
        }
    }
    ctx->pc = 0x166BA0u;
    // 0x166ba0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x166ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x166ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166ba8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x166ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166bac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x166BACu;
    {
        const bool branch_taken_0x166bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BACu;
        // 0x166bb0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166bac) {
            ctx->pc = 0x166C28u;
            goto label_166c28;
        }
    }
    ctx->pc = 0x166BB4u;
    // 0x166bb4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x166bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x166bb8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x166bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x166bbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x166bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166bc0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x166BC0u;
    {
        const bool branch_taken_0x166bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BC0u;
        // 0x166bc4: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166bc0) {
            ctx->pc = 0x166C28u;
            goto label_166c28;
        }
    }
    ctx->pc = 0x166BC8u;
    // 0x166bc8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x166bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x166bcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166bd0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x166bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x166bd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x166bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166bd8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166BD8u;
    {
        const bool branch_taken_0x166bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166bd8) {
            ctx->pc = 0x166BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166BD8u;
            // 0x166bdc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166BE8u;
            goto label_166be8;
        }
    }
    ctx->pc = 0x166BE0u;
    // 0x166be0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166BE0u;
    {
        const bool branch_taken_0x166be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BE0u;
        // 0x166be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166be0) {
            ctx->pc = 0x166BF0u;
            goto label_166bf0;
        }
    }
    ctx->pc = 0x166BE8u;
label_166be8:
    // 0x166be8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x166be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166bec: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x166becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_166bf0:
    // 0x166bf0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x166BF0u;
    {
        const bool branch_taken_0x166bf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BF0u;
        // 0x166bf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166bf0) {
            ctx->pc = 0x166C28u;
            goto label_166c28;
        }
    }
    ctx->pc = 0x166BF8u;
    // 0x166bf8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x166BF8u;
    SET_GPR_U32(ctx, 31, 0x166C00u);
    ctx->pc = 0x166BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166BF8u;
    // 0x166bfc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x166BF8u, 0x166C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C00u;
label_166c00:
    // 0x166c00: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x166c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166c04: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x166c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166c08: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x166c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x166c0c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x166c0cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x166c10: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x166c10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x166c14: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x166c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x166c18: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x166c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166c1c: 0x0  nop
    ctx->pc = 0x166c1cu;
    // NOP
    // 0x166c20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x166C20u;
    {
        const bool branch_taken_0x166c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C20u;
        // 0x166c24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c20) {
            ctx->pc = 0x166C40u;
            goto label_166c40;
        }
    }
    ctx->pc = 0x166C28u;
label_166c28:
    // 0x166c28: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x166c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x166c2c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x166c2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x166c30: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x166c30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x166c34: 0x5460ffd8  bnel        $v1, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x166C34u;
    {
        const bool branch_taken_0x166c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166c34) {
            ctx->pc = 0x166C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166C34u;
            // 0x166c38: 0x92220009  lbu         $v0, 0x9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166b98;
        }
    }
    ctx->pc = 0x166C3Cu;
label_166c3c:
    // 0x166c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166c40:
    // 0x166c40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x166c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x166c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x166c48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x166c48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166c4c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x166c4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x166c50: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x166c50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166c54: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x166c54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x166c58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x166c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166c5c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x166c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x166c60: 0x3e00008  jr          $ra
    ctx->pc = 0x166C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C60u;
        // 0x166c64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166C68u;
}
