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

// Function: sub_0039ADC0
// Address: 0x39adc0 - 0x39b0e8
void sub_0039ADC0_0x39adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039ADC0_0x39adc0");
#endif

    switch (ctx->pc) {
        case 0x39ae10u: goto label_39ae10;
        case 0x39ae8cu: goto label_39ae8c;
        case 0x39aee0u: goto label_39aee0;
        case 0x39af20u: goto label_39af20;
        case 0x39af34u: goto label_39af34;
        case 0x39af50u: goto label_39af50;
        case 0x39af78u: goto label_39af78;
        case 0x39afa4u: goto label_39afa4;
        case 0x39afb8u: goto label_39afb8;
        case 0x39afc8u: goto label_39afc8;
        case 0x39afd8u: goto label_39afd8;
        case 0x39afecu: goto label_39afec;
        case 0x39aff4u: goto label_39aff4;
        case 0x39b058u: goto label_39b058;
        case 0x39b0b4u: goto label_39b0b4;
        case 0x39b0c0u: goto label_39b0c0;
        case 0x39b0c8u: goto label_39b0c8;
        default: break;
    }

    ctx->pc = 0x39adc0u;

    // 0x39adc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39adc4: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x39adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x39adc8: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x39adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x39adcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39adccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39add0: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x39add0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x39add4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39add8: 0x2051023  subu        $v0, $s0, $a1
    ctx->pc = 0x39add8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x39addc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39addcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ade0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39ade4: 0xc29023  subu        $s2, $a2, $v0
    ctx->pc = 0x39ade4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x39ade8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39adec: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x39ADECu;
    {
        const bool branch_taken_0x39adec = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x39ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADECu;
        // 0x39adf0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39adec) {
            ctx->pc = 0x39AE04u;
            goto label_39ae04;
        }
    }
    ctx->pc = 0x39ADF4u;
    // 0x39adf4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39ADF4u;
    {
        const bool branch_taken_0x39adf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39adf4) {
            ctx->pc = 0x39ADF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ADF4u;
            // 0x39adf8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AE08u;
            goto label_39ae08;
        }
    }
    ctx->pc = 0x39ADFCu;
    // 0x39adfc: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39ADFCu;
    {
        const bool branch_taken_0x39adfc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x39AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADFCu;
        // 0x39ae00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39adfc) {
            ctx->pc = 0x39AE10u;
            goto label_39ae10;
        }
    }
    ctx->pc = 0x39AE04u;
label_39ae04:
    // 0x39ae04: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39ae08:
    // 0x39ae08: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x39AE08u;
    {
        const bool branch_taken_0x39ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE08u;
        // 0x39ae0c: 0x2484b258  addiu       $a0, $a0, -0x4DA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae08) {
            ctx->pc = 0x39AED8u;
            goto label_39aed8;
        }
    }
    ctx->pc = 0x39AE10u;
label_39ae10:
    // 0x39ae10: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x39ae10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x39ae14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39AE14u;
    {
        const bool branch_taken_0x39ae14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE14u;
        // 0x39ae18: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae14) {
            ctx->pc = 0x39AE48u;
            goto label_39ae48;
        }
    }
    ctx->pc = 0x39AE1Cu;
    // 0x39ae1c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x39ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x39ae20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39ae24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39ae28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39ae2c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39ae30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x39ae34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39ae38: 0x80630c28  lb          $v1, 0xC28($v1)
    ctx->pc = 0x39ae38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3112)));
    // 0x39ae3c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x39AE3Cu;
    {
        const bool branch_taken_0x39ae3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ae3c) {
            ctx->pc = 0x39AE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AE3Cu;
            // 0x39ae40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ae10;
        }
    }
    ctx->pc = 0x39AE44u;
    // 0x39ae44: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x39ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_39ae48:
    // 0x39ae48: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39AE48u;
    {
        const bool branch_taken_0x39ae48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x39AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE48u;
        // 0x39ae4c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae48) {
            ctx->pc = 0x39AE60u;
            goto label_39ae60;
        }
    }
    ctx->pc = 0x39AE50u;
    // 0x39ae50: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39ae54: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x39AE54u;
    {
        const bool branch_taken_0x39ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE54u;
        // 0x39ae58: 0x2484b280  addiu       $a0, $a0, -0x4D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae54) {
            ctx->pc = 0x39AED8u;
            goto label_39aed8;
        }
    }
    ctx->pc = 0x39AE5Cu;
    // 0x39ae5c: 0x0  nop
    ctx->pc = 0x39ae5cu;
    // NOP
label_39ae60:
    // 0x39ae60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ae60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ae64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39ae68: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x39ae68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x39ae6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39ae70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39ae74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39ae78: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x39ae78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x39ae7c: 0x26310c28  addiu       $s1, $s1, 0xC28
    ctx->pc = 0x39ae7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3112));
    // 0x39ae80: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x39ae80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x39ae84: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x39AE84u;
    SET_GPR_U32(ctx, 31, 0x39AE8Cu);
    ctx->pc = 0x39AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE84u;
    // 0x39ae88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39AE84u, 0x39AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE8Cu;
label_39ae8c:
    // 0x39ae8c: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x39ae8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x39ae90: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x39ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x39ae94: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x39ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x39ae98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39ae9c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x39ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x39aea0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x39aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x39aea4: 0x2422023  subu        $a0, $s2, $v0
    ctx->pc = 0x39aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x39aea8: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x39aea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39aeac: 0x2483fedc  addiu       $v1, $a0, -0x124
    ctx->pc = 0x39aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967004));
    // 0x39aeb0: 0x248406db  addiu       $a0, $a0, 0x6DB
    ctx->pc = 0x39aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1755));
    // 0x39aeb4: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x39aeb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x39aeb8: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x39aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x39aebc: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x39aebcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x39aec0: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x39aec0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x39aec4: 0x32ac0  sll         $a1, $v1, 11
    ctx->pc = 0x39aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x39aec8: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39AEC8u;
    {
        const bool branch_taken_0x39aec8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x39AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AEC8u;
        // 0x39aecc: 0xae250024  sw          $a1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aec8) {
            ctx->pc = 0x39AEE8u;
            goto label_39aee8;
        }
    }
    ctx->pc = 0x39AED0u;
    // 0x39aed0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39aed4: 0x2484b2b0  addiu       $a0, $a0, -0x4D50
    ctx->pc = 0x39aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947504));
label_39aed8:
    // 0x39aed8: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x39AED8u;
    SET_GPR_U32(ctx, 31, 0x39AEE0u);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39AED8u, 0x39AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AEE0u;
label_39aee0:
    // 0x39aee0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x39AEE0u;
    {
        const bool branch_taken_0x39aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AEE0u;
        // 0x39aee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aee0) {
            ctx->pc = 0x39B0CCu;
            goto label_39b0cc;
        }
    }
    ctx->pc = 0x39AEE8u;
label_39aee8:
    // 0x39aee8: 0x24080024  addiu       $t0, $zero, 0x24
    ctx->pc = 0x39aee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x39aeec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x39aeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aef0: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x39aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x39aef4: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x39aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x39aef8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x39aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x39aefc: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x39aefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x39af00: 0x24072060  addiu       $a3, $zero, 0x2060
    ctx->pc = 0x39af00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8288));
    // 0x39af04: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x39af04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x39af08: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x39af08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x39af0c: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x39af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x39af10: 0xae270034  sw          $a3, 0x34($s1)
    ctx->pc = 0x39af10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 7));
    // 0x39af14: 0xae280028  sw          $t0, 0x28($s1)
    ctx->pc = 0x39af14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 8));
    // 0x39af18: 0xc0eaac0  jal         func_3AAB00
    ctx->pc = 0x39AF18u;
    SET_GPR_U32(ctx, 31, 0x39AF20u);
    ctx->pc = 0x39AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AF18u;
    // 0x39af1c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAB00u, 0x39AF18u, 0x39AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AF20u;
label_39af20:
    // 0x39af20: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x39AF20u;
    {
        const bool branch_taken_0x39af20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF20u;
        // 0x39af24: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af20) {
            ctx->pc = 0x39AFD0u;
            goto label_39afd0;
        }
    }
    ctx->pc = 0x39AF28u;
    // 0x39af28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39af28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39af2c: 0xc0e65b2  jal         func_3996C8
    ctx->pc = 0x39AF2Cu;
    SET_GPR_U32(ctx, 31, 0x39AF34u);
    ctx->pc = 0x39AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AF2Cu;
    // 0x39af30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3996C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3996C8u, 0x39AF2Cu, 0x39AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AF34u;
label_39af34:
    // 0x39af34: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x39AF34u;
    {
        const bool branch_taken_0x39af34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF34u;
        // 0x39af38: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af34) {
            ctx->pc = 0x39AFD0u;
            goto label_39afd0;
        }
    }
    ctx->pc = 0x39AF3Cu;
    // 0x39af3c: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x39AF3Cu;
    {
        const bool branch_taken_0x39af3c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x39AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF3Cu;
        // 0x39af40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af3c) {
            ctx->pc = 0x39AF90u;
            goto label_39af90;
        }
    }
    ctx->pc = 0x39AF44u;
    // 0x39af44: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x39af44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x39af48: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x39af48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x39af4c: 0x0  nop
    ctx->pc = 0x39af4cu;
    // NOP
label_39af50:
    // 0x39af50: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x39af50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x39af54: 0xd02018  mult        $a0, $a2, $s0
    ctx->pc = 0x39af54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39af58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39af58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x39af5c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x39af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x39af60: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x39af60u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x39af64: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x39af64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x39af68: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x39af68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39af6c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x39af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x39af70: 0xc0eaac0  jal         func_3AAB00
    ctx->pc = 0x39AF70u;
    SET_GPR_U32(ctx, 31, 0x39AF78u);
    ctx->pc = 0x39AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AF70u;
    // 0x39af74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAB00u, 0x39AF70u, 0x39AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AF78u;
label_39af78:
    // 0x39af78: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x39af78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x39af7c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x39af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x39af80: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x39AF80u;
    {
        const bool branch_taken_0x39af80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF80u;
        // 0x39af84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af80) {
            ctx->pc = 0x39AFD0u;
            goto label_39afd0;
        }
    }
    ctx->pc = 0x39AF88u;
    // 0x39af88: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x39AF88u;
    {
        const bool branch_taken_0x39af88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39af88) {
            ctx->pc = 0x39AF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AF88u;
            // 0x39af8c: 0x8e260034  lw          $a2, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39af50;
        }
    }
    ctx->pc = 0x39AF90u;
label_39af90:
    // 0x39af90: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x39af90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x39af94: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x39af94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x39af98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39af98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39af9c: 0xc0e5fbe  jal         func_397EF8
    ctx->pc = 0x39AF9Cu;
    SET_GPR_U32(ctx, 31, 0x39AFA4u);
    ctx->pc = 0x39AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AF9Cu;
    // 0x39afa0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397EF8u, 0x39AF9Cu, 0x39AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFA4u;
label_39afa4:
    // 0x39afa4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39AFA4u;
    {
        const bool branch_taken_0x39afa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFA4u;
        // 0x39afa8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39afa4) {
            ctx->pc = 0x39AFD0u;
            goto label_39afd0;
        }
    }
    ctx->pc = 0x39AFACu;
    // 0x39afac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39afacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39afb0: 0xc0e5f08  jal         func_397C20
    ctx->pc = 0x39AFB0u;
    SET_GPR_U32(ctx, 31, 0x39AFB8u);
    ctx->pc = 0x39AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AFB0u;
    // 0x39afb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C20u, 0x39AFB0u, 0x39AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFB8u;
label_39afb8:
    // 0x39afb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39AFB8u;
    {
        const bool branch_taken_0x39afb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFB8u;
        // 0x39afbc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39afb8) {
            ctx->pc = 0x39AFD0u;
            goto label_39afd0;
        }
    }
    ctx->pc = 0x39AFC0u;
    // 0x39afc0: 0xc0e9b14  jal         func_3A6C50
    ctx->pc = 0x39AFC0u;
    SET_GPR_U32(ctx, 31, 0x39AFC8u);
    ctx->pc = 0x39AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AFC0u;
    // 0x39afc4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C50u, 0x39AFC0u, 0x39AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFC8u;
label_39afc8:
    // 0x39afc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39AFC8u;
    {
        const bool branch_taken_0x39afc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFC8u;
        // 0x39afcc: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39afc8) {
            ctx->pc = 0x39AFE0u;
            goto label_39afe0;
        }
    }
    ctx->pc = 0x39AFD0u;
label_39afd0:
    // 0x39afd0: 0xc0e6c8c  jal         func_39B230
    ctx->pc = 0x39AFD0u;
    SET_GPR_U32(ctx, 31, 0x39AFD8u);
    ctx->pc = 0x39AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AFD0u;
    // 0x39afd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B230u, 0x39AFD0u, 0x39AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFD8u;
label_39afd8:
    // 0x39afd8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x39AFD8u;
    {
        const bool branch_taken_0x39afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFD8u;
        // 0x39afdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39afd8) {
            ctx->pc = 0x39B0CCu;
            goto label_39b0cc;
        }
    }
    ctx->pc = 0x39AFE0u;
label_39afe0:
    // 0x39afe0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x39afe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x39afe4: 0xc0e9b84  jal         func_3A6E10
    ctx->pc = 0x39AFE4u;
    SET_GPR_U32(ctx, 31, 0x39AFECu);
    ctx->pc = 0x39AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AFE4u;
    // 0x39afe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E10u, 0x39AFE4u, 0x39AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFECu;
label_39afec:
    // 0x39afec: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x39AFECu;
    SET_GPR_U32(ctx, 31, 0x39AFF4u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39AFECu, 0x39AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFF4u;
label_39aff4:
    // 0x39aff4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x39aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x39aff8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x39aff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x39affc: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x39affcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x39b000: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x39b000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x39b004: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39b004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39b008: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x39b008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x39b00c: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x39b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x39b010: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x39b010u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x39b014: 0x8cc5ad90  lw          $a1, -0x5270($a2)
    ctx->pc = 0x39b014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946192)));
    // 0x39b018: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x39b018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x39b01c: 0xa6200040  sh          $zero, 0x40($s1)
    ctx->pc = 0x39b01cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x39b020: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x39b020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x39b024: 0xa622003c  sh          $v0, 0x3C($s1)
    ctx->pc = 0x39b024u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x39b028: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x39b028u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x39b02c: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x39b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x39b030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39b030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39b034: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39b034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x39b038: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x39b038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x39b03c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39b03cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39b040: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x39b040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x39b044: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x39B044u;
    {
        const bool branch_taken_0x39b044 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x39B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B044u;
        // 0x39b048: 0xa622003e  sh          $v0, 0x3E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b044) {
            ctx->pc = 0x39B074u;
            goto label_39b074;
        }
    }
    ctx->pc = 0x39B04Cu;
    // 0x39b04c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x39b04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b050: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x39b050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x39b054: 0x26220042  addiu       $v0, $s1, 0x42
    ctx->pc = 0x39b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 66));
label_39b058:
    // 0x39b058: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x39b058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x39b05c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x39b05cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x39b060: 0x0  nop
    ctx->pc = 0x39b060u;
    // NOP
    // 0x39b064: 0x0  nop
    ctx->pc = 0x39b064u;
    // NOP
    // 0x39b068: 0x0  nop
    ctx->pc = 0x39b068u;
    // NOP
    // 0x39b06c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39B06Cu;
    {
        const bool branch_taken_0x39b06c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B06Cu;
        // 0x39b070: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b06c) {
            ctx->pc = 0x39B058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b058;
        }
    }
    ctx->pc = 0x39B074u;
label_39b074:
    // 0x39b074: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x39b074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39b078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b080: 0xa6200046  sh          $zero, 0x46($s1)
    ctx->pc = 0x39b080u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x39b084: 0xa230006c  sb          $s0, 0x6C($s1)
    ctx->pc = 0x39b084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 16));
    // 0x39b088: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x39b088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x39b08c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x39b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x39b090: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x39b090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x39b094: 0xa6200060  sh          $zero, 0x60($s1)
    ctx->pc = 0x39b094u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x39b098: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x39b098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x39b09c: 0xa6200068  sh          $zero, 0x68($s1)
    ctx->pc = 0x39b09cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x39b0a0: 0xa620006a  sh          $zero, 0x6A($s1)
    ctx->pc = 0x39b0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x39b0a4: 0xa230006d  sb          $s0, 0x6D($s1)
    ctx->pc = 0x39b0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 109), (uint8_t)GPR_U32(ctx, 16));
    // 0x39b0a8: 0xa2200072  sb          $zero, 0x72($s1)
    ctx->pc = 0x39b0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x39b0ac: 0xc0e7288  jal         func_39CA20
    ctx->pc = 0x39B0ACu;
    SET_GPR_U32(ctx, 31, 0x39B0B4u);
    ctx->pc = 0x39B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B0ACu;
    // 0x39b0b0: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CA20u, 0x39B0ACu, 0x39B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B0B4u;
label_39b0b4:
    // 0x39b0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39b0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b0b8: 0xc0e708a  jal         func_39C228
    ctx->pc = 0x39B0B8u;
    SET_GPR_U32(ctx, 31, 0x39B0C0u);
    ctx->pc = 0x39B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B0B8u;
    // 0x39b0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C228u, 0x39B0B8u, 0x39B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B0C0u;
label_39b0c0:
    // 0x39b0c0: 0xc0ebe56  jal         func_3AF958
    ctx->pc = 0x39B0C0u;
    SET_GPR_U32(ctx, 31, 0x39B0C8u);
    ctx->pc = 0x39B0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B0C0u;
    // 0x39b0c4: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39B0C0u, 0x39B0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B0C8u;
label_39b0c8:
    // 0x39b0c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39b0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39b0cc:
    // 0x39b0cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b0d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b0d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b0d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39b0d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b0d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39b0d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39b0dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39b0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x39B0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0E0u;
        // 0x39b0e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B0E8u;
}
