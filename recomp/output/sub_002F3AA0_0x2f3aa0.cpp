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

// Function: sub_002F3AA0
// Address: 0x2f3aa0 - 0x2f4388
void sub_002F3AA0_0x2f3aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3AA0_0x2f3aa0");
#endif

    switch (ctx->pc) {
        case 0x2f3b24u: goto label_2f3b24;
        case 0x2f3b54u: goto label_2f3b54;
        case 0x2f3b98u: goto label_2f3b98;
        case 0x2f3ba8u: goto label_2f3ba8;
        case 0x2f3bb0u: goto label_2f3bb0;
        case 0x2f3bb8u: goto label_2f3bb8;
        case 0x2f3bccu: goto label_2f3bcc;
        case 0x2f3c38u: goto label_2f3c38;
        case 0x2f3c40u: goto label_2f3c40;
        case 0x2f3d30u: goto label_2f3d30;
        case 0x2f3d3cu: goto label_2f3d3c;
        case 0x2f3d54u: goto label_2f3d54;
        case 0x2f3d5cu: goto label_2f3d5c;
        case 0x2f3e48u: goto label_2f3e48;
        case 0x2f3e58u: goto label_2f3e58;
        case 0x2f3e80u: goto label_2f3e80;
        case 0x2f3f08u: goto label_2f3f08;
        case 0x2f3f1cu: goto label_2f3f1c;
        case 0x2f3f90u: goto label_2f3f90;
        case 0x2f4080u: goto label_2f4080;
        case 0x2f40b4u: goto label_2f40b4;
        case 0x2f40c4u: goto label_2f40c4;
        case 0x2f4234u: goto label_2f4234;
        case 0x2f4258u: goto label_2f4258;
        case 0x2f4264u: goto label_2f4264;
        case 0x2f4274u: goto label_2f4274;
        case 0x2f42ecu: goto label_2f42ec;
        case 0x2f4338u: goto label_2f4338;
        case 0x2f434cu: goto label_2f434c;
        default: break;
    }

    ctx->pc = 0x2f3aa0u;

    // 0x2f3aa0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2f3aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2f3aa4: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x2f3aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x2f3aa8: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x2f3aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x2f3aac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f3aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ab0: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x2f3ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x2f3ab4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f3ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ab8: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x2f3ab8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2f3abc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2f3abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ac0: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x2f3ac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2f3ac4: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2f3ac4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2f3ac8: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x2f3ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x2f3acc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2f3accu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2f3ad0: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x2f3ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x2f3ad4: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x2f3ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x2f3ad8: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x2f3ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x2f3adc: 0xffb70158  sd          $s7, 0x158($sp)
    ctx->pc = 0x2f3adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 23));
    // 0x2f3ae0: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x2f3ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x2f3ae4: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x2f3ae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2f3ae8: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x2f3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2f3aec: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2f3aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2f3af0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2f3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f3af4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3AF4u;
    {
        const bool branch_taken_0x2f3af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AF4u;
        // 0x2f3af8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3af4) {
            ctx->pc = 0x2F3B10u;
            goto label_2f3b10;
        }
    }
    ctx->pc = 0x2F3AFCu;
    // 0x2f3afc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f3b00: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3B00u;
    {
        const bool branch_taken_0x2f3b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B00u;
        // 0x2f3b04: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b00) {
            ctx->pc = 0x2F3B10u;
            goto label_2f3b10;
        }
    }
    ctx->pc = 0x2F3B08u;
    // 0x2f3b08: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3B08u;
    {
        const bool branch_taken_0x2f3b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3b08) {
            ctx->pc = 0x2F3B14u;
            goto label_2f3b14;
        }
    }
    ctx->pc = 0x2F3B10u;
label_2f3b10:
    // 0x2f3b10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f3b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3b14:
    // 0x2f3b14: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3B14u;
    {
        const bool branch_taken_0x2f3b14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B14u;
        // 0x2f3b18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b14) {
            ctx->pc = 0x2F3B48u;
            goto label_2f3b48;
        }
    }
    ctx->pc = 0x2F3B1Cu;
    // 0x2f3b1c: 0xc06b640  jal         func_1AD900
    ctx->pc = 0x2F3B1Cu;
    SET_GPR_U32(ctx, 31, 0x2F3B24u);
    ctx->pc = 0x2F3B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B1Cu;
    // 0x2f3b20: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD900u, 0x2F3B1Cu, 0x2F3B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B24u;
label_2f3b24:
    // 0x2f3b24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3B24u;
    {
        const bool branch_taken_0x2f3b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B24u;
        // 0x2f3b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b24) {
            ctx->pc = 0x2F3B48u;
            goto label_2f3b48;
        }
    }
    ctx->pc = 0x2F3B2Cu;
    // 0x2f3b2c: 0xc64000d0  lwc1        $f0, 0xD0($s2)
    ctx->pc = 0x2f3b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3b30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f3b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f3b34: 0x0  nop
    ctx->pc = 0x2f3b34u;
    // NOP
    // 0x2f3b38: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2f3b38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3b3c: 0x0  nop
    ctx->pc = 0x2f3b3cu;
    // NOP
    // 0x2f3b40: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3B40u;
    {
        const bool branch_taken_0x2f3b40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3b40) {
            ctx->pc = 0x2F3B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3B40u;
            // 0x2f3b44: 0x8e43036c  lw          $v1, 0x36C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3B5Cu;
            goto label_2f3b5c;
        }
    }
    ctx->pc = 0x2F3B48u;
label_2f3b48:
    // 0x2f3b48: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2f3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2f3b4c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2F3B4Cu;
    SET_GPR_U32(ctx, 31, 0x2F3B54u);
    ctx->pc = 0x2F3B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B4Cu;
    // 0x2f3b50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F3B4Cu, 0x2F3B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B54u;
label_2f3b54:
    // 0x2f3b54: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x2F3B54u;
    {
        const bool branch_taken_0x2f3b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B54u;
        // 0x2f3b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b54) {
            ctx->pc = 0x2F4350u;
            goto label_2f4350;
        }
    }
    ctx->pc = 0x2F3B5Cu;
label_2f3b5c:
    // 0x2f3b5c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2f3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2f3b60: 0x144001fb  bnez        $v0, . + 4 + (0x1FB << 2)
    ctx->pc = 0x2F3B60u;
    {
        const bool branch_taken_0x2f3b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B60u;
        // 0x2f3b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b60) {
            ctx->pc = 0x2F4350u;
            goto label_2f4350;
        }
    }
    ctx->pc = 0x2F3B68u;
    // 0x2f3b68: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x2f3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x2f3b6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3b70: 0x144001f7  bnez        $v0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x2F3B70u;
    {
        const bool branch_taken_0x2f3b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B70u;
        // 0x2f3b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b70) {
            ctx->pc = 0x2F4350u;
            goto label_2f4350;
        }
    }
    ctx->pc = 0x2F3B78u;
    // 0x2f3b78: 0x46001f6  bltz        $v1, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x2F3B78u;
    {
        const bool branch_taken_0x2f3b78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B78u;
        // 0x2f3b7c: 0xdfb00120  ld          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b78) {
            ctx->pc = 0x2F4354u;
            goto label_2f4354;
        }
    }
    ctx->pc = 0x2F3B80u;
    // 0x2f3b80: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x2f3b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2f3b84: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x2f3b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x2f3b88: 0x144001f2  bnez        $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x2F3B88u;
    {
        const bool branch_taken_0x2f3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B88u;
        // 0x2f3b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b88) {
            ctx->pc = 0x2F4354u;
            goto label_2f4354;
        }
    }
    ctx->pc = 0x2F3B90u;
    // 0x2f3b90: 0xc076824  jal         func_1DA090
    ctx->pc = 0x2F3B90u;
    SET_GPR_U32(ctx, 31, 0x2F3B98u);
    ctx->pc = 0x1DA090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA090u, 0x2F3B90u, 0x2F3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B98u;
label_2f3b98:
    // 0x2f3b98: 0x144001ed  bnez        $v0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x2F3B98u;
    {
        const bool branch_taken_0x2f3b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B98u;
        // 0x2f3b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b98) {
            ctx->pc = 0x2F4350u;
            goto label_2f4350;
        }
    }
    ctx->pc = 0x2F3BA0u;
    // 0x2f3ba0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F3BA0u;
    SET_GPR_U32(ctx, 31, 0x2F3BA8u);
    ctx->pc = 0x2F3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3BA0u;
    // 0x2f3ba4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F3BA0u, 0x2F3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3BA8u;
label_2f3ba8:
    // 0x2f3ba8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F3BA8u;
    SET_GPR_U32(ctx, 31, 0x2F3BB0u);
    ctx->pc = 0x2F3BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3BA8u;
    // 0x2f3bac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F3BA8u, 0x2F3BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3BB0u;
label_2f3bb0:
    // 0x2f3bb0: 0xc08da92  jal         func_236A48
    ctx->pc = 0x2F3BB0u;
    SET_GPR_U32(ctx, 31, 0x2F3BB8u);
    ctx->pc = 0x2F3BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3BB0u;
    // 0x2f3bb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2F3BB0u, 0x2F3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3BB8u;
label_2f3bb8:
    // 0x2f3bb8: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x2f3bb8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f3bbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f3bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3bc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f3bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3bc4: 0xc0bcd58  jal         func_2F3560
    ctx->pc = 0x2F3BC4u;
    SET_GPR_U32(ctx, 31, 0x2F3BCCu);
    ctx->pc = 0x2F3BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3BC4u;
    // 0x2f3bc8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F3BC4u, 0x2F3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3BCCu;
label_2f3bcc:
    // 0x2f3bcc: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2f3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x2f3bd0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2f3bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3bd4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f3bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2f3bd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3bdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3be0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2f3be0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f3be4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2f3be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2f3be8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f3bec: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2f3becu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f3bf0: 0xe7b4003c  swc1        $f20, 0x3C($sp)
    ctx->pc = 0x2f3bf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2f3bf4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f3bf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3bf8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2f3bf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f3bfc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f3bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f3c00: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f3c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3c04: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2f3c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3c08: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2f3c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f3c0c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2f3c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3c10: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2f3c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3c14: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x2f3c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3c18: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2f3c18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f3c1c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2f3c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2f3c20: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2f3c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2f3c24: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2f3c24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2f3c28: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f3c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f3c2c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f3c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3c30: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F3C30u;
    SET_GPR_U32(ctx, 31, 0x2F3C38u);
    ctx->pc = 0x2F3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3C30u;
    // 0x2f3c34: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F3C30u, 0x2F3C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3C38u;
label_2f3c38:
    // 0x2f3c38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F3C38u;
    SET_GPR_U32(ctx, 31, 0x2F3C40u);
    ctx->pc = 0x2F3C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3C38u;
    // 0x2f3c3c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F3C38u, 0x2F3C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3C40u;
label_2f3c40:
    // 0x2f3c40: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2f3c40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3c44: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2f3c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f3c48: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2f3c48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3c4c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2f3c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f3c50: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2f3c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2f3c54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f3c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f3c58: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2f3c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2f3c5c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f3c5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f3c60: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f3c60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3c64: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f3c64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f3c68: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2f3c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3c6c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2f3c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3c70: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2f3c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3c74: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2f3c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f3c78: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f3c78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2f3c7c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f3c7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2f3c80: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2f3c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2f3c84: 0x0  nop
    ctx->pc = 0x2f3c84u;
    // NOP
    // 0x2f3c88: 0x0  nop
    ctx->pc = 0x2f3c88u;
    // NOP
    // 0x2f3c8c: 0x46000044  c1          0x44
    ctx->pc = 0x2f3c8cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f3c90: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2f3c90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c94: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2f3c94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c98: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f3c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f3c9c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2f3c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3ca0: 0x0  nop
    ctx->pc = 0x2f3ca0u;
    // NOP
    // 0x2f3ca4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2F3CA4u;
    {
        const bool branch_taken_0x2f3ca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CA4u;
        // 0x2f3ca8: 0xe7a100a0  swc1        $f1, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ca4) {
            ctx->pc = 0x2F3CD0u;
            goto label_2f3cd0;
        }
    }
    ctx->pc = 0x2F3CACu;
    // 0x2f3cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f3cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3cb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3cb4: 0x0  nop
    ctx->pc = 0x2f3cb4u;
    // NOP
    // 0x2f3cb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f3cb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2f3cbc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f3cbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f3cc0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f3cc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f3cc4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f3cc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f3cc8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f3cc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f3ccc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2f3cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f3cd0:
    // 0x2f3cd0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f3cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3cd4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2f3cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3cd8: 0x0  nop
    ctx->pc = 0x2f3cd8u;
    // NOP
    // 0x2f3cdc: 0x4501019c  bc1t        . + 4 + (0x19C << 2)
    ctx->pc = 0x2F3CDCu;
    {
        const bool branch_taken_0x2f3cdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CDCu;
        // 0x2f3ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cdc) {
            ctx->pc = 0x2F4350u;
            goto label_2f4350;
        }
    }
    ctx->pc = 0x2F3CE4u;
    // 0x2f3ce4: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x2f3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x2f3ce8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2f3ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2f3cec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3CECu;
    {
        const bool branch_taken_0x2f3cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CECu;
        // 0x2f3cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cec) {
            ctx->pc = 0x2F3D00u;
            goto label_2f3d00;
        }
    }
    ctx->pc = 0x2F3CF4u;
    // 0x2f3cf4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f3cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f3cf8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3CF8u;
    {
        const bool branch_taken_0x2f3cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3cf8) {
            ctx->pc = 0x2F3D04u;
            goto label_2f3d04;
        }
    }
    ctx->pc = 0x2F3D00u;
label_2f3d00:
    // 0x2f3d00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3d04:
    // 0x2f3d04: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3D04u;
    {
        const bool branch_taken_0x2f3d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D04u;
        // 0x2f3d08: 0x27b100b0  addiu       $s1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d04) {
            ctx->pc = 0x2F3D20u;
            goto label_2f3d20;
        }
    }
    ctx->pc = 0x2F3D0Cu;
    // 0x2f3d0c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2f3d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3d10: 0x0  nop
    ctx->pc = 0x2f3d10u;
    // NOP
    // 0x2f3d14: 0x4501018e  bc1t        . + 4 + (0x18E << 2)
    ctx->pc = 0x2F3D14u;
    {
        const bool branch_taken_0x2f3d14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D14u;
        // 0x2f3d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d14) {
            ctx->pc = 0x2F4350u;
            goto label_2f4350;
        }
    }
    ctx->pc = 0x2F3D1Cu;
    // 0x2f3d1c: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x2f3d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2f3d20:
    // 0x2f3d20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f3d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f3d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d28: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x2F3D28u;
    SET_GPR_U32(ctx, 31, 0x2F3D30u);
    ctx->pc = 0x2F3D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D28u;
    // 0x2f3d2c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F3D28u, 0x2F3D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D30u;
label_2f3d30:
    // 0x2f3d30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f3d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d34: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x2F3D34u;
    SET_GPR_U32(ctx, 31, 0x2F3D3Cu);
    ctx->pc = 0x2F3D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D34u;
    // 0x2f3d38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F3D34u, 0x2F3D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D3Cu;
label_2f3d3c:
    // 0x2f3d3c: 0x8e0391c0  lw          $v1, -0x6E40($s0)
    ctx->pc = 0x2f3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939072)));
    // 0x2f3d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3d44: 0xae0291c0  sw          $v0, -0x6E40($s0)
    ctx->pc = 0x2f3d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939072), GPR_U32(ctx, 2));
    // 0x2f3d48: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2f3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2f3d4c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F3D4Cu;
    SET_GPR_U32(ctx, 31, 0x2F3D54u);
    ctx->pc = 0x2F3D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D4Cu;
    // 0x2f3d50: 0x3a02b  sltu        $s4, $zero, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F3D4Cu, 0x2F3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D54u;
label_2f3d54:
    // 0x2f3d54: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F3D54u;
    SET_GPR_U32(ctx, 31, 0x2F3D5Cu);
    ctx->pc = 0x2F3D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D54u;
    // 0x2f3d58: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F3D54u, 0x2F3D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D5Cu;
label_2f3d5c:
    // 0x2f3d5c: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x2f3d5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f3d60: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2f3d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2f3d64: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2f3d64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3d68: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2f3d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2f3d6c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2f3d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2f3d70: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2f3d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2f3d74: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x2f3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x2f3d78: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f3d78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f3d7c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f3d7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3d80: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f3d80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f3d84: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x2f3d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3d88: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2f3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3d8c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2f3d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3d90: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2f3d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f3d94: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f3d94u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2f3d98: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f3d98u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2f3d9c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2f3d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2f3da0: 0x0  nop
    ctx->pc = 0x2f3da0u;
    // NOP
    // 0x2f3da4: 0x0  nop
    ctx->pc = 0x2f3da4u;
    // NOP
    // 0x2f3da8: 0x46000044  c1          0x44
    ctx->pc = 0x2f3da8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f3dac: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2f3dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2f3db0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f3db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f3db4: 0x0  nop
    ctx->pc = 0x2f3db4u;
    // NOP
    // 0x2f3db8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2f3db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3dbc: 0x0  nop
    ctx->pc = 0x2f3dbcu;
    // NOP
    // 0x2f3dc0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2F3DC0u;
    {
        const bool branch_taken_0x2f3dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DC0u;
        // 0x2f3dc4: 0xe7a10110  swc1        $f1, 0x110($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3dc0) {
            ctx->pc = 0x2F3DECu;
            goto label_2f3dec;
        }
    }
    ctx->pc = 0x2F3DC8u;
    // 0x2f3dc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f3dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3dcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3dd0: 0x0  nop
    ctx->pc = 0x2f3dd0u;
    // NOP
    // 0x2f3dd4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f3dd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2f3dd8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f3dd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f3ddc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f3ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f3de0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f3de0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f3de4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f3de4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f3de8: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x2f3de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f3dec:
    // 0x2f3dec: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x2f3decu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3df0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2f3df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f3df4: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x2f3df4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f3df8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2f3df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2f3dfc: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2f3dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2f3e00: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x2f3e00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f3e04: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f3e04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f3e08: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2f3e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3e0c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2f3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2f3e10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f3e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3e14: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2f3e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3e18: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2f3e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3e1c: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x2f3e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x2f3e20: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2f3e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3e24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3e28: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f3e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2f3e2c: 0x34a5ffea  ori         $a1, $a1, 0xFFEA
    ctx->pc = 0x2f3e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65514);
    // 0x2f3e30: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f3e30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f3e34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f3e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3e38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f3e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3e3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f3e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e40: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x2F3E40u;
    SET_GPR_U32(ctx, 31, 0x2F3E48u);
    ctx->pc = 0x2F3E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3E40u;
    // 0x2f3e44: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x2F3E40u, 0x2F3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E48u;
label_2f3e48:
    // 0x2f3e48: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F3E48u;
    {
        const bool branch_taken_0x2f3e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3e48) {
            ctx->pc = 0x2F3E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3E48u;
            // 0x2f3e4c: 0xae1491c0  sw          $s4, -0x6E40($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294939072), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3F00u;
            goto label_2f3f00;
        }
    }
    ctx->pc = 0x2F3E50u;
    // 0x2f3e50: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x2F3E50u;
    SET_GPR_U32(ctx, 31, 0x2F3E58u);
    ctx->pc = 0x2F3E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3E50u;
    // 0x2f3e54: 0xae1491c0  sw          $s4, -0x6E40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939072), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x2F3E50u, 0x2F3E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E58u;
label_2f3e58:
    // 0x2f3e58: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2f3e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e60: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x2f3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x2f3e64: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F3E64u;
    {
        const bool branch_taken_0x2f3e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E64u;
        // 0x2f3e68: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e64) {
            ctx->pc = 0x2F3EFCu;
            goto label_2f3efc;
        }
    }
    ctx->pc = 0x2F3E6Cu;
    // 0x2f3e6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2f3e70: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x2f3e70u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x2f3e74: 0x8c462b20  lw          $a2, 0x2B20($v0)
    ctx->pc = 0x2f3e74u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x482B20u));
    // 0x2f3e78: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f3e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e7c: 0x0  nop
    ctx->pc = 0x2f3e7cu;
    // NOP
label_2f3e80:
    // 0x2f3e80: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f3e84: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2f3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2f3e88: 0x38440008  xori        $a0, $v0, 0x8
    ctx->pc = 0x2f3e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2f3e8c: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F3E8Cu;
    {
        const bool branch_taken_0x2f3e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E8Cu;
        // 0x2f3e90: 0x8d022b1c  lw          $v0, 0x2B1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e8c) {
            ctx->pc = 0x2F3EF0u;
            goto label_2f3ef0;
        }
    }
    ctx->pc = 0x2F3E94u;
    // 0x2f3e94: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2f3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2f3e98: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2f3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x2f3e9c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f3e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f3ea0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2f3ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2f3ea4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F3EA4u;
    {
        const bool branch_taken_0x2f3ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EA4u;
        // 0x2f3ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ea4) {
            ctx->pc = 0x2F3EECu;
            goto label_2f3eec;
        }
    }
    ctx->pc = 0x2F3EACu;
    // 0x2f3eac: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x2f3eacu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2f3eb0: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x2f3eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3eb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f3eb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3eb8: 0x0  nop
    ctx->pc = 0x2f3eb8u;
    // NOP
    // 0x2f3ebc: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3EBCu;
    {
        const bool branch_taken_0x2f3ebc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3ebc) {
            ctx->pc = 0x2F3EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3EBCu;
            // 0x2f3ec0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3EE0u;
            goto label_2f3ee0;
        }
    }
    ctx->pc = 0x2F3EC4u;
    // 0x2f3ec4: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x2f3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x2f3ec8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2f3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2f3ecc: 0x2442ffd9  addiu       $v0, $v0, -0x27
    ctx->pc = 0x2f3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967257));
    // 0x2f3ed0: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2f3ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f3ed4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3ED4u;
    {
        const bool branch_taken_0x2f3ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3ED4u;
        // 0x2f3ed8: 0x8d022b1c  lw          $v0, 0x2B1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ed4) {
            ctx->pc = 0x2F3EF0u;
            goto label_2f3ef0;
        }
    }
    ctx->pc = 0x2F3EDCu;
    // 0x2f3edc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f3edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2f3ee0:
    // 0x2f3ee0: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2f3ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f3ee4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2F3EE4u;
    {
        const bool branch_taken_0x2f3ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EE4u;
        // 0x2f3ee8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ee4) {
            ctx->pc = 0x2F3E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3e80;
        }
    }
    ctx->pc = 0x2F3EECu;
label_2f3eec:
    // 0x2f3eec: 0x8d022b1c  lw          $v0, 0x2B1C($t0)
    ctx->pc = 0x2f3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11036)));
label_2f3ef0:
    // 0x2f3ef0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2f3ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f3ef4: 0x1440010e  bnez        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x2F3EF4u;
    {
        const bool branch_taken_0x2f3ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EF4u;
        // 0x2f3ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ef4) {
            ctx->pc = 0x2F4330u;
            goto label_2f4330;
        }
    }
    ctx->pc = 0x2F3EFCu;
label_2f3efc:
    // 0x2f3efc: 0xae1491c0  sw          $s4, -0x6E40($s0)
    ctx->pc = 0x2f3efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939072), GPR_U32(ctx, 20));
label_2f3f00:
    // 0x2f3f00: 0xc08da92  jal         func_236A48
    ctx->pc = 0x2F3F00u;
    SET_GPR_U32(ctx, 31, 0x2F3F08u);
    ctx->pc = 0x2F3F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F00u;
    // 0x2f3f04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2F3F00u, 0x2F3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F08u;
label_2f3f08:
    // 0x2f3f08: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2F3F08u;
    {
        const bool branch_taken_0x2f3f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F08u;
        // 0x2f3f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f08) {
            ctx->pc = 0x2F40A0u;
            goto label_2f40a0;
        }
    }
    ctx->pc = 0x2F3F10u;
    // 0x2f3f10: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2f3f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2f3f14: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2F3F14u;
    SET_GPR_U32(ctx, 31, 0x2F3F1Cu);
    ctx->pc = 0x2F3F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F14u;
    // 0x2f3f18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F3F14u, 0x2F3F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F1Cu;
label_2f3f1c:
    // 0x2f3f1c: 0x8e631208  lw          $v1, 0x1208($s3)
    ctx->pc = 0x2f3f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4616)));
    // 0x2f3f20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3f24: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3F24u;
    {
        const bool branch_taken_0x2f3f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3f24) {
            ctx->pc = 0x2F3F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3F24u;
            // 0x2f3f28: 0x8e650104  lw          $a1, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3F3Cu;
            goto label_2f3f3c;
        }
    }
    ctx->pc = 0x2F3F2Cu;
    // 0x2f3f2c: 0x8e421004  lw          $v0, 0x1004($s2)
    ctx->pc = 0x2f3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4100)));
    // 0x2f3f30: 0x105300ff  beq         $v0, $s3, . + 4 + (0xFF << 2)
    ctx->pc = 0x2F3F30u;
    {
        const bool branch_taken_0x2f3f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F30u;
        // 0x2f3f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f30) {
            ctx->pc = 0x2F4330u;
            goto label_2f4330;
        }
    }
    ctx->pc = 0x2F3F38u;
    // 0x2f3f38: 0x8e650104  lw          $a1, 0x104($s3)
    ctx->pc = 0x2f3f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f3f3c:
    // 0x2f3f3c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2f3f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2f3f40: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2f3f44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f3f48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f3f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3f4c: 0xc4620074  lwc1        $f2, 0x74($v1)
    ctx->pc = 0x2f3f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3f50: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x2f3f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3f54: 0xc4c0b784  lwc1        $f0, -0x487C($a2)
    ctx->pc = 0x2f3f54u;
    { uint32_t bits = FAST_READ32(0x3FB784u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f58: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2f3f58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2f3f5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f3f5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f3f60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2f3f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3f64: 0x0  nop
    ctx->pc = 0x2f3f64u;
    // NOP
    // 0x2f3f68: 0x450100f1  bc1t        . + 4 + (0xF1 << 2)
    ctx->pc = 0x2F3F68u;
    {
        const bool branch_taken_0x2f3f68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F68u;
        // 0x2f3f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f68) {
            ctx->pc = 0x2F4330u;
            goto label_2f4330;
        }
    }
    ctx->pc = 0x2F3F70u;
    // 0x2f3f70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f3f74: 0xc440b998  lwc1        $f0, -0x4668($v0)
    ctx->pc = 0x2f3f74u;
    { uint32_t bits = FAST_READ32(0x3FB998u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f78: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f3f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3f7c: 0x0  nop
    ctx->pc = 0x2f3f7cu;
    // NOP
    // 0x2f3f80: 0x450100eb  bc1t        . + 4 + (0xEB << 2)
    ctx->pc = 0x2F3F80u;
    {
        const bool branch_taken_0x2f3f80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3f80) {
            ctx->pc = 0x2F4330u;
            goto label_2f4330;
        }
    }
    ctx->pc = 0x2F3F88u;
    // 0x2f3f88: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x2F3F88u;
    SET_GPR_U32(ctx, 31, 0x2F3F90u);
    ctx->pc = 0x2F3F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F88u;
    // 0x2f3f8c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2F3F88u, 0x2F3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F90u;
label_2f3f90:
    // 0x2f3f90: 0x144000ec  bnez        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x2F3F90u;
    {
        const bool branch_taken_0x2f3f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F90u;
        // 0x2f3f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f90) {
            ctx->pc = 0x2F4344u;
            goto label_2f4344;
        }
    }
    ctx->pc = 0x2F3F98u;
    // 0x2f3f98: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2f3f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2f3f9c: 0x8e650104  lw          $a1, 0x104($s3)
    ctx->pc = 0x2f3f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x2f3fa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3fa4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f3fa8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2f3fac: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f3facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f3fb0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f3fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3fb4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f3fb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3fb8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f3fb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f3fbc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f3fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3fc0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2f3fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3fc4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2f3fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3fc8: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x2f3fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3fcc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f3fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f3fd0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2f3fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2f3fd4: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2f3fd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2f3fd8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2f3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2f3fdc: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f3fdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2f3fe0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f3fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f3fe4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f3fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f3fe8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f3fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f3fec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f3fecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2f3ff0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f3ff0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2f3ff4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f3ff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f3ff8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f3ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3ffc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4000: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f4000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2f4004: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2f4004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f4008: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2f4008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f400c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f400cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f4010: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x2f4010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f4014: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2f4014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f4018: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f4018u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2f401c: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x2f401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f4020: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2f4020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f4024: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2f4024u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f4028: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f4028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f402c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f402cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4030: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f4034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f4034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4038: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2f4038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f403c: 0x0  nop
    ctx->pc = 0x2f403cu;
    // NOP
    // 0x2f4040: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4040u;
    {
        const bool branch_taken_0x2f4040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4040) {
            ctx->pc = 0x2F4050u;
            goto label_2f4050;
        }
    }
    ctx->pc = 0x2F4048u;
    // 0x2f4048: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4048u;
    {
        const bool branch_taken_0x2f4048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4048u;
        // 0x2f404c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4048) {
            ctx->pc = 0x2F4060u;
            goto label_2f4060;
        }
    }
    ctx->pc = 0x2F4050u;
label_2f4050:
    // 0x2f4050: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2f4050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4054: 0x0  nop
    ctx->pc = 0x2f4054u;
    // NOP
    // 0x2f4058: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F4058u;
    {
        const bool branch_taken_0x2f4058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4058) {
            ctx->pc = 0x2F405Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4058u;
            // 0x2f405c: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4060u;
            goto label_2f4060;
        }
    }
    ctx->pc = 0x2F4060u;
label_2f4060:
    // 0x2f4060: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2f4060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2f4064: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f4068: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f4068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f406c: 0x0  nop
    ctx->pc = 0x2f406cu;
    // NOP
    // 0x2f4070: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f4070u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2f4074: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2f4074u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f4078: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2F4078u;
    SET_GPR_U32(ctx, 31, 0x2F4080u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F4078u, 0x2F4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4080u;
label_2f4080:
    // 0x2f4080: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f4080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2f4084: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f4084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2f4088: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f4088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f408c: 0x0  nop
    ctx->pc = 0x2f408cu;
    // NOP
    // 0x2f4090: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f4090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f4094: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2f4094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4098: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2F4098u;
    {
        const bool branch_taken_0x2f4098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4098) {
            ctx->pc = 0x2F4324u;
            goto label_2f4324;
        }
    }
    ctx->pc = 0x2F40A0u;
label_2f40a0:
    // 0x2f40a0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f40a4: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x2f40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2f40a8: 0x8c700100  lw          $s0, 0x100($v1)
    ctx->pc = 0x2f40a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f40ac: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2F40ACu;
    SET_GPR_U32(ctx, 31, 0x2F40B4u);
    ctx->pc = 0x2F40B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F40ACu;
    // 0x2f40b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2F40ACu, 0x2F40B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40B4u;
label_2f40b4:
    // 0x2f40b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F40B4u;
    {
        const bool branch_taken_0x2f40b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f40b4) {
            ctx->pc = 0x2F40B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F40B4u;
            // 0x2f40b8: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F40C8u;
            goto label_2f40c8;
        }
    }
    ctx->pc = 0x2F40BCu;
    // 0x2f40bc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2F40BCu;
    SET_GPR_U32(ctx, 31, 0x2F40C4u);
    ctx->pc = 0x2F40C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F40BCu;
    // 0x2f40c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2F40BCu, 0x2F40C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40C4u;
label_2f40c4:
    // 0x2f40c4: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x2f40c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f40c8:
    // 0x2f40c8: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2f40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2f40cc: 0x8e630334  lw          $v1, 0x334($s3)
    ctx->pc = 0x2f40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x2f40d0: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2f40d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2f40d4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2f40d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f40d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f40d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f40dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2f40dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2f40e0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f40e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f40e4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2f40e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2f40e8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f40e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f40ec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2f40ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2f40f0: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2f40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2f40f4: 0x10640092  beq         $v1, $a0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2F40F4u;
    {
        const bool branch_taken_0x2f40f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40F4u;
        // 0x2f40f8: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40f4) {
            ctx->pc = 0x2F4340u;
            goto label_2f4340;
        }
    }
    ctx->pc = 0x2F40FCu;
    // 0x2f40fc: 0x10620091  beq         $v1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x2F40FCu;
    {
        const bool branch_taken_0x2f40fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40FCu;
        // 0x2f4100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40fc) {
            ctx->pc = 0x2F4344u;
            goto label_2f4344;
        }
    }
    ctx->pc = 0x2F4104u;
    // 0x2f4104: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2f4104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x2f4108: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f4108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f410c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f4110: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f4110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4114: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f4114u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4118: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f4118u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f411c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f4120: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2f4120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f4124: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f4124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f4128: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2f4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f412c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2f412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4130: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2f4130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f4134: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2f4134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f4138: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2f4138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2f413c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2f413cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2f4140: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2f4140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f4144: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f4144u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4148: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f4148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f414c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f414cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4150: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f4150u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2f4154: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f4154u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2f4158: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f4158u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f415c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f415cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f4160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f4160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f4164: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x2f4164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4168: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f4168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2f416c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2f416cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f4170: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4174: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2f4174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f4178: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f417c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2f417cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f4180: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4184: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2f4184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2f4188: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2f4188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2f418c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f418cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f4190: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f4190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4194: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f4194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f4198: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f4198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f419c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f419cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2f41a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f41a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2f41a4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f41a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f41a8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f41a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f41ac: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2f41acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f41b0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2f41b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f41b4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f41b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f41b8: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x2f41b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f41bc: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2f41bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f41c0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f41c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2f41c4: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x2f41c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f41c8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2f41c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f41cc: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2f41ccu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f41d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f41d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f41d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f41d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f41d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f41d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f41dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f41dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f41e0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2f41e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f41e4: 0x0  nop
    ctx->pc = 0x2f41e4u;
    // NOP
    // 0x2f41e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F41E8u;
    {
        const bool branch_taken_0x2f41e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f41e8) {
            ctx->pc = 0x2F41F8u;
            goto label_2f41f8;
        }
    }
    ctx->pc = 0x2F41F0u;
    // 0x2f41f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F41F0u;
    {
        const bool branch_taken_0x2f41f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41F0u;
        // 0x2f41f4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41f0) {
            ctx->pc = 0x2F4208u;
            goto label_2f4208;
        }
    }
    ctx->pc = 0x2F41F8u;
label_2f41f8:
    // 0x2f41f8: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2f41f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f41fc: 0x0  nop
    ctx->pc = 0x2f41fcu;
    // NOP
    // 0x2f4200: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F4200u;
    {
        const bool branch_taken_0x2f4200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4200) {
            ctx->pc = 0x2F4204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4200u;
            // 0x2f4204: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4208u;
            goto label_2f4208;
        }
    }
    ctx->pc = 0x2F4208u;
label_2f4208:
    // 0x2f4208: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x2f4208u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2f420c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f420cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f4210: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f4210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f4214: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f4214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2f4218: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f4218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2f421c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f421cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f4220: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x2f4220u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x2f4224: 0x0  nop
    ctx->pc = 0x2f4224u;
    // NOP
    // 0x2f4228: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2f4228u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f422c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2F422Cu;
    SET_GPR_U32(ctx, 31, 0x2F4234u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F422Cu, 0x2F4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4234u;
label_2f4234:
    // 0x2f4234: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2f4234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2f4238: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2f4238u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2f423c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2f423cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4240: 0x0  nop
    ctx->pc = 0x2f4240u;
    // NOP
    // 0x2f4244: 0x4503003a  bc1tl       . + 4 + (0x3A << 2)
    ctx->pc = 0x2F4244u;
    {
        const bool branch_taken_0x2f4244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4244) {
            ctx->pc = 0x2F4248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4244u;
            // 0x2f4248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4330u;
            goto label_2f4330;
        }
    }
    ctx->pc = 0x2F424Cu;
    // 0x2f424c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4250: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2F4250u;
    SET_GPR_U32(ctx, 31, 0x2F4258u);
    ctx->pc = 0x2F4254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4250u;
    // 0x2f4254: 0x24050446  addiu       $a1, $zero, 0x446 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1094));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2F4250u, 0x2F4258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4258u;
label_2f4258:
    // 0x2f4258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f425c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2F425Cu;
    SET_GPR_U32(ctx, 31, 0x2F4264u);
    ctx->pc = 0x2F4260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F425Cu;
    // 0x2f4260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2F425Cu, 0x2F4264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4264u;
label_2f4264:
    // 0x2f4264: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4264u;
    {
        const bool branch_taken_0x2f4264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4264u;
        // 0x2f4268: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4264) {
            ctx->pc = 0x2F4278u;
            goto label_2f4278;
        }
    }
    ctx->pc = 0x2F426Cu;
    // 0x2f426c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2F426Cu;
    SET_GPR_U32(ctx, 31, 0x2F4274u);
    ctx->pc = 0x2F4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F426Cu;
    // 0x2f4270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2F426Cu, 0x2F4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4274u;
label_2f4274:
    // 0x2f4274: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2f4274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2f4278:
    // 0x2f4278: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f4278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f427c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f427cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4280: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f4280u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f4284: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2f4284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f4288: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x2f4288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f428c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f4290: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2f4290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4294: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2f4294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4298: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x2f4298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f429c: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2f429cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2f42a0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2f42a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2f42a4: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2f42a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2f42a8: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x2f42a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2f42ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f42acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f42b0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f42b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f42b4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2f42b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f42b8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f42b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f42bc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f42bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f42c0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f42c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f42c4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f42c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2f42c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f42c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2f42cc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f42ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f42d0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f42d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f42d4: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x2f42d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f42d8: 0x460c6342  mul.s       $f13, $f12, $f12
    ctx->pc = 0x2f42d8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2f42dc: 0x460da341  sub.s       $f13, $f20, $f13
    ctx->pc = 0x2f42dcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[13]);
    // 0x2f42e0: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2f42e0u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f42e4: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2F42E4u;
    SET_GPR_U32(ctx, 31, 0x2F42ECu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F42E4u, 0x2F42ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F42ECu;
label_2f42ec:
    // 0x2f42ec: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x2f42ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2f42f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f42f4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2f42f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2f42f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f42f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f42fc: 0xc44096b4  lwc1        $f0, -0x694C($v0)
    ctx->pc = 0x2f42fcu;
    { uint32_t bits = FAST_READ32(0x3F96B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4300: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f4300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f4304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f4304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4308: 0x0  nop
    ctx->pc = 0x2f4308u;
    // NOP
    // 0x2f430c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2F430Cu;
    {
        const bool branch_taken_0x2f430c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F430Cu;
        // 0x2f4310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f430c) {
            ctx->pc = 0x2F4330u;
            goto label_2f4330;
        }
    }
    ctx->pc = 0x2F4314u;
    // 0x2f4314: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f4314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f4318: 0xc44096b8  lwc1        $f0, -0x6948($v0)
    ctx->pc = 0x2f4318u;
    { uint32_t bits = FAST_READ32(0x3F96B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f431c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f431cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f4320: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f4320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4324:
    // 0x2f4324: 0x0  nop
    ctx->pc = 0x2f4324u;
    // NOP
    // 0x2f4328: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4328u;
    {
        const bool branch_taken_0x2f4328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4328u;
        // 0x2f432c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4328) {
            ctx->pc = 0x2F4340u;
            goto label_2f4340;
        }
    }
    ctx->pc = 0x2F4330u;
label_2f4330:
    // 0x2f4330: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x2F4330u;
    SET_GPR_U32(ctx, 31, 0x2F4338u);
    ctx->pc = 0x2F4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4330u;
    // 0x2f4334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F4330u, 0x2F4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4338u;
label_2f4338:
    // 0x2f4338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4338u;
    {
        const bool branch_taken_0x2f4338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4338u;
        // 0x2f433c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4338) {
            ctx->pc = 0x2F4350u;
            goto label_2f4350;
        }
    }
    ctx->pc = 0x2F4340u;
label_2f4340:
    // 0x2f4340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4344:
    // 0x2f4344: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x2F4344u;
    SET_GPR_U32(ctx, 31, 0x2F434Cu);
    ctx->pc = 0x2F4348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4344u;
    // 0x2f4348: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F4344u, 0x2F434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F434Cu;
label_2f434c:
    // 0x2f434c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4350:
    // 0x2f4350: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x2f4350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2f4354:
    // 0x2f4354: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x2f4354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2f4358: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x2f4358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2f435c: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x2f435cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2f4360: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x2f4360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2f4364: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x2f4364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2f4368: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x2f4368u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2f436c: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x2f436cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2f4370: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x2f4370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2f4374: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x2f4374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f4378: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x2f4378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f437c: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x2f437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f4380: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4380u;
        // 0x2f4384: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4388u;
}
