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

// Function: sub_003C5AF0
// Address: 0x3c5af0 - 0x3c5ce0
void sub_003C5AF0_0x3c5af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5AF0_0x3c5af0");
#endif

    switch (ctx->pc) {
        case 0x3c5b48u: goto label_3c5b48;
        case 0x3c5b54u: goto label_3c5b54;
        case 0x3c5bb4u: goto label_3c5bb4;
        case 0x3c5bc0u: goto label_3c5bc0;
        case 0x3c5c0cu: goto label_3c5c0c;
        case 0x3c5c38u: goto label_3c5c38;
        case 0x3c5c44u: goto label_3c5c44;
        default: break;
    }

    ctx->pc = 0x3c5af0u;

    // 0x3c5af0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c5af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c5af4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c5af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5af8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c5af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3c5afc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c5afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3c5b00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c5b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c5b04: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c5b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3c5b08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3c5b0c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3c5b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5b10: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x3c5b10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c5b14: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3c5b14u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3c5b18: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x3c5b18u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c5b1c: 0x101d03  sra         $v1, $s0, 20
    ctx->pc = 0x3c5b1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 20));
    // 0x3c5b20: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x3c5b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x3c5b24: 0x2471fc01  addiu       $s1, $v1, -0x3FF
    ctx->pc = 0x3c5b24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x3c5b28: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x3c5b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3c5b2c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3C5B2Cu;
    {
        const bool branch_taken_0x3c5b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5B2Cu;
        // 0x3c5b30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5b2c) {
            ctx->pc = 0x3C5BECu;
            goto label_3c5bec;
        }
    }
    ctx->pc = 0x3C5B34u;
    // 0x3c5b34: 0x6210016  bgez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3C5B34u;
    {
        const bool branch_taken_0x3c5b34 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3C5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5B34u;
        // 0x3c5b38: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5b34) {
            ctx->pc = 0x3C5B90u;
            goto label_3c5b90;
        }
    }
    ctx->pc = 0x3C5B3Cu;
    // 0x3c5b3c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c5b40: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C5B40u;
    SET_GPR_U32(ctx, 31, 0x3C5B48u);
    ctx->pc = 0x3C5B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5B40u;
    // 0x3c5b44: 0xdc451798  ld          $a1, 0x1798($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 6040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C5B40u, 0x3C5B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5B48u;
label_3c5b48:
    // 0x3c5b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c5b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5b4c: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C5B4Cu;
    SET_GPR_U32(ctx, 31, 0x3C5B54u);
    ctx->pc = 0x3C5B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5B4Cu;
    // 0x3c5b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C5B4Cu, 0x3C5B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5B54u;
label_3c5b54:
    // 0x3c5b54: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3C5B54u;
    {
        const bool branch_taken_0x3c5b54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c5b54) {
            ctx->pc = 0x3C5C8Cu;
            goto label_3c5c8c;
        }
    }
    ctx->pc = 0x3C5B5Cu;
    // 0x3c5b5c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5B5Cu;
    {
        const bool branch_taken_0x3c5b5c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3C5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5B5Cu;
        // 0x3c5b60: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5b5c) {
            ctx->pc = 0x3C5B70u;
            goto label_3c5b70;
        }
    }
    ctx->pc = 0x3C5B64u;
    // 0x3c5b64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c5b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5b68: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3C5B68u;
    {
        const bool branch_taken_0x3c5b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5B68u;
        // 0x3c5b6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5b68) {
            ctx->pc = 0x3C5C8Cu;
            goto label_3c5c8c;
        }
    }
    ctx->pc = 0x3C5B70u;
label_3c5b70:
    // 0x3c5b70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5b74: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3c5b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3c5b78: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x3c5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3c5b7c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x3C5B7Cu;
    {
        const bool branch_taken_0x3c5b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5b7c) {
            ctx->pc = 0x3C5C8Cu;
            goto label_3c5c8c;
        }
    }
    ctx->pc = 0x3C5B84u;
    // 0x3c5b84: 0x3c10bff0  lui         $s0, 0xBFF0
    ctx->pc = 0x3c5b84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49136 << 16));
    // 0x3c5b88: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3C5B88u;
    {
        const bool branch_taken_0x3c5b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5B88u;
        // 0x3c5b8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5b88) {
            ctx->pc = 0x3C5C8Cu;
            goto label_3c5c8c;
        }
    }
    ctx->pc = 0x3C5B90u;
label_3c5b90:
    // 0x3c5b90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5b94: 0x222a007  srav        $s4, $v0, $s1
    ctx->pc = 0x3c5b94u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x3c5b98: 0x2141824  and         $v1, $s0, $s4
    ctx->pc = 0x3c5b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x3c5b9c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x3c5b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x3c5ba0: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3C5BA0u;
    {
        const bool branch_taken_0x3c5ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5BA0u;
        // 0x3c5ba4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ba0) {
            ctx->pc = 0x3C5CB8u;
            goto label_3c5cb8;
        }
    }
    ctx->pc = 0x3C5BA8u;
    // 0x3c5ba8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c5bac: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C5BACu;
    SET_GPR_U32(ctx, 31, 0x3C5BB4u);
    ctx->pc = 0x3C5BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5BACu;
    // 0x3c5bb0: 0xdc451798  ld          $a1, 0x1798($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 6040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C5BACu, 0x3C5BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5BB4u;
label_3c5bb4:
    // 0x3c5bb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c5bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5bb8: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C5BB8u;
    SET_GPR_U32(ctx, 31, 0x3C5BC0u);
    ctx->pc = 0x3C5BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5BB8u;
    // 0x3c5bbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C5BB8u, 0x3C5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5BC0u;
label_3c5bc0:
    // 0x3c5bc0: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3C5BC0u;
    {
        const bool branch_taken_0x3c5bc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c5bc0) {
            ctx->pc = 0x3C5C8Cu;
            goto label_3c5c8c;
        }
    }
    ctx->pc = 0x3C5BC8u;
    // 0x3c5bc8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C5BC8u;
    {
        const bool branch_taken_0x3c5bc8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3C5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5BC8u;
        // 0x3c5bcc: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5bc8) {
            ctx->pc = 0x3C5BE0u;
            goto label_3c5be0;
        }
    }
    ctx->pc = 0x3C5BD0u;
    // 0x3c5bd0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3c5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3c5bd4: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x3c5bd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x3c5bd8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3c5bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3c5bdc: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x3c5bdcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_3c5be0:
    // 0x3c5be0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c5be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5be4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3C5BE4u;
    {
        const bool branch_taken_0x3c5be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5BE4u;
        // 0x3c5be8: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5be4) {
            ctx->pc = 0x3C5C8Cu;
            goto label_3c5c8c;
        }
    }
    ctx->pc = 0x3C5BECu;
label_3c5bec:
    // 0x3c5bec: 0x2a220034  slti        $v0, $s1, 0x34
    ctx->pc = 0x3c5becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x3c5bf0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5BF0u;
    {
        const bool branch_taken_0x3c5bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5BF0u;
        // 0x3c5bf4: 0x2464fbed  addiu       $a0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5bf0) {
            ctx->pc = 0x3C5C14u;
            goto label_3c5c14;
        }
    }
    ctx->pc = 0x3C5BF8u;
    // 0x3c5bf8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3c5bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3c5bfc: 0x1622002f  bne         $s1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3C5BFCu;
    {
        const bool branch_taken_0x3c5bfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5BFCu;
        // 0x3c5c00: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5bfc) {
            ctx->pc = 0x3C5CBCu;
            goto label_3c5cbc;
        }
    }
    ctx->pc = 0x3C5C04u;
    // 0x3c5c04: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C5C04u;
    SET_GPR_U32(ctx, 31, 0x3C5C0Cu);
    ctx->pc = 0x3C5C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C04u;
    // 0x3c5c08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C5C04u, 0x3C5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C0Cu;
label_3c5c0c:
    // 0x3c5c0c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3C5C0Cu;
    {
        const bool branch_taken_0x3c5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5C0Cu;
        // 0x3c5c10: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5c0c) {
            ctx->pc = 0x3C5CC0u;
            goto label_3c5cc0;
        }
    }
    ctx->pc = 0x3C5C14u;
label_3c5c14:
    // 0x3c5c14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c5c18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5c1c: 0x82a006  srlv        $s4, $v0, $a0
    ctx->pc = 0x3c5c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3c5c20: 0x2541824  and         $v1, $s2, $s4
    ctx->pc = 0x3c5c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 20));
    // 0x3c5c24: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3C5C24u;
    {
        const bool branch_taken_0x3c5c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5C24u;
        // 0x3c5c28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5c24) {
            ctx->pc = 0x3C5CB8u;
            goto label_3c5cb8;
        }
    }
    ctx->pc = 0x3C5C2Cu;
    // 0x3c5c2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c5c30: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C5C30u;
    SET_GPR_U32(ctx, 31, 0x3C5C38u);
    ctx->pc = 0x3C5C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C30u;
    // 0x3c5c34: 0xdc451798  ld          $a1, 0x1798($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 6040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C5C30u, 0x3C5C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C38u;
label_3c5c38:
    // 0x3c5c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c5c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5c3c: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C5C3Cu;
    SET_GPR_U32(ctx, 31, 0x3C5C44u);
    ctx->pc = 0x3C5C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C3Cu;
    // 0x3c5c40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C5C3Cu, 0x3C5C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C44u;
label_3c5c44:
    // 0x3c5c44: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C5C44u;
    {
        const bool branch_taken_0x3c5c44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c5c44) {
            ctx->pc = 0x3C5C8Cu;
            goto label_3c5c8c;
        }
    }
    ctx->pc = 0x3C5C4Cu;
    // 0x3c5c4c: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C5C4Cu;
    {
        const bool branch_taken_0x3c5c4c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3C5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5C4Cu;
        // 0x3c5c50: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5c4c) {
            ctx->pc = 0x3C5C88u;
            goto label_3c5c88;
        }
    }
    ctx->pc = 0x3C5C54u;
    // 0x3c5c54: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3c5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3c5c58: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5C58u;
    {
        const bool branch_taken_0x3c5c58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5C58u;
        // 0x3c5c5c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5c58) {
            ctx->pc = 0x3C5C68u;
            goto label_3c5c68;
        }
    }
    ctx->pc = 0x3C5C60u;
    // 0x3c5c60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5C60u;
    {
        const bool branch_taken_0x3c5c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5C60u;
        // 0x3c5c64: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5c60) {
            ctx->pc = 0x3C5C84u;
            goto label_3c5c84;
        }
    }
    ctx->pc = 0x3C5C68u;
label_3c5c68:
    // 0x3c5c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5c6c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3c5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c5c70: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x3c5c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3c5c74: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3c5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3c5c78: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x3c5c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3c5c7c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3c5c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3c5c80: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x3c5c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c5c84:
    // 0x3c5c84: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x3c5c84u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_3c5c88:
    // 0x3c5c88: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x3c5c88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3c5c8c:
    // 0x3c5c8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c5c90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c5c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c5c94: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x3c5c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3c5c98: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x3c5c98u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x3c5c9c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3c5c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3c5ca0: 0x2649825  or          $s3, $s3, $a0
    ctx->pc = 0x3c5ca0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x3c5ca4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c5ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c5ca8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c5ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c5cac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c5cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c5cb0: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x3c5cb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x3c5cb4: 0x2622825  or          $a1, $s3, $v0
    ctx->pc = 0x3c5cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_3c5cb8:
    // 0x3c5cb8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3c5cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c5cbc:
    // 0x3c5cbc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c5cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c5cc0:
    // 0x3c5cc0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c5cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c5cc4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c5cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5cc8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c5cc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5ccc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c5cccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5CD4u;
        // 0x3c5cd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5CDCu;
    // 0x3c5cdc: 0x0  nop
    ctx->pc = 0x3c5cdcu;
    // NOP
    ctx->pc = 0x3c5ce0u;
}
