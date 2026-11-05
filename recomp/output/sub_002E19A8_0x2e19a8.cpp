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

// Function: sub_002E19A8
// Address: 0x2e19a8 - 0x2e1bf0
void sub_002E19A8_0x2e19a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E19A8_0x2e19a8");
#endif

    switch (ctx->pc) {
        case 0x2e19a8u: goto label_2e19a8;
        case 0x2e19acu: goto label_2e19ac;
        case 0x2e19b0u: goto label_2e19b0;
        case 0x2e19b4u: goto label_2e19b4;
        case 0x2e19b8u: goto label_2e19b8;
        case 0x2e19bcu: goto label_2e19bc;
        case 0x2e19c0u: goto label_2e19c0;
        case 0x2e19c4u: goto label_2e19c4;
        case 0x2e19c8u: goto label_2e19c8;
        case 0x2e19ccu: goto label_2e19cc;
        case 0x2e19d0u: goto label_2e19d0;
        case 0x2e19d4u: goto label_2e19d4;
        case 0x2e19d8u: goto label_2e19d8;
        case 0x2e19dcu: goto label_2e19dc;
        case 0x2e19e0u: goto label_2e19e0;
        case 0x2e19e4u: goto label_2e19e4;
        case 0x2e19e8u: goto label_2e19e8;
        case 0x2e19ecu: goto label_2e19ec;
        case 0x2e19f0u: goto label_2e19f0;
        case 0x2e19f4u: goto label_2e19f4;
        case 0x2e19f8u: goto label_2e19f8;
        case 0x2e19fcu: goto label_2e19fc;
        case 0x2e1a00u: goto label_2e1a00;
        case 0x2e1a04u: goto label_2e1a04;
        case 0x2e1a08u: goto label_2e1a08;
        case 0x2e1a0cu: goto label_2e1a0c;
        case 0x2e1a10u: goto label_2e1a10;
        case 0x2e1a14u: goto label_2e1a14;
        case 0x2e1a18u: goto label_2e1a18;
        case 0x2e1a1cu: goto label_2e1a1c;
        case 0x2e1a20u: goto label_2e1a20;
        case 0x2e1a24u: goto label_2e1a24;
        case 0x2e1a28u: goto label_2e1a28;
        case 0x2e1a2cu: goto label_2e1a2c;
        case 0x2e1a30u: goto label_2e1a30;
        case 0x2e1a34u: goto label_2e1a34;
        case 0x2e1a38u: goto label_2e1a38;
        case 0x2e1a3cu: goto label_2e1a3c;
        case 0x2e1a40u: goto label_2e1a40;
        case 0x2e1a44u: goto label_2e1a44;
        case 0x2e1a48u: goto label_2e1a48;
        case 0x2e1a4cu: goto label_2e1a4c;
        case 0x2e1a50u: goto label_2e1a50;
        case 0x2e1a54u: goto label_2e1a54;
        case 0x2e1a58u: goto label_2e1a58;
        case 0x2e1a5cu: goto label_2e1a5c;
        case 0x2e1a60u: goto label_2e1a60;
        case 0x2e1a64u: goto label_2e1a64;
        case 0x2e1a68u: goto label_2e1a68;
        case 0x2e1a6cu: goto label_2e1a6c;
        case 0x2e1a70u: goto label_2e1a70;
        case 0x2e1a74u: goto label_2e1a74;
        case 0x2e1a78u: goto label_2e1a78;
        case 0x2e1a7cu: goto label_2e1a7c;
        case 0x2e1a80u: goto label_2e1a80;
        case 0x2e1a84u: goto label_2e1a84;
        case 0x2e1a88u: goto label_2e1a88;
        case 0x2e1a8cu: goto label_2e1a8c;
        case 0x2e1a90u: goto label_2e1a90;
        case 0x2e1a94u: goto label_2e1a94;
        case 0x2e1a98u: goto label_2e1a98;
        case 0x2e1a9cu: goto label_2e1a9c;
        case 0x2e1aa0u: goto label_2e1aa0;
        case 0x2e1aa4u: goto label_2e1aa4;
        case 0x2e1aa8u: goto label_2e1aa8;
        case 0x2e1aacu: goto label_2e1aac;
        case 0x2e1ab0u: goto label_2e1ab0;
        case 0x2e1ab4u: goto label_2e1ab4;
        case 0x2e1ab8u: goto label_2e1ab8;
        case 0x2e1abcu: goto label_2e1abc;
        case 0x2e1ac0u: goto label_2e1ac0;
        case 0x2e1ac4u: goto label_2e1ac4;
        case 0x2e1ac8u: goto label_2e1ac8;
        case 0x2e1accu: goto label_2e1acc;
        case 0x2e1ad0u: goto label_2e1ad0;
        case 0x2e1ad4u: goto label_2e1ad4;
        case 0x2e1ad8u: goto label_2e1ad8;
        case 0x2e1adcu: goto label_2e1adc;
        case 0x2e1ae0u: goto label_2e1ae0;
        case 0x2e1ae4u: goto label_2e1ae4;
        case 0x2e1ae8u: goto label_2e1ae8;
        case 0x2e1aecu: goto label_2e1aec;
        case 0x2e1af0u: goto label_2e1af0;
        case 0x2e1af4u: goto label_2e1af4;
        case 0x2e1af8u: goto label_2e1af8;
        case 0x2e1afcu: goto label_2e1afc;
        case 0x2e1b00u: goto label_2e1b00;
        case 0x2e1b04u: goto label_2e1b04;
        case 0x2e1b08u: goto label_2e1b08;
        case 0x2e1b0cu: goto label_2e1b0c;
        case 0x2e1b10u: goto label_2e1b10;
        case 0x2e1b14u: goto label_2e1b14;
        case 0x2e1b18u: goto label_2e1b18;
        case 0x2e1b1cu: goto label_2e1b1c;
        case 0x2e1b20u: goto label_2e1b20;
        case 0x2e1b24u: goto label_2e1b24;
        case 0x2e1b28u: goto label_2e1b28;
        case 0x2e1b2cu: goto label_2e1b2c;
        case 0x2e1b30u: goto label_2e1b30;
        case 0x2e1b34u: goto label_2e1b34;
        case 0x2e1b38u: goto label_2e1b38;
        case 0x2e1b3cu: goto label_2e1b3c;
        case 0x2e1b40u: goto label_2e1b40;
        case 0x2e1b44u: goto label_2e1b44;
        case 0x2e1b48u: goto label_2e1b48;
        case 0x2e1b4cu: goto label_2e1b4c;
        case 0x2e1b50u: goto label_2e1b50;
        case 0x2e1b54u: goto label_2e1b54;
        case 0x2e1b58u: goto label_2e1b58;
        case 0x2e1b5cu: goto label_2e1b5c;
        case 0x2e1b60u: goto label_2e1b60;
        case 0x2e1b64u: goto label_2e1b64;
        case 0x2e1b68u: goto label_2e1b68;
        case 0x2e1b6cu: goto label_2e1b6c;
        case 0x2e1b70u: goto label_2e1b70;
        case 0x2e1b74u: goto label_2e1b74;
        case 0x2e1b78u: goto label_2e1b78;
        case 0x2e1b7cu: goto label_2e1b7c;
        case 0x2e1b80u: goto label_2e1b80;
        case 0x2e1b84u: goto label_2e1b84;
        case 0x2e1b88u: goto label_2e1b88;
        case 0x2e1b8cu: goto label_2e1b8c;
        case 0x2e1b90u: goto label_2e1b90;
        case 0x2e1b94u: goto label_2e1b94;
        case 0x2e1b98u: goto label_2e1b98;
        case 0x2e1b9cu: goto label_2e1b9c;
        case 0x2e1ba0u: goto label_2e1ba0;
        case 0x2e1ba4u: goto label_2e1ba4;
        case 0x2e1ba8u: goto label_2e1ba8;
        case 0x2e1bacu: goto label_2e1bac;
        case 0x2e1bb0u: goto label_2e1bb0;
        case 0x2e1bb4u: goto label_2e1bb4;
        case 0x2e1bb8u: goto label_2e1bb8;
        case 0x2e1bbcu: goto label_2e1bbc;
        case 0x2e1bc0u: goto label_2e1bc0;
        case 0x2e1bc4u: goto label_2e1bc4;
        case 0x2e1bc8u: goto label_2e1bc8;
        case 0x2e1bccu: goto label_2e1bcc;
        case 0x2e1bd0u: goto label_2e1bd0;
        case 0x2e1bd4u: goto label_2e1bd4;
        case 0x2e1bd8u: goto label_2e1bd8;
        case 0x2e1bdcu: goto label_2e1bdc;
        case 0x2e1be0u: goto label_2e1be0;
        case 0x2e1be4u: goto label_2e1be4;
        case 0x2e1be8u: goto label_2e1be8;
        case 0x2e1becu: goto label_2e1bec;
        default: break;
    }

    ctx->pc = 0x2e19a8u;

label_2e19a8:
    // 0x2e19a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e19a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e19ac:
    // 0x2e19ac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2e19acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2e19b0:
    // 0x2e19b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2e19b4:
    // 0x2e19b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e19b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e19b8:
    // 0x2e19b8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2e19bc:
    // 0x2e19bc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2e19bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2e19c0:
    // 0x2e19c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e19c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2e19c4:
    // 0x2e19c4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2e19c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2e19c8:
    // 0x2e19c8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2e19cc:
    // 0x2e19cc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2e19d0:
    if (ctx->pc == 0x2E19D0u) {
        ctx->pc = 0x2E19D4u;
        goto label_2e19d4;
    }
    ctx->pc = 0x2E19CCu;
    {
        const bool branch_taken_0x2e19cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e19cc) {
            ctx->pc = 0x2E1AACu;
            goto label_2e1aac;
        }
    }
    ctx->pc = 0x2E19D4u;
label_2e19d4:
    // 0x2e19d4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2e19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e19d8:
    // 0x2e19d8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2e19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2e19dc:
    // 0x2e19dc: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_2e19e0:
    if (ctx->pc == 0x2E19E0u) {
        ctx->pc = 0x2E19E4u;
        goto label_2e19e4;
    }
    ctx->pc = 0x2E19DCu;
    {
        const bool branch_taken_0x2e19dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e19dc) {
            ctx->pc = 0x2E1AACu;
            goto label_2e1aac;
        }
    }
    ctx->pc = 0x2E19E4u;
label_2e19e4:
    // 0x2e19e4: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2e19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2e19e8:
    // 0x2e19e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e19ec:
    if (ctx->pc == 0x2E19ECu) {
        ctx->pc = 0x2E19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19E8u;
        // 0x2e19ec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E19F0u;
        goto label_2e19f0;
    }
    ctx->pc = 0x2E19E8u;
    {
        const bool branch_taken_0x2e19e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19E8u;
        // 0x2e19ec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19e8) {
            ctx->pc = 0x2E19F8u;
            goto label_2e19f8;
        }
    }
    ctx->pc = 0x2E19F0u;
label_2e19f0:
    // 0x2e19f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e19f4:
    if (ctx->pc == 0x2E19F4u) {
        ctx->pc = 0x2E19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19F0u;
        // 0x2e19f4: 0xc4422b30  lwc1        $f2, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E19F8u;
        goto label_2e19f8;
    }
    ctx->pc = 0x2E19F0u;
    {
        const bool branch_taken_0x2e19f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19F0u;
        // 0x2e19f4: 0xc4422b30  lwc1        $f2, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19f0) {
            ctx->pc = 0x2E1A04u;
            goto label_2e1a04;
        }
    }
    ctx->pc = 0x2E19F8u;
label_2e19f8:
    // 0x2e19f8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e19f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2e19fc:
    // 0x2e19fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e19fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e1a00:
    // 0x2e1a00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e1a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e1a04:
    // 0x2e1a04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e1a08:
    // 0x2e1a08: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2e1a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2e1a0c:
    // 0x2e1a0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e1a10:
    // 0x2e1a10: 0xc441b6a0  lwc1        $f1, -0x4960($v0)
    ctx->pc = 0x2e1a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1a14:
    // 0x2e1a14: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2e1a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e1a18:
    // 0x2e1a18: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e1a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e1a1c:
    // 0x2e1a1c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2e1a1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2e1a20:
    // 0x2e1a20: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x2e1a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1a24:
    // 0x2e1a24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2e1a28:
    // 0x2e1a28: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e1a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2e1a2c:
    // 0x2e1a2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e1a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e1a30:
    // 0x2e1a30: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e1a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2e1a34:
    // 0x2e1a34: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2e1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e1a38:
    // 0x2e1a38: 0x0  nop
    ctx->pc = 0x2e1a38u;
    // NOP
label_2e1a3c:
    // 0x2e1a3c: 0x0  nop
    ctx->pc = 0x2e1a3cu;
    // NOP
label_2e1a40:
    // 0x2e1a40: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2e1a40u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_2e1a44:
    // 0x2e1a44: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2e1a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e1a48:
    // 0x2e1a48: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2e1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2e1a4c:
    // 0x2e1a4c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e1a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2e1a50:
    // 0x2e1a50: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2e1a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1a54:
    // 0x2e1a54: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e1a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2e1a58:
    // 0x2e1a58: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e1a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1a5c:
    // 0x2e1a5c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e1a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2e1a60:
    // 0x2e1a60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e1a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1a64:
    // 0x2e1a64: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e1a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e1a68:
    // 0x2e1a68: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2e1a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1a6c:
    // 0x2e1a6c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2e1a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2e1a70:
    // 0x2e1a70: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2e1a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2e1a74:
    // 0x2e1a74: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2e1a74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1a78:
    // 0x2e1a78: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x2e1a78u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_2e1a7c:
    // 0x2e1a7c: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x2e1a7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_2e1a80:
    // 0x2e1a80: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x2e1a80u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_2e1a84:
    // 0x2e1a84: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e1a84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1a88:
    // 0x2e1a88: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e1a88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1a8c:
    // 0x2e1a8c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e1a8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e1a90:
    // 0x2e1a90: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x2e1a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e1a94:
    // 0x2e1a94: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2e1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2e1a98:
    // 0x2e1a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1a9c:
    // 0x2e1a9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e1a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e1aa0:
    // 0x2e1aa0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2e1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2e1aa4:
    // 0x2e1aa4: 0x40f809  jalr        $v0
label_2e1aa8:
    if (ctx->pc == 0x2E1AA8u) {
        ctx->pc = 0x2E1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AA4u;
        // 0x2e1aa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1AACu;
        goto label_2e1aac;
    }
    ctx->pc = 0x2E1AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1AACu);
        ctx->pc = 0x2E1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AA4u;
        // 0x2e1aa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1AA4u, 0x2E1AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1AACu;
label_2e1aac:
    // 0x2e1aac: 0xc0b7696  jal         func_2DDA58
label_2e1ab0:
    if (ctx->pc == 0x2E1AB0u) {
        ctx->pc = 0x2E1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AACu;
        // 0x2e1ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1AB4u;
        goto label_2e1ab4;
    }
    ctx->pc = 0x2E1AACu;
    SET_GPR_U32(ctx, 31, 0x2E1AB4u);
    ctx->pc = 0x2E1AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AACu;
    // 0x2e1ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA58u, 0x2E1AACu, 0x2E1AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AB4u;
label_2e1ab4:
    // 0x2e1ab4: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x2e1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_2e1ab8:
    // 0x2e1ab8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2e1ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1abc:
    // 0x2e1abc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2e1abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e1ac0:
    // 0x2e1ac0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2e1ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e1ac4:
    // 0x2e1ac4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e1ac4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2e1ac8:
    // 0x2e1ac8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e1ac8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2e1acc:
    // 0x2e1acc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2e1accu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2e1ad0:
    // 0x2e1ad0: 0x46010044  c1          0x10044
    ctx->pc = 0x2e1ad0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2e1ad4:
    // 0x2e1ad4: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x2e1ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1ad8:
    // 0x2e1ad8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e1ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1adc:
    // 0x2e1adc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1ae0:
    // 0x2e1ae0: 0x0  nop
    ctx->pc = 0x2e1ae0u;
    // NOP
label_2e1ae4:
    // 0x2e1ae4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2e1ae8:
    if (ctx->pc == 0x2E1AE8u) {
        ctx->pc = 0x2E1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AE4u;
        // 0x2e1ae8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1AECu;
        goto label_2e1aec;
    }
    ctx->pc = 0x2E1AE4u;
    {
        const bool branch_taken_0x2e1ae4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AE4u;
        // 0x2e1ae8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ae4) {
            ctx->pc = 0x2E1AF0u;
            goto label_2e1af0;
        }
    }
    ctx->pc = 0x2E1AECu;
label_2e1aec:
    // 0x2e1aec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e1aecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1af0:
    // 0x2e1af0: 0x1680002e  bnez        $s4, . + 4 + (0x2E << 2)
label_2e1af4:
    if (ctx->pc == 0x2E1AF4u) {
        ctx->pc = 0x2E1AF8u;
        goto label_2e1af8;
    }
    ctx->pc = 0x2E1AF0u;
    {
        const bool branch_taken_0x2e1af0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1af0) {
            ctx->pc = 0x2E1BACu;
            goto label_2e1bac;
        }
    }
    ctx->pc = 0x2E1AF8u;
label_2e1af8:
    // 0x2e1af8: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x2e1af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_2e1afc:
    // 0x2e1afc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2e1b00:
    if (ctx->pc == 0x2E1B00u) {
        ctx->pc = 0x2E1B04u;
        goto label_2e1b04;
    }
    ctx->pc = 0x2E1AFCu;
    {
        const bool branch_taken_0x2e1afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1afc) {
            ctx->pc = 0x2E1BACu;
            goto label_2e1bac;
        }
    }
    ctx->pc = 0x2E1B04u;
label_2e1b04:
    // 0x2e1b04: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2e1b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1b08:
    // 0x2e1b08: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2e1b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e1b0c:
    // 0x2e1b0c: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2e1b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e1b10:
    // 0x2e1b10: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e1b10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2e1b14:
    // 0x2e1b14: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e1b14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2e1b18:
    // 0x2e1b18: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2e1b18u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2e1b1c:
    // 0x2e1b1c: 0x46010044  c1          0x10044
    ctx->pc = 0x2e1b1cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2e1b20:
    // 0x2e1b20: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2e1b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1b24:
    // 0x2e1b24: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2e1b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e1b28:
    // 0x2e1b28: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2e1b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e1b2c:
    // 0x2e1b2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e1b2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2e1b30:
    // 0x2e1b30: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e1b30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2e1b34:
    // 0x2e1b34: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x2e1b34u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2e1b38:
    // 0x2e1b38: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2e1b38u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_2e1b3c:
    // 0x2e1b3c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2e1b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2e1b40:
    // 0x2e1b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e1b44:
    // 0x2e1b44: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x2e1b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e1b48:
    // 0x2e1b48: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2e1b48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2e1b4c:
    // 0x2e1b4c: 0xc0e3f5e  jal         func_38FD78
label_2e1b50:
    if (ctx->pc == 0x2E1B50u) {
        ctx->pc = 0x2E1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B4Cu;
        // 0x2e1b50: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1B54u;
        goto label_2e1b54;
    }
    ctx->pc = 0x2E1B4Cu;
    SET_GPR_U32(ctx, 31, 0x2E1B54u);
    ctx->pc = 0x2E1B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B4Cu;
    // 0x2e1b50: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2E1B4Cu, 0x2E1B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B54u;
label_2e1b54:
    // 0x2e1b54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1b54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2e1b58:
    // 0x2e1b58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2e1b58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e1b5c:
    // 0x2e1b5c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x2e1b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_2e1b60:
    // 0x2e1b60: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x2e1b60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_2e1b64:
    // 0x2e1b64: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
label_2e1b68:
    if (ctx->pc == 0x2E1B68u) {
        ctx->pc = 0x2E1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B64u;
        // 0x2e1b68: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1B6Cu;
        goto label_2e1b6c;
    }
    ctx->pc = 0x2E1B64u;
    {
        const bool branch_taken_0x2e1b64 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2E1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B64u;
        // 0x2e1b68: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b64) {
            ctx->pc = 0x2E1BACu;
            goto label_2e1bac;
        }
    }
    ctx->pc = 0x2E1B6Cu;
label_2e1b6c:
    // 0x2e1b6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1b70:
    // 0x2e1b70: 0x24427ee0  addiu       $v0, $v0, 0x7EE0
    ctx->pc = 0x2e1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
label_2e1b74:
    // 0x2e1b74: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2e1b74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_2e1b78:
    // 0x2e1b78: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x2e1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_2e1b7c:
    // 0x2e1b7c: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x2e1b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_2e1b80:
    // 0x2e1b80: 0x84640054  lh          $a0, 0x54($v1)
    ctx->pc = 0x2e1b80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 84)));
label_2e1b84:
    // 0x2e1b84: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2e1b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2e1b88:
    // 0x2e1b88: 0xc0c3566  jal         func_30D598
label_2e1b8c:
    if (ctx->pc == 0x2E1B8Cu) {
        ctx->pc = 0x2E1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B88u;
        // 0x2e1b8c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1B90u;
        goto label_2e1b90;
    }
    ctx->pc = 0x2E1B88u;
    SET_GPR_U32(ctx, 31, 0x2E1B90u);
    ctx->pc = 0x2E1B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B88u;
    // 0x2e1b8c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D598u, 0x2E1B88u, 0x2E1B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B90u;
label_2e1b90:
    // 0x2e1b90: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e1b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1b94:
    // 0x2e1b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1b98:
    // 0x2e1b98: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e1b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1b9c:
    // 0x2e1b9c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2e1b9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e1ba0:
    // 0x2e1ba0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2e1ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e1ba4:
    // 0x2e1ba4: 0xc07f66a  jal         func_1FD9A8
label_2e1ba8:
    if (ctx->pc == 0x2E1BA8u) {
        ctx->pc = 0x2E1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BA4u;
        // 0x2e1ba8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1BACu;
        goto label_2e1bac;
    }
    ctx->pc = 0x2E1BA4u;
    SET_GPR_U32(ctx, 31, 0x2E1BACu);
    ctx->pc = 0x2E1BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BA4u;
    // 0x2e1ba8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9A8u, 0x2E1BA4u, 0x2E1BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BACu;
label_2e1bac:
    // 0x2e1bac: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2e1bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1bb0:
    // 0x2e1bb0: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2e1bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e1bb4:
    // 0x2e1bb4: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2e1bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e1bb8:
    // 0x2e1bb8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e1bb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2e1bbc:
    // 0x2e1bbc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e1bbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2e1bc0:
    // 0x2e1bc0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2e1bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2e1bc4:
    // 0x2e1bc4: 0x46000004  c1          0x4
    ctx->pc = 0x2e1bc4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2e1bc8:
    // 0x2e1bc8: 0xae340100  sw          $s4, 0x100($s1)
    ctx->pc = 0x2e1bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 20));
label_2e1bcc:
    // 0x2e1bcc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2e1bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_2e1bd0:
    // 0x2e1bd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e1bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e1bd4:
    // 0x2e1bd4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2e1bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2e1bd8:
    // 0x2e1bd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e1bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e1bdc:
    // 0x2e1bdc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2e1bdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2e1be0:
    // 0x2e1be0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e1be0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e1be4:
    // 0x2e1be4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2e1be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2e1be8:
    // 0x2e1be8: 0x3e00008  jr          $ra
label_2e1bec:
    if (ctx->pc == 0x2E1BECu) {
        ctx->pc = 0x2E1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BE8u;
        // 0x2e1bec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1BF0u;
        goto label_fallthrough_0x2e1be8;
    }
    ctx->pc = 0x2E1BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BE8u;
        // 0x2e1bec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e1be8:
    ctx->pc = 0x2E1BF0u;
}
