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

// Function: sub_00238AD0
// Address: 0x238ad0 - 0x238ec8
void sub_00238AD0_0x238ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238AD0_0x238ad0");
#endif

    switch (ctx->pc) {
        case 0x238ad0u: goto label_238ad0;
        case 0x238ad4u: goto label_238ad4;
        case 0x238ad8u: goto label_238ad8;
        case 0x238adcu: goto label_238adc;
        case 0x238ae0u: goto label_238ae0;
        case 0x238ae4u: goto label_238ae4;
        case 0x238ae8u: goto label_238ae8;
        case 0x238aecu: goto label_238aec;
        case 0x238af0u: goto label_238af0;
        case 0x238af4u: goto label_238af4;
        case 0x238af8u: goto label_238af8;
        case 0x238afcu: goto label_238afc;
        case 0x238b00u: goto label_238b00;
        case 0x238b04u: goto label_238b04;
        case 0x238b08u: goto label_238b08;
        case 0x238b0cu: goto label_238b0c;
        case 0x238b10u: goto label_238b10;
        case 0x238b14u: goto label_238b14;
        case 0x238b18u: goto label_238b18;
        case 0x238b1cu: goto label_238b1c;
        case 0x238b20u: goto label_238b20;
        case 0x238b24u: goto label_238b24;
        case 0x238b28u: goto label_238b28;
        case 0x238b2cu: goto label_238b2c;
        case 0x238b30u: goto label_238b30;
        case 0x238b34u: goto label_238b34;
        case 0x238b38u: goto label_238b38;
        case 0x238b3cu: goto label_238b3c;
        case 0x238b40u: goto label_238b40;
        case 0x238b44u: goto label_238b44;
        case 0x238b48u: goto label_238b48;
        case 0x238b4cu: goto label_238b4c;
        case 0x238b50u: goto label_238b50;
        case 0x238b54u: goto label_238b54;
        case 0x238b58u: goto label_238b58;
        case 0x238b5cu: goto label_238b5c;
        case 0x238b60u: goto label_238b60;
        case 0x238b64u: goto label_238b64;
        case 0x238b68u: goto label_238b68;
        case 0x238b6cu: goto label_238b6c;
        case 0x238b70u: goto label_238b70;
        case 0x238b74u: goto label_238b74;
        case 0x238b78u: goto label_238b78;
        case 0x238b7cu: goto label_238b7c;
        case 0x238b80u: goto label_238b80;
        case 0x238b84u: goto label_238b84;
        case 0x238b88u: goto label_238b88;
        case 0x238b8cu: goto label_238b8c;
        case 0x238b90u: goto label_238b90;
        case 0x238b94u: goto label_238b94;
        case 0x238b98u: goto label_238b98;
        case 0x238b9cu: goto label_238b9c;
        case 0x238ba0u: goto label_238ba0;
        case 0x238ba4u: goto label_238ba4;
        case 0x238ba8u: goto label_238ba8;
        case 0x238bacu: goto label_238bac;
        case 0x238bb0u: goto label_238bb0;
        case 0x238bb4u: goto label_238bb4;
        case 0x238bb8u: goto label_238bb8;
        case 0x238bbcu: goto label_238bbc;
        case 0x238bc0u: goto label_238bc0;
        case 0x238bc4u: goto label_238bc4;
        case 0x238bc8u: goto label_238bc8;
        case 0x238bccu: goto label_238bcc;
        case 0x238bd0u: goto label_238bd0;
        case 0x238bd4u: goto label_238bd4;
        case 0x238bd8u: goto label_238bd8;
        case 0x238bdcu: goto label_238bdc;
        case 0x238be0u: goto label_238be0;
        case 0x238be4u: goto label_238be4;
        case 0x238be8u: goto label_238be8;
        case 0x238becu: goto label_238bec;
        case 0x238bf0u: goto label_238bf0;
        case 0x238bf4u: goto label_238bf4;
        case 0x238bf8u: goto label_238bf8;
        case 0x238bfcu: goto label_238bfc;
        case 0x238c00u: goto label_238c00;
        case 0x238c04u: goto label_238c04;
        case 0x238c08u: goto label_238c08;
        case 0x238c0cu: goto label_238c0c;
        case 0x238c10u: goto label_238c10;
        case 0x238c14u: goto label_238c14;
        case 0x238c18u: goto label_238c18;
        case 0x238c1cu: goto label_238c1c;
        case 0x238c20u: goto label_238c20;
        case 0x238c24u: goto label_238c24;
        case 0x238c28u: goto label_238c28;
        case 0x238c2cu: goto label_238c2c;
        case 0x238c30u: goto label_238c30;
        case 0x238c34u: goto label_238c34;
        case 0x238c38u: goto label_238c38;
        case 0x238c3cu: goto label_238c3c;
        case 0x238c40u: goto label_238c40;
        case 0x238c44u: goto label_238c44;
        case 0x238c48u: goto label_238c48;
        case 0x238c4cu: goto label_238c4c;
        case 0x238c50u: goto label_238c50;
        case 0x238c54u: goto label_238c54;
        case 0x238c58u: goto label_238c58;
        case 0x238c5cu: goto label_238c5c;
        case 0x238c60u: goto label_238c60;
        case 0x238c64u: goto label_238c64;
        case 0x238c68u: goto label_238c68;
        case 0x238c6cu: goto label_238c6c;
        case 0x238c70u: goto label_238c70;
        case 0x238c74u: goto label_238c74;
        case 0x238c78u: goto label_238c78;
        case 0x238c7cu: goto label_238c7c;
        case 0x238c80u: goto label_238c80;
        case 0x238c84u: goto label_238c84;
        case 0x238c88u: goto label_238c88;
        case 0x238c8cu: goto label_238c8c;
        case 0x238c90u: goto label_238c90;
        case 0x238c94u: goto label_238c94;
        case 0x238c98u: goto label_238c98;
        case 0x238c9cu: goto label_238c9c;
        case 0x238ca0u: goto label_238ca0;
        case 0x238ca4u: goto label_238ca4;
        case 0x238ca8u: goto label_238ca8;
        case 0x238cacu: goto label_238cac;
        case 0x238cb0u: goto label_238cb0;
        case 0x238cb4u: goto label_238cb4;
        case 0x238cb8u: goto label_238cb8;
        case 0x238cbcu: goto label_238cbc;
        case 0x238cc0u: goto label_238cc0;
        case 0x238cc4u: goto label_238cc4;
        case 0x238cc8u: goto label_238cc8;
        case 0x238cccu: goto label_238ccc;
        case 0x238cd0u: goto label_238cd0;
        case 0x238cd4u: goto label_238cd4;
        case 0x238cd8u: goto label_238cd8;
        case 0x238cdcu: goto label_238cdc;
        case 0x238ce0u: goto label_238ce0;
        case 0x238ce4u: goto label_238ce4;
        case 0x238ce8u: goto label_238ce8;
        case 0x238cecu: goto label_238cec;
        case 0x238cf0u: goto label_238cf0;
        case 0x238cf4u: goto label_238cf4;
        case 0x238cf8u: goto label_238cf8;
        case 0x238cfcu: goto label_238cfc;
        case 0x238d00u: goto label_238d00;
        case 0x238d04u: goto label_238d04;
        case 0x238d08u: goto label_238d08;
        case 0x238d0cu: goto label_238d0c;
        case 0x238d10u: goto label_238d10;
        case 0x238d14u: goto label_238d14;
        case 0x238d18u: goto label_238d18;
        case 0x238d1cu: goto label_238d1c;
        case 0x238d20u: goto label_238d20;
        case 0x238d24u: goto label_238d24;
        case 0x238d28u: goto label_238d28;
        case 0x238d2cu: goto label_238d2c;
        case 0x238d30u: goto label_238d30;
        case 0x238d34u: goto label_238d34;
        case 0x238d38u: goto label_238d38;
        case 0x238d3cu: goto label_238d3c;
        case 0x238d40u: goto label_238d40;
        case 0x238d44u: goto label_238d44;
        case 0x238d48u: goto label_238d48;
        case 0x238d4cu: goto label_238d4c;
        case 0x238d50u: goto label_238d50;
        case 0x238d54u: goto label_238d54;
        case 0x238d58u: goto label_238d58;
        case 0x238d5cu: goto label_238d5c;
        case 0x238d60u: goto label_238d60;
        case 0x238d64u: goto label_238d64;
        case 0x238d68u: goto label_238d68;
        case 0x238d6cu: goto label_238d6c;
        case 0x238d70u: goto label_238d70;
        case 0x238d74u: goto label_238d74;
        case 0x238d78u: goto label_238d78;
        case 0x238d7cu: goto label_238d7c;
        case 0x238d80u: goto label_238d80;
        case 0x238d84u: goto label_238d84;
        case 0x238d88u: goto label_238d88;
        case 0x238d8cu: goto label_238d8c;
        case 0x238d90u: goto label_238d90;
        case 0x238d94u: goto label_238d94;
        case 0x238d98u: goto label_238d98;
        case 0x238d9cu: goto label_238d9c;
        case 0x238da0u: goto label_238da0;
        case 0x238da4u: goto label_238da4;
        case 0x238da8u: goto label_238da8;
        case 0x238dacu: goto label_238dac;
        case 0x238db0u: goto label_238db0;
        case 0x238db4u: goto label_238db4;
        case 0x238db8u: goto label_238db8;
        case 0x238dbcu: goto label_238dbc;
        case 0x238dc0u: goto label_238dc0;
        case 0x238dc4u: goto label_238dc4;
        case 0x238dc8u: goto label_238dc8;
        case 0x238dccu: goto label_238dcc;
        case 0x238dd0u: goto label_238dd0;
        case 0x238dd4u: goto label_238dd4;
        case 0x238dd8u: goto label_238dd8;
        case 0x238ddcu: goto label_238ddc;
        case 0x238de0u: goto label_238de0;
        case 0x238de4u: goto label_238de4;
        case 0x238de8u: goto label_238de8;
        case 0x238decu: goto label_238dec;
        case 0x238df0u: goto label_238df0;
        case 0x238df4u: goto label_238df4;
        case 0x238df8u: goto label_238df8;
        case 0x238dfcu: goto label_238dfc;
        case 0x238e00u: goto label_238e00;
        case 0x238e04u: goto label_238e04;
        case 0x238e08u: goto label_238e08;
        case 0x238e0cu: goto label_238e0c;
        case 0x238e10u: goto label_238e10;
        case 0x238e14u: goto label_238e14;
        case 0x238e18u: goto label_238e18;
        case 0x238e1cu: goto label_238e1c;
        case 0x238e20u: goto label_238e20;
        case 0x238e24u: goto label_238e24;
        case 0x238e28u: goto label_238e28;
        case 0x238e2cu: goto label_238e2c;
        case 0x238e30u: goto label_238e30;
        case 0x238e34u: goto label_238e34;
        case 0x238e38u: goto label_238e38;
        case 0x238e3cu: goto label_238e3c;
        case 0x238e40u: goto label_238e40;
        case 0x238e44u: goto label_238e44;
        case 0x238e48u: goto label_238e48;
        case 0x238e4cu: goto label_238e4c;
        case 0x238e50u: goto label_238e50;
        case 0x238e54u: goto label_238e54;
        case 0x238e58u: goto label_238e58;
        case 0x238e5cu: goto label_238e5c;
        case 0x238e60u: goto label_238e60;
        case 0x238e64u: goto label_238e64;
        case 0x238e68u: goto label_238e68;
        case 0x238e6cu: goto label_238e6c;
        case 0x238e70u: goto label_238e70;
        case 0x238e74u: goto label_238e74;
        case 0x238e78u: goto label_238e78;
        case 0x238e7cu: goto label_238e7c;
        case 0x238e80u: goto label_238e80;
        case 0x238e84u: goto label_238e84;
        case 0x238e88u: goto label_238e88;
        case 0x238e8cu: goto label_238e8c;
        case 0x238e90u: goto label_238e90;
        case 0x238e94u: goto label_238e94;
        case 0x238e98u: goto label_238e98;
        case 0x238e9cu: goto label_238e9c;
        case 0x238ea0u: goto label_238ea0;
        case 0x238ea4u: goto label_238ea4;
        case 0x238ea8u: goto label_238ea8;
        case 0x238eacu: goto label_238eac;
        case 0x238eb0u: goto label_238eb0;
        case 0x238eb4u: goto label_238eb4;
        case 0x238eb8u: goto label_238eb8;
        case 0x238ebcu: goto label_238ebc;
        case 0x238ec0u: goto label_238ec0;
        case 0x238ec4u: goto label_238ec4;
        default: break;
    }

    ctx->pc = 0x238ad0u;

label_238ad0:
    // 0x238ad0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x238ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_238ad4:
    // 0x238ad4: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x238ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_238ad8:
    // 0x238ad8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x238ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_238adc:
    // 0x238adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238ae0:
    // 0x238ae0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x238ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_238ae4:
    // 0x238ae4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x238ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_238ae8:
    // 0x238ae8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x238ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_238aec:
    // 0x238aec: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x238aecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_238af0:
    // 0x238af0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x238af0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_238af4:
    // 0x238af4: 0x8e22042c  lw          $v0, 0x42C($s1)
    ctx->pc = 0x238af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1068)));
label_238af8:
    // 0x238af8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_238afc:
    if (ctx->pc == 0x238AFCu) {
        ctx->pc = 0x238AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AF8u;
        // 0x238afc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B00u;
        goto label_238b00;
    }
    ctx->pc = 0x238AF8u;
    {
        const bool branch_taken_0x238af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AF8u;
        // 0x238afc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238af8) {
            ctx->pc = 0x238B1Cu;
            goto label_238b1c;
        }
    }
    ctx->pc = 0x238B00u;
label_238b00:
    // 0x238b00: 0xc6210434  lwc1        $f1, 0x434($s1)
    ctx->pc = 0x238b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238b04:
    // 0x238b04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238b08:
    // 0x238b08: 0x0  nop
    ctx->pc = 0x238b08u;
    // NOP
label_238b0c:
    // 0x238b0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x238b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238b10:
    // 0x238b10: 0x0  nop
    ctx->pc = 0x238b10u;
    // NOP
label_238b14:
    // 0x238b14: 0x450200e3  bc1fl       . + 4 + (0xE3 << 2)
label_238b18:
    if (ctx->pc == 0x238B18u) {
        ctx->pc = 0x238B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B14u;
        // 0x238b18: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B1Cu;
        goto label_238b1c;
    }
    ctx->pc = 0x238B14u;
    {
        const bool branch_taken_0x238b14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238b14) {
            ctx->pc = 0x238B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238B14u;
            // 0x238b18: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238EA4u;
            goto label_238ea4;
        }
    }
    ctx->pc = 0x238B1Cu;
label_238b1c:
    // 0x238b1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x238b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238b20:
    // 0x238b20: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_238b24:
    if (ctx->pc == 0x238B24u) {
        ctx->pc = 0x238B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B20u;
        // 0x238b24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B28u;
        goto label_238b28;
    }
    ctx->pc = 0x238B20u;
    {
        const bool branch_taken_0x238b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B20u;
        // 0x238b24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b20) {
            ctx->pc = 0x238B7Cu;
            goto label_238b7c;
        }
    }
    ctx->pc = 0x238B28u;
label_238b28:
    // 0x238b28: 0xc6220434  lwc1        $f2, 0x434($s1)
    ctx->pc = 0x238b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238b2c:
    // 0x238b2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_238b30:
    // 0x238b30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x238b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_238b34:
    // 0x238b34: 0x0  nop
    ctx->pc = 0x238b34u;
    // NOP
label_238b38:
    // 0x238b38: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x238b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238b3c:
    // 0x238b3c: 0x0  nop
    ctx->pc = 0x238b3cu;
    // NOP
label_238b40:
    // 0x238b40: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_238b44:
    if (ctx->pc == 0x238B44u) {
        ctx->pc = 0x238B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B40u;
        // 0x238b44: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B48u;
        goto label_238b48;
    }
    ctx->pc = 0x238B40u;
    {
        const bool branch_taken_0x238b40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x238B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B40u;
        // 0x238b44: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b40) {
            ctx->pc = 0x238BC8u;
            goto label_238bc8;
        }
    }
    ctx->pc = 0x238B48u;
label_238b48:
    // 0x238b48: 0xc6210438  lwc1        $f1, 0x438($s1)
    ctx->pc = 0x238b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238b4c:
    // 0x238b4c: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x238b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238b50:
    // 0x238b50: 0x0  nop
    ctx->pc = 0x238b50u;
    // NOP
label_238b54:
    // 0x238b54: 0x0  nop
    ctx->pc = 0x238b54u;
    // NOP
label_238b58:
    // 0x238b58: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x238b58u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_238b5c:
    // 0x238b5c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x238b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_238b60:
    // 0x238b60: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x238b60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238b64:
    // 0x238b64: 0x0  nop
    ctx->pc = 0x238b64u;
    // NOP
label_238b68:
    // 0x238b68: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_238b6c:
    if (ctx->pc == 0x238B6Cu) {
        ctx->pc = 0x238B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B68u;
        // 0x238b6c: 0xe6200434  swc1        $f0, 0x434($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1076), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B70u;
        goto label_238b70;
    }
    ctx->pc = 0x238B68u;
    {
        const bool branch_taken_0x238b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x238B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B68u;
        // 0x238b6c: 0xe6200434  swc1        $f0, 0x434($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1076), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b68) {
            ctx->pc = 0x238BC8u;
            goto label_238bc8;
        }
    }
    ctx->pc = 0x238B70u;
label_238b70:
    // 0x238b70: 0xe6230434  swc1        $f3, 0x434($s1)
    ctx->pc = 0x238b70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1076), bits); }
label_238b74:
    // 0x238b74: 0x10000014  b           . + 4 + (0x14 << 2)
label_238b78:
    if (ctx->pc == 0x238B78u) {
        ctx->pc = 0x238B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B74u;
        // 0x238b78: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B7Cu;
        goto label_238b7c;
    }
    ctx->pc = 0x238B74u;
    {
        const bool branch_taken_0x238b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B74u;
        // 0x238b78: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b74) {
            ctx->pc = 0x238BC8u;
            goto label_238bc8;
        }
    }
    ctx->pc = 0x238B7Cu;
label_238b7c:
    // 0x238b7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x238b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_238b80:
    // 0x238b80: 0xc6220438  lwc1        $f2, 0x438($s1)
    ctx->pc = 0x238b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238b84:
    // 0x238b84: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x238b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238b88:
    // 0x238b88: 0xc6210434  lwc1        $f1, 0x434($s1)
    ctx->pc = 0x238b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238b8c:
    // 0x238b8c: 0x0  nop
    ctx->pc = 0x238b8cu;
    // NOP
label_238b90:
    // 0x238b90: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x238b90u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_238b94:
    // 0x238b94: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x238b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_238b98:
    // 0x238b98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x238b98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_238b9c:
    // 0x238b9c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x238b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238ba0:
    // 0x238ba0: 0x0  nop
    ctx->pc = 0x238ba0u;
    // NOP
label_238ba4:
    // 0x238ba4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_238ba8:
    if (ctx->pc == 0x238BA8u) {
        ctx->pc = 0x238BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BA4u;
        // 0x238ba8: 0xe6210434  swc1        $f1, 0x434($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1076), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BACu;
        goto label_238bac;
    }
    ctx->pc = 0x238BA4u;
    {
        const bool branch_taken_0x238ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x238BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BA4u;
        // 0x238ba8: 0xe6210434  swc1        $f1, 0x434($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1076), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ba4) {
            ctx->pc = 0x238BB8u;
            goto label_238bb8;
        }
    }
    ctx->pc = 0x238BACu;
label_238bac:
    // 0x238bac: 0xe6220434  swc1        $f2, 0x434($s1)
    ctx->pc = 0x238bacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1076), bits); }
label_238bb0:
    // 0x238bb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_238bb4:
    if (ctx->pc == 0x238BB4u) {
        ctx->pc = 0x238BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BB0u;
        // 0x238bb4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BB8u;
        goto label_238bb8;
    }
    ctx->pc = 0x238BB0u;
    {
        const bool branch_taken_0x238bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BB0u;
        // 0x238bb4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bb0) {
            ctx->pc = 0x238BC8u;
            goto label_238bc8;
        }
    }
    ctx->pc = 0x238BB8u;
label_238bb8:
    // 0x238bb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_238bbc:
    // 0x238bbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x238bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_238bc0:
    // 0x238bc0: 0xc06a0ca  jal         func_1A8328
label_238bc4:
    if (ctx->pc == 0x238BC4u) {
        ctx->pc = 0x238BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BC0u;
        // 0x238bc4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BC8u;
        goto label_238bc8;
    }
    ctx->pc = 0x238BC0u;
    SET_GPR_U32(ctx, 31, 0x238BC8u);
    ctx->pc = 0x238BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BC0u;
    // 0x238bc4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8328u, 0x238BC0u, 0x238BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BC8u;
label_238bc8:
    // 0x238bc8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_238bcc:
    if (ctx->pc == 0x238BCCu) {
        ctx->pc = 0x238BD0u;
        goto label_238bd0;
    }
    ctx->pc = 0x238BC8u;
    {
        const bool branch_taken_0x238bc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x238bc8) {
            ctx->pc = 0x238BF0u;
            goto label_238bf0;
        }
    }
    ctx->pc = 0x238BD0u;
label_238bd0:
    // 0x238bd0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x238bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_238bd4:
    // 0x238bd4: 0x8e230470  lw          $v1, 0x470($s1)
    ctx->pc = 0x238bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1136)));
label_238bd8:
    // 0x238bd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x238bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238bdc:
    // 0x238bdc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x238bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_238be0:
    // 0x238be0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x238be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_238be4:
    // 0x238be4: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x238be4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_238be8:
    // 0x238be8: 0x10000084  b           . + 4 + (0x84 << 2)
label_238bec:
    if (ctx->pc == 0x238BECu) {
        ctx->pc = 0x238BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BE8u;
        // 0x238bec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BF0u;
        goto label_238bf0;
    }
    ctx->pc = 0x238BE8u;
    {
        const bool branch_taken_0x238be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BE8u;
        // 0x238bec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238be8) {
            ctx->pc = 0x238DFCu;
            goto label_238dfc;
        }
    }
    ctx->pc = 0x238BF0u;
label_238bf0:
    // 0x238bf0: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
label_238bf4:
    if (ctx->pc == 0x238BF4u) {
        ctx->pc = 0x238BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF0u;
        // 0x238bf4: 0xc6200434  lwc1        $f0, 0x434($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BF8u;
        goto label_238bf8;
    }
    ctx->pc = 0x238BF0u;
    {
        const bool branch_taken_0x238bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x238bf0) {
            ctx->pc = 0x238BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238BF0u;
            // 0x238bf4: 0xc6200434  lwc1        $f0, 0x434($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C58u;
            goto label_238c58;
        }
    }
    ctx->pc = 0x238BF8u;
label_238bf8:
    // 0x238bf8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x238bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_238bfc:
    // 0x238bfc: 0x8e240474  lw          $a0, 0x474($s1)
    ctx->pc = 0x238bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
label_238c00:
    // 0x238c00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x238c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238c04:
    // 0x238c04: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x238c04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_238c08:
    // 0x238c08: 0xf8a10040  sqc2        $vf1, 0x40($a1)
    ctx->pc = 0x238c08u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_238c0c:
    // 0x238c0c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x238c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_238c10:
    // 0x238c10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x238c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_238c14:
    // 0x238c14: 0xf8a10050  sqc2        $vf1, 0x50($a1)
    ctx->pc = 0x238c14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_238c18:
    // 0x238c18: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x238c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_238c1c:
    // 0x238c1c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x238c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_238c20:
    // 0x238c20: 0xf8a10060  sqc2        $vf1, 0x60($a1)
    ctx->pc = 0x238c20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_238c24:
    // 0x238c24: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x238c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_238c28:
    // 0x238c28: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x238c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_238c2c:
    // 0x238c2c: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x238c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_238c30:
    // 0x238c30: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x238c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_238c34:
    // 0x238c34: 0x8e230474  lw          $v1, 0x474($s1)
    ctx->pc = 0x238c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
label_238c38:
    // 0x238c38: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x238c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_238c3c:
    // 0x238c3c: 0x5043006f  beql        $v0, $v1, . + 4 + (0x6F << 2)
label_238c40:
    if (ctx->pc == 0x238C40u) {
        ctx->pc = 0x238C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C3Cu;
        // 0x238c40: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C44u;
        goto label_238c44;
    }
    ctx->pc = 0x238C3Cu;
    {
        const bool branch_taken_0x238c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x238c3c) {
            ctx->pc = 0x238C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C3Cu;
            // 0x238c40: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238DFCu;
            goto label_238dfc;
        }
    }
    ctx->pc = 0x238C44u;
label_238c44:
    // 0x238c44: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x238c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_238c48:
    // 0x238c48: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_238c4c:
    if (ctx->pc == 0x238C4Cu) {
        ctx->pc = 0x238C50u;
        goto label_238c50;
    }
    ctx->pc = 0x238C48u;
    {
        const bool branch_taken_0x238c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c48) {
            ctx->pc = 0x238DFCu;
            goto label_238dfc;
        }
    }
    ctx->pc = 0x238C50u;
label_238c50:
    // 0x238c50: 0x1000006a  b           . + 4 + (0x6A << 2)
label_238c54:
    if (ctx->pc == 0x238C54u) {
        ctx->pc = 0x238C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C50u;
        // 0x238c54: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C58u;
        goto label_238c58;
    }
    ctx->pc = 0x238C50u;
    {
        const bool branch_taken_0x238c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C50u;
        // 0x238c54: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c50) {
            ctx->pc = 0x238DFCu;
            goto label_238dfc;
        }
    }
    ctx->pc = 0x238C58u;
label_238c58:
    // 0x238c58: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x238c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_238c5c:
    // 0x238c5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x238c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_238c60:
    // 0x238c60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_238c64:
    // 0x238c64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x238c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_238c68:
    // 0x238c68: 0xc0e3f5e  jal         func_38FD78
label_238c6c:
    if (ctx->pc == 0x238C6Cu) {
        ctx->pc = 0x238C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C68u;
        // 0x238c6c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C70u;
        goto label_238c70;
    }
    ctx->pc = 0x238C68u;
    SET_GPR_U32(ctx, 31, 0x238C70u);
    ctx->pc = 0x238C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C68u;
    // 0x238c6c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x238C68u, 0x238C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C70u;
label_238c70:
    // 0x238c70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x238c70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_238c74:
    // 0x238c74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x238c74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_238c78:
    // 0x238c78: 0xc0b1250  jal         func_2C4940
label_238c7c:
    if (ctx->pc == 0x238C7Cu) {
        ctx->pc = 0x238C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C78u;
        // 0x238c7c: 0x2484005a  addiu       $a0, $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C80u;
        goto label_238c80;
    }
    ctx->pc = 0x238C78u;
    SET_GPR_U32(ctx, 31, 0x238C80u);
    ctx->pc = 0x238C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C78u;
    // 0x238c7c: 0x2484005a  addiu       $a0, $a0, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x238C78u, 0x238C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C80u;
label_238c80:
    // 0x238c80: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x238c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_238c84:
    // 0x238c84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x238c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_238c88:
    // 0x238c88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_238c8c:
    // 0x238c8c: 0x8e22042c  lw          $v0, 0x42C($s1)
    ctx->pc = 0x238c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1068)));
label_238c90:
    // 0x238c90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_238c94:
    if (ctx->pc == 0x238C94u) {
        ctx->pc = 0x238C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C90u;
        // 0x238c94: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C98u;
        goto label_238c98;
    }
    ctx->pc = 0x238C90u;
    {
        const bool branch_taken_0x238c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C90u;
        // 0x238c94: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c90) {
            ctx->pc = 0x238CC8u;
            goto label_238cc8;
        }
    }
    ctx->pc = 0x238C98u;
label_238c98:
    // 0x238c98: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x238c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_238c9c:
    // 0x238c9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_238ca0:
    // 0x238ca0: 0x26250440  addiu       $a1, $s1, 0x440
    ctx->pc = 0x238ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
label_238ca4:
    // 0x238ca4: 0x26260450  addiu       $a2, $s1, 0x450
    ctx->pc = 0x238ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
label_238ca8:
    // 0x238ca8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x238ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238cac:
    // 0x238cac: 0x26270460  addiu       $a3, $s1, 0x460
    ctx->pc = 0x238cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1120));
label_238cb0:
    // 0x238cb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x238cb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_238cb4:
    // 0x238cb4: 0xc0b1a26  jal         func_2C6898
label_238cb8:
    if (ctx->pc == 0x238CB8u) {
        ctx->pc = 0x238CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CB4u;
        // 0x238cb8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CBCu;
        goto label_238cbc;
    }
    ctx->pc = 0x238CB4u;
    SET_GPR_U32(ctx, 31, 0x238CBCu);
    ctx->pc = 0x238CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CB4u;
    // 0x238cb8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6898u, 0x238CB4u, 0x238CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CBCu;
label_238cbc:
    // 0x238cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238cc0:
    // 0x238cc0: 0xc0b1972  jal         func_2C65C8
label_238cc4:
    if (ctx->pc == 0x238CC4u) {
        ctx->pc = 0x238CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CC0u;
        // 0x238cc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CC8u;
        goto label_238cc8;
    }
    ctx->pc = 0x238CC0u;
    SET_GPR_U32(ctx, 31, 0x238CC8u);
    ctx->pc = 0x238CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CC0u;
    // 0x238cc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x238CC0u, 0x238CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CC8u;
label_238cc8:
    // 0x238cc8: 0x8e230474  lw          $v1, 0x474($s1)
    ctx->pc = 0x238cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
label_238ccc:
    // 0x238ccc: 0x8e220470  lw          $v0, 0x470($s1)
    ctx->pc = 0x238cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1136)));
label_238cd0:
    // 0x238cd0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x238cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_238cd4:
    // 0x238cd4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x238cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_238cd8:
    // 0x238cd8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x238cd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_238cdc:
    // 0x238cdc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x238cdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_238ce0:
    // 0x238ce0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x238ce0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_238ce4:
    // 0x238ce4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x238ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_238ce8:
    // 0x238ce8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x238ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238cec:
    // 0x238cec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x238cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_238cf0:
    // 0x238cf0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x238cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238cf4:
    // 0x238cf4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x238cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238cf8:
    // 0x238cf8: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x238cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_238cfc:
    // 0x238cfc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x238cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_238d00:
    // 0x238d00: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x238d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_238d04:
    // 0x238d04: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x238d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_238d08:
    // 0x238d08: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x238d08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_238d0c:
    // 0x238d0c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x238d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238d10:
    // 0x238d10: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x238d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_238d14:
    // 0x238d14: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x238d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_238d18:
    // 0x238d18: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x238d18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_238d1c:
    // 0x238d1c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x238d1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_238d20:
    // 0x238d20: 0x4604221c  madd.s      $f8, $f4, $f4
    ctx->pc = 0x238d20u;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_238d24:
    // 0x238d24: 0x46080204  c1          0x80204
    ctx->pc = 0x238d24u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
label_238d28:
    // 0x238d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238d2c:
    // 0x238d2c: 0x0  nop
    ctx->pc = 0x238d2cu;
    // NOP
label_238d30:
    // 0x238d30: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x238d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238d34:
    // 0x238d34: 0x0  nop
    ctx->pc = 0x238d34u;
    // NOP
label_238d38:
    // 0x238d38: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_238d3c:
    if (ctx->pc == 0x238D3Cu) {
        ctx->pc = 0x238D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D38u;
        // 0x238d3c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D40u;
        goto label_238d40;
    }
    ctx->pc = 0x238D38u;
    {
        const bool branch_taken_0x238d38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x238D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D38u;
        // 0x238d3c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d38) {
            ctx->pc = 0x238D64u;
            goto label_238d64;
        }
    }
    ctx->pc = 0x238D40u;
label_238d40:
    // 0x238d40: 0x0  nop
    ctx->pc = 0x238d40u;
    // NOP
label_238d44:
    // 0x238d44: 0x0  nop
    ctx->pc = 0x238d44u;
    // NOP
label_238d48:
    // 0x238d48: 0x4608a803  div.s       $f0, $f21, $f8
    ctx->pc = 0x238d48u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[8]); }
label_238d4c:
    // 0x238d4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x238d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_238d50:
    // 0x238d50: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x238d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_238d54:
    // 0x238d54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x238d54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_238d58:
    // 0x238d58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x238d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_238d5c:
    // 0x238d5c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x238d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_238d60:
    // 0x238d60: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x238d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238d64:
    // 0x238d64: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x238d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_238d68:
    // 0x238d68: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x238d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238d6c:
    // 0x238d6c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x238d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_238d70:
    // 0x238d70: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x238d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_238d74:
    // 0x238d74: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x238d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238d78:
    // 0x238d78: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x238d78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_238d7c:
    // 0x238d7c: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x238d7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_238d80:
    // 0x238d80: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x238d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_238d84:
    // 0x238d84: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x238d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_238d88:
    // 0x238d88: 0x8e220470  lw          $v0, 0x470($s1)
    ctx->pc = 0x238d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1136)));
label_238d8c:
    // 0x238d8c: 0x460041c2  mul.s       $f7, $f8, $f0
    ctx->pc = 0x238d8cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_238d90:
    // 0x238d90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x238d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_238d94:
    // 0x238d94: 0x46024182  mul.s       $f6, $f8, $f2
    ctx->pc = 0x238d94u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_238d98:
    // 0x238d98: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x238d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_238d9c:
    // 0x238d9c: 0x46014142  mul.s       $f5, $f8, $f1
    ctx->pc = 0x238d9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_238da0:
    // 0x238da0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x238da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_238da4:
    // 0x238da4: 0x46034102  mul.s       $f4, $f8, $f3
    ctx->pc = 0x238da4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
label_238da8:
    // 0x238da8: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x238da8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_238dac:
    // 0x238dac: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x238dacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_238db0:
    // 0x238db0: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x238db0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_238db4:
    // 0x238db4: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x238db4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_238db8:
    // 0x238db8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x238db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_238dbc:
    // 0x238dbc: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x238dbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_238dc0:
    // 0x238dc0: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x238dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_238dc4:
    // 0x238dc4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x238dc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_238dc8:
    // 0x238dc8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x238dc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_238dcc:
    // 0x238dcc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x238dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_238dd0:
    // 0x238dd0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x238dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_238dd4:
    // 0x238dd4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x238dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238dd8:
    // 0x238dd8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x238dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238ddc:
    // 0x238ddc: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x238ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238de0:
    // 0x238de0: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x238de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_238de4:
    // 0x238de4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x238de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_238de8:
    // 0x238de8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x238de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_238dec:
    // 0x238dec: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x238decu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_238df0:
    // 0x238df0: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x238df0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_238df4:
    // 0x238df4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x238df4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_238df8:
    // 0x238df8: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x238df8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_238dfc:
    // 0x238dfc: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
label_238e00:
    if (ctx->pc == 0x238E00u) {
        ctx->pc = 0x238E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DFCu;
        // 0x238e00: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E04u;
        goto label_238e04;
    }
    ctx->pc = 0x238DFCu;
    {
        const bool branch_taken_0x238dfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DFCu;
        // 0x238e00: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238dfc) {
            ctx->pc = 0x238EA4u;
            goto label_238ea4;
        }
    }
    ctx->pc = 0x238E04u;
label_238e04:
    // 0x238e04: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x238e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_238e08:
    // 0x238e08: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x238e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_238e0c:
    // 0x238e0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x238e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238e10:
    // 0x238e10: 0xc0763f2  jal         func_1D8FC8
label_238e14:
    if (ctx->pc == 0x238E14u) {
        ctx->pc = 0x238E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E10u;
        // 0x238e14: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E18u;
        goto label_238e18;
    }
    ctx->pc = 0x238E10u;
    SET_GPR_U32(ctx, 31, 0x238E18u);
    ctx->pc = 0x238E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E10u;
    // 0x238e14: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x238E10u, 0x238E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E18u;
label_238e18:
    // 0x238e18: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x238e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_238e1c:
    // 0x238e1c: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x238e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_238e20:
    // 0x238e20: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_238e24:
    if (ctx->pc == 0x238E24u) {
        ctx->pc = 0x238E28u;
        goto label_238e28;
    }
    ctx->pc = 0x238E20u;
    {
        const bool branch_taken_0x238e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238e20) {
            ctx->pc = 0x238E7Cu;
            goto label_238e7c;
        }
    }
    ctx->pc = 0x238E28u;
label_238e28:
    // 0x238e28: 0xc0767f2  jal         func_1D9FC8
label_238e2c:
    if (ctx->pc == 0x238E2Cu) {
        ctx->pc = 0x238E30u;
        goto label_238e30;
    }
    ctx->pc = 0x238E28u;
    SET_GPR_U32(ctx, 31, 0x238E30u);
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x238E28u, 0x238E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E30u;
label_238e30:
    // 0x238e30: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x238e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_238e34:
    // 0x238e34: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x238e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_238e38:
    // 0x238e38: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x238e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_238e3c:
    // 0x238e3c: 0x40f809  jalr        $v0
label_238e40:
    if (ctx->pc == 0x238E40u) {
        ctx->pc = 0x238E44u;
        goto label_238e44;
    }
    ctx->pc = 0x238E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238E44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238E3Cu, 0x238E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238E44u;
label_238e44:
    // 0x238e44: 0xc076de4  jal         func_1DB790
label_238e48:
    if (ctx->pc == 0x238E48u) {
        ctx->pc = 0x238E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E44u;
        // 0x238e48: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E4Cu;
        goto label_238e4c;
    }
    ctx->pc = 0x238E44u;
    SET_GPR_U32(ctx, 31, 0x238E4Cu);
    ctx->pc = 0x238E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E44u;
    // 0x238e48: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x238E44u, 0x238E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E4Cu;
label_238e4c:
    // 0x238e4c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_238e50:
    if (ctx->pc == 0x238E50u) {
        ctx->pc = 0x238E54u;
        goto label_238e54;
    }
    ctx->pc = 0x238E4Cu;
    {
        const bool branch_taken_0x238e4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x238e4c) {
            ctx->pc = 0x238E7Cu;
            goto label_238e7c;
        }
    }
    ctx->pc = 0x238E54u;
label_238e54:
    // 0x238e54: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x238e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_238e58:
    // 0x238e58: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x238e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_238e5c:
    // 0x238e5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_238e60:
    if (ctx->pc == 0x238E60u) {
        ctx->pc = 0x238E64u;
        goto label_238e64;
    }
    ctx->pc = 0x238E5Cu;
    {
        const bool branch_taken_0x238e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238e5c) {
            ctx->pc = 0x238E7Cu;
            goto label_238e7c;
        }
    }
    ctx->pc = 0x238E64u;
label_238e64:
    // 0x238e64: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x238e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_238e68:
    // 0x238e68: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x238e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_238e6c:
    // 0x238e6c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x238e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_238e70:
    // 0x238e70: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x238e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_238e74:
    // 0x238e74: 0x40f809  jalr        $v0
label_238e78:
    if (ctx->pc == 0x238E78u) {
        ctx->pc = 0x238E7Cu;
        goto label_238e7c;
    }
    ctx->pc = 0x238E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238E7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238E74u, 0x238E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238E7Cu;
label_238e7c:
    // 0x238e7c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x238e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_238e80:
    // 0x238e80: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x238e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_238e84:
    // 0x238e84: 0xc06a0ca  jal         func_1A8328
label_238e88:
    if (ctx->pc == 0x238E88u) {
        ctx->pc = 0x238E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E84u;
        // 0x238e88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E8Cu;
        goto label_238e8c;
    }
    ctx->pc = 0x238E84u;
    SET_GPR_U32(ctx, 31, 0x238E8Cu);
    ctx->pc = 0x238E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E84u;
    // 0x238e88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8328u, 0x238E84u, 0x238E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E8Cu;
label_238e8c:
    // 0x238e8c: 0xe6340434  swc1        $f20, 0x434($s1)
    ctx->pc = 0x238e8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1076), bits); }
label_238e90:
    // 0x238e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238e94:
    // 0x238e94: 0xae20042c  sw          $zero, 0x42C($s1)
    ctx->pc = 0x238e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1068), GPR_U32(ctx, 0));
label_238e98:
    // 0x238e98: 0xc08bdc6  jal         func_22F718
label_238e9c:
    if (ctx->pc == 0x238E9Cu) {
        ctx->pc = 0x238E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E98u;
        // 0x238e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EA0u;
        goto label_238ea0;
    }
    ctx->pc = 0x238E98u;
    SET_GPR_U32(ctx, 31, 0x238EA0u);
    ctx->pc = 0x238E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E98u;
    // 0x238e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F718u, 0x238E98u, 0x238EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EA0u;
label_238ea0:
    // 0x238ea0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x238ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_238ea4:
    // 0x238ea4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x238ea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_238ea8:
    // 0x238ea8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x238ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_238eac:
    // 0x238eac: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x238eacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_238eb0:
    // 0x238eb0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x238eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_238eb4:
    // 0x238eb4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x238eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_238eb8:
    // 0x238eb8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x238eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_238ebc:
    // 0x238ebc: 0x3e00008  jr          $ra
label_238ec0:
    if (ctx->pc == 0x238EC0u) {
        ctx->pc = 0x238EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EBCu;
        // 0x238ec0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EC4u;
        goto label_238ec4;
    }
    ctx->pc = 0x238EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EBCu;
        // 0x238ec0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238EC4u;
label_238ec4:
    // 0x238ec4: 0x0  nop
    ctx->pc = 0x238ec4u;
    // NOP
    ctx->pc = 0x238ec8u;
}
