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

// Function: sub_001F1B30
// Address: 0x1f1b30 - 0x1f1e68
void sub_001F1B30_0x1f1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1B30_0x1f1b30");
#endif

    switch (ctx->pc) {
        case 0x1f1b98u: goto label_1f1b98;
        case 0x1f1be8u: goto label_1f1be8;
        case 0x1f1bf4u: goto label_1f1bf4;
        case 0x1f1c04u: goto label_1f1c04;
        case 0x1f1c8cu: goto label_1f1c8c;
        case 0x1f1cdcu: goto label_1f1cdc;
        case 0x1f1d2cu: goto label_1f1d2c;
        case 0x1f1d7cu: goto label_1f1d7c;
        case 0x1f1dccu: goto label_1f1dcc;
        case 0x1f1e28u: goto label_1f1e28;
        case 0x1f1e3cu: goto label_1f1e3c;
        default: break;
    }

    ctx->pc = 0x1f1b30u;

    // 0x1f1b30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f1b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f1b34: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1b38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f1b3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f1b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f1b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f1b44: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x1f1b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f1b48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f1b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f1b4c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f1b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f1b50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b54: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f1b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f1b58: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f1b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f1b5c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1f1b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1f1b60: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1f1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1f1b64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f1b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f1b68: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1b6c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1f1b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1f1b70: 0x8c574f94  lw          $s7, 0x4F94($v0)
    ctx->pc = 0x1f1b70u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
    // 0x1f1b74: 0x12e000b2  beqz        $s7, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1F1B74u;
    {
        const bool branch_taken_0x1f1b74 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B74u;
        // 0x1f1b78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b74) {
            ctx->pc = 0x1F1E40u;
            goto label_1f1e40;
        }
    }
    ctx->pc = 0x1F1B7Cu;
    // 0x1f1b7c: 0x90424fb8  lbu         $v0, 0x4FB8($v0)
    ctx->pc = 0x1f1b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20408)));
    // 0x1f1b80: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1F1B80u;
    {
        const bool branch_taken_0x1f1b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B80u;
        // 0x1f1b84: 0x27b50004  addiu       $s5, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b80) {
            ctx->pc = 0x1F1DF0u;
            goto label_1f1df0;
        }
    }
    ctx->pc = 0x1F1B88u;
    // 0x1f1b88: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1F1B88u;
    {
        const bool branch_taken_0x1f1b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B88u;
        // 0x1f1b8c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b88) {
            ctx->pc = 0x1F1DF0u;
            goto label_1f1df0;
        }
    }
    ctx->pc = 0x1F1B90u;
    // 0x1f1b90: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1f1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1b94: 0x0  nop
    ctx->pc = 0x1f1b94u;
    // NOP
label_1f1b98:
    // 0x1f1b98: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1f1b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1f1b9c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1f1b9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f1ba0: 0x26224fa8  addiu       $v0, $s1, 0x4FA8
    ctx->pc = 0x1f1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20392));
    // 0x1f1ba4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1f1ba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ba8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f1ba8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1bac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f1bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f1bb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1bb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f1bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1bbc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f1bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1bc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f1bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1bc4: 0x0  nop
    ctx->pc = 0x1f1bc4u;
    // NOP
    // 0x1f1bc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1BC8u;
    {
        const bool branch_taken_0x1f1bc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BC8u;
        // 0x1f1bcc: 0x240503fb  addiu       $a1, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bc8) {
            ctx->pc = 0x1F1BD8u;
            goto label_1f1bd8;
        }
    }
    ctx->pc = 0x1F1BD0u;
    // 0x1f1bd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1BD0u;
    {
        const bool branch_taken_0x1f1bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BD0u;
        // 0x1f1bd4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bd0) {
            ctx->pc = 0x1F1BE0u;
            goto label_1f1be0;
        }
    }
    ctx->pc = 0x1F1BD8u;
label_1f1bd8:
    // 0x1f1bd8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f1bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1bdc: 0x24050431  addiu       $a1, $zero, 0x431
    ctx->pc = 0x1f1bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
label_1f1be0:
    // 0x1f1be0: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1F1BE0u;
    SET_GPR_U32(ctx, 31, 0x1F1BE8u);
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1F1BE0u, 0x1F1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BE8u;
label_1f1be8:
    // 0x1f1be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1bec: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1F1BECu;
    SET_GPR_U32(ctx, 31, 0x1F1BF4u);
    ctx->pc = 0x1F1BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BECu;
    // 0x1f1bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1F1BECu, 0x1F1BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BF4u;
label_1f1bf4:
    // 0x1f1bf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1BF4u;
    {
        const bool branch_taken_0x1f1bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BF4u;
        // 0x1f1bf8: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bf4) {
            ctx->pc = 0x1F1C08u;
            goto label_1f1c08;
        }
    }
    ctx->pc = 0x1F1BFCu;
    // 0x1f1bfc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1F1BFCu;
    SET_GPR_U32(ctx, 31, 0x1F1C04u);
    ctx->pc = 0x1F1C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BFCu;
    // 0x1f1c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1F1BFCu, 0x1F1C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C04u;
label_1f1c04:
    // 0x1f1c04: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1f1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1f1c08:
    // 0x1f1c08: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f1c08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1c0c: 0xfa210130  sqc2        $vf1, 0x130($s1)
    ctx->pc = 0x1f1c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1c10: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1c14: 0x162040  sll         $a0, $s6, 1
    ctx->pc = 0x1f1c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1f1c18: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1f1c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1c1c: 0x26234fa0  addiu       $v1, $s1, 0x4FA0
    ctx->pc = 0x1f1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20384));
    // 0x1f1c20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f1c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c24: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1f1c24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f1c2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f1c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f1c30: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1f1c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1c34: 0x2444fff1  addiu       $a0, $v0, -0xF
    ctx->pc = 0x1f1c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x1f1c38: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1f1c38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f1c3c: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1F1C3Cu;
    {
        const bool branch_taken_0x1f1c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C3Cu;
        // 0x1f1c40: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c3c) {
            ctx->pc = 0x1F1DCCu;
            goto label_1f1dcc;
        }
    }
    ctx->pc = 0x1F1C44u;
    // 0x1f1c44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f1c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f1c48: 0x2442ee00  addiu       $v0, $v0, -0x1200
    ctx->pc = 0x1f1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x1f1c4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f1c50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1c54: 0x800008  jr          $a0
    ctx->pc = 0x1F1C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1C5Cu: goto label_1f1c5c;
            case 0x1F1C94u: goto label_1f1c94;
            case 0x1F1CE4u: goto label_1f1ce4;
            case 0x1F1D34u: goto label_1f1d34;
            case 0x1F1D84u: goto label_1f1d84;
            case 0x1F1DCCu: goto label_1f1dcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1C54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F1C5Cu;
label_1f1c5c:
    // 0x1f1c5c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c64: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1f1c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1c68: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f1c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c6c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f1c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c70: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1f1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f1c74: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f1c78: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1f1c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1f1c7c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f1c80: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1f1c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1c84: 0xc07d032  jal         func_1F40C8
    ctx->pc = 0x1F1C84u;
    SET_GPR_U32(ctx, 31, 0x1F1C8Cu);
    ctx->pc = 0x1F1C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C84u;
    // 0x1f1c88: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F40C8u, 0x1F1C84u, 0x1F1C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C8Cu;
label_1f1c8c:
    // 0x1f1c8c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1F1C8Cu;
    {
        const bool branch_taken_0x1f1c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C8Cu;
        // 0x1f1c90: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c8c) {
            ctx->pc = 0x1F1DD0u;
            goto label_1f1dd0;
        }
    }
    ctx->pc = 0x1F1C94u;
label_1f1c94:
    // 0x1f1c94: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1c98: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x1f1c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1c9c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1f1c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1ca0: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f1ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1f1ca4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f1ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f1ca8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cb0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f1cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f1cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1cb8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f1cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cbc: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1f1cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f1cc0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f1cc4: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x1f1cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x1f1cc8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f1ccc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1f1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1f1cd0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f1cd0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1cd4: 0xc07ce22  jal         func_1F3888
    ctx->pc = 0x1F1CD4u;
    SET_GPR_U32(ctx, 31, 0x1F1CDCu);
    ctx->pc = 0x1F1CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CD4u;
    // 0x1f1cd8: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3888u, 0x1F1CD4u, 0x1F1CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CDCu;
label_1f1cdc:
    // 0x1f1cdc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1F1CDCu;
    {
        const bool branch_taken_0x1f1cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CDCu;
        // 0x1f1ce0: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cdc) {
            ctx->pc = 0x1F1DD0u;
            goto label_1f1dd0;
        }
    }
    ctx->pc = 0x1F1CE4u;
label_1f1ce4:
    // 0x1f1ce4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1ce8: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x1f1ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1cec: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1f1cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1cf0: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f1cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1f1cf4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f1cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f1cf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d00: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f1d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f1d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1d08: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f1d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d0c: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1f1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f1d10: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f1d14: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x1f1d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x1f1d18: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f1d1c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1f1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1f1d20: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f1d20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1d24: 0xc07cd44  jal         func_1F3510
    ctx->pc = 0x1F1D24u;
    SET_GPR_U32(ctx, 31, 0x1F1D2Cu);
    ctx->pc = 0x1F1D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D24u;
    // 0x1f1d28: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3510u, 0x1F1D24u, 0x1F1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D2Cu;
label_1f1d2c:
    // 0x1f1d2c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1F1D2Cu;
    {
        const bool branch_taken_0x1f1d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D2Cu;
        // 0x1f1d30: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d2c) {
            ctx->pc = 0x1F1DD0u;
            goto label_1f1dd0;
        }
    }
    ctx->pc = 0x1F1D34u;
label_1f1d34:
    // 0x1f1d34: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1d38: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x1f1d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1d3c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1f1d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1d40: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f1d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1f1d44: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f1d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f1d48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f1d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f1d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1d58: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f1d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d5c: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1f1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f1d60: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f1d64: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x1f1d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x1f1d68: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f1d6c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1f1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1f1d70: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f1d70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1d74: 0xc07cdb4  jal         func_1F36D0
    ctx->pc = 0x1F1D74u;
    SET_GPR_U32(ctx, 31, 0x1F1D7Cu);
    ctx->pc = 0x1F1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D74u;
    // 0x1f1d78: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F36D0u, 0x1F1D74u, 0x1F1D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D7Cu;
label_1f1d7c:
    // 0x1f1d7c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F1D7Cu;
    {
        const bool branch_taken_0x1f1d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D7Cu;
        // 0x1f1d80: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d7c) {
            ctx->pc = 0x1F1DD0u;
            goto label_1f1dd0;
        }
    }
    ctx->pc = 0x1F1D84u;
label_1f1d84:
    // 0x1f1d84: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1d88: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x1f1d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1d8c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1f1d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1d90: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f1d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1f1d94: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f1d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f1d98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1da0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f1da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f1da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1da8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f1da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1dac: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1f1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f1db0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f1db4: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x1f1db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x1f1db8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f1dbc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1f1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1f1dc0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f1dc0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1dc4: 0xc07cc3e  jal         func_1F30F8
    ctx->pc = 0x1F1DC4u;
    SET_GPR_U32(ctx, 31, 0x1F1DCCu);
    ctx->pc = 0x1F1DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DC4u;
    // 0x1f1dc8: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30F8u, 0x1F1DC4u, 0x1F1DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DCCu;
label_1f1dcc:
    // 0x1f1dcc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f1dd0:
    // 0x1f1dd0: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x1f1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1f1dd4: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x1f1dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f1dd8: 0x309600ff  andi        $s6, $a0, 0xFF
    ctx->pc = 0x1f1dd8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1f1ddc: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1f1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f1de0: 0x90434fb8  lbu         $v1, 0x4FB8($v0)
    ctx->pc = 0x1f1de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20408)));
    // 0x1f1de4: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x1f1de4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f1de8: 0x1460ff6b  bnez        $v1, . + 4 + (-0x95 << 2)
    ctx->pc = 0x1F1DE8u;
    {
        const bool branch_taken_0x1f1de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DE8u;
        // 0x1f1dec: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1de8) {
            ctx->pc = 0x1F1B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1b98;
        }
    }
    ctx->pc = 0x1F1DF0u;
label_1f1df0:
    // 0x1f1df0: 0x8ee30104  lw          $v1, 0x104($s7)
    ctx->pc = 0x1f1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
    // 0x1f1df4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1df8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1f1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1f1dfc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f1dfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1e00: 0xfa210130  sqc2        $vf1, 0x130($s1)
    ctx->pc = 0x1f1e00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1e04: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x1f1e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1e08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f1e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e0c: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f1e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1f1e10: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f1e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f1e14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f1e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1e20: 0xc07c79e  jal         func_1F1E78
    ctx->pc = 0x1F1E20u;
    SET_GPR_U32(ctx, 31, 0x1F1E28u);
    ctx->pc = 0x1F1E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E20u;
    // 0x1f1e24: 0xe6200134  swc1        $f0, 0x134($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1E78u, 0x1F1E20u, 0x1F1E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E28u;
label_1f1e28:
    // 0x1f1e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e2c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f1e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e30: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f1e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e34: 0xc07c816  jal         func_1F2058
    ctx->pc = 0x1F1E34u;
    SET_GPR_U32(ctx, 31, 0x1F1E3Cu);
    ctx->pc = 0x1F1E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E34u;
    // 0x1f1e38: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2058u, 0x1F1E34u, 0x1F1E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E3Cu;
label_1f1e3c:
    // 0x1f1e3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f1e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1e40:
    // 0x1f1e40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f1e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f1e44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f1e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1e48: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f1e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f1e4c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f1e4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1e50: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f1e50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f1e54: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1f1e54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1e58: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1f1e58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f1e5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f1e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f1e60: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E60u;
        // 0x1f1e64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1E68u;
}
