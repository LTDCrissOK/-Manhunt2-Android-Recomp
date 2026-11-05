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

// Function: sub_0038AD10
// Address: 0x38ad10 - 0x38af60
void sub_0038AD10_0x38ad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AD10_0x38ad10");
#endif

    switch (ctx->pc) {
        case 0x38ad54u: goto label_38ad54;
        case 0x38ad90u: goto label_38ad90;
        case 0x38ade4u: goto label_38ade4;
        case 0x38adfcu: goto label_38adfc;
        case 0x38ae18u: goto label_38ae18;
        case 0x38ae3cu: goto label_38ae3c;
        default: break;
    }

    ctx->pc = 0x38ad10u;

    // 0x38ad10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38ad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x38ad14: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x38ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x38ad18: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x38ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x38ad1c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x38ad1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ad20: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x38ad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x38ad24: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x38ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x38ad28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x38ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x38ad2c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x38ad2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ad30: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x38ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x38ad34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ad34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ad38: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x38ad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x38ad3c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x38ad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x38ad40: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x38ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x38ad44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x38ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x38ad48: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x38ad4c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x38ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x38ad50: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_38ad54:
    // 0x38ad54: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x38ad54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x38ad58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x38AD58u;
    {
        const bool branch_taken_0x38ad58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ad58) {
            ctx->pc = 0x38AD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AD58u;
            // 0x38ad5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AD60u;
            goto label_38ad60;
        }
    }
    ctx->pc = 0x38AD60u;
label_38ad60:
    // 0x38ad60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x38ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ad64: 0x1810  mfhi        $v1
    ctx->pc = 0x38ad64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x38ad68: 0xb812  mflo        $s7
    ctx->pc = 0x38ad68u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x38ad6c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x38ad6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ad70: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x38ad70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x38ad74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x38AD74u;
    {
        const bool branch_taken_0x38ad74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD74u;
        // 0x38ad78: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad74) {
            ctx->pc = 0x38ADC0u;
            goto label_38adc0;
        }
    }
    ctx->pc = 0x38AD7Cu;
    // 0x38ad7c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x38ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38ad80: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x38ad80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x38ad84: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x38ad84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x38ad88: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x38ad88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x38ad8c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x38ad8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_38ad90:
    // 0x38ad90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38ad94: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x38ad94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x38ad98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x38ad9c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x38ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x38ada0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x38ada0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x38ada4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38ADA4u;
    {
        const bool branch_taken_0x38ada4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ada4) {
            ctx->pc = 0x38AD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ad90;
        }
    }
    ctx->pc = 0x38ADACu;
    // 0x38adac: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x38adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38adb0: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x38adb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38adb4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x38adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x38adb8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x38ADB8u;
    {
        const bool branch_taken_0x38adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADB8u;
        // 0x38adbc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38adb8) {
            ctx->pc = 0x38AE54u;
            goto label_38ae54;
        }
    }
    ctx->pc = 0x38ADC0u;
label_38adc0:
    // 0x38adc0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x38adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x38adc4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x38adc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x38adc8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38ADC8u;
    {
        const bool branch_taken_0x38adc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADC8u;
        // 0x38adcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38adc8) {
            ctx->pc = 0x38ADF4u;
            goto label_38adf4;
        }
    }
    ctx->pc = 0x38ADD0u;
    // 0x38add0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38add0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38add4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x38add4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38add8: 0x24a594b0  addiu       $a1, $a1, -0x6B50
    ctx->pc = 0x38add8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
    // 0x38addc: 0xc0e290e  jal         func_38A438
    ctx->pc = 0x38ADDCu;
    SET_GPR_U32(ctx, 31, 0x38ADE4u);
    ctx->pc = 0x38ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ADDCu;
    // 0x38ade0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A438u, 0x38ADDCu, 0x38ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ADE4u;
label_38ade4:
    // 0x38ade4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ade8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38ade8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38adec: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x38ADECu;
    {
        const bool branch_taken_0x38adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADECu;
        // 0x38adf0: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38adec) {
            ctx->pc = 0x38AF30u;
            goto label_38af30;
        }
    }
    ctx->pc = 0x38ADF4u;
label_38adf4:
    // 0x38adf4: 0xc0e2982  jal         func_38A608
    ctx->pc = 0x38ADF4u;
    SET_GPR_U32(ctx, 31, 0x38ADFCu);
    ctx->pc = 0x38ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ADF4u;
    // 0x38adf8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A608u, 0x38ADF4u, 0x38ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ADFCu;
label_38adfc:
    // 0x38adfc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38ae00: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x38ae00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x38ae04: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x38ae04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x38ae08: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x38ae08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x38ae0c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x38ae0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x38ae10: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x38ae10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x38ae14: 0x0  nop
    ctx->pc = 0x38ae14u;
    // NOP
label_38ae18:
    // 0x38ae18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x38ae1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x38ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x38ae20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38ae24: 0x0  nop
    ctx->pc = 0x38ae24u;
    // NOP
    // 0x38ae28: 0x0  nop
    ctx->pc = 0x38ae28u;
    // NOP
    // 0x38ae2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38AE2Cu;
    {
        const bool branch_taken_0x38ae2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ae2c) {
            ctx->pc = 0x38AE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ae18;
        }
    }
    ctx->pc = 0x38AE34u;
    // 0x38ae34: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x38AE34u;
    SET_GPR_U32(ctx, 31, 0x38AE3Cu);
    ctx->pc = 0x38AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AE34u;
    // 0x38ae38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38AE34u, 0x38AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AE3Cu;
label_38ae3c:
    // 0x38ae3c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x38ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38ae40: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x38ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38ae44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ae48: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x38ae48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38ae4c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x38ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x38ae50: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x38ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_38ae54:
    // 0x38ae54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ae58: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38AE58u;
    {
        const bool branch_taken_0x38ae58 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x38ae58) {
            ctx->pc = 0x38AE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AE58u;
            // 0x38ae5c: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AE84u;
            goto label_38ae84;
        }
    }
    ctx->pc = 0x38AE60u;
    // 0x38ae60: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x38ae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x38ae64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38AE64u;
    {
        const bool branch_taken_0x38ae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE64u;
        // 0x38ae68: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae64) {
            ctx->pc = 0x38AE80u;
            goto label_38ae80;
        }
    }
    ctx->pc = 0x38AE6Cu;
    // 0x38ae6c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x38ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38ae70: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x38ae70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38ae74: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x38ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x38ae78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38AE78u;
    {
        const bool branch_taken_0x38ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE78u;
        // 0x38ae7c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae78) {
            ctx->pc = 0x38AE94u;
            goto label_38ae94;
        }
    }
    ctx->pc = 0x38AE80u;
label_38ae80:
    // 0x38ae80: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x38ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_38ae84:
    // 0x38ae84: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x38ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38ae88: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x38ae88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38ae8c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x38ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x38ae90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x38ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_38ae94:
    // 0x38ae94: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x38ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38ae98: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x38ae98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38ae9c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x38ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38aea0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38aea4: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x38aea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38aea8: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x38aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x38aeac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x38aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x38aeb0: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x38aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x38aeb4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x38AEB4u;
    {
        const bool branch_taken_0x38aeb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x38AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEB4u;
        // 0x38aeb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aeb4) {
            ctx->pc = 0x38AEF0u;
            goto label_38aef0;
        }
    }
    ctx->pc = 0x38AEBCu;
    // 0x38aebc: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x38aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38aec0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x38aec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x38aec4: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x38aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x38aec8: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x38aec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38aecc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x38aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x38aed0: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x38aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x38aed4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x38aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38aed8: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x38aed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38aedc: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x38aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x38aee0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x38aee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38aee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38aee8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38AEE8u;
    {
        const bool branch_taken_0x38aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEE8u;
        // 0x38aeec: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aee8) {
            ctx->pc = 0x38AF2Cu;
            goto label_38af2c;
        }
    }
    ctx->pc = 0x38AEF0u;
label_38aef0:
    // 0x38aef0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38AEF0u;
    {
        const bool branch_taken_0x38aef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x38aef0) {
            ctx->pc = 0x38AEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AEF0u;
            // 0x38aef4: 0x8e0201e0  lw          $v0, 0x1E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AEFCu;
            goto label_38aefc;
        }
    }
    ctx->pc = 0x38AEF8u;
    // 0x38aef8: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x38aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_38aefc:
    // 0x38aefc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x38aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x38af00: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x38af00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x38af04: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x38af04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38af08: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x38af08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38af0c: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x38af0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x38af10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38af14: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x38af14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x38af18: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x38af18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x38af1c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x38af1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38af20: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x38af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x38af24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38af28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x38af28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_38af2c:
    // 0x38af2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38af30:
    // 0x38af30: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38af30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38af34: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x38af34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38af38: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x38af38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38af3c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x38af3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38af40: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x38af40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38af44: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x38af44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38af48: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x38af48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38af4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x38af4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38af50: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38af50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38af54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38af54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38af58: 0x3e00008  jr          $ra
    ctx->pc = 0x38AF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF58u;
        // 0x38af5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AF60u;
}
