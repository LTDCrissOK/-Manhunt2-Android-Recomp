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

// Function: sub_001D29F0
// Address: 0x1d29f0 - 0x1d2d78
void sub_001D29F0_0x1d29f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D29F0_0x1d29f0");
#endif

    switch (ctx->pc) {
        case 0x1d29f0u: goto label_1d29f0;
        case 0x1d29f4u: goto label_1d29f4;
        case 0x1d29f8u: goto label_1d29f8;
        case 0x1d29fcu: goto label_1d29fc;
        case 0x1d2a00u: goto label_1d2a00;
        case 0x1d2a04u: goto label_1d2a04;
        case 0x1d2a08u: goto label_1d2a08;
        case 0x1d2a0cu: goto label_1d2a0c;
        case 0x1d2a10u: goto label_1d2a10;
        case 0x1d2a14u: goto label_1d2a14;
        case 0x1d2a18u: goto label_1d2a18;
        case 0x1d2a1cu: goto label_1d2a1c;
        case 0x1d2a20u: goto label_1d2a20;
        case 0x1d2a24u: goto label_1d2a24;
        case 0x1d2a28u: goto label_1d2a28;
        case 0x1d2a2cu: goto label_1d2a2c;
        case 0x1d2a30u: goto label_1d2a30;
        case 0x1d2a34u: goto label_1d2a34;
        case 0x1d2a38u: goto label_1d2a38;
        case 0x1d2a3cu: goto label_1d2a3c;
        case 0x1d2a40u: goto label_1d2a40;
        case 0x1d2a44u: goto label_1d2a44;
        case 0x1d2a48u: goto label_1d2a48;
        case 0x1d2a4cu: goto label_1d2a4c;
        case 0x1d2a50u: goto label_1d2a50;
        case 0x1d2a54u: goto label_1d2a54;
        case 0x1d2a58u: goto label_1d2a58;
        case 0x1d2a5cu: goto label_1d2a5c;
        case 0x1d2a60u: goto label_1d2a60;
        case 0x1d2a64u: goto label_1d2a64;
        case 0x1d2a68u: goto label_1d2a68;
        case 0x1d2a6cu: goto label_1d2a6c;
        case 0x1d2a70u: goto label_1d2a70;
        case 0x1d2a74u: goto label_1d2a74;
        case 0x1d2a78u: goto label_1d2a78;
        case 0x1d2a7cu: goto label_1d2a7c;
        case 0x1d2a80u: goto label_1d2a80;
        case 0x1d2a84u: goto label_1d2a84;
        case 0x1d2a88u: goto label_1d2a88;
        case 0x1d2a8cu: goto label_1d2a8c;
        case 0x1d2a90u: goto label_1d2a90;
        case 0x1d2a94u: goto label_1d2a94;
        case 0x1d2a98u: goto label_1d2a98;
        case 0x1d2a9cu: goto label_1d2a9c;
        case 0x1d2aa0u: goto label_1d2aa0;
        case 0x1d2aa4u: goto label_1d2aa4;
        case 0x1d2aa8u: goto label_1d2aa8;
        case 0x1d2aacu: goto label_1d2aac;
        case 0x1d2ab0u: goto label_1d2ab0;
        case 0x1d2ab4u: goto label_1d2ab4;
        case 0x1d2ab8u: goto label_1d2ab8;
        case 0x1d2abcu: goto label_1d2abc;
        case 0x1d2ac0u: goto label_1d2ac0;
        case 0x1d2ac4u: goto label_1d2ac4;
        case 0x1d2ac8u: goto label_1d2ac8;
        case 0x1d2accu: goto label_1d2acc;
        case 0x1d2ad0u: goto label_1d2ad0;
        case 0x1d2ad4u: goto label_1d2ad4;
        case 0x1d2ad8u: goto label_1d2ad8;
        case 0x1d2adcu: goto label_1d2adc;
        case 0x1d2ae0u: goto label_1d2ae0;
        case 0x1d2ae4u: goto label_1d2ae4;
        case 0x1d2ae8u: goto label_1d2ae8;
        case 0x1d2aecu: goto label_1d2aec;
        case 0x1d2af0u: goto label_1d2af0;
        case 0x1d2af4u: goto label_1d2af4;
        case 0x1d2af8u: goto label_1d2af8;
        case 0x1d2afcu: goto label_1d2afc;
        case 0x1d2b00u: goto label_1d2b00;
        case 0x1d2b04u: goto label_1d2b04;
        case 0x1d2b08u: goto label_1d2b08;
        case 0x1d2b0cu: goto label_1d2b0c;
        case 0x1d2b10u: goto label_1d2b10;
        case 0x1d2b14u: goto label_1d2b14;
        case 0x1d2b18u: goto label_1d2b18;
        case 0x1d2b1cu: goto label_1d2b1c;
        case 0x1d2b20u: goto label_1d2b20;
        case 0x1d2b24u: goto label_1d2b24;
        case 0x1d2b28u: goto label_1d2b28;
        case 0x1d2b2cu: goto label_1d2b2c;
        case 0x1d2b30u: goto label_1d2b30;
        case 0x1d2b34u: goto label_1d2b34;
        case 0x1d2b38u: goto label_1d2b38;
        case 0x1d2b3cu: goto label_1d2b3c;
        case 0x1d2b40u: goto label_1d2b40;
        case 0x1d2b44u: goto label_1d2b44;
        case 0x1d2b48u: goto label_1d2b48;
        case 0x1d2b4cu: goto label_1d2b4c;
        case 0x1d2b50u: goto label_1d2b50;
        case 0x1d2b54u: goto label_1d2b54;
        case 0x1d2b58u: goto label_1d2b58;
        case 0x1d2b5cu: goto label_1d2b5c;
        case 0x1d2b60u: goto label_1d2b60;
        case 0x1d2b64u: goto label_1d2b64;
        case 0x1d2b68u: goto label_1d2b68;
        case 0x1d2b6cu: goto label_1d2b6c;
        case 0x1d2b70u: goto label_1d2b70;
        case 0x1d2b74u: goto label_1d2b74;
        case 0x1d2b78u: goto label_1d2b78;
        case 0x1d2b7cu: goto label_1d2b7c;
        case 0x1d2b80u: goto label_1d2b80;
        case 0x1d2b84u: goto label_1d2b84;
        case 0x1d2b88u: goto label_1d2b88;
        case 0x1d2b8cu: goto label_1d2b8c;
        case 0x1d2b90u: goto label_1d2b90;
        case 0x1d2b94u: goto label_1d2b94;
        case 0x1d2b98u: goto label_1d2b98;
        case 0x1d2b9cu: goto label_1d2b9c;
        case 0x1d2ba0u: goto label_1d2ba0;
        case 0x1d2ba4u: goto label_1d2ba4;
        case 0x1d2ba8u: goto label_1d2ba8;
        case 0x1d2bacu: goto label_1d2bac;
        case 0x1d2bb0u: goto label_1d2bb0;
        case 0x1d2bb4u: goto label_1d2bb4;
        case 0x1d2bb8u: goto label_1d2bb8;
        case 0x1d2bbcu: goto label_1d2bbc;
        case 0x1d2bc0u: goto label_1d2bc0;
        case 0x1d2bc4u: goto label_1d2bc4;
        case 0x1d2bc8u: goto label_1d2bc8;
        case 0x1d2bccu: goto label_1d2bcc;
        case 0x1d2bd0u: goto label_1d2bd0;
        case 0x1d2bd4u: goto label_1d2bd4;
        case 0x1d2bd8u: goto label_1d2bd8;
        case 0x1d2bdcu: goto label_1d2bdc;
        case 0x1d2be0u: goto label_1d2be0;
        case 0x1d2be4u: goto label_1d2be4;
        case 0x1d2be8u: goto label_1d2be8;
        case 0x1d2becu: goto label_1d2bec;
        case 0x1d2bf0u: goto label_1d2bf0;
        case 0x1d2bf4u: goto label_1d2bf4;
        case 0x1d2bf8u: goto label_1d2bf8;
        case 0x1d2bfcu: goto label_1d2bfc;
        case 0x1d2c00u: goto label_1d2c00;
        case 0x1d2c04u: goto label_1d2c04;
        case 0x1d2c08u: goto label_1d2c08;
        case 0x1d2c0cu: goto label_1d2c0c;
        case 0x1d2c10u: goto label_1d2c10;
        case 0x1d2c14u: goto label_1d2c14;
        case 0x1d2c18u: goto label_1d2c18;
        case 0x1d2c1cu: goto label_1d2c1c;
        case 0x1d2c20u: goto label_1d2c20;
        case 0x1d2c24u: goto label_1d2c24;
        case 0x1d2c28u: goto label_1d2c28;
        case 0x1d2c2cu: goto label_1d2c2c;
        case 0x1d2c30u: goto label_1d2c30;
        case 0x1d2c34u: goto label_1d2c34;
        case 0x1d2c38u: goto label_1d2c38;
        case 0x1d2c3cu: goto label_1d2c3c;
        case 0x1d2c40u: goto label_1d2c40;
        case 0x1d2c44u: goto label_1d2c44;
        case 0x1d2c48u: goto label_1d2c48;
        case 0x1d2c4cu: goto label_1d2c4c;
        case 0x1d2c50u: goto label_1d2c50;
        case 0x1d2c54u: goto label_1d2c54;
        case 0x1d2c58u: goto label_1d2c58;
        case 0x1d2c5cu: goto label_1d2c5c;
        case 0x1d2c60u: goto label_1d2c60;
        case 0x1d2c64u: goto label_1d2c64;
        case 0x1d2c68u: goto label_1d2c68;
        case 0x1d2c6cu: goto label_1d2c6c;
        case 0x1d2c70u: goto label_1d2c70;
        case 0x1d2c74u: goto label_1d2c74;
        case 0x1d2c78u: goto label_1d2c78;
        case 0x1d2c7cu: goto label_1d2c7c;
        case 0x1d2c80u: goto label_1d2c80;
        case 0x1d2c84u: goto label_1d2c84;
        case 0x1d2c88u: goto label_1d2c88;
        case 0x1d2c8cu: goto label_1d2c8c;
        case 0x1d2c90u: goto label_1d2c90;
        case 0x1d2c94u: goto label_1d2c94;
        case 0x1d2c98u: goto label_1d2c98;
        case 0x1d2c9cu: goto label_1d2c9c;
        case 0x1d2ca0u: goto label_1d2ca0;
        case 0x1d2ca4u: goto label_1d2ca4;
        case 0x1d2ca8u: goto label_1d2ca8;
        case 0x1d2cacu: goto label_1d2cac;
        case 0x1d2cb0u: goto label_1d2cb0;
        case 0x1d2cb4u: goto label_1d2cb4;
        case 0x1d2cb8u: goto label_1d2cb8;
        case 0x1d2cbcu: goto label_1d2cbc;
        case 0x1d2cc0u: goto label_1d2cc0;
        case 0x1d2cc4u: goto label_1d2cc4;
        case 0x1d2cc8u: goto label_1d2cc8;
        case 0x1d2cccu: goto label_1d2ccc;
        case 0x1d2cd0u: goto label_1d2cd0;
        case 0x1d2cd4u: goto label_1d2cd4;
        case 0x1d2cd8u: goto label_1d2cd8;
        case 0x1d2cdcu: goto label_1d2cdc;
        case 0x1d2ce0u: goto label_1d2ce0;
        case 0x1d2ce4u: goto label_1d2ce4;
        case 0x1d2ce8u: goto label_1d2ce8;
        case 0x1d2cecu: goto label_1d2cec;
        case 0x1d2cf0u: goto label_1d2cf0;
        case 0x1d2cf4u: goto label_1d2cf4;
        case 0x1d2cf8u: goto label_1d2cf8;
        case 0x1d2cfcu: goto label_1d2cfc;
        case 0x1d2d00u: goto label_1d2d00;
        case 0x1d2d04u: goto label_1d2d04;
        case 0x1d2d08u: goto label_1d2d08;
        case 0x1d2d0cu: goto label_1d2d0c;
        case 0x1d2d10u: goto label_1d2d10;
        case 0x1d2d14u: goto label_1d2d14;
        case 0x1d2d18u: goto label_1d2d18;
        case 0x1d2d1cu: goto label_1d2d1c;
        case 0x1d2d20u: goto label_1d2d20;
        case 0x1d2d24u: goto label_1d2d24;
        case 0x1d2d28u: goto label_1d2d28;
        case 0x1d2d2cu: goto label_1d2d2c;
        case 0x1d2d30u: goto label_1d2d30;
        case 0x1d2d34u: goto label_1d2d34;
        case 0x1d2d38u: goto label_1d2d38;
        case 0x1d2d3cu: goto label_1d2d3c;
        case 0x1d2d40u: goto label_1d2d40;
        case 0x1d2d44u: goto label_1d2d44;
        case 0x1d2d48u: goto label_1d2d48;
        case 0x1d2d4cu: goto label_1d2d4c;
        case 0x1d2d50u: goto label_1d2d50;
        case 0x1d2d54u: goto label_1d2d54;
        case 0x1d2d58u: goto label_1d2d58;
        case 0x1d2d5cu: goto label_1d2d5c;
        case 0x1d2d60u: goto label_1d2d60;
        case 0x1d2d64u: goto label_1d2d64;
        case 0x1d2d68u: goto label_1d2d68;
        case 0x1d2d6cu: goto label_1d2d6c;
        case 0x1d2d70u: goto label_1d2d70;
        case 0x1d2d74u: goto label_1d2d74;
        default: break;
    }

    ctx->pc = 0x1d29f0u;

label_1d29f0:
    // 0x1d29f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d29f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d29f4:
    // 0x1d29f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d29f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d29f8:
    // 0x1d29f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d29f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d29fc:
    // 0x1d29fc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1d29fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1d2a00:
    // 0x1d2a00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d2a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a04:
    // 0x1d2a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d2a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d2a08:
    // 0x1d2a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d2a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d2a0c:
    // 0x1d2a0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d2a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d2a10:
    // 0x1d2a10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d2a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1d2a14:
    // 0x1d2a14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d2a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1d2a18:
    // 0x1d2a18: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d2a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1d2a1c:
    // 0x1d2a1c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d2a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1d2a20:
    // 0x1d2a20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d2a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d2a24:
    // 0x1d2a24: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1d2a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1d2a28:
    // 0x1d2a28: 0xa6400076  sh          $zero, 0x76($s2)
    ctx->pc = 0x1d2a28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 118), (uint16_t)GPR_U32(ctx, 0));
label_1d2a2c:
    // 0x1d2a2c: 0x86420074  lh          $v0, 0x74($s2)
    ctx->pc = 0x1d2a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2a30:
    // 0x1d2a30: 0xa6400074  sh          $zero, 0x74($s2)
    ctx->pc = 0x1d2a30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 0));
label_1d2a34:
    // 0x1d2a34: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x1d2a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d2a38:
    // 0x1d2a38: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1d2a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1d2a3c:
    // 0x1d2a3c: 0x0  nop
    ctx->pc = 0x1d2a3cu;
    // NOP
label_1d2a40:
    // 0x1d2a40: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1d2a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_1d2a44:
    // 0x1d2a44: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x1d2a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1d2a48:
    // 0x1d2a48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2a4c:
    // 0x1d2a4c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x1d2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
label_1d2a50:
    // 0x1d2a50: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d2a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1d2a54:
    // 0x1d2a54: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
label_1d2a58:
    if (ctx->pc == 0x1D2A58u) {
        ctx->pc = 0x1D2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A54u;
        // 0x1d2a58: 0xc494001c  lwc1        $f20, 0x1C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A5Cu;
        goto label_1d2a5c;
    }
    ctx->pc = 0x1D2A54u;
    {
        const bool branch_taken_0x1d2a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A54u;
        // 0x1d2a58: 0xc494001c  lwc1        $f20, 0x1C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a54) {
            ctx->pc = 0x1D2A60u;
            goto label_1d2a60;
        }
    }
    ctx->pc = 0x1D2A5Cu;
label_1d2a5c:
    // 0x1d2a5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2a60:
    // 0x1d2a60: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1d2a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d2a64:
    // 0x1d2a64: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_1d2a68:
    if (ctx->pc == 0x1D2A68u) {
        ctx->pc = 0x1D2A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A64u;
        // 0x1d2a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A6Cu;
        goto label_1d2a6c;
    }
    ctx->pc = 0x1D2A64u;
    {
        const bool branch_taken_0x1d2a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A64u;
        // 0x1d2a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a64) {
            ctx->pc = 0x1D2C74u;
            goto label_1d2c74;
        }
    }
    ctx->pc = 0x1D2A6Cu;
label_1d2a6c:
    // 0x1d2a6c: 0x96510074  lhu         $s1, 0x74($s2)
    ctx->pc = 0x1d2a6cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2a70:
    // 0x1d2a70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1d2a74:
    // 0x1d2a74: 0x8e530094  lw          $s3, 0x94($s2)
    ctx->pc = 0x1d2a74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d2a78:
    // 0x1d2a78: 0x24558e90  addiu       $s5, $v0, -0x7170
    ctx->pc = 0x1d2a78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
label_1d2a7c:
    // 0x1d2a7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d2a80:
    // 0x1d2a80: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1d2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1d2a84:
    // 0x1d2a84: 0xa6510074  sh          $s1, 0x74($s2)
    ctx->pc = 0x1d2a84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 17));
label_1d2a88:
    // 0x1d2a88: 0x2454f290  addiu       $s4, $v0, -0xD70
    ctx->pc = 0x1d2a88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963856));
label_1d2a8c:
    // 0x1d2a8c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d2a8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a90:
    // 0x1d2a90: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x1d2a90u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_1d2a94:
    // 0x1d2a94: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d2a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d2a98:
    // 0x1d2a98: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x1d2a98u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
label_1d2a9c:
    // 0x1d2a9c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1d2a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d2aa0:
    // 0x1d2aa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d2aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d2aa4:
    // 0x1d2aa4: 0x101742  srl         $v0, $s0, 29
    ctx->pc = 0x1d2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d2aa8:
    // 0x1d2aa8: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d2aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d2aac:
    // 0x1d2aac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d2ab0:
    // 0x1d2ab0: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d2ab0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d2ab4:
    // 0x1d2ab4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1d2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d2ab8:
    // 0x1d2ab8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d2abc:
    // 0x1d2abc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d2abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2ac0:
    // 0x1d2ac0: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1d2ac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d2ac4:
    // 0x1d2ac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ac8:
    // 0x1d2ac8: 0xe0f809  jalr        $a3
label_1d2acc:
    if (ctx->pc == 0x1D2ACCu) {
        ctx->pc = 0x1D2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AC8u;
        // 0x1d2acc: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2AD0u;
        goto label_1d2ad0;
    }
    ctx->pc = 0x1D2AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D2AD0u);
        ctx->pc = 0x1D2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AC8u;
        // 0x1d2acc: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2AC8u, 0x1D2AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2AD0u;
label_1d2ad0:
    // 0x1d2ad0: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d2ad0u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d2ad4:
    // 0x1d2ad4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1d2ad8:
    if (ctx->pc == 0x1D2AD8u) {
        ctx->pc = 0x1D2AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AD4u;
        // 0x1d2ad8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2ADCu;
        goto label_1d2adc;
    }
    ctx->pc = 0x1D2AD4u;
    {
        const bool branch_taken_0x1d2ad4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AD4u;
        // 0x1d2ad8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ad4) {
            ctx->pc = 0x1D2AE4u;
            goto label_1d2ae4;
        }
    }
    ctx->pc = 0x1D2ADCu;
label_1d2adc:
    // 0x1d2adc: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d2adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2ae0:
    // 0x1d2ae0: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1d2ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1d2ae4:
    // 0x1d2ae4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1d2ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2ae8:
    // 0x1d2ae8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1d2ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2aec:
    // 0x1d2aec: 0x0  nop
    ctx->pc = 0x1d2aecu;
    // NOP
label_1d2af0:
    // 0x1d2af0: 0x4500007a  bc1f        . + 4 + (0x7A << 2)
label_1d2af4:
    if (ctx->pc == 0x1D2AF4u) {
        ctx->pc = 0x1D2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AF0u;
        // 0x1d2af4: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2AF8u;
        goto label_1d2af8;
    }
    ctx->pc = 0x1D2AF0u;
    {
        const bool branch_taken_0x1d2af0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AF0u;
        // 0x1d2af4: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2af0) {
            ctx->pc = 0x1D2CDCu;
            goto label_1d2cdc;
        }
    }
    ctx->pc = 0x1D2AF8u;
label_1d2af8:
    // 0x1d2af8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1d2af8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2afc:
    // 0x1d2afc: 0x96420074  lhu         $v0, 0x74($s2)
    ctx->pc = 0x1d2afcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2b00:
    // 0x1d2b00: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1d2b00u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1d2b04:
    // 0x1d2b04: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1d2b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d2b08:
    // 0x1d2b08: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1d2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d2b0c:
    // 0x1d2b0c: 0xa6420076  sh          $v0, 0x76($s2)
    ctx->pc = 0x1d2b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 118), (uint16_t)GPR_U32(ctx, 2));
label_1d2b10:
    // 0x1d2b10: 0xa6430074  sh          $v1, 0x74($s2)
    ctx->pc = 0x1d2b10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 3));
label_1d2b14:
    // 0x1d2b14: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1d2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1d2b18:
    // 0x1d2b18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2b1c:
    // 0x1d2b1c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x1d2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
label_1d2b20:
    // 0x1d2b20: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d2b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1d2b24:
    // 0x1d2b24: 0x14550002  bne         $v0, $s5, . + 4 + (0x2 << 2)
label_1d2b28:
    if (ctx->pc == 0x1D2B28u) {
        ctx->pc = 0x1D2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B24u;
        // 0x1d2b28: 0x31c03  sra         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2B2Cu;
        goto label_1d2b2c;
    }
    ctx->pc = 0x1D2B24u;
    {
        const bool branch_taken_0x1d2b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1D2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B24u;
        // 0x1d2b28: 0x31c03  sra         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b24) {
            ctx->pc = 0x1D2B30u;
            goto label_1d2b30;
        }
    }
    ctx->pc = 0x1D2B2Cu;
label_1d2b2c:
    // 0x1d2b2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2b30:
    // 0x1d2b30: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d2b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d2b34:
    // 0x1d2b34: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_1d2b38:
    if (ctx->pc == 0x1D2B38u) {
        ctx->pc = 0x1D2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B34u;
        // 0x1d2b38: 0x8e530094  lw          $s3, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2B3Cu;
        goto label_1d2b3c;
    }
    ctx->pc = 0x1D2B34u;
    {
        const bool branch_taken_0x1d2b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2b34) {
            ctx->pc = 0x1D2B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2B34u;
            // 0x1d2b38: 0x8e530094  lw          $s3, 0x94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2C04u;
            goto label_1d2c04;
        }
    }
    ctx->pc = 0x1D2B3Cu;
label_1d2b3c:
    // 0x1d2b3c: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x1d2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1d2b40:
    // 0x1d2b40: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1d2b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_1d2b44:
    // 0x1d2b44: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d2b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1d2b48:
    // 0x1d2b48: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_1d2b4c:
    if (ctx->pc == 0x1D2B4Cu) {
        ctx->pc = 0x1D2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B48u;
        // 0x1d2b4c: 0xa6400076  sh          $zero, 0x76($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 118), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2B50u;
        goto label_1d2b50;
    }
    ctx->pc = 0x1D2B48u;
    {
        const bool branch_taken_0x1d2b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2b48) {
            ctx->pc = 0x1D2B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2B48u;
            // 0x1d2b4c: 0xa6400076  sh          $zero, 0x76($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 118), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2BFCu;
            goto label_1d2bfc;
        }
    }
    ctx->pc = 0x1D2B50u;
label_1d2b50:
    // 0x1d2b50: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x1d2b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d2b54:
    // 0x1d2b54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2b58:
    // 0x1d2b58: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x1d2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
label_1d2b5c:
    // 0x1d2b5c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d2b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1d2b60:
    // 0x1d2b60: 0x10550002  beq         $v0, $s5, . + 4 + (0x2 << 2)
label_1d2b64:
    if (ctx->pc == 0x1D2B64u) {
        ctx->pc = 0x1D2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B60u;
        // 0x1d2b64: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2B68u;
        goto label_1d2b68;
    }
    ctx->pc = 0x1D2B60u;
    {
        const bool branch_taken_0x1d2b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1D2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B60u;
        // 0x1d2b64: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b60) {
            ctx->pc = 0x1D2B6Cu;
            goto label_1d2b6c;
        }
    }
    ctx->pc = 0x1D2B68u;
label_1d2b68:
    // 0x1d2b68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d2b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b6c:
    // 0x1d2b6c: 0x2623fffe  addiu       $v1, $s1, -0x2
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_1d2b70:
    // 0x1d2b70: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x1d2b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
label_1d2b74:
    // 0x1d2b74: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d2b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1d2b78:
    // 0x1d2b78: 0xa6430076  sh          $v1, 0x76($s2)
    ctx->pc = 0x1d2b78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 118), (uint16_t)GPR_U32(ctx, 3));
label_1d2b7c:
    // 0x1d2b7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2b80:
    // 0x1d2b80: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1d2b84:
    if (ctx->pc == 0x1D2B84u) {
        ctx->pc = 0x1D2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B80u;
        // 0x1d2b84: 0xa6510074  sh          $s1, 0x74($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2B88u;
        goto label_1d2b88;
    }
    ctx->pc = 0x1D2B80u;
    {
        const bool branch_taken_0x1d2b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B80u;
        // 0x1d2b84: 0xa6510074  sh          $s1, 0x74($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b80) {
            ctx->pc = 0x1D2BE8u;
            goto label_1d2be8;
        }
    }
    ctx->pc = 0x1D2B88u;
label_1d2b88:
    // 0x1d2b88: 0x8e530094  lw          $s3, 0x94($s2)
    ctx->pc = 0x1d2b88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d2b8c:
    // 0x1d2b8c: 0x26f4f290  addiu       $s4, $s7, -0xD70
    ctx->pc = 0x1d2b8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963856));
label_1d2b90:
    // 0x1d2b90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d2b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d2b94:
    // 0x1d2b94: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d2b94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d2b98:
    // 0x1d2b98: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1d2b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d2b9c:
    // 0x1d2b9c: 0x101f42  srl         $v1, $s0, 29
    ctx->pc = 0x1d2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d2ba0:
    // 0x1d2ba0: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d2ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d2ba4:
    // 0x1d2ba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d2ba8:
    // 0x1d2ba8: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d2ba8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d2bac:
    // 0x1d2bac: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x1d2bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1d2bb0:
    // 0x1d2bb0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d2bb4:
    // 0x1d2bb4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d2bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2bb8:
    // 0x1d2bb8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d2bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d2bbc:
    // 0x1d2bbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2bc0:
    // 0x1d2bc0: 0xe0f809  jalr        $a3
label_1d2bc4:
    if (ctx->pc == 0x1D2BC4u) {
        ctx->pc = 0x1D2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BC0u;
        // 0x1d2bc4: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2BC8u;
        goto label_1d2bc8;
    }
    ctx->pc = 0x1D2BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D2BC8u);
        ctx->pc = 0x1D2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BC0u;
        // 0x1d2bc4: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2BC0u, 0x1D2BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2BC8u;
label_1d2bc8:
    // 0x1d2bc8: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d2bc8u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d2bcc:
    // 0x1d2bcc: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
label_1d2bd0:
    if (ctx->pc == 0x1D2BD0u) {
        ctx->pc = 0x1D2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BCCu;
        // 0x1d2bd0: 0xc6800020  lwc1        $f0, 0x20($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2BD4u;
        goto label_1d2bd4;
    }
    ctx->pc = 0x1D2BCCu;
    {
        const bool branch_taken_0x1d2bcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2bcc) {
            ctx->pc = 0x1D2BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2BCCu;
            // 0x1d2bd0: 0xc6800020  lwc1        $f0, 0x20($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2BE0u;
            goto label_1d2be0;
        }
    }
    ctx->pc = 0x1D2BD4u;
label_1d2bd4:
    // 0x1d2bd4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d2bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2bd8:
    // 0x1d2bd8: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1d2bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1d2bdc:
    // 0x1d2bdc: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1d2bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2be0:
    // 0x1d2be0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d2be4:
    if (ctx->pc == 0x1D2BE4u) {
        ctx->pc = 0x1D2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BE0u;
        // 0x1d2be4: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2BE8u;
        goto label_1d2be8;
    }
    ctx->pc = 0x1D2BE0u;
    {
        const bool branch_taken_0x1d2be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BE0u;
        // 0x1d2be4: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2be0) {
            ctx->pc = 0x1D2BECu;
            goto label_1d2bec;
        }
    }
    ctx->pc = 0x1D2BE8u;
label_1d2be8:
    // 0x1d2be8: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x1d2be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_1d2bec:
    // 0x1d2bec: 0xc074c12  jal         func_1D3048
label_1d2bf0:
    if (ctx->pc == 0x1D2BF0u) {
        ctx->pc = 0x1D2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BECu;
        // 0x1d2bf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2BF4u;
        goto label_1d2bf4;
    }
    ctx->pc = 0x1D2BECu;
    SET_GPR_U32(ctx, 31, 0x1D2BF4u);
    ctx->pc = 0x1D2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2BECu;
    // 0x1d2bf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3048u, 0x1D2BECu, 0x1D2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BF4u;
label_1d2bf4:
    // 0x1d2bf4: 0x10000053  b           . + 4 + (0x53 << 2)
label_1d2bf8:
    if (ctx->pc == 0x1D2BF8u) {
        ctx->pc = 0x1D2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BF4u;
        // 0x1d2bf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2BFCu;
        goto label_1d2bfc;
    }
    ctx->pc = 0x1D2BF4u;
    {
        const bool branch_taken_0x1d2bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BF4u;
        // 0x1d2bf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bf4) {
            ctx->pc = 0x1D2D44u;
            goto label_1d2d44;
        }
    }
    ctx->pc = 0x1D2BFCu;
label_1d2bfc:
    // 0x1d2bfc: 0xa6400074  sh          $zero, 0x74($s2)
    ctx->pc = 0x1d2bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 0));
label_1d2c00:
    // 0x1d2c00: 0x8e530094  lw          $s3, 0x94($s2)
    ctx->pc = 0x1d2c00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d2c04:
    // 0x1d2c04: 0x26f4f290  addiu       $s4, $s7, -0xD70
    ctx->pc = 0x1d2c04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963856));
label_1d2c08:
    // 0x1d2c08: 0x86510074  lh          $s1, 0x74($s2)
    ctx->pc = 0x1d2c08u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2c0c:
    // 0x1d2c0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d2c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d2c10:
    // 0x1d2c10: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d2c10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d2c14:
    // 0x1d2c14: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1d2c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d2c18:
    // 0x1d2c18: 0x101f42  srl         $v1, $s0, 29
    ctx->pc = 0x1d2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d2c1c:
    // 0x1d2c1c: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d2c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d2c20:
    // 0x1d2c20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d2c24:
    // 0x1d2c24: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d2c24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d2c28:
    // 0x1d2c28: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x1d2c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1d2c2c:
    // 0x1d2c2c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d2c30:
    // 0x1d2c30: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d2c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2c34:
    // 0x1d2c34: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d2c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d2c38:
    // 0x1d2c38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2c3c:
    // 0x1d2c3c: 0xe0f809  jalr        $a3
label_1d2c40:
    if (ctx->pc == 0x1D2C40u) {
        ctx->pc = 0x1D2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C3Cu;
        // 0x1d2c40: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2C44u;
        goto label_1d2c44;
    }
    ctx->pc = 0x1D2C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D2C44u);
        ctx->pc = 0x1D2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C3Cu;
        // 0x1d2c40: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2C3Cu, 0x1D2C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2C44u;
label_1d2c44:
    // 0x1d2c44: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d2c44u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d2c48:
    // 0x1d2c48: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1d2c4c:
    if (ctx->pc == 0x1D2C4Cu) {
        ctx->pc = 0x1D2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C48u;
        // 0x1d2c4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2C50u;
        goto label_1d2c50;
    }
    ctx->pc = 0x1D2C48u;
    {
        const bool branch_taken_0x1d2c48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C48u;
        // 0x1d2c4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c48) {
            ctx->pc = 0x1D2C58u;
            goto label_1d2c58;
        }
    }
    ctx->pc = 0x1D2C50u;
label_1d2c50:
    // 0x1d2c50: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d2c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2c54:
    // 0x1d2c54: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1d2c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1d2c58:
    // 0x1d2c58: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1d2c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2c5c:
    // 0x1d2c5c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1d2c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2c60:
    // 0x1d2c60: 0x0  nop
    ctx->pc = 0x1d2c60u;
    // NOP
label_1d2c64:
    // 0x1d2c64: 0x4503ffa6  bc1tl       . + 4 + (-0x5A << 2)
label_1d2c68:
    if (ctx->pc == 0x1D2C68u) {
        ctx->pc = 0x1D2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C64u;
        // 0x1d2c68: 0x96420074  lhu         $v0, 0x74($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2C6Cu;
        goto label_1d2c6c;
    }
    ctx->pc = 0x1D2C64u;
    {
        const bool branch_taken_0x1d2c64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2c64) {
            ctx->pc = 0x1D2C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2C64u;
            // 0x1d2c68: 0x96420074  lhu         $v0, 0x74($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2b00;
        }
    }
    ctx->pc = 0x1D2C6Cu;
label_1d2c6c:
    // 0x1d2c6c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d2c70:
    if (ctx->pc == 0x1D2C70u) {
        ctx->pc = 0x1D2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C6Cu;
        // 0x1d2c70: 0x92420090  lbu         $v0, 0x90($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2C74u;
        goto label_1d2c74;
    }
    ctx->pc = 0x1D2C6Cu;
    {
        const bool branch_taken_0x1d2c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C6Cu;
        // 0x1d2c70: 0x92420090  lbu         $v0, 0x90($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c6c) {
            ctx->pc = 0x1D2CE0u;
            goto label_1d2ce0;
        }
    }
    ctx->pc = 0x1D2C74u;
label_1d2c74:
    // 0x1d2c74: 0x8e530094  lw          $s3, 0x94($s2)
    ctx->pc = 0x1d2c74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d2c78:
    // 0x1d2c78: 0xa6420074  sh          $v0, 0x74($s2)
    ctx->pc = 0x1d2c78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
label_1d2c7c:
    // 0x1d2c7c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d2c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d2c80:
    // 0x1d2c80: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1d2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1d2c84:
    // 0x1d2c84: 0x24638e90  addiu       $v1, $v1, -0x7170
    ctx->pc = 0x1d2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938256));
label_1d2c88:
    // 0x1d2c88: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d2c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d2c8c:
    // 0x1d2c8c: 0x2454f290  addiu       $s4, $v0, -0xD70
    ctx->pc = 0x1d2c8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963856));
label_1d2c90:
    // 0x1d2c90: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d2c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2c94:
    // 0x1d2c94: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1d2c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d2c98:
    // 0x1d2c98: 0x101742  srl         $v0, $s0, 29
    ctx->pc = 0x1d2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d2c9c:
    // 0x1d2c9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d2c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ca0:
    // 0x1d2ca0: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d2ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d2ca4:
    // 0x1d2ca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d2ca8:
    // 0x1d2ca8: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d2ca8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d2cac:
    // 0x1d2cac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d2cb0:
    // 0x1d2cb0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d2cb4:
    // 0x1d2cb4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d2cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2cb8:
    // 0x1d2cb8: 0x2a030001  slti        $v1, $s0, 0x1
    ctx->pc = 0x1d2cb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1) ? 1 : 0);
label_1d2cbc:
    // 0x1d2cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2cc0:
    // 0x1d2cc0: 0xe0f809  jalr        $a3
label_1d2cc4:
    if (ctx->pc == 0x1D2CC4u) {
        ctx->pc = 0x1D2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CC0u;
        // 0x1d2cc4: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2CC8u;
        goto label_1d2cc8;
    }
    ctx->pc = 0x1D2CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D2CC8u);
        ctx->pc = 0x1D2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CC0u;
        // 0x1d2cc4: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2CC0u, 0x1D2CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2CC8u;
label_1d2cc8:
    // 0x1d2cc8: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d2cc8u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d2ccc:
    // 0x1d2ccc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1d2cd0:
    if (ctx->pc == 0x1D2CD0u) {
        ctx->pc = 0x1D2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CCCu;
        // 0x1d2cd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2CD4u;
        goto label_1d2cd4;
    }
    ctx->pc = 0x1D2CCCu;
    {
        const bool branch_taken_0x1d2ccc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CCCu;
        // 0x1d2cd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ccc) {
            ctx->pc = 0x1D2CDCu;
            goto label_1d2cdc;
        }
    }
    ctx->pc = 0x1D2CD4u;
label_1d2cd4:
    // 0x1d2cd4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d2cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2cd8:
    // 0x1d2cd8: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1d2cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1d2cdc:
    // 0x1d2cdc: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x1d2cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
label_1d2ce0:
    // 0x1d2ce0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2ce4:
    // 0x1d2ce4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1d2ce8:
    if (ctx->pc == 0x1D2CE8u) {
        ctx->pc = 0x1D2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CE4u;
        // 0x1d2ce8: 0xc4800020  lwc1        $f0, 0x20($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2CECu;
        goto label_1d2cec;
    }
    ctx->pc = 0x1D2CE4u;
    {
        const bool branch_taken_0x1d2ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ce4) {
            ctx->pc = 0x1D2CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2CE4u;
            // 0x1d2ce8: 0xc4800020  lwc1        $f0, 0x20($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2CF4u;
            goto label_1d2cf4;
        }
    }
    ctx->pc = 0x1D2CECu;
label_1d2cec:
    // 0x1d2cec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d2cf0:
    if (ctx->pc == 0x1D2CF0u) {
        ctx->pc = 0x1D2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CECu;
        // 0x1d2cf0: 0xe6540078  swc1        $f20, 0x78($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2CF4u;
        goto label_1d2cf4;
    }
    ctx->pc = 0x1D2CECu;
    {
        const bool branch_taken_0x1d2cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CECu;
        // 0x1d2cf0: 0xe6540078  swc1        $f20, 0x78($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cec) {
            ctx->pc = 0x1D2CFCu;
            goto label_1d2cfc;
        }
    }
    ctx->pc = 0x1D2CF4u;
label_1d2cf4:
    // 0x1d2cf4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1d2cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1d2cf8:
    // 0x1d2cf8: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x1d2cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
label_1d2cfc:
    // 0x1d2cfc: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x1d2cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2d00:
    // 0x1d2d00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d2d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2d04:
    // 0x1d2d04: 0x0  nop
    ctx->pc = 0x1d2d04u;
    // NOP
label_1d2d08:
    // 0x1d2d08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d2d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2d0c:
    // 0x1d2d0c: 0x0  nop
    ctx->pc = 0x1d2d0cu;
    // NOP
label_1d2d10:
    // 0x1d2d10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1d2d14:
    if (ctx->pc == 0x1D2D14u) {
        ctx->pc = 0x1D2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D10u;
        // 0x1d2d14: 0xe6410078  swc1        $f1, 0x78($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2D18u;
        goto label_1d2d18;
    }
    ctx->pc = 0x1D2D10u;
    {
        const bool branch_taken_0x1d2d10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2d10) {
            ctx->pc = 0x1D2D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2D10u;
            // 0x1d2d14: 0xe6410078  swc1        $f1, 0x78($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D18u;
            goto label_1d2d18;
        }
    }
    ctx->pc = 0x1D2D18u;
label_1d2d18:
    // 0x1d2d18: 0x86420074  lh          $v0, 0x74($s2)
    ctx->pc = 0x1d2d18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2d1c:
    // 0x1d2d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d2d20:
    // 0x1d2d20: 0x0  nop
    ctx->pc = 0x1d2d20u;
    // NOP
label_1d2d24:
    // 0x1d2d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d2d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d2d28:
    // 0x1d2d28: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x1d2d28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2d2c:
    // 0x1d2d2c: 0x0  nop
    ctx->pc = 0x1d2d2cu;
    // NOP
label_1d2d30:
    // 0x1d2d30: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d2d34:
    if (ctx->pc == 0x1D2D34u) {
        ctx->pc = 0x1D2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D30u;
        // 0x1d2d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2D38u;
        goto label_1d2d38;
    }
    ctx->pc = 0x1D2D30u;
    {
        const bool branch_taken_0x1d2d30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D30u;
        // 0x1d2d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d30) {
            ctx->pc = 0x1D2D44u;
            goto label_1d2d44;
        }
    }
    ctx->pc = 0x1D2D38u;
label_1d2d38:
    // 0x1d2d38: 0xc074c12  jal         func_1D3048
label_1d2d3c:
    if (ctx->pc == 0x1D2D3Cu) {
        ctx->pc = 0x1D2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D38u;
        // 0x1d2d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2D40u;
        goto label_1d2d40;
    }
    ctx->pc = 0x1D2D38u;
    SET_GPR_U32(ctx, 31, 0x1D2D40u);
    ctx->pc = 0x1D2D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D38u;
    // 0x1d2d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3048u, 0x1D2D38u, 0x1D2D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D40u;
label_1d2d40:
    // 0x1d2d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2d44:
    // 0x1d2d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2d48:
    // 0x1d2d48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d2d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d2d4c:
    // 0x1d2d4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d2d4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2d50:
    // 0x1d2d50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d2d50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d2d54:
    // 0x1d2d54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d2d54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2d58:
    // 0x1d2d58: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d2d58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d2d5c:
    // 0x1d2d5c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d2d5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2d60:
    // 0x1d2d60: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d2d60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d2d64:
    // 0x1d2d64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d2d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d2d68:
    // 0x1d2d68: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1d2d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d2d6c:
    // 0x1d2d6c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1d2d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d2d70:
    // 0x1d2d70: 0x3e00008  jr          $ra
label_1d2d74:
    if (ctx->pc == 0x1D2D74u) {
        ctx->pc = 0x1D2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D70u;
        // 0x1d2d74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2D78u;
        goto label_fallthrough_0x1d2d70;
    }
    ctx->pc = 0x1D2D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D70u;
        // 0x1d2d74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d2d70:
    ctx->pc = 0x1D2D78u;
}
