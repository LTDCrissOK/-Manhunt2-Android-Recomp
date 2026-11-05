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

// Function: sub_003249F0
// Address: 0x3249f0 - 0x324b38
void sub_003249F0_0x3249f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003249F0_0x3249f0");
#endif

    switch (ctx->pc) {
        case 0x3249f0u: goto label_3249f0;
        case 0x3249f4u: goto label_3249f4;
        case 0x3249f8u: goto label_3249f8;
        case 0x3249fcu: goto label_3249fc;
        case 0x324a00u: goto label_324a00;
        case 0x324a04u: goto label_324a04;
        case 0x324a08u: goto label_324a08;
        case 0x324a0cu: goto label_324a0c;
        case 0x324a10u: goto label_324a10;
        case 0x324a14u: goto label_324a14;
        case 0x324a18u: goto label_324a18;
        case 0x324a1cu: goto label_324a1c;
        case 0x324a20u: goto label_324a20;
        case 0x324a24u: goto label_324a24;
        case 0x324a28u: goto label_324a28;
        case 0x324a2cu: goto label_324a2c;
        case 0x324a30u: goto label_324a30;
        case 0x324a34u: goto label_324a34;
        case 0x324a38u: goto label_324a38;
        case 0x324a3cu: goto label_324a3c;
        case 0x324a40u: goto label_324a40;
        case 0x324a44u: goto label_324a44;
        case 0x324a48u: goto label_324a48;
        case 0x324a4cu: goto label_324a4c;
        case 0x324a50u: goto label_324a50;
        case 0x324a54u: goto label_324a54;
        case 0x324a58u: goto label_324a58;
        case 0x324a5cu: goto label_324a5c;
        case 0x324a60u: goto label_324a60;
        case 0x324a64u: goto label_324a64;
        case 0x324a68u: goto label_324a68;
        case 0x324a6cu: goto label_324a6c;
        case 0x324a70u: goto label_324a70;
        case 0x324a74u: goto label_324a74;
        case 0x324a78u: goto label_324a78;
        case 0x324a7cu: goto label_324a7c;
        case 0x324a80u: goto label_324a80;
        case 0x324a84u: goto label_324a84;
        case 0x324a88u: goto label_324a88;
        case 0x324a8cu: goto label_324a8c;
        case 0x324a90u: goto label_324a90;
        case 0x324a94u: goto label_324a94;
        case 0x324a98u: goto label_324a98;
        case 0x324a9cu: goto label_324a9c;
        case 0x324aa0u: goto label_324aa0;
        case 0x324aa4u: goto label_324aa4;
        case 0x324aa8u: goto label_324aa8;
        case 0x324aacu: goto label_324aac;
        case 0x324ab0u: goto label_324ab0;
        case 0x324ab4u: goto label_324ab4;
        case 0x324ab8u: goto label_324ab8;
        case 0x324abcu: goto label_324abc;
        case 0x324ac0u: goto label_324ac0;
        case 0x324ac4u: goto label_324ac4;
        case 0x324ac8u: goto label_324ac8;
        case 0x324accu: goto label_324acc;
        case 0x324ad0u: goto label_324ad0;
        case 0x324ad4u: goto label_324ad4;
        case 0x324ad8u: goto label_324ad8;
        case 0x324adcu: goto label_324adc;
        case 0x324ae0u: goto label_324ae0;
        case 0x324ae4u: goto label_324ae4;
        case 0x324ae8u: goto label_324ae8;
        case 0x324aecu: goto label_324aec;
        case 0x324af0u: goto label_324af0;
        case 0x324af4u: goto label_324af4;
        case 0x324af8u: goto label_324af8;
        case 0x324afcu: goto label_324afc;
        case 0x324b00u: goto label_324b00;
        case 0x324b04u: goto label_324b04;
        case 0x324b08u: goto label_324b08;
        case 0x324b0cu: goto label_324b0c;
        case 0x324b10u: goto label_324b10;
        case 0x324b14u: goto label_324b14;
        case 0x324b18u: goto label_324b18;
        case 0x324b1cu: goto label_324b1c;
        case 0x324b20u: goto label_324b20;
        case 0x324b24u: goto label_324b24;
        case 0x324b28u: goto label_324b28;
        case 0x324b2cu: goto label_324b2c;
        case 0x324b30u: goto label_324b30;
        case 0x324b34u: goto label_324b34;
        default: break;
    }

    ctx->pc = 0x3249f0u;

label_3249f0:
    // 0x3249f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3249f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3249f4:
    // 0x3249f4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3249f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_3249f8:
    // 0x3249f8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x3249f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_3249fc:
    // 0x3249fc: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3249fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_324a00:
    // 0x324a00: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x324a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_324a04:
    // 0x324a04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x324a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_324a08:
    // 0x324a08: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x324a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_324a0c:
    // 0x324a0c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x324a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_324a10:
    // 0x324a10: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x324a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_324a14:
    // 0x324a14: 0x26540010  addiu       $s4, $s2, 0x10
    ctx->pc = 0x324a14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_324a18:
    // 0x324a18: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x324a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_324a1c:
    // 0x324a1c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x324a1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_324a20:
    // 0x324a20: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x324a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_324a24:
    // 0x324a24: 0x24160299  addiu       $s6, $zero, 0x299
    ctx->pc = 0x324a24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_324a28:
    // 0x324a28: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x324a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_324a2c:
    // 0x324a2c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x324a2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_324a30:
    // 0x324a30: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x324a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_324a34:
    // 0x324a34: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x324a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_324a38:
    // 0x324a38: 0xc6540020  lwc1        $f20, 0x20($s2)
    ctx->pc = 0x324a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_324a3c:
    // 0x324a3c: 0x0  nop
    ctx->pc = 0x324a3cu;
    // NOP
label_324a40:
    // 0x324a40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x324a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_324a44:
    // 0x324a44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x324a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324a48:
    // 0x324a48: 0x2e3102a  slt         $v0, $s7, $v1
    ctx->pc = 0x324a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_324a4c:
    // 0x324a4c: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x324a4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_324a50:
    // 0x324a50: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_324a54:
    if (ctx->pc == 0x324A54u) {
        ctx->pc = 0x324A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A50u;
        // 0x324a54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A58u;
        goto label_324a58;
    }
    ctx->pc = 0x324A50u;
    {
        const bool branch_taken_0x324a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x324A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A50u;
        // 0x324a54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a50) {
            ctx->pc = 0x324A84u;
            goto label_324a84;
        }
    }
    ctx->pc = 0x324A58u;
label_324a58:
    // 0x324a58: 0xc0c9240  jal         func_324900
label_324a5c:
    if (ctx->pc == 0x324A5Cu) {
        ctx->pc = 0x324A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A58u;
        // 0x324a5c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A60u;
        goto label_324a60;
    }
    ctx->pc = 0x324A58u;
    SET_GPR_U32(ctx, 31, 0x324A60u);
    ctx->pc = 0x324A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A58u;
    // 0x324a5c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324900u, 0x324A58u, 0x324A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324A60u;
label_324a60:
    // 0x324a60: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_324a64:
    if (ctx->pc == 0x324A64u) {
        ctx->pc = 0x324A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A60u;
        // 0x324a64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A68u;
        goto label_324a68;
    }
    ctx->pc = 0x324A60u;
    {
        const bool branch_taken_0x324a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A60u;
        // 0x324a64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a60) {
            ctx->pc = 0x324AF4u;
            goto label_324af4;
        }
    }
    ctx->pc = 0x324A68u;
label_324a68:
    // 0x324a68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_324a6c:
    // 0x324a6c: 0x2a0f809  jalr        $s5
label_324a70:
    if (ctx->pc == 0x324A70u) {
        ctx->pc = 0x324A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A6Cu;
        // 0x324a70: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A74u;
        goto label_324a74;
    }
    ctx->pc = 0x324A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x324A74u);
        ctx->pc = 0x324A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A6Cu;
        // 0x324a70: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324A6Cu, 0x324A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324A74u;
label_324a74:
    // 0x324a74: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_324a78:
    if (ctx->pc == 0x324A78u) {
        ctx->pc = 0x324A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A74u;
        // 0x324a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A7Cu;
        goto label_324a7c;
    }
    ctx->pc = 0x324A74u;
    {
        const bool branch_taken_0x324a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A74u;
        // 0x324a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a74) {
            ctx->pc = 0x324AF4u;
            goto label_324af4;
        }
    }
    ctx->pc = 0x324A7Cu;
label_324a7c:
    // 0x324a7c: 0x10000023  b           . + 4 + (0x23 << 2)
label_324a80:
    if (ctx->pc == 0x324A80u) {
        ctx->pc = 0x324A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A7Cu;
        // 0x324a80: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A84u;
        goto label_324a84;
    }
    ctx->pc = 0x324A7Cu;
    {
        const bool branch_taken_0x324a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A7Cu;
        // 0x324a80: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a7c) {
            ctx->pc = 0x324B0Cu;
            goto label_324b0c;
        }
    }
    ctx->pc = 0x324A84u;
label_324a84:
    // 0x324a84: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x324a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_324a88:
    // 0x324a88: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x324a88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_324a8c:
    // 0x324a8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x324a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_324a90:
    // 0x324a90: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x324a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_324a94:
    // 0x324a94: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x324a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_324a98:
    // 0x324a98: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x324a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_324a9c:
    // 0x324a9c: 0x46141001  sub.s       $f0, $f2, $f20
    ctx->pc = 0x324a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_324aa0:
    // 0x324aa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x324aa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_324aa4:
    // 0x324aa4: 0x0  nop
    ctx->pc = 0x324aa4u;
    // NOP
label_324aa8:
    // 0x324aa8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_324aac:
    if (ctx->pc == 0x324AACu) {
        ctx->pc = 0x324AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AA8u;
        // 0x324aac: 0x46141040  add.s       $f1, $f2, $f20 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324AB0u;
        goto label_324ab0;
    }
    ctx->pc = 0x324AA8u;
    {
        const bool branch_taken_0x324aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x324AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AA8u;
        // 0x324aac: 0x46141040  add.s       $f1, $f2, $f20 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324aa8) {
            ctx->pc = 0x324AD8u;
            goto label_324ad8;
        }
    }
    ctx->pc = 0x324AB0u;
label_324ab0:
    // 0x324ab0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x324ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_324ab4:
    // 0x324ab4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x324ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_324ab8:
    // 0x324ab8: 0x0  nop
    ctx->pc = 0x324ab8u;
    // NOP
label_324abc:
    // 0x324abc: 0x4502ffe0  bc1fl       . + 4 + (-0x20 << 2)
label_324ac0:
    if (ctx->pc == 0x324AC0u) {
        ctx->pc = 0x324AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324ABCu;
        // 0x324ac0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324AC4u;
        goto label_324ac4;
    }
    ctx->pc = 0x324ABCu;
    {
        const bool branch_taken_0x324abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x324abc) {
            ctx->pc = 0x324AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324ABCu;
            // 0x324ac0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324a40;
        }
    }
    ctx->pc = 0x324AC4u;
label_324ac4:
    // 0x324ac4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x324ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_324ac8:
    // 0x324ac8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x324ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_324acc:
    // 0x324acc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x324accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_324ad0:
    // 0x324ad0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_324ad4:
    if (ctx->pc == 0x324AD4u) {
        ctx->pc = 0x324AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AD0u;
        // 0x324ad4: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324AD8u;
        goto label_324ad8;
    }
    ctx->pc = 0x324AD0u;
    {
        const bool branch_taken_0x324ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AD0u;
        // 0x324ad4: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ad0) {
            ctx->pc = 0x324A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324a40;
        }
    }
    ctx->pc = 0x324AD8u;
label_324ad8:
    // 0x324ad8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x324ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_324adc:
    // 0x324adc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x324adcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_324ae0:
    // 0x324ae0: 0x0  nop
    ctx->pc = 0x324ae0u;
    // NOP
label_324ae4:
    // 0x324ae4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_324ae8:
    if (ctx->pc == 0x324AE8u) {
        ctx->pc = 0x324AECu;
        goto label_324aec;
    }
    ctx->pc = 0x324AE4u;
    {
        const bool branch_taken_0x324ae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x324ae4) {
            ctx->pc = 0x324AF4u;
            goto label_324af4;
        }
    }
    ctx->pc = 0x324AECu;
label_324aec:
    // 0x324aec: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
label_324af0:
    if (ctx->pc == 0x324AF0u) {
        ctx->pc = 0x324AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AECu;
        // 0x324af0: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324AF4u;
        goto label_324af4;
    }
    ctx->pc = 0x324AECu;
    {
        const bool branch_taken_0x324aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AECu;
        // 0x324af0: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324aec) {
            ctx->pc = 0x324A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324a40;
        }
    }
    ctx->pc = 0x324AF4u;
label_324af4:
    // 0x324af4: 0x123d0003  beq         $s1, $sp, . + 4 + (0x3 << 2)
label_324af8:
    if (ctx->pc == 0x324AF8u) {
        ctx->pc = 0x324AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AF4u;
        // 0x324af8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324AFCu;
        goto label_324afc;
    }
    ctx->pc = 0x324AF4u;
    {
        const bool branch_taken_0x324af4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x324AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AF4u;
        // 0x324af8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324af4) {
            ctx->pc = 0x324B04u;
            goto label_324b04;
        }
    }
    ctx->pc = 0x324AFCu;
label_324afc:
    // 0x324afc: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
label_324b00:
    if (ctx->pc == 0x324B00u) {
        ctx->pc = 0x324B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AFCu;
        // 0x324b00: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324B04u;
        goto label_324b04;
    }
    ctx->pc = 0x324AFCu;
    {
        const bool branch_taken_0x324afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AFCu;
        // 0x324b00: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324afc) {
            ctx->pc = 0x324A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324a40;
        }
    }
    ctx->pc = 0x324B04u;
label_324b04:
    // 0x324b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_324b08:
    // 0x324b08: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x324b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_324b0c:
    // 0x324b0c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x324b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_324b10:
    // 0x324b10: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x324b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_324b14:
    // 0x324b14: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x324b14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_324b18:
    // 0x324b18: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x324b18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_324b1c:
    // 0x324b1c: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x324b1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_324b20:
    // 0x324b20: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x324b20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_324b24:
    // 0x324b24: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x324b24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_324b28:
    // 0x324b28: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x324b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_324b2c:
    // 0x324b2c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x324b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_324b30:
    // 0x324b30: 0x3e00008  jr          $ra
label_324b34:
    if (ctx->pc == 0x324B34u) {
        ctx->pc = 0x324B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B30u;
        // 0x324b34: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324B38u;
        goto label_fallthrough_0x324b30;
    }
    ctx->pc = 0x324B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B30u;
        // 0x324b34: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x324b30:
    ctx->pc = 0x324B38u;
}
