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

// Function: sub_00198B90
// Address: 0x198b90 - 0x198dc0
void sub_00198B90_0x198b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198B90_0x198b90");
#endif

    switch (ctx->pc) {
        case 0x198b90u: goto label_198b90;
        case 0x198b94u: goto label_198b94;
        case 0x198b98u: goto label_198b98;
        case 0x198b9cu: goto label_198b9c;
        case 0x198ba0u: goto label_198ba0;
        case 0x198ba4u: goto label_198ba4;
        case 0x198ba8u: goto label_198ba8;
        case 0x198bacu: goto label_198bac;
        case 0x198bb0u: goto label_198bb0;
        case 0x198bb4u: goto label_198bb4;
        case 0x198bb8u: goto label_198bb8;
        case 0x198bbcu: goto label_198bbc;
        case 0x198bc0u: goto label_198bc0;
        case 0x198bc4u: goto label_198bc4;
        case 0x198bc8u: goto label_198bc8;
        case 0x198bccu: goto label_198bcc;
        case 0x198bd0u: goto label_198bd0;
        case 0x198bd4u: goto label_198bd4;
        case 0x198bd8u: goto label_198bd8;
        case 0x198bdcu: goto label_198bdc;
        case 0x198be0u: goto label_198be0;
        case 0x198be4u: goto label_198be4;
        case 0x198be8u: goto label_198be8;
        case 0x198becu: goto label_198bec;
        case 0x198bf0u: goto label_198bf0;
        case 0x198bf4u: goto label_198bf4;
        case 0x198bf8u: goto label_198bf8;
        case 0x198bfcu: goto label_198bfc;
        case 0x198c00u: goto label_198c00;
        case 0x198c04u: goto label_198c04;
        case 0x198c08u: goto label_198c08;
        case 0x198c0cu: goto label_198c0c;
        case 0x198c10u: goto label_198c10;
        case 0x198c14u: goto label_198c14;
        case 0x198c18u: goto label_198c18;
        case 0x198c1cu: goto label_198c1c;
        case 0x198c20u: goto label_198c20;
        case 0x198c24u: goto label_198c24;
        case 0x198c28u: goto label_198c28;
        case 0x198c2cu: goto label_198c2c;
        case 0x198c30u: goto label_198c30;
        case 0x198c34u: goto label_198c34;
        case 0x198c38u: goto label_198c38;
        case 0x198c3cu: goto label_198c3c;
        case 0x198c40u: goto label_198c40;
        case 0x198c44u: goto label_198c44;
        case 0x198c48u: goto label_198c48;
        case 0x198c4cu: goto label_198c4c;
        case 0x198c50u: goto label_198c50;
        case 0x198c54u: goto label_198c54;
        case 0x198c58u: goto label_198c58;
        case 0x198c5cu: goto label_198c5c;
        case 0x198c60u: goto label_198c60;
        case 0x198c64u: goto label_198c64;
        case 0x198c68u: goto label_198c68;
        case 0x198c6cu: goto label_198c6c;
        case 0x198c70u: goto label_198c70;
        case 0x198c74u: goto label_198c74;
        case 0x198c78u: goto label_198c78;
        case 0x198c7cu: goto label_198c7c;
        case 0x198c80u: goto label_198c80;
        case 0x198c84u: goto label_198c84;
        case 0x198c88u: goto label_198c88;
        case 0x198c8cu: goto label_198c8c;
        case 0x198c90u: goto label_198c90;
        case 0x198c94u: goto label_198c94;
        case 0x198c98u: goto label_198c98;
        case 0x198c9cu: goto label_198c9c;
        case 0x198ca0u: goto label_198ca0;
        case 0x198ca4u: goto label_198ca4;
        case 0x198ca8u: goto label_198ca8;
        case 0x198cacu: goto label_198cac;
        case 0x198cb0u: goto label_198cb0;
        case 0x198cb4u: goto label_198cb4;
        case 0x198cb8u: goto label_198cb8;
        case 0x198cbcu: goto label_198cbc;
        case 0x198cc0u: goto label_198cc0;
        case 0x198cc4u: goto label_198cc4;
        case 0x198cc8u: goto label_198cc8;
        case 0x198cccu: goto label_198ccc;
        case 0x198cd0u: goto label_198cd0;
        case 0x198cd4u: goto label_198cd4;
        case 0x198cd8u: goto label_198cd8;
        case 0x198cdcu: goto label_198cdc;
        case 0x198ce0u: goto label_198ce0;
        case 0x198ce4u: goto label_198ce4;
        case 0x198ce8u: goto label_198ce8;
        case 0x198cecu: goto label_198cec;
        case 0x198cf0u: goto label_198cf0;
        case 0x198cf4u: goto label_198cf4;
        case 0x198cf8u: goto label_198cf8;
        case 0x198cfcu: goto label_198cfc;
        case 0x198d00u: goto label_198d00;
        case 0x198d04u: goto label_198d04;
        case 0x198d08u: goto label_198d08;
        case 0x198d0cu: goto label_198d0c;
        case 0x198d10u: goto label_198d10;
        case 0x198d14u: goto label_198d14;
        case 0x198d18u: goto label_198d18;
        case 0x198d1cu: goto label_198d1c;
        case 0x198d20u: goto label_198d20;
        case 0x198d24u: goto label_198d24;
        case 0x198d28u: goto label_198d28;
        case 0x198d2cu: goto label_198d2c;
        case 0x198d30u: goto label_198d30;
        case 0x198d34u: goto label_198d34;
        case 0x198d38u: goto label_198d38;
        case 0x198d3cu: goto label_198d3c;
        case 0x198d40u: goto label_198d40;
        case 0x198d44u: goto label_198d44;
        case 0x198d48u: goto label_198d48;
        case 0x198d4cu: goto label_198d4c;
        case 0x198d50u: goto label_198d50;
        case 0x198d54u: goto label_198d54;
        case 0x198d58u: goto label_198d58;
        case 0x198d5cu: goto label_198d5c;
        case 0x198d60u: goto label_198d60;
        case 0x198d64u: goto label_198d64;
        case 0x198d68u: goto label_198d68;
        case 0x198d6cu: goto label_198d6c;
        case 0x198d70u: goto label_198d70;
        case 0x198d74u: goto label_198d74;
        case 0x198d78u: goto label_198d78;
        case 0x198d7cu: goto label_198d7c;
        case 0x198d80u: goto label_198d80;
        case 0x198d84u: goto label_198d84;
        case 0x198d88u: goto label_198d88;
        case 0x198d8cu: goto label_198d8c;
        case 0x198d90u: goto label_198d90;
        case 0x198d94u: goto label_198d94;
        case 0x198d98u: goto label_198d98;
        case 0x198d9cu: goto label_198d9c;
        case 0x198da0u: goto label_198da0;
        case 0x198da4u: goto label_198da4;
        case 0x198da8u: goto label_198da8;
        case 0x198dacu: goto label_198dac;
        case 0x198db0u: goto label_198db0;
        case 0x198db4u: goto label_198db4;
        case 0x198db8u: goto label_198db8;
        case 0x198dbcu: goto label_198dbc;
        default: break;
    }

    ctx->pc = 0x198b90u;

label_198b90:
    // 0x198b90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_198b94:
    // 0x198b94: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x198b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_198b98:
    // 0x198b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_198b9c:
    // 0x198b9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x198b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_198ba0:
    // 0x198ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198ba4:
    // 0x198ba4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x198ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_198ba8:
    // 0x198ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198bac:
    // 0x198bac: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x198bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_198bb0:
    // 0x198bb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x198bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_198bb4:
    // 0x198bb4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x198bb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_198bb8:
    // 0x198bb8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x198bb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_198bbc:
    // 0x198bbc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x198bbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_198bc0:
    // 0x198bc0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x198bc0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_198bc4:
    // 0x198bc4: 0x8c43efe8  lw          $v1, -0x1018($v0)
    ctx->pc = 0x198bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963176)));
label_198bc8:
    // 0x198bc8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x198bc8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_198bcc:
    // 0x198bcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x198bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_198bd0:
    // 0x198bd0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x198bd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_198bd4:
    // 0x198bd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x198bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_198bd8:
    // 0x198bd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x198bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_198bdc:
    // 0x198bdc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x198bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_198be0:
    // 0x198be0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_198be4:
    if (ctx->pc == 0x198BE4u) {
        ctx->pc = 0x198BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BE0u;
        // 0x198be4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198BE8u;
        goto label_198be8;
    }
    ctx->pc = 0x198BE0u;
    {
        const bool branch_taken_0x198be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BE0u;
        // 0x198be4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198be0) {
            ctx->pc = 0x198BF0u;
            goto label_198bf0;
        }
    }
    ctx->pc = 0x198BE8u;
label_198be8:
    // 0x198be8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x198be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_198bec:
    // 0x198bec: 0xac4008d4  sw          $zero, 0x8D4($v0)
    ctx->pc = 0x198becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2260), GPR_U32(ctx, 0));
label_198bf0:
    // 0x198bf0: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x198bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_198bf4:
    // 0x198bf4: 0x26130040  addiu       $s3, $s0, 0x40
    ctx->pc = 0x198bf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_198bf8:
    // 0x198bf8: 0x26140060  addiu       $s4, $s0, 0x60
    ctx->pc = 0x198bf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_198bfc:
    // 0x198bfc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_198c00:
    if (ctx->pc == 0x198C00u) {
        ctx->pc = 0x198C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BFCu;
        // 0x198c00: 0x3c160048  lui         $s6, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C04u;
        goto label_198c04;
    }
    ctx->pc = 0x198BFCu;
    {
        const bool branch_taken_0x198bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BFCu;
        // 0x198c00: 0x3c160048  lui         $s6, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198bfc) {
            ctx->pc = 0x198C28u;
            goto label_198c28;
        }
    }
    ctx->pc = 0x198C04u;
label_198c04:
    // 0x198c04: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x198c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_198c08:
    // 0x198c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198c0c:
    // 0x198c0c: 0x24430898  addiu       $v1, $v0, 0x898
    ctx->pc = 0x198c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2200));
label_198c10:
    // 0x198c10: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x198c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_198c14:
    // 0x198c14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x198c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_198c18:
    // 0x198c18: 0x2ca2000f  sltiu       $v0, $a1, 0xF
    ctx->pc = 0x198c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_198c1c:
    // 0x198c1c: 0x0  nop
    ctx->pc = 0x198c1cu;
    // NOP
label_198c20:
    // 0x198c20: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_198c24:
    if (ctx->pc == 0x198C24u) {
        ctx->pc = 0x198C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C20u;
        // 0x198c24: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C28u;
        goto label_198c28;
    }
    ctx->pc = 0x198C20u;
    {
        const bool branch_taken_0x198c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C20u;
        // 0x198c24: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c20) {
            ctx->pc = 0x198C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198c10;
        }
    }
    ctx->pc = 0x198C28u;
label_198c28:
    // 0x198c28: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198c2c:
    // 0x198c2c: 0xc0f71b8  jal         func_3DC6E0
label_198c30:
    if (ctx->pc == 0x198C30u) {
        ctx->pc = 0x198C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C2Cu;
        // 0x198c30: 0x2484efe8  addiu       $a0, $a0, -0x1018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C34u;
        goto label_198c34;
    }
    ctx->pc = 0x198C2Cu;
    SET_GPR_U32(ctx, 31, 0x198C34u);
    ctx->pc = 0x198C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198C2Cu;
    // 0x198c30: 0x2484efe8  addiu       $a0, $a0, -0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x198C2Cu, 0x198C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C34u;
label_198c34:
    // 0x198c34: 0xc08da4c  jal         func_236930
label_198c38:
    if (ctx->pc == 0x198C38u) {
        ctx->pc = 0x198C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C34u;
        // 0x198c38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C3Cu;
        goto label_198c3c;
    }
    ctx->pc = 0x198C34u;
    SET_GPR_U32(ctx, 31, 0x198C3Cu);
    ctx->pc = 0x198C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198C34u;
    // 0x198c38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236930u, 0x198C34u, 0x198C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C3Cu;
label_198c3c:
    // 0x198c3c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x198c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198c40:
    // 0x198c40: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x198c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_198c44:
    // 0x198c44: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x198c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_198c48:
    // 0x198c48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x198c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_198c4c:
    // 0x198c4c: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x198c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_198c50:
    // 0x198c50: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x198c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_198c54:
    // 0x198c54: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x198c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_198c58:
    // 0x198c58: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x198c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_198c5c:
    // 0x198c5c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x198c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198c60:
    // 0x198c60: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x198c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_198c64:
    // 0x198c64: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x198c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_198c68:
    // 0x198c68: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x198c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_198c6c:
    // 0x198c6c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x198c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_198c70:
    // 0x198c70: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x198c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_198c74:
    // 0x198c74: 0xae040098  sw          $a0, 0x98($s0)
    ctx->pc = 0x198c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 4));
label_198c78:
    // 0x198c78: 0xe61500a8  swc1        $f21, 0xA8($s0)
    ctx->pc = 0x198c78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
label_198c7c:
    // 0x198c7c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x198c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_198c80:
    // 0x198c80: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x198c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_198c84:
    // 0x198c84: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x198c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_198c88:
    // 0x198c88: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x198c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_198c8c:
    // 0x198c8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_198c90:
    if (ctx->pc == 0x198C90u) {
        ctx->pc = 0x198C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C8Cu;
        // 0x198c90: 0xe61400ac  swc1        $f20, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C94u;
        goto label_198c94;
    }
    ctx->pc = 0x198C8Cu;
    {
        const bool branch_taken_0x198c8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x198C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C8Cu;
        // 0x198c90: 0xe61400ac  swc1        $f20, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c8c) {
            ctx->pc = 0x198C98u;
            goto label_198c98;
        }
    }
    ctx->pc = 0x198C94u;
label_198c94:
    // 0x198c94: 0xe60200ac  swc1        $f2, 0xAC($s0)
    ctx->pc = 0x198c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_198c98:
    // 0x198c98: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x198c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198c9c:
    // 0x198c9c: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x198c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_198ca0:
    // 0x198ca0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x198ca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_198ca4:
    // 0x198ca4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x198ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_198ca8:
    // 0x198ca8: 0x0  nop
    ctx->pc = 0x198ca8u;
    // NOP
label_198cac:
    // 0x198cac: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_198cb0:
    if (ctx->pc == 0x198CB0u) {
        ctx->pc = 0x198CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CACu;
        // 0x198cb0: 0xae15009c  sw          $s5, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CB4u;
        goto label_198cb4;
    }
    ctx->pc = 0x198CACu;
    {
        const bool branch_taken_0x198cac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198cac) {
            ctx->pc = 0x198CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198CACu;
            // 0x198cb0: 0xae15009c  sw          $s5, 0x9C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198CC4u;
            goto label_198cc4;
        }
    }
    ctx->pc = 0x198CB4u;
label_198cb4:
    // 0x198cb4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x198cb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_198cb8:
    // 0x198cb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_198cbc:
    // 0x198cbc: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x198cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_198cc0:
    // 0x198cc0: 0xae15009c  sw          $s5, 0x9C($s0)
    ctx->pc = 0x198cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 21));
label_198cc4:
    // 0x198cc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x198cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_198cc8:
    // 0x198cc8: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x198cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_198ccc:
    // 0x198ccc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198cd0:
    // 0x198cd0: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x198cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_198cd4:
    // 0x198cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198cd8:
    // 0x198cd8: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x198cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_198cdc:
    // 0x198cdc: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x198cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_198ce0:
    // 0x198ce0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x198ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_198ce4:
    // 0x198ce4: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x198ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_198ce8:
    // 0x198ce8: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x198ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_198cec:
    // 0x198cec: 0xc066c64  jal         func_19B190
label_198cf0:
    if (ctx->pc == 0x198CF0u) {
        ctx->pc = 0x198CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CECu;
        // 0x198cf0: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CF4u;
        goto label_198cf4;
    }
    ctx->pc = 0x198CECu;
    SET_GPR_U32(ctx, 31, 0x198CF4u);
    ctx->pc = 0x198CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198CECu;
    // 0x198cf0: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B190u, 0x198CECu, 0x198CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198CF4u;
label_198cf4:
    // 0x198cf4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x198cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_198cf8:
    // 0x198cf8: 0xae1700b4  sw          $s7, 0xB4($s0)
    ctx->pc = 0x198cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 23));
label_198cfc:
    // 0x198cfc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x198cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_198d00:
    // 0x198d00: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x198d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_198d04:
    // 0x198d04: 0x8ec22b00  lw          $v0, 0x2B00($s6)
    ctx->pc = 0x198d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
label_198d08:
    // 0x198d08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_198d0c:
    if (ctx->pc == 0x198D0Cu) {
        ctx->pc = 0x198D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D08u;
        // 0x198d0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D10u;
        goto label_198d10;
    }
    ctx->pc = 0x198D08u;
    {
        const bool branch_taken_0x198d08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x198D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D08u;
        // 0x198d0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d08) {
            ctx->pc = 0x198D24u;
            goto label_198d24;
        }
    }
    ctx->pc = 0x198D10u;
label_198d10:
    // 0x198d10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x198d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_198d14:
    // 0x198d14: 0x0  nop
    ctx->pc = 0x198d14u;
    // NOP
label_198d18:
    // 0x198d18: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x198d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_198d1c:
    // 0x198d1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_198d20:
    if (ctx->pc == 0x198D20u) {
        ctx->pc = 0x198D24u;
        goto label_198d24;
    }
    ctx->pc = 0x198D1Cu;
    {
        const bool branch_taken_0x198d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198d1c) {
            ctx->pc = 0x198D3Cu;
            goto label_198d3c;
        }
    }
    ctx->pc = 0x198D24u;
label_198d24:
    // 0x198d24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_198d28:
    // 0x198d28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_198d2c:
    // 0x198d2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x198d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_198d30:
    // 0x198d30: 0x0  nop
    ctx->pc = 0x198d30u;
    // NOP
label_198d34:
    // 0x198d34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x198d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_198d38:
    // 0x198d38: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x198d38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_198d3c:
    // 0x198d3c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x198d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_198d40:
    // 0x198d40: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x198d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_198d44:
    // 0x198d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x198d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_198d48:
    // 0x198d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198d4c:
    // 0x198d4c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x198d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_198d50:
    // 0x198d50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_198d54:
    // 0x198d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198d58:
    // 0x198d58: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x198d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_198d5c:
    // 0x198d5c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x198d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_198d60:
    // 0x198d60: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x198d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_198d64:
    // 0x198d64: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x198d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_198d68:
    // 0x198d68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_198d6c:
    // 0x198d6c: 0xa2000124  sb          $zero, 0x124($s0)
    ctx->pc = 0x198d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 292), (uint8_t)GPR_U32(ctx, 0));
label_198d70:
    // 0x198d70: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x198d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_198d74:
    // 0x198d74: 0xc067598  jal         func_19D660
label_198d78:
    if (ctx->pc == 0x198D78u) {
        ctx->pc = 0x198D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D74u;
        // 0x198d78: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D7Cu;
        goto label_198d7c;
    }
    ctx->pc = 0x198D74u;
    SET_GPR_U32(ctx, 31, 0x198D7Cu);
    ctx->pc = 0x198D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D74u;
    // 0x198d78: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x198D74u, 0x198D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D7Cu;
label_198d7c:
    // 0x198d7c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x198d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_198d80:
    // 0x198d80: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x198d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_198d84:
    // 0x198d84: 0x40f809  jalr        $v0
label_198d88:
    if (ctx->pc == 0x198D88u) {
        ctx->pc = 0x198D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D84u;
        // 0x198d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D8Cu;
        goto label_198d8c;
    }
    ctx->pc = 0x198D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198D8Cu);
        ctx->pc = 0x198D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D84u;
        // 0x198d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198D84u, 0x198D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198D8Cu;
label_198d8c:
    // 0x198d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198d90:
    // 0x198d90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x198d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_198d94:
    // 0x198d94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x198d94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_198d98:
    // 0x198d98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x198d98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_198d9c:
    // 0x198d9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x198d9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198da0:
    // 0x198da0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x198da0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_198da4:
    // 0x198da4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x198da4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198da8:
    // 0x198da8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x198da8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_198dac:
    // 0x198dac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x198dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_198db0:
    // 0x198db0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x198db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_198db4:
    // 0x198db4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x198db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_198db8:
    // 0x198db8: 0x3e00008  jr          $ra
label_198dbc:
    if (ctx->pc == 0x198DBCu) {
        ctx->pc = 0x198DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DB8u;
        // 0x198dbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198DC0u;
        goto label_fallthrough_0x198db8;
    }
    ctx->pc = 0x198DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DB8u;
        // 0x198dbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x198db8:
    ctx->pc = 0x198DC0u;
}
