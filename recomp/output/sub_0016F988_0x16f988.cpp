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

// Function: sub_0016F988
// Address: 0x16f988 - 0x16fad0
void sub_0016F988_0x16f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F988_0x16f988");
#endif

    switch (ctx->pc) {
        case 0x16f9c0u: goto label_16f9c0;
        case 0x16f9d0u: goto label_16f9d0;
        case 0x16f9d8u: goto label_16f9d8;
        case 0x16fa04u: goto label_16fa04;
        case 0x16fa60u: goto label_16fa60;
        case 0x16faacu: goto label_16faac;
        default: break;
    }

    ctx->pc = 0x16f988u;

    // 0x16f988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f98c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16f98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16f990: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16f990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16f994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16f99c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16f99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16f9a0: 0x920500f8  lbu         $a1, 0xF8($s0)
    ctx->pc = 0x16f9a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x16f9a4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x16f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x16f9a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16f9ac: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x16f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x16f9b0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F9B0u;
    {
        const bool branch_taken_0x16f9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f9b0) {
            ctx->pc = 0x16F9C8u;
            goto label_16f9c8;
        }
    }
    ctx->pc = 0x16F9B8u;
    // 0x16f9b8: 0xc05b3a0  jal         func_16CE80
    ctx->pc = 0x16F9B8u;
    SET_GPR_U32(ctx, 31, 0x16F9C0u);
    ctx->pc = 0x16CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CE80u, 0x16F9B8u, 0x16F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9C0u;
label_16f9c0:
    // 0x16f9c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F9C0u;
    {
        const bool branch_taken_0x16f9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f9c0) {
            ctx->pc = 0x16F9D0u;
            goto label_16f9d0;
        }
    }
    ctx->pc = 0x16F9C8u;
label_16f9c8:
    // 0x16f9c8: 0xc05b3b6  jal         func_16CED8
    ctx->pc = 0x16F9C8u;
    SET_GPR_U32(ctx, 31, 0x16F9D0u);
    ctx->pc = 0x16F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9C8u;
    // 0x16f9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CED8u, 0x16F9C8u, 0x16F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9D0u;
label_16f9d0:
    // 0x16f9d0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x16F9D0u;
    SET_GPR_U32(ctx, 31, 0x16F9D8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x16F9D0u, 0x16F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9D8u;
label_16f9d8:
    // 0x16f9d8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x16f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x16f9dc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x16f9dcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16f9e0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16F9E0u;
    {
        const bool branch_taken_0x16f9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f9e0) {
            ctx->pc = 0x16F9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F9E0u;
            // 0x16f9e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F9E8u;
            goto label_16f9e8;
        }
    }
    ctx->pc = 0x16F9E8u;
label_16f9e8:
    // 0x16f9e8: 0x2010  mfhi        $a0
    ctx->pc = 0x16f9e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x16f9ec: 0x2c840021  sltiu       $a0, $a0, 0x21
    ctx->pc = 0x16f9ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x16f9f0: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x16F9F0u;
    {
        const bool branch_taken_0x16f9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9F0u;
        // 0x16f9f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9f0) {
            ctx->pc = 0x16FAB8u;
            goto label_16fab8;
        }
    }
    ctx->pc = 0x16F9F8u;
    // 0x16f9f8: 0x920500f8  lbu         $a1, 0xF8($s0)
    ctx->pc = 0x16f9f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x16f9fc: 0xc05b3a0  jal         func_16CE80
    ctx->pc = 0x16F9FCu;
    SET_GPR_U32(ctx, 31, 0x16FA04u);
    ctx->pc = 0x16FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9FCu;
    // 0x16fa00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CE80u, 0x16F9FCu, 0x16FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA04u;
label_16fa04:
    // 0x16fa04: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x16fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x16fa08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fa0c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FA0Cu;
    {
        const bool branch_taken_0x16fa0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA0Cu;
        // 0x16fa10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa0c) {
            ctx->pc = 0x16FA20u;
            goto label_16fa20;
        }
    }
    ctx->pc = 0x16FA14u;
    // 0x16fa14: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16fa18: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16FA18u;
    {
        const bool branch_taken_0x16fa18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16fa18) {
            ctx->pc = 0x16FA24u;
            goto label_16fa24;
        }
    }
    ctx->pc = 0x16FA20u;
label_16fa20:
    // 0x16fa20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fa24:
    // 0x16fa24: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16FA24u;
    {
        const bool branch_taken_0x16fa24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA24u;
        // 0x16fa28: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa24) {
            ctx->pc = 0x16FAB4u;
            goto label_16fab4;
        }
    }
    ctx->pc = 0x16FA2Cu;
    // 0x16fa2c: 0x920300f8  lbu         $v1, 0xF8($s0)
    ctx->pc = 0x16fa2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x16fa30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16fa34: 0x24529a08  addiu       $s2, $v0, -0x65F8
    ctx->pc = 0x16fa34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16fa38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fa3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa40: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x16fa40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16fa44: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16fa48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16fa4c: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x16fa4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16fa50: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16FA50u;
    {
        const bool branch_taken_0x16fa50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA50u;
        // 0x16fa54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa50) {
            ctx->pc = 0x16FAB8u;
            goto label_16fab8;
        }
    }
    ctx->pc = 0x16FA58u;
    // 0x16fa58: 0xc043958  jal         func_10E560
    ctx->pc = 0x16FA58u;
    SET_GPR_U32(ctx, 31, 0x16FA60u);
    ctx->pc = 0x16FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA58u;
    // 0x16fa5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x16FA58u, 0x16FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA60u;
label_16fa60:
    // 0x16fa60: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16FA60u;
    {
        const bool branch_taken_0x16fa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA60u;
        // 0x16fa64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa60) {
            ctx->pc = 0x16FAB8u;
            goto label_16fab8;
        }
    }
    ctx->pc = 0x16FA68u;
    // 0x16fa68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16fa6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fa70: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16fa74: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x16fa78: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FA78u;
    {
        const bool branch_taken_0x16fa78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fa78) {
            ctx->pc = 0x16FA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FA78u;
            // 0x16fa7c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FA88u;
            goto label_16fa88;
        }
    }
    ctx->pc = 0x16FA80u;
    // 0x16fa80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16FA80u;
    {
        const bool branch_taken_0x16fa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA80u;
        // 0x16fa84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa80) {
            ctx->pc = 0x16FA90u;
            goto label_16fa90;
        }
    }
    ctx->pc = 0x16FA88u;
label_16fa88:
    // 0x16fa88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fa8c: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x16fa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16fa90:
    // 0x16fa90: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x16FA90u;
    {
        const bool branch_taken_0x16fa90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA90u;
        // 0x16fa94: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa90) {
            ctx->pc = 0x16FAB4u;
            goto label_16fab4;
        }
    }
    ctx->pc = 0x16FA98u;
    // 0x16fa98: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x16fa98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x16fa9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16fa9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16faa0: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x16faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x16faa4: 0xc0495ac  jal         func_1256B0
    ctx->pc = 0x16FAA4u;
    SET_GPR_U32(ctx, 31, 0x16FAACu);
    ctx->pc = 0x16FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAA4u;
    // 0x16faa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1256B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1256B0u, 0x16FAA4u, 0x16FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FAACu;
label_16faac:
    // 0x16faac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16FAACu;
    {
        const bool branch_taken_0x16faac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAACu;
        // 0x16fab0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faac) {
            ctx->pc = 0x16FAB8u;
            goto label_16fab8;
        }
    }
    ctx->pc = 0x16FAB4u;
label_16fab4:
    // 0x16fab4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16fab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fab8:
    // 0x16fab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fabc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16fabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16fac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fac4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16fac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16fac8: 0x3e00008  jr          $ra
    ctx->pc = 0x16FAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAC8u;
        // 0x16facc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FAD0u;
}
