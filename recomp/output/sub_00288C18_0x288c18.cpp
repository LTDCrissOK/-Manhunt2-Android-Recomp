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

// Function: sub_00288C18
// Address: 0x288c18 - 0x289180
void sub_00288C18_0x288c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288C18_0x288c18");
#endif

    switch (ctx->pc) {
        case 0x288c48u: goto label_288c48;
        case 0x288d04u: goto label_288d04;
        case 0x288d1cu: goto label_288d1c;
        case 0x288d34u: goto label_288d34;
        case 0x288d54u: goto label_288d54;
        case 0x288e28u: goto label_288e28;
        case 0x288e40u: goto label_288e40;
        case 0x288e58u: goto label_288e58;
        case 0x288e8cu: goto label_288e8c;
        case 0x288ea4u: goto label_288ea4;
        case 0x288eb8u: goto label_288eb8;
        case 0x288ec0u: goto label_288ec0;
        case 0x288f20u: goto label_288f20;
        case 0x288f38u: goto label_288f38;
        case 0x288f50u: goto label_288f50;
        case 0x288f70u: goto label_288f70;
        case 0x288fc0u: goto label_288fc0;
        case 0x288fd0u: goto label_288fd0;
        case 0x288ff8u: goto label_288ff8;
        case 0x289010u: goto label_289010;
        case 0x289028u: goto label_289028;
        case 0x289048u: goto label_289048;
        case 0x289050u: goto label_289050;
        case 0x289070u: goto label_289070;
        case 0x289088u: goto label_289088;
        case 0x28909cu: goto label_28909c;
        case 0x2890c0u: goto label_2890c0;
        case 0x2890d8u: goto label_2890d8;
        case 0x2890f0u: goto label_2890f0;
        case 0x289110u: goto label_289110;
        case 0x289134u: goto label_289134;
        case 0x289150u: goto label_289150;
        case 0x289158u: goto label_289158;
        default: break;
    }

    ctx->pc = 0x288c18u;

    // 0x288c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x288c1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x288c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x288c20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288c24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x288c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x288c28: 0x2450a4e8  addiu       $s0, $v0, -0x5B18
    ctx->pc = 0x288c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943976));
    // 0x288c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x288c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x288c30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x288c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x288c34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x288c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x288c38: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x288c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x288c3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x288c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x288c40: 0xc076100  jal         func_1D8400
    ctx->pc = 0x288C40u;
    SET_GPR_U32(ctx, 31, 0x288C48u);
    ctx->pc = 0x288C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C40u;
    // 0x288c44: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x288C40u, 0x288C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C48u;
label_288c48:
    // 0x288c48: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288C48u;
    {
        const bool branch_taken_0x288c48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x288C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C48u;
        // 0x288c4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c48) {
            ctx->pc = 0x288C64u;
            goto label_288c64;
        }
    }
    ctx->pc = 0x288C50u;
    // 0x288c50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x288c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288c54: 0x0  nop
    ctx->pc = 0x288c54u;
    // NOP
    // 0x288c58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x288c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x288c5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x288C5Cu;
    {
        const bool branch_taken_0x288c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288c5c) {
            ctx->pc = 0x288C7Cu;
            goto label_288c7c;
        }
    }
    ctx->pc = 0x288C64u;
label_288c64:
    // 0x288c64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x288c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x288c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x288c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x288c6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x288c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288c70: 0x0  nop
    ctx->pc = 0x288c70u;
    // NOP
    // 0x288c74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x288c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x288c78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x288c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_288c7c:
    // 0x288c7c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x288c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x288c80: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x288c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x288c84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288c88: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x288c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x288c8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x288c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288c90: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x288c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x288c94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x288c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x288c98: 0x8c54a4fc  lw          $s4, -0x5B04($v0)
    ctx->pc = 0x288c98u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3FA4FCu));
    // 0x288c9c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x288c9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ca0: 0x2665fff7  addiu       $a1, $s3, -0x9
    ctx->pc = 0x288ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x288ca4: 0xac832b38  sw          $v1, 0x2B38($a0)
    ctx->pc = 0x288ca4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x482B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B38u, _value); } while (0);
    // 0x288ca8: 0x2ca2002a  sltiu       $v0, $a1, 0x2A
    ctx->pc = 0x288ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
    // 0x288cac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x288cacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x288cb0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x288cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x288cb4: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x288CB4u;
    {
        const bool branch_taken_0x288cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288CB4u;
        // 0x288cb8: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288cb4) {
            ctx->pc = 0x289110u;
            goto label_289110;
        }
    }
    ctx->pc = 0x288CBCu;
    // 0x288cbc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x288cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x288cc0: 0x2442abb0  addiu       $v0, $v0, -0x5450
    ctx->pc = 0x288cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945712));
    // 0x288cc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x288cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x288cc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x288cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288ccc: 0x800008  jr          $a0
    ctx->pc = 0x288CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x288CD4u: goto label_288cd4;
            case 0x288CE8u: goto label_288ce8;
            case 0x288D5Cu: goto label_288d5c;
            case 0x288D70u: goto label_288d70;
            case 0x288D84u: goto label_288d84;
            case 0x288D98u: goto label_288d98;
            case 0x288DACu: goto label_288dac;
            case 0x288DC0u: goto label_288dc0;
            case 0x288DD4u: goto label_288dd4;
            case 0x288DE8u: goto label_288de8;
            case 0x288DFCu: goto label_288dfc;
            case 0x288EC8u: goto label_288ec8;
            case 0x288EDCu: goto label_288edc;
            case 0x288EF0u: goto label_288ef0;
            case 0x288F04u: goto label_288f04;
            case 0x288F78u: goto label_288f78;
            case 0x288F8Cu: goto label_288f8c;
            case 0x2890A4u: goto label_2890a4;
            case 0x289110u: goto label_289110;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288CCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x288CD4u;
label_288cd4:
    // 0x288cd4: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x288cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x288cd8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288cdc: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288ce0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288CE0u;
    {
        const bool branch_taken_0x288ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288CE0u;
        // 0x288ce4: 0x24a5aad0  addiu       $a1, $a1, -0x5530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ce0) {
            ctx->pc = 0x288CF8u;
            goto label_288cf8;
        }
    }
    ctx->pc = 0x288CE8u;
label_288ce8:
    // 0x288ce8: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x288ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x288cec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288cf0: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288cf4: 0x24a5aae8  addiu       $a1, $a1, -0x5518
    ctx->pc = 0x288cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945512));
label_288cf8:
    // 0x288cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cfc: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288CFCu;
    SET_GPR_U32(ctx, 31, 0x288D04u);
    ctx->pc = 0x288D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288CFCu;
    // 0x288d00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288CFCu, 0x288D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D04u;
label_288d04:
    // 0x288d04: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288d08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x288d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d0c: 0x24a5aad8  addiu       $a1, $a1, -0x5528
    ctx->pc = 0x288d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945496));
    // 0x288d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d14: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288D14u;
    SET_GPR_U32(ctx, 31, 0x288D1Cu);
    ctx->pc = 0x288D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D14u;
    // 0x288d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288D14u, 0x288D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D1Cu;
label_288d1c:
    // 0x288d1c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288d20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d28: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x288d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x288d2c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288D2Cu;
    SET_GPR_U32(ctx, 31, 0x288D34u);
    ctx->pc = 0x288D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D2Cu;
    // 0x288d30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288D2Cu, 0x288D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D34u;
label_288d34:
    // 0x288d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x288d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x288d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d44: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x288d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288d48: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x288d48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288d4c: 0xc0a1ba0  jal         func_286E80
    ctx->pc = 0x288D4Cu;
    SET_GPR_U32(ctx, 31, 0x288D54u);
    ctx->pc = 0x288D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D4Cu;
    // 0x288d50: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E80u, 0x288D4Cu, 0x288D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D54u;
label_288d54:
    // 0x288d54: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x288D54u;
    {
        const bool branch_taken_0x288d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D54u;
        // 0x288d58: 0xaeb3a4fc  sw          $s3, -0x5B04($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294943996), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d54) {
            ctx->pc = 0x289114u;
            goto label_289114;
        }
    }
    ctx->pc = 0x288D5Cu;
label_288d5c:
    // 0x288d5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x288d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x288d60: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288d64: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x288d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x288d68: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x288D68u;
    {
        const bool branch_taken_0x288d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D68u;
        // 0x288d6c: 0x24a5aaf0  addiu       $a1, $a1, -0x5510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d68) {
            ctx->pc = 0x288FB8u;
            goto label_288fb8;
        }
    }
    ctx->pc = 0x288D70u;
label_288d70:
    // 0x288d70: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x288d70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x288d74: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288d78: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288d7c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x288D7Cu;
    {
        const bool branch_taken_0x288d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D7Cu;
        // 0x288d80: 0x24a5aaf8  addiu       $a1, $a1, -0x5508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d7c) {
            ctx->pc = 0x288F14u;
            goto label_288f14;
        }
    }
    ctx->pc = 0x288D84u;
label_288d84:
    // 0x288d84: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x288d84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x288d88: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288d8c: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288d90: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x288D90u;
    {
        const bool branch_taken_0x288d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D90u;
        // 0x288d94: 0x24a5ab00  addiu       $a1, $a1, -0x5500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d90) {
            ctx->pc = 0x288F14u;
            goto label_288f14;
        }
    }
    ctx->pc = 0x288D98u;
label_288d98:
    // 0x288d98: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x288d98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x288d9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288da0: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288da4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x288DA4u;
    {
        const bool branch_taken_0x288da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DA4u;
        // 0x288da8: 0x24a5ab08  addiu       $a1, $a1, -0x54F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288da4) {
            ctx->pc = 0x288F14u;
            goto label_288f14;
        }
    }
    ctx->pc = 0x288DACu;
label_288dac:
    // 0x288dac: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x288dacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x288db0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288db4: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288db8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x288DB8u;
    {
        const bool branch_taken_0x288db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DB8u;
        // 0x288dbc: 0x24a5ab10  addiu       $a1, $a1, -0x54F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288db8) {
            ctx->pc = 0x288F14u;
            goto label_288f14;
        }
    }
    ctx->pc = 0x288DC0u;
label_288dc0:
    // 0x288dc0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x288dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x288dc4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288dc8: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x288dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x288dcc: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x288DCCu;
    {
        const bool branch_taken_0x288dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DCCu;
        // 0x288dd0: 0x24a5ab18  addiu       $a1, $a1, -0x54E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dcc) {
            ctx->pc = 0x288FB8u;
            goto label_288fb8;
        }
    }
    ctx->pc = 0x288DD4u;
label_288dd4:
    // 0x288dd4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x288dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x288dd8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288ddc: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x288ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x288de0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x288DE0u;
    {
        const bool branch_taken_0x288de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DE0u;
        // 0x288de4: 0x24a5ab20  addiu       $a1, $a1, -0x54E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288de0) {
            ctx->pc = 0x288FB8u;
            goto label_288fb8;
        }
    }
    ctx->pc = 0x288DE8u;
label_288de8:
    // 0x288de8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x288de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x288dec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288df0: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x288df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x288df4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x288DF4u;
    {
        const bool branch_taken_0x288df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DF4u;
        // 0x288df8: 0x24a5ab28  addiu       $a1, $a1, -0x54D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288df4) {
            ctx->pc = 0x288FB8u;
            goto label_288fb8;
        }
    }
    ctx->pc = 0x288DFCu;
label_288dfc:
    // 0x288dfc: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x288dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x288e00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x288e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288e04: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x288e04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x520578u));
    // 0x288e08: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x288E08u;
    {
        const bool branch_taken_0x288e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x288E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E08u;
        // 0x288e0c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e08) {
            ctx->pc = 0x288E74u;
            goto label_288e74;
        }
    }
    ctx->pc = 0x288E10u;
    // 0x288e10: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288e14: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288e18: 0x24a5ab30  addiu       $a1, $a1, -0x54D0
    ctx->pc = 0x288e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945584));
    // 0x288e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e20: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288E20u;
    SET_GPR_U32(ctx, 31, 0x288E28u);
    ctx->pc = 0x288E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E20u;
    // 0x288e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288E20u, 0x288E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E28u;
label_288e28:
    // 0x288e28: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288e2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x288e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e30: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x288e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x288e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e38: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288E38u;
    SET_GPR_U32(ctx, 31, 0x288E40u);
    ctx->pc = 0x288E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E38u;
    // 0x288e3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288E38u, 0x288E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E40u;
label_288e40:
    // 0x288e40: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288e44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e4c: 0x24a5aad8  addiu       $a1, $a1, -0x5528
    ctx->pc = 0x288e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945496));
    // 0x288e50: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288E50u;
    SET_GPR_U32(ctx, 31, 0x288E58u);
    ctx->pc = 0x288E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E50u;
    // 0x288e54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288E50u, 0x288E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E58u;
label_288e58:
    // 0x288e58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x288e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e60: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x288e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e68: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x288e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288e6c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x288E6Cu;
    {
        const bool branch_taken_0x288e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E6Cu;
        // 0x288e70: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e6c) {
            ctx->pc = 0x289040u;
            goto label_289040;
        }
    }
    ctx->pc = 0x288E74u;
label_288e74:
    // 0x288e74: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288e78: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288e7c: 0x24a5ab38  addiu       $a1, $a1, -0x54C8
    ctx->pc = 0x288e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945592));
    // 0x288e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e84: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288E84u;
    SET_GPR_U32(ctx, 31, 0x288E8Cu);
    ctx->pc = 0x288E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E84u;
    // 0x288e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288E84u, 0x288E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E8Cu;
label_288e8c:
    // 0x288e8c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288e90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e98: 0x24a5ab40  addiu       $a1, $a1, -0x54C0
    ctx->pc = 0x288e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945600));
    // 0x288e9c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288E9Cu;
    SET_GPR_U32(ctx, 31, 0x288EA4u);
    ctx->pc = 0x288EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E9Cu;
    // 0x288ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288E9Cu, 0x288EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288EA4u;
label_288ea4:
    // 0x288ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ea8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x288ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288eb0: 0xc0a1b8a  jal         func_286E28
    ctx->pc = 0x288EB0u;
    SET_GPR_U32(ctx, 31, 0x288EB8u);
    ctx->pc = 0x288EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288EB0u;
    // 0x288eb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E28u, 0x288EB0u, 0x288EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288EB8u;
label_288eb8:
    // 0x288eb8: 0xc0a1bba  jal         func_286EE8
    ctx->pc = 0x288EB8u;
    SET_GPR_U32(ctx, 31, 0x288EC0u);
    ctx->pc = 0x286EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286EE8u, 0x288EB8u, 0x288EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288EC0u;
label_288ec0:
    // 0x288ec0: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x288EC0u;
    {
        const bool branch_taken_0x288ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EC0u;
        // 0x288ec4: 0xaeb3a4fc  sw          $s3, -0x5B04($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294943996), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ec0) {
            ctx->pc = 0x289114u;
            goto label_289114;
        }
    }
    ctx->pc = 0x288EC8u;
label_288ec8:
    // 0x288ec8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x288ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x288ecc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288ed0: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x288ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x288ed4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x288ED4u;
    {
        const bool branch_taken_0x288ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288ED4u;
        // 0x288ed8: 0x24a5ab48  addiu       $a1, $a1, -0x54B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ed4) {
            ctx->pc = 0x288FB8u;
            goto label_288fb8;
        }
    }
    ctx->pc = 0x288EDCu;
label_288edc:
    // 0x288edc: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x288edcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x288ee0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288ee4: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288ee8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x288EE8u;
    {
        const bool branch_taken_0x288ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EE8u;
        // 0x288eec: 0x24a5ab50  addiu       $a1, $a1, -0x54B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ee8) {
            ctx->pc = 0x288F14u;
            goto label_288f14;
        }
    }
    ctx->pc = 0x288EF0u;
label_288ef0:
    // 0x288ef0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x288ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x288ef4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288ef8: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x288ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x288efc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x288EFCu;
    {
        const bool branch_taken_0x288efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EFCu;
        // 0x288f00: 0x24a5ab58  addiu       $a1, $a1, -0x54A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288efc) {
            ctx->pc = 0x288FB8u;
            goto label_288fb8;
        }
    }
    ctx->pc = 0x288F04u;
label_288f04:
    // 0x288f04: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x288f04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x288f08: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288f0c: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288f10: 0x24a5ab60  addiu       $a1, $a1, -0x54A0
    ctx->pc = 0x288f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945632));
label_288f14:
    // 0x288f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f18: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288F18u;
    SET_GPR_U32(ctx, 31, 0x288F20u);
    ctx->pc = 0x288F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F18u;
    // 0x288f1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288F18u, 0x288F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F20u;
label_288f20:
    // 0x288f20: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288f24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x288f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f28: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x288f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x288f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f30: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288F30u;
    SET_GPR_U32(ctx, 31, 0x288F38u);
    ctx->pc = 0x288F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F30u;
    // 0x288f34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288F30u, 0x288F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F38u;
label_288f38:
    // 0x288f38: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f44: 0x24a5aad8  addiu       $a1, $a1, -0x5528
    ctx->pc = 0x288f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945496));
    // 0x288f48: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288F48u;
    SET_GPR_U32(ctx, 31, 0x288F50u);
    ctx->pc = 0x288F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F48u;
    // 0x288f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288F48u, 0x288F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F50u;
label_288f50:
    // 0x288f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x288f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x288f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f60: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x288f60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288f64: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x288f64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288f68: 0xc0a1ba0  jal         func_286E80
    ctx->pc = 0x288F68u;
    SET_GPR_U32(ctx, 31, 0x288F70u);
    ctx->pc = 0x288F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F68u;
    // 0x288f6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E80u, 0x288F68u, 0x288F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F70u;
label_288f70:
    // 0x288f70: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x288F70u;
    {
        const bool branch_taken_0x288f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F70u;
        // 0x288f74: 0xaeb3a4fc  sw          $s3, -0x5B04($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294943996), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f70) {
            ctx->pc = 0x289114u;
            goto label_289114;
        }
    }
    ctx->pc = 0x288F78u;
label_288f78:
    // 0x288f78: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x288f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x288f7c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288f80: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x288f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x288f84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x288F84u;
    {
        const bool branch_taken_0x288f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F84u;
        // 0x288f88: 0x24a5ab68  addiu       $a1, $a1, -0x5498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f84) {
            ctx->pc = 0x288FB8u;
            goto label_288fb8;
        }
    }
    ctx->pc = 0x288F8Cu;
label_288f8c:
    // 0x288f8c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x288f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x288f90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x288f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x288f94: 0x8c440578  lw          $a0, 0x578($v0)
    ctx->pc = 0x288f94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x520578u));
    // 0x288f98: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x288F98u;
    {
        const bool branch_taken_0x288f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x288F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F98u;
        // 0x288f9c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f98) {
            ctx->pc = 0x288FA8u;
            goto label_288fa8;
        }
    }
    ctx->pc = 0x288FA0u;
    // 0x288fa0: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x288FA0u;
    {
        const bool branch_taken_0x288fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x288FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FA0u;
        // 0x288fa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fa0) {
            ctx->pc = 0x288FD8u;
            goto label_288fd8;
        }
    }
    ctx->pc = 0x288FA8u;
label_288fa8:
    // 0x288fa8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x288fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x288fac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288fb0: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x288fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x288fb4: 0x24a5ab70  addiu       $a1, $a1, -0x5490
    ctx->pc = 0x288fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945648));
label_288fb8:
    // 0x288fb8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288FB8u;
    SET_GPR_U32(ctx, 31, 0x288FC0u);
    ctx->pc = 0x288FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288FB8u;
    // 0x288fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288FB8u, 0x288FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FC0u;
label_288fc0:
    // 0x288fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x288fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fc8: 0xc0a1b70  jal         func_286DC0
    ctx->pc = 0x288FC8u;
    SET_GPR_U32(ctx, 31, 0x288FD0u);
    ctx->pc = 0x288FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288FC8u;
    // 0x288fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286DC0u, 0x288FC8u, 0x288FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FD0u;
label_288fd0:
    // 0x288fd0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x288FD0u;
    {
        const bool branch_taken_0x288fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FD0u;
        // 0x288fd4: 0xaeb3a4fc  sw          $s3, -0x5B04($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294943996), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fd0) {
            ctx->pc = 0x289114u;
            goto label_289114;
        }
    }
    ctx->pc = 0x288FD8u;
label_288fd8:
    // 0x288fd8: 0x1482001f  bne         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x288FD8u;
    {
        const bool branch_taken_0x288fd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x288FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FD8u;
        // 0x288fdc: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fd8) {
            ctx->pc = 0x289058u;
            goto label_289058;
        }
    }
    ctx->pc = 0x288FE0u;
    // 0x288fe0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288fe4: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x288fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x288fe8: 0x24a5ab78  addiu       $a1, $a1, -0x5488
    ctx->pc = 0x288fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945656));
    // 0x288fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ff0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288FF0u;
    SET_GPR_U32(ctx, 31, 0x288FF8u);
    ctx->pc = 0x288FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288FF0u;
    // 0x288ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288FF0u, 0x288FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FF8u;
label_288ff8:
    // 0x288ff8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288ffc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x288ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289000: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x289000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x289004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289008: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289008u;
    SET_GPR_U32(ctx, 31, 0x289010u);
    ctx->pc = 0x28900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289008u;
    // 0x28900c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289008u, 0x289010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289010u;
label_289010:
    // 0x289010: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28901c: 0x24a5aad8  addiu       $a1, $a1, -0x5528
    ctx->pc = 0x28901cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945496));
    // 0x289020: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289020u;
    SET_GPR_U32(ctx, 31, 0x289028u);
    ctx->pc = 0x289024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289020u;
    // 0x289024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289020u, 0x289028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289028u;
label_289028:
    // 0x289028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28902c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28902cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289030: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x289030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289038: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x289038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28903c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28903cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289040:
    // 0x289040: 0xc0a1ba0  jal         func_286E80
    ctx->pc = 0x289040u;
    SET_GPR_U32(ctx, 31, 0x289048u);
    ctx->pc = 0x289044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289040u;
    // 0x289044: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E80u, 0x289040u, 0x289048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289048u;
label_289048:
    // 0x289048: 0xc0a1bba  jal         func_286EE8
    ctx->pc = 0x289048u;
    SET_GPR_U32(ctx, 31, 0x289050u);
    ctx->pc = 0x286EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286EE8u, 0x289048u, 0x289050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289050u;
label_289050:
    // 0x289050: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x289050u;
    {
        const bool branch_taken_0x289050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289050u;
        // 0x289054: 0xaeb3a4fc  sw          $s3, -0x5B04($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294943996), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289050) {
            ctx->pc = 0x289114u;
            goto label_289114;
        }
    }
    ctx->pc = 0x289058u;
label_289058:
    // 0x289058: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28905c: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x28905cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x289060: 0x24a5ab80  addiu       $a1, $a1, -0x5480
    ctx->pc = 0x289060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945664));
    // 0x289064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289068: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289068u;
    SET_GPR_U32(ctx, 31, 0x289070u);
    ctx->pc = 0x28906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289068u;
    // 0x28906c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289068u, 0x289070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289070u;
label_289070:
    // 0x289070: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289074: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28907c: 0x24a5ab40  addiu       $a1, $a1, -0x54C0
    ctx->pc = 0x28907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945600));
    // 0x289080: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289080u;
    SET_GPR_U32(ctx, 31, 0x289088u);
    ctx->pc = 0x289084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289080u;
    // 0x289084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289080u, 0x289088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289088u;
label_289088:
    // 0x289088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28908c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28908cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289094: 0xc0a1b8a  jal         func_286E28
    ctx->pc = 0x289094u;
    SET_GPR_U32(ctx, 31, 0x28909Cu);
    ctx->pc = 0x289098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289094u;
    // 0x289098: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E28u, 0x289094u, 0x28909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28909Cu;
label_28909c:
    // 0x28909c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x28909Cu;
    {
        const bool branch_taken_0x28909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28909Cu;
        // 0x2890a0: 0xaeb3a4fc  sw          $s3, -0x5B04($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294943996), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28909c) {
            ctx->pc = 0x289114u;
            goto label_289114;
        }
    }
    ctx->pc = 0x2890A4u;
label_2890a4:
    // 0x2890a4: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2890a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x2890a8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2890a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2890ac: 0x26104ec0  addiu       $s0, $s0, 0x4EC0
    ctx->pc = 0x2890acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    // 0x2890b0: 0x24a5aae8  addiu       $a1, $a1, -0x5518
    ctx->pc = 0x2890b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945512));
    // 0x2890b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2890b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890b8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2890B8u;
    SET_GPR_U32(ctx, 31, 0x2890C0u);
    ctx->pc = 0x2890BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2890B8u;
    // 0x2890bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2890B8u, 0x2890C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890C0u;
label_2890c0:
    // 0x2890c0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2890c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2890c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2890c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890c8: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x2890c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x2890cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2890ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890d0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2890D0u;
    SET_GPR_U32(ctx, 31, 0x2890D8u);
    ctx->pc = 0x2890D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2890D0u;
    // 0x2890d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2890D0u, 0x2890D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890D8u;
label_2890d8:
    // 0x2890d8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2890d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2890dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2890dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2890e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890e4: 0x24a5aad8  addiu       $a1, $a1, -0x5528
    ctx->pc = 0x2890e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945496));
    // 0x2890e8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2890E8u;
    SET_GPR_U32(ctx, 31, 0x2890F0u);
    ctx->pc = 0x2890ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2890E8u;
    // 0x2890ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2890E8u, 0x2890F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890F0u;
label_2890f0:
    // 0x2890f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2890f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2890f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2890f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2890fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289100: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x289100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289104: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x289104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289108: 0xc0a1ba0  jal         func_286E80
    ctx->pc = 0x289108u;
    SET_GPR_U32(ctx, 31, 0x289110u);
    ctx->pc = 0x28910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289108u;
    // 0x28910c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E80u, 0x289108u, 0x289110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289110u;
label_289110:
    // 0x289110: 0xaeb3a4fc  sw          $s3, -0x5B04($s5)
    ctx->pc = 0x289110u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294943996), GPR_U32(ctx, 19));
label_289114:
    // 0x289114: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x289114u;
    {
        const bool branch_taken_0x289114 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x289118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289114u;
        // 0x289118: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289114) {
            ctx->pc = 0x28913Cu;
            goto label_28913c;
        }
    }
    ctx->pc = 0x28911Cu;
    // 0x28911c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28911cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289120: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x289120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289124: 0x24a5ab88  addiu       $a1, $a1, -0x5478
    ctx->pc = 0x289124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945672));
    // 0x289128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28912c: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x28912Cu;
    SET_GPR_U32(ctx, 31, 0x289134u);
    ctx->pc = 0x289130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28912Cu;
    // 0x289130: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x28912Cu, 0x289134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289134u;
label_289134:
    // 0x289134: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x289134u;
    {
        const bool branch_taken_0x289134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289134) {
            ctx->pc = 0x289150u;
            goto label_289150;
        }
    }
    ctx->pc = 0x28913Cu;
label_28913c:
    // 0x28913c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28913cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289140: 0x24a5ab98  addiu       $a1, $a1, -0x5468
    ctx->pc = 0x289140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945688));
    // 0x289144: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289148: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x289148u;
    SET_GPR_U32(ctx, 31, 0x289150u);
    ctx->pc = 0x28914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289148u;
    // 0x28914c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x289148u, 0x289150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289150u;
label_289150:
    // 0x289150: 0xc0d9a30  jal         func_3668C0
    ctx->pc = 0x289150u;
    SET_GPR_U32(ctx, 31, 0x289158u);
    ctx->pc = 0x3668C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3668C0u, 0x289150u, 0x289158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289158u;
label_289158:
    // 0x289158: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x289158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28915c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28915cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x289160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x289164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289168: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x289168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28916c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28916cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289170: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x289170u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x289174: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x289174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289178: 0x3e00008  jr          $ra
    ctx->pc = 0x289178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289178u;
        // 0x28917c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289180u;
}
