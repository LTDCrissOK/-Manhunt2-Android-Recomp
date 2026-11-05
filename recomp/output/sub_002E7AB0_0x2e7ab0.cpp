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

// Function: sub_002E7AB0
// Address: 0x2e7ab0 - 0x2e7d08
void sub_002E7AB0_0x2e7ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7AB0_0x2e7ab0");
#endif

    switch (ctx->pc) {
        case 0x2e7ab0u: goto label_2e7ab0;
        case 0x2e7ab4u: goto label_2e7ab4;
        case 0x2e7ab8u: goto label_2e7ab8;
        case 0x2e7abcu: goto label_2e7abc;
        case 0x2e7ac0u: goto label_2e7ac0;
        case 0x2e7ac4u: goto label_2e7ac4;
        case 0x2e7ac8u: goto label_2e7ac8;
        case 0x2e7accu: goto label_2e7acc;
        case 0x2e7ad0u: goto label_2e7ad0;
        case 0x2e7ad4u: goto label_2e7ad4;
        case 0x2e7ad8u: goto label_2e7ad8;
        case 0x2e7adcu: goto label_2e7adc;
        case 0x2e7ae0u: goto label_2e7ae0;
        case 0x2e7ae4u: goto label_2e7ae4;
        case 0x2e7ae8u: goto label_2e7ae8;
        case 0x2e7aecu: goto label_2e7aec;
        case 0x2e7af0u: goto label_2e7af0;
        case 0x2e7af4u: goto label_2e7af4;
        case 0x2e7af8u: goto label_2e7af8;
        case 0x2e7afcu: goto label_2e7afc;
        case 0x2e7b00u: goto label_2e7b00;
        case 0x2e7b04u: goto label_2e7b04;
        case 0x2e7b08u: goto label_2e7b08;
        case 0x2e7b0cu: goto label_2e7b0c;
        case 0x2e7b10u: goto label_2e7b10;
        case 0x2e7b14u: goto label_2e7b14;
        case 0x2e7b18u: goto label_2e7b18;
        case 0x2e7b1cu: goto label_2e7b1c;
        case 0x2e7b20u: goto label_2e7b20;
        case 0x2e7b24u: goto label_2e7b24;
        case 0x2e7b28u: goto label_2e7b28;
        case 0x2e7b2cu: goto label_2e7b2c;
        case 0x2e7b30u: goto label_2e7b30;
        case 0x2e7b34u: goto label_2e7b34;
        case 0x2e7b38u: goto label_2e7b38;
        case 0x2e7b3cu: goto label_2e7b3c;
        case 0x2e7b40u: goto label_2e7b40;
        case 0x2e7b44u: goto label_2e7b44;
        case 0x2e7b48u: goto label_2e7b48;
        case 0x2e7b4cu: goto label_2e7b4c;
        case 0x2e7b50u: goto label_2e7b50;
        case 0x2e7b54u: goto label_2e7b54;
        case 0x2e7b58u: goto label_2e7b58;
        case 0x2e7b5cu: goto label_2e7b5c;
        case 0x2e7b60u: goto label_2e7b60;
        case 0x2e7b64u: goto label_2e7b64;
        case 0x2e7b68u: goto label_2e7b68;
        case 0x2e7b6cu: goto label_2e7b6c;
        case 0x2e7b70u: goto label_2e7b70;
        case 0x2e7b74u: goto label_2e7b74;
        case 0x2e7b78u: goto label_2e7b78;
        case 0x2e7b7cu: goto label_2e7b7c;
        case 0x2e7b80u: goto label_2e7b80;
        case 0x2e7b84u: goto label_2e7b84;
        case 0x2e7b88u: goto label_2e7b88;
        case 0x2e7b8cu: goto label_2e7b8c;
        case 0x2e7b90u: goto label_2e7b90;
        case 0x2e7b94u: goto label_2e7b94;
        case 0x2e7b98u: goto label_2e7b98;
        case 0x2e7b9cu: goto label_2e7b9c;
        case 0x2e7ba0u: goto label_2e7ba0;
        case 0x2e7ba4u: goto label_2e7ba4;
        case 0x2e7ba8u: goto label_2e7ba8;
        case 0x2e7bacu: goto label_2e7bac;
        case 0x2e7bb0u: goto label_2e7bb0;
        case 0x2e7bb4u: goto label_2e7bb4;
        case 0x2e7bb8u: goto label_2e7bb8;
        case 0x2e7bbcu: goto label_2e7bbc;
        case 0x2e7bc0u: goto label_2e7bc0;
        case 0x2e7bc4u: goto label_2e7bc4;
        case 0x2e7bc8u: goto label_2e7bc8;
        case 0x2e7bccu: goto label_2e7bcc;
        case 0x2e7bd0u: goto label_2e7bd0;
        case 0x2e7bd4u: goto label_2e7bd4;
        case 0x2e7bd8u: goto label_2e7bd8;
        case 0x2e7bdcu: goto label_2e7bdc;
        case 0x2e7be0u: goto label_2e7be0;
        case 0x2e7be4u: goto label_2e7be4;
        case 0x2e7be8u: goto label_2e7be8;
        case 0x2e7becu: goto label_2e7bec;
        case 0x2e7bf0u: goto label_2e7bf0;
        case 0x2e7bf4u: goto label_2e7bf4;
        case 0x2e7bf8u: goto label_2e7bf8;
        case 0x2e7bfcu: goto label_2e7bfc;
        case 0x2e7c00u: goto label_2e7c00;
        case 0x2e7c04u: goto label_2e7c04;
        case 0x2e7c08u: goto label_2e7c08;
        case 0x2e7c0cu: goto label_2e7c0c;
        case 0x2e7c10u: goto label_2e7c10;
        case 0x2e7c14u: goto label_2e7c14;
        case 0x2e7c18u: goto label_2e7c18;
        case 0x2e7c1cu: goto label_2e7c1c;
        case 0x2e7c20u: goto label_2e7c20;
        case 0x2e7c24u: goto label_2e7c24;
        case 0x2e7c28u: goto label_2e7c28;
        case 0x2e7c2cu: goto label_2e7c2c;
        case 0x2e7c30u: goto label_2e7c30;
        case 0x2e7c34u: goto label_2e7c34;
        case 0x2e7c38u: goto label_2e7c38;
        case 0x2e7c3cu: goto label_2e7c3c;
        case 0x2e7c40u: goto label_2e7c40;
        case 0x2e7c44u: goto label_2e7c44;
        case 0x2e7c48u: goto label_2e7c48;
        case 0x2e7c4cu: goto label_2e7c4c;
        case 0x2e7c50u: goto label_2e7c50;
        case 0x2e7c54u: goto label_2e7c54;
        case 0x2e7c58u: goto label_2e7c58;
        case 0x2e7c5cu: goto label_2e7c5c;
        case 0x2e7c60u: goto label_2e7c60;
        case 0x2e7c64u: goto label_2e7c64;
        case 0x2e7c68u: goto label_2e7c68;
        case 0x2e7c6cu: goto label_2e7c6c;
        case 0x2e7c70u: goto label_2e7c70;
        case 0x2e7c74u: goto label_2e7c74;
        case 0x2e7c78u: goto label_2e7c78;
        case 0x2e7c7cu: goto label_2e7c7c;
        case 0x2e7c80u: goto label_2e7c80;
        case 0x2e7c84u: goto label_2e7c84;
        case 0x2e7c88u: goto label_2e7c88;
        case 0x2e7c8cu: goto label_2e7c8c;
        case 0x2e7c90u: goto label_2e7c90;
        case 0x2e7c94u: goto label_2e7c94;
        case 0x2e7c98u: goto label_2e7c98;
        case 0x2e7c9cu: goto label_2e7c9c;
        case 0x2e7ca0u: goto label_2e7ca0;
        case 0x2e7ca4u: goto label_2e7ca4;
        case 0x2e7ca8u: goto label_2e7ca8;
        case 0x2e7cacu: goto label_2e7cac;
        case 0x2e7cb0u: goto label_2e7cb0;
        case 0x2e7cb4u: goto label_2e7cb4;
        case 0x2e7cb8u: goto label_2e7cb8;
        case 0x2e7cbcu: goto label_2e7cbc;
        case 0x2e7cc0u: goto label_2e7cc0;
        case 0x2e7cc4u: goto label_2e7cc4;
        case 0x2e7cc8u: goto label_2e7cc8;
        case 0x2e7cccu: goto label_2e7ccc;
        case 0x2e7cd0u: goto label_2e7cd0;
        case 0x2e7cd4u: goto label_2e7cd4;
        case 0x2e7cd8u: goto label_2e7cd8;
        case 0x2e7cdcu: goto label_2e7cdc;
        case 0x2e7ce0u: goto label_2e7ce0;
        case 0x2e7ce4u: goto label_2e7ce4;
        case 0x2e7ce8u: goto label_2e7ce8;
        case 0x2e7cecu: goto label_2e7cec;
        case 0x2e7cf0u: goto label_2e7cf0;
        case 0x2e7cf4u: goto label_2e7cf4;
        case 0x2e7cf8u: goto label_2e7cf8;
        case 0x2e7cfcu: goto label_2e7cfc;
        case 0x2e7d00u: goto label_2e7d00;
        case 0x2e7d04u: goto label_2e7d04;
        default: break;
    }

    ctx->pc = 0x2e7ab0u;

label_2e7ab0:
    // 0x2e7ab0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e7ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2e7ab4:
    // 0x2e7ab4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2e7ab8:
    // 0x2e7ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e7abc:
    // 0x2e7abc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2e7abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2e7ac0:
    // 0x2e7ac0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2e7ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2e7ac4:
    // 0x2e7ac4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2e7ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2e7ac8:
    // 0x2e7ac8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2e7acc:
    // 0x2e7acc: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2e7accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_2e7ad0:
    // 0x2e7ad0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e7ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2e7ad4:
    // 0x2e7ad4: 0xc0bf262  jal         func_2FC988
label_2e7ad8:
    if (ctx->pc == 0x2E7AD8u) {
        ctx->pc = 0x2E7AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AD4u;
        // 0x2e7ad8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7ADCu;
        goto label_2e7adc;
    }
    ctx->pc = 0x2E7AD4u;
    SET_GPR_U32(ctx, 31, 0x2E7ADCu);
    ctx->pc = 0x2E7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AD4u;
    // 0x2e7ad8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC988u, 0x2E7AD4u, 0x2E7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7ADCu;
label_2e7adc:
    // 0x2e7adc: 0x50400081  beql        $v0, $zero, . + 4 + (0x81 << 2)
label_2e7ae0:
    if (ctx->pc == 0x2E7AE0u) {
        ctx->pc = 0x2E7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7ADCu;
        // 0x2e7ae0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7AE4u;
        goto label_2e7ae4;
    }
    ctx->pc = 0x2E7ADCu;
    {
        const bool branch_taken_0x2e7adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7adc) {
            ctx->pc = 0x2E7AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7ADCu;
            // 0x2e7ae0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7CE4u;
            goto label_2e7ce4;
        }
    }
    ctx->pc = 0x2E7AE4u;
label_2e7ae4:
    // 0x2e7ae4: 0x8e1111e8  lw          $s1, 0x11E8($s0)
    ctx->pc = 0x2e7ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
label_2e7ae8:
    // 0x2e7ae8: 0x5220007e  beql        $s1, $zero, . + 4 + (0x7E << 2)
label_2e7aec:
    if (ctx->pc == 0x2E7AECu) {
        ctx->pc = 0x2E7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AE8u;
        // 0x2e7aec: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7AF0u;
        goto label_2e7af0;
    }
    ctx->pc = 0x2E7AE8u;
    {
        const bool branch_taken_0x2e7ae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7ae8) {
            ctx->pc = 0x2E7AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7AE8u;
            // 0x2e7aec: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7CE4u;
            goto label_2e7ce4;
        }
    }
    ctx->pc = 0x2E7AF0u;
label_2e7af0:
    // 0x2e7af0: 0x8e241100  lw          $a0, 0x1100($s1)
    ctx->pc = 0x2e7af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4352)));
label_2e7af4:
    // 0x2e7af4: 0x5080007b  beql        $a0, $zero, . + 4 + (0x7B << 2)
label_2e7af8:
    if (ctx->pc == 0x2E7AF8u) {
        ctx->pc = 0x2E7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AF4u;
        // 0x2e7af8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7AFCu;
        goto label_2e7afc;
    }
    ctx->pc = 0x2E7AF4u;
    {
        const bool branch_taken_0x2e7af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7af4) {
            ctx->pc = 0x2E7AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7AF4u;
            // 0x2e7af8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7CE4u;
            goto label_2e7ce4;
        }
    }
    ctx->pc = 0x2E7AFCu;
label_2e7afc:
    // 0x2e7afc: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2e7afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2e7b00:
    // 0x2e7b00: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2e7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2e7b04:
    // 0x2e7b04: 0x40f809  jalr        $v0
label_2e7b08:
    if (ctx->pc == 0x2E7B08u) {
        ctx->pc = 0x2E7B0Cu;
        goto label_2e7b0c;
    }
    ctx->pc = 0x2E7B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E7B0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7B04u, 0x2E7B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7B0Cu;
label_2e7b0c:
    // 0x2e7b0c: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_2e7b10:
    if (ctx->pc == 0x2E7B10u) {
        ctx->pc = 0x2E7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B0Cu;
        // 0x2e7b10: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B14u;
        goto label_2e7b14;
    }
    ctx->pc = 0x2E7B0Cu;
    {
        const bool branch_taken_0x2e7b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B0Cu;
        // 0x2e7b10: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b0c) {
            ctx->pc = 0x2E7CA0u;
            goto label_2e7ca0;
        }
    }
    ctx->pc = 0x2E7B14u;
label_2e7b14:
    // 0x2e7b14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e7b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e7b18:
    // 0x2e7b18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7b1c:
    // 0x2e7b1c: 0x0  nop
    ctx->pc = 0x2e7b1cu;
    // NOP
label_2e7b20:
    // 0x2e7b20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e7b20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7b24:
    // 0x2e7b24: 0x0  nop
    ctx->pc = 0x2e7b24u;
    // NOP
label_2e7b28:
    // 0x2e7b28: 0x4502006e  bc1fl       . + 4 + (0x6E << 2)
label_2e7b2c:
    if (ctx->pc == 0x2E7B2Cu) {
        ctx->pc = 0x2E7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B28u;
        // 0x2e7b2c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B30u;
        goto label_2e7b30;
    }
    ctx->pc = 0x2E7B28u;
    {
        const bool branch_taken_0x2e7b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7b28) {
            ctx->pc = 0x2E7B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7B28u;
            // 0x2e7b2c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7CE4u;
            goto label_2e7ce4;
        }
    }
    ctx->pc = 0x2E7B30u;
label_2e7b30:
    // 0x2e7b30: 0x920211bd  lbu         $v0, 0x11BD($s0)
    ctx->pc = 0x2e7b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4541)));
label_2e7b34:
    // 0x2e7b34: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2e7b38:
    if (ctx->pc == 0x2E7B38u) {
        ctx->pc = 0x2E7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B34u;
        // 0x2e7b38: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B3Cu;
        goto label_2e7b3c;
    }
    ctx->pc = 0x2E7B34u;
    {
        const bool branch_taken_0x2e7b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B34u;
        // 0x2e7b38: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b34) {
            ctx->pc = 0x2E7B98u;
            goto label_2e7b98;
        }
    }
    ctx->pc = 0x2E7B3Cu;
label_2e7b3c:
    // 0x2e7b3c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2e7b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2e7b40:
    // 0x2e7b40: 0x24524f20  addiu       $s2, $v0, 0x4F20
    ctx->pc = 0x2e7b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
label_2e7b44:
    // 0x2e7b44: 0x24a51768  addiu       $a1, $a1, 0x1768
    ctx->pc = 0x2e7b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5992));
label_2e7b48:
    // 0x2e7b48: 0xc0b0b82  jal         func_2C2E08
label_2e7b4c:
    if (ctx->pc == 0x2E7B4Cu) {
        ctx->pc = 0x2E7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B48u;
        // 0x2e7b4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B50u;
        goto label_2e7b50;
    }
    ctx->pc = 0x2E7B48u;
    SET_GPR_U32(ctx, 31, 0x2E7B50u);
    ctx->pc = 0x2E7B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B48u;
    // 0x2e7b4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E08u, 0x2E7B48u, 0x2E7B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B50u;
label_2e7b50:
    // 0x2e7b50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2e7b54:
    if (ctx->pc == 0x2E7B54u) {
        ctx->pc = 0x2E7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B50u;
        // 0x2e7b54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B58u;
        goto label_2e7b58;
    }
    ctx->pc = 0x2E7B50u;
    {
        const bool branch_taken_0x2e7b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B50u;
        // 0x2e7b54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b50) {
            ctx->pc = 0x2E7B88u;
            goto label_2e7b88;
        }
    }
    ctx->pc = 0x2E7B58u;
label_2e7b58:
    // 0x2e7b58: 0x8e231100  lw          $v1, 0x1100($s1)
    ctx->pc = 0x2e7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4352)));
label_2e7b5c:
    // 0x2e7b5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e7b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b60:
    // 0x2e7b60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e7b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b64:
    // 0x2e7b64: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x2e7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2e7b68:
    // 0x2e7b68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e7b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b6c:
    // 0x2e7b6c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e7b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7b70:
    // 0x2e7b70: 0xc0b0a7a  jal         func_2C29E8
label_2e7b74:
    if (ctx->pc == 0x2E7B74u) {
        ctx->pc = 0x2E7B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B70u;
        // 0x2e7b74: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B78u;
        goto label_2e7b78;
    }
    ctx->pc = 0x2E7B70u;
    SET_GPR_U32(ctx, 31, 0x2E7B78u);
    ctx->pc = 0x2E7B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B70u;
    // 0x2e7b74: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29E8u, 0x2E7B70u, 0x2E7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B78u;
label_2e7b78:
    // 0x2e7b78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e7b7c:
    if (ctx->pc == 0x2E7B7Cu) {
        ctx->pc = 0x2E7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B78u;
        // 0x2e7b7c: 0xae0211ac  sw          $v0, 0x11AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B80u;
        goto label_2e7b80;
    }
    ctx->pc = 0x2E7B78u;
    {
        const bool branch_taken_0x2e7b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B78u;
        // 0x2e7b7c: 0xae0211ac  sw          $v0, 0x11AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b78) {
            ctx->pc = 0x2E7B88u;
            goto label_2e7b88;
        }
    }
    ctx->pc = 0x2E7B80u;
label_2e7b80:
    // 0x2e7b80: 0xc0b0eaa  jal         func_2C3AA8
label_2e7b84:
    if (ctx->pc == 0x2E7B84u) {
        ctx->pc = 0x2E7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B80u;
        // 0x2e7b84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B88u;
        goto label_2e7b88;
    }
    ctx->pc = 0x2E7B80u;
    SET_GPR_U32(ctx, 31, 0x2E7B88u);
    ctx->pc = 0x2E7B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B80u;
    // 0x2e7b84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3AA8u, 0x2E7B80u, 0x2E7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B88u;
label_2e7b88:
    // 0x2e7b88: 0xc095e50  jal         func_257940
label_2e7b8c:
    if (ctx->pc == 0x2E7B8Cu) {
        ctx->pc = 0x2E7B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B88u;
        // 0x2e7b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B90u;
        goto label_2e7b90;
    }
    ctx->pc = 0x2E7B88u;
    SET_GPR_U32(ctx, 31, 0x2E7B90u);
    ctx->pc = 0x2E7B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B88u;
    // 0x2e7b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257940u, 0x2E7B88u, 0x2E7B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B90u;
label_2e7b90:
    // 0x2e7b90: 0x10000053  b           . + 4 + (0x53 << 2)
label_2e7b94:
    if (ctx->pc == 0x2E7B94u) {
        ctx->pc = 0x2E7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B90u;
        // 0x2e7b94: 0xa20011bd  sb          $zero, 0x11BD($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4541), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B98u;
        goto label_2e7b98;
    }
    ctx->pc = 0x2E7B90u;
    {
        const bool branch_taken_0x2e7b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B90u;
        // 0x2e7b94: 0xa20011bd  sb          $zero, 0x11BD($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4541), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b90) {
            ctx->pc = 0x2E7CE0u;
            goto label_2e7ce0;
        }
    }
    ctx->pc = 0x2E7B98u;
label_2e7b98:
    // 0x2e7b98: 0x8e331100  lw          $s3, 0x1100($s1)
    ctx->pc = 0x2e7b98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4352)));
label_2e7b9c:
    // 0x2e7b9c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x2e7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_2e7ba0:
    // 0x2e7ba0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e7ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2e7ba4:
    // 0x2e7ba4: 0x24423d20  addiu       $v0, $v0, 0x3D20
    ctx->pc = 0x2e7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
label_2e7ba8:
    // 0x2e7ba8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e7bac:
    // 0x2e7bac: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2e7bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2e7bb0:
    // 0x2e7bb0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2e7bb4:
    // 0x2e7bb4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2e7bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2e7bb8:
    // 0x2e7bb8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e7bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2e7bbc:
    // 0x2e7bbc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2e7bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2e7bc0:
    // 0x2e7bc0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2e7bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2e7bc4:
    // 0x2e7bc4: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
label_2e7bc8:
    if (ctx->pc == 0x2E7BC8u) {
        ctx->pc = 0x2E7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BC4u;
        // 0x2e7bc8: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BCCu;
        goto label_2e7bcc;
    }
    ctx->pc = 0x2E7BC4u;
    {
        const bool branch_taken_0x2e7bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BC4u;
        // 0x2e7bc8: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bc4) {
            ctx->pc = 0x2E7CE0u;
            goto label_2e7ce0;
        }
    }
    ctx->pc = 0x2E7BCCu;
label_2e7bcc:
    // 0x2e7bcc: 0x3c120200  lui         $s2, 0x200
    ctx->pc = 0x2e7bccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)512 << 16));
label_2e7bd0:
    // 0x2e7bd0: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x2e7bd0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
label_2e7bd4:
    // 0x2e7bd4: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x2e7bd4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
label_2e7bd8:
    // 0x2e7bd8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2e7bdc:
    // 0x2e7bdc: 0x0  nop
    ctx->pc = 0x2e7bdcu;
    // NOP
label_2e7be0:
    // 0x2e7be0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e7be0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7be4:
    // 0x2e7be4: 0x1211001f  beq         $s0, $s1, . + 4 + (0x1F << 2)
label_2e7be8:
    if (ctx->pc == 0x2E7BE8u) {
        ctx->pc = 0x2E7BECu;
        goto label_2e7bec;
    }
    ctx->pc = 0x2E7BE4u;
    {
        const bool branch_taken_0x2e7be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x2e7be4) {
            ctx->pc = 0x2E7C64u;
            goto label_2e7c64;
        }
    }
    ctx->pc = 0x2E7BECu;
label_2e7bec:
    // 0x2e7bec: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2e7becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2e7bf0:
    // 0x2e7bf0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e7bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e7bf4:
    // 0x2e7bf4: 0x1052001a  beq         $v0, $s2, . + 4 + (0x1A << 2)
label_2e7bf8:
    if (ctx->pc == 0x2E7BF8u) {
        ctx->pc = 0x2E7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BF4u;
        // 0x2e7bf8: 0x26640230  addiu       $a0, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BFCu;
        goto label_2e7bfc;
    }
    ctx->pc = 0x2E7BF4u;
    {
        const bool branch_taken_0x2e7bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BF4u;
        // 0x2e7bf8: 0x26640230  addiu       $a0, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bf4) {
            ctx->pc = 0x2E7C60u;
            goto label_2e7c60;
        }
    }
    ctx->pc = 0x2E7BFCu;
label_2e7bfc:
    // 0x2e7bfc: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2e7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2e7c00:
    // 0x2e7c00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7c04:
    // 0x2e7c04: 0xc0b4bc6  jal         func_2D2F18
label_2e7c08:
    if (ctx->pc == 0x2E7C08u) {
        ctx->pc = 0x2E7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C04u;
        // 0x2e7c08: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C0Cu;
        goto label_2e7c0c;
    }
    ctx->pc = 0x2E7C04u;
    SET_GPR_U32(ctx, 31, 0x2E7C0Cu);
    ctx->pc = 0x2E7C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C04u;
    // 0x2e7c08: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F18u, 0x2E7C04u, 0x2E7C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C0Cu;
label_2e7c0c:
    // 0x2e7c0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e7c10:
    // 0x2e7c10: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2e7c14:
    if (ctx->pc == 0x2E7C14u) {
        ctx->pc = 0x2E7C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C10u;
        // 0x2e7c14: 0x26a44f20  addiu       $a0, $s5, 0x4F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C18u;
        goto label_2e7c18;
    }
    ctx->pc = 0x2E7C10u;
    {
        const bool branch_taken_0x2e7c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C10u;
        // 0x2e7c14: 0x26a44f20  addiu       $a0, $s5, 0x4F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c10) {
            ctx->pc = 0x2E7C60u;
            goto label_2e7c60;
        }
    }
    ctx->pc = 0x2E7C18u;
label_2e7c18:
    // 0x2e7c18: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2e7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2e7c1c:
    // 0x2e7c1c: 0x26851770  addiu       $a1, $s4, 0x1770
    ctx->pc = 0x2e7c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 6000));
label_2e7c20:
    // 0x2e7c20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e7c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7c24:
    // 0x2e7c24: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e7c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7c28:
    // 0x2e7c28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e7c28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7c2c:
    // 0x2e7c2c: 0xc0b0a34  jal         func_2C28D0
label_2e7c30:
    if (ctx->pc == 0x2E7C30u) {
        ctx->pc = 0x2E7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C2Cu;
        // 0x2e7c30: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C34u;
        goto label_2e7c34;
    }
    ctx->pc = 0x2E7C2Cu;
    SET_GPR_U32(ctx, 31, 0x2E7C34u);
    ctx->pc = 0x2E7C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C2Cu;
    // 0x2e7c30: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28D0u, 0x2E7C2Cu, 0x2E7C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C34u;
label_2e7c34:
    // 0x2e7c34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e7c38:
    if (ctx->pc == 0x2E7C38u) {
        ctx->pc = 0x2E7C3Cu;
        goto label_2e7c3c;
    }
    ctx->pc = 0x2E7C34u;
    {
        const bool branch_taken_0x2e7c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c34) {
            ctx->pc = 0x2E7C44u;
            goto label_2e7c44;
        }
    }
    ctx->pc = 0x2E7C3Cu;
label_2e7c3c:
    // 0x2e7c3c: 0xc0b0ef2  jal         func_2C3BC8
label_2e7c40:
    if (ctx->pc == 0x2E7C40u) {
        ctx->pc = 0x2E7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C3Cu;
        // 0x2e7c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C44u;
        goto label_2e7c44;
    }
    ctx->pc = 0x2E7C3Cu;
    SET_GPR_U32(ctx, 31, 0x2E7C44u);
    ctx->pc = 0x2E7C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C3Cu;
    // 0x2e7c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x2E7C3Cu, 0x2E7C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C44u;
label_2e7c44:
    // 0x2e7c44: 0xc095e50  jal         func_257940
label_2e7c48:
    if (ctx->pc == 0x2E7C48u) {
        ctx->pc = 0x2E7C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C44u;
        // 0x2e7c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C4Cu;
        goto label_2e7c4c;
    }
    ctx->pc = 0x2E7C44u;
    SET_GPR_U32(ctx, 31, 0x2E7C4Cu);
    ctx->pc = 0x2E7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C44u;
    // 0x2e7c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257940u, 0x2E7C44u, 0x2E7C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C4Cu;
label_2e7c4c:
    // 0x2e7c4c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2e7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2e7c50:
    // 0x2e7c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7c54:
    // 0x2e7c54: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2e7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2e7c58:
    // 0x2e7c58: 0x40f809  jalr        $v0
label_2e7c5c:
    if (ctx->pc == 0x2E7C5Cu) {
        ctx->pc = 0x2E7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C58u;
        // 0x2e7c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C60u;
        goto label_2e7c60;
    }
    ctx->pc = 0x2E7C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E7C60u);
        ctx->pc = 0x2E7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C58u;
        // 0x2e7c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7C58u, 0x2E7C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7C60u;
label_2e7c60:
    // 0x2e7c60: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2e7c64:
    // 0x2e7c64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2e7c68:
    if (ctx->pc == 0x2E7C68u) {
        ctx->pc = 0x2E7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C64u;
        // 0x2e7c68: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C6Cu;
        goto label_2e7c6c;
    }
    ctx->pc = 0x2E7C64u;
    {
        const bool branch_taken_0x2e7c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c64) {
            ctx->pc = 0x2E7C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7C64u;
            // 0x2e7c68: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7C78u;
            goto label_2e7c78;
        }
    }
    ctx->pc = 0x2E7C6Cu;
label_2e7c6c:
    // 0x2e7c6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e7c70:
    // 0x2e7c70: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e7c74:
    if (ctx->pc == 0x2E7C74u) {
        ctx->pc = 0x2E7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C70u;
        // 0x2e7c74: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C78u;
        goto label_2e7c78;
    }
    ctx->pc = 0x2E7C70u;
    {
        const bool branch_taken_0x2e7c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C70u;
        // 0x2e7c74: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c70) {
            ctx->pc = 0x2E7C88u;
            goto label_2e7c88;
        }
    }
    ctx->pc = 0x2E7C78u;
label_2e7c78:
    // 0x2e7c78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2e7c7c:
    if (ctx->pc == 0x2E7C7Cu) {
        ctx->pc = 0x2E7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C78u;
        // 0x2e7c7c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C80u;
        goto label_2e7c80;
    }
    ctx->pc = 0x2E7C78u;
    {
        const bool branch_taken_0x2e7c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C78u;
        // 0x2e7c7c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c78) {
            ctx->pc = 0x2E7C8Cu;
            goto label_2e7c8c;
        }
    }
    ctx->pc = 0x2E7C80u;
label_2e7c80:
    // 0x2e7c80: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2e7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2e7c84:
    // 0x2e7c84: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e7c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2e7c88:
    // 0x2e7c88: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2e7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2e7c8c:
    // 0x2e7c8c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2e7c90:
    // 0x2e7c90: 0x1462ffd3  bne         $v1, $v0, . + 4 + (-0x2D << 2)
label_2e7c94:
    if (ctx->pc == 0x2E7C94u) {
        ctx->pc = 0x2E7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C90u;
        // 0x2e7c94: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C98u;
        goto label_2e7c98;
    }
    ctx->pc = 0x2E7C90u;
    {
        const bool branch_taken_0x2e7c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C90u;
        // 0x2e7c94: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c90) {
            ctx->pc = 0x2E7BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7be0;
        }
    }
    ctx->pc = 0x2E7C98u;
label_2e7c98:
    // 0x2e7c98: 0x10000012  b           . + 4 + (0x12 << 2)
label_2e7c9c:
    if (ctx->pc == 0x2E7C9Cu) {
        ctx->pc = 0x2E7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C98u;
        // 0x2e7c9c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CA0u;
        goto label_2e7ca0;
    }
    ctx->pc = 0x2E7C98u;
    {
        const bool branch_taken_0x2e7c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C98u;
        // 0x2e7c9c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c98) {
            ctx->pc = 0x2E7CE4u;
            goto label_2e7ce4;
        }
    }
    ctx->pc = 0x2E7CA0u;
label_2e7ca0:
    // 0x2e7ca0: 0x8e221100  lw          $v0, 0x1100($s1)
    ctx->pc = 0x2e7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4352)));
label_2e7ca4:
    // 0x2e7ca4: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x2e7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2e7ca8:
    // 0x2e7ca8: 0x8c430224  lw          $v1, 0x224($v0)
    ctx->pc = 0x2e7ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
label_2e7cac:
    // 0x2e7cac: 0x2463002e  addiu       $v1, $v1, 0x2E
    ctx->pc = 0x2e7cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 46));
label_2e7cb0:
    // 0x2e7cb0: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
label_2e7cb4:
    if (ctx->pc == 0x2E7CB4u) {
        ctx->pc = 0x2E7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CB0u;
        // 0x2e7cb4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CB8u;
        goto label_2e7cb8;
    }
    ctx->pc = 0x2E7CB0u;
    {
        const bool branch_taken_0x2e7cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CB0u;
        // 0x2e7cb4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cb0) {
            ctx->pc = 0x2E7CE4u;
            goto label_2e7ce4;
        }
    }
    ctx->pc = 0x2E7CB8u;
label_2e7cb8:
    // 0x2e7cb8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2e7cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7cbc:
    // 0x2e7cbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e7cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e7cc0:
    // 0x2e7cc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7cc4:
    // 0x2e7cc4: 0x0  nop
    ctx->pc = 0x2e7cc4u;
    // NOP
label_2e7cc8:
    // 0x2e7cc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e7cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7ccc:
    // 0x2e7ccc: 0x0  nop
    ctx->pc = 0x2e7cccu;
    // NOP
label_2e7cd0:
    // 0x2e7cd0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2e7cd4:
    if (ctx->pc == 0x2E7CD4u) {
        ctx->pc = 0x2E7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CD0u;
        // 0x2e7cd4: 0xdfb10038  ld          $s1, 0x38($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CD8u;
        goto label_2e7cd8;
    }
    ctx->pc = 0x2E7CD0u;
    {
        const bool branch_taken_0x2e7cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7cd0) {
            ctx->pc = 0x2E7CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7CD0u;
            // 0x2e7cd4: 0xdfb10038  ld          $s1, 0x38($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7CE8u;
            goto label_2e7ce8;
        }
    }
    ctx->pc = 0x2E7CD8u;
label_2e7cd8:
    // 0x2e7cd8: 0xc095e50  jal         func_257940
label_2e7cdc:
    if (ctx->pc == 0x2E7CDCu) {
        ctx->pc = 0x2E7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CD8u;
        // 0x2e7cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CE0u;
        goto label_2e7ce0;
    }
    ctx->pc = 0x2E7CD8u;
    SET_GPR_U32(ctx, 31, 0x2E7CE0u);
    ctx->pc = 0x2E7CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7CD8u;
    // 0x2e7cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257940u, 0x2E7CD8u, 0x2E7CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CE0u;
label_2e7ce0:
    // 0x2e7ce0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e7ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e7ce4:
    // 0x2e7ce4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2e7ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2e7ce8:
    // 0x2e7ce8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2e7ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7cec:
    // 0x2e7cec: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2e7cecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2e7cf0:
    // 0x2e7cf0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2e7cf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e7cf4:
    // 0x2e7cf4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2e7cf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2e7cf8:
    // 0x2e7cf8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e7cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e7cfc:
    // 0x2e7cfc: 0x3e00008  jr          $ra
label_2e7d00:
    if (ctx->pc == 0x2E7D00u) {
        ctx->pc = 0x2E7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CFCu;
        // 0x2e7d00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D04u;
        goto label_2e7d04;
    }
    ctx->pc = 0x2E7CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CFCu;
        // 0x2e7d00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7D04u;
label_2e7d04:
    // 0x2e7d04: 0x0  nop
    ctx->pc = 0x2e7d04u;
    // NOP
    ctx->pc = 0x2e7d08u;
}
