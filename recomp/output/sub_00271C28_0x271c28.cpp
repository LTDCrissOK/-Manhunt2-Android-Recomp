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

// Function: sub_00271C28
// Address: 0x271c28 - 0x271ec0
void sub_00271C28_0x271c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271C28_0x271c28");
#endif

    switch (ctx->pc) {
        case 0x271ca8u: goto label_271ca8;
        case 0x271cb8u: goto label_271cb8;
        case 0x271d10u: goto label_271d10;
        case 0x271d2cu: goto label_271d2c;
        case 0x271d34u: goto label_271d34;
        case 0x271dd4u: goto label_271dd4;
        case 0x271e7cu: goto label_271e7c;
        default: break;
    }

    ctx->pc = 0x271c28u;

    // 0x271c28: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x271c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x271c2c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x271c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x271c30: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x271c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x271c34: 0x24423510  addiu       $v0, $v0, 0x3510
    ctx->pc = 0x271c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
    // 0x271c38: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x271c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x271c3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x271c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c40: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x271c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x271c44: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x271c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271c48: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x271c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x271c4c: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x271c4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x271c50: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x271c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x271c54: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x271c54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271c58: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x271c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x271c5c: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x271c5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x271c60: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x271c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x271c64: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x271c64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x271c68: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x271c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x271c6c: 0x27be0090  addiu       $fp, $sp, 0x90
    ctx->pc = 0x271c6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x271c70: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x271c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x271c74: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x271c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x271c78: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x271c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x271c7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x271c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3514u));
    // 0x271c80: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x271c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x271c84: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x271c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x271c88: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x271c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x271c8c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x271c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x271c90: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x271c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x271c94: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x271c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x271c98: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x271C98u;
    {
        const bool branch_taken_0x271c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C98u;
        // 0x271c9c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c98) {
            ctx->pc = 0x271D00u;
            goto label_271d00;
        }
    }
    ctx->pc = 0x271CA0u;
    // 0x271ca0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x271ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x271ca4: 0x0  nop
    ctx->pc = 0x271ca4u;
    // NOP
label_271ca8:
    // 0x271ca8: 0x8e450228  lw          $a1, 0x228($s2)
    ctx->pc = 0x271ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
    // 0x271cac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x271cacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271cb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x271CB0u;
    SET_GPR_U32(ctx, 31, 0x271CB8u);
    ctx->pc = 0x271CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CB0u;
    // 0x271cb4: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x271CB0u, 0x271CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CB8u;
label_271cb8:
    // 0x271cb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x271cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x271cbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271CBCu;
    {
        const bool branch_taken_0x271cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CBCu;
        // 0x271cc0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cbc) {
            ctx->pc = 0x271CCCu;
            goto label_271ccc;
        }
    }
    ctx->pc = 0x271CC4u;
    // 0x271cc4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x271CC4u;
    {
        const bool branch_taken_0x271cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CC4u;
        // 0x271cc8: 0xae5002c8  sw          $s0, 0x2C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cc4) {
            ctx->pc = 0x271D00u;
            goto label_271d00;
        }
    }
    ctx->pc = 0x271CCCu;
label_271ccc:
    // 0x271ccc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x271CCCu;
    {
        const bool branch_taken_0x271ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ccc) {
            ctx->pc = 0x271CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271CCCu;
            // 0x271cd0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271CE0u;
            goto label_271ce0;
        }
    }
    ctx->pc = 0x271CD4u;
    // 0x271cd4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x271cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x271cd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x271CD8u;
    {
        const bool branch_taken_0x271cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CD8u;
        // 0x271cdc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cd8) {
            ctx->pc = 0x271CF0u;
            goto label_271cf0;
        }
    }
    ctx->pc = 0x271CE0u;
label_271ce0:
    // 0x271ce0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271CE0u;
    {
        const bool branch_taken_0x271ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CE0u;
        // 0x271ce4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ce0) {
            ctx->pc = 0x271CF4u;
            goto label_271cf4;
        }
    }
    ctx->pc = 0x271CE8u;
    // 0x271ce8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x271ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x271cec: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x271cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_271cf0:
    // 0x271cf0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x271cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_271cf4:
    // 0x271cf4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x271cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x271cf8: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x271CF8u;
    {
        const bool branch_taken_0x271cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x271CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CF8u;
        // 0x271cfc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cf8) {
            ctx->pc = 0x271CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271ca8;
        }
    }
    ctx->pc = 0x271D00u;
label_271d00:
    // 0x271d00: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x271d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x271d04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x271d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271d08: 0xc040d5c  jal         func_103570
    ctx->pc = 0x271D08u;
    SET_GPR_U32(ctx, 31, 0x271D10u);
    ctx->pc = 0x271D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D08u;
    // 0x271d0c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103570u, 0x271D08u, 0x271D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D10u;
label_271d10:
    // 0x271d10: 0xae4202d0  sw          $v0, 0x2D0($s2)
    ctx->pc = 0x271d10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 720), GPR_U32(ctx, 2));
    // 0x271d14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x271d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271d18: 0x8e4202c8  lw          $v0, 0x2C8($s2)
    ctx->pc = 0x271d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
    // 0x271d1c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x271d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x271d20: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x271d20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271d24: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x271D24u;
    SET_GPR_U32(ctx, 31, 0x271D2Cu);
    ctx->pc = 0x271D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D24u;
    // 0x271d28: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x271D24u, 0x271D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D2Cu;
label_271d2c:
    // 0x271d2c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x271D2Cu;
    SET_GPR_U32(ctx, 31, 0x271D34u);
    ctx->pc = 0x271D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D2Cu;
    // 0x271d30: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x271D2Cu, 0x271D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D34u;
label_271d34:
    // 0x271d34: 0x26420250  addiu       $v0, $s2, 0x250
    ctx->pc = 0x271d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x271d38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x271d38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271d3c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x271d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271d40: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x271d40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x271d44: 0x26105b40  addiu       $s0, $s0, 0x5B40
    ctx->pc = 0x271d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23360));
    // 0x271d48: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x271d48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x271d4c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x271d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271d50: 0x26420270  addiu       $v0, $s2, 0x270
    ctx->pc = 0x271d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x271d54: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x271d54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271d58: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x271d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271d5c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x271d5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x271d60: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x271d60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x271d64: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x271d64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x271d68: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x271d68u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271d6c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x271d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271d70: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x271d70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x271d74: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x271d74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271d78: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x271d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271d7c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x271d7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271d80: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x271d80u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x271d84: 0x4a0003bf  vwaitq
    ctx->pc = 0x271d84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x271d88: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x271d88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271d8c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x271d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271d90: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x271d90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x271d94: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x271d94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x271d98: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x271d98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x271d9c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x271d9cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271da0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x271da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271da4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x271da4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x271da8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x271da8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271dac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x271dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271db0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x271db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271db4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x271db4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x271db8: 0x4a0003bf  vwaitq
    ctx->pc = 0x271db8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x271dbc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x271dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271dc0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x271dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271dc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x271dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271dc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x271dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271dcc: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x271DCCu;
    SET_GPR_U32(ctx, 31, 0x271DD4u);
    ctx->pc = 0x271DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DCCu;
    // 0x271dd0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x271DCCu, 0x271DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DD4u;
label_271dd4:
    // 0x271dd4: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x271dd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x271dd8: 0xfa410260  sqc2        $vf1, 0x260($s2)
    ctx->pc = 0x271dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271ddc: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x271ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x271de0: 0xfa410270  sqc2        $vf1, 0x270($s2)
    ctx->pc = 0x271de0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271de4: 0x26420280  addiu       $v0, $s2, 0x280
    ctx->pc = 0x271de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 640));
    // 0x271de8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x271de8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271dec: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x271decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271df0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x271df0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x271df4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x271df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271df8: 0x264202a0  addiu       $v0, $s2, 0x2A0
    ctx->pc = 0x271df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
    // 0x271dfc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x271dfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271e00: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x271e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271e04: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x271e04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x271e08: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x271e08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x271e0c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x271e0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x271e10: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x271e10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271e14: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x271e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271e18: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x271e18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x271e1c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x271e1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271e20: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x271e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271e24: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x271e24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271e28: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x271e28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x271e2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x271e2cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x271e30: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x271e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271e34: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x271e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271e38: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x271e38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x271e3c: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x271e3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x271e40: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x271e40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x271e44: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x271e44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271e48: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x271e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271e4c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x271e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x271e50: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x271e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271e54: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x271e54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271e58: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x271e58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271e5c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x271e5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x271e60: 0x4a0003bf  vwaitq
    ctx->pc = 0x271e60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x271e64: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x271e64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271e68: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x271e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271e6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x271e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x271e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e74: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x271E74u;
    SET_GPR_U32(ctx, 31, 0x271E7Cu);
    ctx->pc = 0x271E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E74u;
    // 0x271e78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x271E74u, 0x271E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E7Cu;
label_271e7c:
    // 0x271e7c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x271e7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x271e80: 0xfa410290  sqc2        $vf1, 0x290($s2)
    ctx->pc = 0x271e80u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 656), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271e84: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x271e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x271e88: 0xfa4102a0  sqc2        $vf1, 0x2A0($s2)
    ctx->pc = 0x271e88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 672), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271e8c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x271e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x271e90: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x271e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x271e94: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x271e94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x271e98: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x271e98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x271e9c: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x271e9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x271ea0: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x271ea0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x271ea4: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x271ea4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x271ea8: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x271ea8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x271eac: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x271eacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x271eb0: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x271eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x271eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x271EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EB4u;
        // 0x271eb8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271EBCu;
    // 0x271ebc: 0x0  nop
    ctx->pc = 0x271ebcu;
    // NOP
    ctx->pc = 0x271ec0u;
}
