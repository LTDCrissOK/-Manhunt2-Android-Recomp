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

// Function: sub_003C2D78
// Address: 0x3c2d78 - 0x3c3338
void sub_003C2D78_0x3c2d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2D78_0x3c2d78");
#endif

    switch (ctx->pc) {
        case 0x3c2e5cu: goto label_3c2e5c;
        case 0x3c2e98u: goto label_3c2e98;
        case 0x3c2eb4u: goto label_3c2eb4;
        case 0x3c2ec4u: goto label_3c2ec4;
        case 0x3c2ed4u: goto label_3c2ed4;
        case 0x3c2ee0u: goto label_3c2ee0;
        case 0x3c2ef8u: goto label_3c2ef8;
        case 0x3c2f00u: goto label_3c2f00;
        case 0x3c2f18u: goto label_3c2f18;
        case 0x3c2f28u: goto label_3c2f28;
        case 0x3c2f4cu: goto label_3c2f4c;
        case 0x3c2f60u: goto label_3c2f60;
        case 0x3c2f80u: goto label_3c2f80;
        case 0x3c2fc8u: goto label_3c2fc8;
        case 0x3c2fd0u: goto label_3c2fd0;
        case 0x3c2fe0u: goto label_3c2fe0;
        case 0x3c2ff4u: goto label_3c2ff4;
        case 0x3c3018u: goto label_3c3018;
        case 0x3c3048u: goto label_3c3048;
        case 0x3c30a0u: goto label_3c30a0;
        case 0x3c30acu: goto label_3c30ac;
        case 0x3c30b8u: goto label_3c30b8;
        case 0x3c30c4u: goto label_3c30c4;
        case 0x3c30d0u: goto label_3c30d0;
        case 0x3c30e0u: goto label_3c30e0;
        case 0x3c30f8u: goto label_3c30f8;
        case 0x3c3110u: goto label_3c3110;
        case 0x3c311cu: goto label_3c311c;
        case 0x3c3144u: goto label_3c3144;
        case 0x3c3170u: goto label_3c3170;
        case 0x3c3194u: goto label_3c3194;
        case 0x3c31e0u: goto label_3c31e0;
        case 0x3c3230u: goto label_3c3230;
        case 0x3c32f0u: goto label_3c32f0;
        default: break;
    }

    ctx->pc = 0x3c2d78u;

    // 0x3c2d78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3c2d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3c2d7c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x3c2d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3c2d80: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3c2d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3c2d84: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x3c2d84u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x3c2d88: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3c2d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3c2d8c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3c2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x3c2d90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c2d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2d94: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x3c2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x3c2d98: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3c2d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3c2d9c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3c2d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3c2da0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3c2da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3c2da4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c2da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3c2da8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3c2da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3c2dac: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3c2dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3c2db0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3c2db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3c2db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c2db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c2db8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x3c2db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x3c2dbc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c2dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2dc0: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3c2dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c2dc4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3c2dc4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3c2dc8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c2dc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c2dcc: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3c2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3c2dd0: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x3c2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x3c2dd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c2dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3c2dd8: 0x30850800  andi        $a1, $a0, 0x800
    ctx->pc = 0x3c2dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x3c2ddc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x3c2ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3c2de0: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x3c2de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x3c2de4: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x3c2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x3c2de8: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3C2DE8u;
    {
        const bool branch_taken_0x3c2de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DE8u;
        // 0x3c2dec: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2de8) {
            ctx->pc = 0x3C2E48u;
            goto label_3c2e48;
        }
    }
    ctx->pc = 0x3C2DF0u;
    // 0x3c2df0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C2DF0u;
    {
        const bool branch_taken_0x3c2df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DF0u;
        // 0x3c2df4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2df0) {
            ctx->pc = 0x3C2E38u;
            goto label_3c2e38;
        }
    }
    ctx->pc = 0x3C2DF8u;
    // 0x3c2df8: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C2DF8u;
    {
        const bool branch_taken_0x3c2df8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DF8u;
        // 0x3c2dfc: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2df8) {
            ctx->pc = 0x3C2E3Cu;
            goto label_3c2e3c;
        }
    }
    ctx->pc = 0x3C2E00u;
    // 0x3c2e00: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C2E00u;
    {
        const bool branch_taken_0x3c2e00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E00u;
        // 0x3c2e04: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e00) {
            ctx->pc = 0x3C2E28u;
            goto label_3c2e28;
        }
    }
    ctx->pc = 0x3C2E08u;
    // 0x3c2e08: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c2e0c: 0x8c6512a0  lw          $a1, 0x12A0($v1)
    ctx->pc = 0x3c2e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4768)));
    // 0x3c2e10: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x3c2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x3c2e14: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x3c2e14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3c2e18: 0x24430f88  addiu       $v1, $v0, 0xF88
    ctx->pc = 0x3c2e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3976));
    // 0x3c2e1c: 0xac450f88  sw          $a1, 0xF88($v0)
    ctx->pc = 0x3c2e1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x660F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x660F88u, _value); } while (0);
    // 0x3c2e20: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x3C2E20u;
    {
        const bool branch_taken_0x3c2e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E20u;
        // 0x3c2e24: 0xa0660004  sb          $a2, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e20) {
            ctx->pc = 0x3C32FCu;
            goto label_3c32fc;
        }
    }
    ctx->pc = 0x3C2E28u;
label_3c2e28:
    // 0x3c2e28: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c2e2c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3c2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3c2e30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2E30u;
    {
        const bool branch_taken_0x3c2e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E30u;
        // 0x3c2e34: 0x8c4412a8  lw          $a0, 0x12A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e30) {
            ctx->pc = 0x3C2E40u;
            goto label_3c2e40;
        }
    }
    ctx->pc = 0x3C2E38u;
label_3c2e38:
    // 0x3c2e38: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3c2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3c2e3c:
    // 0x3c2e3c: 0x8c4412b0  lw          $a0, 0x12B0($v0)
    ctx->pc = 0x3c2e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4784)));
label_3c2e40:
    // 0x3c2e40: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x3C2E40u;
    {
        const bool branch_taken_0x3c2e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E40u;
        // 0x3c2e44: 0xac640f88  sw          $a0, 0xF88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3976), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e40) {
            ctx->pc = 0x3C32FCu;
            goto label_3c32fc;
        }
    }
    ctx->pc = 0x3C2E48u;
label_3c2e48:
    // 0x3c2e48: 0x8fb50000  lw          $s5, 0x0($sp)
    ctx->pc = 0x3c2e48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c2e4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3c2e4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2e50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2e54: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C2E54u;
    SET_GPR_U32(ctx, 31, 0x3C2E5Cu);
    ctx->pc = 0x3C2E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2E54u;
    // 0x3c2e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C2E54u, 0x3C2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2E5Cu;
label_3c2e5c:
    // 0x3c2e5c: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C2E5Cu;
    {
        const bool branch_taken_0x3c2e5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E5Cu;
        // 0x3c2e60: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e5c) {
            ctx->pc = 0x3C2EA0u;
            goto label_3c2ea0;
        }
    }
    ctx->pc = 0x3C2E64u;
    // 0x3c2e64: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2E64u;
    {
        const bool branch_taken_0x3c2e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E64u;
        // 0x3c2e68: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e64) {
            ctx->pc = 0x3C2E7Cu;
            goto label_3c2e7c;
        }
    }
    ctx->pc = 0x3C2E6Cu;
    // 0x3c2e6c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3c2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3c2e70: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3c2e70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c2e74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2E74u;
    {
        const bool branch_taken_0x3c2e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E74u;
        // 0x3c2e78: 0x24760f88  addiu       $s6, $v1, 0xF88 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 3976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e74) {
            ctx->pc = 0x3C2E8Cu;
            goto label_3c2e8c;
        }
    }
    ctx->pc = 0x3C2E7Cu;
label_3c2e7c:
    // 0x3c2e7c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x3c2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3c2e80: 0x24440f88  addiu       $a0, $v0, 0xF88
    ctx->pc = 0x3c2e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3976));
    // 0x3c2e84: 0xa0430f88  sb          $v1, 0xF88($v0)
    ctx->pc = 0x3c2e84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3976), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c2e88: 0x24960001  addiu       $s6, $a0, 0x1
    ctx->pc = 0x3c2e88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c2e8c:
    // 0x3c2e8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c2e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2e90: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C2E90u;
    SET_GPR_U32(ctx, 31, 0x3C2E98u);
    ctx->pc = 0x3C2E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2E90u;
    // 0x3c2e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C2E90u, 0x3C2E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2E98u;
label_3c2e98:
    // 0x3c2e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C2E98u;
    {
        const bool branch_taken_0x3c2e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E98u;
        // 0x3c2e9c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e98) {
            ctx->pc = 0x3C2EA4u;
            goto label_3c2ea4;
        }
    }
    ctx->pc = 0x3C2EA0u;
label_3c2ea0:
    // 0x3c2ea0: 0x24560f88  addiu       $s6, $v0, 0xF88
    ctx->pc = 0x3c2ea0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 3976));
label_3c2ea4:
    // 0x3c2ea4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3c2ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c2ea8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c2ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c2eac: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C2EACu;
    SET_GPR_U32(ctx, 31, 0x3C2EB4u);
    ctx->pc = 0x3C2EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2EACu;
    // 0x3c2eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C2EACu, 0x3C2EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2EB4u;
label_3c2eb4:
    // 0x3c2eb4: 0x440003d  bltz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3C2EB4u;
    {
        const bool branch_taken_0x3c2eb4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C2EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2EB4u;
        // 0x3c2eb8: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2eb4) {
            ctx->pc = 0x3C2FACu;
            goto label_3c2fac;
        }
    }
    ctx->pc = 0x3C2EBCu;
    // 0x3c2ebc: 0xc0f16bc  jal         func_3C5AF0
    ctx->pc = 0x3C2EBCu;
    SET_GPR_U32(ctx, 31, 0x3C2EC4u);
    ctx->pc = 0x3C2EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2EBCu;
    // 0x3c2ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5AF0u, 0x3C2EBCu, 0x3C2EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2EC4u;
label_3c2ec4:
    // 0x3c2ec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c2ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ecc: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C2ECCu;
    SET_GPR_U32(ctx, 31, 0x3C2ED4u);
    ctx->pc = 0x3C2ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2ECCu;
    // 0x3c2ed0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C2ECCu, 0x3C2ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2ED4u;
label_3c2ed4:
    // 0x3c2ed4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c2ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ed8: 0x2a8200a3  slti        $v0, $s4, 0xA3
    ctx->pc = 0x3c2ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
    // 0x3c2edc: 0x0  nop
    ctx->pc = 0x3c2edcu;
    // NOP
label_3c2ee0:
    // 0x3c2ee0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3C2EE0u;
    {
        const bool branch_taken_0x3c2ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2EE0u;
        // 0x3c2ee4: 0x2687ffff  addiu       $a3, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2ee0) {
            ctx->pc = 0x3C2F6Cu;
            goto label_3c2f6c;
        }
    }
    ctx->pc = 0x3C2EE8u;
    // 0x3c2ee8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x3c2ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x3c2eec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3c2eecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3c2ef0: 0xc0f1738  jal         func_3C5CE0
    ctx->pc = 0x3C2EF0u;
    SET_GPR_U32(ctx, 31, 0x3C2EF8u);
    ctx->pc = 0x3C2EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2EF0u;
    // 0x3c2ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5CE0u, 0x3C2EF0u, 0x3C2EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2EF8u;
label_3c2ef8:
    // 0x3c2ef8: 0xc0f5122  jal         func_3D4488
    ctx->pc = 0x3C2EF8u;
    SET_GPR_U32(ctx, 31, 0x3C2F00u);
    ctx->pc = 0x3C2EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2EF8u;
    // 0x3c2efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4488u, 0x3C2EF8u, 0x3C2F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2F00u;
label_3c2f00:
    // 0x3c2f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c2f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2f04: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x3c2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3c2f08: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x3c2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x3c2f0c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3c2f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c2f10: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3C2F10u;
    SET_GPR_U32(ctx, 31, 0x3C2F18u);
    ctx->pc = 0x3C2F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2F10u;
    // 0x3c2f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3C2F10u, 0x3C2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2F18u;
label_3c2f18:
    // 0x3c2f18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3c2f18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3c2f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2f20: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C2F20u;
    SET_GPR_U32(ctx, 31, 0x3C2F28u);
    ctx->pc = 0x3C2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2F20u;
    // 0x3c2f24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C2F20u, 0x3C2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2F28u;
label_3c2f28:
    // 0x3c2f28: 0x3405fee6  ori         $a1, $zero, 0xFEE6
    ctx->pc = 0x3c2f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65254);
    // 0x3c2f2c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c2f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c2f30: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x3c2f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x3c2f34: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c2f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c2f38: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x3c2f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x3c2f3c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c2f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c2f40: 0x34a5199a  ori         $a1, $a1, 0x199A
    ctx->pc = 0x3c2f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6554);
    // 0x3c2f44: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C2F44u;
    SET_GPR_U32(ctx, 31, 0x3C2F4Cu);
    ctx->pc = 0x3C2F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2F44u;
    // 0x3c2f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C2F44u, 0x3C2F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2F4Cu;
label_3c2f4c:
    // 0x3c2f4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c2f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2f50: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3c2f50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c2f54: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c2f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c2f58: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C2F58u;
    SET_GPR_U32(ctx, 31, 0x3C2F60u);
    ctx->pc = 0x3C2F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2F58u;
    // 0x3c2f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C2F58u, 0x3C2F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2F60u;
label_3c2f60:
    // 0x3c2f60: 0x441ffdf  bgez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3C2F60u;
    {
        const bool branch_taken_0x3c2f60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F60u;
        // 0x3c2f64: 0x2a8200a3  slti        $v0, $s4, 0xA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2f60) {
            ctx->pc = 0x3C2EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2ee0;
        }
    }
    ctx->pc = 0x3C2F68u;
    // 0x3c2f68: 0x2687ffff  addiu       $a3, $s4, -0x1
    ctx->pc = 0x3c2f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c2f6c:
    // 0x3c2f6c: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x3C2F6Cu;
    {
        const bool branch_taken_0x3c2f6c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3C2F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F6Cu;
        // 0x3c2f70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2f6c) {
            ctx->pc = 0x3C2FA8u;
            goto label_3c2fa8;
        }
    }
    ctx->pc = 0x3C2F74u;
    // 0x3c2f74: 0xf63021  addu        $a2, $a3, $s6
    ctx->pc = 0x3c2f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x3c2f78: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3c2f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2f7c: 0x0  nop
    ctx->pc = 0x3c2f7cu;
    // NOP
label_3c2f80:
    // 0x3c2f80: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3c2f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c2f84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c2f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c2f88: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3c2f88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3c2f8c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c2f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3c2f90: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3c2f90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c2f94: 0x207202a  slt         $a0, $s0, $a3
    ctx->pc = 0x3c2f94u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c2f98: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3c2f98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c2f9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3c2f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3c2fa0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3C2FA0u;
    {
        const bool branch_taken_0x3c2fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FA0u;
        // 0x3c2fa4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2fa0) {
            ctx->pc = 0x3C2F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2f80;
        }
    }
    ctx->pc = 0x3C2FA8u;
label_3c2fa8:
    // 0x3c2fa8: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c2fa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c2fac:
    // 0x3c2fac: 0x1660002b  bnez        $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x3C2FACu;
    {
        const bool branch_taken_0x3c2fac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FACu;
        // 0x3c2fb0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2fac) {
            ctx->pc = 0x3C305Cu;
            goto label_3c305c;
        }
    }
    ctx->pc = 0x3C2FB4u;
    // 0x3c2fb4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x3c2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3c2fb8: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3C2FB8u;
    {
        const bool branch_taken_0x3c2fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FB8u;
        // 0x3c2fbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2fb8) {
            ctx->pc = 0x3C3050u;
            goto label_3c3050;
        }
    }
    ctx->pc = 0x3C2FC0u;
    // 0x3c2fc0: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C2FC0u;
    SET_GPR_U32(ctx, 31, 0x3C2FC8u);
    ctx->pc = 0x3C2FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2FC0u;
    // 0x3c2fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C2FC0u, 0x3C2FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2FC8u;
label_3c2fc8:
    // 0x3c2fc8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3C2FC8u;
    {
        const bool branch_taken_0x3c2fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2fc8) {
            ctx->pc = 0x3C3008u;
            goto label_3c3008;
        }
    }
    ctx->pc = 0x3C2FD0u;
label_3c2fd0:
    // 0x3c2fd0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x3c2fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x3c2fd4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3c2fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3c2fd8: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C2FD8u;
    SET_GPR_U32(ctx, 31, 0x3C2FE0u);
    ctx->pc = 0x3C2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2FD8u;
    // 0x3c2fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C2FD8u, 0x3C2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2FE0u;
label_3c2fe0:
    // 0x3c2fe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c2fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2fe4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3c2fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c2fe8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c2fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c2fec: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C2FECu;
    SET_GPR_U32(ctx, 31, 0x3C2FF4u);
    ctx->pc = 0x3C2FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2FECu;
    // 0x3c2ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C2FECu, 0x3C2FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2FF4u;
label_3c2ff4:
    // 0x3c2ff4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2FF4u;
    {
        const bool branch_taken_0x3c2ff4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FF4u;
        // 0x3c2ff8: 0x2a62fc04  slti        $v0, $s3, -0x3FC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294966276) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2ff4) {
            ctx->pc = 0x3C3004u;
            goto label_3c3004;
        }
    }
    ctx->pc = 0x3C2FFCu;
    // 0x3c2ffc: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3C2FFCu;
    {
        const bool branch_taken_0x3c2ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2ffc) {
            ctx->pc = 0x3C3000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2FFCu;
            // 0x3c3000: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2fd0;
        }
    }
    ctx->pc = 0x3C3004u;
label_3c3004:
    // 0x3c3004: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3c3004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3c3008:
    // 0x3c3008: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3c3008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c300c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c300cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c3010: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C3010u;
    SET_GPR_U32(ctx, 31, 0x3C3018u);
    ctx->pc = 0x3C3014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3010u;
    // 0x3c3014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C3010u, 0x3C3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3018u;
label_3c3018:
    // 0x3c3018: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C3018u;
    {
        const bool branch_taken_0x3c3018 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3018u;
        // 0x3c301c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3018) {
            ctx->pc = 0x3C305Cu;
            goto label_3c305c;
        }
    }
    ctx->pc = 0x3C3020u;
    // 0x3c3020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c3020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3024: 0x3405fee6  ori         $a1, $zero, 0xFEE6
    ctx->pc = 0x3c3024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65254);
    // 0x3c3028: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c3028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c302c: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x3c302cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x3c3030: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c3030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c3034: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x3c3034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x3c3038: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c3038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c303c: 0x34a5199a  ori         $a1, $a1, 0x199A
    ctx->pc = 0x3c303cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6554);
    // 0x3c3040: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C3040u;
    SET_GPR_U32(ctx, 31, 0x3C3048u);
    ctx->pc = 0x3C3044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3040u;
    // 0x3c3044: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C3040u, 0x3C3048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3048u;
label_3c3048:
    // 0x3c3048: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3048u;
    {
        const bool branch_taken_0x3c3048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3048u;
        // 0x3c304c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3048) {
            ctx->pc = 0x3C305Cu;
            goto label_3c305c;
        }
    }
    ctx->pc = 0x3C3050u;
label_3c3050:
    // 0x3c3050: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3c3050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3c3054: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3c3054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3058: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x3c3058u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c305c:
    // 0x3c305c: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C305Cu;
    {
        const bool branch_taken_0x3c305c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x3C3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C305Cu;
        // 0x3c3060: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c305c) {
            ctx->pc = 0x3C306Cu;
            goto label_3c306c;
        }
    }
    ctx->pc = 0x3C3064u;
    // 0x3c3064: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C3064u;
    {
        const bool branch_taken_0x3c3064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3064u;
        // 0x3c3068: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3064) {
            ctx->pc = 0x3C3088u;
            goto label_3c3088;
        }
    }
    ctx->pc = 0x3C306Cu;
label_3c306c:
    // 0x3c306c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x3c306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3c3070: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3070u;
    {
        const bool branch_taken_0x3c3070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3070u;
        // 0x3c3074: 0x26b10001  addiu       $s1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3070) {
            ctx->pc = 0x3C3088u;
            goto label_3c3088;
        }
    }
    ctx->pc = 0x3C3078u;
    // 0x3c3078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c307c: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x3c307cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3c3080: 0x263100b  movn        $v0, $s3, $v1
    ctx->pc = 0x3c3080u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x3c3084: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x3c3084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3c3088:
    // 0x3c3088: 0x3415f240  ori         $s5, $zero, 0xF240
    ctx->pc = 0x3c3088u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x3c308c: 0x15abbc  dsll32      $s5, $s5, 14
    ctx->pc = 0x3c308cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 14));
    // 0x3c3090: 0x263e0001  addiu       $fp, $s1, 0x1
    ctx->pc = 0x3c3090u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c3094: 0x34178048  ori         $s7, $zero, 0x8048
    ctx->pc = 0x3c3094u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x3c3098: 0x17bbfc  dsll32      $s7, $s7, 15
    ctx->pc = 0x3c3098u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 15));
    // 0x3c309c: 0x0  nop
    ctx->pc = 0x3c309cu;
    // NOP
label_3c30a0:
    // 0x3c30a0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3c30a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30a4: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C30A4u;
    SET_GPR_U32(ctx, 31, 0x3C30ACu);
    ctx->pc = 0x3C30A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30A4u;
    // 0x3c30a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C30A4u, 0x3C30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30ACu;
label_3c30ac:
    // 0x3c30ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c30acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30b0: 0xc0f5122  jal         func_3D4488
    ctx->pc = 0x3C30B0u;
    SET_GPR_U32(ctx, 31, 0x3C30B8u);
    ctx->pc = 0x3C30B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30B0u;
    // 0x3c30b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4488u, 0x3C30B0u, 0x3C30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30B8u;
label_3c30b8:
    // 0x3c30b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c30b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30bc: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3C30BCu;
    SET_GPR_U32(ctx, 31, 0x3C30C4u);
    ctx->pc = 0x3C30C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30BCu;
    // 0x3c30c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3C30BCu, 0x3C30C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30C4u;
label_3c30c4:
    // 0x3c30c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c30c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30c8: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C30C8u;
    SET_GPR_U32(ctx, 31, 0x3C30D0u);
    ctx->pc = 0x3C30CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30C8u;
    // 0x3c30cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C30C8u, 0x3C30D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30D0u;
label_3c30d0:
    // 0x3c30d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c30d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c30d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30d8: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C30D8u;
    SET_GPR_U32(ctx, 31, 0x3C30E0u);
    ctx->pc = 0x3C30DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30D8u;
    // 0x3c30dc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C30D8u, 0x3C30E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30E0u;
label_3c30e0:
    // 0x3c30e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c30e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30e4: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x3c30e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3c30e8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C30E8u;
    {
        const bool branch_taken_0x3c30e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30E8u;
        // 0x3c30ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c30e8) {
            ctx->pc = 0x3C3134u;
            goto label_3c3134;
        }
    }
    ctx->pc = 0x3C30F0u;
    // 0x3c30f0: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C30F0u;
    SET_GPR_U32(ctx, 31, 0x3C30F8u);
    ctx->pc = 0x3C30F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30F0u;
    // 0x3c30f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C30F0u, 0x3C30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30F8u;
label_3c30f8:
    // 0x3c30f8: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C30F8u;
    {
        const bool branch_taken_0x3c30f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3c30f8) {
            ctx->pc = 0x3C3134u;
            goto label_3c3134;
        }
    }
    ctx->pc = 0x3C3100u;
    // 0x3c3100: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x3c3100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c3104: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3c3104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3c3108: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C3108u;
    SET_GPR_U32(ctx, 31, 0x3C3110u);
    ctx->pc = 0x3C310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3108u;
    // 0x3c310c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C3108u, 0x3C3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3110u;
label_3c3110:
    // 0x3c3110: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c3110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3114: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C3114u;
    SET_GPR_U32(ctx, 31, 0x3C311Cu);
    ctx->pc = 0x3C3118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3114u;
    // 0x3c3118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C3114u, 0x3C311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C311Cu;
label_3c311c:
    // 0x3c311c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C311Cu;
    {
        const bool branch_taken_0x3c311c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C311Cu;
        // 0x3c3120: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c311c) {
            ctx->pc = 0x3C3134u;
            goto label_3c3134;
        }
    }
    ctx->pc = 0x3C3124u;
    // 0x3c3124: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x3c3124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3c3128: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3c3128u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c312c: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x3C312Cu;
    {
        const bool branch_taken_0x3c312c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C312Cu;
        // 0x3c3130: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c312c) {
            ctx->pc = 0x3C30A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c30a0;
        }
    }
    ctx->pc = 0x3C3134u;
label_3c3134:
    // 0x3c3134: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3c3134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3c3138: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3c3138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3c313c: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C313Cu;
    SET_GPR_U32(ctx, 31, 0x3C3144u);
    ctx->pc = 0x3C3140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C313Cu;
    // 0x3c3140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C313Cu, 0x3C3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3144u;
label_3c3144:
    // 0x3c3144: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x3c3144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3c3148: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x3c3148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c314c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3c314cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3c3150: 0x2d42021  addu        $a0, $s6, $s4
    ctx->pc = 0x3c3150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x3c3154: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x3c3154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3c3158: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3c3158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3c315c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3c315cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3c3160: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C3160u;
    {
        const bool branch_taken_0x3c3160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3160u;
        // 0x3c3164: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3160) {
            ctx->pc = 0x3C3188u;
            goto label_3c3188;
        }
    }
    ctx->pc = 0x3C3168u;
    // 0x3c3168: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x3c3168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3c316c: 0x0  nop
    ctx->pc = 0x3c316cu;
    // NOP
label_3c3170:
    // 0x3c3170: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x3c3170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x3c3174: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3c3174u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3c3178: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3c3178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3c317c: 0x0  nop
    ctx->pc = 0x3c317cu;
    // NOP
    // 0x3c3180: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C3180u;
    {
        const bool branch_taken_0x3c3180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3180u;
        // 0x3c3184: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3180) {
            ctx->pc = 0x3C3170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3170;
        }
    }
    ctx->pc = 0x3C3188u;
label_3c3188:
    // 0x3c3188: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c3188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c318c: 0xc0f0afc  jal         func_3C2BF0
    ctx->pc = 0x3C318Cu;
    SET_GPR_U32(ctx, 31, 0x3C3194u);
    ctx->pc = 0x3C3190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C318Cu;
    // 0x3c3190: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BF0u, 0x3C318Cu, 0x3C3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3194u;
label_3c3194:
    // 0x3c3194: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3194u;
    {
        const bool branch_taken_0x3c3194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3194u;
        // 0x3c3198: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3194) {
            ctx->pc = 0x3C31B0u;
            goto label_3c31b0;
        }
    }
    ctx->pc = 0x3C319Cu;
    // 0x3c319c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x3c319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3c31a0: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x3c31a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c31a4: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x3c31a4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c31a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3c31a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3c31ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c31acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c31b0:
    // 0x3c31b0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C31B0u;
    {
        const bool branch_taken_0x3c31b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31B0u;
        // 0x3c31b4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c31b0) {
            ctx->pc = 0x3C3204u;
            goto label_3c3204;
        }
    }
    ctx->pc = 0x3C31B8u;
    // 0x3c31b8: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x3c31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3c31bc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C31BCu;
    {
        const bool branch_taken_0x3c31bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31BCu;
        // 0x3c31c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c31bc) {
            ctx->pc = 0x3C31CCu;
            goto label_3c31cc;
        }
    }
    ctx->pc = 0x3C31C4u;
    // 0x3c31c4: 0x2a620001  slti        $v0, $s3, 0x1
    ctx->pc = 0x3c31c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x3c31c8: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x3c31c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
label_3c31cc:
    // 0x3c31cc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x3c31ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c31d0: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x3c31d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3c31d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C31D4u;
    {
        const bool branch_taken_0x3c31d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31D4u;
        // 0x3c31d8: 0x2c53021  addu        $a2, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c31d4) {
            ctx->pc = 0x3C31F8u;
            goto label_3c31f8;
        }
    }
    ctx->pc = 0x3C31DCu;
    // 0x3c31dc: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x3c31dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_3c31e0:
    // 0x3c31e0: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x3c31e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x3c31e4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c31e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c31e8: 0xb4182a  slt         $v1, $a1, $s4
    ctx->pc = 0x3c31e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3c31ec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3c31ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c31f0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C31F0u;
    {
        const bool branch_taken_0x3c31f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31F0u;
        // 0x3c31f4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c31f0) {
            ctx->pc = 0x3C31E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c31e0;
        }
    }
    ctx->pc = 0x3C31F8u;
label_3c31f8:
    // 0x3c31f8: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x3c31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x3c31fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C31FCu;
    {
        const bool branch_taken_0x3c31fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31FCu;
        // 0x3c3200: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c31fc) {
            ctx->pc = 0x3C3208u;
            goto label_3c3208;
        }
    }
    ctx->pc = 0x3C3204u;
label_3c3204:
    // 0x3c3204: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3c3204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3c3208:
    // 0x3c3208: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3c3208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3c320c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C320Cu;
    {
        const bool branch_taken_0x3c320c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C320Cu;
        // 0x3c3210: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c320c) {
            ctx->pc = 0x3C3260u;
            goto label_3c3260;
        }
    }
    ctx->pc = 0x3C3214u;
    // 0x3c3214: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3C3214u;
    {
        const bool branch_taken_0x3c3214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3214u;
        // 0x3c3218: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3214) {
            ctx->pc = 0x3C3248u;
            goto label_3c3248;
        }
    }
    ctx->pc = 0x3C321Cu;
    // 0x3c321c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x3c321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3c3220: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3c3220u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c3224: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C3224u;
    {
        const bool branch_taken_0x3c3224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c3224) {
            ctx->pc = 0x3C3228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3224u;
            // 0x3c3228: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3254u;
            goto label_3c3254;
        }
    }
    ctx->pc = 0x3C322Cu;
    // 0x3c322c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3c322cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3c3230:
    // 0x3c3230: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3230u;
    {
        const bool branch_taken_0x3c3230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3230u;
        // 0x3c3234: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3230) {
            ctx->pc = 0x3C3248u;
            goto label_3c3248;
        }
    }
    ctx->pc = 0x3C3238u;
    // 0x3c3238: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3c3238u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c323c: 0x0  nop
    ctx->pc = 0x3c323cu;
    // NOP
    // 0x3c3240: 0x5064fffb  beql        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C3240u;
    {
        const bool branch_taken_0x3c3240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3c3240) {
            ctx->pc = 0x3C3244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3240u;
            // 0x3c3244: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3230;
        }
    }
    ctx->pc = 0x3C3248u;
label_3c3248:
    // 0x3c3248: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x3c3248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3c324c: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x3c324cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3c3250: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3c3250u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3c3254:
    // 0x3c3254: 0x3863002e  xori        $v1, $v1, 0x2E
    ctx->pc = 0x3c3254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)46);
    // 0x3c3258: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x3c3258u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x3c325c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c3260:
    // 0x3c3260: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x3c3260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3c3264: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3C3264u;
    {
        const bool branch_taken_0x3c3264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C3268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3264u;
        // 0x3c3268: 0x2361021  addu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3264) {
            ctx->pc = 0x3C32F8u;
            goto label_3c32f8;
        }
    }
    ctx->pc = 0x3C326Cu;
    // 0x3c326c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c326cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c3270: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x3c3270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3c3274: 0x660000e  bltz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x3C3274u;
    {
        const bool branch_taken_0x3c3274 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x3C3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3274u;
        // 0x3c3278: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3274) {
            ctx->pc = 0x3C32B0u;
            goto label_3c32b0;
        }
    }
    ctx->pc = 0x3C327Cu;
    // 0x3c327c: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x3c327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3c3280: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c3280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c3284: 0x53980b  movn        $s3, $v0, $s3
    ctx->pc = 0x3c3284u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x3c3288: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x3c3288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3c328c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3c328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3c3290: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x3c3290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c3294: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C3294u;
    {
        const bool branch_taken_0x3c3294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3294u;
        // 0x3c3298: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3294) {
            ctx->pc = 0x3C32DCu;
            goto label_3c32dc;
        }
    }
    ctx->pc = 0x3C329Cu;
    // 0x3c329c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c329cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c32a0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3c32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3c32a4: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x3c32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3c32a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C32A8u;
    {
        const bool branch_taken_0x3c32a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C32ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32A8u;
        // 0x3c32ac: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c32a8) {
            ctx->pc = 0x3C32DCu;
            goto label_3c32dc;
        }
    }
    ctx->pc = 0x3C32B0u;
label_3c32b0:
    // 0x3c32b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c32b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c32b4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3c32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3c32b8: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x3c32b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3c32bc: 0x2a64fff7  slti        $a0, $s3, -0x9
    ctx->pc = 0x3c32bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x3c32c0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C32C0u;
    {
        const bool branch_taken_0x3c32c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C32C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32C0u;
        // 0x3c32c4: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c32c0) {
            ctx->pc = 0x3C32D8u;
            goto label_3c32d8;
        }
    }
    ctx->pc = 0x3C32C8u;
    // 0x3c32c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c32c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c32cc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3c32ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3c32d0: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x3c32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3c32d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3c32d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c32d8:
    // 0x3c32d8: 0x139823  negu        $s3, $s3
    ctx->pc = 0x3c32d8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_3c32dc:
    // 0x3c32dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c32dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c32e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c32e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c32e4: 0x2d12821  addu        $a1, $s6, $s1
    ctx->pc = 0x3c32e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3c32e8: 0xc0f0b36  jal         func_3C2CD8
    ctx->pc = 0x3C32E8u;
    SET_GPR_U32(ctx, 31, 0x3C32F0u);
    ctx->pc = 0x3C32ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C32E8u;
    // 0x3c32ec: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CD8u, 0x3C32E8u, 0x3C32F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C32F0u;
label_3c32f0:
    // 0x3c32f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C32F0u;
    {
        const bool branch_taken_0x3c32f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32F0u;
        // 0x3c32f4: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c32f0) {
            ctx->pc = 0x3C3300u;
            goto label_3c3300;
        }
    }
    ctx->pc = 0x3C32F8u;
label_3c32f8:
    // 0x3c32f8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x3c32f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_3c32fc:
    // 0x3c32fc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3c32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3c3300:
    // 0x3c3300: 0x24620f88  addiu       $v0, $v1, 0xF88
    ctx->pc = 0x3c3300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3976));
    // 0x3c3304: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3c3304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3c3308: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3c3308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c330c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3c330cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c3310: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3c3310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c3314: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3c3314u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c3318: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c3318u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c331c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3c331cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c3320: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3c3320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c3324: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3c3324u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c3328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c3328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c332c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C332Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C332Cu;
        // 0x3c3330: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C332Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3334u;
    // 0x3c3334: 0x0  nop
    ctx->pc = 0x3c3334u;
    // NOP
    ctx->pc = 0x3c3338u;
}
