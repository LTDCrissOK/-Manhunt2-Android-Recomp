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

// Function: sub_0030BB30
// Address: 0x30bb30 - 0x30bf88
void sub_0030BB30_0x30bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BB30_0x30bb30");
#endif

    switch (ctx->pc) {
        case 0x30bbd0u: goto label_30bbd0;
        case 0x30bbe8u: goto label_30bbe8;
        case 0x30bc04u: goto label_30bc04;
        case 0x30bc70u: goto label_30bc70;
        case 0x30bc8cu: goto label_30bc8c;
        case 0x30bca4u: goto label_30bca4;
        case 0x30bcbcu: goto label_30bcbc;
        case 0x30bcd4u: goto label_30bcd4;
        case 0x30bce8u: goto label_30bce8;
        case 0x30bd00u: goto label_30bd00;
        case 0x30bd10u: goto label_30bd10;
        case 0x30bd20u: goto label_30bd20;
        case 0x30bd34u: goto label_30bd34;
        case 0x30bd44u: goto label_30bd44;
        case 0x30bd60u: goto label_30bd60;
        case 0x30bd78u: goto label_30bd78;
        case 0x30bd90u: goto label_30bd90;
        case 0x30bda8u: goto label_30bda8;
        case 0x30bdbcu: goto label_30bdbc;
        case 0x30bdd4u: goto label_30bdd4;
        case 0x30be94u: goto label_30be94;
        case 0x30bea4u: goto label_30bea4;
        case 0x30beb0u: goto label_30beb0;
        case 0x30bebcu: goto label_30bebc;
        case 0x30bec8u: goto label_30bec8;
        case 0x30bee4u: goto label_30bee4;
        case 0x30bf00u: goto label_30bf00;
        case 0x30bf10u: goto label_30bf10;
        case 0x30bf40u: goto label_30bf40;
        case 0x30bf54u: goto label_30bf54;
        default: break;
    }

    ctx->pc = 0x30bb30u;

    // 0x30bb30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30bb34: 0x3c09005a  lui         $t1, 0x5A
    ctx->pc = 0x30bb34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)90 << 16));
    // 0x30bb38: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x30bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x30bb3c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x30bb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x30bb40: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30bb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb44: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x30bb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x30bb48: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x30bb48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x30bb4c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x30bb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x30bb50: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x30bb50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb54: 0x8d227eb0  lw          $v0, 0x7EB0($t1)
    ctx->pc = 0x30bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5A7EB0u));
    // 0x30bb58: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30bb58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb5c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x30bb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x30bb60: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x30bb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x30bb64: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x30bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x30bb68: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x30bb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x30bb6c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30BB6Cu;
    {
        const bool branch_taken_0x30bb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB6Cu;
        // 0x30bb70: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb6c) {
            ctx->pc = 0x30BBD0u;
            goto label_30bbd0;
        }
    }
    ctx->pc = 0x30BB74u;
    // 0x30bb74: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x30bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x30bb78: 0x3c07005a  lui         $a3, 0x5A
    ctx->pc = 0x30bb78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)90 << 16));
    // 0x30bb7c: 0xc4635b60  lwc1        $f3, 0x5B60($v1)
    ctx->pc = 0x30bb7cu;
    { uint32_t bits = FAST_READ32(0x575B60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30bb80: 0x24625b60  addiu       $v0, $v1, 0x5B60
    ctx->pc = 0x30bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23392));
    // 0x30bb84: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x30bb84u;
    { uint32_t bits = FAST_READ32(0x575B6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30bb88: 0x24e37e80  addiu       $v1, $a3, 0x7E80
    ctx->pc = 0x30bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32384));
    // 0x30bb8c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x30bb8cu;
    { uint32_t bits = FAST_READ32(0x575B64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30bb90: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x30bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x30bb94: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30bb94u;
    { uint32_t bits = FAST_READ32(0x575B68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30bb98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30bb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bb9c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x30bb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A7EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A7EACu, _value); } while (0); }
    // 0x30bba0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30bba4: 0xad267eb0  sw          $a2, 0x7EB0($t1)
    ctx->pc = 0x30bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32432), GPR_U32(ctx, 6));
    // 0x30bba8: 0x2484bb28  addiu       $a0, $a0, -0x44D8
    ctx->pc = 0x30bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949672));
    // 0x30bbac: 0xace07e80  sw          $zero, 0x7E80($a3)
    ctx->pc = 0x30bbacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A7E80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A7E80u, _value); } while (0);
    // 0x30bbb0: 0xe4630020  swc1        $f3, 0x20($v1)
    ctx->pc = 0x30bbb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A7EA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A7EA0u, _value); } while (0); }
    // 0x30bbb4: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x30bbb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A7EA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A7EA4u, _value); } while (0); }
    // 0x30bbb8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x30bbb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5A7EA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A7EA8u, _value); } while (0); }
    // 0x30bbbc: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x30bbbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A7E90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A7E90u, _value); } while (0);
    // 0x30bbc0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30bbc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A7E84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A7E84u, _value); } while (0);
    // 0x30bbc4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x30bbc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5A7E88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A7E88u, _value); } while (0);
    // 0x30bbc8: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x30BBC8u;
    SET_GPR_U32(ctx, 31, 0x30BBD0u);
    ctx->pc = 0x30BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBC8u;
    // 0x30bbcc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x30BBC8u, 0x30BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BBD0u;
label_30bbd0:
    // 0x30bbd0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BBD0u;
    {
        const bool branch_taken_0x30bbd0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBD0u;
        // 0x30bbd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbd0) {
            ctx->pc = 0x30BBE0u;
            goto label_30bbe0;
        }
    }
    ctx->pc = 0x30BBD8u;
    // 0x30bbd8: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x30bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x30bbdc: 0x24547e80  addiu       $s4, $v0, 0x7E80
    ctx->pc = 0x30bbdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32384));
label_30bbe0:
    // 0x30bbe0: 0xc0c9bd4  jal         func_326F50
    ctx->pc = 0x30BBE0u;
    SET_GPR_U32(ctx, 31, 0x30BBE8u);
    ctx->pc = 0x30BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBE0u;
    // 0x30bbe4: 0x2e5600ff  sltiu       $s6, $s2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x326F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326F50u, 0x30BBE0u, 0x30BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BBE8u;
label_30bbe8:
    // 0x30bbe8: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BBE8u;
    {
        const bool branch_taken_0x30bbe8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBE8u;
        // 0x30bbec: 0x121042  srl         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbe8) {
            ctx->pc = 0x30BC04u;
            goto label_30bc04;
        }
    }
    ctx->pc = 0x30BBF0u;
    // 0x30bbf0: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x30bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x30bbf4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x30bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x30bbf8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x30bbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x30bbfc: 0xc0dd1ee  jal         func_3747B8
    ctx->pc = 0x30BBFCu;
    SET_GPR_U32(ctx, 31, 0x30BC04u);
    ctx->pc = 0x30BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBFCu;
    // 0x30bc00: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3747B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3747B8u, 0x30BBFCu, 0x30BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC04u;
label_30bc04:
    // 0x30bc04: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x30bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30bc08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30bc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30bc0c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x30BC0Cu;
    {
        const bool branch_taken_0x30bc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC0Cu;
        // 0x30bc10: 0x26830004  addiu       $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc0c) {
            ctx->pc = 0x30BCF0u;
            goto label_30bcf0;
        }
    }
    ctx->pc = 0x30BC14u;
    // 0x30bc14: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x30bc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x30bc18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30bc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30bc1c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x30bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30bc20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30bc20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30bc24: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30bc24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30bc28: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30bc28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30bc2c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x30bc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30bc30: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x30bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30bc34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30bc34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30bc38: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30bc38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30bc3c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30bc3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30bc40: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x30bc40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30bc44: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30bc48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30bc48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30bc4c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30bc4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30bc50: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30bc50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30bc54: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x30bc54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x30bc58: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x30bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30bc5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30bc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30bc60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30bc60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30bc64: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x30bc64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30bc68: 0xc0e01d8  jal         func_380760
    ctx->pc = 0x30BC68u;
    SET_GPR_U32(ctx, 31, 0x30BC70u);
    ctx->pc = 0x30BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BC68u;
    // 0x30bc6c: 0xa3a20003  sb          $v0, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380760u, 0x30BC68u, 0x30BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC70u;
label_30bc70:
    // 0x30bc70: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x30bc70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30bc74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30bc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30bc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30bc7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc84: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x30BC84u;
    SET_GPR_U32(ctx, 31, 0x30BC8Cu);
    ctx->pc = 0x30BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BC84u;
    // 0x30bc88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x30BC84u, 0x30BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC8Cu;
label_30bc8c:
    // 0x30bc8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30bc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bc94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30bc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30bc98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc9c: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x30BC9Cu;
    SET_GPR_U32(ctx, 31, 0x30BCA4u);
    ctx->pc = 0x30BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BC9Cu;
    // 0x30bca0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x30BC9Cu, 0x30BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BCA4u;
label_30bca4:
    // 0x30bca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bca8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30bca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30bcac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30bcacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30bcb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcb4: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x30BCB4u;
    SET_GPR_U32(ctx, 31, 0x30BCBCu);
    ctx->pc = 0x30BCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BCB4u;
    // 0x30bcb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x30BCB4u, 0x30BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BCBCu;
label_30bcbc:
    // 0x30bcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x30bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30bcc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30bcc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30bcc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bccc: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x30BCCCu;
    SET_GPR_U32(ctx, 31, 0x30BCD4u);
    ctx->pc = 0x30BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BCCCu;
    // 0x30bcd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x30BCCCu, 0x30BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BCD4u;
label_30bcd4:
    // 0x30bcd4: 0x93a60001  lbu         $a2, 0x1($sp)
    ctx->pc = 0x30bcd4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x30bcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcdc: 0x93a70002  lbu         $a3, 0x2($sp)
    ctx->pc = 0x30bcdcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x30bce0: 0xc0de8c2  jal         func_37A308
    ctx->pc = 0x30BCE0u;
    SET_GPR_U32(ctx, 31, 0x30BCE8u);
    ctx->pc = 0x30BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BCE0u;
    // 0x30bce4: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A308u, 0x30BCE0u, 0x30BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BCE8u;
label_30bce8:
    // 0x30bce8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x30BCE8u;
    {
        const bool branch_taken_0x30bce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCE8u;
        // 0x30bcec: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bce8) {
            ctx->pc = 0x30BDC0u;
            goto label_30bdc0;
        }
    }
    ctx->pc = 0x30BCF0u;
label_30bcf0:
    // 0x30bcf0: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30BCF0u;
    {
        const bool branch_taken_0x30bcf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bcf0) {
            ctx->pc = 0x30BD3Cu;
            goto label_30bd3c;
        }
    }
    ctx->pc = 0x30BCF8u;
    // 0x30bcf8: 0xc0c9324  jal         func_324C90
    ctx->pc = 0x30BCF8u;
    SET_GPR_U32(ctx, 31, 0x30BD00u);
    ctx->pc = 0x324C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C90u, 0x30BCF8u, 0x30BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD00u;
label_30bd00:
    // 0x30bd00: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x30bd00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x30bd04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30bd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd08: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x30BD08u;
    SET_GPR_U32(ctx, 31, 0x30BD10u);
    ctx->pc = 0x30BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD08u;
    // 0x30bd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x30BD08u, 0x30BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD10u;
label_30bd10:
    // 0x30bd10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BD10u;
    {
        const bool branch_taken_0x30bd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD10u;
        // 0x30bd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd10) {
            ctx->pc = 0x30BD24u;
            goto label_30bd24;
        }
    }
    ctx->pc = 0x30BD18u;
    // 0x30bd18: 0xc0c4900  jal         func_312400
    ctx->pc = 0x30BD18u;
    SET_GPR_U32(ctx, 31, 0x30BD20u);
    ctx->pc = 0x30BD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD18u;
    // 0x30bd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x30BD18u, 0x30BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD20u;
label_30bd20:
    // 0x30bd20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30bd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30bd24:
    // 0x30bd24: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x30bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x30bd28: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x30bd28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd2c: 0xc0c4f22  jal         func_313C88
    ctx->pc = 0x30BD2Cu;
    SET_GPR_U32(ctx, 31, 0x30BD34u);
    ctx->pc = 0x30BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD2Cu;
    // 0x30bd30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313C88u, 0x30BD2Cu, 0x30BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD34u;
label_30bd34:
    // 0x30bd34: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30BD34u;
    {
        const bool branch_taken_0x30bd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD34u;
        // 0x30bd38: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd34) {
            ctx->pc = 0x30BDC0u;
            goto label_30bdc0;
        }
    }
    ctx->pc = 0x30BD3Cu;
label_30bd3c:
    // 0x30bd3c: 0xc0e01d8  jal         func_380760
    ctx->pc = 0x30BD3Cu;
    SET_GPR_U32(ctx, 31, 0x30BD44u);
    ctx->pc = 0x380760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380760u, 0x30BD3Cu, 0x30BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD44u;
label_30bd44:
    // 0x30bd44: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x30bd44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30bd48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30bd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30bd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30bd50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd58: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x30BD58u;
    SET_GPR_U32(ctx, 31, 0x30BD60u);
    ctx->pc = 0x30BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD58u;
    // 0x30bd5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x30BD58u, 0x30BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD60u;
label_30bd60:
    // 0x30bd60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bd68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30bd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30bd6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd70: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x30BD70u;
    SET_GPR_U32(ctx, 31, 0x30BD78u);
    ctx->pc = 0x30BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD70u;
    // 0x30bd74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x30BD70u, 0x30BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD78u;
label_30bd78:
    // 0x30bd78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30bd80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30bd80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30bd84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd88: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x30BD88u;
    SET_GPR_U32(ctx, 31, 0x30BD90u);
    ctx->pc = 0x30BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD88u;
    // 0x30bd8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x30BD88u, 0x30BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD90u;
label_30bd90:
    // 0x30bd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x30bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30bd98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30bd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30bd9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bda0: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x30BDA0u;
    SET_GPR_U32(ctx, 31, 0x30BDA8u);
    ctx->pc = 0x30BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BDA0u;
    // 0x30bda4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x30BDA0u, 0x30BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BDA8u;
label_30bda8:
    // 0x30bda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bdac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30bdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bdb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30bdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bdb4: 0xc0de8c2  jal         func_37A308
    ctx->pc = 0x30BDB4u;
    SET_GPR_U32(ctx, 31, 0x30BDBCu);
    ctx->pc = 0x30BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BDB4u;
    // 0x30bdb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A308u, 0x30BDB4u, 0x30BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BDBCu;
label_30bdbc:
    // 0x30bdbc: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_30bdc0:
    // 0x30bdc0: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x30bdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x30bdc4: 0x24a5b8f8  addiu       $a1, $a1, -0x4708
    ctx->pc = 0x30bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949112));
    // 0x30bdc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30bdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bdcc: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30BDCCu;
    SET_GPR_U32(ctx, 31, 0x30BDD4u);
    ctx->pc = 0x30BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BDCCu;
    // 0x30bdd0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30BDCCu, 0x30BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BDD4u;
label_30bdd4:
    // 0x30bdd4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x30bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30bdd8: 0x9062bce0  lbu         $v0, -0x4320($v1)
    ctx->pc = 0x30bdd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBCE0u));
    // 0x30bddc: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x30BDDCu;
    {
        const bool branch_taken_0x30bddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDDCu;
        // 0x30bde0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bddc) {
            ctx->pc = 0x30BF24u;
            goto label_30bf24;
        }
    }
    ctx->pc = 0x30BDE4u;
    // 0x30bde4: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x30bde4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bde8: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x30BDE8u;
    {
        const bool branch_taken_0x30bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDE8u;
        // 0x30bdec: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bde8) {
            ctx->pc = 0x30BF24u;
            goto label_30bf24;
        }
    }
    ctx->pc = 0x30BDF0u;
    // 0x30bdf0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x30bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30bdf4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x30bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x30bdf8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x30BDF8u;
    {
        const bool branch_taken_0x30bdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDF8u;
        // 0x30bdfc: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdf8) {
            ctx->pc = 0x30BF20u;
            goto label_30bf20;
        }
    }
    ctx->pc = 0x30BE00u;
    // 0x30be00: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x30be00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x30be04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30be04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30be08: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x30be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30be0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x30be0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30be10: 0x26920020  addiu       $s2, $s4, 0x20
    ctx->pc = 0x30be10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30be14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30be14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30be18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30be18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30be1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30be1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30be20: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30be20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30be24: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30be24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30be28: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x30be28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30be2c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x30be2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30be30: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x30be30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30be34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30be34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30be38: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30be38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30be3c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30be3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30be40: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x30be40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30be44: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x30be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30be48: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x30be48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30be4c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x30be4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30be50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30be50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30be54: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30be54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30be58: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30be58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30be5c: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x30be5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x30be60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x30be60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30be64: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x30be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30be68: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x30be68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30be6c: 0x205001a  div         $zero, $s0, $a1
    ctx->pc = 0x30be6cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30be70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30be70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30be74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30be74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30be78: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x30be78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30be7c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x30be7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x30be80: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30BE80u;
    {
        const bool branch_taken_0x30be80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30be80) {
            ctx->pc = 0x30BE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BE80u;
            // 0x30be84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BE88u;
            goto label_30be88;
        }
    }
    ctx->pc = 0x30BE88u;
label_30be88:
    // 0x30be88: 0x8012  mflo        $s0
    ctx->pc = 0x30be88u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x30be8c: 0xc0e01d8  jal         func_380760
    ctx->pc = 0x30BE8Cu;
    SET_GPR_U32(ctx, 31, 0x30BE94u);
    ctx->pc = 0x380760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380760u, 0x30BE8Cu, 0x30BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE94u;
label_30be94:
    // 0x30be94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30be94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30be98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30be98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30be9c: 0xc0dee34  jal         func_37B8D0
    ctx->pc = 0x30BE9Cu;
    SET_GPR_U32(ctx, 31, 0x30BEA4u);
    ctx->pc = 0x30BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE9Cu;
    // 0x30bea0: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B8D0u, 0x30BE9Cu, 0x30BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEA4u;
label_30bea4:
    // 0x30bea4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x30bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x30bea8: 0xc0dee28  jal         func_37B8A0
    ctx->pc = 0x30BEA8u;
    SET_GPR_U32(ctx, 31, 0x30BEB0u);
    ctx->pc = 0x30BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BEA8u;
    // 0x30beac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B8A0u, 0x30BEA8u, 0x30BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEB0u;
label_30beb0:
    // 0x30beb0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x30beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x30beb4: 0xc0dee40  jal         func_37B900
    ctx->pc = 0x30BEB4u;
    SET_GPR_U32(ctx, 31, 0x30BEBCu);
    ctx->pc = 0x30BEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BEB4u;
    // 0x30beb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B900u, 0x30BEB4u, 0x30BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEBCu;
label_30bebc:
    // 0x30bebc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x30bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x30bec0: 0xc0dee1a  jal         func_37B868
    ctx->pc = 0x30BEC0u;
    SET_GPR_U32(ctx, 31, 0x30BEC8u);
    ctx->pc = 0x30BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BEC0u;
    // 0x30bec4: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B868u, 0x30BEC0u, 0x30BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEC8u;
label_30bec8:
    // 0x30bec8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x30bec8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30becc: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x30beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30bed0: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x30bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30bed4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30bed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bed8: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x30bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x30bedc: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x30BEDCu;
    SET_GPR_U32(ctx, 31, 0x30BEE4u);
    ctx->pc = 0x30BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BEDCu;
    // 0x30bee0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x30BEDCu, 0x30BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEE4u;
label_30bee4:
    // 0x30bee4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x30bee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30bee8: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x30bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30beec: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x30beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x30bef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bef4: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x30bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30bef8: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x30BEF8u;
    SET_GPR_U32(ctx, 31, 0x30BF00u);
    ctx->pc = 0x30BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BEF8u;
    // 0x30befc: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x30BEF8u, 0x30BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF00u;
label_30bf00:
    // 0x30bf00: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x30bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x30bf04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30bf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf08: 0xc0dee0c  jal         func_37B830
    ctx->pc = 0x30BF08u;
    SET_GPR_U32(ctx, 31, 0x30BF10u);
    ctx->pc = 0x30BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF08u;
    // 0x30bf0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B830u, 0x30BF08u, 0x30BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF10u;
label_30bf10:
    // 0x30bf10: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x30bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30bf14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bf18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30BF18u;
    {
        const bool branch_taken_0x30bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF18u;
        // 0x30bf1c: 0xa062bba0  sb          $v0, -0x4460($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294949792), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf18) {
            ctx->pc = 0x30BF28u;
            goto label_30bf28;
        }
    }
    ctx->pc = 0x30BF20u;
label_30bf20:
    // 0x30bf20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_30bf24:
    // 0x30bf24: 0xa040bba0  sb          $zero, -0x4460($v0)
    ctx->pc = 0x30bf24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949792), (uint8_t)GPR_U32(ctx, 0));
label_30bf28:
    // 0x30bf28: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x30bf28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x30bf2c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30bf30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30bf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf34: 0x24a5b8c8  addiu       $a1, $a1, -0x4738
    ctx->pc = 0x30bf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949064));
    // 0x30bf38: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30BF38u;
    SET_GPR_U32(ctx, 31, 0x30BF40u);
    ctx->pc = 0x30BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF38u;
    // 0x30bf3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30BF38u, 0x30BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF40u;
label_30bf40:
    // 0x30bf40: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BF40u;
    {
        const bool branch_taken_0x30bf40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF40u;
        // 0x30bf44: 0xa200bba0  sb          $zero, -0x4460($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4294949792), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf40) {
            ctx->pc = 0x30BF54u;
            goto label_30bf54;
        }
    }
    ctx->pc = 0x30BF48u;
    // 0x30bf48: 0x3c0480ff  lui         $a0, 0x80FF
    ctx->pc = 0x30bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33023 << 16));
    // 0x30bf4c: 0xc0dd1ee  jal         func_3747B8
    ctx->pc = 0x30BF4Cu;
    SET_GPR_U32(ctx, 31, 0x30BF54u);
    ctx->pc = 0x30BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF4Cu;
    // 0x30bf50: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3747B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3747B8u, 0x30BF4Cu, 0x30BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF54u;
label_30bf54:
    // 0x30bf54: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x30bf54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30bf58: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x30bf58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30bf5c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x30bf5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30bf60: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x30bf60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30bf64: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x30bf64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30bf68: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x30bf68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30bf6c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x30bf6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30bf70: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x30bf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30bf74: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x30bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30bf78: 0x3e00008  jr          $ra
    ctx->pc = 0x30BF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF78u;
        // 0x30bf7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BF80u;
    // 0x30bf80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x30bf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30bf84: 0x0  nop
    ctx->pc = 0x30bf84u;
    // NOP
    ctx->pc = 0x30bf88u;
}
