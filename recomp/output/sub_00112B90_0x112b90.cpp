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

// Function: sub_00112B90
// Address: 0x112b90 - 0x112db0
void sub_00112B90_0x112b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112B90_0x112b90");
#endif

    switch (ctx->pc) {
        case 0x112bc0u: goto label_112bc0;
        case 0x112bd0u: goto label_112bd0;
        case 0x112c20u: goto label_112c20;
        case 0x112c40u: goto label_112c40;
        case 0x112c54u: goto label_112c54;
        case 0x112ca4u: goto label_112ca4;
        case 0x112cc4u: goto label_112cc4;
        case 0x112cd4u: goto label_112cd4;
        case 0x112cfcu: goto label_112cfc;
        case 0x112d58u: goto label_112d58;
        default: break;
    }

    ctx->pc = 0x112b90u;

    // 0x112b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112b94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x112b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x112b98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x112b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x112b9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ba0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x112ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x112ba4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x112ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ba8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x112ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x112bac: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x112bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x112bb0: 0x1220005f  beqz        $s1, . + 4 + (0x5F << 2)
    ctx->pc = 0x112BB0u;
    {
        const bool branch_taken_0x112bb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BB0u;
        // 0x112bb4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bb0) {
            ctx->pc = 0x112D30u;
            goto label_112d30;
        }
    }
    ctx->pc = 0x112BB8u;
    // 0x112bb8: 0xc044b7e  jal         func_112DF8
    ctx->pc = 0x112BB8u;
    SET_GPR_U32(ctx, 31, 0x112BC0u);
    ctx->pc = 0x112BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BB8u;
    // 0x112bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112DF8u, 0x112BB8u, 0x112BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BC0u;
label_112bc0:
    // 0x112bc0: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x112BC0u;
    {
        const bool branch_taken_0x112bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BC0u;
        // 0x112bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bc0) {
            ctx->pc = 0x112D30u;
            goto label_112d30;
        }
    }
    ctx->pc = 0x112BC8u;
    // 0x112bc8: 0xc044234  jal         func_1108D0
    ctx->pc = 0x112BC8u;
    SET_GPR_U32(ctx, 31, 0x112BD0u);
    ctx->pc = 0x112BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BC8u;
    // 0x112bcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x112BC8u, 0x112BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BD0u;
label_112bd0:
    // 0x112bd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x112bd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bd4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x112bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x112bd8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112BD8u;
    {
        const bool branch_taken_0x112bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x112bd8) {
            ctx->pc = 0x112BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112BD8u;
            // 0x112bdc: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112BECu;
            goto label_112bec;
        }
    }
    ctx->pc = 0x112BE0u;
    // 0x112be0: 0x1c60006b  bgtz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x112BE0u;
    {
        const bool branch_taken_0x112be0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x112BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BE0u;
        // 0x112be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112be0) {
            ctx->pc = 0x112D90u;
            goto label_112d90;
        }
    }
    ctx->pc = 0x112BE8u;
    // 0x112be8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x112be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_112bec:
    // 0x112bec: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x112becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x112bf0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x112bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x112bf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112bfc: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x112bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x112c00: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x112C00u;
    {
        const bool branch_taken_0x112c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112c00) {
            ctx->pc = 0x112C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112C00u;
            // 0x112c04: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112C10u;
            goto label_112c10;
        }
    }
    ctx->pc = 0x112C08u;
    // 0x112c08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112C08u;
    {
        const bool branch_taken_0x112c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C08u;
        // 0x112c0c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c08) {
            ctx->pc = 0x112C18u;
            goto label_112c18;
        }
    }
    ctx->pc = 0x112C10u;
label_112c10:
    // 0x112c10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x112c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112c14: 0x24740070  addiu       $s4, $v1, 0x70
    ctx->pc = 0x112c14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_112c18:
    // 0x112c18: 0xc044240  jal         func_110900
    ctx->pc = 0x112C18u;
    SET_GPR_U32(ctx, 31, 0x112C20u);
    ctx->pc = 0x112C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C18u;
    // 0x112c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110900u, 0x112C18u, 0x112C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C20u;
label_112c20:
    // 0x112c20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x112c20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x112c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x112c28: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x112C28u;
    {
        const bool branch_taken_0x112c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x112C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C28u;
        // 0x112c2c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c28) {
            ctx->pc = 0x112C88u;
            goto label_112c88;
        }
    }
    ctx->pc = 0x112C30u;
    // 0x112c30: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x112C30u;
    {
        const bool branch_taken_0x112c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112c30) {
            ctx->pc = 0x112C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112C30u;
            // 0x112c34: 0x8e0500b0  lw          $a1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112C8Cu;
            goto label_112c8c;
        }
    }
    ctx->pc = 0x112C38u;
    // 0x112c38: 0xc04424c  jal         func_110930
    ctx->pc = 0x112C38u;
    SET_GPR_U32(ctx, 31, 0x112C40u);
    ctx->pc = 0x112C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C38u;
    // 0x112c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110930u, 0x112C38u, 0x112C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C40u;
label_112c40:
    // 0x112c40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x112C40u;
    {
        const bool branch_taken_0x112c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C40u;
        // 0x112c44: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c40) {
            ctx->pc = 0x112C88u;
            goto label_112c88;
        }
    }
    ctx->pc = 0x112C48u;
    // 0x112c48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x112c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c4c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x112C4Cu;
    SET_GPR_U32(ctx, 31, 0x112C54u);
    ctx->pc = 0x112C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C4Cu;
    // 0x112c50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x112C4Cu, 0x112C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C54u;
label_112c54:
    // 0x112c54: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x112c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x112c58: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x112c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x112c5c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x112c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x112c60: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x112c60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x112c64: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x112c64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x112c68: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x112c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x112c6c: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x112c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x112c70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112c74: 0x0  nop
    ctx->pc = 0x112c74u;
    // NOP
    // 0x112c78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x112c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112c7c: 0x0  nop
    ctx->pc = 0x112c7cu;
    // NOP
    // 0x112c80: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x112C80u;
    {
        const bool branch_taken_0x112c80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x112C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C80u;
        // 0x112c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c80) {
            ctx->pc = 0x112D90u;
            goto label_112d90;
        }
    }
    ctx->pc = 0x112C88u;
label_112c88:
    // 0x112c88: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x112c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_112c8c:
    // 0x112c8c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x112c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x112c90: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x112c90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x112c94: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x112c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x112c98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x112c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c9c: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x112C9Cu;
    SET_GPR_U32(ctx, 31, 0x112CA4u);
    ctx->pc = 0x112CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C9Cu;
    // 0x112ca0: 0x24e78738  addiu       $a3, $a3, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x112C9Cu, 0x112CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CA4u;
label_112ca4:
    // 0x112ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ca8: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x112CA8u;
    {
        const bool branch_taken_0x112ca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CA8u;
        // 0x112cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ca8) {
            ctx->pc = 0x112D90u;
            goto label_112d90;
        }
    }
    ctx->pc = 0x112CB0u;
    // 0x112cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112cb4: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x112cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x112cb8: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x112cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x112cbc: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x112CBCu;
    SET_GPR_U32(ctx, 31, 0x112CC4u);
    ctx->pc = 0x112CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CBCu;
    // 0x112cc0: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x112CBCu, 0x112CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CC4u;
label_112cc4:
    // 0x112cc4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x112cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x112cc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ccc: 0xc042128  jal         func_1084A0
    ctx->pc = 0x112CCCu;
    SET_GPR_U32(ctx, 31, 0x112CD4u);
    ctx->pc = 0x112CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CCCu;
    // 0x112cd0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x112CCCu, 0x112CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CD4u;
label_112cd4:
    // 0x112cd4: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x112CD4u;
    {
        const bool branch_taken_0x112cd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CD4u;
        // 0x112cd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cd4) {
            ctx->pc = 0x112D90u;
            goto label_112d90;
        }
    }
    ctx->pc = 0x112CDCu;
    // 0x112cdc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x112cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x112ce0: 0x12420015  beq         $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x112CE0u;
    {
        const bool branch_taken_0x112ce0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x112ce0) {
            ctx->pc = 0x112D38u;
            goto label_112d38;
        }
    }
    ctx->pc = 0x112CE8u;
    // 0x112ce8: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x112CE8u;
    {
        const bool branch_taken_0x112ce8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x112CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CE8u;
        // 0x112cec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ce8) {
            ctx->pc = 0x112D38u;
            goto label_112d38;
        }
    }
    ctx->pc = 0x112CF0u;
    // 0x112cf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x112cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112cf4: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x112CF4u;
    SET_GPR_U32(ctx, 31, 0x112CFCu);
    ctx->pc = 0x112CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CF4u;
    // 0x112cf8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x112CF4u, 0x112CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CFCu;
label_112cfc:
    // 0x112cfc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x112cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x112d00: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x112d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x112d04: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x112d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x112d08: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x112d08u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x112d0c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x112d0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x112d10: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x112d10u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x112d14: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x112d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x112d18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112d1c: 0x0  nop
    ctx->pc = 0x112d1cu;
    // NOP
    // 0x112d20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x112d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112d24: 0x0  nop
    ctx->pc = 0x112d24u;
    // NOP
    // 0x112d28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x112D28u;
    {
        const bool branch_taken_0x112d28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x112D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D28u;
        // 0x112d2c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d28) {
            ctx->pc = 0x112D38u;
            goto label_112d38;
        }
    }
    ctx->pc = 0x112D30u;
label_112d30:
    // 0x112d30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x112D30u;
    {
        const bool branch_taken_0x112d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D30u;
        // 0x112d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d30) {
            ctx->pc = 0x112D90u;
            goto label_112d90;
        }
    }
    ctx->pc = 0x112D38u;
label_112d38:
    // 0x112d38: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x112D38u;
    {
        const bool branch_taken_0x112d38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x112D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D38u;
        // 0x112d3c: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d38) {
            ctx->pc = 0x112D8Cu;
            goto label_112d8c;
        }
    }
    ctx->pc = 0x112D40u;
    // 0x112d40: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x112D40u;
    {
        const bool branch_taken_0x112d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D40u;
        // 0x112d44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d40) {
            ctx->pc = 0x112D90u;
            goto label_112d90;
        }
    }
    ctx->pc = 0x112D48u;
    // 0x112d48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x112d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x112d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d50: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x112D50u;
    SET_GPR_U32(ctx, 31, 0x112D58u);
    ctx->pc = 0x112D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D50u;
    // 0x112d54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x112D50u, 0x112D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D58u;
label_112d58:
    // 0x112d58: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x112d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x112d5c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x112d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x112d60: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x112d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x112d64: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x112d64u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x112d68: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x112d68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x112d6c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x112d6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x112d70: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x112d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x112d74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112d78: 0x0  nop
    ctx->pc = 0x112d78u;
    // NOP
    // 0x112d7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x112d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112d80: 0x0  nop
    ctx->pc = 0x112d80u;
    // NOP
    // 0x112d84: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x112D84u;
    {
        const bool branch_taken_0x112d84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x112D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D84u;
        // 0x112d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d84) {
            ctx->pc = 0x112D90u;
            goto label_112d90;
        }
    }
    ctx->pc = 0x112D8Cu;
label_112d8c:
    // 0x112d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112d90:
    // 0x112d90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x112d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112d94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x112d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x112d98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x112d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112d9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x112d9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x112da0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x112da0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112da4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x112da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x112da8: 0x3e00008  jr          $ra
    ctx->pc = 0x112DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DA8u;
        // 0x112dac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112DB0u;
}
