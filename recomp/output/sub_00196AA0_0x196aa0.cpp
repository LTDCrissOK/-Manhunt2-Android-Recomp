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

// Function: sub_00196AA0
// Address: 0x196aa0 - 0x196db0
void sub_00196AA0_0x196aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196AA0_0x196aa0");
#endif

    switch (ctx->pc) {
        case 0x196b48u: goto label_196b48;
        case 0x196b5cu: goto label_196b5c;
        case 0x196b6cu: goto label_196b6c;
        case 0x196b88u: goto label_196b88;
        case 0x196bc8u: goto label_196bc8;
        case 0x196be0u: goto label_196be0;
        case 0x196bf8u: goto label_196bf8;
        case 0x196c08u: goto label_196c08;
        case 0x196c18u: goto label_196c18;
        case 0x196c2cu: goto label_196c2c;
        case 0x196cb0u: goto label_196cb0;
        case 0x196cc8u: goto label_196cc8;
        case 0x196cd8u: goto label_196cd8;
        case 0x196cf0u: goto label_196cf0;
        case 0x196d08u: goto label_196d08;
        default: break;
    }

    ctx->pc = 0x196aa0u;

    // 0x196aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x196aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x196aa4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x196aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x196aa8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x196aa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x196aac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x196aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196ab0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x196ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x196ab4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x196ab4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ab8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x196ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x196abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ac0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x196ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x196ac4: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x196ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x196ac8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x196ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x196acc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x196accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x196ad0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x196ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x196ad4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x196ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x196ad8: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x196ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196adc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x196adcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x196ae0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x196ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196ae4: 0x0  nop
    ctx->pc = 0x196ae4u;
    // NOP
    // 0x196ae8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x196AE8u;
    {
        const bool branch_taken_0x196ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AE8u;
        // 0x196aec: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ae8) {
            ctx->pc = 0x196B20u;
            goto label_196b20;
        }
    }
    ctx->pc = 0x196AF0u;
    // 0x196af0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x196af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196af4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x196af4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x196af8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x196af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196afc: 0x0  nop
    ctx->pc = 0x196afcu;
    // NOP
    // 0x196b00: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x196B00u;
    {
        const bool branch_taken_0x196b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B00u;
        // 0x196b04: 0x261100a0  addiu       $s1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b00) {
            ctx->pc = 0x196B24u;
            goto label_196b24;
        }
    }
    ctx->pc = 0x196B08u;
    // 0x196b08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x196b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196b0c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x196b0cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x196b10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x196b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196b14: 0x0  nop
    ctx->pc = 0x196b14u;
    // NOP
    // 0x196b18: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x196B18u;
    {
        const bool branch_taken_0x196b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x196b18) {
            ctx->pc = 0x196B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196B18u;
            // 0x196b1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196B24u;
            goto label_196b24;
        }
    }
    ctx->pc = 0x196B20u;
label_196b20:
    // 0x196b20: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x196b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_196b24:
    // 0x196b24: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x196b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x196b28: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196b2c: 0x2454f140  addiu       $s4, $v0, -0xEC0
    ctx->pc = 0x196b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x196b30: 0x3880b  movn        $s1, $zero, $v1
    ctx->pc = 0x196b30u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x196b34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x196b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b38: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x196B38u;
    {
        const bool branch_taken_0x196b38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B38u;
        // 0x196b3c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b38) {
            ctx->pc = 0x196B5Cu;
            goto label_196b5c;
        }
    }
    ctx->pc = 0x196B40u;
    // 0x196b40: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x196B40u;
    SET_GPR_U32(ctx, 31, 0x196B48u);
    ctx->pc = 0x196B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B40u;
    // 0x196b44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x196B40u, 0x196B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B48u;
label_196b48:
    // 0x196b48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196B48u;
    {
        const bool branch_taken_0x196b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B48u;
        // 0x196b4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b48) {
            ctx->pc = 0x196B5Cu;
            goto label_196b5c;
        }
    }
    ctx->pc = 0x196B50u;
    // 0x196b50: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196b54: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x196B54u;
    SET_GPR_U32(ctx, 31, 0x196B5Cu);
    ctx->pc = 0x196B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B54u;
    // 0x196b58: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x196B54u, 0x196B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B5Cu;
label_196b5c:
    // 0x196b5c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x196B5Cu;
    {
        const bool branch_taken_0x196b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B5Cu;
        // 0x196b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b5c) {
            ctx->pc = 0x196B90u;
            goto label_196b90;
        }
    }
    ctx->pc = 0x196B64u;
    // 0x196b64: 0xc061a12  jal         func_186848
    ctx->pc = 0x196B64u;
    SET_GPR_U32(ctx, 31, 0x196B6Cu);
    ctx->pc = 0x196B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B64u;
    // 0x196b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196B64u, 0x196B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B6Cu;
label_196b6c:
    // 0x196b6c: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x196b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x196b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x196b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b78: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x196b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x196b7c: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x196b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x196b80: 0xc070a48  jal         func_1C2920
    ctx->pc = 0x196B80u;
    SET_GPR_U32(ctx, 31, 0x196B88u);
    ctx->pc = 0x196B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B80u;
    // 0x196b84: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2920u, 0x196B80u, 0x196B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B88u;
label_196b88:
    // 0x196b88: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x196B88u;
    {
        const bool branch_taken_0x196b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B88u;
        // 0x196b8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b88) {
            ctx->pc = 0x196CF4u;
            goto label_196cf4;
        }
    }
    ctx->pc = 0x196B90u;
label_196b90:
    // 0x196b90: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x196B90u;
    {
        const bool branch_taken_0x196b90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x196B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B90u;
        // 0x196b94: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b90) {
            ctx->pc = 0x196BD8u;
            goto label_196bd8;
        }
    }
    ctx->pc = 0x196B98u;
    // 0x196b98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x196B98u;
    {
        const bool branch_taken_0x196b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196b98) {
            ctx->pc = 0x196B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196B98u;
            // 0x196b9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196BB0u;
            goto label_196bb0;
        }
    }
    ctx->pc = 0x196BA0u;
    // 0x196ba0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x196BA0u;
    {
        const bool branch_taken_0x196ba0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ba0) {
            ctx->pc = 0x196BC0u;
            goto label_196bc0;
        }
    }
    ctx->pc = 0x196BA8u;
    // 0x196ba8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x196BA8u;
    {
        const bool branch_taken_0x196ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ba8) {
            ctx->pc = 0x196CF4u;
            goto label_196cf4;
        }
    }
    ctx->pc = 0x196BB0u;
label_196bb0:
    // 0x196bb0: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x196BB0u;
    {
        const bool branch_taken_0x196bb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x196BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BB0u;
        // 0x196bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bb0) {
            ctx->pc = 0x196C00u;
            goto label_196c00;
        }
    }
    ctx->pc = 0x196BB8u;
    // 0x196bb8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x196BB8u;
    {
        const bool branch_taken_0x196bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196bb8) {
            ctx->pc = 0x196CF4u;
            goto label_196cf4;
        }
    }
    ctx->pc = 0x196BC0u;
label_196bc0:
    // 0x196bc0: 0xc061a12  jal         func_186848
    ctx->pc = 0x196BC0u;
    SET_GPR_U32(ctx, 31, 0x196BC8u);
    ctx->pc = 0x196BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196BC0u;
    // 0x196bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196BC0u, 0x196BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BC8u;
label_196bc8:
    // 0x196bc8: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x196bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x196bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bd0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x196BD0u;
    {
        const bool branch_taken_0x196bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BD0u;
        // 0x196bd4: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bd0) {
            ctx->pc = 0x196CE4u;
            goto label_196ce4;
        }
    }
    ctx->pc = 0x196BD8u;
label_196bd8:
    // 0x196bd8: 0xc061a12  jal         func_186848
    ctx->pc = 0x196BD8u;
    SET_GPR_U32(ctx, 31, 0x196BE0u);
    ctx->pc = 0x196BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196BD8u;
    // 0x196bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196BD8u, 0x196BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BE0u;
label_196be0:
    // 0x196be0: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x196be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x196be4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196be8: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x196be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x196bec: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x196becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x196bf0: 0xc0709f0  jal         func_1C27C0
    ctx->pc = 0x196BF0u;
    SET_GPR_U32(ctx, 31, 0x196BF8u);
    ctx->pc = 0x196BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196BF0u;
    // 0x196bf4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27C0u, 0x196BF0u, 0x196BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BF8u;
label_196bf8:
    // 0x196bf8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x196BF8u;
    {
        const bool branch_taken_0x196bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BF8u;
        // 0x196bfc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bf8) {
            ctx->pc = 0x196CF4u;
            goto label_196cf4;
        }
    }
    ctx->pc = 0x196C00u;
label_196c00:
    // 0x196c00: 0xc061a12  jal         func_186848
    ctx->pc = 0x196C00u;
    SET_GPR_U32(ctx, 31, 0x196C08u);
    ctx->pc = 0x196C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C00u;
    // 0x196c04: 0x26110050  addiu       $s1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196C00u, 0x196C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C08u;
label_196c08:
    // 0x196c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c10: 0xc070aa2  jal         func_1C2A88
    ctx->pc = 0x196C10u;
    SET_GPR_U32(ctx, 31, 0x196C18u);
    ctx->pc = 0x196C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C10u;
    // 0x196c14: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2A88u, 0x196C10u, 0x196C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C18u;
label_196c18:
    // 0x196c18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c1c: 0x16400035  bnez        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x196C1Cu;
    {
        const bool branch_taken_0x196c1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x196c1c) {
            ctx->pc = 0x196CF4u;
            goto label_196cf4;
        }
    }
    ctx->pc = 0x196C24u;
    // 0x196c24: 0xc061a12  jal         func_186848
    ctx->pc = 0x196C24u;
    SET_GPR_U32(ctx, 31, 0x196C2Cu);
    ctx->pc = 0x196C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C24u;
    // 0x196c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196C24u, 0x196C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C2Cu;
label_196c2c:
    // 0x196c2c: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x196c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x196c30: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x196c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x196c34: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x196c34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196c38: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x196c38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196c3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x196c3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196c40: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x196c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x196c44: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x196c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196c48: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x196c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196c4c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x196c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196c50: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x196c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x196c54: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x196c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x196c58: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x196c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x196c5c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x196c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x196c60: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x196c60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x196c64: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x196c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196c68: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x196c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x196c6c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x196c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x196c70: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x196c70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x196c74: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x196c74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x196c78: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x196c78u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x196c7c: 0x46060184  c1          0x60184
    ctx->pc = 0x196c7cu;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x196c80: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x196c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196c84: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x196c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196c88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x196c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x196c8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x196c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x196c90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x196c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x196c94: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x196c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x196c98: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x196c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196c9c: 0x0  nop
    ctx->pc = 0x196c9cu;
    // NOP
    // 0x196ca0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x196CA0u;
    {
        const bool branch_taken_0x196ca0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x196ca0) {
            ctx->pc = 0x196CD0u;
            goto label_196cd0;
        }
    }
    ctx->pc = 0x196CA8u;
    // 0x196ca8: 0xc061a12  jal         func_186848
    ctx->pc = 0x196CA8u;
    SET_GPR_U32(ctx, 31, 0x196CB0u);
    ctx->pc = 0x196CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CA8u;
    // 0x196cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196CA8u, 0x196CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CB0u;
label_196cb0:
    // 0x196cb0: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x196cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x196cb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cbc: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x196cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x196cc0: 0xc0709f0  jal         func_1C27C0
    ctx->pc = 0x196CC0u;
    SET_GPR_U32(ctx, 31, 0x196CC8u);
    ctx->pc = 0x196CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CC0u;
    // 0x196cc4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27C0u, 0x196CC0u, 0x196CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CC8u;
label_196cc8:
    // 0x196cc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x196CC8u;
    {
        const bool branch_taken_0x196cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CC8u;
        // 0x196ccc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cc8) {
            ctx->pc = 0x196CF4u;
            goto label_196cf4;
        }
    }
    ctx->pc = 0x196CD0u;
label_196cd0:
    // 0x196cd0: 0xc061a12  jal         func_186848
    ctx->pc = 0x196CD0u;
    SET_GPR_U32(ctx, 31, 0x196CD8u);
    ctx->pc = 0x196CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CD0u;
    // 0x196cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196CD0u, 0x196CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CD8u;
label_196cd8:
    // 0x196cd8: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x196cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x196cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196ce4:
    // 0x196ce4: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x196ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x196ce8: 0xc070a1c  jal         func_1C2870
    ctx->pc = 0x196CE8u;
    SET_GPR_U32(ctx, 31, 0x196CF0u);
    ctx->pc = 0x196CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CE8u;
    // 0x196cec: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2870u, 0x196CE8u, 0x196CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CF0u;
label_196cf0:
    // 0x196cf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x196cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196cf4:
    // 0x196cf4: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x196CF4u;
    {
        const bool branch_taken_0x196cf4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x196cf4) {
            ctx->pc = 0x196D08u;
            goto label_196d08;
        }
    }
    ctx->pc = 0x196CFCu;
    // 0x196cfc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x196cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196d00: 0xc0f62da  jal         func_3D8B68
    ctx->pc = 0x196D00u;
    SET_GPR_U32(ctx, 31, 0x196D08u);
    ctx->pc = 0x196D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D00u;
    // 0x196d04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B68u, 0x196D00u, 0x196D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D08u;
label_196d08:
    // 0x196d08: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x196D08u;
    {
        const bool branch_taken_0x196d08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D08u;
        // 0x196d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d08) {
            ctx->pc = 0x196D88u;
            goto label_196d88;
        }
    }
    ctx->pc = 0x196D10u;
    // 0x196d10: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x196d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x196d14: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x196d14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196d18: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x196d18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x196d1c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x196d1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196d20: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x196d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x196d24: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x196d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d28: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x196d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196d2c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x196d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196d30: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x196d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x196d34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x196d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x196d38: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x196d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x196d3c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x196d3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x196d40: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x196d40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x196d44: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x196d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196d48: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x196d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x196d4c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x196d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x196d50: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x196d50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x196d54: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x196d54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x196d58: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x196d58u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x196d5c: 0x46010044  c1          0x10044
    ctx->pc = 0x196d5cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x196d60: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x196d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x196d64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196d68: 0x0  nop
    ctx->pc = 0x196d68u;
    // NOP
    // 0x196d6c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x196D6Cu;
    {
        const bool branch_taken_0x196d6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x196d6c) {
            ctx->pc = 0x196D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196D6Cu;
            // 0x196d70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196D8Cu;
            goto label_196d8c;
        }
    }
    ctx->pc = 0x196D74u;
    // 0x196d74: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x196d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x196d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196d7c: 0x0  nop
    ctx->pc = 0x196d7cu;
    // NOP
    // 0x196d80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x196D80u;
    {
        const bool branch_taken_0x196d80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x196d80) {
            ctx->pc = 0x196D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196D80u;
            // 0x196d84: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196D88u;
            goto label_196d88;
        }
    }
    ctx->pc = 0x196D88u;
label_196d88:
    // 0x196d88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x196d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_196d8c:
    // 0x196d8c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x196d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x196d90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x196d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196d94: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x196d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x196d98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x196d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196d9c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x196d9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x196da0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x196da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196da4: 0x3e00008  jr          $ra
    ctx->pc = 0x196DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DA4u;
        // 0x196da8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196DACu;
    // 0x196dac: 0x0  nop
    ctx->pc = 0x196dacu;
    // NOP
    ctx->pc = 0x196db0u;
}
