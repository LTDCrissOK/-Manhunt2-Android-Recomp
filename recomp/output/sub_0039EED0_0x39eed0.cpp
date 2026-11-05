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

// Function: sub_0039EED0
// Address: 0x39eed0 - 0x39f190
void sub_0039EED0_0x39eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EED0_0x39eed0");
#endif

    switch (ctx->pc) {
        case 0x39ef18u: goto label_39ef18;
        case 0x39ef38u: goto label_39ef38;
        case 0x39ef94u: goto label_39ef94;
        case 0x39f010u: goto label_39f010;
        case 0x39f038u: goto label_39f038;
        case 0x39f060u: goto label_39f060;
        case 0x39f0d4u: goto label_39f0d4;
        case 0x39f0ecu: goto label_39f0ec;
        case 0x39f100u: goto label_39f100;
        case 0x39f11cu: goto label_39f11c;
        case 0x39f168u: goto label_39f168;
        default: break;
    }

    ctx->pc = 0x39eed0u;

    // 0x39eed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39eed4: 0x2407ffc0  addiu       $a3, $zero, -0x40
    ctx->pc = 0x39eed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x39eed8: 0x24a3003f  addiu       $v1, $a1, 0x3F
    ctx->pc = 0x39eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x39eedc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39eedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39eee0: 0x679824  and         $s3, $v1, $a3
    ctx->pc = 0x39eee0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x39eee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39eee8: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x39eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x39eeec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x39eeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x39eef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39eef4: 0xc29023  subu        $s2, $a2, $v0
    ctx->pc = 0x39eef4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x39eef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39eefc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x39eefcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ef00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x39ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x39ef04: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39EF04u;
    {
        const bool branch_taken_0x39ef04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF04u;
        // 0x39ef08: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef04) {
            ctx->pc = 0x39EF20u;
            goto label_39ef20;
        }
    }
    ctx->pc = 0x39EF0Cu;
    // 0x39ef0c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39ef10: 0xc0ecbf4  jal         func_3B2FD0
    ctx->pc = 0x39EF10u;
    SET_GPR_U32(ctx, 31, 0x39EF18u);
    ctx->pc = 0x39EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EF10u;
    // 0x39ef14: 0x2484bdd0  addiu       $a0, $a0, -0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FD0u, 0x39EF10u, 0x39EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EF18u;
label_39ef18:
    // 0x39ef18: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x39EF18u;
    {
        const bool branch_taken_0x39ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF18u;
        // 0x39ef1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef18) {
            ctx->pc = 0x39F16Cu;
            goto label_39f16c;
        }
    }
    ctx->pc = 0x39EF20u;
label_39ef20:
    // 0x39ef20: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x39ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x39ef24: 0x2483ae10  addiu       $v1, $a0, -0x51F0
    ctx->pc = 0x39ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946320));
    // 0x39ef28: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x39ef28u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x40AE10u));
    // 0x39ef2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39EF2Cu;
    {
        const bool branch_taken_0x39ef2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF2Cu;
        // 0x39ef30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef2c) {
            ctx->pc = 0x39EF5Cu;
            goto label_39ef5c;
        }
    }
    ctx->pc = 0x39EF34u;
    // 0x39ef34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x39ef34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_39ef38:
    // 0x39ef38: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x39ef38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x39ef3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39EF3Cu;
    {
        const bool branch_taken_0x39ef3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF3Cu;
        // 0x39ef40: 0x24630278  addiu       $v1, $v1, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef3c) {
            ctx->pc = 0x39EF5Cu;
            goto label_39ef5c;
        }
    }
    ctx->pc = 0x39EF44u;
    // 0x39ef44: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x39ef44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39ef48: 0x0  nop
    ctx->pc = 0x39ef48u;
    // NOP
    // 0x39ef4c: 0x0  nop
    ctx->pc = 0x39ef4cu;
    // NOP
    // 0x39ef50: 0x0  nop
    ctx->pc = 0x39ef50u;
    // NOP
    // 0x39ef54: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x39EF54u;
    {
        const bool branch_taken_0x39ef54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ef54) {
            ctx->pc = 0x39EF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EF54u;
            // 0x39ef58: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ef38;
        }
    }
    ctx->pc = 0x39EF5Cu;
label_39ef5c:
    // 0x39ef5c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39ef60: 0x10e30082  beq         $a3, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x39EF60u;
    {
        const bool branch_taken_0x39ef60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x39EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF60u;
        // 0x39ef64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef60) {
            ctx->pc = 0x39F16Cu;
            goto label_39f16c;
        }
    }
    ctx->pc = 0x39EF68u;
    // 0x39ef68: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x39ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x39ef6c: 0x2483ae10  addiu       $v1, $a0, -0x51F0
    ctx->pc = 0x39ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946320));
    // 0x39ef70: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x39ef74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ef74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ef78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x39ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x39ef7c: 0x24060278  addiu       $a2, $zero, 0x278
    ctx->pc = 0x39ef7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x39ef80: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x39ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x39ef84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39ef88: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x39ef88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39ef8c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x39EF8Cu;
    SET_GPR_U32(ctx, 31, 0x39EF94u);
    ctx->pc = 0x39EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EF8Cu;
    // 0x39ef90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39EF8Cu, 0x39EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EF94u;
label_39ef94:
    // 0x39ef94: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x39ef94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x39ef98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ef9c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x39ef9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x39efa0: 0x92a20004  lbu         $v0, 0x4($s5)
    ctx->pc = 0x39efa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x39efa4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x39efa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x39efa8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x39efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x39efac: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x39efacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x39efb0: 0xae0201a0  sw          $v0, 0x1A0($s0)
    ctx->pc = 0x39efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
    // 0x39efb4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x39efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x39efb8: 0xae03026c  sw          $v1, 0x26C($s0)
    ctx->pc = 0x39efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 3));
    // 0x39efbc: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x39efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    // 0x39efc0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x39efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x39efc4: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39EFC4u;
    {
        const bool branch_taken_0x39efc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x39efc4) {
            ctx->pc = 0x39EFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EFC4u;
            // 0x39efc8: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EFE0u;
            goto label_39efe0;
        }
    }
    ctx->pc = 0x39EFCCu;
    // 0x39efcc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x39efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x39efd0: 0x340285c0  ori         $v0, $zero, 0x85C0
    ctx->pc = 0x39efd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34240);
    // 0x39efd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x39EFD4u;
    {
        const bool branch_taken_0x39efd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EFD4u;
        // 0x39efd8: 0x628818  mult        $s1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39efd4) {
            ctx->pc = 0x39F000u;
            goto label_39f000;
        }
    }
    ctx->pc = 0x39EFDCu;
    // 0x39efdc: 0x0  nop
    ctx->pc = 0x39efdcu;
    // NOP
label_39efe0:
    // 0x39efe0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x39efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x39efe4: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x39efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x39efe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39efec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39efecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39eff0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39eff4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x39eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x39eff8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x39eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x39effc: 0x448818  mult        $s1, $v0, $a0
    ctx->pc = 0x39effcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_39f000:
    // 0x39f000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f004: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39f004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f008: 0xc0e811e  jal         func_3A0478
    ctx->pc = 0x39F008u;
    SET_GPR_U32(ctx, 31, 0x39F010u);
    ctx->pc = 0x39F00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F008u;
    // 0x39f00c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0478u, 0x39F008u, 0x39F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F010u;
label_39f010:
    // 0x39f010: 0x4400053  bltz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x39F010u;
    {
        const bool branch_taken_0x39f010 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x39F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F010u;
        // 0x39f014: 0x2519023  subu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f010) {
            ctx->pc = 0x39F160u;
            goto label_39f160;
        }
    }
    ctx->pc = 0x39F018u;
    // 0x39f018: 0x6400051  bltz        $s2, . + 4 + (0x51 << 2)
    ctx->pc = 0x39F018u;
    {
        const bool branch_taken_0x39f018 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x39F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F018u;
        // 0x39f01c: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f018) {
            ctx->pc = 0x39F160u;
            goto label_39f160;
        }
    }
    ctx->pc = 0x39F020u;
    // 0x39f020: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x39f020u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x39f024: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x39F024u;
    {
        const bool branch_taken_0x39f024 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F024u;
        // 0x39f028: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f024) {
            ctx->pc = 0x39F080u;
            goto label_39f080;
        }
    }
    ctx->pc = 0x39F02Cu;
    // 0x39f02c: 0x26110120  addiu       $s1, $s0, 0x120
    ctx->pc = 0x39f02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x39f030: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x39f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x39f034: 0x0  nop
    ctx->pc = 0x39f034u;
    // NOP
label_39f038:
    // 0x39f038: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x39f038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x39f03c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39f03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f040: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x39f040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x39f044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39f048: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x39f048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f04c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x39f04cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x39f050: 0x6400043  bltz        $s2, . + 4 + (0x43 << 2)
    ctx->pc = 0x39F050u;
    {
        const bool branch_taken_0x39f050 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x39F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F050u;
        // 0x39f054: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f050) {
            ctx->pc = 0x39F160u;
            goto label_39f160;
        }
    }
    ctx->pc = 0x39F058u;
    // 0x39f058: 0xc0eaac0  jal         func_3AAB00
    ctx->pc = 0x39F058u;
    SET_GPR_U32(ctx, 31, 0x39F060u);
    ctx->pc = 0x39F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F058u;
    // 0x39f05c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAB00u, 0x39F058u, 0x39F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F060u;
label_39f060:
    // 0x39f060: 0xae22ff74  sw          $v0, -0x8C($s1)
    ctx->pc = 0x39f060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967156), GPR_U32(ctx, 2));
    // 0x39f064: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x39F064u;
    {
        const bool branch_taken_0x39f064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F064u;
        // 0x39f068: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f064) {
            ctx->pc = 0x39F160u;
            goto label_39f160;
        }
    }
    ctx->pc = 0x39F06Cu;
    // 0x39f06c: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x39f06cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x39f070: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39f070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x39f074: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x39f074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39f078: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x39F078u;
    {
        const bool branch_taken_0x39f078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f078) {
            ctx->pc = 0x39F07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F078u;
            // 0x39f07c: 0x8e0201a0  lw          $v0, 0x1A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f038;
        }
    }
    ctx->pc = 0x39F080u;
label_39f080:
    // 0x39f080: 0x2643df00  addiu       $v1, $s2, -0x2100
    ctx->pc = 0x39f080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958848));
    // 0x39f084: 0x2645e6ff  addiu       $a1, $s2, -0x1901
    ctx->pc = 0x39f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960895));
    // 0x39f088: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x39f088u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x39f08c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x39f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x39f090: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x39f090u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x39f094: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x39f094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x39f098: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x39f098u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x39f09c: 0xae130114  sw          $s3, 0x114($s0)
    ctx->pc = 0x39f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 19));
    // 0x39f0a0: 0x32ac0  sll         $a1, $v1, 11
    ctx->pc = 0x39f0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x39f0a4: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x39f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x39f0a8: 0xae050118  sw          $a1, 0x118($s0)
    ctx->pc = 0x39f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 5));
    // 0x39f0ac: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x39f0acu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x39f0b0: 0x640002b  bltz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x39F0B0u;
    {
        const bool branch_taken_0x39f0b0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x39F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F0B0u;
        // 0x39f0b4: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f0b0) {
            ctx->pc = 0x39F160u;
            goto label_39f160;
        }
    }
    ctx->pc = 0x39F0B8u;
    // 0x39f0b8: 0x2a420100  slti        $v0, $s2, 0x100
    ctx->pc = 0x39f0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x39f0bc: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x39F0BCu;
    {
        const bool branch_taken_0x39f0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F0BCu;
        // 0x39f0c0: 0xae1301cc  sw          $s3, 0x1CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f0bc) {
            ctx->pc = 0x39F160u;
            goto label_39f160;
        }
    }
    ctx->pc = 0x39F0C4u;
    // 0x39f0c4: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x39f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x39f0c8: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x39f0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x39f0cc: 0xc0eaac0  jal         func_3AAB00
    ctx->pc = 0x39F0CCu;
    SET_GPR_U32(ctx, 31, 0x39F0D4u);
    ctx->pc = 0x39F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F0CCu;
    // 0x39f0d0: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAB00u, 0x39F0CCu, 0x39F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F0D4u;
label_39f0d4:
    // 0x39f0d4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x39F0D4u;
    {
        const bool branch_taken_0x39f0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F0D4u;
        // 0x39f0d8: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f0d4) {
            ctx->pc = 0x39F160u;
            goto label_39f160;
        }
    }
    ctx->pc = 0x39F0DCu;
    // 0x39f0dc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x39f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x39f0e0: 0x26060094  addiu       $a2, $s0, 0x94
    ctx->pc = 0x39f0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x39f0e4: 0xc0e827c  jal         func_3A09F0
    ctx->pc = 0x39F0E4u;
    SET_GPR_U32(ctx, 31, 0x39F0ECu);
    ctx->pc = 0x39F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F0E4u;
    // 0x39f0e8: 0x8e050090  lw          $a1, 0x90($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A09F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A09F0u, 0x39F0E4u, 0x39F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F0ECu;
label_39f0ec:
    // 0x39f0ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x39F0ECu;
    {
        const bool branch_taken_0x39f0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F0ECu;
        // 0x39f0f0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f0ec) {
            ctx->pc = 0x39F160u;
            goto label_39f160;
        }
    }
    ctx->pc = 0x39F0F4u;
    // 0x39f0f4: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x39f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x39f0f8: 0xc0e65b2  jal         func_3996C8
    ctx->pc = 0x39F0F8u;
    SET_GPR_U32(ctx, 31, 0x39F100u);
    ctx->pc = 0x39F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F0F8u;
    // 0x39f0fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3996C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3996C8u, 0x39F0F8u, 0x39F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F100u;
label_39f100:
    // 0x39f100: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x39F100u;
    {
        const bool branch_taken_0x39f100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F100u;
        // 0x39f104: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f100) {
            ctx->pc = 0x39F160u;
            goto label_39f160;
        }
    }
    ctx->pc = 0x39F108u;
    // 0x39f108: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39f108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39f10c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39f10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f110: 0x24a5fb20  addiu       $a1, $a1, -0x4E0
    ctx->pc = 0x39f110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966048));
    // 0x39f114: 0xc0e6780  jal         func_399E00
    ctx->pc = 0x39F114u;
    SET_GPR_U32(ctx, 31, 0x39F11Cu);
    ctx->pc = 0x39F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F114u;
    // 0x39f118: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E00u, 0x39F114u, 0x39F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F11Cu;
label_39f11c:
    // 0x39f11c: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x39f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x39f120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f128: 0xa20201b1  sb          $v0, 0x1B1($s0)
    ctx->pc = 0x39f128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 2));
    // 0x39f12c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39f12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f130: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x39f130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x39f134: 0xa20001b0  sb          $zero, 0x1B0($s0)
    ctx->pc = 0x39f134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 432), (uint8_t)GPR_U32(ctx, 0));
    // 0x39f138: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x39f138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x39f13c: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x39f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x39f140: 0xae0301b8  sw          $v1, 0x1B8($s0)
    ctx->pc = 0x39f140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 3));
    // 0x39f144: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x39f144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x39f148: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x39f148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x39f14c: 0xae0301c8  sw          $v1, 0x1C8($s0)
    ctx->pc = 0x39f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 3));
    // 0x39f150: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x39f150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x39f154: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x39f154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x39f158: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39F158u;
    {
        const bool branch_taken_0x39f158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F158u;
        // 0x39f15c: 0xae000274  sw          $zero, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f158) {
            ctx->pc = 0x39F16Cu;
            goto label_39f16c;
        }
    }
    ctx->pc = 0x39F160u;
label_39f160:
    // 0x39f160: 0xc0e7c70  jal         func_39F1C0
    ctx->pc = 0x39F160u;
    SET_GPR_U32(ctx, 31, 0x39F168u);
    ctx->pc = 0x39F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F160u;
    // 0x39f164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F1C0u, 0x39F160u, 0x39F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F168u;
label_39f168:
    // 0x39f168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39f168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f16c:
    // 0x39f16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39f174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f178: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39f178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39f17c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39f17cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f180: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x39f180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39f184: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39f184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39f188: 0x3e00008  jr          $ra
    ctx->pc = 0x39F188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F188u;
        // 0x39f18c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F190u;
}
