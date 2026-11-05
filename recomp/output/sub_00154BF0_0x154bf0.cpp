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

// Function: sub_00154BF0
// Address: 0x154bf0 - 0x154cf8
void sub_00154BF0_0x154bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154BF0_0x154bf0");
#endif

    switch (ctx->pc) {
        case 0x154c7cu: goto label_154c7c;
        case 0x154cc8u: goto label_154cc8;
        case 0x154cd8u: goto label_154cd8;
        case 0x154ce4u: goto label_154ce4;
        default: break;
    }

    ctx->pc = 0x154bf0u;

    // 0x154bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x154bf4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x154bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x154bf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x154bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x154bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c00: 0x8e020668  lw          $v0, 0x668($s0)
    ctx->pc = 0x154c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
    // 0x154c04: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x154C04u;
    {
        const bool branch_taken_0x154c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C04u;
        // 0x154c08: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c04) {
            ctx->pc = 0x154CE4u;
            goto label_154ce4;
        }
    }
    ctx->pc = 0x154C0Cu;
    // 0x154c0c: 0x8e020680  lw          $v0, 0x680($s0)
    ctx->pc = 0x154c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x154c10: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x154C10u;
    {
        const bool branch_taken_0x154c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154c10) {
            ctx->pc = 0x154C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154C10u;
            // 0x154c14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154CE8u;
            goto label_154ce8;
        }
    }
    ctx->pc = 0x154C18u;
    // 0x154c18: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x154c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x154c1c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x154c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x154c20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154c24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x154c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154c28: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x154C28u;
    {
        const bool branch_taken_0x154c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C28u;
        // 0x154c2c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c28) {
            ctx->pc = 0x154CE4u;
            goto label_154ce4;
        }
    }
    ctx->pc = 0x154C30u;
    // 0x154c30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x154c34: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x154c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x154c38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x154c3c: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x154c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x154c40: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x154C40u;
    {
        const bool branch_taken_0x154c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154c40) {
            ctx->pc = 0x154C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154C40u;
            // 0x154c44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154CE8u;
            goto label_154ce8;
        }
    }
    ctx->pc = 0x154C48u;
    // 0x154c48: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x154c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x154c4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x154c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x154c50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x154c54: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x154c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x154c58: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x154C58u;
    {
        const bool branch_taken_0x154c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154c58) {
            ctx->pc = 0x154C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154C58u;
            // 0x154c5c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154C68u;
            goto label_154c68;
        }
    }
    ctx->pc = 0x154C60u;
    // 0x154c60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x154C60u;
    {
        const bool branch_taken_0x154c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C60u;
        // 0x154c64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c60) {
            ctx->pc = 0x154C70u;
            goto label_154c70;
        }
    }
    ctx->pc = 0x154C68u;
label_154c68:
    // 0x154c68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x154c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154c6c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x154c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_154c70:
    // 0x154c70: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x154c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x154c74: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x154C74u;
    SET_GPR_U32(ctx, 31, 0x154C7Cu);
    ctx->pc = 0x154C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C74u;
    // 0x154c78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x154C74u, 0x154C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C7Cu;
label_154c7c:
    // 0x154c7c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x154c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154c80: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x154c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154c84: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x154c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x154c88: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x154c88u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x154c8c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x154c8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x154c90: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x154c90u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x154c94: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x154c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x154c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x154c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154c9c: 0x0  nop
    ctx->pc = 0x154c9cu;
    // NOP
    // 0x154ca0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x154ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154ca4: 0x0  nop
    ctx->pc = 0x154ca4u;
    // NOP
    // 0x154ca8: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x154CA8u;
    {
        const bool branch_taken_0x154ca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x154ca8) {
            ctx->pc = 0x154CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154CA8u;
            // 0x154cac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154CE8u;
            goto label_154ce8;
        }
    }
    ctx->pc = 0x154CB0u;
    // 0x154cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154cb4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154cb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x154cb8: 0xae020668  sw          $v0, 0x668($s0)
    ctx->pc = 0x154cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 2));
    // 0x154cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154cc0: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x154CC0u;
    SET_GPR_U32(ctx, 31, 0x154CC8u);
    ctx->pc = 0x154CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154CC0u;
    // 0x154cc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x154CC0u, 0x154CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CC8u;
label_154cc8:
    // 0x154cc8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154cc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x154ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154cd0: 0xc0551e4  jal         func_154790
    ctx->pc = 0x154CD0u;
    SET_GPR_U32(ctx, 31, 0x154CD8u);
    ctx->pc = 0x154CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154CD0u;
    // 0x154cd4: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x154CD0u, 0x154CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CD8u;
label_154cd8:
    // 0x154cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154cdc: 0xc055374  jal         func_154DD0
    ctx->pc = 0x154CDCu;
    SET_GPR_U32(ctx, 31, 0x154CE4u);
    ctx->pc = 0x154CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154CDCu;
    // 0x154ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DD0u, 0x154CDCu, 0x154CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CE4u;
label_154ce4:
    // 0x154ce4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x154ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_154ce8:
    // 0x154ce8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x154ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154cec: 0x3e00008  jr          $ra
    ctx->pc = 0x154CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CECu;
        // 0x154cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154CF4u;
    // 0x154cf4: 0x0  nop
    ctx->pc = 0x154cf4u;
    // NOP
    ctx->pc = 0x154cf8u;
}
