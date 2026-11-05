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

// Function: sub_001D3AA8
// Address: 0x1d3aa8 - 0x1d3c70
void sub_001D3AA8_0x1d3aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3AA8_0x1d3aa8");
#endif

    switch (ctx->pc) {
        case 0x1d3aa8u: goto label_1d3aa8;
        case 0x1d3aacu: goto label_1d3aac;
        case 0x1d3ab0u: goto label_1d3ab0;
        case 0x1d3ab4u: goto label_1d3ab4;
        case 0x1d3ab8u: goto label_1d3ab8;
        case 0x1d3abcu: goto label_1d3abc;
        case 0x1d3ac0u: goto label_1d3ac0;
        case 0x1d3ac4u: goto label_1d3ac4;
        case 0x1d3ac8u: goto label_1d3ac8;
        case 0x1d3accu: goto label_1d3acc;
        case 0x1d3ad0u: goto label_1d3ad0;
        case 0x1d3ad4u: goto label_1d3ad4;
        case 0x1d3ad8u: goto label_1d3ad8;
        case 0x1d3adcu: goto label_1d3adc;
        case 0x1d3ae0u: goto label_1d3ae0;
        case 0x1d3ae4u: goto label_1d3ae4;
        case 0x1d3ae8u: goto label_1d3ae8;
        case 0x1d3aecu: goto label_1d3aec;
        case 0x1d3af0u: goto label_1d3af0;
        case 0x1d3af4u: goto label_1d3af4;
        case 0x1d3af8u: goto label_1d3af8;
        case 0x1d3afcu: goto label_1d3afc;
        case 0x1d3b00u: goto label_1d3b00;
        case 0x1d3b04u: goto label_1d3b04;
        case 0x1d3b08u: goto label_1d3b08;
        case 0x1d3b0cu: goto label_1d3b0c;
        case 0x1d3b10u: goto label_1d3b10;
        case 0x1d3b14u: goto label_1d3b14;
        case 0x1d3b18u: goto label_1d3b18;
        case 0x1d3b1cu: goto label_1d3b1c;
        case 0x1d3b20u: goto label_1d3b20;
        case 0x1d3b24u: goto label_1d3b24;
        case 0x1d3b28u: goto label_1d3b28;
        case 0x1d3b2cu: goto label_1d3b2c;
        case 0x1d3b30u: goto label_1d3b30;
        case 0x1d3b34u: goto label_1d3b34;
        case 0x1d3b38u: goto label_1d3b38;
        case 0x1d3b3cu: goto label_1d3b3c;
        case 0x1d3b40u: goto label_1d3b40;
        case 0x1d3b44u: goto label_1d3b44;
        case 0x1d3b48u: goto label_1d3b48;
        case 0x1d3b4cu: goto label_1d3b4c;
        case 0x1d3b50u: goto label_1d3b50;
        case 0x1d3b54u: goto label_1d3b54;
        case 0x1d3b58u: goto label_1d3b58;
        case 0x1d3b5cu: goto label_1d3b5c;
        case 0x1d3b60u: goto label_1d3b60;
        case 0x1d3b64u: goto label_1d3b64;
        case 0x1d3b68u: goto label_1d3b68;
        case 0x1d3b6cu: goto label_1d3b6c;
        case 0x1d3b70u: goto label_1d3b70;
        case 0x1d3b74u: goto label_1d3b74;
        case 0x1d3b78u: goto label_1d3b78;
        case 0x1d3b7cu: goto label_1d3b7c;
        case 0x1d3b80u: goto label_1d3b80;
        case 0x1d3b84u: goto label_1d3b84;
        case 0x1d3b88u: goto label_1d3b88;
        case 0x1d3b8cu: goto label_1d3b8c;
        case 0x1d3b90u: goto label_1d3b90;
        case 0x1d3b94u: goto label_1d3b94;
        case 0x1d3b98u: goto label_1d3b98;
        case 0x1d3b9cu: goto label_1d3b9c;
        case 0x1d3ba0u: goto label_1d3ba0;
        case 0x1d3ba4u: goto label_1d3ba4;
        case 0x1d3ba8u: goto label_1d3ba8;
        case 0x1d3bacu: goto label_1d3bac;
        case 0x1d3bb0u: goto label_1d3bb0;
        case 0x1d3bb4u: goto label_1d3bb4;
        case 0x1d3bb8u: goto label_1d3bb8;
        case 0x1d3bbcu: goto label_1d3bbc;
        case 0x1d3bc0u: goto label_1d3bc0;
        case 0x1d3bc4u: goto label_1d3bc4;
        case 0x1d3bc8u: goto label_1d3bc8;
        case 0x1d3bccu: goto label_1d3bcc;
        case 0x1d3bd0u: goto label_1d3bd0;
        case 0x1d3bd4u: goto label_1d3bd4;
        case 0x1d3bd8u: goto label_1d3bd8;
        case 0x1d3bdcu: goto label_1d3bdc;
        case 0x1d3be0u: goto label_1d3be0;
        case 0x1d3be4u: goto label_1d3be4;
        case 0x1d3be8u: goto label_1d3be8;
        case 0x1d3becu: goto label_1d3bec;
        case 0x1d3bf0u: goto label_1d3bf0;
        case 0x1d3bf4u: goto label_1d3bf4;
        case 0x1d3bf8u: goto label_1d3bf8;
        case 0x1d3bfcu: goto label_1d3bfc;
        case 0x1d3c00u: goto label_1d3c00;
        case 0x1d3c04u: goto label_1d3c04;
        case 0x1d3c08u: goto label_1d3c08;
        case 0x1d3c0cu: goto label_1d3c0c;
        case 0x1d3c10u: goto label_1d3c10;
        case 0x1d3c14u: goto label_1d3c14;
        case 0x1d3c18u: goto label_1d3c18;
        case 0x1d3c1cu: goto label_1d3c1c;
        case 0x1d3c20u: goto label_1d3c20;
        case 0x1d3c24u: goto label_1d3c24;
        case 0x1d3c28u: goto label_1d3c28;
        case 0x1d3c2cu: goto label_1d3c2c;
        case 0x1d3c30u: goto label_1d3c30;
        case 0x1d3c34u: goto label_1d3c34;
        case 0x1d3c38u: goto label_1d3c38;
        case 0x1d3c3cu: goto label_1d3c3c;
        case 0x1d3c40u: goto label_1d3c40;
        case 0x1d3c44u: goto label_1d3c44;
        case 0x1d3c48u: goto label_1d3c48;
        case 0x1d3c4cu: goto label_1d3c4c;
        case 0x1d3c50u: goto label_1d3c50;
        case 0x1d3c54u: goto label_1d3c54;
        case 0x1d3c58u: goto label_1d3c58;
        case 0x1d3c5cu: goto label_1d3c5c;
        case 0x1d3c60u: goto label_1d3c60;
        case 0x1d3c64u: goto label_1d3c64;
        case 0x1d3c68u: goto label_1d3c68;
        case 0x1d3c6cu: goto label_1d3c6c;
        default: break;
    }

    ctx->pc = 0x1d3aa8u;

label_1d3aa8:
    // 0x1d3aa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d3aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d3aac:
    // 0x1d3aac: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1d3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
label_1d3ab0:
    // 0x1d3ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d3ab4:
    // 0x1d3ab4: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x1d3ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
label_1d3ab8:
    // 0x1d3ab8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d3abc:
    // 0x1d3abc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d3abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3ac0:
    // 0x1d3ac0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d3ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d3ac4:
    // 0x1d3ac4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d3ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3ac8:
    // 0x1d3ac8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d3ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1d3acc:
    // 0x1d3acc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d3accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1d3ad0:
    // 0x1d3ad0: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x1d3ad0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_1d3ad4:
    // 0x1d3ad4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1d3ad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1d3ad8:
    // 0x1d3ad8: 0x3c170049  lui         $s7, 0x49
    ctx->pc = 0x1d3ad8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)73 << 16));
label_1d3adc:
    // 0x1d3adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d3ae0:
    // 0x1d3ae0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d3ae0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1d3ae4:
    // 0x1d3ae4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1d3ae8:
    // 0x1d3ae8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d3ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1d3aec:
    // 0x1d3aec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d3aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d3af0:
    // 0x1d3af0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1d3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d3af4:
    // 0x1d3af4: 0x41b82  srl         $v1, $a0, 14
    ctx->pc = 0x1d3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 14));
label_1d3af8:
    // 0x1d3af8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d3af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1d3afc:
    // 0x1d3afc: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1d3afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_1d3b00:
    // 0x1d3b00: 0x49b82  srl         $s3, $a0, 14
    ctx->pc = 0x1d3b00u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 4), 14));
label_1d3b04:
    // 0x1d3b04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d3b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d3b08:
    // 0x1d3b08: 0x32737fff  andi        $s3, $s3, 0x7FFF
    ctx->pc = 0x1d3b08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32767);
label_1d3b0c:
    // 0x1d3b0c: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1d3b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_1d3b10:
    // 0x1d3b10: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_1d3b14:
    // 0x1d3b14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d3b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d3b18:
    // 0x1d3b18: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
label_1d3b1c:
    if (ctx->pc == 0x1D3B1Cu) {
        ctx->pc = 0x1D3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B18u;
        // 0x1d3b1c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B20u;
        goto label_1d3b20;
    }
    ctx->pc = 0x1D3B18u;
    {
        const bool branch_taken_0x1d3b18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B18u;
        // 0x1d3b1c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b18) {
            ctx->pc = 0x1D3B88u;
            goto label_1d3b88;
        }
    }
    ctx->pc = 0x1D3B20u;
label_1d3b20:
    // 0x1d3b20: 0x26f4f290  addiu       $s4, $s7, -0xD70
    ctx->pc = 0x1d3b20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963856));
label_1d3b24:
    // 0x1d3b24: 0x26d58e90  addiu       $s5, $s6, -0x7170
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938256));
label_1d3b28:
    // 0x1d3b28: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1d3b28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d3b2c:
    // 0x1d3b2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d3b30:
    // 0x1d3b30: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1d3b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1d3b34:
    // 0x1d3b34: 0x101f42  srl         $v1, $s0, 29
    ctx->pc = 0x1d3b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d3b38:
    // 0x1d3b38: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d3b38u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d3b3c:
    // 0x1d3b3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d3b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d3b40:
    // 0x1d3b40: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d3b40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d3b44:
    // 0x1d3b44: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1d3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1d3b48:
    // 0x1d3b48: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d3b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d3b4c:
    // 0x1d3b4c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d3b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d3b50:
    // 0x1d3b50: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d3b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d3b54:
    // 0x1d3b54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3b58:
    // 0x1d3b58: 0xe0f809  jalr        $a3
label_1d3b5c:
    if (ctx->pc == 0x1D3B5Cu) {
        ctx->pc = 0x1D3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B58u;
        // 0x1d3b5c: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B60u;
        goto label_1d3b60;
    }
    ctx->pc = 0x1D3B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D3B60u);
        ctx->pc = 0x1D3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B58u;
        // 0x1d3b5c: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3B58u, 0x1D3B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3B60u;
label_1d3b60:
    // 0x1d3b60: 0x230802a  slt         $s0, $s1, $s0
    ctx->pc = 0x1d3b60u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d3b64:
    // 0x1d3b64: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
label_1d3b68:
    if (ctx->pc == 0x1D3B68u) {
        ctx->pc = 0x1D3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B64u;
        // 0x1d3b68: 0xc6800020  lwc1        $f0, 0x20($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B6Cu;
        goto label_1d3b6c;
    }
    ctx->pc = 0x1D3B64u;
    {
        const bool branch_taken_0x1d3b64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b64) {
            ctx->pc = 0x1D3B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3B64u;
            // 0x1d3b68: 0xc6800020  lwc1        $f0, 0x20($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3B78u;
            goto label_1d3b78;
        }
    }
    ctx->pc = 0x1D3B6Cu;
label_1d3b6c:
    // 0x1d3b6c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1d3b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3b70:
    // 0x1d3b70: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1d3b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1d3b74:
    // 0x1d3b74: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1d3b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3b78:
    // 0x1d3b78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d3b7c:
    // 0x1d3b7c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1d3b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1d3b80:
    // 0x1d3b80: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1d3b84:
    if (ctx->pc == 0x1D3B84u) {
        ctx->pc = 0x1D3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B80u;
        // 0x1d3b84: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B88u;
        goto label_1d3b88;
    }
    ctx->pc = 0x1D3B80u;
    {
        const bool branch_taken_0x1d3b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B80u;
        // 0x1d3b84: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b80) {
            ctx->pc = 0x1D3B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3b28;
        }
    }
    ctx->pc = 0x1D3B88u;
label_1d3b88:
    // 0x1d3b88: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1d3b88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d3b8c:
    // 0x1d3b8c: 0x26c38e90  addiu       $v1, $s6, -0x7170
    ctx->pc = 0x1d3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938256));
label_1d3b90:
    // 0x1d3b90: 0x2671ffff  addiu       $s1, $s3, -0x1
    ctx->pc = 0x1d3b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1d3b94:
    // 0x1d3b94: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1d3b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1d3b98:
    // 0x1d3b98: 0x101742  srl         $v0, $s0, 29
    ctx->pc = 0x1d3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d3b9c:
    // 0x1d3b9c: 0x26f3f290  addiu       $s3, $s7, -0xD70
    ctx->pc = 0x1d3b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963856));
label_1d3ba0:
    // 0x1d3ba0: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d3ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d3ba4:
    // 0x1d3ba4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d3ba8:
    // 0x1d3ba8: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d3ba8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d3bac:
    // 0x1d3bac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d3bb0:
    // 0x1d3bb0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d3bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d3bb4:
    // 0x1d3bb4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d3bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d3bb8:
    // 0x1d3bb8: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1d3bb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d3bbc:
    // 0x1d3bbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3bc0:
    // 0x1d3bc0: 0x223280a  movz        $a1, $s1, $v1
    ctx->pc = 0x1d3bc0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_1d3bc4:
    // 0x1d3bc4: 0xe0f809  jalr        $a3
label_1d3bc8:
    if (ctx->pc == 0x1D3BC8u) {
        ctx->pc = 0x1D3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BC4u;
        // 0x1d3bc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3BCCu;
        goto label_1d3bcc;
    }
    ctx->pc = 0x1D3BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D3BCCu);
        ctx->pc = 0x1D3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BC4u;
        // 0x1d3bc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3BC4u, 0x1D3BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3BCCu;
label_1d3bcc:
    // 0x1d3bcc: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d3bccu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d3bd0:
    // 0x1d3bd0: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
label_1d3bd4:
    if (ctx->pc == 0x1D3BD4u) {
        ctx->pc = 0x1D3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BD0u;
        // 0x1d3bd4: 0xc6600020  lwc1        $f0, 0x20($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3BD8u;
        goto label_1d3bd8;
    }
    ctx->pc = 0x1D3BD0u;
    {
        const bool branch_taken_0x1d3bd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3bd0) {
            ctx->pc = 0x1D3BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3BD0u;
            // 0x1d3bd4: 0xc6600020  lwc1        $f0, 0x20($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3BE4u;
            goto label_1d3be4;
        }
    }
    ctx->pc = 0x1D3BD8u;
label_1d3bd8:
    // 0x1d3bd8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1d3bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3bdc:
    // 0x1d3bdc: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1d3bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1d3be0:
    // 0x1d3be0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1d3be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3be4:
    // 0x1d3be4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d3be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3be8:
    // 0x1d3be8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1d3be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1d3bec:
    // 0x1d3bec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d3becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3bf0:
    // 0x1d3bf0: 0x0  nop
    ctx->pc = 0x1d3bf0u;
    // NOP
label_1d3bf4:
    // 0x1d3bf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1d3bf8:
    if (ctx->pc == 0x1D3BF8u) {
        ctx->pc = 0x1D3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BF4u;
        // 0x1d3bf8: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3BFCu;
        goto label_1d3bfc;
    }
    ctx->pc = 0x1D3BF4u;
    {
        const bool branch_taken_0x1d3bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BF4u;
        // 0x1d3bf8: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3bf4) {
            ctx->pc = 0x1D3C10u;
            goto label_1d3c10;
        }
    }
    ctx->pc = 0x1D3BFCu;
label_1d3bfc:
    // 0x1d3bfc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1d3bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1d3c00:
    // 0x1d3c00: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d3c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1d3c04:
    // 0x1d3c04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d3c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3c08:
    // 0x1d3c08: 0x0  nop
    ctx->pc = 0x1d3c08u;
    // NOP
label_1d3c0c:
    // 0x1d3c0c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1d3c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1d3c10:
    // 0x1d3c10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1d3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d3c14:
    // 0x1d3c14: 0x3c03e000  lui         $v1, 0xE000
    ctx->pc = 0x1d3c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57344 << 16));
label_1d3c18:
    // 0x1d3c18: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x1d3c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
label_1d3c1c:
    // 0x1d3c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3c20:
    // 0x1d3c20: 0x41382  srl         $v0, $a0, 14
    ctx->pc = 0x1d3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 14));
label_1d3c24:
    // 0x1d3c24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d3c28:
    // 0x1d3c28: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d3c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1d3c2c:
    // 0x1d3c2c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1d3c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d3c30:
    // 0x1d3c30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d3c34:
    // 0x1d3c34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d3c34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d3c38:
    // 0x1d3c38: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d3c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1d3c3c:
    // 0x1d3c3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d3c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3c40:
    // 0x1d3c40: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x1d3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
label_1d3c44:
    // 0x1d3c44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d3c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d3c48:
    // 0x1d3c48: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1d3c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1d3c4c:
    // 0x1d3c4c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d3c4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d3c50:
    // 0x1d3c50: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1d3c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_1d3c54:
    // 0x1d3c54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3c58:
    // 0x1d3c58: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d3c58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3c5c:
    // 0x1d3c5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d3c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d3c60:
    // 0x1d3c60: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1d3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d3c64:
    // 0x1d3c64: 0x3e00008  jr          $ra
label_1d3c68:
    if (ctx->pc == 0x1D3C68u) {
        ctx->pc = 0x1D3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C64u;
        // 0x1d3c68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C6Cu;
        goto label_1d3c6c;
    }
    ctx->pc = 0x1D3C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C64u;
        // 0x1d3c68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3C6Cu;
label_1d3c6c:
    // 0x1d3c6c: 0x0  nop
    ctx->pc = 0x1d3c6cu;
    // NOP
    ctx->pc = 0x1d3c70u;
}
